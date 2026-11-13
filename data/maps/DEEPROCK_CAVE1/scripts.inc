# 1 "data/maps/DEEPROCK_CAVE1/scripts.pory"
DEEPROCK_CAVE1_MapScripts::
# 2 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	.byte 0

DEEPROCK_CAVE1_EventScript_Move_Dubois::
# 6 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	lockall
# 7 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	goto_if_unset FLAG_CAVE_DUBOIS, DEEPROCK_CAVE1_EventScript_Move_Dubois_2
DEEPROCK_CAVE1_EventScript_Move_Dubois_1:
# 14 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	releaseall
	return

DEEPROCK_CAVE1_EventScript_Move_Dubois_2:
# 8 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	applymovement 1, RUNUP_DUBOIS
# 9 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	waitmovement 1
# 10 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	removeobject 1
# 11 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	setflag FLAG_CAVE_DUBOIS
# 12 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	releaseall
	goto DEEPROCK_CAVE1_EventScript_Move_Dubois_1


# 17 "data/maps/DEEPROCK_CAVE1/scripts.pory"
RUNUP_DUBOIS:
# 18 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	face_up
# 19 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	walk_up
# 19 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	walk_up
# 19 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	walk_up
	step_end

DEEPROCK_CAVE1_EventScriptDoll::
# 23 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	lockall
# 24 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	msgbox DEEPROCK_CAVE1_EventScriptDoll_Text_0
# 25 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	msgbox DEEPROCK_CAVE1_EventScriptDoll_Text_1
# 26 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	releaseall
	return


DEEPROCK_CAVE1_EventScript_Move_Dubois2::
# 30 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	lockall
# 31 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	goto_if_unset FLAG_CAVE_DUBOIS2, DEEPROCK_CAVE1_EventScript_Move_Dubois2_2
DEEPROCK_CAVE1_EventScript_Move_Dubois2_1:
# 38 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	releaseall
	return

DEEPROCK_CAVE1_EventScript_Move_Dubois2_2:
# 32 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	applymovement 8, RUNUP_DUBOIS
# 33 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	waitmovement 8
# 34 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	removeobject 8
# 35 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	setflag FLAG_CAVE_DUBOIS2
# 36 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	releaseall
	goto DEEPROCK_CAVE1_EventScript_Move_Dubois2_1


DEEPROCK_CAVE1_EventScript_Ball1::
# 42 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	lockall
# 43 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	call Rummage_Common
# 44 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	setflag FLAG_L1AREA_BALL1
# 45 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	removeobject 2
# 46 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	releaseall
	return


DEEPROCK_CAVE1_EventScript_Ball3::
# 50 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	lockall
# 51 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	call Rummage_Uncommon
# 52 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	setflag FLAG_L1AREA_BALL3
# 53 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	removeobject 4
# 54 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	releaseall
	return


DEEPROCK_CAVE1_EventScript_Ball2::
# 58 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	lockall
# 59 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	call Rummage_Common
# 60 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	setflag FLAG_L1AREA_BALL2
# 61 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	removeobject 3
# 62 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	releaseall
	return


DEEPROCK_CAVE1_EventScriptDoll_Text_0:
# 24 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	.string "(There is a giant statue of Regirock\nblocking the way.)$"

DEEPROCK_CAVE1_EventScriptDoll_Text_1:
# 25 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	.string "Looking closely, you can see a small\nkey slot.$"
