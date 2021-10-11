
#ifndef __SOLENOID_H_
#define __SOLENOID_H_

#include <stdint.h>
#include "driver/gpio.h"
#include "driver/ledc.h"
#include <freertos/FreeRTOS.h>
#include "freertos/task.h"
#include <driver/i2s.h>
#include <soc/syscon_reg.h>
#include <driver/adc.h>
#include <esp_event.h>

struct FeedbackConfig
{
    gpio_num_t pin;
    adc1_channel_t channel;
    uint8_t readings_id;
};

class Solenoid
{
public:
    Solenoid(const char *name, gpio_num_t pwm_pin, FeedbackConfig f_config, uint32_t frequency, uint16_t start_pwm, ledc_channel_t channel, ledc_timer_t timer);
    void write_pwm(uint8_t pwm);
    /**
     * Writes PWM signal to the solenoid using percentages.
     * 0 = 0%
     * 1000 = 100%
     */
    void write_pwm_percent(uint16_t percent);
    uint16_t get_pwm();
    uint16_t get_current_estimate();
    bool init_ok();
    uint16_t get_vref();
    void __set_current_internal(uint16_t c);
    void __set_vref(uint16_t ref);
private:
    bool ready;
    const char *name;
    uint16_t curr_pwm;
    uint16_t vref;
    bool vref_calibrated;
    ledc_channel_t channel;
    ledc_timer_t timer;
    FeedbackConfig feedback_cfg;
    portMUX_TYPE current_mutex;
    uint16_t current;
};

bool init_all_solenoids();

extern Solenoid *sol_y3;
extern Solenoid *sol_y4;
extern Solenoid *sol_y5;

extern Solenoid *sol_mpc;
extern Solenoid *sol_spc;
extern Solenoid *sol_tcc;

#endif // __SOLENOID_H_