ifeq ($(strip $(OLED_ENABLE)), yes)
    SRC += $(USER_PATH)/oled/oled.c
endif

# Enables Link Time Optimization (LTO) when compiling the keyboard.
# This makes the process take longer, but it can significantly reduce the compiled size.
LTO_ENABLE = yes

EXTRAFLAGS += -flto
