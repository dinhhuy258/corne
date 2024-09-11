#pragma once

#include QMK_KEYBOARD_H

enum layers {
    BASE = 0,
    NAV,
    MOU,
    SYM,
    NUM,
};

#define __________________BASE_L1__________________       KC_Q,            KC_W,            KC_E,            KC_R,            KC_T
#define __________________BASE_L2__________________       LGUI_T(KC_A),    LALT_T(KC_S),    LCTL_T(KC_D),    LSFT_T(KC_F),    HYPR_T(KC_G)
#define __________________BASE_L3__________________       KC_Z,            KC_X,            KC_C,            KC_V,            KC_B
#define ______________BASE_THUMB_LEFT______________       KC_ESC,          KC_SPC

#define __________________BASE_R1__________________       KC_Y,            KC_U,            KC_I,            KC_O,            KC_P
#define __________________BASE_R2__________________       HYPR_T(KC_H),    LSFT_T(KC_J),    LCTL_T(KC_K),    LALT_T(KC_L),    LGUI_T(KC_SCLN)
#define __________________BASE_R3__________________       KC_N,            KC_M,            KC_COMM,         KC_DOT,          KC_SLSH
#define ______________BASE_THUMB_RIGHT_____________       KC_ENT,          KC_BSPC
