ifeq ($(strip $(OLED_ENABLE)), yes)
    SRC += $(USER_PATH)/oled/oled.c
    SRC += $(USER_PATH)/oled/dog.c
    SRC += $(USER_PATH)/process_records.c

	# For dog animation
	WPM_ENABLE = yes
endif

MOUSEKEY_ENABLE = yes

# Enables Link Time Optimization (LTO) when compiling the keyboard.
# This makes the process take longer, but it can significantly reduce the compiled size.
LTO_ENABLE = yes

EXTRAFLAGS += -flto
