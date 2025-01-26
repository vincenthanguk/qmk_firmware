// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,GUI_T(KC_Q), KC_W,  KC_F,    KC_P,    KC_B,                          KC_J, KC_L, KC_U,  KC_Y, GUI_T(KC_QUOTE),  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,LT(2, KC_A),ALT_T(KC_R),CTL_T(KC_S),KC_T,KC_G,                   KC_M, KC_N,CTL_T(KC_E),ALT_T(KC_I),LT(2, KC_O),XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_X,    KC_C,    KC_D,    KC_V,    KC_Z,                         KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                     LT(5, KC_ESC),   LT(1, KC_SPC),  LT(4, KC_TAB),     LT(3, KC_ENT), SFT_T(KC_BSPC), LT(6, KC_DEL)
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, C(KC_U), KC_HOME,  KC_UP,  KC_END, KC_GRAVE,                     A(KC_INS),XXXXXXX, XXXXXXX, XXXXXXX, KC_LGUI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, C(KC_D), KC_LEFT, KC_DOWN, KC_RIGHT,C(KC_S),                      XXXXXXX, A(KC_W), KC_LCTL, KC_LALT, KC_LSFT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, C(KC_A), C(KC_X), C(KC_C), C(KC_V), C(KC_Z),                      C(KC_Y), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, _______,  _______,   _______,  _______, _______
                                      //`--------------------------'  `--------------------------'
  ),
    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_BSLS, S(KC_6), S(KC_LBRC), S(KC_RBRC), S(KC_4),          S(KC_3), S(KC_8), S(KC_7), S(KC_BSLS), S(KC_QUOTE), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LBRC, KC_RBRC, S(KC_9), S(KC_0), XXXXXXX,                  S(KC_EQL), KC_EQL, KC_SCLN, S(KC_SCLN), KC_GRV, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, S(KC_COMM), S(KC_DOT), S(KC_2),            S(KC_5), KC_MINS, S(KC_MINS), S(KC_GRV), S(KC_1), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, _______,  _______,   _______,  _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_PGUP, KC_1,   KC_2,    KC_3,    XXXXXXX,                      KC_J, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_SCLN), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_PGDN, KC_4,   KC_5,    KC_6,    KC_0,                      XXXXXXX, S(KC_G), KC_LCTL, KC_LALT, MT(MOD_LSFT, KC_SCLN), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_7,   KC_8,    KC_9,    XXXXXXX,                      KC_K, XXXXXXX, KC_COMM, KC_DOT, MO(2), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, KC_0,  _______,   _______,  _______, _______
                                      //`--------------------------'  `--------------------------'
  ),
    [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_PSCR, KC_F1,  KC_F2,   KC_F3,   KC_F10,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_CAPS, KC_F4,  KC_F5,   KC_F6,   KC_F11,                      KC_MPLY,  XXXXXXX, KC_LCTL, KC_LALT, KC_LSFT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_F7,  KC_F8,   KC_F9,   KC_F12,                      KC_MUTE,  KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, _______,  _______,   KC_MPRV,  KC_MPLY, KC_MNXT
                                      //`--------------------------'  `--------------------------'
  ),
    [5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX,  C(KC_F), A(KC_F4), XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RCS(KC_I), XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, LALT(KC_INS), XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, RCS(KC_C), RCS(KC_V), XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, _______,  _______,   _______,  _______, _______
                                      //`--------------------------'  `--------------------------'
  ),
    [6] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, RALT(S(KC_Q)), RALT(KC_5), RALT(S(KC_S)), XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, RALT(S(KC_Y)), XXXXXXX, RALT(S(KC_P)), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, RALT(KC_Q), XXXXXXX, RALT(KC_S), XXXXXXX, XXXXXXX,               XXXXXXX, XXXXXXX, RALT(KC_Y), XXXXXXX, RALT(KC_P), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, _______,  _______,   _______,  _______, _______
                                      //`--------------------------'  `--------------------------'
  ),
    [7] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, MS_WHLU, MS_WHLL, MS_UP, MS_WHLR, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, MS_WHLD, MS_LEFT, MS_DOWN, MS_RGHT, XXXXXXX,                     XXXXXXX, MS_BTN1, KC_LCTL, KC_LALT, KC_LSFT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, MS_BTN2, MS_BTN3, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, _______,  _______,   _______,  _______, _______
                                      //`--------------------------'  `--------------------------'
  )
};
const uint16_t PROGMEM combo1[] = {LT(1, KC_SPC), SFT_T(KC_BSPC), COMBO_END};
const uint16_t PROGMEM combo2[] = {LT(3, KC_ENT), SFT_T(KC_BSPC), COMBO_END};
const uint16_t PROGMEM combo3[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM combo4[] = {LT(1, KC_SPC),  LT(4, KC_TAB), COMBO_END};
combo_t key_combos[] = {
    COMBO(combo1, MO(7)),
    COMBO(combo2, MO(4)),
    COMBO(combo3, KC_GRV),
    COMBO(combo4, MO(3)),
};

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SFT_T(KC_A):
            // Immediately select the hold action when another key is tapped.
            return true;
        case SFT_T(KC_O):
            // Immediately select the hold action when another key is tapped.
            return true;
        default:
            // Do not select the hold action when another key is tapped.
            return false;
    }
};
