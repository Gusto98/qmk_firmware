// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0
// Gusto98's workman keymap

/*
* design philosophy:
* minimal finger travel, hence 42 layout, even thumbs only have 3 keys each.
*
*/

#include QMK_KEYBOARD_H

enum layers {
  _WORKMAN = 0,
  _WORKMANEX,
  _QWERTY,
  _FPSGAMES,
  _NUMBERS,
  _SYMBOLS,
  _FKEYSMEDIA,
  _MOUSENAV,
  _SETTINGS,
  _SWAPLOCK,
  _SWAP
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ D │ R │ W │ B │       │ J │ F │ U │ P │ ; │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ A │ S │ H │ T │ G │       │ Y │ N │ E │ O │ I │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ Z │ X │ M │ C │ V │       │ K │ L │ , │ . │ / │Ctl│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤Spc├───┐   ┌───┤Ent├───┘
      *                   └───┤Tab│   │Bsp├───┘
      *                       └───┘   └───┘

    [_WORKMAN_NOLAYERS] = LAYOUT_split_3x6_3(
        KC_TAB, KC_Q, KC_D, KC_R, KC_W, KC_B,                               KC_J, KC_F, KC_U, KC_P, KC_SEMICOLON, KC_BACKSPACE,
        KC_LEFT_SHIFT, KC_A, KC_S, KC_H, KC_T, KC_G,                              KC_Y, KC_N, KC_E, KC_O, KC_I, KC_QUOTE,
        KC_LEFT_CONTROL(KC_APPLICATION), KC_Z, KC_X, KC_M, KC_C, KC_V,                      KC_K, KC_L, KC_COMMA, KC_DOT, KC_SLASH, KC_RIGHT_CONTROL(KC_DELETE),
                  KC_LGUI, KC_SPACE, KC_TAB,          KC_BACKSPACE, KC_ENTER, KC_RALT
    )*/
    [_WORKMAN] = LAYOUT_split_3x6_3(
      /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │esc│ Q │ D │ R │ W │ B │       │ J │ F │ U │ P │ ; │ \ │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ A │ S │ H │ T │ G │       │ Y │ N │ E │ O │ I │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ Z │ X │ M │ C │ V │       │ K │ L │ , │ . │ / │Ctl│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤ALT│
      *               └───┤Spc├───┐   ┌───┤Ent├───┘
      *                   └───┤Tab│   │Bsp├───┘
      *                       └───┘   └───┘
      */
      KC_ESCAPE, KC_Q, KC_D, KC_R, KC_W, KC_B, //left row 1
      KC_J, KC_F, KC_U, KC_P, KC_SEMICOLON, LT(_SWAPLOCK, KC_BACKSLASH), //right row 1
      LSFT_T(KC_CAPS_LOCK), LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_H), LCTL_T(KC_T), KC_G, //left row 2 aka home row
      KC_Y, RCTL_T(KC_N), RSFT_T(KC_E), RALT_T(KC_O), RGUI_T(KC_I), RSFT_T(KC_QUOTE), //right row 2 aka home row
      LCTL_T(KC_INSERT), KC_Z, KC_X, KC_M, KC_C, LT(_FKEYSMEDIA, KC_V), //left row3
      LT(_FKEYSMEDIA, KC_K), KC_L, KC_COMMA, KC_DOT, KC_SLASH, RCTL_T(KC_DELETE), //right row 3
      LT(_SYMBOLS, KC_LGUI), LT(_NUMBERS, KC_SPACE), LT(_MOUSENAV, KC_TAB), //left row 4 aka thumb cluster
      LT(_MOUSENAV, KC_ENTER), LT(_NUMBERS, KC_BACKSPACE), LT(_SYMBOLS, KC_LALT) //right row 4 aka thumb cluster
    ),
    [_WORKMANEX] = LAYOUT_split_3x6_3(
      /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │esc│ Q │ D │ R │ W │ B │       │ J │ F │ U │ P │ ; │ \ │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ A │ S │ H │ T │ G │       │ Y │ N │ E │ O │ I │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ Z │ X │ M │ C │ V │       │ K │ L │ , │ . │ / │Ctl│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤ALT│
      *               └───┤Spc├───┐   ┌───┤Bsp├───┘
      *                   └───┤Tab│   │Ent├───┘
      *                       └───┘   └───┘
      */
      KC_ESCAPE, KC_Q, KC_D, KC_R, KC_W, KC_B, //left row 1
      KC_J, KC_F, KC_U, KC_P, KC_SEMICOLON, LT(_SWAPLOCK, KC_BACKSLASH), //right row 1
      LSFT_T(KC_CAPS_LOCK), LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_H), LCTL_T(KC_T), KC_G, //left row 2 aka home row
      KC_Y, RCTL_T(KC_N), RSFT_T(KC_E), RALT_T(KC_O), RGUI_T(KC_I), RSFT_T(KC_QUOTE), //right row 2 aka home row
      LCTL_T(KC_INSERT), KC_Z, KC_X, KC_M, KC_C, LT(_FKEYSMEDIA, KC_V), //left row3
      LT(_FKEYSMEDIA, KC_K), KC_L, KC_COMMA, KC_DOT, KC_SLASH, RCTL_T(KC_DELETE), //right row 3
      LT(_SYMBOLS, KC_LGUI), LT(_NUMBERS, KC_SPACE), LT(_MOUSENAV, KC_TAB), //left row 4 aka thumb cluster
      LT(_MOUSENAV, KC_BACKSPACE), LT(_NUMBERS, KC_ENTER), LT(_SYMBOLS, KC_LALT) //right row 4 aka thumb cluster
    ),

    [_QWERTY] = LAYOUT_split_3x6_3(
      /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Ctl│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │FN├───┐           ┌───┤FN│
      *               └───┤Spc├───┐   ┌───┤Ent├───┘
      *                   └───┤Tab│   │Bsp├───┘
      *                       └───┘   └───┘
      */
      KC_ESCAPE, KC_Q, KC_W, KC_E, KC_R, KC_T, //left row 1
      KC_Y, KC_U, KC_I, KC_O, KC_P, LT(_SWAPLOCK, KC_BACKSLASH), //right row 1
      LSFT_T(KC_CAPS_LOCK), LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G, //left row 2 aka home row
      KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SEMICOLON), RSFT_T(KC_QUOTE), //right row 2 aka home row
      KC_LEFT_CTRL, KC_Z, KC_X, KC_C, KC_V, LT(_FKEYSMEDIA, KC_B), //left row3
      LT(_FKEYSMEDIA, KC_N), KC_M, KC_COMMA, KC_DOT, KC_SLASH, RCTL_T(KC_DELETE), //right row 3
      LT(_SYMBOLS, KC_LGUI), LT(_NUMBERS, KC_SPACE), LT(_MOUSENAV, KC_TAB), //left row 4 aka thumb cluster
      LT(_MOUSENAV, KC_ENTER), LT(_NUMBERS, KC_BACKSPACE), LT(_SYMBOLS, KC_LALT) //right row 4 aka thumb cluster
    ),
//  * ,-------------------------------------------.                              ,-------------------------------------------.
//  * | 1      | 2    | Q    | W    | E    | R    |                              | Y    | U    | I    | O    | P    | "      |
//  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//  * | L_CTRL |L_SHFT| A    | S    | D    | F    |                              | H    | J    | K    | L    | ;    | R_SHFT |
//  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//  * | 3      | 4    | Z    | X    | C    | V    | TAB  | G    |  |      |      | N    | M    | ,    | .    | /    | R_CTRL |
//  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//  *                        | ESC  | B    | N    |LT(NUM| SPC  |  |      |      |      |      |      |
//  *                        |      |      |      |, M)  |      |  |      |      |      |      |      |
//  *                        `----------------------------------'  `----------------------------------'
//  */
    [_FPSGAMES] = LAYOUT_split_3x6_3(
      /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │1  │ 2 │ Q │ W │ E │ R │       │ Y │ U │ I │ O │ P │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │LCTL│LSFT│A│ S │ D │ F │       │ H │ J │ K │ L │ ;│RSFT│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │3  │ 4 │ Z │ X │ C │ V │       │ N │ M │ , │ . │ / │Ctl│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │FN ├───┐           ┌───┤FN │
      *               └───┤Spc├───┐   ┌───┤Ent├───┘
      *                   └───┤Tab│   │Bsp├───┘
      *                       └───┘   └───┘
      */
      //STANDARD WASD CONTROLS OFFSET ONE COL TO THE RIGHT
        KC_1, KC_2, KC_Q, KC_W, KC_E, KC_R,
        KC_Y, KC_U, KC_I, KC_O, KC_P, LT(_SWAPLOCK, KC_QUOT),
        KC_LCTL, KC_LSFT, KC_A, KC_S, KC_D, KC_F,
        KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_RSFT,
        KC_3, KC_4, KC_Z, KC_X, KC_C, KC_V,
        KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RCTL,
        KC_B, LT(_NUMBERS, KC_M), KC_SPC,
        LT(_MOUSENAV, KC_BSPC), KC_ENT, KC_NO
    ),
    [_NUMBERS] = LAYOUT_split_3x6_3(
      /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │   │ 1 │ 2 │ 3 │ 4 │ 5 │       │ 6 │ 7 │ 8 │ 9 │ 0 │ \ │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │   │   │   │   │       │   │ 4 │ 5 │ 6 │ - │ + │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │   │   │   │   │       │ 0 │ 1 │ 2 │ 3 │ / │ * │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │FN ├───┐           ┌───┤FN │
      *               └───┤Spc├───┐   ┌───┤Ent├───┘
      *                   └───┤Tab│   │Bsp├───┘
      *                       └───┘   └───┘
      */
      _______, KC_1, KC_2, KC_3, KC_4, KC_5, //left row 1
      KC_6, KC_7, KC_8, KC_9, KC_0, LT(_SWAPLOCK, KC_BACKSLASH), //right row 1
      KC_LEFT_SHIFT, _______, _______, _______, _______, _______, //left row 2 aka home row
      _______, KC_4, KC_5, KC_6, KC_MINUS, KC_PLUS, //right row 2 aka home row
      _______, _______, _______, _______, _______, _______, //left row3
      KC_0, KC_1, KC_2, KC_3, KC_SLASH, KC_ASTR, //right row 3
      LT(_SYMBOLS, KC_LGUI), LT(_NUMBERS, KC_SPACE), LT(_MOUSENAV, KC_TAB), //left row 4 aka thumb cluster
      LT(_MOUSENAV, KC_BACKSPACE), LT(_NUMBERS, KC_ENTER), LT(_SYMBOLS, KC_LALT) //right row 4 aka thumb cluster
    ),
    [_SYMBOLS] = LAYOUT_split_3x6_3(
      /* current
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │ ~ │ ! │ @ │ # │ $ │ % │       │ ^ │ & │ * │ ( │ ) │ | │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ _ │ - │ + │ = │   │       │   │ [ | ] │ { │ } │ " │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│   │   │   │   │   │       │   │   |   │ < | > │Ctl│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │FN ├───┐           ┌───┤FN │
      *               └───┤Spc├───┐   ┌───┤Ent├───┘
      *                   └───┤Tab│   │Bsp├───┘
      *                       └───┘   └───┘
      */
      KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, //left row 1
      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, LT(_SWAPLOCK, KC_PIPE), //right row 1
      KC_LEFT_SHIFT, KC_UNDERSCORE, KC_MINUS, KC_PLUS, KC_EQUAL, _______, //left row 2 aka home row
      _______, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_LCBR, KC_RCBR, KC_DQUO, //right row 2 aka home row
      _______, _______, _______, _______, _______, _______, //left row3
      _______, _______, _______, KC_LT, KC_GT, _______, //right row 3
      LT(_SYMBOLS, KC_LGUI), LT(_NUMBERS, KC_SPACE), LT(_MOUSENAV, KC_TAB), //left row 4 aka thumb cluster
      LT(_MOUSENAV, KC_BACKSPACE), LT(_NUMBERS, KC_ENTER), LT(_SYMBOLS, KC_LALT) //right row 4 aka thumb cluster
    ),
    [_FKEYSMEDIA] = LAYOUT_split_3x6_3(
      /*
      * ┌─────┬─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┬─────┐
      * │ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │       │ F7  │ F8  │ F9  │F10  │F11  │F12  │
      * ├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
      * │BRIU │MPRV │MPLY │MUTE │MNXT │VOLU │       │WBAK │WSCH │WHOM │WFWD │WFAV │     │
      * ├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
      * │BRID │MRWD |MSTP │EJCT |MFFD |VOLD │       │HOLD │     │     │     │MYCM │CALC │
      * └─────┴─────┴─────┴─────┴─────┴─────┘       └─────┴─────┴─────┴─────┴─────┴─────┘
      *                   ┌─────┐                               ┌─────┐
      *                   │     ├─────┐                   ┌─────┤     │
      *                   └─────┤     ├─────┐       ┌─────┤     ├─────┘
      *                         └─────┤     │       │     ├─────┘
    *                                 └─────┘       └─────┘
      */
      KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, //left row 1
      KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, LT(_SWAPLOCK, KC_F12), //right row 1
      KC_BRIU, KC_MPRV, KC_MPLY, KC_MUTE, KC_MNXT, KC_VOLU, //left row 2 aka home row
      KC_WBAK, KC_WSCH, KC_WHOM, KC_WFWD, KC_WFAV, KC_NO, //right row 2 aka home row
      KC_BRID, KC_MRWD, KC_MSTP, KC_EJCT, KC_MFFD, KC_VOLD, //left row3
      _______, KC_NO, KC_NO, KC_NO, KC_MYCM, KC_CALC, //right row 3
      KC_NO, KC_NO, KC_NO, //left row 4 aka thumb cluster
      KC_NO, KC_NO, KC_NO //right row 4 aka thumb cluster
    ),
    [_MOUSENAV] = LAYOUT_split_3x6_3(
      /*
      * ┌─────┬─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┬─────┐
      * │     │ACL0 │     │     │     │     │       │     │MBT1 │MBT3 │MBT2 │MBT4 │MBT5 │
      * ├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
      * │     │ACL1 │MSL  │MSU  │MSR  │MWHU │       │LEFT │DOWN │UP   │RIGHT│     │     │
      * ├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
      * │     │ACL2 |MWHL │MSD  |MWHR |MWHD │       │HOME │PGDN │PGUP │END  │INS  │DEL  │
      * └─────┴─────┴─────┴─────┴─────┴─────┘       └─────┴─────┴─────┴─────┴─────┴─────┘
      *                   ┌─────┐                               ┌─────┐
      *                   │     ├─────┐                   ┌─────┤     │
      *                   └─────┤     ├─────┐       ┌─────┤     ├─────┘
      *                         └─────┤HOLD │       │HOLD ├─────┘
    *                                 └─────┘       └─────┘
      */
      KC_NO, KC_ACL0, KC_NO, KC_NO, KC_NO, KC_NO, //left row 1
      KC_NO, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN4, KC_BTN5, //right row 1
      KC_NO, KC_ACL1, KC_MS_L, KC_MS_U, KC_MS_R, KC_WH_U, //left row 2 aka home row
      KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, //right row 2 aka home row
      KC_NO, KC_ACL2, KC_WH_L, KC_MS_D, KC_WH_R, KC_WH_D, //left row3
      KC_HOME, KC_PAGE_DOWN, KC_PAGE_UP, KC_END, KC_INS, KC_DELETE, //right row 3
      KC_NO, KC_NO, KC_NO, //left row 4 aka thumb cluster
      KC_NO, KC_NO, KC_NO //right row 4 aka thumb cluster
    ),

    //need a way to exit settings w/o having to unplug and replug the keyboard.
    [_SETTINGS] = LAYOUT_split_3x6_3(
      /*
      * ┌───────┬───────┬───────┬───────┬───────┬─────┐         ┌──────┬──────┬──────┬──────┬─────┬─────┐
      * │RGB MOD│RGBHUE+│RGBSAT+│RGBVAL+│RGBSPD+│     │         |RESET │GESWAP│BSSWAP│AGSWAP│GUI+ │NKRO+│
      * ├───────┼───────┼───────┼───────┼───────┼─────┤         ├──────┼──────┼──────┼──────┼─────┼─────┤
      * │RGBRMOD│RGBHUE-│RGBSAT-|RGBVAL-|RGBSPD-│     |         |      │GENORM|BSNORM|AGNORM|GUI- |NKRO-│
      * ├───────┼───────┼───────┼───────┼───────┼─────┤         ├──────┼──────┼──────┼──────┼─────┼─────┤
      * │RGBTOG │       |       │       |       |     │         |EEPRST│      │      │      │     │NKTOG│
      * └───────┴───────┴───────┴───────┴───────┴─────┘         └──────┴──────┴──────┴──────┴─────┴─────┘
      *                   ┌─────┐                               ┌─────┐
      *                   │     ├─────┐                   ┌─────┤     │
      *                   └─────┤     ├─────┐       ┌─────┤     ├─────┘
      *                         └─────┤     │       │     ├─────┘
    *                                 └─────┘       └─────┘
      */
      RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_NO, //left row 1
      RESET, GE_SWAP, BS_SWAP, AG_SWAP, GU_ON, NK_ON, //right row 1
      RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_NO, //left row 2 aka home row
      KC_NO, GE_NORM, BS_NORM, AG_NORM, GU_OFF, NK_OFF, //right row 2 aka home row
      RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, //left row3
      EE_CLR, KC_NO, KC_NO, KC_NO, KC_NO, NK_TOGG, //right row 3
      KC_NO, KC_NO, KC_NO, //left row 4 aka thumb cluster
      KC_NO, KC_NO, KC_NO //right row 4 aka thumb cluster
    ),
    [_SWAPLOCK] = LAYOUT_split_3x6_3(
      /*
      * ┌─────┬─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┬─────┐
      * |     |     |     |     |     │     │       │swap │CAPS │SCRLK│NUMLCK│    │hold │
      * ├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
      * │     |     |     |     |     |     │       |     |     |     |     |     │     │
      * ├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
      * │     |     |     │     |     |     │       │     │     │     │     │     |     │
      * └─────┴─────┴─────┴─────┴─────┴─────┘       └─────┴─────┴─────┴─────┴─────┴─────┘
      *                   ┌─────┐                               ┌─────┐
      *                   │     ├─────┐                   ┌─────┤     │
      *                   └─────┤     ├─────┐       ┌─────┤     ├─────┘
      *                         └─────┤     │       │     ├─────┘
    *                                 └─────┘       └─────┘
      */
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, //left row 1
      MO(_SWAP), KC_CAPS_LOCK, KC_SCROLL_LOCK, KC_NUM_LOCK, KC_NO, _______, //right row 1
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, //left row 2 aka home row
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, //right row 2 aka home row
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, //left row3
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, //right row 3
      KC_NO, KC_NO, KC_NO, //left row 4 aka thumb cluster
      KC_NO, KC_NO, KC_NO //right row 4 aka thumb cluster
    ),
    [_SWAP] = LAYOUT_split_3x6_3(
      /*
      * ┌─────┬─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┬─────┐
      * │SETTINGS│QWERTY│FPS│ |WRKMN│WRKMNEX│       │HOLD │     │     │     │     │     │
      * ├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
      * │     |     |     |     |     |     │       |     |     |     |     |     │     │
      * ├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
      * │     |     |     │     |     |     │       │     │     │     │     │     |     │
      * └─────┴─────┴─────┴─────┴─────┴─────┘       └─────┴─────┴─────┴─────┴─────┴─────┘
      *                   ┌─────┐                               ┌─────┐
      *                   │     ├─────┐                   ┌─────┤     │
      *                   └─────┤     ├─────┐       ┌─────┤     ├─────┘
      *                         └─────┤     │       │     ├─────┘
    *                                 └─────┘       └─────┘
      */
      TG(_SETTINGS), DF(_QWERTY), TG(_FPSGAMES), KC_NO, DF(_WORKMAN), DF(_WORKMANEX), //left row 1
      _______, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, //right row 1
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, //left row 2 aka home row
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, //right row 2 aka home row
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, //left row3
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, //right row 3
      KC_NO, KC_NO, KC_NO, //left row 4 aka thumb cluster
      KC_NO, KC_NO, KC_NO //right row 4 aka thumb cluster
    )
};
