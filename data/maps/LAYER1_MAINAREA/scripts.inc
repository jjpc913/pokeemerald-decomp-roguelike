LAYER1_MAINAREA_MapScripts::
# 2 "data/maps/LAYER1_MAINAREA/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LAYER1_MAINAREA_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LAYER1_MAINAREA_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_ROBBED, LAYER1_MAINAREA_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 6 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_DUBOIS_LAYER1_MAINAREA
LAYER1_MAINAREA_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_YAN_1, LAYER1_MAINAREA_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 13 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_DUBOIS_LAYER1_MAINAREA
	return

LAYER1_MAINAREA_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/LAYER1_MAINAREA/scripts.pory"
	clearflag FLAG_LADY_LAYER1
	goto LAYER1_MAINAREA_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LAYER1_MAINAREA_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 10 "data/maps/LAYER1_MAINAREA/scripts.pory"
	clearflag FLAG_DUBOIS_LAYER1_MAINAREA
# 11 "data/maps/LAYER1_MAINAREA/scripts.pory"
	addobject 9
	return


LAYER1_MAINAREA_EventScript_Mothman::
# 19 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 20 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_MET_MOTHMAN, LAYER1_MAINAREA_EventScript_Mothman_2
# 24 "data/maps/LAYER1_MAINAREA/scripts.pory"
	hideobjectat 9, MAP_LAYER1_MAINAREA
# 25 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_0
# 26 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_LADY_LAYER1
# 27 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanMoveRight
# 28 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 29 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_1
# 30 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_2
# 31 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_3
# 32 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_4
# 33 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_5
# 34 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_6
# 35 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanMoveOne
# 36 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 37 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_7
# 38 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_8
# 39 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_9
# 40 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_10
# 41 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_11
# 42 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanMoveOne
# 43 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 44 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_12
# 45 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_13
# 46 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_14
# 47 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_FULL_HEAL, 1
# 48 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_POTION, 1
# 49 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_ETHER, 1
# 50 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_15
# 51 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_16
# 52 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_17
# 53 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_18
# 54 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanFaceLeft
# 55 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 56 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanMoveLeft
# 57 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 58 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_MET_MOTHMAN
# 59 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 1
# 60 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Mothman_2:
# 21 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


# 63 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanMoveRight:
# 64 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 64 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 64 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 64 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 64 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
	step_end

# 66 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanMoveOne:
# 67 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
	step_end

# 69 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanFaceLeft:
# 70 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
	step_end

# 73 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanMoveLeft:
# 74 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 74 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 74 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 74 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 74 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 74 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 74 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 74 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

LAYER1_MAINAREA_EventScript_Lamp::
# 78 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 79 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_0
# 80 "data/maps/LAYER1_MAINAREA/scripts.pory"
	checkitem ITEM_RED_SCARF, 1
# 81 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LAYER1_MAINAREA_EventScript_Lamp_2
LAYER1_MAINAREA_EventScript_Lamp_1:
# 140 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Lamp_2:
# 82 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_1
# 83 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_2
# 84 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_3, MSGBOX_YESNO
# 85 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Lamp_4
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_4:
# 86 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_4
# 87 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeitem ITEM_RED_SCARF, 1
# 88 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 1
# 89 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadescreen FADE_TO_WHITE
# 90 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 10
# 91 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 92 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 1
# 93 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_5, MSGBOX_DEFAULT
# 94 "data/maps/LAYER1_MAINAREA/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, LAYER1_MAINAREA_EventScript_Lamp_Text_6, LAYER1_MAINAREA_EventScript_Lamp_Text_7, LAYER1_MAINAREA_EventScript_Lamp_Text_8, LAYER1_MAINAREA_EventScript_Lamp_Text_9, LAYER1_MAINAREA_EventScript_Lamp_Text_10, LAYER1_MAINAREA_EventScript_Lamp_Text_11
# 97 "data/maps/LAYER1_MAINAREA/scripts.pory"
	switch VAR_RESULT
# 98 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 0, LAYER1_MAINAREA_EventScript_Lamp_7
# 101 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 1, LAYER1_MAINAREA_EventScript_Lamp_8
# 105 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 2, LAYER1_MAINAREA_EventScript_Lamp_9
# 109 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 3, LAYER1_MAINAREA_EventScript_Lamp_10
# 116 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 4, LAYER1_MAINAREA_EventScript_Lamp_11
# 123 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 5, LAYER1_MAINAREA_EventScript_Lamp_12
# 135 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case MULTI_B_PRESSED, LAYER1_MAINAREA_EventScript_Lamp_13
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_7:
# 99 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_12
# 100 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_RARE_CANDY, 3
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_8:
# 102 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_13
# 103 "data/maps/LAYER1_MAINAREA/scripts.pory"
	special HealPlayerParty
# 104 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_14
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_9:
# 106 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_15
# 107 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 108 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_REVIVE, 1
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_10:
# 110 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_16
# 111 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_17
# 112 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_18
# 113 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setvar VAR_QUESTIONS_LEFT, 3
# 114 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Learn
# 115 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_19
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_11:
# 117 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_20
# 118 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 119 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 120 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 121 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 122 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_12:
# 124 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_21
# 125 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_22
# 126 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_23, MSGBOX_YESNO
# 127 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Lamp_14
# 132 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_24
# 133 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_25
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_13:
# 136 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_26
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_14:
# 129 "data/maps/LAYER1_MAINAREA/scripts.pory"
	warp MAP_DEATHZONE, 9, 27
# 130 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitstate
	goto LAYER1_MAINAREA_EventScript_Lamp_1


LAYER1_MAINAREA_EventScript_Lass::
# 144 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_TIANA, LAYER1_MAINAREA_LassIntro, LAYER1_MAINAREA_LassOutro
# 145 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_LassPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Lass2::
# 163 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_JANICE, LAYER1_MAINAREA_Lass2Intro, LAYER1_MAINAREA_Lass2Outro
# 164 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_Lass2Post, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Youngster::
# 181 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, LAYER1_MAINAREA_YoungsterIntro, LAYER1_MAINAREA_YoungsterOutro
# 182 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_YoungsterPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Youngster2::
# 200 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, LAYER1_MAINAREA_YoungsterIntro, LAYER1_MAINAREA_YoungsterOutro
# 201 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_YoungsterPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_BugCatcher::
# 220 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, LAYER1_MAINAREA_BugCatcherIntro, LAYER1_MAINAREA_BugCatcherOutro
# 221 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_BugCatcherPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Ball1::
# 241 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 242 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 243 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL1
# 244 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 3
# 245 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Ball2::
# 249 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 251 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL2
# 252 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 6
# 253 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Ball4::
# 257 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 258 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_L1AREA_BALL4, LAYER1_MAINAREA_EventScript_Ball4_2
LAYER1_MAINAREA_EventScript_Ball4_1:
# 262 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Ball4_2:
# 259 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 260 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL4
	goto LAYER1_MAINAREA_EventScript_Ball4_1


LAYER1_MAINAREA_EventScript_Ball3::
# 266 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 267 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_L1AREA_BALL4, LAYER1_MAINAREA_EventScript_Ball3_2
LAYER1_MAINAREA_EventScript_Ball3_1:
# 271 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Ball3_2:
# 268 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL3
	goto LAYER1_MAINAREA_EventScript_Ball3_1


LAYER1_MAINAREA_EventScript_Wayne::
# 275 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, WAYNEINTRO, WAYNEOUTRO, WAYNEPOST
	return


WAYNEPOST::
	return


# 290 "data/maps/LAYER1_MAINAREA/scripts.pory"
CULTISTRUN:
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
	step_end

LAYER1_MAINAREA_EventScript_Boy1::
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 296 "data/maps/LAYER1_MAINAREA/scripts.pory"
	faceplayer
# 297 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_SAD_GUY, LAYER1_MAINAREA_EventScript_Boy1_2
# 330 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_17
# 331 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_21
LAYER1_MAINAREA_EventScript_Boy1_1:
# 333 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Boy1_2:
# 298 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_0
# 299 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_1
# 300 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_2
# 301 "data/maps/LAYER1_MAINAREA/scripts.pory"
	checkplayergender
# 302 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LAYER1_MAINAREA_EventScript_Boy1_6
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_4
LAYER1_MAINAREA_EventScript_Boy1_5:
# 307 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_5
# 308 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_6
# 309 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_7
# 310 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_8
# 311 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_9
# 312 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_10
# 313 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_11
# 314 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_12
# 315 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_13
# 316 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_14
# 317 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_15
# 318 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_16
# 319 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_17
# 320 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_18, MSGBOX_YESNO
# 321 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Boy1_10
# 326 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_20
LAYER1_MAINAREA_EventScript_Boy1_9:
# 328 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_SAD_GUY
	goto LAYER1_MAINAREA_EventScript_Boy1_1

LAYER1_MAINAREA_EventScript_Boy1_6:
# 303 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_3
	goto LAYER1_MAINAREA_EventScript_Boy1_5

LAYER1_MAINAREA_EventScript_Boy1_10:
# 322 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_19
# 323 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_POTION, 1
# 324 "data/maps/LAYER1_MAINAREA/scripts.pory"
	addvar VAR_VENOM, 1
	goto LAYER1_MAINAREA_EventScript_Boy1_9


LAYER1_MAINAREA_EventScript_Sign::
# 337 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 338 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Sign_Text_0
# 339 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Yan1::
# 343 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 344 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_YAN_1, LAYER1_MAINAREA_EventScript_Yan1_2
LAYER1_MAINAREA_EventScript_Yan1_1:
# 413 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Yan1_2:
# 345 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_0
# 346 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanTurnAround1
# 347 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 348 "data/maps/LAYER1_MAINAREA/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 349 "data/maps/LAYER1_MAINAREA/scripts.pory"
	faceplayer
# 350 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_1
# 351 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_2
# 352 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_3
# 353 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_14
# 354 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_BLUE_SCARF, 1
# 355 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_4
# 356 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_5
# 357 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_6
# 358 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_7
# 359 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_8
# 360 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call RollD20
# 361 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_gt LAYER1_MAINAREA_EventScript_Yan1_5
# 364 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_10
LAYER1_MAINAREA_EventScript_Yan1_4:
# 367 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_11
# 368 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_12
# 369 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_13
# 370 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_14
# 371 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_15
# 372 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_16
# 373 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call RollD20
# 374 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_gt LAYER1_MAINAREA_EventScript_Yan1_9
# 377 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_18
LAYER1_MAINAREA_EventScript_Yan1_8:
# 379 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_19
# 380 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call RollD20
# 381 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_gt LAYER1_MAINAREA_EventScript_Yan1_13
# 384 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_21
LAYER1_MAINAREA_EventScript_Yan1_12:
# 386 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanLeave1
# 387 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 388 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 100
# 389 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadeoutbgm 1
# 390 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_22
# 391 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_23
# 392 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 100
# 393 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_24
# 394 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_25
# 395 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_26
# 396 "data/maps/LAYER1_MAINAREA/scripts.pory"
	dynmultichoice 20, 8, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, LAYER1_MAINAREA_EventScript_Yan1_Text_27, LAYER1_MAINAREA_EventScript_Yan1_Text_27
# 397 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_28
# 398 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_29
# 399 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call RollD20
# 400 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt LAYER1_MAINAREA_EventScript_Yan1_17
LAYER1_MAINAREA_EventScript_Yan1_16:
# 406 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_34
# 407 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanGoOffscreen
# 408 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 409 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_YAN_1
# 410 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 8
# 411 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadedefaultbgm
	goto LAYER1_MAINAREA_EventScript_Yan1_1

LAYER1_MAINAREA_EventScript_Yan1_5:
# 362 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_9
	goto LAYER1_MAINAREA_EventScript_Yan1_4

LAYER1_MAINAREA_EventScript_Yan1_9:
# 375 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_17
	goto LAYER1_MAINAREA_EventScript_Yan1_8

LAYER1_MAINAREA_EventScript_Yan1_13:
# 382 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_20
	goto LAYER1_MAINAREA_EventScript_Yan1_12

LAYER1_MAINAREA_EventScript_Yan1_17:
# 401 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_30
# 402 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_31
# 403 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_32
# 404 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_33
	goto LAYER1_MAINAREA_EventScript_Yan1_16


LAYER1_MAINAREA_EventScript_Yan2::
# 417 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 418 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_YAN_1, LAYER1_MAINAREA_EventScript_Yan2_2
LAYER1_MAINAREA_EventScript_Yan2_1:
# 485 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Yan2_2:
# 419 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_0
# 420 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanTurnAround2
# 421 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 422 "data/maps/LAYER1_MAINAREA/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 423 "data/maps/LAYER1_MAINAREA/scripts.pory"
	faceplayer
# 424 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_1
# 425 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_2
# 426 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_3
# 427 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_14
# 428 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_BLUE_SCARF, 1
# 429 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_4
# 430 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_5
# 431 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_6
# 432 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_7
# 433 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_8
# 434 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call RollD20
# 435 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_gt LAYER1_MAINAREA_EventScript_Yan2_5
# 438 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_10
LAYER1_MAINAREA_EventScript_Yan2_4:
# 441 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_11
# 442 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_12
# 443 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_13
# 444 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_14
# 445 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_15
# 446 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_16
# 447 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call RollD20
# 448 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_gt LAYER1_MAINAREA_EventScript_Yan2_9
# 451 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_18
LAYER1_MAINAREA_EventScript_Yan2_8:
# 453 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_19
# 454 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call RollD20
# 455 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_gt LAYER1_MAINAREA_EventScript_Yan2_13
# 458 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_21
LAYER1_MAINAREA_EventScript_Yan2_12:
# 460 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanLeave2
# 461 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 462 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 100
# 463 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadenewbgm MUS_NONE
# 464 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_23
# 465 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_24
# 466 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_25
# 467 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_26
# 468 "data/maps/LAYER1_MAINAREA/scripts.pory"
	dynmultichoice 20, 8, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, LAYER1_MAINAREA_EventScript_Yan1_Text_27, LAYER1_MAINAREA_EventScript_Yan1_Text_27
# 469 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_28
# 470 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_29
# 471 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call RollD20
# 472 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt LAYER1_MAINAREA_EventScript_Yan2_17
LAYER1_MAINAREA_EventScript_Yan2_16:
# 478 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_34
# 479 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanGoOffscreen
# 480 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 481 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_YAN_1
# 482 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 8
# 483 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadedefaultbgm
	goto LAYER1_MAINAREA_EventScript_Yan2_1

LAYER1_MAINAREA_EventScript_Yan2_5:
# 436 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_9
	goto LAYER1_MAINAREA_EventScript_Yan2_4

LAYER1_MAINAREA_EventScript_Yan2_9:
# 449 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_17
	goto LAYER1_MAINAREA_EventScript_Yan2_8

LAYER1_MAINAREA_EventScript_Yan2_13:
# 456 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_20
	goto LAYER1_MAINAREA_EventScript_Yan2_12

LAYER1_MAINAREA_EventScript_Yan2_17:
# 473 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_30
# 474 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_31
# 475 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_32
# 476 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_33
	goto LAYER1_MAINAREA_EventScript_Yan2_16


# 488 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanTurnAround1:
# 489 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
# 490 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 490 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 490 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 490 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 490 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

# 493 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanTurnAround2:
# 494 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
# 495 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 495 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 495 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 495 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 495 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 496 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_down
# 497 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_down
# 498 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
	step_end

# 501 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanLeave1:
# 502 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_down
# 503 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_down
# 504 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
# 505 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 505 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 505 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

# 508 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanLeave2:
# 509 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_up
# 510 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_up
# 511 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
# 512 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 512 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 512 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

# 515 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanFaceBack:
# 516 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
	step_end

# 519 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanGoOffscreen:
# 520 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
# 521 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 521 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 521 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 521 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 521 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 521 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

LAYER1_MAINAREA_EventScript_yanbeach::
# 525 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 526 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_TALKED_YAN_BEACH, LAYER1_MAINAREA_EventScript_yanbeach_2
# 537 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_5
# 538 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_6
# 539 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_7
LAYER1_MAINAREA_EventScript_yanbeach_1:
# 541 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_yanbeach_2:
# 527 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_0
# 528 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_1
# 529 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_2
# 530 "data/maps/LAYER1_MAINAREA/scripts.pory"
	faceplayer
# 531 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_3
# 532 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_4
# 533 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_TALKED_YAN_BEACH
# 534 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 9, yfaceleft
# 535 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 9
	goto LAYER1_MAINAREA_EventScript_yanbeach_1


# 544 "data/maps/LAYER1_MAINAREA/scripts.pory"
yfaceleft:
# 545 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
	step_end

LAYER1_MAINAREA_EventScript_SignCave::
# 549 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 550 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_SignCave_Text_0
# 551 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_SignWoods::
# 555 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 556 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_SignWoods_Text_0
# 557 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_RemoveDubois::
# 561 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 562 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_ROBBED, LAYER1_MAINAREA_EventScript_RemoveDubois_2
# 565 "data/maps/LAYER1_MAINAREA/scripts.pory"
	clearflag FLAG_DUBOIS_LAYER1_MAINAREA
LAYER1_MAINAREA_EventScript_RemoveDubois_1:
# 567 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_RemoveDubois_2:
# 563 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_DUBOIS_LAYER1_MAINAREA
	goto LAYER1_MAINAREA_EventScript_RemoveDubois_1


GET_PRANKED::
# 571 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 572 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox GET_PRANKED_Text_0
# 573 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox GET_PRANKED_Text_1
# 574 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_PRANKED
# 575 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 2
# 576 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


SCRIPT_BOX_LAYER_1::
# 580 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 581 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_0
# 582 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_1
# 584 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_THIEF, SCRIPT_BOX_LAYER_1_2
SCRIPT_BOX_LAYER_1_1:
# 588 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_LADY_LAYER1, SCRIPT_BOX_LAYER_1_6
SCRIPT_BOX_LAYER_1_4:
# 614 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

SCRIPT_BOX_LAYER_1_2:
# 585 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_2
	goto SCRIPT_BOX_LAYER_1_1

SCRIPT_BOX_LAYER_1_5:
# 589 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_3
# 590 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_4
# 591 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_5, MSGBOX_YESNO
# 592 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SCRIPT_BOX_LAYER_1_9
	goto SCRIPT_BOX_LAYER_1_4

SCRIPT_BOX_LAYER_1_6:
# 588 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_THIEF, SCRIPT_BOX_LAYER_1_5
	goto SCRIPT_BOX_LAYER_1_4

SCRIPT_BOX_LAYER_1_9:
# 593 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_16
# 594 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_6
# 595 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_7, MSGBOX_YESNO
# 596 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SCRIPT_BOX_LAYER_1_11
	goto SCRIPT_BOX_LAYER_1_4

SCRIPT_BOX_LAYER_1_11:
# 597 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_THIEF
# 598 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_8
# 599 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 600 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 601 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 602 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 603 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 604 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 605 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 606 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 607 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 608 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_9
# 609 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_10
# 610 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_11
	goto SCRIPT_BOX_LAYER_1_4


LAYER1_MAINAREA_EventScript_Lady::
# 618 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 619 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_0
# 620 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_1
# 621 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_2
# 622 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_THIEF, LAYER1_MAINAREA_EventScript_Lady_2
# 642 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_17
# 643 "data/maps/LAYER1_MAINAREA/scripts.pory"
	pokemart L1_LADY_MART
# 644 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_18
# 645 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_19
LAYER1_MAINAREA_EventScript_Lady_1:
# 647 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Lady_2:
# 623 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_3
# 624 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_4
# 625 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_5
# 626 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_6
# 627 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_7
# 628 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_8
# 629 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_9, MSGBOX_YESNO
# 630 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LAYER1_MAINAREA_EventScript_Lady_6
# 637 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_15
# 638 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_16
LAYER1_MAINAREA_EventScript_Lady_5:
# 640 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_TALKED_TO_LADY_THIEF
	goto LAYER1_MAINAREA_EventScript_Lady_1

LAYER1_MAINAREA_EventScript_Lady_6:
# 631 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_10
# 632 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_11
# 633 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_12
# 634 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_13
# 635 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_14
	goto LAYER1_MAINAREA_EventScript_Lady_5


DIE_THIEF::
# 651 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 652 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_TALKED_TO_LADY_THIEF, DIE_THIEF_2
DIE_THIEF_1:
# 661 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

DIE_THIEF_2:
# 653 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadeoutbgm 1
# 654 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_0
# 655 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_1
# 656 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_2
# 657 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_3
# 658 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_4
# 659 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, LADY_OUTRO
	goto DIE_THIEF_1


	.align 2
# 672 "data/maps/LAYER1_MAINAREA/scripts.pory"
L1_LADY_MART:
# 673 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_POTION
# 674 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 675 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_POKE_BALL
# 676 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 677 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 678 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 679 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

LAYER1_MAINAREA_EventScript_Mothman_Text_0:
# 25 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "..not so fast, buddy!$"

LAYER1_MAINAREA_EventScript_Mothman_Text_1:
# 29 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I couldn't help but notice you were\nabout to wander into the grass\pwithout a care in the world.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_2:
# 30 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You know the grass is dangerous,\nright?$"

LAYER1_MAINAREA_EventScript_Mothman_Text_3:
# 31 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I mean, more dangerous than normal.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_4:
# 32 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "This place is special, you see.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_5:
# 33 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "The Pokemon are more aggressive.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_6:
# 34 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "They'll hunt you down before they\nlet you run away.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_7:
# 37 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "And even if you do beat 'em, you\nwon't get anything in return.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_8:
# 38 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You won't find any Pokemon Centers\neither.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_9:
# 39 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "In other words, you should\navoid fights when you can.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_10:
# 40 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You'll get EXP from trainer battles,\nbut you probably don't want to\pfight them unless you have to.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_11:
# 41 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...just a friendly bit of advice.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_12:
# 44 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You can call me MOTHMAN.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_13:
# 45 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm your guardian angel. \nEheh...$"

LAYER1_MAINAREA_EventScript_Mothman_Text_14:
# 46 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You can take this.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_15:
# 50 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Just some goodies to get you started.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_16:
# 51 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It's brutal out there.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_17:
# 52 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Good luck, {PLAYER}.\n$"

LAYER1_MAINAREA_EventScript_Mothman_Text_18:
# 53 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'll be rooting for you...eheheh.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_0:
# 79 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(There is a suspicious looking\nlamp post here.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_1:
# 82 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The lamp is resonating with your wishing\nstone...)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_2:
# 83 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The stone feels soft in your hand,\nmalleable like jelly but still\psolid enough to grip.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_3:
# 84 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Would you like to crush a wishing\nstone?)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_4:
# 86 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You smash the stone against the\nlamp post.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_5:
# 93 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "What is your wish?$"

LAYER1_MAINAREA_EventScript_Lamp_Text_6:
# 94 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for power.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_7:
# 95 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for healing.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_8:
# 95 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for a better future.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_9:
# 95 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for knowledge.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_10:
# 96 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for treasure.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_11:
# 96 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for merciful death.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_12:
# 99 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for power.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_13:
# 102 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for healing.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_14:
# 104 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Your party was miraculously healed...!)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_15:
# 106 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for a better future.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_16:
# 110 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for knowledge.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_17:
# 111 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...very well.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_18:
# 112 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "As you wish, you will get three questions.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_19:
# 115 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You feel enlightened.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_20:
# 117 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for treasure.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_21:
# 124 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for merciful death.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_22:
# 125 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(....)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_23:
# 126 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Is this really what you want?$"

LAYER1_MAINAREA_EventScript_Lamp_Text_24:
# 132 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You hesitated in your conviction.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_25:
# 133 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The wish was wasted...)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_26:
# 136 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You tripped over your words,\nand the wish failed.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_0:
# 298 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "..Oh! You...!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_1:
# 299 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You seem...normal!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_2:
# 300 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, thank god.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_3:
# 303 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You've gotta help, dude!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_4:
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You've gotta help, ma'am!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_5:
# 307 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Everyone's acting really weird!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_6:
# 308 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It's like...it's like they all went\ncrazy!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_7:
# 309 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I can't find how to leave this damn\nplace, either.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_8:
# 310 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But you...I haven't seen you yet!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_9:
# 311 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You must've gotten in here somehow!\nHow? How did you do it?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_10:
# 312 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "If you can get in, surely you can\nget out, right?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_11:
# 313 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "H...hello? Why aren't you saying anything?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_12:
# 314 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Why won't you talk?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_13:
# 315 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please...help me!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_14:
# 316 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh god...oh god! Don't tell me...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_15:
# 317 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please...I just want to go home...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_16:
# 318 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_17:
# 319 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(This man is hysterical.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_18:
# 320 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(He seems distracted...you could\ntry stealing from him.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_19:
# 322 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You stole a potion from the mans bag.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_20:
# 326 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You decide to be a good person.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_21:
# 331 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Best to leave him alone.)$"

LAYER1_MAINAREA_EventScript_Sign_Text_0:
# 338 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'No matter what, never stop dreaming.'$"

LAYER1_MAINAREA_EventScript_Yan1_Text_0:
# 345 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Hmm?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_1:
# 350 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, hello there!$"

LAYER1_MAINAREA_EventScript_Yan1_Text_2:
# 351 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I haven't met you before.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_3:
# 352 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'Name's Yan.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_4:
# 355 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string ".....$"

LAYER1_MAINAREA_EventScript_Yan1_Text_5:
# 356 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh...you're {PLAYER}?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_6:
# 357 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Nice to meetcha!$"

LAYER1_MAINAREA_EventScript_Yan1_Text_7:
# 358 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm a detective currently investigating\nthis strange phenomenon.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_8:
# 359 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...what, don't tell me you haven't\nseen it?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_9:
# 362 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "All these people, gone completely\ncuckoo.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_10:
# 364 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "All these people, gone completely\ncrazy.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_11:
# 367 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I, uh, haven't really made any\nprogress, yet.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_12:
# 368 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But, young explorer, don't fret.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_13:
# 369 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm going to get to the bottom of this.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_14:
# 370 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "For now, I'm doing some field research.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_15:
# 371 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "There's a small village up ahead,\non the other side of the mountain.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_16:
# 372 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It's become somewhat of a safe haven.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_17:
# 375 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Don't go dying on me now, alright?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_18:
# 377 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'll meet you there, 'kay?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_19:
# 379 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I still have a few more interviews\nto conduct, stones to turn over.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_20:
# 382 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Toodles!$"

LAYER1_MAINAREA_EventScript_Yan1_Text_21:
# 384 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "See ya!$"

LAYER1_MAINAREA_EventScript_Yan1_Text_22:
# 390 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "{PLAYER}...$"

LAYER1_MAINAREA_EventScript_Yan1_Text_23:
# 391 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, {PLAYER}. One more thing.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_24:
# 393 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You haven't...er, how do I\nput this...$"

LAYER1_MAINAREA_EventScript_Yan1_Text_25:
# 394 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "A girl with a face like TV static,\nand her hair jet black.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_26:
# 395 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You haven't seen anyone like that,\nhave you?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_27:
# 396 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "NO$"

LAYER1_MAINAREA_EventScript_Yan1_Text_28:
# 397 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...alright.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_29:
# 398 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Just curious.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_30:
# 401 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string ".......$"

LAYER1_MAINAREA_EventScript_Yan1_Text_31:
# 402 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "What a weird feeling.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_32:
# 403 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You...$"

LAYER1_MAINAREA_EventScript_Yan1_Text_33:
# 404 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry, ignore me.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_34:
# 406 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Good luck, {PLAYER}.$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_0:
# 527 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The woman named Yan is standing here.)$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_1:
# 528 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(She is staring blankly into the ocean.)$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_2:
# 529 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh?$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_3:
# 531 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Hey, {PLAYER}.$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_4:
# 532 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry, but would you mind giving me\na moment alone?$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_5:
# 537 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "The woman is not even acknowledging\nyou.$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_6:
# 538 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But it doesn't seem like she is\nignoring you.$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_7:
# 539 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Rather, it seems she is focusing\non something else so intently that\pshe doesn't even sense you.$"

LAYER1_MAINAREA_EventScript_SignCave_Text_0:
# 550 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "DANKDRIP CAVE$"

LAYER1_MAINAREA_EventScript_SignWoods_Text_0:
# 556 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "DEEPf WOODS$"

GET_PRANKED_Text_0:
# 572 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The Pokeball has a note in it.)$"

GET_PRANKED_Text_1:
# 573 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'Thanks for the money, sucker!'$"

SCRIPT_BOX_LAYER_1_Text_0:
# 581 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(A box that says 'MART'.)$"

SCRIPT_BOX_LAYER_1_Text_1:
# 582 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(It looks like it contains a bunch\nof goodies.)$"

SCRIPT_BOX_LAYER_1_Text_2:
# 585 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The seal has been broken and\nshoddily repaired.)$"

SCRIPT_BOX_LAYER_1_Text_3:
# 589 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It doesn't seem like the shopkeeper's\naround...$"

SCRIPT_BOX_LAYER_1_Text_4:
# 590 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Did she forget this?$"

SCRIPT_BOX_LAYER_1_Text_5:
# 591 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(...steal something?)$"

SCRIPT_BOX_LAYER_1_Text_6:
# 594 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "This seems like it might have\nconsequences...$"

SCRIPT_BOX_LAYER_1_Text_7:
# 595 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Are you really sure about this?$"

SCRIPT_BOX_LAYER_1_Text_8:
# 598 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You unsealed the box and grabbed\nthe first few things you could see.)$"

SCRIPT_BOX_LAYER_1_Text_9:
# 608 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You hastily tried to reseal the box.)$"

SCRIPT_BOX_LAYER_1_Text_10:
# 609 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(...it won't fully seal, but\nhopefully it's good enough.)$"

SCRIPT_BOX_LAYER_1_Text_11:
# 610 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Better get out of here.$"

LAYER1_MAINAREA_EventScript_Lady_Text_0:
# 619 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Hello, {PLAYER}.$"

LAYER1_MAINAREA_EventScript_Lady_Text_1:
# 620 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It is nice to see you.$"

LAYER1_MAINAREA_EventScript_Lady_Text_2:
# 621 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I am but a humble shopkeeper.$"

LAYER1_MAINAREA_EventScript_Lady_Text_3:
# 623 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Normally, I would offer to sell\nyou some of my goods.$"

LAYER1_MAINAREA_EventScript_Lady_Text_4:
# 624 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "However, it appears that they\nhave been stolen.$"

LAYER1_MAINAREA_EventScript_Lady_Text_5:
# 625 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "What a tragedy...$"

LAYER1_MAINAREA_EventScript_Lady_Text_6:
# 626 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm sorry, but I won't be able\nto be of any use to you until\pthe criminal is found.$"

LAYER1_MAINAREA_EventScript_Lady_Text_7:
# 627 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Once I find them, I will make\nthem pay.$"

LAYER1_MAINAREA_EventScript_Lady_Text_8:
# 628 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But for now, I have nothing to\noffer you.$"

LAYER1_MAINAREA_EventScript_Lady_Text_9:
# 629 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You wouldn't happen to have seen\nanything, have you?$"

LAYER1_MAINAREA_EventScript_Lady_Text_10:
# 631 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You have?$"

LAYER1_MAINAREA_EventScript_Lady_Text_11:
# 632 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, joyous day.$"

LAYER1_MAINAREA_EventScript_Lady_Text_12:
# 633 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "With you help, we can bring the\ncriminal to justice.$"

LAYER1_MAINAREA_EventScript_Lady_Text_13:
# 634 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string ".........{PAUSE_UNTIL_PRESS}$"

LAYER1_MAINAREA_EventScript_Lady_Text_14:
# 635 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It was you, wasn't it?$"

LAYER1_MAINAREA_EventScript_Lady_Text_15:
# 637 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, that is a shame.$"

LAYER1_MAINAREA_EventScript_Lady_Text_16:
# 638 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "If you see anything, please let me know.$"

LAYER1_MAINAREA_EventScript_Lady_Text_17:
# 642 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please, take a look at what I\nhave to offer.$"

LAYER1_MAINAREA_EventScript_Lady_Text_18:
# 644 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I will be traveling futher soon.$"

LAYER1_MAINAREA_EventScript_Lady_Text_19:
# 645 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "If you need anything, please see\nme again as soon as possible.$"

DIE_THIEF_Text_0:
# 654 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...What, do you think I'm\nstupid?$"

DIE_THIEF_Text_1:
# 655 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I know it was you.$"

DIE_THIEF_Text_2:
# 656 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Who else could it possibly be?$"

DIE_THIEF_Text_3:
# 657 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You've got some real balls\nshowing your face around me.$"

DIE_THIEF_Text_4:
# 658 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Time for retribution.$"

LAYER1_MAINAREA_LassIntro::
# 148 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'M GOING TO KEEP WINNING AND AIM\n"
	.string "TO BE THE BEST TRAINER\p"
	.string "HELP ME FURTHER MY CAREER !$"

LAYER1_MAINAREA_LassOutro::
# 154 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I ENDED UP FURTHERING YOUR CAREER$"

LAYER1_MAINAREA_LassPost::
# 158 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_Lass2Intro::
# 167 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "SO  CUTE~!\p"
	.string "I'M GONNA TAKE YOU HOME~!$"

LAYER1_MAINAREA_Lass2Outro::
# 172 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string ".$"

LAYER1_MAINAREA_Lass2Post::
# 176 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_YoungsterIntro::
# 185 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "LETS HAVE A FUN POKEMON BATTLE\n$"

LAYER1_MAINAREA_YoungsterOutro::
# 189 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string " $"

LAYER1_MAINAREA_YoungsterPost::
# 193 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_Youngster2Intro::
# 204 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE SHORTS THEY ARE EASY\nAND COMFY TO WEAR$"

LAYER1_MAINAREA_Youngster2Outro::
# 208 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE $"

LAYER1_MAINAREA_Youngster2Post::
# 212 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_BugCatcherIntro::
# 224 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE BUGS\nPLEASE PLAY WITH ME$"

LAYER1_MAINAREA_BugCatcherOutro::
# 228 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "BUGS$"

LAYER1_MAINAREA_BugCatcherPost::
# 232 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

GenericOutro::
# 236 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string " $"

WAYNEINTRO::
# 278 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "DO NOT FORSAKE THE GIFTS FROM THE\nONE THAT WILL DELIVER UNTO US SAVALATION$"

WAYNEOUTRO::
# 282 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "$"

LADY_OUTRO::
# 664 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Impossible.$"

Generic_Outro::
# 668 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string " $"
