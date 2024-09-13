ifeq ($(strip $(OLED_ENABLE)), yes)
    SRC += $(USER_PATH)/oled/oled.c
    SRC += $(USER_PATH)/oled/dog.c

	# For dog animation
	WPM_ENABLE = yes
endif
