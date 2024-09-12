#pragma once

#include QMK_KEYBOARD_H

enum layers {
    BASE = 0,
    NAV,
    MOU,
    SYM,
    NUM,
};

// clang-format off
#define __________________BASE_L1__________________       KC_Q,            KC_W,            KC_E,            KC_R,            KC_T
#define __________________BASE_L2__________________       LGUI_T(KC_A),    LOPT_T(KC_S),    LCTL_T(KC_D),    LSFT_T(KC_F),    HYPR_T(KC_G)
#define __________________BASE_L3__________________       KC_Z,            KC_X,            KC_C,            KC_V,            KC_B
#define ______________BASE_THUMB_LEFT______________       LT(NAV, KC_ESC), LT(MOU, KC_SPC)

#define __________________BASE_R1__________________       KC_Y,            KC_U,            KC_I,            KC_O,            KC_P
#define __________________BASE_R2__________________       HYPR_T(KC_H),    LSFT_T(KC_J),    LCTL_T(KC_K),    LALT_T(KC_L),    LGUI_T(KC_SCLN)
#define __________________BASE_R3__________________       KC_N,            KC_M,            KC_COMM,         KC_DOT,          KC_SLSH
#define ______________BASE_THUMB_RIGHT_____________       LT(NUM, KC_ENT), LT(SYM, KC_BSPC)

#define ___________________NAV_L1__________________       KC_BRID,         KC_BRIU,         HYPR(KC_4),      XXXXXXX,         XXXXXXX
#define ___________________NAV_L2__________________       KC_LGUI,         KC_LOPT,         KC_LCTL,         KC_LSFT,         XXXXXXX
#define ___________________NAV_L3__________________       KC_VOLD,         KC_VOLU,         KC_MUTE,         LCTL(KC_F),      XXXXXXX
#define ______________NAV_THUMB_LEFT_______________       _______,         _______

#define ___________________NAV_R1__________________       XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         LSG(KC_TAB)
#define ___________________NAV_R2__________________       KC_LEFT,         KC_DOWN,         KC_UP,           KC_RGHT,         LGUI(KC_TAB)
#define ___________________NAV_R3__________________       KC_F23,          LSFT(KC_LEFT),   LSFT(KC_RIGHT),  KC_F24,          LGUI(KC_GRAVE)
#define ______________NAV_THUMB_RIGHT______________       _______,          _______

#define ___________________MOU_L1__________________       KC_Q,            KC_W,            KC_E,            KC_R,            KC_T
#define ___________________MOU_L2__________________       LGUI_T(KC_A),    LALT_T(KC_S),    LCTL_T(KC_D),    LSFT_T(KC_F),    HYPR_T(KC_G)
#define ___________________MOU_L3__________________       KC_Z,            KC_X,            KC_C,            KC_V,            KC_B
#define ______________MOU_THUMB_LEFT_______________       KC_ESC,          KC_SPC

#define ___________________MOU_R1__________________       KC_Y,            KC_U,            KC_I,            KC_O,            KC_P
#define ___________________MOU_R2__________________       HYPR_T(KC_H),    LSFT_T(KC_J),    LCTL_T(KC_K),    LALT_T(KC_L),    LGUI_T(KC_SCLN)
#define ___________________MOU_R3__________________       KC_N,            KC_M,            KC_COMM,         KC_DOT,          KC_SLSH
#define ______________MOU_THUMB_RIGHT______________       KC_ENT,          KC_BSPC

#define ___________________SYM_L1__________________       KC_Q,            KC_W,            KC_E,            KC_R,            KC_T
#define ___________________SYM_L2__________________       LGUI_T(KC_A),    LALT_T(KC_S),    LCTL_T(KC_D),    LSFT_T(KC_F),    HYPR_T(KC_G)
#define ___________________SYM_L3__________________       KC_Z,            KC_X,            KC_C,            KC_V,            KC_B
#define ______________SYM_THUMB_LEFT_______________       KC_ESC,          KC_SPC

#define ___________________SYM_R1__________________       KC_Y,            KC_U,            KC_I,            KC_O,            KC_P
#define ___________________SYM_R2__________________       HYPR_T(KC_H),    LSFT_T(KC_J),    LCTL_T(KC_K),    LALT_T(KC_L),    LGUI_T(KC_SCLN)
#define ___________________SYM_R3__________________       KC_N,            KC_M,            KC_COMM,         KC_DOT,          KC_SLSH
#define ______________SYM_THUMB_RIGHT______________       KC_ENT,          KC_BSPC

#define ___________________NUM_L1__________________       KC_Q,            KC_W,            KC_E,            KC_R,            KC_T
#define ___________________NUM_L2__________________       LGUI_T(KC_A),    LALT_T(KC_S),    LCTL_T(KC_D),    LSFT_T(KC_F),    HYPR_T(KC_G)
#define ___________________NUM_L3__________________       KC_Z,            KC_X,            KC_C,            KC_V,            KC_B
#define ______________NUM_THUMB_LEFT_______________       KC_ESC,          KC_SPC

#define ___________________NUM_R1__________________       KC_Y,            KC_U,            KC_I,            KC_O,            KC_P
#define ___________________NUM_R2__________________       HYPR_T(KC_H),    LSFT_T(KC_J),    LCTL_T(KC_K),    LALT_T(KC_L),    LGUI_T(KC_SCLN)
#define ___________________NUM_R3__________________       KC_N,            KC_M,            KC_COMM,         KC_DOT,          KC_SLSH
#define ______________NUM_THUMB_RIGHT______________       KC_ENT,          KC_BSPC
