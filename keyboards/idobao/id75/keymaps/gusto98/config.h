#pragma once

#ifdef NKRO_ENABLE
  #define FORCE_NKRO
#endif

#ifdef RGBLIGHT_ENABLE
  #define RGBLIGHT_ANIMATIONS         // disabled to reduce firmware size
  #define RGBLIGHT_EFFECT_STATIC_LIGHT  // enables the static light mode
  #define RGBLIGHT_EFFECT_BREATHING
  //#define RGBLED_NUM 16                 // number of RGB lights
  #define RGBLIGHT_SLEEP                // turns off lights when system sleeps
  //#define RGBLIGHT_HUE_STEP 16
  //#define RGBLIGHT_SAT_STEP 16
  //#define RGBLIGHT_VAL_STEP 20
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
