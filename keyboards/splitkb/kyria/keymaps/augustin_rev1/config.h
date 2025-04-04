/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X64
  #define OLED_BRIGHTNESS 200           //0-255.
  #define OLED_TIMEOUT 180000           //Turns off after inactivity ms to reduce OLED Burn-in.
#endif

#ifdef NKRO_ENABLE
  #define FORCE_NKRO
#endif

#ifdef RGBLIGHT_ENABLE
  //#define RGBLIGHT_ANIMATIONS         // disabled to reduce firmware size
  #define RGBLIGHT_EFFECT_STATIC_LIGHT  // enables the static light mode
  #define RGBLIGHT_EFFECT_BREATHING
  //#define RGBLED_NUM 20                 // number of RGB lights
  #define RGBLIGHT_SLEEP                // turns off lights when system sleeps
  #define RGBLIGHT_SPLIT                // splits animation effects over both halves
  #define RGBLIGHT_HUE_STEP 16
  #define RGBLIGHT_SAT_STEP 16
  #define RGBLIGHT_VAL_STEP 20
  #define RGBLIGHT_LIMIT_VAL 255        // max brightness
  #define RGBLIGHT_DEFAULT_HUE 115      // defaults after an EEPROM reset
  #define RGBLIGHT_DEFAULT_SAT 25
  #define RGBLIGHT_DEFAULT_VAL 110
#endif
//instead of RGB matrix; consider lighting layers for even more customisability


/* When considering home row mods, consider using TAPPING_FORCE_HOLD or even customising TAPPING_TERM_PER_KEY in keymap.c
 * For more information, refer to: https://beta.docs.qmk.fm/using-qmk/software-features/tap_hold
 */
#define TAPPING_TERM 180
#define TAPPING_TERM_INCREMENT 5
// #define TAPPING_TERM_PER_KEY
#define TAPPING_FORCE_HOLD
// #define PERMISSIVE_HOLD //useful for controlled keypresses (have to release the modified key before the modifier)
// #define IGNORE_MOD_TAP_INTERRUPT
// #define IGNORE_MOD_TAP_INTERRUPT_PER_KEY
// #define RETRO_TAPPING
// #define RETRO_TAPPING_PER_KEY


//Mouse settings: https://beta.docs.qmk.fm/using-qmk/advanced-keycodes/feature_mouse_keys
#define MOUSEKEY_DELAY         10      // default 10
#define MOUSEKEY_INTERVAL      20      // default 20
#define MOUSEKEY_MOVE_DELTA     8      // default 8 step size
#define MOUSEKEY_MAX_SPEED      10     // default 10
#define MOUSEKEY_TIME_TO_MAX    30     // default l0
#define MOUSEKEY_WHEEL_DELAY    10     // default 10
#define MOUSEKEY_WHEEL_INTERVAL 80     // default 80
#define MOUSEKEY_WHEEL_DELTA    1      // default 1
#define MOUSEKEY_WHEEL_MAX_SPEED 8     // default 8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40  // default 40

#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL

#define MK_C_OFFSET_UNMOD       56
#define MK_C_INTERVAL_UNMOD     16

#define MK_C_OFFSET_0           12
#define MK_C_INTERVAL_0         16

#define MK_C_OFFSET_1           56
#define MK_C_INTERVAL_1         16

#define MK_C_OFFSET_2           96
#define MK_C_INTERVAL_2         16

#define MK_W_OFFSET_UNMOD       2
#define MK_W_INTERVAL_UNMOD     16

#define MK_W_OFFSET_0           1
#define MK_W_INTERVAL_0         16

#define MK_W_OFFSET_1           2
#define MK_W_INTERVAL_1         16

#define MK_W_OFFSET_2           4
#define MK_W_INTERVAL_2         16

//#define MASTER_LEFT   //default setting
//#define MASTER_RIGHT
#define EE_HANDS
/* https://docs.qmk.fm/#/feature_split_keyboard?id=handedness-by-eeprom
 *  Handedness by EEPROM
    This method sets the keyboard’s handedness by setting a flag in the persistent storage (EEPROM). This is checked when the controller first starts up, and determines what half the keyboard is, and how to orient the keyboard layout.

    To enable this method, add the following to your config.h file: #define EE_HANDS

    Next, you will have to flash the EEPROM files once for the correct hand to the controller on each halve. You can do this manually with the following bootloader targets while flashing the firmware:

    AVR controllers with the Caterina bootloader (e.g. Pro Micro):
      :avrdude-split-left
      :avrdude-split-right

    AVR controllers with the stock Amtel DFU or DFU compatible bootloader (e.g. Elite-C):
      :dfu-split-left
      :dfu-split-right

    ARM controllers with a DFU compatible bootloader (e.g. Proton-C):
      :dfu-util-split-left
      :dfu-util-split-right
    Example:
      make crkbd:default:avrdude-split-left
 */

// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
/* uncommented to try
 * https://github.com/joric/qmk/blob/master/docs/feature_split_keyboard.md#:~:text=one%20key%2Dpress.-,Handedness%20by%20EEPROM,to%20orient%20the%20keyboard%20layout.
 */
//#define NO_USB_STARTUP_CHECK

 /*
 Apparently ProMicros do this by default so there's not need for this line:
 https://github.com/qmk/qmk_firmware/blob/master/docs/feature_split_keyboard.md
 But when i tested it, this was not the case.
 */

#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000
#define SPLIT_USB_TIMEOUT_POLL 10

