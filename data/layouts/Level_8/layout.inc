Level_8_MapBorder::
	.incbin "data/layouts/Level_8/border.bin"

Level_8_MapBlockdata::
	.incbin "data/layouts/Level_8/map.bin"

	.align 2
Level_8_Layout::
	.4byte 20
	.4byte 20
	.4byte Level_8_MapBorder
	.4byte Level_8_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Underwater

