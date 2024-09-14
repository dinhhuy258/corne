#include "process_records.h"
#include "dinhhuy258.h"
#include "swapper.h"

bool     space_pressed                     = false;
bool     switch_app_active                 = false;
uint32_t process_timer                     = 0;
keypos_t switch_app_ignore_key_positions[] = {
#   if defined(KEYBOARD_crkbd)
    {.col = 1, .row = 4},
#   endif
};
uint8_t switch_app_ignore_key_positions_size = ARRAY_SIZE(switch_app_ignore_key_positions);

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    process_timer = timer_read32();

    update_swapper(&switch_app_active, KC_LGUI, KC_TAB, SWITCH_APP, switch_app_ignore_key_positions, switch_app_ignore_key_positions_size, keycode, record);

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
