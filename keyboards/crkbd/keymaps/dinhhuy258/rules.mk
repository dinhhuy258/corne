MCU = RP2040
BOOTLOADER = rp2040
CONVERT_TO = rp2040_ce

USER_NAME := dinhhuy258

# The default serial pin is D2, but my microcontroller has a problem with this pin, causing communication issues between the split keyboards.
# So, I soldered a wire between the D2 and D3 pins and used D3 as the serial pin.
# The D3 pin originally is used for ws2812b LEDs, but I don't use them, so I can use this pin for serial communication.
SOFT_SERIAL_PIN = D3

OLED_ENABLE = yes
OLED_DRIVER = ssd1306

RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = no

# Enables Link Time Optimization (LTO) when compiling the keyboard.
# This makes the process take longer, but it can significantly reduce the compiled size.
LTO_ENABLE = yes
