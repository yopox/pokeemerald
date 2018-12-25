Level_3_MapBorder::
	.incbin "data/layouts/Level_3/border.bin"

Level_3_MapBlockdata::
	.incbin "data/layouts/Level_3/map.bin"

	.align 2
Level_3_Layout::
	.4byte 42
	.4byte 20
	.4byte Level_3_MapBorder
	.4byte Level_3_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Lilycove

