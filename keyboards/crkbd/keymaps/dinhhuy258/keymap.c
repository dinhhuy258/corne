/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "dinhhuy258.h"

// clang-format off
#define LAYOUT_split_3x5_3_wrapper(...) LAYOUT_split_3x5_3(__VA_ARGS__)
#define LAYOUT_split_3x5_3_base( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, \
    K31, K32, K33, K34 \
    ) \
    LAYOUT_split_3x5_3 ( \
       K01,    K02,      K03,     K04,     K05,                K06,     K07,     K08,     K09,     K0A, \
       K11,    K12,      K13,     K14,     K15,                K16,     K17,     K18,     K19,     K1A, \
       K21,    K22,      K23,     K24,     K25,                K26,     K27,     K28,     K29,     K2A, \
                         KC_NO,   K31,     K32,                K33,     K34,     KC_NO \
    )

#define LAYOUT_split_3x5_3_base_wrapper(...)       LAYOUT_split_3x5_3_base(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_split_3x5_3_base_wrapper(
        __________________BASE_L1__________________, __________________BASE_R1__________________,
        __________________BASE_L2__________________, __________________BASE_R2__________________,
        __________________BASE_L3__________________, __________________BASE_R3__________________,
        ______________BASE_THUMB_LEFT______________, ______________BASE_THUMB_RIGHT_____________
    ),
    [NAV] = LAYOUT_split_3x5_3_base_wrapper(
        ___________________NAV_L1__________________, ___________________NAV_R1__________________,
        ___________________NAV_L2__________________, ___________________NAV_R2__________________,
        ___________________NAV_L3__________________, ___________________NAV_R3__________________,
        ______________NAV_THUMB_LEFT_______________, ______________NAV_THUMB_RIGHT______________
    ),
    [MOU] = LAYOUT_split_3x5_3_base_wrapper(
        ___________________MOU_L1__________________, ___________________MOU_R1__________________,
        ___________________MOU_L2__________________, ___________________MOU_R2__________________,
        ___________________MOU_L3__________________, ___________________MOU_R3__________________,
        ______________MOU_THUMB_LEFT_______________, ______________MOU_THUMB_RIGHT______________
    ),
    [SYM] = LAYOUT_split_3x5_3_base_wrapper(
        ___________________SYM_L1__________________, ___________________SYM_R1__________________,
        ___________________SYM_L2__________________, ___________________SYM_R2__________________,
        ___________________SYM_L3__________________, ___________________SYM_R3__________________,
        ______________SYM_THUMB_LEFT_______________, ______________SYM_THUMB_RIGHT______________
    ),
    [NUM] = LAYOUT_split_3x5_3_base_wrapper(
        ___________________NUM_L1__________________, ___________________NUM_R1__________________,
        ___________________NUM_L2__________________, ___________________NUM_R2__________________,
        ___________________NUM_L3__________________, ___________________NUM_R3__________________,
        ______________NUM_THUMB_LEFT_______________, ______________NUM_THUMB_RIGHT______________
    ),
};
