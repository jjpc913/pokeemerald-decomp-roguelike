# 1 "data/maps/CLEARING/scripts.pory"
CLEARING_MapScripts::
# 2 "data/maps/CLEARING/scripts.pory"
	.byte 0

CLEARING_EventScript_LockedDoor::
# 6 "data/maps/CLEARING/scripts.pory"
	lockall
# 7 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_LockedDoor_Text_0
# 8 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_LockedDoor_Text_1
# 9 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_LockedDoor_Text_2
# 10 "data/maps/CLEARING/scripts.pory"
	releaseall
	return


CLEARING_EventScript_FatMan::
# 14 "data/maps/CLEARING/scripts.pory"
	lockall
# 15 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_FatMan_Text_0
# 16 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_FatMan_Text_1
# 17 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_FatMan_Text_2
# 18 "data/maps/CLEARING/scripts.pory"
	releaseall
	return


CLEARING_EventScript_Girl1::
# 22 "data/maps/CLEARING/scripts.pory"
	lockall
# 23 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_Girl1_Text_0
# 24 "data/maps/CLEARING/scripts.pory"
	releaseall
	return


CLEARING_EventScript_Girl2::
# 28 "data/maps/CLEARING/scripts.pory"
	lockall
# 29 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_Girl2_Text_0
# 30 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_Girl2_Text_1
# 31 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_Girl2_Text_2
# 32 "data/maps/CLEARING/scripts.pory"
	releaseall
	return


CLEARING_EventScript_Hiker::
# 36 "data/maps/CLEARING/scripts.pory"
	lockall
# 37 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_Hiker_Text_0
# 38 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_Hiker_Text_1
# 39 "data/maps/CLEARING/scripts.pory"
	releaseall
	return


CLEARING_EventScript_Guy::
# 43 "data/maps/CLEARING/scripts.pory"
	lockall
# 44 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_Guy_Text_0
# 45 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_Guy_Text_1
# 46 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_Guy_Text_2
# 47 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_Guy_Text_3
# 48 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_Guy_Text_4
# 49 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_Guy_Text_5
# 50 "data/maps/CLEARING/scripts.pory"
	msgbox CLEARING_EventScript_Guy_Text_6
# 51 "data/maps/CLEARING/scripts.pory"
	releaseall
	return


PKMN_CENTER_WARP_ENTRANCE::
# 55 "data/maps/CLEARING/scripts.pory"
	lockall
# 56 "data/maps/CLEARING/scripts.pory"
	warp MAP_PKMNCENTER, 7, 7
# 57 "data/maps/CLEARING/scripts.pory"
	releaseall
	return


CLEARING_EventScript_LockedDoor_Text_0:
# 7 "data/maps/CLEARING/scripts.pory"
	.string "(The door is locked.)$"

CLEARING_EventScript_LockedDoor_Text_1:
# 8 "data/maps/CLEARING/scripts.pory"
	.string "You hear sounds of people talking\nfrom inside.$"

CLEARING_EventScript_LockedDoor_Text_2:
# 9 "data/maps/CLEARING/scripts.pory"
	.string "You can't tell if they are laughing\nor arguing.$"

CLEARING_EventScript_FatMan_Text_0:
# 15 "data/maps/CLEARING/scripts.pory"
	.string "Welcome to Sunup Village, traveler.$"

CLEARING_EventScript_FatMan_Text_1:
# 16 "data/maps/CLEARING/scripts.pory"
	.string "Here, the sun is perpetually stuck\nat the horizon.$"

CLEARING_EventScript_FatMan_Text_2:
# 17 "data/maps/CLEARING/scripts.pory"
	.string "Let the warmth calm your spirit.$"

CLEARING_EventScript_Girl1_Text_0:
# 23 "data/maps/CLEARING/scripts.pory"
	.string "Maybe someday we'll see the sunset.$"

CLEARING_EventScript_Girl2_Text_0:
# 29 "data/maps/CLEARING/scripts.pory"
	.string "Get away from me...$"

CLEARING_EventScript_Girl2_Text_1:
# 30 "data/maps/CLEARING/scripts.pory"
	.string "I don't care what everyone else\nsees.$"

CLEARING_EventScript_Girl2_Text_2:
# 31 "data/maps/CLEARING/scripts.pory"
	.string "Don't think I trust you even for\na minute.$"

CLEARING_EventScript_Hiker_Text_0:
# 37 "data/maps/CLEARING/scripts.pory"
	.string "That detective ran into the Pokemon center\nin a stupor.$"

CLEARING_EventScript_Hiker_Text_1:
# 38 "data/maps/CLEARING/scripts.pory"
	.string "I hope she isn't hurt...$"

CLEARING_EventScript_Guy_Text_0:
# 44 "data/maps/CLEARING/scripts.pory"
	.string "'psst'$"

CLEARING_EventScript_Guy_Text_1:
# 45 "data/maps/CLEARING/scripts.pory"
	.string "Hey, kid.$"

CLEARING_EventScript_Guy_Text_2:
# 46 "data/maps/CLEARING/scripts.pory"
	.string "Listen to me.$"

CLEARING_EventScript_Guy_Text_3:
# 47 "data/maps/CLEARING/scripts.pory"
	.string "That detective...$"

CLEARING_EventScript_Guy_Text_4:
# 48 "data/maps/CLEARING/scripts.pory"
	.string "I don't trust her.$"

CLEARING_EventScript_Guy_Text_5:
# 49 "data/maps/CLEARING/scripts.pory"
	.string "Somethin' about her really gives\nme the creeps.$"

CLEARING_EventScript_Guy_Text_6:
# 50 "data/maps/CLEARING/scripts.pory"
	.string "You should watch your back.$"
