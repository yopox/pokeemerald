Level_4_MapBorder::
	.incbin "data/layouts/Level_4/border.bin"

Level_4_MapBlockdata::
	.incbin "data/layouts/Level_4/map.bin"

	.align 2
Level_4_Layout::
	.4byte 73
	.4byte 20
	.4byte Level_4_MapBorder
	.4byte Level_4_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Lilycove

