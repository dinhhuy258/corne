#include "process_records.h"
#include "dinhhuy258.h"
#include "swapper.h"

bool space_pressed = false;
bool switch_app_active = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    update_swapper(&switch_app_active, KC_LGUI, KC_TAB, SWITCH_APP, keycode, record);

    switch (keycode) {
        case KC_SPC:
            space_pressed = record->event.pressed;

            break;
    }

    return true;
}

bool is_space_pressed() {
    return space_pressed;
}
