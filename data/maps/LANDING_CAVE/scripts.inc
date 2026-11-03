# 1 "data/maps/LANDING_CAVE/scripts.pory"
LANDING_CAVE_MapScripts::
# 2 "data/maps/LANDING_CAVE/scripts.pory"
	.byte 0

LANDING_CAVE_EventScript_Ball1::
# 6 "data/maps/LANDING_CAVE/scripts.pory"
	lockall
# 7 "data/maps/LANDING_CAVE/scripts.pory"
	call Rummage_Uncommon
# 8 "data/maps/LANDING_CAVE/scripts.pory"
	setflag FLAG_CAVE_BALL_1
# 9 "data/maps/LANDING_CAVE/scripts.pory"
	removeobject 1
# 10 "data/maps/LANDING_CAVE/scripts.pory"
	releaseall
	return


LANDING_CAVE_EventScript_Ball2::
# 14 "data/maps/LANDING_CAVE/scripts.pory"
	lockall
# 15 "data/maps/LANDING_CAVE/scripts.pory"
	call Rummage_Uncommon
# 16 "data/maps/LANDING_CAVE/scripts.pory"
	setflag FLAG_CAVE_BALL_2
# 17 "data/maps/LANDING_CAVE/scripts.pory"
	removeobject 2
# 18 "data/maps/LANDING_CAVE/scripts.pory"
	releaseall
	return


LANDING_CAVE_EventScript_FindYourself::
# 22 "data/maps/LANDING_CAVE/scripts.pory"
	lockall
# 23 "data/maps/LANDING_CAVE/scripts.pory"
	goto_if_unset FLAG_CAVE_MESSAGE, LANDING_CAVE_EventScript_FindYourself_2
LANDING_CAVE_EventScript_FindYourself_1:
# 27 "data/maps/LANDING_CAVE/scripts.pory"
	releaseall
	return

LANDING_CAVE_EventScript_FindYourself_2:
# 24 "data/maps/LANDING_CAVE/scripts.pory"
	msgbox LANDING_CAVE_EventScript_FindYourself_Text_0
# 25 "data/maps/LANDING_CAVE/scripts.pory"
	setflag FLAG_CAVE_MESSAGE
	goto LANDING_CAVE_EventScript_FindYourself_1


LANDING_CAVE_EventScript_FindYourself_Text_0:
# 24 "data/maps/LANDING_CAVE/scripts.pory"
	.string "...somehow, you find yourself in a cave.$"
