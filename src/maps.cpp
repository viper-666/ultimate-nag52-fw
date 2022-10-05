#include "maps.h"

int16_t S_DIESEL_UPSHIFT_MAP[SHIFT_MAP_SIZE] = {
    /*                        Pedal position                                   */
    /*0%   10%   20%   30%   40%   50%   60%   70%   80%   90%  100%           */
    1500, 1750, 2000, 2250, 2500, 2750, 3000, 3250, 3500, 4000, 4500,/* 1 -> 2 */
    1500, 1550, 1600, 1650, 1700, 1750, 1800, 1850, 1900, 1950, 4500,/* 2 -> 3 */
    1500, 1550, 1600, 1650, 1700, 1750, 1800, 1850, 1900, 1950, 4500,/* 3 -> 4 */
    1500, 1550, 1600, 1650, 1700, 1750, 1800, 1850, 1900, 1950, 4500 /* 4 -> 5 */
};


int16_t S_DIESEL_DOWNSHIFT_MAP[SHIFT_MAP_SIZE] = {
    /*                        Pedal position                                   */
    /*0%   10%   20%   30%   40%   50%   60%   70%   80%   90%  100%           */
     900, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000,/* 2 -> 1 */
     900, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000,/* 3 -> 2 */
     900, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000,/* 4 -> 3 */
    1000, 1100, 1300, 1500, 1700, 1900, 2100, 2400, 2600, 2800, 3000 /* 5 -> 4 */
};


int16_t S_PETROL_UPSHIFT_MAP[SHIFT_MAP_SIZE] = {
    /*                        Pedal position                                   */
    /*0%   10%   20%   30%   40%   50%   60%   70%   80%   90%  100%           */
    1500, 1600, 1700, 1800, 1900, 2200, 2500, 3000, 3500, 4500, 6000,/* 1 -> 2 */
    1500, 1600, 1700, 1800, 1900, 2200, 2500, 3000, 3500, 4500, 6000,/* 2 -> 3 */
    1500, 1600, 1700, 1800, 1900, 2200, 2500, 3000, 3500, 4500, 6000,/* 3 -> 4 */
    1500, 1550, 1600, 1700, 1900, 2000, 2500, 3000, 3500, 4500, 6000 /* 4 -> 5 */
};


int16_t S_PETROL_DOWNSHIFT_MAP[SHIFT_MAP_SIZE] = {
    /*                        Pedal position                                   */
    /*0%   10%   20%   30%   40%   50%   60%   70%   80%   90%  100%           */
      75,  150,  300,  600,  900, 1200, 1400, 1600, 1800, 2000, 2200,/* 2 -> 1 */
     900,  900, 1000, 1100, 1200, 1300, 1400, 1600, 1800, 2000, 2200,/* 3 -> 2 */
     900,  900, 1000, 1100, 1200, 1300, 1400, 1600, 1800, 2000, 2200,/* 4 -> 3 */
    1000, 1050, 1100, 1200, 1300, 1400, 1500, 1600, 2000, 2400, 2800 /* 5 -> 4 */
};

/*
---------------------------------------------------------------------------------
                    COMFORT MODE MAPS
---------------------------------------------------------------------------------
*/

int16_t C_DIESEL_UPSHIFT_MAP[SHIFT_MAP_SIZE] = {
    /*                        Pedal position                                   */
    /*0%   10%   20%   30%   40%   50%   60%   70%   80%   90%  100%           */
    1700, 1800, 2000, 2250, 2500, 2750, 3000, 3250, 3500, 4000, 4500,/* 1 -> 2 */
    1300, 1300, 1400, 1500, 1700, 2000, 2300, 2450, 3200, 3750, 4500,/* 2 -> 3 */
    1400, 1400, 1500, 1600, 1800, 2100, 2400, 2550, 3400, 3800, 4500,/* 3 -> 4 */
    1500, 1550, 1600, 1700, 1900, 2200, 2500, 2550, 3800, 4000, 4500 /* 4 -> 5 */
};

int16_t C_DIESEL_DOWNSHIFT_MAP[SHIFT_MAP_SIZE] = {
    /*                        Pedal position                                   */
    /*0%   10%   20%   30%   40%   50%   60%   70%   80%   90%  100%           */
     800,  900,  900,  900,  900,  900, 1000, 1200, 1300, 1400, 1500,/* 2 -> 1 */
     800,  900,  900, 1200, 1200, 1300, 1400, 1500, 1600, 1700, 1800,/* 3 -> 2 */
     900,  900,  900, 1200, 1200, 1300, 1400, 1500, 1600, 1700, 1800,/* 4 -> 3 */
     900,  900,  900, 1200, 1200, 1300, 1400, 1500, 1600, 1700, 1800 /* 5 -> 4 */
};

int16_t C_PETROL_UPSHIFT_MAP[SHIFT_MAP_SIZE] = {
    /*                        Pedal position                                   */
    /*0%   10%   20%   30%   40%   50%   60%   70%   80%   90%  100%           */
    1500, 1600, 1700, 1800, 1900, 2200, 2500, 3000, 3500, 4500, 6000,/* 1 -> 2 */
    1500, 1600, 1700, 1800, 1900, 2200, 2500, 3000, 3500, 4500, 6000,/* 2 -> 3 */
    1500, 1600, 1700, 1800, 1900, 2200, 2500, 3000, 3500, 4500, 6000,/* 3 -> 4 */
    1500, 1550, 1600, 1700, 1900, 2000, 2500, 3000, 3500, 4500, 6000 /* 4 -> 5 */
};

int16_t C_PETROL_DOWNSHIFT_MAP[SHIFT_MAP_SIZE] = {
    /*                        Pedal position                                   */
    /*0%   10%   20%   30%   40%   50%   60%   70%   80%   90%  100%           */
      75,  150,  300,  600,  900, 1200, 1400, 1600, 1800, 2000, 2200,/* 2 -> 1 */
     900,  900, 1000, 1100, 1200, 1300, 1400, 1600, 1800, 2000, 2200,/* 3 -> 2 */
     900,  900, 1000, 1100, 1200, 1300, 1400, 1600, 1800, 2000, 2200,/* 4 -> 3 */
    1000, 1050, 1100, 1200, 1300, 1400, 1500, 1600, 2000, 2400, 2800 /* 5 -> 4 */
};

/*
---------------------------------------------------------------------------------
                    AGILITY MODE MAPS
---------------------------------------------------------------------------------
*/

int16_t A_DIESEL_UPSHIFT_MAP[SHIFT_MAP_SIZE] = {
    /*                        Pedal position                                   */
    /*0%   10%   20%   30%   40%   50%   60%   70%   80%   90%  100%           */
    1500, 1750, 2000, 2250, 2500, 2750, 3000, 3250, 3500, 4000, 4500,/* 1 -> 2 */
    1500, 1550, 1600, 1650, 1700, 1750, 1800, 1850, 1900, 1950, 4500,/* 2 -> 3 */
    1500, 1550, 1600, 1650, 1700, 1750, 1800, 1850, 1900, 1950, 4500,/* 3 -> 4 */
    1500, 1550, 1600, 1650, 1700, 1750, 1800, 1850, 1900, 1950, 4500 /* 4 -> 5 */
};

int16_t A_DIESEL_DOWNSHIFT_MAP[SHIFT_MAP_SIZE] = {
    /*                        Pedal position                                   */
    /*0%   10%   20%   30%   40%   50%   60%   70%   80%   90%  100%           */
     900, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000,/* 2 -> 1 */
     900, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000,/* 3 -> 2 */
     900, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000,/* 4 -> 3 */
    1000, 1100, 1300, 1500, 1700, 1900, 2100, 2400, 2600, 2800, 3000 /* 5 -> 4 */
};

int16_t A_PETROL_UPSHIFT_MAP[SHIFT_MAP_SIZE] = {
    /*                        Pedal position                                   */
    /*0%   10%   20%   30%   40%   50%   60%   70%   80%   90%  100%           */
    1500, 1600, 1700, 1800, 1900, 2200, 2500, 3000, 3500, 4500, 6000,/* 1 -> 2 */
    1500, 1600, 1700, 1800, 1900, 2200, 2500, 3000, 3500, 4500, 6000,/* 2 -> 3 */
    1500, 1600, 1700, 1800, 1900, 2200, 2500, 3000, 3500, 4500, 6000,/* 3 -> 4 */
    1500, 1550, 1600, 1700, 1900, 2000, 2500, 3000, 3500, 4500, 6000 /* 4 -> 5 */
};

int16_t A_PETROL_DOWNSHIFT_MAP[SHIFT_MAP_SIZE] = {
    /*                        Pedal position                                   */
    /*0%   10%   20%   30%   40%   50%   60%   70%   80%   90%  100%           */
      75,  150,  300,  600,  900, 1200, 1400, 1600, 1800, 2000, 2200,/* 2 -> 1 */
     900,  900, 1000, 1100, 1200, 1300, 1400, 1600, 1800, 2000, 2200,/* 3 -> 2 */
     900,  900, 1000, 1100, 1200, 1300, 1400, 1600, 1800, 2000, 2200,/* 4 -> 3 */
    1000, 1050, 1100, 1200, 1300, 1400, 1500, 1600, 2000, 2400, 2800 /* 5 -> 4 */
};

/*
---------------------------------------------------------------------------------
                    MANUAL MODE MAPS - ONLY USED FOR AUTO DOWNSHIFT.
                    BY DEFAULT, MANUAL MODE DOES NOT AUTO UPSHIFT
                    SO ALL UPSHIFT VALUES ARE SET TO 9999.

                    DOWNSHIFT TABLES ARE NEEDED TO PROTECT THE GEARBOX!
                    THIS PREVENTS THE GEARBOX ENTERING A STATE WHERE IT CANNOT
                    CREATE ENOUGH PRESSURE TO KEEP THE CLUTCHES IN PLACE
                    WITH LOADS OF INPUT TORQUE, RESULTING IN SLIP.

                    MANUAL MAPS ARE NOT EDITABLE IN THE CONFIG APP!
---------------------------------------------------------------------------------
*/
int16_t M_DIESEL_UPSHIFT_MAP[SHIFT_MAP_SIZE] = {
    /*                        Pedal position                                   */
    /*0%   10%   20%   30%   40%   50%   60%   70%   80%   90%  100%           */
    9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999,/* 1 -> 2 */
    9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999,/* 2 -> 3 */
    9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999,/* 3 -> 4 */
    9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999 /* 4 -> 5 */
};

int16_t M_DIESEL_DOWNSHIFT_MAP[SHIFT_MAP_SIZE] = {
    /*                        Pedal position                                   */
    /*0%   10%   20%   30%   40%   50%   60%   70%   80%   90%  100%           */
     300,  350,  400,  450,  500,  550,  600,  650,  700,  750,  800,/* 2 -> 1 */
     400,  450,  500,  550,  600,  650,  700,  750,  800,  850,  900,/* 3 -> 2 */
     500,  550,  600,  650,  700,  750,  800,  850,  900,  950, 1000,/* 4 -> 3 */
     600,  650,  700,  750,  800,  850,  900,  950, 1000, 1050, 1100 /* 5 -> 4 */
};

int16_t M_PETROL_UPSHIFT_MAP[SHIFT_MAP_SIZE] = {
    /*                        Pedal position                                   */
    /*0%   10%   20%   30%   40%   50%   60%   70%   80%   90%  100%           */
    9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999,/* 1 -> 2 */
    9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999,/* 2 -> 3 */
    9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999,/* 3 -> 4 */
    9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999 /* 4 -> 5 */
};

int16_t M_PETROL_DOWNSHIFT_MAP[SHIFT_MAP_SIZE] = {
    /*                        Pedal position                                   */
    /*0%   10%   20%   30%   40%   50%   60%   70%   80%   90%  100%           */
      75,  150,  300,  450,  500,  550,  600,  650,  700,  750,  800,/* 2 -> 1 */
     400,  450,  500,  550,  600,  650,  700,  750,  800,  850,  900,/* 3 -> 2 */
     500,  550,  600,  650,  700,  750,  800,  850,  900,  950, 1000,/* 4 -> 3 */
     600,  650,  700,  750,  800,  850,  900,  950, 1000, 1050, 1100 /* 5 -> 4 */
};
