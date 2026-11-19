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
	return


PKMN_CENTER_WARP_ENTRANCE::
# 33 "data/maps/CLEARING/scripts.pory"
	lockall
# 34 "data/maps/CLEARING/scripts.pory"
	warp MAP_PKMNCENTER, 7, 7
# 35 "data/maps/CLEARING/scripts.pory"
	releaseall
	return


CLEARING_EventScript_LockedDoor_Text_0:
# 7 "data/maps/CLEARING/scripts.pory"
	.string "(The door is locked.)$"

CLEARING_EventScript_LockedDoor_Text_1:
# 8 "data/maps/CLEARING/scripts.pory"
	.string "You hear sounds of people talking from inside.$"

CLEARING_EventScript_LockedDoor_Text_2:
# 9 "data/maps/CLEARING/scripts.pory"
	.string "You can't tell if they are laughing or arguing.$"

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
	.string "$"
