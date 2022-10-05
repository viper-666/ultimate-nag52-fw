
/**
* AUTOGENERATED BY convert.py
* DO NOT EDIT THIS FILE!
*
* IF MODIFICATIONS NEED TO BE MADE, MODIFY can_data.txt!
*
* CAN Defintiion for ECU 'FSCM'
*/

#ifdef EGS53_MODE

#ifndef __ECU_FSCM_H_
#define __ECU_FSCM_H_

#include <stdint.h>
    
#define FSCM_STAT_CAN_ID 0x02E5
#define NM_FSCM_CAN_ID 0x041F

/** Fuel Pressure Sensor State / Status Fuel pressure sensor */
enum class FSCM_STAT_FuelPressSens_Stat_V2 {
	OK = 0, // Normal Operation Mode
	SHRT_GND = 1, // Invalid Fuel Pressure Sensor Signal, Shortcut to Ground
	SHRT_BAT = 2, // Invalid Fuel Pressure Sensor Signal, Shortcut to Battery Voltage
	IMPLSBL = 3, // Implausible Fuel Pressure Sensor Signal
	PWR_FLT = 4, // Fuel Pressure Sensor Power Supply Fault
	SNA = 7, // Signal Not Available
};

/** Fuel Pump State / Status Fuel Pump */
enum class FSCM_STAT_FuelPmp_Stat_V2 {
	OK = 0, // Normal Operation Mode
	SHRT = 1, // Fuel Pump Shortcut
	OPN = 2, // Fuel Pump Open Circuit
	LHOM = 3, // LIMP-Home Operation Fashion
};

/** Fuel System Control Module State / Status FSCM */
enum class FSCM_STAT_FSCM_Stat_AMG {
	OK = 0, // normal surgery
	WARN_TEMP = 1, // Temperature High Warning
	ALM_TEMP = 2, // Temperature High Alarm
	START_FAIL = 3, // Fuel Pump Start Up Failed
	FLT_GNRL = 4, // General Fault
	NDEF5 = 5, // Not Defined
	NDEF6 = 6, // Not Defined
	SNA = 7, // Signal Not Available
};

/** Network Management Mode / Network Management Mode */
enum class NM_FSCM_NM_Mode {
	LHOM = 252, // LIMP-HOME Fashion
	RING = 253, // ring fashion
	ALIVE = 254, // Alive mode
	SNA = 255, // Signal Not Available
};

/** Network Management UserData Launch Type / Network Management UserData Sendart */
enum class NM_FSCM_NM_Ud_Launch {
	BROADCAST = 4, // Broadcast or Start Alive
	SNA = 63, // Signal Not Available
};

/** Network Management UserData Service No./netzmanagement UserData service */
enum class NM_FSCM_NM_Ud_Srv {
	DATA_OK_BC = 1, // UserData Transmission OK (Broadcast)
	WAKEUP_SA = 2, // Wakeup status (start alive)
	SBC_STAT_BC = 5, // System Base Chip Status (Broadcast)
	AWAKE_BC = 15, // Stay Awake Reason (Broadcast)
	SNA = 255, // Signal Not Available
};

/** Wakeup Reason / Wake-up */
enum class NM_FSCM_WakeupRsn_FSCM {
	NETWORK = 0, // Wakeup by Network
	TERM_15 = 130, // Wakeup by Discrete Terminal 15 Signal
	SNA = 255, // Signal Not Available
};

/** Network Identification No./netzwerk-id */
enum class NM_FSCM_Nw_Id {
	BACKBONE = 4, // Backbone CAN
	DIAGNOSTICS = 5, // Diagnostics CAN
	BODY = 6, // Body CAN
	CHASSIS = 7, // Chassis CAN
	POWERTRAIN = 8, // Powertrain Can
	PT_SENSOR = 9, // Powertrain Sensor CAN
	DYNAMICS = 11, // Dynamics CAN
	HEADUNIT = 14, // HeadUnit CAN
	IMPACT = 15, // Impact CAN
	MULTIPURPOSE = 16, // Multipurpose CAN
	SNA = 255, // Signal Not Available
};



typedef union {
	uint64_t raw;
	uint8_t bytes[8];

	/** Gets CAN ID of FSCM_STAT */
	uint32_t get_canid(){ return FSCM_STAT_CAN_ID; }
    /** Sets Actual Fuel Pressure / Current fuel pressure. Conversion formula (To raw from real): y=(x-0.0)/0.05 (Unit: bar) */
    void set_FuelPress(uint8_t value){ raw = (raw & 0x00ffffffffffffff) | ((uint64_t)value & 0xff) << 56; }

    /** Gets Actual Fuel Pressure / Current fuel pressure. Conversion formula (To real from raw): y=(0.05x)+0.0 (Unit: bar) */
    uint8_t get_FuelPress() const { return (uint8_t)(raw >> 56 & 0xff); }
        
    /** Sets Actual Fuel Pump Duty Cycle / Current duty cycle fuel pump. Conversion formula (To raw from real): y=(x-0.0)/0.50 (Unit: %) */
    void set_FuelPmpDtyCyc(uint8_t value){ raw = (raw & 0xff00ffffffffffff) | ((uint64_t)value & 0xff) << 48; }

    /** Gets Actual Fuel Pump Duty Cycle / Current duty cycle fuel pump. Conversion formula (To real from raw): y=(0.50x)+0.0 (Unit: %) */
    uint8_t get_FuelPmpDtyCyc() const { return (uint8_t)(raw >> 48 & 0xff); }
        
    /** Sets Fuel Pressure Request Not available / requirement Fuel pressure not available */
    void set_FuelPress_Rq_NA(bool value){ raw = (raw & 0xffff7fffffffffff) | ((uint64_t)value & 0x1) << 47; }

    /** Gets Fuel Pressure Request Not available / requirement Fuel pressure not available */
    bool get_FuelPress_Rq_NA() const { return (bool)(raw >> 47 & 0x1); }
        
    /** Sets Fuel Pressure: InCreased Hydraulic Resistance / Fuel pressure: Increased hydraulic resistance */
    void set_FuelPress_IncHydrRst(bool value){ raw = (raw & 0xffffbfffffffffff) | ((uint64_t)value & 0x1) << 46; }

    /** Gets Fuel Pressure: InCreased Hydraulic Resistance / Fuel pressure: Increased hydraulic resistance */
    bool get_FuelPress_IncHydrRst() const { return (bool)(raw >> 46 & 0x1); }
        
    /** Sets Fuel Pressure Sensor State / Status Fuel pressure sensor */
    void set_FuelPressSens_Stat_V2(FSCM_STAT_FuelPressSens_Stat_V2 value){ raw = (raw & 0xffffe3ffffffffff) | ((uint64_t)value & 0x7) << 42; }

    /** Gets Fuel Pressure Sensor State / Status Fuel pressure sensor */
    FSCM_STAT_FuelPressSens_Stat_V2 get_FuelPressSens_Stat_V2() const { return (FSCM_STAT_FuelPressSens_Stat_V2)(raw >> 42 & 0x7); }
        
    /** Sets Fuel Pump State / Status Fuel Pump */
    void set_FuelPmp_Stat_V2(FSCM_STAT_FuelPmp_Stat_V2 value){ raw = (raw & 0xfffffcffffffffff) | ((uint64_t)value & 0x3) << 40; }

    /** Gets Fuel Pump State / Status Fuel Pump */
    FSCM_STAT_FuelPmp_Stat_V2 get_FuelPmp_Stat_V2() const { return (FSCM_STAT_FuelPmp_Stat_V2)(raw >> 40 & 0x3); }
        
    /** Sets Actual Fuel Pump # 1 Input Duty Cycle / News Input Dewy Rating Fuel Pump 1. Conversion formula (To raw from real): y=(x-0.0)/0.50 (Unit: %) */
    void set_FuelPmp1_InDtyCyc(uint8_t value){ raw = (raw & 0xffffffff00ffffff) | ((uint64_t)value & 0xff) << 24; }

    /** Gets Actual Fuel Pump # 1 Input Duty Cycle / News Input Dewy Rating Fuel Pump 1. Conversion formula (To real from raw): y=(0.50x)+0.0 (Unit: %) */
    uint8_t get_FuelPmp1_InDtyCyc() const { return (uint8_t)(raw >> 24 & 0xff); }
        
    /** Sets Fuel System Control Module State / Status FSCM */
    void set_FSCM_Stat_AMG(FSCM_STAT_FSCM_Stat_AMG value){ raw = (raw & 0xfffffffffff8ffff) | ((uint64_t)value & 0x7) << 16; }

    /** Gets Fuel System Control Module State / Status FSCM */
    FSCM_STAT_FSCM_Stat_AMG get_FSCM_Stat_AMG() const { return (FSCM_STAT_FSCM_Stat_AMG)(raw >> 16 & 0x7); }
        
    /** Sets Evaporative System Integrity Monitor Contact State at Engine Shut-Off / Contact Rate Integrity Monitoring Evaporation System for Engine Stop */
    void set_ESIM_Cntct_Stat_EngShutOff(bool value){ raw = (raw & 0xffffffffffff7fff) | ((uint64_t)value & 0x1) << 15; }

    /** Gets Evaporative System Integrity Monitor Contact State at Engine Shut-Off / Contact Rate Integrity Monitoring Evaporation System for Engine Stop */
    bool get_ESIM_Cntct_Stat_EngShutOff() const { return (bool)(raw >> 15 & 0x1); }
        
    /** Sets Evaporative System Integrity Monitor Contact State / Contact State Integrity Monitoring Evaporation System */
    void set_ESIM_Cntct_Stat(bool value){ raw = (raw & 0xffffffffffffbfff) | ((uint64_t)value & 0x1) << 14; }

    /** Gets Evaporative System Integrity Monitor Contact State / Contact State Integrity Monitoring Evaporation System */
    bool get_ESIM_Cntct_Stat() const { return (bool)(raw >> 14 & 0x1); }
        
    /** Sets Evaporative System Integrity Monitor Contact Closing Time / Conclusion of the Contact Integrity Monitoring Evaporation System. Conversion formula (To raw from real): y=(x-0.0)/1.00 (Unit: min) */
    void set_ESIM_Cntct_ClsTm(uint16_t value){ raw = (raw & 0xfffffffffffffc00) | ((uint64_t)value & 0x3ff) << 0; }

    /** Gets Evaporative System Integrity Monitor Contact Closing Time / Conclusion of the Contact Integrity Monitoring Evaporation System. Conversion formula (To real from raw): y=(1.00x)+0.0 (Unit: min) */
    uint16_t get_ESIM_Cntct_ClsTm() const { return (uint16_t)(raw >> 0 & 0x3ff); }
        
} FSCM_STAT;



typedef union {
	uint64_t raw;
	uint8_t bytes[8];

	/** Gets CAN ID of NM_FSCM */
	uint32_t get_canid(){ return NM_FSCM_CAN_ID; }
    /** Sets Network Management Mode / Network Management Mode */
    void set_NM_Mode(NM_FSCM_NM_Mode value){ raw = (raw & 0x00ffffffffffffff) | ((uint64_t)value & 0xff) << 56; }

    /** Gets Network Management Mode / Network Management Mode */
    NM_FSCM_NM_Mode get_NM_Mode() const { return (NM_FSCM_NM_Mode)(raw >> 56 & 0xff); }
        
    /** Sets Network Management Logical Successor / Network Management Logical Successor. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_NM_Successor(uint8_t value){ raw = (raw & 0xff00ffffffffffff) | ((uint64_t)value & 0xff) << 48; }

    /** Gets Network Management Logical Successor / Network Management Logical Successor. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_NM_Successor() const { return (uint8_t)(raw >> 48 & 0xff); }
        
    /** Sets Network Management Sleep Indication / Network Management Sleep Indication */
    void set_NM_Sleep_Ind(bool value){ raw = (raw & 0xffff7fffffffffff) | ((uint64_t)value & 0x1) << 47; }

    /** Gets Network Management Sleep Indication / Network Management Sleep Indication */
    bool get_NM_Sleep_Ind() const { return (bool)(raw >> 47 & 0x1); }
        
    /** Sets Network Management Sleep Acknowledge / Network Management Sleep Acknowledge */
    void set_NM_Sleep_Ack(bool value){ raw = (raw & 0xffffbfffffffffff) | ((uint64_t)value & 0x1) << 46; }

    /** Gets Network Management Sleep Acknowledge / Network Management Sleep Acknowledge */
    bool get_NM_Sleep_Ack() const { return (bool)(raw >> 46 & 0x1); }
        
    /** Sets Network Management UserData Launch Type / Network Management UserData Sendart */
    void set_NM_Ud_Launch(NM_FSCM_NM_Ud_Launch value){ raw = (raw & 0xffffc0ffffffffff) | ((uint64_t)value & 0x3f) << 40; }

    /** Gets Network Management UserData Launch Type / Network Management UserData Sendart */
    NM_FSCM_NM_Ud_Launch get_NM_Ud_Launch() const { return (NM_FSCM_NM_Ud_Launch)(raw >> 40 & 0x3f); }
        
    /** Sets Network Management UserData Service No./netzmanagement UserData service */
    void set_NM_Ud_Srv(NM_FSCM_NM_Ud_Srv value){ raw = (raw & 0xffffff00ffffffff) | ((uint64_t)value & 0xff) << 32; }

    /** Gets Network Management UserData Service No./netzmanagement UserData service */
    NM_FSCM_NM_Ud_Srv get_NM_Ud_Srv() const { return (NM_FSCM_NM_Ud_Srv)(raw >> 32 & 0xff); }
        
    /** Sets Wakeup Reason / Wake-up */
    void set_WakeupRsn_FSCM(NM_FSCM_WakeupRsn_FSCM value){ raw = (raw & 0xffffffff00ffffff) | ((uint64_t)value & 0xff) << 24; }

    /** Gets Wakeup Reason / Wake-up */
    NM_FSCM_WakeupRsn_FSCM get_WakeupRsn_FSCM() const { return (NM_FSCM_WakeupRsn_FSCM)(raw >> 24 & 0xff); }
        
    /** Sets Counter for Module Wakeup States During Network Sleep / Counter for ECUs Internal Wachzustäustände during bus rest. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_WakeupCnt(uint8_t value){ raw = (raw & 0xffffffffff00ffff) | ((uint64_t)value & 0xff) << 16; }

    /** Gets Counter for Module Wakeup States During Network Sleep / Counter for ECUs Internal Wachzustäustände during bus rest. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_WakeupCnt() const { return (uint8_t)(raw >> 16 & 0xff); }
        
    /** Sets Network Identification No./netzwerk-id */
    void set_Nw_Id(NM_FSCM_Nw_Id value){ raw = (raw & 0xffffffffffffff00) | ((uint64_t)value & 0xff) << 0; }

    /** Gets Network Identification No./netzwerk-id */
    NM_FSCM_Nw_Id get_Nw_Id() const { return (NM_FSCM_Nw_Id)(raw >> 0 & 0xff); }
        
} NM_FSCM;



class ECU_FSCM {
	public:
        /**
         * @brief Imports the CAN frame given the CAN ID, CAN Contents, and current timestamp
         *
         * Returns true if the frame was imported successfully, and false if import failed (Due to non-matching CAN ID).
         *
         * NOTE: The endianness of the value cannot be guaranteed. It is up to the caller to correct the byte order!
         */
        bool import_frames(uint64_t value, uint32_t can_id, uint64_t timestamp_now) {
            switch(can_id) {
                case FSCM_STAT_CAN_ID:
                    LAST_FRAME_TIMES[0] = timestamp_now;
                    FRAME_DATA[0] = value;
                    return true;
                case NM_FSCM_CAN_ID:
                    LAST_FRAME_TIMES[1] = timestamp_now;
                    FRAME_DATA[1] = value;
                    return true;
                default:
                    return false;
            }
        }
        
        /** Sets data in pointer to FSCM_STAT
          * 
          * If this function returns false, then the CAN Frame is invalid or has not been seen
          * on the CANBUS network yet. Meaning it's data cannot be used.
          *
          * If the function returns true, then the pointer to 'dest' has been updated with the new CAN data
          */
        bool get_FSCM_STAT(uint64_t now, uint64_t max_expire_time, FSCM_STAT* dest) const {
            if (LAST_FRAME_TIMES[0] == 0 || dest == nullptr) { // CAN Frame has not been seen on bus yet / NULL pointer
                return false;
            } else if (now > LAST_FRAME_TIMES[0] && now - LAST_FRAME_TIMES[0] > max_expire_time) { // CAN Frame has not refreshed in valid interval
                return false;
            } else { // CAN Frame is valid! return it
                dest->raw = FRAME_DATA[0];
                return true;
            }
        }
            
        /** Sets data in pointer to NM_FSCM
          * 
          * If this function returns false, then the CAN Frame is invalid or has not been seen
          * on the CANBUS network yet. Meaning it's data cannot be used.
          *
          * If the function returns true, then the pointer to 'dest' has been updated with the new CAN data
          */
        bool get_NM_FSCM(uint64_t now, uint64_t max_expire_time, NM_FSCM* dest) const {
            if (LAST_FRAME_TIMES[1] == 0 || dest == nullptr) { // CAN Frame has not been seen on bus yet / NULL pointer
                return false;
            } else if (now > LAST_FRAME_TIMES[1] && now - LAST_FRAME_TIMES[1] > max_expire_time) { // CAN Frame has not refreshed in valid interval
                return false;
            } else { // CAN Frame is valid! return it
                dest->raw = FRAME_DATA[1];
                return true;
            }
        }
            
	private:
		uint64_t FRAME_DATA[2];
		uint64_t LAST_FRAME_TIMES[2];
};
#endif // __ECU_FSCM_H_

#endif // EGS53_MODE