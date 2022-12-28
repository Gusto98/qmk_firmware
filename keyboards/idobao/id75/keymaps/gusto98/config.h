/* Copyright 2018 MechMerlin
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

/* When considering home row mods, consider using TAPPING_FORCE_HOLD or even customising TAPPING_TERM_PER_KEY in keymap.c
 * For more information, refer to: https://beta.docs.qmk.fm/using-qmk/software-features/tap_hold   */
#define TAPPING_TERM 180
// #define TAPPING_TERM_PER_KEY
#define TAPPING_FORCE_HOLD
// #define PERMISSIVE_HOLD
// #define HOLD_ON_OTHER_KEY_PRESS
#define IGNORE_MOD_TAP_INTERRUPT
// #define IGNORE_MOD_TAP_INTERRUPT_PER_KEY
// #define RETRO_TAPPING
// #define RETRO_TAPPING_PER_KEY

//Mouse settings: https://beta.docs.qmk.fm/using-qmk/advanced-keycodes/feature_mouse_keys
#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL

#define MK_C_OFFSET_UNMOD 32
#define MK_C_OFFSET_0 8
#define MK_C_OFFSET_1 16
#define MK_C_OFFSET_2 64

//BIGGER INTERVAL == LESS SCROLLING think of it as a fraction
#define MK_W_OFFSET_UNMOD 1
#define MK_W_INTERVAL_UNMOD 10
#define MK_W_OFFSET_0 1
#define MK_W_INTERVAL_0 60
#define MK_W_OFFSET_1 1
#define MK_W_INTERVAL_1 20
#define MK_W_OFFSET_2 1
#define MK_W_INTERVAL_2 5