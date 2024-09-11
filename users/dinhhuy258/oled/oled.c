#include "dinhhuy258.h"
#include "dog.h"

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

bool oled_task_user(void) {
#if OLED_TIMEOUT > 0
    /* The animation prevents the normal timeout from occuring */
    if (last_input_activity_elapsed() > OLED_TIMEOUT && last_led_activity_elapsed() > OLED_TIMEOUT) {
        oled_off();

        return false;
    } else {
        oled_on();
    }
#endif

    render_dog(0, 13, get_current_wpm());

    return false;
}
