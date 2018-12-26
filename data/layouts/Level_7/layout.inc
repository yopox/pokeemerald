Level_7_MapBorder::
	.incbin "data/layouts/Level_7/border.bin"

Level_7_MapBlockdata::
	.incbin "data/layouts/Level_7/map.bin"

	.align 2
Level_7_Layout::
	.4byte 30
	.4byte 22
	.4byte Level_7_MapBorder
	.4byte Level_7_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Lavaridge

