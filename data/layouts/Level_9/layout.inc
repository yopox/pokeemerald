Level_9_MapBorder::
	.incbin "data/layouts/Level_9/border.bin"

Level_9_MapBlockdata::
	.incbin "data/layouts/Level_9/map.bin"

	.align 2
Level_9_Layout::
	.4byte 25
	.4byte 30
	.4byte Level_9_MapBorder
	.4byte Level_9_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

