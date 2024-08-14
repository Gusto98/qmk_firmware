/* Copyright 2022 Thomas Baart <thomas@splitkb.com>
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

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
// #    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_RGB_TEST
//#    define RGBLIGHT_EFFECT_ALTERNATING
//#    define RGBLIGHT_EFFECT_TWINKLE
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    ifndef RGBLIGHT_LIMIT_VAL
#    	define RGBLIGHT_LIMIT_VAL 150
#    endif
#   define RGBLIGHT_SLEEP               // turns off lights wwhen system sleeps
#endif

#define BACKLIGHT_LEVELS 10
#define BREATHING_PERIOD 8
//#define BACKLIGHT_LIMIT_VAL 230
#define BACKLIGHT_DEFAULT_ON true
#define BACKLIGHT_DEFAULT_BREATHING true
#define BACKLIGHT_DEFAULT_LEVEL 7

/* When considering home row mods, consider using TAPPING_FORCE_HOLD or even customising TAPPING_TERM_PER_KEY in keymap.c
 * For more information, refer to: https://beta.docs.qmk.fm/using-qmk/software-features/tap_hold   */
#define TAPPING_TERM 180
// error "IGNORE_MOD_TAP_INTERRUPT is no longer necessary as it is now the default behavior of mod-tap keys. Please remove it from your config."
// #define IGNORE_MOD_TAP_INTERRUPT
// #define TAPPING_TERM_PER_KEY
#define TAPPING_FORCE_HOLD
// #define PERMISSIVE_HOLD
// #define HOLD_ON_OTHER_KEY_PRESS

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

#define MK_3_SPEED                      // CONSTANT speed cursor
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
