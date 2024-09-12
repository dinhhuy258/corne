#pragma once

#include QMK_KEYBOARD_H

#define TMUX_PREFIX LCTL(KC_F)
#define VIM_PREFIX KC_SCLN
#define SCREENSHOT HYPR(KC_4)
#define NAV_LEFT KC_F23
#define NAV_RIGHT KC_F24
#define VIM_LEFT LSFT(KC_LEFT)
#define VIM_RIGHT LSFT(KC_RIGHT)
#define MOU_MAX_SPEED LGUI(KC_F14)
#define MOU_MIN_SPEED LGUI(KC_F15)
#define MOU_MED_SPEED LGUI(KC_F16)
#define MOUSE_LEFT LGUI(KC_F24)
#define MOUSE_DOWN LGUI(KC_F23)
#define MOUSE_UP LGUI(KC_F22)
#define MOUSE_RIGHT LGUI(KC_F21)
#define WHEEL_LEFT LGUI(KC_F20)
#define WHEEL_DOWN LGUI(KC_F19)
#define WHEEL_UP LGUI(KC_F18)
#define WHEEL_RIGHT LGUI(KC_F17)
#define RIGHT_CLICK MS_BTN2
#define LEFT_CLICK LGUI(KC_F13)


enum layers {
    BASE = 0,
    NAV,
    MOU,
    SYM,
    NUM,
};

enum keycodes {
    SWITCH_APP = SAFE_RANGE, // Switch to next window (cmd-tab)
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

#define ___________________NAV_L1__________________       KC_BRID,         KC_BRIU,         SCREENSHOT,      XXXXXXX,         XXXXXXX
#define ___________________NAV_L2__________________       KC_LGUI,         KC_LOPT,         KC_LCTL,         KC_LSFT,         XXXXXXX
#define ___________________NAV_L3__________________       KC_VOLD,         KC_VOLU,         KC_MUTE,         TMUX_PREFIX,     XXXXXXX
#define ______________NAV_THUMB_LEFT_______________       _______,         _______

#define ___________________NAV_R1__________________       XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         LSG(KC_TAB)
#define ___________________NAV_R2__________________       KC_LEFT,         KC_DOWN,         KC_UP,           KC_RGHT,         SWITCH_APP
#define ___________________NAV_R3__________________       NAV_LEFT,        VIM_LEFT,        VIM_RIGHT,       NAV_RIGHT,       LGUI(KC_GRAVE)
#define ______________NAV_THUMB_RIGHT______________       _______,          _______

#define ___________________MOU_L1__________________       XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX
#define ___________________MOU_L2__________________       XXXXXXX,         MOU_MAX_SPEED,   MOU_MIN_SPEED,   MOU_MED_SPEED,   XXXXXXX
#define ___________________MOU_L3__________________       XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX
#define ______________MOU_THUMB_LEFT_______________       _______,         _______

#define ___________________MOU_R1__________________       XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX
#define ___________________MOU_R2__________________       MOUSE_LEFT,      MOUSE_DOWN,      MOUSE_UP,        MOUSE_RIGHT,    LGUI(KC_TAB)
#define ___________________MOU_R3__________________       WHEEL_LEFT,      WHEEL_DOWN,      WHEEL_UP,        WHEEL_RIGHT,    LGUI(KC_GRAVE)
#define ______________MOU_THUMB_RIGHT______________       LEFT_CLICK,      RIGHT_CLICK

#define ___________________SYM_L1__________________       KC_AMPR,         KC_ASTR,         KC_LCBR,         KC_RCBR,         KC_GRV
#define ___________________SYM_L2__________________       KC_CIRC,         KC_DLR,          KC_LPRN,         KC_RPRN,         KC_TILD
#define ___________________SYM_L3__________________       KC_PERC,         KC_HASH,         KC_LBRC,         KC_RBRC,         KC_QUES
#define ______________SYM_THUMB_LEFT_______________       _______,         _______

#define ___________________SYM_R1__________________       KC_AT,           KC_PLUS,         KC_UNDS,         KC_PIPE,         KC_COLON
#define ___________________SYM_R2__________________       KC_EXLM,         KC_EQL,          KC_MINS,         KC_BSLS,         KC_SCLN
#define ___________________SYM_R3__________________       KC_QUOT,         KC_DQUO,         KC_COMM,         KC_DOT,          KC_SLSH
#define ______________SYM_THUMB_RIGHT______________       _______,         _______

#define ___________________NUM_L1__________________       KC_MINS,         KC_7,            KC_8,            KC_9,            KC_PLUS
#define ___________________NUM_L2__________________       KC_BSLS,         KC_4,            KC_5,            KC_6,            KC_ASTR
#define ___________________NUM_L3__________________       KC_0,            KC_1,            KC_2,            KC_3,            KC_EQL
#define ______________NUM_THUMB_LEFT_______________       _______,         _______

#define ___________________NUM_R1__________________       XXXXXXX,         VIM_PREFIX,      XXXXXXX,         XXXXXXX,         KC_PERC
#define ___________________NUM_R2__________________       XXXXXXX,         KC_LSFT,         KC_LCTL,         KC_LOPT,         KC_LGUI
#define ___________________NUM_R3__________________       XXXXXXX,         TMUX_PREFIX,     KC_COMM,         KC_DOT,          KC_SLSH
#define ______________NUM_THUMB_RIGHT______________       _______,         _______
