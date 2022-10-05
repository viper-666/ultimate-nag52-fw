
/**
* AUTOGENERATED BY convert.py
* DO NOT EDIT THIS FILE!
*
* IF MODIFICATIONS NEED TO BE MADE, MODIFY can_data.txt!
*
* CAN Defintiion for ECU 'MS51'
*/

#ifdef EGS51_MODE

#ifndef __ECU_MS51_H_
#define __ECU_MS51_H_

#include <stdint.h>
    
#define MS_308_CAN_ID 0x0308
#define MS_210_CAN_ID 0x0210
#define MS_310_CAN_ID 0x0310
#define MS_608_CAN_ID 0x0608

/** switching line shift MS */
enum class MS_210h_SLV_MS {
	SKL0 = 0, // Shift characteristic "0"
	SKL1 = 1, // Shift characteristic "1"
	SKL2 = 2, // Shift characteristic "2"
	SKL3 = 3, // Shift characteristic "3"
	SKL4 = 4, // Shift characteristic "4"
	SKL5 = 5, // Shift characteristic "5"
	SKL6 = 6, // Shift characteristic "6"
	SKL7 = 7, // Shift characteristic "7"
	SKL8 = 8, // Shift characteristic "8"
	SKL9 = 9, // Shift characteristic "9"
	SKL10 = 10, // Shift characteristic "10"
};

/** Gear, upper limit */
enum class MS_210h_GMAX_MS {
	PASSIVE = 0, // passive value
	G1 = 1, // Gear, upper limit = 1
	G2 = 2, // Gear, upper limit = 2
	G3 = 3, // Gear, upper limit = 3
	G4 = 4, // Gear, upper limit = 4
	G5 = 5, // Gear, upper limit = 5
	G6 = 6, // Gear, upper limit = 6
	G7 = 7, // Gear, upper limit = 7
};

/** Gear, lower limit */
enum class MS_210h_GMIN_MS {
	PASSIVE = 0, // passive value
	G1 = 1, // Gear, lower limit = 1
	G2 = 2, // Gear, lower limit = 2
	G3 = 3, // Gear, lower limit = 3
	G4 = 4, // Gear, lower limit = 4
	G5 = 5, // Gear, lower limit = 5
	G6 = 6, // Gear, lower limit = 6
	G7 = 7, // Gear, lower limit = 7
};



typedef union {
	uint64_t raw;
	uint8_t bytes[8];

	/** Gets CAN ID of MS_308 */
	uint32_t get_canid(){ return MS_308_CAN_ID; }
    /** Sets clutch kicked */
    void set_KPL(bool value){ raw = (raw & 0x7fffffffffffffff) | ((uint64_t)value & 0x1) << 63; }

    /** Gets clutch kicked */
    bool get_KPL() const { return (bool)(raw >> 63 & 0x1); }
        
    /** Sets start.Convertible bridging clutch "Open" */
    void set_KUEB_O_A(bool value){ raw = (raw & 0xbfffffffffffffff) | ((uint64_t)value & 0x1) << 62; }

    /** Gets start.Convertible bridging clutch "Open" */
    bool get_KUEB_O_A() const { return (bool)(raw >> 62 & 0x1); }
        
    /** Sets Speed limiting function active */
    void set_N_MAX_BG(bool value){ raw = (raw & 0xdfffffffffffffff) | ((uint64_t)value & 0x1) << 61; }

    /** Gets Speed limiting function active */
    bool get_N_MAX_BG() const { return (bool)(raw >> 61 & 0x1); }
        
    /** Sets Partinal shutdown */
    void set_SAST(bool value){ raw = (raw & 0xefffffffffffffff) | ((uint64_t)value & 0x1) << 60; }

    /** Gets Partinal shutdown */
    bool get_SAST() const { return (bool)(raw >> 60 & 0x1); }
        
    /** Sets push shutdown full */
    void set_SASV(bool value){ raw = (raw & 0xf7ffffffffffffff) | ((uint64_t)value & 0x1) << 59; }

    /** Gets push shutdown full */
    bool get_SASV() const { return (bool)(raw >> 59 & 0x1); }
        
    /** Sets Fuel filter clogs control lamp (CR2 US only) */
    void set_KSF_KL(bool value){ raw = (raw & 0xfbffffffffffffff) | ((uint64_t)value & 0x1) << 58; }

    /** Gets Fuel filter clogs control lamp (CR2 US only) */
    bool get_KSF_KL() const { return (bool)(raw >> 58 & 0x1); }
        
    /** Sets Water in the fuel control lamp (CR2 US only) */
    void set_WKS_KL(bool value){ raw = (raw & 0xfdffffffffffffff) | ((uint64_t)value & 0x1) << 57; }

    /** Gets Water in the fuel control lamp (CR2 US only) */
    bool get_WKS_KL() const { return (bool)(raw >> 57 & 0x1); }
        
    /** Sets Cylinder shutdown conditions fulfilled */
    void set_ZASBED(bool value){ raw = (raw & 0xfeffffffffffffff) | ((uint64_t)value & 0x1) << 56; }

    /** Gets Cylinder shutdown conditions fulfilled */
    bool get_ZASBED() const { return (bool)(raw >> 56 & 0x1); }
        
    /** Sets engine speed. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_NMOT(uint16_t value){ raw = (raw & 0xff0000ffffffffff) | ((uint64_t)value & 0xffff) << 40; }

    /** Gets engine speed. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint16_t get_NMOT() const { return (uint16_t)(raw >> 40 & 0xffff); }
        
    /** Sets Warning message ECO steering helping pump */
    void set_ELHP_WARN(bool value){ raw = (raw & 0xffffffbfffffffff) | ((uint64_t)value & 0x1) << 38; }

    /** Gets Warning message ECO steering helping pump */
    bool get_ELHP_WARN() const { return (bool)(raw >> 38 & 0x1); }
        
    /** Sets Ethanol operation detected */
    void set_EOH(bool value){ raw = (raw & 0xffffffdfffffffff) | ((uint64_t)value & 0x1) << 37; }

    /** Gets Ethanol operation detected */
    bool get_EOH() const { return (bool)(raw >> 37 & 0x1); }
        
    /** Sets Air filter dirty warning lamp (only diesel) */
    void set_LUFI_KL(bool value){ raw = (raw & 0xffffffefffffffff) | ((uint64_t)value & 0x1) << 36; }

    /** Gets Air filter dirty warning lamp (only diesel) */
    bool get_LUFI_KL() const { return (bool)(raw >> 36 & 0x1); }
        
    /** Sets pre-glow control lamp */
    void set_VGL_KL(bool value){ raw = (raw & 0xfffffff7ffffffff) | ((uint64_t)value & 0x1) << 35; }

    /** Gets pre-glow control lamp */
    bool get_VGL_KL() const { return (bool)(raw >> 35 & 0x1); }
        
    /** Sets oil level / oil pressure control lamp */
    void set_OEL_KL(bool value){ raw = (raw & 0xfffffffbffffffff) | ((uint64_t)value & 0x1) << 34; }

    /** Gets oil level / oil pressure control lamp */
    bool get_OEL_KL() const { return (bool)(raw >> 34 & 0x1); }
        
    /** Sets Diagnosis Control Lamp (OBD II) */
    void set_DIAG_KL(bool value){ raw = (raw & 0xfffffffdffffffff) | ((uint64_t)value & 0x1) << 33; }

    /** Gets Diagnosis Control Lamp (OBD II) */
    bool get_DIAG_KL() const { return (bool)(raw >> 33 & 0x1); }
        
    /** Sets Tank lid open check lamp */
    void set_TANK_KL(bool value){ raw = (raw & 0xfffffffeffffffff) | ((uint64_t)value & 0x1) << 32; }

    /** Gets Tank lid open check lamp */
    bool get_TANK_KL() const { return (bool)(raw >> 32 & 0x1); }
        
    /** Sets Engine oil temperature too high (overheating) */
    void set_UEHITZ(bool value){ raw = (raw & 0xffffffff7fffffff) | ((uint64_t)value & 0x1) << 31; }

    /** Gets Engine oil temperature too high (overheating) */
    bool get_UEHITZ() const { return (bool)(raw >> 31 & 0x1); }
        
    /** Sets Cylinder shutdown */
    void set_ZAS(bool value){ raw = (raw & 0xffffffffbfffffff) | ((uint64_t)value & 0x1) << 30; }

    /** Gets Cylinder shutdown */
    bool get_ZAS() const { return (bool)(raw >> 30 & 0x1); }
        
    /** Sets ADR check lamp (NFZ only) */
    void set_ADR_KL(bool value){ raw = (raw & 0xffffffffdfffffff) | ((uint64_t)value & 0x1) << 29; }

    /** Gets ADR check lamp (NFZ only) */
    bool get_ADR_KL() const { return (bool)(raw >> 29 & 0x1); }
        
    /** Sets ADR defective control lamp (NFZ only) */
    void set_ADR_DEF_KL(bool value){ raw = (raw & 0xffffffffefffffff) | ((uint64_t)value & 0x1) << 28; }

    /** Gets ADR defective control lamp (NFZ only) */
    bool get_ADR_DEF_KL() const { return (bool)(raw >> 28 & 0x1); }
        
    /** Sets starter is running */
    void set_ANL_LFT(bool value){ raw = (raw & 0xfffffffff7ffffff) | ((uint64_t)value & 0x1) << 27; }

    /** Gets starter is running */
    bool get_ANL_LFT() const { return (bool)(raw >> 27 & 0x1); }
        
    /** Sets Motor Heater Defective Control Lamp */
    void set_LUEFT_MOT_KL(bool value){ raw = (raw & 0xfffffffffbffffff) | ((uint64_t)value & 0x1) << 26; }

    /** Gets Motor Heater Defective Control Lamp */
    bool get_LUEFT_MOT_KL() const { return (bool)(raw >> 26 & 0x1); }
        
    /** Sets Speed limitation for display active (0 at CR) */
    void set_DBAA(bool value){ raw = (raw & 0xfffffffffdffffff) | ((uint64_t)value & 0x1) << 25; }

    /** Gets Speed limitation for display active (0 at CR) */
    bool get_DBAA() const { return (bool)(raw >> 25 & 0x1); }
        
    /** Sets cooling water temperature too high */
    void set_TEMP_KL(bool value){ raw = (raw & 0xfffffffffeffffff) | ((uint64_t)value & 0x1) << 24; }

    /** Gets cooling water temperature too high */
    bool get_TEMP_KL() const { return (bool)(raw >> 24 & 0x1); }
        
    /** Sets Oil temperature. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_T_OEL(uint8_t value){ raw = (raw & 0xffffffffff00ffff) | ((uint64_t)value & 0xff) << 16; }

    /** Gets Oil temperature. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_T_OEL() const { return (uint8_t)(raw >> 16 & 0xff); }
        
    /** Sets oil level. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_OEL_FS(uint8_t value){ raw = (raw & 0xffffffffffff00ff) | ((uint64_t)value & 0xff) << 8; }

    /** Gets oil level. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_OEL_FS() const { return (uint8_t)(raw >> 8 & 0xff); }
        
    /** Sets oil quality. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_OEL_QUAL(uint8_t value){ raw = (raw & 0xffffffffffffff00) | ((uint64_t)value & 0xff) << 0; }

    /** Gets oil quality. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_OEL_QUAL() const { return (uint8_t)(raw >> 0 & 0xff); }
        
} MS_308;



typedef union {
	uint64_t raw;
	uint8_t bytes[8];

	/** Gets CAN ID of MS_210 */
	uint32_t get_canid(){ return MS_210_CAN_ID; }
    /** Sets Air compressor Emergency Shutdown */
    void set_KOMP_NOTAUS(bool value){ raw = (raw & 0x7fffffffffffffff) | ((uint64_t)value & 0x1) << 63; }

    /** Gets Air compressor Emergency Shutdown */
    bool get_KOMP_NOTAUS() const { return (bool)(raw >> 63 & 0x1); }
        
    /** Sets switching line shift MS */
    void set_SLV_MS(MS_210h_SLV_MS value){ raw = (raw & 0x87ffffffffffffff) | ((uint64_t)value & 0xf) << 59; }

    /** Gets switching line shift MS */
    MS_210h_SLV_MS get_SLV_MS() const { return (MS_210h_SLV_MS)(raw >> 59 & 0xf); }
        
    /** Sets Switch KSG-creep */
    void set_KRIECH_AUS(bool value){ raw = (raw & 0xfdffffffffffffff) | ((uint64_t)value & 0x1) << 57; }

    /** Gets Switch KSG-creep */
    bool get_KRIECH_AUS() const { return (bool)(raw >> 57 & 0x1); }
        
    /** Sets MS-wish: "Approach 1.Gang" */
    void set_ANF1(bool value){ raw = (raw & 0xfeffffffffffffff) | ((uint64_t)value & 0x1) << 56; }

    /** Gets MS-wish: "Approach 1.Gang" */
    bool get_ANF1() const { return (bool)(raw >> 56 & 0x1); }
        
    /** Sets MS-wish: "Active downshift" */
    void set_AKT_R_MS(bool value){ raw = (raw & 0xff7fffffffffffff) | ((uint64_t)value & 0x1) << 55; }

    /** Gets MS-wish: "Active downshift" */
    bool get_AKT_R_MS() const { return (bool)(raw >> 55 & 0x1); }
        
    /** Sets Turn off heater */
    void set_ZH_AUS_MS(bool value){ raw = (raw & 0xffbfffffffffffff) | ((uint64_t)value & 0x1) << 54; }

    /** Gets Turn off heater */
    bool get_ZH_AUS_MS() const { return (bool)(raw >> 54 & 0x1); }
        
    /** Sets Gear, upper limit */
    void set_GMAX_MS(MS_210h_GMAX_MS value){ raw = (raw & 0xffc7ffffffffffff) | ((uint64_t)value & 0x7) << 51; }

    /** Gets Gear, upper limit */
    MS_210h_GMAX_MS get_GMAX_MS() const { return (MS_210h_GMAX_MS)(raw >> 51 & 0x7); }
        
    /** Sets Gear, lower limit */
    void set_GMIN_MS(MS_210h_GMIN_MS value){ raw = (raw & 0xfff8ffffffffffff) | ((uint64_t)value & 0x7) << 48; }

    /** Gets Gear, lower limit */
    MS_210h_GMIN_MS get_GMIN_MS() const { return (MS_210h_GMIN_MS)(raw >> 48 & 0x7); }
        
    /** Sets pedal. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_PW(uint8_t value){ raw = (raw & 0xffff00ffffffffff) | ((uint64_t)value & 0xff) << 40; }

    /** Gets pedal. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_PW() const { return (uint8_t)(raw >> 40 & 0xff); }
        
    /** Sets retrigger minimum display time in the display: S */
    void set_V_DSPL_NEU(bool value){ raw = (raw & 0xffffff7fffffffff) | ((uint64_t)value & 0x1) << 39; }

    /** Gets retrigger minimum display time in the display: S */
    bool get_V_DSPL_NEU() const { return (bool)(raw >> 39 & 0x1); }
        
    /** Sets idle is stable */
    void set_LL_STBL(bool value){ raw = (raw & 0xffffffbfffffffff) | ((uint64_t)value & 0x1) << 38; }

    /** Gets idle is stable */
    bool get_LL_STBL() const { return (bool)(raw >> 38 & 0x1); }
        
    /** Sets Vorglühstatus */
    void set_VGL_ST(bool value){ raw = (raw & 0xffffffdfffffffff) | ((uint64_t)value & 0x1) << 37; }

    /** Gets Vorglühstatus */
    bool get_VGL_ST() const { return (bool)(raw >> 37 & 0x1); }
        
    /** Sets Engine Start / Stop system is defective */
    void set_MSS_DEF(bool value){ raw = (raw & 0xffffffefffffffff) | ((uint64_t)value & 0x1) << 36; }

    /** Gets Engine Start / Stop system is defective */
    bool get_MSS_DEF() const { return (bool)(raw >> 36 & 0x1); }
        
    /** Sets engine start / stop system warning */
    void set_MSS_KL(bool value){ raw = (raw & 0xfffffff7ffffffff) | ((uint64_t)value & 0x1) << 35; }

    /** Gets engine start / stop system warning */
    bool get_MSS_KL() const { return (bool)(raw >> 35 & 0x1); }
        
    /** Sets engine start / stop system active */
    void set_MSS_AKT(bool value){ raw = (raw & 0xfffffffbffffffff) | ((uint64_t)value & 0x1) << 34; }

    /** Gets engine start / stop system active */
    bool get_MSS_AKT() const { return (bool)(raw >> 34 & 0x1); }
        
    /** Sets turn air compressor:: S acceleration */
    void set_KOMP_BAUS(bool value){ raw = (raw & 0xfffffffdffffffff) | ((uint64_t)value & 0x1) << 33; }

    /** Gets turn air compressor:: S acceleration */
    bool get_KOMP_BAUS() const { return (bool)(raw >> 33 & 0x1); }
        
    /** Sets Crash signal from motor control */
    void set_CRASH_MS(bool value){ raw = (raw & 0xfffffffeffffffff) | ((uint64_t)value & 0x1) << 32; }

    /** Gets Crash signal from motor control */
    bool get_CRASH_MS() const { return (bool)(raw >> 32 & 0x1); }
        
    /** Sets error pedal sensor */
    void set_PWG_ERR(bool value){ raw = (raw & 0xffffffff7fffffff) | ((uint64_t)value & 0x1) << 31; }

    /** Gets error pedal sensor */
    bool get_PWG_ERR() const { return (bool)(raw >> 31 & 0x1); }
        
    /** Sets idle */
    void set_LL(bool value){ raw = (raw & 0xffffffffbfffffff) | ((uint64_t)value & 0x1) << 30; }

    /** Gets idle */
    bool get_LL() const { return (bool)(raw >> 30 & 0x1); }
        
    /** Sets beg. "Slip" lock-up clutch */
    void set_KUEB_S_A(bool value){ raw = (raw & 0xffffffffdfffffff) | ((uint64_t)value & 0x1) << 29; }

    /** Gets beg. "Slip" lock-up clutch */
    bool get_KUEB_S_A() const { return (bool)(raw >> 29 & 0x1); }
        
    /** Sets cruise control regulates */
    void set_TM_REG(bool value){ raw = (raw & 0xffffffffefffffff) | ((uint64_t)value & 0x1) << 28; }

    /** Gets cruise control regulates */
    bool get_TM_REG() const { return (bool)(raw >> 28 & 0x1); }
        
    /** Sets activated speed limit */
    void set_V_MAX_EIN(bool value){ raw = (raw & 0xfffffffff7ffffff) | ((uint64_t)value & 0x1) << 27; }

    /** Gets activated speed limit */
    bool get_V_MAX_EIN() const { return (bool)(raw >> 27 & 0x1); }
        
    /** Sets Kick Down (changeover scenario open!) */
    void set_KD_MS(bool value){ raw = (raw & 0xfffffffffbffffff) | ((uint64_t)value & 0x1) << 26; }

    /** Gets Kick Down (changeover scenario open!) */
    bool get_KD_MS() const { return (bool)(raw >> 26 & 0x1); }
        
    /** Sets emergency operation */
    void set_NOTL(bool value){ raw = (raw & 0xfffffffffdffffff) | ((uint64_t)value & 0x1) << 25; }

    /** Gets emergency operation */
    bool get_NOTL() const { return (bool)(raw >> 25 & 0x1); }
        
    /** Sets Warning buzzer */
    void set_V_MAX_SUM(bool value){ raw = (raw & 0xfffffffffeffffff) | ((uint64_t)value & 0x1) << 24; }

    /** Gets Warning buzzer */
    bool get_V_MAX_SUM() const { return (bool)(raw >> 24 & 0x1); }
        
    /** Sets FBStart Error */
    void set_FBS_SE(bool value){ raw = (raw & 0xffffffffff7fffff) | ((uint64_t)value & 0x1) << 23; }

    /** Gets FBStart Error */
    bool get_FBS_SE() const { return (bool)(raw >> 23 & 0x1); }
        
    /** Sets "achieved winter tires limitation" Indicated on display */
    void set_V_DSPL_PGB(bool value){ raw = (raw & 0xffffffffffbfffff) | ((uint64_t)value & 0x1) << 22; }

    /** Gets "achieved winter tires limitation" Indicated on display */
    bool get_V_DSPL_PGB() const { return (bool)(raw >> 22 & 0x1); }
        
    /** Sets activated cruise control */
    void set_TM_EIN(bool value){ raw = (raw & 0xffffffffffdfffff) | ((uint64_t)value & 0x1) << 21; }

    /** Gets activated cruise control */
    bool get_TM_EIN() const { return (bool)(raw >> 21 & 0x1); }
        
    /** Sets Speed ​​controls */
    void set_V_MAX_REG(bool value){ raw = (raw & 0xffffffffffefffff) | ((uint64_t)value & 0x1) << 20; }

    /** Gets Speed ​​controls */
    bool get_V_MAX_REG() const { return (bool)(raw >> 20 & 0x1); }
        
    /** Sets Display "limit?" on display */
    void set_V_DSPL_LIM(bool value){ raw = (raw & 0xfffffffffff7ffff) | ((uint64_t)value & 0x1) << 19; }

    /** Gets Display "limit?" on display */
    bool get_V_DSPL_LIM() const { return (bool)(raw >> 19 & 0x1); }
        
    /** Sets "Error" indicator on the display */
    void set_V_DSPL_ERR(bool value){ raw = (raw & 0xfffffffffffbffff) | ((uint64_t)value & 0x1) << 18; }

    /** Gets "Error" indicator on the display */
    bool get_V_DSPL_ERR() const { return (bool)(raw >> 18 & 0x1); }
        
    /** Sets display flashes */
    void set_V_DSPL_BL(bool value){ raw = (raw & 0xfffffffffffdffff) | ((uint64_t)value & 0x1) << 17; }

    /** Gets display flashes */
    bool get_V_DSPL_BL() const { return (bool)(raw >> 17 & 0x1); }
        
    /** Sets Geschw.begrenzer- / cruise control display a */
    void set_V_DSPL_EIN(bool value){ raw = (raw & 0xfffffffffffeffff) | ((uint64_t)value & 0x1) << 16; }

    /** Gets Geschw.begrenzer- / cruise control display a */
    bool get_V_DSPL_EIN() const { return (bool)(raw >> 16 & 0x1); }
        
    /** Sets factor for fill value. d. max. Mom with remo.. A.druck. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_FMMOTMAX(uint8_t value){ raw = (raw & 0xffffffffffff00ff) | ((uint64_t)value & 0xff) << 8; }

    /** Gets factor for fill value. d. max. Mom with remo.. A.druck. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_FMMOTMAX() const { return (uint8_t)(raw >> 8 & 0xff); }
        
    /** Sets Set maximum or cruise control speed. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_V_MAX_TM(uint8_t value){ raw = (raw & 0xffffffffffffff00) | ((uint64_t)value & 0xff) << 0; }

    /** Gets Set maximum or cruise control speed. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_V_MAX_TM() const { return (uint8_t)(raw >> 0 & 0xff); }
        
} MS_210;



typedef union {
	uint64_t raw;
	uint8_t bytes[8];

	/** Gets CAN ID of MS_310 */
	uint32_t get_canid(){ return MS_310_CAN_ID; }
    /** Sets engine coolant temperature. Conversion formula (To raw from real): y=(x-0.0)/2.00 */
    void set_STA_TORQUE(uint8_t value){ raw = (raw & 0xffffffff00ffffff) | ((uint64_t)value & 0xff) << 24; }

    /** Gets engine coolant temperature. Conversion formula (To real from raw): y=(2.00x)+0.0 */
    uint8_t get_STA_TORQUE() const { return (uint8_t)(raw >> 24 & 0xff); }
        
    /** Sets engine coolant temperature. Conversion formula (To raw from real): y=(x-0.0)/2.00 */
    void set_MAX_TORQUE(uint8_t value){ raw = (raw & 0xffffffffffff00ff) | ((uint64_t)value & 0xff) << 8; }

    /** Gets engine coolant temperature. Conversion formula (To real from raw): y=(2.00x)+0.0 */
    uint8_t get_MAX_TORQUE() const { return (uint8_t)(raw >> 8 & 0xff); }
        
} MS_310;



typedef union {
	uint64_t raw;
	uint8_t bytes[8];

	/** Gets CAN ID of MS_608 */
	uint32_t get_canid(){ return MS_608_CAN_ID; }
    /** Sets engine coolant temperature. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_T_MOT(uint8_t value){ raw = (raw & 0x00ffffffffffffff) | ((uint64_t)value & 0xff) << 56; }

    /** Gets engine coolant temperature. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_T_MOT() const { return (uint8_t)(raw >> 56 & 0xff); }
        
    /** Sets intake air temperature. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_T_LUFT(uint8_t value){ raw = (raw & 0xff00ffffffffffff) | ((uint64_t)value & 0xff) << 48; }

    /** Gets intake air temperature. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_T_LUFT() const { return (uint8_t)(raw >> 48 & 0xff); }
        
    /** Sets Vehicle code body. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_FCOD_KAR(uint8_t value){ raw = (raw & 0xffff1fffffffffff) | ((uint64_t)value & 0x7) << 45; }

    /** Gets Vehicle code body. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_FCOD_KAR() const { return (uint8_t)(raw >> 45 & 0x7); }
        
    /** Sets Vehicle code series. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_FCOD_BR(uint8_t value){ raw = (raw & 0xffffe0ffffffffff) | ((uint64_t)value & 0x1f) << 40; }

    /** Gets Vehicle code series. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_FCOD_BR() const { return (uint8_t)(raw >> 40 & 0x1f); }
        
    /** Sets Vehicle code engine with 7 bit, bit 6 */
    void set_FCOD_MOT6(bool value){ raw = (raw & 0xffffff7fffffffff) | ((uint64_t)value & 0x1) << 39; }

    /** Gets Vehicle code engine with 7 bit, bit 6 */
    bool get_FCOD_MOT6() const { return (bool)(raw >> 39 & 0x1); }
        
    /** Sets Transmission control not available */
    void set_GS_NVH(bool value){ raw = (raw & 0xffffffbfffffffff) | ((uint64_t)value & 0x1) << 38; }

    /** Gets Transmission control not available */
    bool get_GS_NVH() const { return (bool)(raw >> 38 & 0x1); }
        
    /** Sets FZGCOD.Motor 7Bit, bit0-5 (bit6 -> signal fcod_mot6). Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_FCOD_MOT(uint8_t value){ raw = (raw & 0xffffffc0ffffffff) | ((uint64_t)value & 0x3f) << 32; }

    /** Gets FZGCOD.Motor 7Bit, bit0-5 (bit6 -> signal fcod_mot6). Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_FCOD_MOT() const { return (uint8_t)(raw >> 32 & 0x3f); }
        
    /** Sets Fixed maximum speed. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_V_MAX_FIX(uint8_t value){ raw = (raw & 0xffffffff00ffffff) | ((uint64_t)value & 0xff) << 24; }

    /** Gets Fixed maximum speed. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_V_MAX_FIX() const { return (uint8_t)(raw >> 24 & 0xff); }
        
    /** Sets consumption. Conversion formula (To raw from real): y=(x-0.0)/0.50 */
    void set_VB(uint16_t value){ raw = (raw & 0xffffffffff0000ff) | ((uint64_t)value & 0xffff) << 8; }

    /** Gets consumption. Conversion formula (To real from raw): y=(0.50x)+0.0 */
    uint16_t get_VB() const { return (uint16_t)(raw >> 8 & 0xffff); }
        
} MS_608;



class ECU_MS51 {
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
                case MS_308_CAN_ID:
                    LAST_FRAME_TIMES[0] = timestamp_now;
                    FRAME_DATA[0] = value;
                    return true;
                case MS_210_CAN_ID:
                    LAST_FRAME_TIMES[1] = timestamp_now;
                    FRAME_DATA[1] = value;
                    return true;
                case MS_310_CAN_ID:
                    LAST_FRAME_TIMES[2] = timestamp_now;
                    FRAME_DATA[2] = value;
                    return true;
                case MS_608_CAN_ID:
                    LAST_FRAME_TIMES[3] = timestamp_now;
                    FRAME_DATA[3] = value;
                    return true;
                default:
                    return false;
            }
        }
        
        /** Sets data in pointer to MS_308
          * 
          * If this function returns false, then the CAN Frame is invalid or has not been seen
          * on the CANBUS network yet. Meaning it's data cannot be used.
          *
          * If the function returns true, then the pointer to 'dest' has been updated with the new CAN data
          */
        bool get_MS_308(uint64_t now, uint64_t max_expire_time, MS_308* dest) const {
            if (LAST_FRAME_TIMES[0] == 0 || dest == nullptr) { // CAN Frame has not been seen on bus yet / NULL pointer
                return false;
            } else if (now > LAST_FRAME_TIMES[0] && now - LAST_FRAME_TIMES[0] > max_expire_time) { // CAN Frame has not refreshed in valid interval
                return false;
            } else { // CAN Frame is valid! return it
                dest->raw = FRAME_DATA[0];
                return true;
            }
        }
            
        /** Sets data in pointer to MS_210
          * 
          * If this function returns false, then the CAN Frame is invalid or has not been seen
          * on the CANBUS network yet. Meaning it's data cannot be used.
          *
          * If the function returns true, then the pointer to 'dest' has been updated with the new CAN data
          */
        bool get_MS_210(uint64_t now, uint64_t max_expire_time, MS_210* dest) const {
            if (LAST_FRAME_TIMES[1] == 0 || dest == nullptr) { // CAN Frame has not been seen on bus yet / NULL pointer
                return false;
            } else if (now > LAST_FRAME_TIMES[1] && now - LAST_FRAME_TIMES[1] > max_expire_time) { // CAN Frame has not refreshed in valid interval
                return false;
            } else { // CAN Frame is valid! return it
                dest->raw = FRAME_DATA[1];
                return true;
            }
        }
            
        /** Sets data in pointer to MS_310
          * 
          * If this function returns false, then the CAN Frame is invalid or has not been seen
          * on the CANBUS network yet. Meaning it's data cannot be used.
          *
          * If the function returns true, then the pointer to 'dest' has been updated with the new CAN data
          */
        bool get_MS_310(uint64_t now, uint64_t max_expire_time, MS_310* dest) const {
            if (LAST_FRAME_TIMES[2] == 0 || dest == nullptr) { // CAN Frame has not been seen on bus yet / NULL pointer
                return false;
            } else if (now > LAST_FRAME_TIMES[2] && now - LAST_FRAME_TIMES[2] > max_expire_time) { // CAN Frame has not refreshed in valid interval
                return false;
            } else { // CAN Frame is valid! return it
                dest->raw = FRAME_DATA[2];
                return true;
            }
        }
            
        /** Sets data in pointer to MS_608
          * 
          * If this function returns false, then the CAN Frame is invalid or has not been seen
          * on the CANBUS network yet. Meaning it's data cannot be used.
          *
          * If the function returns true, then the pointer to 'dest' has been updated with the new CAN data
          */
        bool get_MS_608(uint64_t now, uint64_t max_expire_time, MS_608* dest) const {
            if (LAST_FRAME_TIMES[3] == 0 || dest == nullptr) { // CAN Frame has not been seen on bus yet / NULL pointer
                return false;
            } else if (now > LAST_FRAME_TIMES[3] && now - LAST_FRAME_TIMES[3] > max_expire_time) { // CAN Frame has not refreshed in valid interval
                return false;
            } else { // CAN Frame is valid! return it
                dest->raw = FRAME_DATA[3];
                return true;
            }
        }
            
	private:
		uint64_t FRAME_DATA[4];
		uint64_t LAST_FRAME_TIMES[4];
};
#endif // __ECU_MS51_H_

#endif // EGS51_MODE