Level_1_MapBorder::
	.incbin "data/layouts/Level_1/border.bin"

Level_1_MapBlockdata::
	.incbin "data/layouts/Level_1/map.bin"

	.align 2
Level_1_Layout::
	.4byte 20
	.4byte 10
	.4byte Level_1_MapBorder
	.4byte Level_1_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

