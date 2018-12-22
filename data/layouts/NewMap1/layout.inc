NewMap1_MapBorder::
	.incbin "data/layouts/NewMap1/border.bin"

NewMap1_MapBlockdata::
	.incbin "data/layouts/NewMap1/map.bin"

	.align 2
NewMap1_Layout::
	.4byte 12
	.4byte 8
	.4byte NewMap1_MapBorder
	.4byte NewMap1_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_Shop

