* https://github.com/mxmilkiib/qmk_firmware/tree/master/keyboards/thumbsup/rev9_promicro_4x12
* https://github.com/mxmilkiib/qmk_firmware/tree/master/keyboards/thumbsup/keymaps/default_4x12_no_plover_via
* https://remap-keys.app/configure
* https://qmk.fm
* https://docs.qmk.fm

```
make rev9_promicro_4x12:default_4x12_v9_no_plover_via
qmk compile -kb thumbsup/rev9_promicro_4x12 -km default_4x12_v9_no_plover_via/
avrdude

??
avrdude -p atmega32u4 -c avr109 -U flash:w:thumbsup_rev9_promicro_4x12_default_4x12_v9_no_plover_via.hex:i -P /dev/input/by-id/usb-Alexander__Sasha__Karmanov_ThumbsUp__v9-event-kbd
??
```
