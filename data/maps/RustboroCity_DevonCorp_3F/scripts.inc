RustboroCity_DevonCorp_3F_MapScripts:: @ 821242D
	map_script 3, RustboroCity_DevonCorp_3F_MapScript1_21243D
	map_script 4, RustboroCity_DevonCorp_3F_MapScript2_212455
	map_script 2, RustboroCity_DevonCorp_3F_MapScript2_212464
	.byte 0

RustboroCity_DevonCorp_3F_MapScript1_21243D: @ 821243D
	compare VAR_0x408F, 0
	call_if 1, RustboroCity_DevonCorp_3F_EventScript_212449
	end

RustboroCity_DevonCorp_3F_EventScript_212449:: @ 8212449
	setobjectxyperm 2, 3, 2
	setobjectmovementtype 2, 9
	return

RustboroCity_DevonCorp_3F_MapScript2_212455: @ 8212455
	map_script_2 VAR_0x408F, 0, RustboroCity_DevonCorp_3F_EventScript_21245F
	.2byte 0

RustboroCity_DevonCorp_3F_EventScript_21245F:: @ 821245F
	turnobject 255, 4
	end

RustboroCity_DevonCorp_3F_MapScript2_212464: @ 8212464
	map_script_2 VAR_0x408F, 0, RustboroCity_DevonCorp_3F_EventScript_21246E
	.2byte 0

RustboroCity_DevonCorp_3F_EventScript_21246E:: @ 821246E
	lockall
	msgbox RustboroCity_DevonCorp_3F_Text_212C37, MSGBOX_DEFAULT
	closemessage
	applymovement 2, RustboroCity_DevonCorp_3F_Movement_212546
	waitmovement 0
	delay 80
	applymovement 2, RustboroCity_DevonCorp_3F_Movement_21254F
	waitmovement 0
	msgbox RustboroCity_DevonCorp_3F_Text_212DE8, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_TSURETEK, 0
	applymovement 2, RustboroCity_DevonCorp_3F_Movement_212534
	applymovement EVENT_OBJ_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_212558
	waitmovement 0
	msgbox RustboroCity_DevonCorp_3F_Text_212E2F, MSGBOX_DEFAULT
	closemessage
	fadedefaultbgm
	applymovement 2, RustboroCity_DevonCorp_3F_Movement_212543
	applymovement EVENT_OBJ_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_212566
	waitmovement 0
	msgbox RustboroCity_DevonCorp_3F_Text_212609, MSGBOX_DEFAULT
	giveitem_std ITEM_LETTER
	msgbox RustboroCity_DevonCorp_3F_Text_21277C, MSGBOX_DEFAULT
	playfanfare MUS_FANFA4
	message RustboroCity_DevonCorp_3F_Text_212820
	waitfanfare
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_0x0BC
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
	msgbox RustboroCity_DevonCorp_3F_Text_212837, MSGBOX_DEFAULT
	closemessage
	call RustboroCity_DevonCorp_3F_EventScript_272083
	msgbox RustboroCity_DevonCorp_3F_Text_2129D2, MSGBOX_DEFAULT
	setflag FLAG_HIDE_ROUTE_116_TUNNELER
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_LOVER_MAN
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_LOVER_WOMAN
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setvar VAR_0x4096, 1
	clearflag FLAG_HIDE_RUSBORO_CITY_RIVAL
	setvar VAR_0x408F, 1
	setvar VAR_0x405A, 6
	releaseall
	end

RustboroCity_DevonCorp_3F_Movement_21252F: @ 821252F
	walk_up
	walk_up
	walk_up
	walk_in_place_fastest_left
	step_end

RustboroCity_DevonCorp_3F_Movement_212534: @ 8212534
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_left
	step_end

RustboroCity_DevonCorp_3F_Movement_212543: @ 8212543
	delay_16
	walk_in_place_fastest_down
	step_end

RustboroCity_DevonCorp_3F_Movement_212546: @ 8212546
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

RustboroCity_DevonCorp_3F_Movement_21254F: @ 821254F
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	step_end

RustboroCity_DevonCorp_3F_Movement_212558: @ 8212558
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

RustboroCity_DevonCorp_3F_Movement_212566: @ 8212566
	delay_16
	delay_16
	walk_down
	walk_down
	walk_in_place_fastest_right
	step_end

RustboroCity_DevonCorp_3F_EventScript_21256C:: @ 821256C
	lock
	faceplayer
	checkflag FLAG_0x110
	goto_eq RustboroCity_DevonCorp_3F_EventScript_2125CC
	checkflag FLAG_0x0BD
	goto_eq RustboroCity_DevonCorp_3F_EventScript_212595
	msgbox RustboroCity_DevonCorp_3F_Text_212A09, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, RustboroCity_DevonCorp_3F_Movement_2725A2
	waitmovement 0
	release
	end

RustboroCity_DevonCorp_3F_EventScript_212595:: @ 8212595
	msgbox RustboroCity_DevonCorp_3F_Text_212A29, MSGBOX_DEFAULT
	giveitem_std ITEM_EXP_SHARE
	compare VAR_RESULT, 0
	goto_eq RustboroCity_DevonCorp_3F_EventScript_272054
	setflag FLAG_0x110
	msgbox RustboroCity_DevonCorp_3F_Text_212A9E, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, RustboroCity_DevonCorp_3F_Movement_2725A2
	waitmovement 0
	release
	end

RustboroCity_DevonCorp_3F_EventScript_2125CC:: @ 82125CC
	msgbox RustboroCity_DevonCorp_3F_Text_212B78, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, RustboroCity_DevonCorp_3F_Movement_2725A2
	waitmovement 0
	release
	end

RustboroCity_DevonCorp_3F_EventScript_2125E1:: @ 82125E1
	lock
	faceplayer
	checkflag FLAG_0x100
	goto_eq RustboroCity_DevonCorp_3F_EventScript_2125F6
	msgbox RustboroCity_DevonCorp_3F_Text_212E41, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_3F_EventScript_2125F6:: @ 82125F6
	msgbox RustboroCity_DevonCorp_3F_Text_212E88, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_3F_EventScript_212600:: @ 8212600
	msgbox RustboroCity_DevonCorp_3F_Text_212EE9, MSGBOX_SIGN
	end

RustboroCity_DevonCorp_3F_Text_212609: @ 8212609
	.string "I'm MR. STONE, the PRESIDENT of\n"
	.string "the DEVON CORPORATION.\p"
	.string "I'd just got word about you!\p"
	.string "You saved our staff not just once,\n"
	.string "but twice!\p"
	.string "I have a favor to ask of an amazing\n"
	.string "person like you.\p"
	.string "I understand that you're delivering\n"
	.string "a package to SLATEPORT's SHIPYARD.\p"
	.string "Well, on the way, could you stop off in\n"
	.string "DEWFORD TOWN?\p"
	.string "I was hoping that you'd deliver a\n"
	.string "LETTER to STEVEN in DEWFORD.$"

RustboroCity_DevonCorp_3F_Text_21277C: @ 821277C
	.string "MR. STONE: Now, you should know that\n"
	.string "I am a great PRESIDENT.\p"
	.string "So, I'd never be so cheap as to ask\n"
	.string "a favor for nothing in return.\p"
	.string "That's why I want you to have this!$"

RustboroCity_DevonCorp_3F_Text_212820: @ 8212820
	.string "{PLAYER} received a POKéNAV.$"

RustboroCity_DevonCorp_3F_Text_212837: @ 8212837
	.string "MR. STONE: That device…\p"
	.string "It's a POKéMON NAVIGATOR, or POKéNAV\n"
	.string "for short.\p"
	.string "It's an indispensable tool for any\n"
	.string "TRAINER on an adventure.\p"
	.string "It has a map of the HOENN region.\p"
	.string "You can check the locations of\n"
	.string "DEWFORD and SLATEPORT easily!\p"
	.string "By the way, I've heard that sinister\n"
	.string "criminals--MAGMA and AQUA, I believe--\l"
	.string "have been making trouble far and wide.\p"
	.string "I think it would be best if you rested\n"
	.string "up before you go on your way.$"

RustboroCity_DevonCorp_3F_Text_2129D2: @ 82129D2
	.string "MR. STONE: Well, then, {PLAYER}{KUN},\n"
	.string "go with caution and care!$"

RustboroCity_DevonCorp_3F_Text_212A09: @ 8212A09
	.string "MR. STONE: I'm counting on you!$"

RustboroCity_DevonCorp_3F_Text_212A29: @ 8212A29
	.string "MR. STONE: You delivered my LETTER?\n"
	.string "Thank you kindly!\p"
	.string "This is my way of thanking you.\n"
	.string "It should help you, a TRAINER.$"

RustboroCity_DevonCorp_3F_Text_212A9E: @ 8212A9E
	.string "MR. STONE: A POKéMON holding that\n"
	.string "EXP. SHARE will be given some of the\l"
	.string "EXP Points from battle.\p"
	.string "It will get EXP Points even if it didn't\n"
	.string "actually battle.\p"
	.string "I would say EXP. SHARE is quite useful\n"
	.string "for raising weak POKéMON.$"

RustboroCity_DevonCorp_3F_Text_212B78: @ 8212B78
	.string "MR. STONE: Since my youth, I've immersed\n"
	.string "myself in work.\p"
	.string "Consequently, I'm not familiar with\n"
	.string "trends and that sort of thing.\p"
	.string "But do young people all want to be\n"
	.string "TRAINERS in the POKéMON LEAGUE?$"

RustboroCity_DevonCorp_3F_Text_212C37: @ 8212C37
	.string "This is the DEVON CORPORATION's\n"
	.string "third floor.\p"
	.string "Our PRESIDENT's OFFICE is on\n"
	.string "this floor.\p"
	.string "Anyway, I can't tell you how much I'm\n"
	.string "grateful for what you've done.\p"
	.string "Um… By the way, that parcel\n"
	.string "you got back for us…\p"
	.string "Could I get you to deliver that to\n"
	.string "the SHIPYARD in SLATEPORT?\p"
	.string "It would be awful if those robbers\n"
	.string "tried to take it again.\p"
	.string "Uh… Hehehe, so, uh, could I count\n"
	.string "on you to do that for me?\p"
	.string "Oh, that's right.\n"
	.string "Could you wait here a second?$"

RustboroCity_DevonCorp_3F_Text_212DE8: @ 8212DE8
	.string "Our PRESIDENT would like to have\n"
	.string "a word with you.\p"
	.string "Please come with me.$"

RustboroCity_DevonCorp_3F_Text_212E2F: @ 8212E2F
	.string "Please, go ahead.$"

RustboroCity_DevonCorp_3F_Text_212E41: @ 8212E41
	.string "If you visit the SHIPYARD in SLATEPORT,\n"
	.string "you should go see CAPT. STERN.$"

RustboroCity_DevonCorp_3F_Text_212E88: @ 8212E88
	.string "DEVON's new products, the REPEAT BALL\n"
	.string "and TIMER BALL, have become hugely\l"
	.string "popular among TRAINERS.$"

RustboroCity_DevonCorp_3F_Text_212EE9: @ 8212EE9
	.string "It's a collection of rare rocks and\n"
	.string "stones assembled by the PRESIDENT.$"

