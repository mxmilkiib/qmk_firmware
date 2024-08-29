This is a default layout for ThumbsUp! v9 with rp2040-based ProMicro-compatible soldered/socketed on the PCB.
RP2040-ProMicro pins laid out like this:

  "cols": ["GP20", "GP21","GP9", "GP7", "GP6", "GP7", "GP22", "GP29", "GP28", "GP27", "GP26", "GP22" ],
  "rows": ["GP10", "GP0", "GP3", "GP4"]

#define DIODE_DIRECTION COL2ROW

Note in this initial revision the thumb keys are swapped in error.
I temporarily swapped them in info.json file.
The next revision will put in the right spots.   
 
This folder contains a version with VIA support enabled.
The STENO support is removed as there are not enough endpoints for it.
Compile it with this keymap:

	qmk compile -km default_via

