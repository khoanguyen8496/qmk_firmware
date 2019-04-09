Interdox wireless
=======

- Hardware Availability: Falbatech

Make example for this keyboard (after setting up your build environment):

```sh
make interdox_w:default
```

Example of flashing this keyboard:

```sh
make interdox_w/rev1:default:avrdude
```

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Interdox Notes

These configuration files were based off the [Mitosis](https://github.com/qmk/qmk_firmware/tree/master/keyboards/mitosis) and [Atreus](https://github.com/technomancy/atreus) keyboard. It assumes a Pro Micro is being used, however retains the 'make upload' feature from the Atreus branch. This keyboard uses a completely different 'matrix scan' system to other keyboards, it relies on an external nRF51822 microcontroller maintaining a matrix of keystates received from the keyboard halves. The matrix.c file contains the code to poll the external microcontroller for the key matrix. As long as this file is not changed, all other QMK features are supported.
