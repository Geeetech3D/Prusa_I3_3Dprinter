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
 * Italian
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_IT_H
#define LANGUAGE_IT_H

#define MAPPER_C2C3
#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME _UxGT("*** Pronto ***")
#define MSG_BACK                            _UxGT("Indietro")
#define MSG_SD_INSERTED                     _UxGT("SD Card inserita")
#define MSG_SD_REMOVED                      _UxGT("SD Card rimossa")
#define MSG_LCD_ENDSTOPS                    _UxGT("Finecorsa")
#define MSG_MAIN                            _UxGT("Menu principale")
#define MSG_AUTOSTART                       _UxGT("Autostart")
#define MSG_DISABLE_STEPPERS                _UxGT("Disabilita Motori")
#define MSG_DEBUG_MENU                      _UxGT("Menu di debug")
#define MSG_PROGRESS_BAR_TEST               _UxGT("Test barra avanzamento")
#define MSG_AUTO_HOME                       _UxGT("Auto Home")
#define MSG_AUTO_HOME_X                     _UxGT("Home asse X")
#define MSG_AUTO_HOME_Y                     _UxGT("Home asse Y")
#define MSG_AUTO_HOME_Z                     _UxGT("Home asse Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("Home assi XYZ")
#define MSG_LEVEL_BED_WAITING               _UxGT("Premi per iniziare")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Punto successivo")
#define MSG_LEVEL_BED_DONE                  _UxGT("Livellamento terminato!")
#define MSG_Z_FADE_HEIGHT                   _UxGT("Fade Height")
#define MSG_SET_HOME_OFFSETS                _UxGT("Imposta offset home")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Offset applicato")
#define MSG_SET_ORIGIN                      _UxGT("Imposta Origine")
#define MSG_PREHEAT_1                       _UxGT("Preriscalda PLA")
#define MSG_PREHEAT_1_N                     _UxGT("Prerisc. PLA ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1_N _UxGT("Tutto")
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1_N _UxGT("Ugello")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1_N _UxGT("Piatto")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1_N _UxGT("Conf")
#define MSG_PREHEAT_2                       _UxGT("Preriscalda PETG")
#define MSG_PREHEAT_2_N                     _UxGT("Prerisc. PETG ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2_N _UxGT("Tutto")
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2_N _UxGT("Ugello")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2_N _UxGT("Piatto")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2_N _UxGT("Conf")
#define MSG_COOLDOWN                        _UxGT("Raffredda")
#define MSG_SWITCH_PS_ON                    _UxGT("Accendi alimentatore")
#define MSG_SWITCH_PS_OFF                   _UxGT("Spegni alimentatore")
#define MSG_EXTRUDE                         _UxGT("Estrudi")
#define MSG_RETRACT                         _UxGT("Ritrai")
#define MSG_MOVE_AXIS                       _UxGT("Muovi Asse")
#define MSG_BED_LEVELING                    _UxGT("Livella piano")
#define MSG_LEVEL_BED                       _UxGT("Livella piano")
#define MSG_EDITING_STOPPED                 _UxGT("Modifica Mesh Fermata")
#define MSG_USER_MENU                       _UxGT("Comandi Utente")
#define MSG_LEVEL_CORNERS                   _UxGT("Livella Angoli")

#define MSG_UBL_DOING_G29                   _UxGT("G29 in corso")
#define MSG_UBL_UNHOMED                     _UxGT("Home XYZ prima")
#define MSG_UBL_TOOLS                       _UxGT("Strumenti UBL")
#define MSG_UBL_LEVEL_BED                   _UxGT("Unified Bed Leveling")
#define MSG_UBL_MANUAL_MESH                 _UxGT("Mesh Manuale")
#define MSG_UBL_BC_INSERT                   _UxGT("Metti spessore & misura")
#define MSG_UBL_BC_INSERT2                  _UxGT("Misura")
#define MSG_UBL_BC_REMOVE                   _UxGT("Rimuovi & misura piatto")
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("Spostamento sucessivo")
#define MSG_UBL_ACTIVATE_MESH               _UxGT("Attiva UBL")
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("Disattiva UBL")
#define MSG_UBL_SET_BED_TEMP                _UxGT("Temperatura Piatto")
#define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP             _UxGT("Temperatura Ugello")
#define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("Modifica Mesh Personalizzata")
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("Ritocco Fine Mesh")
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("Modifica Mesh Terminata")
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("Crea Mesh Personalizzata")
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("Crea Mesh")
#define MSG_UBL_BUILD_PLA_MESH              _UxGT("Crea PLA Mesh")
#define MSG_UBL_BUILD_ABS_MESH              _UxGT("Crea PETG Mesh")
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("Crea Mesh a freddo")
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("Aggiusta Altezza Mesh")
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("Altezza")
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("Valida Mesh")
#define MSG_UBL_VALIDATE_PLA_MESH           _UxGT("Valida PLA Mesh")
#define MSG_UBL_VALIDATE_ABS_MESH           _UxGT("Valida PETG Mesh")
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("Valida Mesh Personalizzata")
#define MSG_UBL_CONTINUE_MESH               _UxGT("Continua Mesh")
#define MSG_UBL_MESH_LEVELING               _UxGT("Livellamento Mesh")
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("Livellamento 3 Punti")
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("Livellamento Griglia Mesh")
#define MSG_UBL_MESH_LEVEL                  _UxGT("Livella Mesh")
#define MSG_UBL_SIDE_POINTS                 _UxGT("Punti laterali")
#define MSG_UBL_MAP_TYPE                    _UxGT("Tipo di Mappa")
#define MSG_UBL_OUTPUT_MAP                  _UxGT("Esporta Mappa")
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("Esporta per Host")
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("Esporta in CSV")
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("Backup esterno")
#define MSG_UBL_INFO_UBL                    _UxGT("Esporta Info UBL")
#define MSG_UBL_EDIT_MESH_MENU              _UxGT("Modifica Mesh")
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("Riempimento")
#define MSG_UBL_MANUAL_FILLIN               _UxGT("Riempimento Manuale")
#define MSG_UBL_SMART_FILLIN                _UxGT("Riempimento Smart")
#define MSG_UBL_FILLIN_MESH                 _UxGT("Riempimento Mesh")
#define MSG_UBL_INVALIDATE_ALL              _UxGT("Invalida Tutto")
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("Invalida Punto Vicino")
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("Ritocca Tutto")
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("Ritocca Punto Vicino")
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("Mesh Salvate")
#define MSG_UBL_STORAGE_SLOT                _UxGT("Slot di memoria")
#define MSG_UBL_LOAD_MESH                   _UxGT("Carica Mesh Piatto")
#define MSG_UBL_SAVE_MESH                   _UxGT("Salva Mesh Piatto")
#define MSG_UBL_SAVE_ERROR                  _UxGT("Errore: Salvataggio UBL")
#define MSG_UBL_RESTORE_ERROR               _UxGT("Errore: Ripristino UBL")
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Z-Offset Fermato")
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("UBL passo passo")

#define MSG_MOVING                          _UxGT("In movimento ...")
#define MSG_FREE_XY                         _UxGT("XY liberi")
#define MSG_MOVE_X                          _UxGT("Muovi X")
#define MSG_MOVE_Y                          _UxGT("Muovi Y")
#define MSG_MOVE_Z                          _UxGT("Muovi Z")
#define MSG_MOVE_E                          _UxGT("Estrusore")
#define MSG_MOVE_01MM                       _UxGT("Muovi di 0.1mm")
#define MSG_MOVE_1MM                        _UxGT("Muovi di   1mm")
#define MSG_MOVE_10MM                       _UxGT("Muovi di  10mm")
#define MSG_SPEED                           _UxGT("Velocità")
#define MSG_BED_Z                           _UxGT("Piatto Z")
#define MSG_NOZZLE                          _UxGT("Ugello")
#define MSG_BED                             _UxGT("Piatto")
#define MSG_FAN_SPEED                       _UxGT("Velocità ventola")
#define MSG_FLOW                            _UxGT("Flusso")
#define MSG_CONTROL                         _UxGT("Controllo")
#define MSG_MIN                             LCD_STR_THERMOMETER _UxGT(" Minimo")
#define MSG_MAX                             LCD_STR_THERMOMETER _UxGT(" Massimo")
#define MSG_FACTOR                          LCD_STR_THERMOMETER _UxGT(" Fattore")
#define MSG_AUTOTEMP                        _UxGT("Autotemp")
#define MSG_ON                              _UxGT("On")
#define MSG_OFF                             _UxGT("Off")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("Seleziona")
#define MSG_ACC                             _UxGT("Accelerazione")
#define MSG_JERK                            _UxGT("Jerk")
#define MSG_VX_JERK                         _UxGT("VX-jerk")
#define MSG_VY_JERK                         _UxGT("VY-jerk")
#define MSG_VZ_JERK                         _UxGT("VZ-jerk")
#define MSG_VE_JERK                         _UxGT("VE-jerk")
#define MSG_VELOCITY                        _UxGT("Velocità")
#define MSG_VMAX                            _UxGT("Velocità massima")
#define MSG_VMIN                            _UxGT("Velocità minima")
#define MSG_VTRAV_MIN                       _UxGT("Vel. Viaggio Min.")
#define MSG_ACCELERATION                    _UxGT("Accelerazione")
#define MSG_AMAX                            _UxGT("Accel. Massima")
#define MSG_A_RETRACT                       _UxGT("Accel. Retrazione")
#define MSG_A_TRAVEL                        _UxGT("Accel. Spostamento")
#define MSG_STEPS_PER_MM                    _UxGT("Passi/mm")
#define MSG_XSTEPS                          _UxGT(" X passi/mm")
#define MSG_YSTEPS                          _UxGT(" Y passi/mm")
#define MSG_ZSTEPS                          _UxGT(" Z passi/mm")
#define MSG_ESTEPS                          _UxGT(" E passi/mm")
#define MSG_E1STEPS                         _UxGT("E1 passi/mm")
#define MSG_E2STEPS                         _UxGT("E2 passi/mm")
#define MSG_E3STEPS                         _UxGT("E3 passi/mm")
#define MSG_E4STEPS                         _UxGT("E4 passi/mm")
#define MSG_E5STEPS                         _UxGT("E5 passi/mm")
#define MSG_TEMPERATURE                     _UxGT("Temperatura")
#define MSG_MOTION                          _UxGT("Movimento")
#define MSG_FILAMENT                        _UxGT("Filamento")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("Diametro filamento")
#define MSG_ADVANCE_K                       _UxGT("K Avanzamento")
#define MSG_CONTRAST                        _UxGT("Contrasto LCD")
#define MSG_STORE_EEPROM                    _UxGT("Salva in memoria")
#define MSG_LOAD_EEPROM                     _UxGT("Carica da memoria")
#define MSG_RESTORE_FAILSAFE                _UxGT("Ripristina impostazione")
#define MSG_INIT_EEPROM                     _UxGT("Inizializza EEPROM")
#define MSG_REFRESH                         _UxGT("Aggiorna")
#define MSG_WATCH                           _UxGT("Guarda")
#define MSG_PREPARE                         _UxGT("Prepara")
#define MSG_TUNE                            _UxGT("Regola")
#define MSG_PAUSE_PRINT                     _UxGT("Pausa")
#define MSG_RESUME_PRINT                    _UxGT("Riprendi stampa")
#define MSG_STOP_PRINT                      _UxGT("Arresta stampa")
#define MSG_CARD_MENU                       _UxGT("Stampa da SD")
#define MSG_NO_CARD                         _UxGT("SD non presente")
#define MSG_DWELL                           _UxGT("Sospensione ...")
#define MSG_USERWAIT                        _UxGT("Premi tasto (*)")
#define MSG_PRINT_PAUSED                    _UxGT("Stampa sospesa")
#define MSG_RESUMING                        _UxGT("Riprendi Stampa")
#define MSG_PRINT_ABORTED                   _UxGT("Stampa annullata")
#define MSG_NO_MOVE                         _UxGT("Nessun Movimento")
#define MSG_KILLED                          _UxGT("UCCISO.")
#define MSG_STOPPED                         _UxGT("ARRESTATO.")
#define MSG_CONTROL_RETRACT                 _UxGT("Retrazione mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Sostituzione Filamento mm")
#define MSG_CONTROL_RETRACTF                _UxGT("Velocità")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Solleva mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("Deritrai mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("Carica Filamento mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("Velocità Ricarica")
#define MSG_AUTORETRACT                     _UxGT("AutoRitrazione")
#define MSG_FILAMENTCHANGE                  _UxGT("Cambia filamento")
#define MSG_INIT_SDCARD                     _UxGT("Inizializza SD-Card")
#define MSG_CNG_SDCARD                      _UxGT("Cambia SD-Card")
#define MSG_ZPROBE_OUT                      _UxGT("Z probe fuori piatto")
#define MSG_BLTOUCH                         _UxGT("BLTouch")
#define MSG_BLTOUCH_SELFTEST                _UxGT("Autotest BLTouch")
#define MSG_BLTOUCH_RESET                   _UxGT("Resetta BLTouch")
#define MSG_BLTOUCH_DEPLOY                  _UxGT("Estendi BLTouch")
#define MSG_BLTOUCH_STOW                    _UxGT("Ritrai BLTouch")
#define MSG_HOME                            _UxGT("Home")  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("Prima")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z Offset")
#define MSG_BABYSTEP_X                      _UxGT("Babystep X")
#define MSG_BABYSTEP_Y                      _UxGT("Babystep Y")
#define MSG_BABYSTEP_Z                      _UxGT("Babystep Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Finecorsa fermato")
#define MSG_HEATING_FAILED_LCD              _UxGT("Riscaldamento Fallito")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("Errore: TEMP RIDONDANTI")
#define MSG_THERMAL_RUNAWAY                 _UxGT("TEMPERATURA FUORI CONTROLLO")
#define MSG_ERR_MAXTEMP                     _UxGT("Errore: TEMP MASSIMA")
#define MSG_ERR_MINTEMP                     _UxGT("Errore: TEMP MINIMA")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("Errore: TEMP MASSIMA PIATTO")
#define MSG_ERR_MINTEMP_BED                 _UxGT("Errore: TEMP MINIMA PIATTO")
#define MSG_ERR_Z_HOMING                    _UxGT("Errore: Z-Home")
#define MSG_HALTED                          _UxGT("STAMPANTE FERMATA")
#define MSG_PLEASE_RESET                    _UxGT("Riavviare prego")
#define MSG_SHORT_DAY                       _UxGT("g") // One character only
#define MSG_SHORT_HOUR                      _UxGT("h") // One character only
#define MSG_SHORT_MINUTE                    _UxGT("m") // One character only
#define MSG_HEATING                         _UxGT("Riscaldamento <^>")
#define MSG_HEATING_COMPLETE                _UxGT("Riscaldamento completato")
#define MSG_BED_HEATING                     _UxGT("Riscaldamento Piatto <^>")
#define MSG_BED_DONE                        _UxGT("Piatto Pronto")
#define MSG_DELTA_CALIBRATE                 _UxGT("Calibrazione Delta")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Calibrazione X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Calibrazione Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Calibrazione Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Calibrazione Centro")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Auto calibrazione")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Impostazioni altezza Delta")
#define MSG_INFO_MENU                       _UxGT("Info stampante")
#define MSG_INFO_PRINTER_MENU               _UxGT("Info stampante")
#define MSG_3POINT_LEVELING                 _UxGT("Livellamento 3 punti")
#define MSG_LINEAR_LEVELING                 _UxGT("Livellamento Lineare")
#define MSG_BILINEAR_LEVELING               _UxGT("Livellamento BLiniare")
#define MSG_UBL_LEVELING                    _UxGT("Livellamento UBL")
#define MSG_MESH_LEVELING                   _UxGT("Livellamento Mesh")
#define MSG_INFO_STATS_MENU                 _UxGT("Statistiche")
#define MSG_INFO_BOARD_MENU                 _UxGT("Info Scheda")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Termistori")
#define MSG_INFO_EXTRUDERS                  _UxGT("Estrusori")
#define MSG_INFO_BAUDRATE                   _UxGT("Baud")
#define MSG_INFO_PROTOCOL                   _UxGT("Protocollo")
#define MSG_CASE_LIGHT                      _UxGT("Luci Case")
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("Luminosità Luci")

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Contatore stampa")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Completati")
  #define MSG_INFO_PRINT_TIME               _UxGT("Tempo totale")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Lavoro più lungo")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Totale estruso")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Stampe")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Completati")
  #define MSG_INFO_PRINT_TIME               _UxGT("Durata")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Più lungo")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Estruso")
#endif
#define MSG_INFO_MIN_TEMP                   _UxGT("Temp. Minima")
#define MSG_INFO_MAX_TEMP                   _UxGT("Temp. Massima")
#define MSG_INFO_PSU                        _UxGT("Alimentatore")

#define MSG_DRIVE_STRENGTH                  _UxGT("Potenza Drive")
#define MSG_DAC_PERCENT                     _UxGT("Driver %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("Scrivi DAC EEPROM")

#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("STAMPA IN PAUSA")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("OPZIONI:")
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("Estrudi ancora")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Riprendi stampa")
#define MSG_FILAMENT_CHANGE_MINTEMP         _UxGT("Temperatura minima è ")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Ugello: ")
#define MSG_FILAMENT_ERROR                  _UxGT("Errore: Nessun Filamento")
#define MSG_HOTEND_TOO_COLD                 _UxGT("Hotend Freddo")
#define MSG_RUNOUT_SENSORS                  _UxGT("Sensore Filamento")
#define MSG_POWER_OUTAGE                    _UxGT("Perdita Alimentazione")
#define MSG_CANCEL_PRINT                    _UxGT("Cancella Stampa")
#define MSG_HW_VER                       	  _UxGT("HW: V")
#define MSG_FW_VER                        	_UxGT("Versione FW: V1.1.8")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Attendere avvio")
  #define MSG_FILAMENT_CHANGE_INIT_2        _UxGT("del cambio")
  #define MSG_FILAMENT_CHANGE_INIT_3        _UxGT("di filamento")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Attendere")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2      _UxGT("l'espulsione")
  #define MSG_FILAMENT_CHANGE_UNLOAD_3      _UxGT("del filamento")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Inserisci il")
  #define MSG_FILAMENT_CHANGE_INSERT_2      _UxGT("filamento e")
  #define MSG_FILAMENT_CHANGE_INSERT_3      _UxGT("premi per continuare")
  #define MSG_FILAMENT_CHANGE_HEAT_1        _UxGT("Premi per")
  #define MSG_FILAMENT_CHANGE_HEAT_2        _UxGT("riscaldameto ugello.")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Riscaldamento ugello")
  #define MSG_FILAMENT_CHANGE_HEATING_2     _UxGT("Attendere ...")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Attendere")
  #define MSG_FILAMENT_CHANGE_LOAD_2        _UxGT("il caricamento")
  #define MSG_FILAMENT_CHANGE_LOAD_3        _UxGT("del filamento ...")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1     _UxGT("Attendere")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2     _UxGT("l'estrusione")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_3     _UxGT("del filamento ...")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Attendere")
  #define MSG_FILAMENT_CHANGE_RESUME_2      _UxGT("la ripresa")
  #define MSG_FILAMENT_CHANGE_RESUME_3      _UxGT("della stampa ...")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Attendere...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Espulsione...")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Inserisci e premi")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Riscaldamento...")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Caricamento...")
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1     _UxGT("Estrusione...")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Ripresa...")
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_IT_H
