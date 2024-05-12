// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define DIRECT_PINS {{B1, B10, A8, B15, B14, B13}, \
                     {B9, B8, B5, B4, B3, A15}, \
                     {A3, A4, A5, A6, A7, B0}, \
                     {A2, A1, A0, NO_PIN, NO_PIN, NO_PIN}}
#define DIRECT_PINS_RIGHT {{B13, B14, B15, A8, B10, B1}, \
                           {A15, B3, B4, B5, B8, B9}, \
                           {B0, A7, A6, A5, A4, A3}, \
                           {A0, A1, A2, NO_PIN, NO_PIN, NO_PIN}}

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN B6     // USART TX pin
#define SERIAL_USART_RX_PIN B7     // USART RX pin

/* Top left key on left half */
#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 0
/* Top right key on right half */
#define BOOTMAGIC_LITE_ROW_RIGHT    4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 5

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT



/* When considering home row mods, consider using TAPPING_FORCE_HOLD or even customising TAPPING_TERM_PER_KEY in keymap.c
 * For more information, refer to: https://beta.docs.qmk.fm/using-qmk/software-features/tap_hold   */
#define TAPPING_TERM 180
#define IGNORE_MOD_TAP_INTERRUPT
// #define TAPPING_TERM_PER_KEY
#define TAPPING_FORCE_HOLD
// #define PERMISSIVE_HOLD
// #define HOLD_ON_OTHER_KEY_PRESS


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