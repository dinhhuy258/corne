#include "dinhhuy258.h"
#include "dog.h"
#include "bongocat.h"

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }

    return rotation;
}

void oled_render_master(void) {
    render_dog(0, 13);
}

void oled_render_slave(void) {
    render_bongocat();
}

bool oled_task_user(void) {
#if OLED_TIMEOUT > 0
    // The animation prevents the normal timeout from occuring
    if (last_input_activity_elapsed() > OLED_TIMEOUT && last_led_activity_elapsed() > OLED_TIMEOUT) {
        oled_off();

        return false;
    } else {
        oled_on();
    }
#endif
    if (is_keyboard_master()) {
        oled_render_master();
    } else {
        oled_render_slave();
    }

    return false;
}
