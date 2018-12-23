Lobby_MapBorder::
	.incbin "data/layouts/Lobby/border.bin"

Lobby_MapBlockdata::
	.incbin "data/layouts/Lobby/map.bin"

	.align 2
Lobby_Layout::
	.4byte 12
	.4byte 8
	.4byte Lobby_MapBorder
	.4byte Lobby_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_Shop

