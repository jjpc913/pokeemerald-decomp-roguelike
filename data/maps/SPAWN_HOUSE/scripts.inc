# 1 "data/maps/SPAWN_HOUSE/scripts.pory"
SPAWN_HOUSE_MapScripts::
# 2 "data/maps/SPAWN_HOUSE/scripts.pory"
	.byte 0

SPAWN_HOUSE_EventScript_Rose::
# 6 "data/maps/SPAWN_HOUSE/scripts.pory"
	lockall
# 7 "data/maps/SPAWN_HOUSE/scripts.pory"
	faceplayer
# 8 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_0
# 9 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_1
# 10 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_2
# 11 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_3
# 12 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_4
# 13 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_5
# 14 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_6
# 15 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_7
# 16 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_8
# 17 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_9
# 18 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_10
# 19 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_11
# 20 "data/maps/SPAWN_HOUSE/scripts.pory"
	releaseall
# 21 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_12
	return


SPAWN_HOUSE_EventScript_Cabinet2::
# 25 "data/maps/SPAWN_HOUSE/scripts.pory"
	lockall
# 26 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Cabinet2_Text_0
# 27 "data/maps/SPAWN_HOUSE/scripts.pory"
	goto_if_set FLAG_CABINET2, SPAWN_HOUSE_EventScript_Cabinet2_1
# 30 "data/maps/SPAWN_HOUSE/scripts.pory"
	call Rummage_Common
# 31 "data/maps/SPAWN_HOUSE/scripts.pory"
	setflag FLAG_CABINET2
	return

SPAWN_HOUSE_EventScript_Cabinet2_1:
# 28 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Cabinet2_Text_1
	return


SPAWN_HOUSE_EventScript_Cabinet::
# 36 "data/maps/SPAWN_HOUSE/scripts.pory"
	lockall
# 37 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Cabinet2_Text_0
# 38 "data/maps/SPAWN_HOUSE/scripts.pory"
	goto_if_set FLAG_CABINET1, SPAWN_HOUSE_EventScript_Cabinet_2
# 41 "data/maps/SPAWN_HOUSE/scripts.pory"
	call Rummage_Common
# 42 "data/maps/SPAWN_HOUSE/scripts.pory"
	setflag FLAG_CABINET1
SPAWN_HOUSE_EventScript_Cabinet_1:
# 45 "data/maps/SPAWN_HOUSE/scripts.pory"
	releaseall
	return

SPAWN_HOUSE_EventScript_Cabinet_2:
# 39 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Cabinet2_Text_1
	goto SPAWN_HOUSE_EventScript_Cabinet_1


SPAWN_HOUSE_EventScript_Fridge::
# 49 "data/maps/SPAWN_HOUSE/scripts.pory"
	lockall
# 50 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Fridge_Text_0
# 51 "data/maps/SPAWN_HOUSE/scripts.pory"
	goto_if_set FLAG_FRIDGE, SPAWN_HOUSE_EventScript_Fridge_2
# 54 "data/maps/SPAWN_HOUSE/scripts.pory"
	call Rummage_Common
# 55 "data/maps/SPAWN_HOUSE/scripts.pory"
	setflag FLAG_FRIDGE
SPAWN_HOUSE_EventScript_Fridge_1:
# 57 "data/maps/SPAWN_HOUSE/scripts.pory"
	releaseall
	return

SPAWN_HOUSE_EventScript_Fridge_2:
# 52 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Cabinet2_Text_1
	goto SPAWN_HOUSE_EventScript_Fridge_1


SPAWN_HOUSE_EventScript_TV::
# 61 "data/maps/SPAWN_HOUSE/scripts.pory"
	lockall
# 62 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_TV_Text_0
# 63 "data/maps/SPAWN_HOUSE/scripts.pory"
	releaseall
	return


SPAWN_HOUSE_EventScript_Rose_Text_0:
# 8 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "...ah.$"

SPAWN_HOUSE_EventScript_Rose_Text_1:
# 9 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Hello, there.$"

SPAWN_HOUSE_EventScript_Rose_Text_2:
# 10 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Have we met?$"

SPAWN_HOUSE_EventScript_Rose_Text_3:
# 11 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "....$"

SPAWN_HOUSE_EventScript_Rose_Text_4:
# 12 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Well, it doesn't matter.$"

SPAWN_HOUSE_EventScript_Rose_Text_5:
# 13 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Don't bother giving me your name.$"

SPAWN_HOUSE_EventScript_Rose_Text_6:
# 14 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "I've seen enough like you.$"

SPAWN_HOUSE_EventScript_Rose_Text_7:
# 15 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Well, adventurer...$"

SPAWN_HOUSE_EventScript_Rose_Text_8:
# 16 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "You've got an arduous journey ahead of\nyou.$"

SPAWN_HOUSE_EventScript_Rose_Text_9:
# 17 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "The least I can do is help you get\nstarted.$"

SPAWN_HOUSE_EventScript_Rose_Text_10:
# 18 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Pick your favorite from these Pokéballs.$"

SPAWN_HOUSE_EventScript_Rose_Text_11:
# 19 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "I'm sure they'll make a helpful companion.$"

SPAWN_HOUSE_EventScript_Rose_Text_12:
# 21 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "You look a bit confused...$"

SPAWN_HOUSE_EventScript_Cabinet2_Text_0:
# 26 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "You rummage through the strange woman's\ncabinet...$"

SPAWN_HOUSE_EventScript_Cabinet2_Text_1:
# 28 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "...but there's nothing left.$"

SPAWN_HOUSE_EventScript_Fridge_Text_0:
# 50 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "You rummage through the strange woman's\nfridge...$"

SPAWN_HOUSE_EventScript_TV_Text_0:
# 62 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "The TV is off.$"
