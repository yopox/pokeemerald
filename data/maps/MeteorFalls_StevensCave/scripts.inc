MeteorFalls_StevensCave_MapScripts:: @ 823B181
	.byte 0

MeteorFalls_StevensCave_EventScript_23B182:: @ 823B182
	lock
	checkflag FLAG_0x4F8
	goto_eq MeteorFalls_StevensCave_EventScript_23B1CD
	waitse
	playse SE_PIN
	applymovement 1, MeteorFalls_StevensCave_Movement_272598
	waitmovement 0
	applymovement 1, MeteorFalls_StevensCave_Movement_27259A
	waitmovement 0
	applymovement 1, MeteorFalls_StevensCave_Movement_27259E
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_23B1E1, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_STEVEN, MeteorFalls_StevensCave_Text_23B32D
	msgbox MeteorFalls_StevensCave_Text_23B358, MSGBOX_DEFAULT
	setflag FLAG_0x4F8
	release
	end

MeteorFalls_StevensCave_EventScript_23B1CD:: @ 823B1CD
	applymovement 1, MeteorFalls_StevensCave_Movement_27259E
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_23B358, MSGBOX_DEFAULT
	release
	end

MeteorFalls_StevensCave_Text_23B1E1: @ 823B1E1
	.string "STEVEN: Oh, wow, {PLAYER}{KUN}.\n"
	.string "I'm amazed you knew where to find me.\p"
	.string "Do you, uh…maybe think of me as\n"
	.string "just a rock maniac?\p"
	.string "No, that can't be right.\p"
	.string "We battled alongside each other at\n"
	.string "the SOOTOPOLIS SPACE CENTER.\p"
	.string "You should have a very good idea\n"
	.string "about how good I am.\p"
	.string "Okay, {PLAYER}{KUN}, if you're going to mount\n"
	.string "a serious challenge, expect the worst!$"

MeteorFalls_StevensCave_Text_23B32D: @ 823B32D
	.string "You…\n"
	.string "I had no idea you'd become so strong…$"

MeteorFalls_StevensCave_Text_23B358: @ 823B358
	.string "STEVEN: Come to think of it, ever since\n"
	.string "our paths first crossed in GRANITE\l"
	.string "CAVE in DEWFORD, I had this feeling.\p"
	.string "I thought that you would eventually\n"
	.string "become the CHAMPION.\p"
	.string "My predictions usually come true.\p"
	.string "And where will you go from here?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Fufufu, even I couldn't tell you that.$"

