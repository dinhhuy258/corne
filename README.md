# Corne Keyboard Firmware

This repository contains a custom firmware for the [corne keyboard](https://github.com/foostan/crkbd/), built upon the [QMK firmware](https://github.com/qmk/qmk_firmware/).

## Building the Firmware

Follow these steps to build the firmware:

1. Install QMK on your machine by referring to the [official guide](https://docs.qmk.fm/#/newbs).
2. Clone this repository into the QMK firmware's keyboard directory. You can find it at `qmk_firmware/keyboards/crkbd/keymaps/`.
3. Compile the firmware using the following command:

```sh
qmk compile -kb crkbd/rev1 -km qmk-crkbd
```

## Flashing the Firmware

To flash the firmware onto your Corne keyboard, you have two options:

### QMK Toolbox

1. Download [QMK Toolbox](https://github.com/qmk/qmk_toolbox/releases).
2. Open QMK Toolbox and load the `.hex` file by selecting `crkbd_rev1_qmk-crkbd.hex`.
3. Connect your corne keyboard and click the `Flash` button.

### Command Line

```
qmk flash -kb crkbd/rev1 -km qmk-crkbd
```
