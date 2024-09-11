#include "process_records.h"
#include "dinhhuy258.h"

bool ctrl_pressed  = false;
bool space_pressed = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_LCTL:
        case KC_RCTL:
            ctrl_pressed = record->event.pressed;

            break;
        case KC_SPC:
            space_pressed = record->event.pressed;

            break;
    }

    return true;
}

bool is_ctrl_pressed() {
    return ctrl_pressed;
}

bool is_space_pressed() {
    return space_pressed;
}
