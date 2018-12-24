Lobby_MapScripts::
	.byte 0

Lobby_MartScript::
	lock
	faceplayer
	message gUnknown_08272A21
	waitmessage
	pokemart Lobby_Mart
	msgbox gUnknown_08272A3F, MSGBOX_DEFAULT
	release
	end

Lobby_Mart:
	.2byte ITEM_POTION
	.2byte ITEM_POKE_BALL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_AWAKENING
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_NONE
	release
	end

Lobby_Beauty::
	lock
	faceplayer
	msgbox Lobby_BeautyMessage, MSGBOX_NPC
	waitmessage
	release
	end

Lobby_BeautyMessage:
	.string "Don't forget to buy some pokéballs and\n"
	.string "potions before you go!$"

Lobby_Bag::
	lock
	faceplayer
	@ Starter choice
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_0x052
	special ChooseStarter
	waitstate
	@ Give running shoes
	setflag FLAG_SYS_B_DASH
	@ Give National dex
	setflag FLAG_SYS_POKEDEX_GET
	special EnableNationalPokedex
	@ Rename choice
	msgbox Lobby_RenameMessage, MSGBOX_YESNO
	switch VAR_RESULT
	case 0, Lobby_TeleportScript
	case 1, Lobby_RenameScript
	case 127, Lobby_TeleportScript
	release
	end

Lobby_RenameMessage:
	.string "Give a nickname to your starter?$"

Lobby_RenameScript:
	fadescreen 1
	special ChangePokemonNickname
	waitstate
	goto Lobby_TeleportScript
	end
