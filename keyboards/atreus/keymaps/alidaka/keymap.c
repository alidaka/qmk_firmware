#include "atreus.h"

#define BASE 0
#define NUM 1
#define FUN 2

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = KEYMAP(
    KC_Q,           KC_W,    KC_E,    KC_R,    KC_T,                                  KC_Y,           KC_U,           KC_I,    KC_O,    KC_P ,
    KC_A,           KC_S,    KC_D,    KC_F,    KC_G,                                  KC_H,           KC_J,           KC_K,    KC_L,    KC_SCLN ,
    SFT_T(KC_Z),    KC_X,    KC_C,    KC_V,    KC_B,                                  KC_N,           KC_M,           KC_COMM, KC_DOT,  SFT_T(KC_SLSH) ,
    CTL_T(KC_ESC),  KC_TAB,  KC_LGUI, KC_EQL,  KC_BSPC, CTL_T(KC_DEL), ALT_T(KC_ENT), LT(NUM,KC_SPC), LT(FUN,KC_EQL), KC_MINS, KC_QUOT, ALT_T(KC_BSLS) ),

  [NUM] = KEYMAP(
    KC_EXLM,        KC_AT,   KC_LCBR, KC_RCBR, KC_AMPR,                               KC_PGUP,        KC_7,           KC_8,    KC_9,    KC_PLUS ,
    KC_HASH,        KC_DLR,  KC_LPRN, KC_RPRN, KC_ASTR,                               KC_PGDN,        KC_4,           KC_5,    KC_6,    KC_MINUS ,
    SFT_T(KC_PERC), KC_CIRC, KC_LBRC, KC_RBRC, KC_GRAVE,                              KC_EQL,         KC_1,           KC_2,    KC_3,    SFT_T(KC_ENT) ,
    _______,        _______, _______, _______, _______, _______,       _______,       _______,        KC_EQL,         KC_DOT,  KC_0,    _______  ),

  [FUN] = KEYMAP(
    KC_INS,         KC_HOME, KC_UP,   KC_END,  KC_PGUP,                               KC_VOLU,        KC_F7,          KC_F8,   KC_F9,   KC_F10 ,
    KC_DELT,        KC_LEFT, KC_DOWN, KC_RGHT, KC_DOWN,                               KC_VOLD,        KC_F4,          KC_F5,   KC_F6,   KC_F11 ,
    KC_LSFT,        KC_NO,   KC_NO,   KC_NO,   KC_NO,                                 KC_MUTE,        KC_F1,          KC_F2,   KC_F3,   SFT_T(KC_F12) ,
    _______,        RESET,   _______, _______, _______, _______,       _______,       KC_SPC,         _______,        _______, _______, _______  )
};
