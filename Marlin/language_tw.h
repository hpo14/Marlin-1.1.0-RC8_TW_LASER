/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * English
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_TW_H
#define LANGUAGE_TW_H
#define DISPLAY_CHARSET_tc_TW

#ifndef WELCOME_MSG
  #define WELCOME_MSG                         MACHINE_NAME " \xa7\xa8\x87\x88"
#endif
#ifndef MSG_SD_INSERTED
  #define MSG_SD_INSERTED                     "\xab\xac\xad\xae\xaf\xb0"
#endif
#ifndef MSG_SD_REMOVED
  #define MSG_SD_REMOVED                      "\xab\xac\xad\xae\xb1\xb2"
#endif
#ifndef MSG_LCD_ENDSTOPS
  #define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
#endif
#ifndef MSG_MAIN
  #define MSG_MAIN                            "\xb3\xb4\xb5"
#endif
#ifndef MSG_AUTOSTART
  #define MSG_AUTOSTART                       "\xb6\xb7\xb8\xb9"
#endif
#ifndef MSG_DISABLE_STEPPERS
  #define MSG_DISABLE_STEPPERS                "\xba\xbb\xbc\xbd\xbe\xb7"
#endif
#ifndef MSG_AUTO_HOME
  #define MSG_AUTO_HOME                       "\xb6\xb7\xbf\xc0\xc1"
#endif
#ifndef MSG_AUTO_HOME_X
  #define MSG_AUTO_HOME_X                     "Home X"
#endif
#ifndef MSG_AUTO_HOME_Y
  #define MSG_AUTO_HOME_Y                     "Home Y"
#endif
#ifndef MSG_AUTO_HOME_Z
  #define MSG_AUTO_HOME_Z                     "Home Z"
#endif
#ifndef MSG_LEVEL_BED_HOMING
  #define MSG_LEVEL_BED_HOMING                "\x89\x8a XYZ"
#endif
#ifndef MSG_LEVEL_BED_WAITING
  #define MSG_LEVEL_BED_WAITING               \x8b\x8c\xb8\xb9"
#endif
#ifndef MSG_LEVEL_BED_NEXT_POINT
  #define MSG_LEVEL_BED_NEXT_POINT            "Next Point"
#endif
#ifndef MSG_LEVEL_BED_DONE
  #define MSG_LEVEL_BED_DONE                  "\xeb\x9b\x8d\x8e"
#endif
#ifndef MSG_LEVEL_BED_CANCEL
  #define MSG_LEVEL_BED_CANCEL                "\x8f\x90"
#endif
#ifndef MSG_SET_HOME_OFFSETS
  #define MSG_SET_HOME_OFFSETS                "\xc2\xc3\xc0\xc1\x97\xcc"
#endif
#ifndef MSG_HOME_OFFSETS_APPLIED
  #define MSG_HOME_OFFSETS_APPLIED            "\xc0\xc1\x97\xcc\xae\xc2\xc3"
#endif
#ifndef MSG_SET_ORIGIN
  #define MSG_SET_ORIGIN                      "\xc2\xc3\xc0\xc1"
#endif
#ifndef MSG_PREHEAT_1
  #define MSG_PREHEAT_1                       "\xc4\xc5 PLA"
#endif
#ifndef MSG_PREHEAT_1_N
  #define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#endif
#ifndef MSG_PREHEAT_1_ALL
  #define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " \x93\x94"
#endif
#ifndef MSG_PREHEAT_1_BEDONLY
  #define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " \xc5\xd1"
#endif
#ifndef MSG_PREHEAT_1_SETTINGS
  #define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " \xc2\xc3"
#endif
#ifndef MSG_PREHEAT_2
  #define MSG_PREHEAT_2                       "\xc4\xc5 ABS"
#endif
#ifndef MSG_PREHEAT_2_N
  #define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#endif
#ifndef MSG_PREHEAT_2_ALL
  #define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " \x93\x94"
#endif
#ifndef MSG_PREHEAT_2_BEDONLY
  #define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " \xc5\xd1"
#endif
#ifndef MSG_PREHEAT_2_SETTINGS
  #define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " \xc2\xc3"
#endif
#ifndef MSG_COOLDOWN
  #define MSG_COOLDOWN                        "\x9f\xa0"
#endif
#ifndef MSG_SWITCH_PS_ON
  #define MSG_SWITCH_PS_ON                    "\xc8\xc9\xb8\x96"
#endif
#ifndef MSG_SWITCH_PS_OFF
  #define MSG_SWITCH_PS_OFF                   "\xc8\xc9\xba\xbb"
#endif
#ifndef MSG_EXTRUDE
  #define MSG_EXTRUDE                         "\xca\xb2"
#endif
#ifndef MSG_RETRACT
  #define MSG_RETRACT                         "\xbf\x9d"
#endif
#ifndef MSG_MOVE_AXIS
  #define MSG_MOVE_AXIS                       "\xcc\xb7\xcd"
#endif
#ifndef MSG_LEVEL_BED
  #define MSG_LEVEL_BED                       "\xeb\xec\x9b\x99"
#endif
#ifndef MSG_MOVE_X
  #define MSG_MOVE_X                          "\xcc\xb7\xff\xff X"
#endif
#ifndef MSG_MOVE_Y
  #define MSG_MOVE_Y                          "\xcc\xb7\xff\xff Y"
#endif
#ifndef MSG_MOVE_Z
  #define MSG_MOVE_Z                          "\xcc\xb7\xff\xff Z"
#endif
#ifndef MSG_MOVE_E
  #define MSG_MOVE_E                          "\xca\xb2\x98"
#endif
#ifndef MSG_MOVE_01MM
  #define MSG_MOVE_01MM                       "\xcc\xb7\xff\xff 0.1mm"
#endif
#ifndef MSG_MOVE_1MM
  #define MSG_MOVE_1MM                        "\xcc\xb7\xff\xff 1mm"
#endif
#ifndef MSG_MOVE_10MM
  #define MSG_MOVE_10MM                       "\xcc\xb7\xff\xff 10mm"
#endif
#ifndef MSG_SPEED
  #define MSG_SPEED                           "\xce\xff\xff\xcf"
#endif
#ifndef MSG_BED_Z
  #define MSG_BED_Z                           "Bed Z"
#endif
#ifndef MSG_NOZZLE
  #define MSG_NOZZLE                          "\xf9\xff\xff\xfa"
#endif
#ifndef MSG_BED
  #define MSG_BED                             "\xc5\xff\xff\xd1"
#endif
#ifndef MSG_FAN_SPEED
  #define MSG_FAN_SPEED                       "\xd2\xd3\xce\xcf"
#endif
#ifndef MSG_FLOW
  #define MSG_FLOW                            "\x92\xb2\xce\xcf"
#endif
#ifndef MSG_CONTROL
  #define MSG_CONTROL                         "\xd4\xd5"
#endif
#ifndef MSG_MIN
  #define MSG_MIN                             " " LCD_STR_THERMOMETER " \xd6\xd8"
#endif
#ifndef MSG_MAX
  #define MSG_MAX                             " " LCD_STR_THERMOMETER " \xd6\xd7"
#endif
#ifndef MSG_FACTOR
  #define MSG_FACTOR                          " " LCD_STR_THERMOMETER " \xd9\xda"
#endif
#ifndef MSG_AUTOTEMP
  #define MSG_AUTOTEMP                        "\xb6\xb7\xd4\xc7"
#endif
#ifndef MSG_ON
  #define MSG_ON                              "\xb8 "  //\xb8 intentional space to shift wide symbol to the left
#endif
#ifndef MSG_OFF
  #define MSG_OFF                             "\xba "  //\xba intentional space to shift wide symbol to the left
#endif
#ifndef MSG_PID_P
  #define MSG_PID_P                           "PID-P"
#endif
#ifndef MSG_PID_I
  #define MSG_PID_I                           "PID-I"
#endif
#ifndef MSG_PID_D
  #define MSG_PID_D                           "PID-D"
#endif
#ifndef MSG_PID_C
  #define MSG_PID_C                           "PID-C"
#endif
#ifndef MSG_SELECT
  #define MSG_SELECT                          "Select"
#endif
#ifndef MSG_ACC
  #define MSG_ACC                             "Accel"
#endif
#ifndef MSG_VX_JERK
  #define MSG_VX_JERK                         "Vx-jerk"
#endif
#ifndef MSG_VY_JERK
  #define MSG_VY_JERK                         "Vy-jerk"
#endif
#ifndef MSG_VZ_JERK
  #define MSG_VZ_JERK                         "Vz-jerk"
#endif
#ifndef MSG_VE_JERK
  #define MSG_VE_JERK                         "Ve-jerk"
#endif
#ifndef MSG_VMAX
  #define MSG_VMAX                            "Vmax "
#endif
#ifndef MSG_VMIN
  #define MSG_VMIN                            "Vmin"
#endif
#ifndef MSG_VTRAV_MIN
  #define MSG_VTRAV_MIN                       "VTrav min"
#endif
#ifndef MSG_AMAX
  #define MSG_AMAX                            "Amax "
#endif
#ifndef MSG_A_RETRACT
  #define MSG_A_RETRACT                       "A-retract"
#endif
#ifndef MSG_A_TRAVEL
  #define MSG_A_TRAVEL                        "A-travel"
#endif
#ifndef MSG_XSTEPS
  #define MSG_XSTEPS                          "Xsteps/mm"
#endif
#ifndef MSG_YSTEPS
  #define MSG_YSTEPS                          "Ysteps/mm"
#endif
#ifndef MSG_ZSTEPS
  #define MSG_ZSTEPS                          "Zsteps/mm"
#endif
#ifndef MSG_ESTEPS
  #define MSG_ESTEPS                          "Esteps/mm"
#endif
#ifndef MSG_TEMPERATURE
  #define MSG_TEMPERATURE                     "\xc7\xcf"
#endif
#ifndef MSG_MOTION
  #define MSG_MOTION                          "\xb7\xf5"
#endif
#ifndef MSG_VOLUMETRIC
  #define MSG_VOLUMETRIC                      "\xf7\xf8"
#endif
#ifndef MSG_VOLUMETRIC_ENABLED
  #define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#endif
#ifndef MSG_FILAMENT_DIAM
  #define MSG_FILAMENT_DIAM                   "Fil. Dia."
#endif
#ifndef MSG_CONTRAST
  #define MSG_CONTRAST                        "LCD contrast"
#endif
#ifndef MSG_STORE_EPROM
  #define MSG_STORE_EPROM                     "Store memory"
#endif
#ifndef MSG_LOAD_EPROM
  #define MSG_LOAD_EPROM                      "Load memory"
#endif
#ifndef MSG_RESTORE_FAILSAFE
  #define MSG_RESTORE_FAILSAFE                "\xe6\xe7\xc0\xc2\xc3"
#endif
#ifndef MSG_REFRESH
  #define MSG_REFRESH                         "\xe9\xea"
#endif
#ifndef MSG_WATCH
  #define MSG_WATCH                           "\xdb\xdc\xdd\xde"
#endif
#ifndef MSG_PREPARE
  #define MSG_PREPARE                         "\xa7\xa8"
#endif
#ifndef MSG_TUNE
  #define MSG_TUNE                            "\xeb\xec"
#endif
#ifndef MSG_PAUSE_PRINT
  #define MSG_PAUSE_PRINT                     "\xed\xee\xa9\xaa"
#endif
#ifndef MSG_RESUME_PRINT
  #define MSG_RESUME_PRINT                    "\xef\xf0\xa9\xaa"
#endif
#ifndef MSG_STOP_PRINT
  #define MSG_STOP_PRINT                      "\xee\xf1\xa9\xaa"
#endif
#ifndef MSG_CARD_MENU
  #define MSG_CARD_MENU                       "\xab\xac\xad"
#endif
#ifndef MSG_NO_CARD
  #define MSG_NO_CARD                         "\xdf\xaf\xad"
#endif
#ifndef MSG_DWELL
  #define MSG_DWELL                           "Sleep..."
#endif
#ifndef MSG_USERWAIT
  #define MSG_USERWAIT                        "Wait for user..."
#endif
#ifndef MSG_RESUMING
  #define MSG_RESUMING                        "Resuming print"
#endif
#ifndef MSG_PRINT_ABORTED
  #define MSG_PRINT_ABORTED                   "Print aborted"
#endif
#ifndef MSG_NO_MOVE
  #define MSG_NO_MOVE                         "No move."
#endif
#ifndef MSG_KILLED
  #define MSG_KILLED                          "KILLED. "
#endif
#ifndef MSG_STOPPED
  #define MSG_STOPPED                         "STOPPED. "
#endif
#ifndef MSG_CONTROL_RETRACT
  #define MSG_CONTROL_RETRACT                 "Retract mm"
#endif
#ifndef MSG_CONTROL_RETRACT_SWAP
  #define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
#endif
#ifndef MSG_CONTROL_RETRACTF
  #define MSG_CONTROL_RETRACTF                "Retract  V"
#endif
#ifndef MSG_CONTROL_RETRACT_ZLIFT
  #define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVER
  #define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVER_SWAP
  #define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet+mm"
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVERF
  #define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#endif
#ifndef MSG_AUTORETRACT
  #define MSG_AUTORETRACT                     "AutoRetr."
#endif
#ifndef MSG_FILAMENTCHANGE
  #define MSG_FILAMENTCHANGE                  "Change filament"
#endif
#ifndef MSG_INIT_SDCARD
  #define MSG_INIT_SDCARD                     "Init. SD card"
#endif
#ifndef MSG_CNG_SDCARD
  #define MSG_CNG_SDCARD                      "Change SD card"
#endif
#ifndef MSG_ZPROBE_OUT
  #define MSG_ZPROBE_OUT                      "Z probe out. bed"
#endif
#ifndef MSG_BLTOUCH_SELFTEST
  #define MSG_BLTOUCH_SELFTEST                "BLTouch Self-Test"
#endif
#ifndef MSG_BLTOUCH_RESET
  #define MSG_BLTOUCH_RESET                   "Reset BLTouch"
#endif
#ifndef MSG_HOME
  #define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#endif
#ifndef MSG_FIRST
  #define MSG_FIRST                           "first"
#endif
#ifndef MSG_ZPROBE_ZOFFSET
  #define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#endif
#ifndef MSG_BABYSTEP_X
  #define MSG_BABYSTEP_X                      "Babystep X"
#endif
#ifndef MSG_BABYSTEP_Y
  #define MSG_BABYSTEP_Y                      "Babystep Y"
#endif
#ifndef MSG_BABYSTEP_Z
  #define MSG_BABYSTEP_Z                      "Babystep Z"
#endif
#ifndef MSG_ENDSTOP_ABORT
  #define MSG_ENDSTOP_ABORT                   "Endstop abort"
#endif
#ifndef MSG_HEATING_FAILED_LCD
  #define MSG_HEATING_FAILED_LCD              "Heating failed"
#endif
#ifndef MSG_ERR_REDUNDANT_TEMP
  #define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP"
#endif
#ifndef MSG_THERMAL_RUNAWAY
  #define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#endif
#ifndef MSG_ERR_MAXTEMP
  #define MSG_ERR_MAXTEMP                     "Err: MAXTEMP"
#endif
#ifndef MSG_ERR_MINTEMP
  #define MSG_ERR_MINTEMP                     "Err: MINTEMP"
#endif
#ifndef MSG_ERR_MAXTEMP_BED
  #define MSG_ERR_MAXTEMP_BED                 "Err: MAXTEMP BED"
#endif
#ifndef MSG_ERR_MINTEMP_BED
  #define MSG_ERR_MINTEMP_BED                 "Err: MINTEMP BED"
#endif
#ifndef MSG_ERR_Z_HOMING
  #define MSG_ERR_Z_HOMING                    "G28 Z Forbidden"
#endif
#ifndef MSG_HALTED
  #define MSG_HALTED                          "PRINTER HALTED"
#endif
#ifndef MSG_PLEASE_RESET
  #define MSG_PLEASE_RESET                    "Please reset"
#endif
#ifndef MSG_SHORT_DAY
  #define MSG_SHORT_DAY                       "d" // One character only
#endif
#ifndef MSG_SHORT_HOUR
  #define MSG_SHORT_HOUR                      "h" // One character only
#endif
#ifndef MSG_SHORT_MINUTE
  #define MSG_SHORT_MINUTE                    "m" // One character only
#endif
#ifndef MSG_HEATING
  #define MSG_HEATING                         "Heating..."
#endif
#ifndef MSG_HEATING_COMPLETE
  #define MSG_HEATING_COMPLETE                "Heating done."
#endif
#ifndef MSG_BED_HEATING
  #define MSG_BED_HEATING                     "Bed Heating."
#endif
#ifndef MSG_BED_DONE
  #define MSG_BED_DONE                        "Bed done."
#endif
#ifndef MSG_DELTA_CALIBRATE
  #define MSG_DELTA_CALIBRATE                 "Delta Calibration"
#endif
#ifndef MSG_DELTA_CALIBRATE_X
  #define MSG_DELTA_CALIBRATE_X               "/xfb/xa7 X"
#endif
#ifndef MSG_DELTA_CALIBRATE_Y
  #define MSG_DELTA_CALIBRATE_Y               "/xfb/xa7 Y"
#endif
#ifndef MSG_DELTA_CALIBRATE_Z
  #define MSG_DELTA_CALIBRATE_Z               "/xfb/xa7 Z"
#endif
#ifndef MSG_DELTA_CALIBRATE_CENTER
  #define MSG_DELTA_CALIBRATE_CENTER          "/xfb/xa7/xa5/x91"
#endif

#ifndef MSG_INFO_MENU
  #define MSG_INFO_MENU                       "About Printer"
#endif
#ifndef MSG_INFO_PRINTER_MENU
  #define MSG_INFO_PRINTER_MENU               "Printer Info"
#endif
#ifndef MSG_INFO_STATS_MENU
  #define MSG_INFO_STATS_MENU                 "Printer Stats"
#endif
#ifndef MSG_INFO_BOARD_MENU
  #define MSG_INFO_BOARD_MENU                 "Board Info"
#endif
#ifndef MSG_INFO_THERMISTOR_MENU
  #define MSG_INFO_THERMISTOR_MENU            "Thermistors"
#endif
#ifndef MSG_INFO_EXTRUDERS
  #define MSG_INFO_EXTRUDERS                  "Extruders"
#endif
#ifndef MSG_INFO_BAUDRATE
  #define MSG_INFO_BAUDRATE                   "Baud"
#endif
#ifndef MSG_INFO_PROTOCOL
  #define MSG_INFO_PROTOCOL                   "Protocol"
#endif
#ifndef MSG_LIGHTS_ON
  #define MSG_LIGHTS_ON                       "Case light on"
#endif
#ifndef MSG_LIGHTS_OFF
  #define MSG_LIGHTS_OFF                      "Case light off"
#endif

#if LCD_WIDTH >= 20
  #ifndef MSG_INFO_PRINT_COUNT
    #define MSG_INFO_PRINT_COUNT              "Print Count"
  #endif
  #ifndef MSG_INFO_COMPLETED_PRINTS
    #define MSG_INFO_COMPLETED_PRINTS         "Completed"
  #endif
  #ifndef MSG_INFO_PRINT_TIME
    #define MSG_INFO_PRINT_TIME               "Total print time"
  #endif
  #ifndef MSG_INFO_PRINT_LONGEST
    #define MSG_INFO_PRINT_LONGEST            "Longest job time"
  #endif
  #ifndef MSG_INFO_PRINT_FILAMENT
    #define MSG_INFO_PRINT_FILAMENT           "Extruded total"
  #endif
#else
  #ifndef MSG_INFO_PRINT_COUNT
    #define MSG_INFO_PRINT_COUNT              "Prints"
  #endif
  #ifndef MSG_INFO_COMPLETED_PRINTS
    #define MSG_INFO_COMPLETED_PRINTS         "Completed"
  #endif
  #ifndef MSG_INFO_PRINT_TIME
    #define MSG_INFO_PRINT_TIME               "Total"
  #endif
  #ifndef MSG_INFO_PRINT_LONGEST
    #define MSG_INFO_PRINT_LONGEST            "Longest"
  #endif
  #ifndef MSG_INFO_PRINT_FILAMENT
    #define MSG_INFO_PRINT_FILAMENT           "Extruded"
  #endif
#endif

#ifndef MSG_INFO_MIN_TEMP
  #define MSG_INFO_MIN_TEMP                   "Min Temp"
#endif
#ifndef MSG_INFO_MAX_TEMP
  #define MSG_INFO_MAX_TEMP                   "Max Temp"
#endif
#ifndef MSG_INFO_PSU
  #define MSG_INFO_PSU                        "Power Supply"
#endif

#ifndef MSG_DRIVE_STRENGTH
  #define MSG_DRIVE_STRENGTH                  "Drive Strength"
#endif
#ifndef MSG_DAC_PERCENT
  #define MSG_DAC_PERCENT                     "Driver %"
#endif
#ifndef MSG_DAC_EEPROM_WRITE
  #define MSG_DAC_EEPROM_WRITE                "DAC EEPROM Write"
#endif
#ifndef MSG_FILAMENT_CHANGE_HEADER
  #define MSG_FILAMENT_CHANGE_HEADER          "CHANGE FILAMENT"
#endif
#ifndef MSG_FILAMENT_CHANGE_OPTION_HEADER
  #define MSG_FILAMENT_CHANGE_OPTION_HEADER   "CHANGE OPTIONS:"
#endif
#ifndef MSG_FILAMENT_CHANGE_OPTION_EXTRUDE
  #define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extrude more"
#endif
#ifndef MSG_FILAMENT_CHANGE_OPTION_RESUME
  #define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Resume print"
#endif

//
// Filament Change screens show up to 3 lines on a 4-line display
//                        ...or up to 2 lines on a 3-line display
//
#if LCD_HEIGHT >= 4
  #ifndef MSG_FILAMENT_CHANGE_INIT_1
    #define MSG_FILAMENT_CHANGE_INIT_1          "Wait for start"
    #define MSG_FILAMENT_CHANGE_INIT_2          "of the filament"
    #define MSG_FILAMENT_CHANGE_INIT_3          "change"
  #endif
  #ifndef MSG_FILAMENT_CHANGE_UNLOAD_1
    #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Wait for"
    #define MSG_FILAMENT_CHANGE_UNLOAD_2        "filament unload"
  #endif
  #ifndef MSG_FILAMENT_CHANGE_INSERT_1
    #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert filament"
    #define MSG_FILAMENT_CHANGE_INSERT_2        "and press button"
    #define MSG_FILAMENT_CHANGE_INSERT_3        "to continue..."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_LOAD_1
    #define MSG_FILAMENT_CHANGE_LOAD_1          "Wait for"
    #define MSG_FILAMENT_CHANGE_LOAD_2          "filament load"
  #endif
  #ifndef MSG_FILAMENT_CHANGE_EXTRUDE_1
    #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Wait for"
    #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "filament extrude"
  #endif
  #ifndef MSG_FILAMENT_CHANGE_RESUME_1
    #define MSG_FILAMENT_CHANGE_RESUME_1        "Wait for print"
    #define MSG_FILAMENT_CHANGE_RESUME_2        "to resume"
  #endif
#else // LCD_HEIGHT < 4
  #ifndef MSG_FILAMENT_CHANGE_INIT_1
    #define MSG_FILAMENT_CHANGE_INIT_1          "Please wait..."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_UNLOAD_1
    #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Ejecting..."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_INSERT_1
    #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert and Click"
  #endif
  #ifndef MSG_FILAMENT_CHANGE_LOAD_1
    #define MSG_FILAMENT_CHANGE_LOAD_1          "Loading..."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_EXTRUDE_1
    #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Extruding..."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_RESUME_1
    #define MSG_FILAMENT_CHANGE_RESUME_1        "Resuming..."
  #endif
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_EN_H
