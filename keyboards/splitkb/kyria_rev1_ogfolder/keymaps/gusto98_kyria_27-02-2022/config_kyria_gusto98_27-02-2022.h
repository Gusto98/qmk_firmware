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
  //#define RGBLIGHT_ANIMATIONS             //disabled to reduce firmware size
  #define RGBLIGHT_EFFECT_STATIC_LIGHT  // enables the static light mode
  #define RGBLED_NUM 20                 // number of RGB lights
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

//#define MASTER_LEFT   //default setting
//#define EE_HANDS

/* When considering home row mods, consider using TAPPING_FORCE_HOLD or even customising TAPPING_TERM_PER_KEY in keymap.c
 * For more information, refer to: https://beta.docs.qmk.fm/using-qmk/software-features/tap_hold
 */
#define TAPPING_TERM 190
// #define TAPPING_TERM_PER_KEY
// #define TAPPING_FORCE_HOLD
// #define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
// #define IGNORE_MOD_TAP_INTERRUPT_PER_KEY
// #define RETRO_TAPPING
// #define RETRO_TAPPING_PER_KEY


//Mouse settings: https://beta.docs.qmk.fm/using-qmk/advanced-keycodes/feature_mouse_keys
#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL

#define MK_C_OFFSET_UNMOD 5
#define MK_C_INTERVAL_UNMOD 12
#define MK_C_OFFSET_0 3
#define MK_C_INTERVAL_0 16
#define MK_C_OFFSET_1 15
#define MK_C_INTERVAL_1 16
#define MK_C_OFFSET_2 25
#define MK_C_INTERVAL_2 16

#define MK_W_OFFSET_UNMOD 3
#define MK_W_INTERVAL_UNMOD 100
#define MK_W_OFFSET_0 2
#define MK_W_INTERVAL_0 100
#define MK_W_OFFSET_1 3
#define MK_W_INTERVAL_1 150
#define MK_W_OFFSET_2 8
#define MK_W_INTERVAL_2 150


// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
/* uncommented to try
 * https://github.com/joric/qmk/blob/master/docs/feature_split_keyboard.md#:~:text=one%20key%2Dpress.-,Handedness%20by%20EEPROM,to%20orient%20the%20keyboard%20layout.
 */
#define SPLIT_USB_DETECT
// #define NO_USB_STARTUP_CHECK
