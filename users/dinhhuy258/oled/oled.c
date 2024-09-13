#include "dinhhuy258.h"
#include "dog.h"

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
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

    oled_set_cursor(0, 0);
    oled_write("Layer", false);
    oled_set_cursor(0, 1);
    switch (get_highest_layer(layer_state)) {
        case BASE:
            oled_write("Base", false);

            break;
        case NAV:
            oled_write("Nav ", false);

            break;
        case MOU:
            oled_write("Mou ", false);

            break;
        case SYM:
            oled_write("Sym ", false);

            break;
        case NUM:
            oled_write("Num ", false);

            break;
        default:
            oled_write("    ", false);

            break;
    }

    render_dog(0, 13);

    return false;
}
