#include "stored_map.h"
#include "nvs/eeprom_config.h"
#include "esp_heap_caps.h"
#include "esp_check.h"

StoredTcuMap::StoredTcuMap(const char *eeprom_key_name,
                           const uint16_t map_element_count,
                           const int16_t *x_headers,
                           const int16_t *y_headers,
                           uint16_t x_size,
                           uint16_t y_size,
                           const int16_t *default_map) : TcuMap(x_size,
                                                                y_size,
                                                                x_headers,
                                                                y_headers)
{
    this->default_map = default_map;
    if ((x_size * y_size) == map_element_count)
    {
        int16_t *dest = static_cast<int16_t *>(heap_caps_malloc(map_element_count * sizeof(int16_t), MALLOC_CAP_SPIRAM));
        if (nullptr != dest)
        {
            this->init_state = EEPROM::read_nvs_map_data(eeprom_key_name, dest, default_map, map_element_count);
            if (this->init_state == ESP_OK) {
                if (this->add_data(dest, map_element_count))
                {
                    // Everything OK!
		            this->map_element_count = map_element_count;
                    this->map_name = eeprom_key_name;
                    this->init_state = ESP_OK;
                }
                else
                {
                    ESP_LOGE("STO_MAP", "Cannot Load Stored map %s! Map add data failed!", eeprom_key_name);
                    this->init_state = ESP_ERR_INVALID_ARG; // Only if dest is nullptr
                }
            }
        }
        else
        {
            ESP_LOGE("STO_MAP", "Cannot Load Stored map %s! Internal map allocation failed!", eeprom_key_name);
            this->init_state = ESP_ERR_NO_MEM;
        }
        heap_caps_free(dest);
    }
    else
    {
        ESP_LOGE("STO_MAP", "Cannot Load Stored map %s! Map size is, but X and Y headers (%d,%d) make %d elements!", eeprom_key_name, x_size, y_size, x_size * y_size);
        this->init_state = ESP_ERR_INVALID_SIZE;
    }
}

esp_err_t StoredTcuMap::init_status(void) const
{
    return this->init_state;
}

/**
 * @brief Save new map contents to EEPROM (This will mean next TCU load will use the new map)
 */
esp_err_t StoredTcuMap::save_to_eeprom(void)
{
    return EEPROM::write_nvs_map_data(this->map_name, this->get_current_data(), this->map_element_count);
}

/**
 * @brief Replace map contents with new data (Keeping it in memory, call `save_to_eeprom` to write it to the TCU's EEPROM)
 * Note. This is a temporary replace. If you power the car down, changes made will be lost unless they
 * are written to EEPROM. This also acts as a failsafe in the event of a bad map edit, just reboot the car!
 */
esp_err_t StoredTcuMap::replace_map_content(int16_t *new_data, uint16_t content_len)
{
    esp_err_t result = ESP_OK;
    if (content_len == (this->map_element_count))
    {
        if(!this->add_data(new_data, this->map_element_count)) {
            result = ESP_ERR_INVALID_STATE;
        }
    }
    else
    {
        result = ESP_ERR_NVS_INVALID_LENGTH;
    }
    return result;
}

/**
 * @brief Reloads the previously saved map from EEPROM into the map (Undo function)
 */
esp_err_t StoredTcuMap::reload_from_eeprom(void)
{
    return this->read_from_eeprom(this->map_name, this->map_element_count);
}

/**
 * @brief Resets the map data to the stock map from the TCU firmware (maps.cpp)
 * THIS RESETS THE MAP TO FIRMWARE DEFAULT - ALL CHANGES WILL BE LOST!
 */
// bool StoredTcuMap::reset_from_default_eeprom(void)
// {
//     return this->add_data(const_cast<int16_t *>(this->default_map), this->map_element_count);
// }

esp_err_t StoredTcuMap::read_from_eeprom(const char *key_name, uint16_t expected_size)
{
    esp_err_t ret;
    bool mem_is_allocated = this->allocate_ok();
    if (mem_is_allocated)
    {
        int16_t *dest = static_cast<int16_t *>(heap_caps_malloc(expected_size * sizeof(int16_t), MALLOC_CAP_SPIRAM));
        if (dest != nullptr)
        {
            ret = EEPROM::read_nvs_map_data(key_name, dest, this->default_map, expected_size);
            if (ret != ESP_OK)
            {
                if(!this->add_data(dest, expected_size)) {
                    ret = ESP_ERR_INVALID_ARG;
                }
            }
        }
        else
        {
            ESP_LOGE("STO_MAP", "Read from eeprom failed (Cannot allocate dest array)");
            ret = ESP_ERR_NO_MEM;
        }
        heap_caps_free(dest);
    }
    else
    {
        ESP_LOGE("STO_MAP", "Stored map has not been loaded! Internal map allocation failed!");
        ret = ESP_ERR_NO_MEM;
    }
    return ret;
}

uint16_t StoredTcuMap::get_map_element_count(void)
{
    return this->map_element_count;
}

const int16_t *StoredTcuMap::get_default_map_data(void)
{
    return this->default_map;
}

const char *StoredTcuMap::get_map_name(void)
{
    return this->map_name;
}

int16_t *StoredTcuMap::get_current_eeprom_map_data(void)
{
    bool succesful_allocation = false;
    int16_t *dest = static_cast<int16_t *>(heap_caps_malloc(this->map_element_count * sizeof(int16_t), MALLOC_CAP_SPIRAM));
    if (nullptr != dest)
    {
        succesful_allocation = true;
        if (EEPROM::read_nvs_map_data(this->map_name, dest, this->default_map, this->map_element_count) != ESP_OK)
        {
            heap_caps_free(dest);
            succesful_allocation = false;            
        }
    }
    return succesful_allocation ? dest : nullptr;
}