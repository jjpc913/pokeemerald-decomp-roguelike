# 1 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
DEEPROCK_CAVE_EXIT_MapScripts::
# 2 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	.byte

DEEPROCK_CAVE_EXIT_EventScript_Ball4::
# 6 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	lockall
# 7 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	call Rummage_Common
# 8 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	setflag FLAG_CAVE_BALL5
# 9 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	removeobject 2
# 10 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	releaseall
	return


DEEPROCK_CAVE_EXIT_EventScript_Ball5::
# 14 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	lockall
# 15 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	call Rummage_Common
# 16 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	setflag FLAG_CAVE_BALL6
# 17 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	removeobject 2
# 18 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	releaseall
	return


DEEPROCK_CAVE_EXIT_EventScript_Ball6::
# 22 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	lockall
# 23 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	call Rummage_Common
# 24 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	setflag FLAG_CAVE_BALL7
# 25 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	removeobject 2
# 26 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	releaseall
	return


DEEPROCK_CAVE_EXIT_EventScript_Ball7::
# 30 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	lockall
# 31 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	call Rummage_Uncommon
# 32 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	setflag FLAG_CAVE_BALL8
# 33 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	removeobject 2
# 34 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	releaseall
	return


DEEPROCK_CAVE_EXIT_EventScript_Ball8::
# 38 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	lockall
# 39 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	call Rummage_Rare
# 40 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	setflag FLAG_CAVE_BALL9
# 41 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	removeobject 2
# 42 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	releaseall
	return


DEEPROCK_CAVE_EXIT_EventScript_BlackBelt::
# 46 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	trainerbattle_single TRAINER_HITOSHI, HITOSHI_INTRO, Generic_Outro
# 47 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	msgbox DEEPROCK_CAVE_EXIT_EventScript_BlackBelt_Text_0
	return


DEEPROCK_CAVE_EXIT_EventScript_Hiker::
# 56 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, DUSTY_INTRO, Generic_Outro
# 57 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	msgbox DEEPROCK_CAVE_EXIT_EventScript_BlackBelt_Text_0
	return


DEEPROCK_CAVE_EXIT_EventScript_BlackBelt_Text_0:
# 47 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	.string "Sorry.$"

HITOSHI_INTRO::
# 50 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	.string "SHOW ME THE STRENGTH OF YOUR\n"
	.string "POKEMON!$"

DUSTY_INTRO::
# 60 "data/maps/DEEPROCK_CAVE_EXIT/scripts.pory"
	.string "FOR THIRTY YEARS I HAVE SEARCHED FOR\n"
	.string "ANCIENT RUINS I AM TO BE\l"
	.string "CHALLENGED?$"
