NewMap1_MapScripts::
	.byte 0

NewMap1_MartScript::
	lock
	faceplayer
	message gUnknown_08272A21
	waitmessage
	pokemart NewMap1_Mart
	msgbox gUnknown_08272A3F, MSGBOX_DEFAULT
	release
	end

NewMap1_Mart:
	.2byte ITEM_POTION
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE
	release
	end

NewMap1_Beauty::
	lock
	faceplayer
	msgbox NewMap1_BeautyMessage, MSGBOX_NPC
	waitmessage
	release
	end

NewMap1_BeautyMessage:
	.string "Don't forget to buy some pokéballs and\n"
	.string "potions before you go!$"

NewMap1_Bag::
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_0x052
	special ChooseStarter
	waitstate
	special HealPlayerParty
	@ Teleport the player
	release
	end
