#pragma once

#include "keycodes.h"

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)
#define LAYOUT_wrapper_3x5_2(...) LAYOUT_split_3x5_2(__VA_ARGS__)
