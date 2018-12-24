Level_2_MapBorder::
	.incbin "data/layouts/Level_2/border.bin"

Level_2_MapBlockdata::
	.incbin "data/layouts/Level_2/map.bin"

	.align 2
Level_2_Layout::
	.4byte 12
	.4byte 12
	.4byte Level_2_MapBorder
	.4byte Level_2_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Facility

