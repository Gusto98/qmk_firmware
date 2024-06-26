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
#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
#include QMK_KEYBOARD_H
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT_ortho_5x15(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, DF(1), KC_PSCR, TG(3), KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_ESC, KC_Q, KC_D, KC_R, KC_W, KC_B, KC_LBRC, LT(4,KC_NO), KC_RBRC, KC_J, KC_F, KC_U, KC_P, KC_SCLN, KC_BSLS, LSFT_T(KC_CAPS), KC_A, KC_S, KC_H, KC_T, KC_G, KC_MINS, KC_PGUP, KC_EQL, KC_Y, KC_N, KC_E, KC_O, KC_I, RSFT_T(KC_QUOT), LCTL_T(KC_TAB), KC_Z, KC_X, KC_M, KC_C, KC_V, KC_HOME, KC_PGDN, KC_END, KC_K, KC_L, KC_COMM, KC_DOT, KC_SLSH, RCTL_T(KC_APP), KC_NO, KC_LGUI, KC_LALT, LT(6,KC_PGUP), LT(5,KC_LBRC), KC_SPC, KC_DEL, KC_INS, KC_BSPC, KC_ENT, LT(5,KC_RBRC), LT(6,KC_PGDN), KC_RALT, KC_RGUI, KC_NO),
        [1] = LAYOUT_ortho_5x15(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, DF(0), KC_PSCR, TG(2), KC_6, KC_7, KC_8, KC_9, KC_0, KC_GRV, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, KC_APP, KC_RBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_MINS, KC_PGUP, KC_EQL, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_HOME, KC_PGDN, KC_END, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LCTL, KC_LGUI, KC_LALT, LT(6,KC_PGUP), LT(5,KC_LBRC), KC_SPC, KC_DEL, KC_INS, KC_BSPC, KC_ENT, LT(5,KC_RBRC), LT(6,KC_PGDN), KC_RALT, KC_RGUI, KC_RCTL),
        [2] = LAYOUT_ortho_5x15(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_INS, KC_DEL, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_PAUS, KC_PGUP, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS, KC_RSFT, KC_UP, KC_PGDN, KC_LCTL, KC_LGUI, KC_LALT, KC_F13, KC_F14, KC_SPC, KC_ENT, KC_PSCR, KC_RALT, TG(2), KC_APP, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),
        [3] = LAYOUT_ortho_5x15(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, TG(3), KC_TRNS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [4] = LAYOUT_ortho_5x15(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_NO, KC_NO, KC_TRNS, KC_NO, RESET, KC_NO, BS_SWAP, GE_SWAP, GUI_ON, NK_ON, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_NO, KC_NO, KC_NO, KC_NO, DEBUG, KC_NO, BS_NORM, GE_NORM, GUI_OFF, NK_OFF, RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, EEP_RST, KC_NO, KC_NO, KC_NO, KC_NO, NK_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
        [5] = LAYOUT_ortho_5x15(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_BTN1, KC_MS_L, KC_MS_U, KC_MS_R, KC_WH_U, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_BTN2, KC_WH_L, KC_MS_D, KC_WH_R, KC_WH_D, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),
        [6] = LAYOUT_ortho_5x15(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_NO, KC_NO, KC_NO, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_MPRV, KC_MPLY, KC_MUTE, KC_MNXT, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_UNDO, KC_CUT, KC_COPY, KC_PSTE, KC_VOLD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
 */

enum layers {
    _KYRIAWORKMAN = 0,
    _WORKMAN75 = 1,
    _QWERTY = 2,
    _FPSGAMES = 3,
    _GENSHIN = 4,
    _NUMBERS = 5,
    _FKEYSMEDIA = 6,
    _SYMBOLS = 7,
    _MOUSEANDNAV = 8,
    _SETTINGS = 9,
    _SWAP = 10
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_KYRIA] = LAYOUT_ortho_5x15(
        KC_ESC, KC_Q, KC_D, KC_R, KC_W, KC_B,                                    KC_NO, KC_NO, KC_NO,                   KC_J, KC_F, KC_U, KC_P, KC_SCLN, KC_BSLS,
        KC_LSFT, LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_H), LCTL_T(KC_T), KC_G,   KC_NO, KC_NO, KC_NO,                   KC_Y, RCTL_T(KC_N), RSFT_T(KC_E), LALT_T(KC_O), RGUI_T(KC_I), RSFT_T(KC_QUOT),
        LCTL_T(KC_APP), KC_Z, KC_X, KC_M, KC_C, KC_V,                            KC_NO, KC_NO, KC_NO,                   KC_K, KC_L, KC_COMM, KC_DOT, KC_SLSH, RCTL_T(KC_DEL),
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LT(_FKEYSMEDIA,KC_LBRC), LT(_SWAP,KC_CAPS),         KC_NO,                   LT(_SWAP,KC_CAPS), LT(_FKEYSMEDIA,KC_RBRC), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_LGUI, KC_LALT, LT(_SYMBOLS,KC_MINS), LT(_NUMBERS,KC_SPC), LT(_MOUSEANDNAV,KC_TAB),      KC_NO,      LT(_MOUSEANDNAV,KC_BSPC), LT(_NUMBERS,KC_ENT), LT(_SYMBOLS,KC_EQL), KC_RALT, KC_RGUI, KC_NO, KC_NO
    ),
    /*[_KYRIA] = LAYOUT_ortho_5x15(
        KC_ESC, KC_Q, KC_D, KC_R, KC_W, KC_B,                                    KC_NO, KC_NO, KC_NO,                              KC_J, KC_F, KC_U, KC_P, KC_SCLN, KC_BSLS,
        KC_LSFT, KC_A, KC_S, KC_H, KC_T, KC_G,                                   KC_NO, KC_NO, KC_NO,                              KC_Y, KC_N, KC_E, KC_O, KC_I, RSFT_T(KC_QUOT),
        LCTL_T(KC_APP), KC_Z, KC_X, KC_M, KC_C, KC_V,                            KC_NO, KC_NO, KC_NO,                              KC_K, KC_L, KC_COMM, KC_DOT, KC_SLSH, RCTL_T(KC_DEL),
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LT(_FKEYSMEDIA,KC_LBRC), LT(_SWAP,KC_CAPS),              KC_NO,      LT(_SWAP,KC_CAPS), LT(_FKEYSMEDIA,KC_RBRC), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_LGUI, KC_LALT, LT(_SYMBOLS,KC_MINS), LT(_NUMBERS,KC_SPC), LT(_MOUSEANDNAV,KC_TAB),      KC_NO,      LT(_MOUSEANDNAV,KC_BSPC), LT(_NUMBERS,KC_ENT), LT(_SYMBOLS,KC_EQL), KC_RALT, KC_RGUI, KC_NO, KC_NO
    ),*/

    [_WORKMAN75] = LAYOUT_ortho_5x15(
               KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,   KC_NO,   TG(1),   KC_NO, KC_6, KC_7,    KC_8,   KC_9,    KC_0, KC_NO,
               KC_ESC, KC_Q, KC_D, KC_R, KC_W, KC_B, KC_LBRC,  KC_APP, KC_RBRC, KC_J, KC_F,    KC_U,   KC_P, KC_SCLN, KC_BSLS,
         LSFT(KC_TAB), KC_A, KC_S, KC_H, KC_T, KC_G, KC_MINS, KC_PGUP,  KC_EQL, KC_Y, KC_N,    KC_E,   KC_O,    KC_I, RSFT(KC_QUOT),
        LCTL(KC_CAPS), KC_Z, KC_X, KC_M, KC_C, KC_V, KC_HOME, KC_PGDN,  KC_END, KC_K, KC_L, KC_COMM, KC_DOT, KC_SLSH, RCTL(KC_DEL),
        KC_NO, KC_LGUI, KC_LALT, LT(6,KC_LBRC), LT(7,KC_MINS), LT(5,KC_SPC), LT(8,KC_DEL), KC_INS, LT(8,KC_BSPC), LT(5,KC_ENT), LT(7,KC_EQL), LT(6,KC_RBRC), KC_RALT, KC_RGUI, KC_NO
    ),

    [_QWERTY] = LAYOUT_ortho_5x15(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_INS, KC_DEL,
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_PAUS, KC_PGUP,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS, KC_RSFT, KC_UP, KC_PGDN,
        KC_LCTL, KC_LGUI, KC_LALT, KC_F13, KC_F14, KC_SPC, KC_ENT, KC_PSCR, KC_RALT, TG(2), KC_APP, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_GENSHIN] = LAYOUT_ortho_5x15(
        KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_NO, KC_6, KC_7, KC_8, KC_9, KC_0, KC_COMM,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),

    [_FPSGAMES] = LAYOUT_ortho_5x15(
        KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_NO, KC_6, KC_7, KC_8, KC_9, KC_0, KC_COMM,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),

    [_NUMBERS] = LAYOUT_ortho_5x15(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_NO, KC_6, KC_7, KC_8, KC_9, KC_0, KC_COMM,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
          KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_MINS, KC_SPC, KC_CAPS, KC_NO, KC_BSPC, KC_ENT, KC_EQL, KC_RALT, KC_RGUI, KC_NO, KC_NO
    ),

    [_FKEYSMEDIA] = LAYOUT_ortho_5x15(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_BRIU, KC_MPRV, KC_MPLY, KC_MUTE, KC_MNXT, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_WBAK, KC_WSCH, KC_WHOM, KC_WFWD, KC_WFAV, KC_NO,
        KC_BRID, KC_MRWD, KC_MSTP, KC_EJCT, KC_MFFD, KC_VOLD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MYCM, KC_CALC,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),

    [_SYMBOLS] = LAYOUT_ortho_5x15(
        KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_NO, KC_NO, KC_NO, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO,
        KC_NO, KC_QUES, KC_PIPE, KC_MINS, KC_EQL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),

    [_MOUSEANDNAV] = LAYOUT_ortho_5x15(
        KC_NO, KC_ACL0, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_BTN3, KC_BTN2, KC_NO, KC_NO,
        KC_LSFT, KC_ACL1, KC_MS_L, KC_MS_U, KC_MS_R, KC_WH_U, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_INS, KC_NO,
        KC_LCTL, KC_ACL2, KC_NO, KC_MS_D, KC_NO, KC_WH_D, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_DEL, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_NO, KC_NO, OSM(MOD_LCTL|MOD_LSFT), KC_NO, OSM(MOD_LSFT|MOD_LALT), KC_NO, KC_NO, KC_RALT, KC_RGUI, KC_NO, KC_NO
    ),

    [_SETTINGS] = LAYOUT_ortho_5x15(
        RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_NO, KC_NO, KC_NO, KC_NO, RESET, GE_SWAP, BS_SWAP, AG_SWAP, GUI_ON, NK_ON,
        RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_NO, KC_NO, KC_NO, KC_NO, DEBUG, GE_NORM, BS_NORM, AG_NORM, GUI_OFF, NK_OFF,
        RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, EEP_RST, KC_NO, KC_LCAP, KC_LNUM, KC_LSCR, NK_TOGG,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LT(10,KC_NO), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),

    [_SWAP] = LAYOUT_ortho_5x15(
        TG(_SETTINGS), TG(_WORKMAN75), TG(_QWERTY), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    )
};