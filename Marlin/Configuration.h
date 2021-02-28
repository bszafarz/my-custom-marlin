/*
*    104NT-4-R025H42G (104GT-2) thermistor
*/
#define TEMP_SENSOR_0 5

/*
*    E-steps adjusted for BMG
*/

#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 415 }

/*
*    ABL (3Dtouch) related changes
*/
#define BLTOUCH
#define NOZZLE_TO_PROBE_OFFSET { 38.2, 0, -2.915 }
#define Z_SAFE_HOMING
#define AUTO_BED_LEVELING_BILINEAR
//#define MESH_BED_LEVELING
#define ENDSTOP_INTERRUPTS_FEATURE
#define XY_PROBE_SPEED (100*60)
#define PROBING_MARGIN 15
#define Z_MIN_PROBE_REPEATABILITY_TEST
#define RESTORE_LEVELING_AFTER_G28

/*
*    General settings suggested by reddit thread
*/
#define SHOW_CUSTOM_BOOTSCREEN
#define CUSTOM_STATUS_SCREEN_IMAGE
#define DEFAULT_MAX_FEEDRATE          { 150, 150, 20, 120 }
#define CLASSIC_JERK
#define TRAVEL_EXTRA_XYJERK 5.0
#define DEFAULT_EJERK    15.0
//#define S_CURVE_ACCELERATION
//#define LEVEL_BED_CORNERS
#define HOMING_FEEDRATE_XY (50*60)
#define LCD_LANGUAGE en
//#define DISPLAY_CHARSET_HD44780 WESTERN
#define FAN_SOFT_PWM

#define PIDTEMP
#define DEFAULT_Kp  24.97
#define DEFAULT_Ki   2.73
#define DEFAULT_Kd  57.06

#define PIDTEMPBED
#define DEFAULT_bedKp 61.52
#define DEFAULT_bedKi 11.81
#define DEFAULT_bedKd 213.68

#define PREHEAT_1_LABEL       "PETG"
#define PREHEAT_1_TEMP_HOTEND 200
#define PREHEAT_1_TEMP_BED     65
#define PREHEAT_1_FAN_SPEED   0

#define PREHEAT_2_LABEL       "PLA"
#define PREHEAT_2_TEMP_HOTEND 150
#define PREHEAT_2_TEMP_BED    50
#define PREHEAT_2_FAN_SPEED   0