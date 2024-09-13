#include "process_records.h"
#include "dinhhuy258.h"
#include "swapper.h"

bool     space_pressed     = false;
bool     switch_app_active = false;
uint32_t process_timer     = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    process_timer = timer_read32();

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

uint32_t get_process_timer() {
    return process_timer;
}
