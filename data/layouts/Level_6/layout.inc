Level_6_MapBorder::
	.incbin "data/layouts/Level_6/border.bin"

Level_6_MapBlockdata::
	.incbin "data/layouts/Level_6/map.bin"

	.align 2
Level_6_Layout::
	.4byte 20
	.4byte 30
	.4byte Level_6_MapBorder
	.4byte Level_6_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Cave

