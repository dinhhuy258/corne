/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// https://docs.qmk.fm/#/config_options?id=setting-handedness
#define MASTER_LEFT

// The default serial pin is D2, but my microcontroller has a problem with this pin, causing communication issues between the split keyboards.
// So, I soldered a wire between the D2 and D3 pins and used D3 as the serial pin.
#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN D3
