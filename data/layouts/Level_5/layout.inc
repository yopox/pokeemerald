Level_5_MapBorder::
	.incbin "data/layouts/Level_5/border.bin"

Level_5_MapBlockdata::
	.incbin "data/layouts/Level_5/map.bin"

	.align 2
Level_5_Layout::
	.4byte 22
	.4byte 22
	.4byte Level_5_MapBorder
	.4byte Level_5_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Cave

