#include "dinhhuy258.h"

static const char PROGMEM font_logo[16] = {0x80, 0x81, 0x82, 0x83, 0x84, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0};

bool oled_task_user(void) {
    oled_write_P(font_logo, false);
    oled_write("corne", false);
    oled_set_cursor(0, 14);
    oled_write("crkbd", false);
    oled_set_cursor(0, 15);
    oled_write("dinhhuy258", false);

    return false;
}
