This is a default layout for ThumbsUp! 10 with RP2040 soldered on the PCB.

Use the v10 default layout (to use the newly added 3rd thumb cluster key):

	qmk compile -c -kb thumbsup/rev10_rp2040_unibody_4x12 -km default_4x12_v10_via

IS THIS STILL TRUE?
Note in this initial revision the thumb keys are swapped in error.
I temporarily swapped them in info.json file.
The next revision will put in the right spots.  


In v10 I made a mistake - connectors J1 and J28 to columns on the bottom PCB are oriented opposite to J20 and J24 on the middle PCB.
That put columns for those four columns in the bottom plate in the reverse order.
I compensated that in the matrix definition.
No big deal, will leave it as is.