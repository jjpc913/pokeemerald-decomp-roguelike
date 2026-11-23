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
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_1
# 81 "data/maps/LAYER1_MAINAREA/scripts.pory"
	checkitem ITEM_RED_SCARF, 1
# 82 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LAYER1_MAINAREA_EventScript_Lamp_2
LAYER1_MAINAREA_EventScript_Lamp_1:
# 144 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Lamp_2:
# 83 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_2
# 84 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_3
# 85 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_4, MSGBOX_YESNO
# 86 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Lamp_4
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_4:
# 87 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_5
# 88 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeitem ITEM_RED_SCARF, 1
# 89 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 1
# 90 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadescreen FADE_TO_WHITE
# 91 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 10
# 92 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 93 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 1
# 94 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_6
# 95 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_7
# 96 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_8, MSGBOX_DEFAULT
# 97 "data/maps/LAYER1_MAINAREA/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, LAYER1_MAINAREA_EventScript_Lamp_Text_9, LAYER1_MAINAREA_EventScript_Lamp_Text_10, LAYER1_MAINAREA_EventScript_Lamp_Text_11, LAYER1_MAINAREA_EventScript_Lamp_Text_12, LAYER1_MAINAREA_EventScript_Lamp_Text_13, LAYER1_MAINAREA_EventScript_Lamp_Text_14
# 100 "data/maps/LAYER1_MAINAREA/scripts.pory"
	switch VAR_RESULT
# 101 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 0, LAYER1_MAINAREA_EventScript_Lamp_7
# 104 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 1, LAYER1_MAINAREA_EventScript_Lamp_8
# 108 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 2, LAYER1_MAINAREA_EventScript_Lamp_9
# 112 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 3, LAYER1_MAINAREA_EventScript_Lamp_10
# 119 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 4, LAYER1_MAINAREA_EventScript_Lamp_11
# 126 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 5, LAYER1_MAINAREA_EventScript_Lamp_12
# 138 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case MULTI_B_PRESSED, LAYER1_MAINAREA_EventScript_Lamp_13
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_7:
# 102 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_15
# 103 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_RARE_CANDY, 3
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_8:
# 105 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_16
# 106 "data/maps/LAYER1_MAINAREA/scripts.pory"
	special HealPlayerParty
# 107 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_17
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_9:
# 109 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_18
# 110 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 111 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_REVIVE, 1
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_10:
# 113 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_19
# 114 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_20
# 115 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_21
# 116 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setvar VAR_QUESTIONS_LEFT, 3
# 117 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Learn
# 118 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_22
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_11:
# 120 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_23
# 121 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 122 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 123 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 124 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 125 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_12:
# 127 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_24
# 128 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_25
# 129 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_26, MSGBOX_YESNO
# 130 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Lamp_14
# 135 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_27
# 136 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_28
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_13:
# 139 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_29
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_14:
# 132 "data/maps/LAYER1_MAINAREA/scripts.pory"
	warp MAP_DEATHZONE, 9, 27
# 133 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitstate
	goto LAYER1_MAINAREA_EventScript_Lamp_1


LAYER1_MAINAREA_EventScript_Lass::
# 148 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_TIANA, LAYER1_MAINAREA_LassIntro, LAYER1_MAINAREA_LassOutro
# 149 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_LassPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Lass2::
# 167 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_JANICE, LAYER1_MAINAREA_Lass2Intro, LAYER1_MAINAREA_Lass2Outro
# 168 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_Lass2Post, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Youngster::
# 185 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, LAYER1_MAINAREA_YoungsterIntro, LAYER1_MAINAREA_YoungsterOutro
# 186 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_YoungsterPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Youngster2::
# 204 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, LAYER1_MAINAREA_YoungsterIntro, LAYER1_MAINAREA_YoungsterOutro
# 205 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_YoungsterPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_BugCatcher::
# 224 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, LAYER1_MAINAREA_BugCatcherIntro, LAYER1_MAINAREA_BugCatcherOutro
# 225 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_BugCatcherPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Ball1::
# 245 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 246 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 247 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL1
# 248 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 3
# 249 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Ball2::
# 253 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 254 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 255 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL2
# 256 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 6
# 257 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Ball4::
# 261 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 262 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_L1AREA_BALL4, LAYER1_MAINAREA_EventScript_Ball4_2
LAYER1_MAINAREA_EventScript_Ball4_1:
# 266 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Ball4_2:
# 263 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 264 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL4
	goto LAYER1_MAINAREA_EventScript_Ball4_1


LAYER1_MAINAREA_EventScript_Ball3::
# 270 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 271 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_L1AREA_BALL4, LAYER1_MAINAREA_EventScript_Ball3_2
LAYER1_MAINAREA_EventScript_Ball3_1:
# 275 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Ball3_2:
# 272 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 273 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL3
	goto LAYER1_MAINAREA_EventScript_Ball3_1


LAYER1_MAINAREA_EventScript_Wayne::
# 279 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, WAYNEINTRO, WAYNEOUTRO, WAYNEPOST
	return


WAYNEPOST::
	return


# 294 "data/maps/LAYER1_MAINAREA/scripts.pory"
CULTISTRUN:
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
	step_end

LAYER1_MAINAREA_EventScript_Boy1::
# 299 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 300 "data/maps/LAYER1_MAINAREA/scripts.pory"
	faceplayer
# 301 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_SAD_GUY, LAYER1_MAINAREA_EventScript_Boy1_2
# 334 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_16
# 335 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_20
LAYER1_MAINAREA_EventScript_Boy1_1:
# 337 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Boy1_2:
# 302 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_0
# 303 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_1
# 304 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_2
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	checkplayergender
# 306 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LAYER1_MAINAREA_EventScript_Boy1_6
# 309 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_4
LAYER1_MAINAREA_EventScript_Boy1_5:
# 311 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_5
# 312 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_6
# 313 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_7
# 314 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_8
# 315 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_9
# 316 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_10
# 317 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_11
# 318 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_12
# 319 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_13
# 320 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_14
# 321 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_15
# 322 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_6
# 323 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_16
# 324 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_17, MSGBOX_YESNO
# 325 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Boy1_10
# 330 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_19
LAYER1_MAINAREA_EventScript_Boy1_9:
# 332 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_SAD_GUY
	goto LAYER1_MAINAREA_EventScript_Boy1_1

LAYER1_MAINAREA_EventScript_Boy1_6:
# 307 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_3
	goto LAYER1_MAINAREA_EventScript_Boy1_5

LAYER1_MAINAREA_EventScript_Boy1_10:
# 326 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_18
# 327 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_POTION, 1
# 328 "data/maps/LAYER1_MAINAREA/scripts.pory"
	addvar VAR_VENOM, 1
	goto LAYER1_MAINAREA_EventScript_Boy1_9


LAYER1_MAINAREA_EventScript_Sign::
# 341 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 342 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Sign_Text_0
# 343 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Yan1::
# 347 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 348 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_YAN_1, LAYER1_MAINAREA_EventScript_Yan1_2
LAYER1_MAINAREA_EventScript_Yan1_1:
# 417 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Yan1_2:
# 349 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_0
# 350 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanTurnAround1
# 351 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 352 "data/maps/LAYER1_MAINAREA/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 353 "data/maps/LAYER1_MAINAREA/scripts.pory"
	faceplayer
# 354 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_1
# 355 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_2
# 356 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_3
# 357 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_14
# 358 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_BLUE_SCARF, 1
# 359 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_4
# 360 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_5
# 361 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_6
# 362 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_7
# 363 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_8
# 364 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call RollD20
# 365 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_gt LAYER1_MAINAREA_EventScript_Yan1_5
# 368 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_10
LAYER1_MAINAREA_EventScript_Yan1_4:
# 371 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_11
# 372 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_12
# 373 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_13
# 374 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_14
# 375 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_15
# 376 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_16
# 377 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call RollD20
# 378 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_gt LAYER1_MAINAREA_EventScript_Yan1_9
# 381 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_18
LAYER1_MAINAREA_EventScript_Yan1_8:
# 383 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_19
# 384 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call RollD20
# 385 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_gt LAYER1_MAINAREA_EventScript_Yan1_13
# 388 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_21
LAYER1_MAINAREA_EventScript_Yan1_12:
# 390 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanLeave1
# 391 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 392 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 100
# 393 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadeoutbgm 1
# 394 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_22
# 395 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_23
# 396 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 100
# 397 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_24
# 398 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_25
# 399 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_26
# 400 "data/maps/LAYER1_MAINAREA/scripts.pory"
	dynmultichoice 20, 8, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, LAYER1_MAINAREA_EventScript_Yan1_Text_27, LAYER1_MAINAREA_EventScript_Yan1_Text_27
# 401 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_28
# 402 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_29
# 403 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call RollD20
# 404 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt LAYER1_MAINAREA_EventScript_Yan1_17
LAYER1_MAINAREA_EventScript_Yan1_16:
# 410 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_34
# 411 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanGoOffscreen
# 412 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 413 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_YAN_1
# 414 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 8
# 415 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadedefaultbgm
	goto LAYER1_MAINAREA_EventScript_Yan1_1

LAYER1_MAINAREA_EventScript_Yan1_5:
# 366 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_9
	goto LAYER1_MAINAREA_EventScript_Yan1_4

LAYER1_MAINAREA_EventScript_Yan1_9:
# 379 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_17
	goto LAYER1_MAINAREA_EventScript_Yan1_8

LAYER1_MAINAREA_EventScript_Yan1_13:
# 386 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_20
	goto LAYER1_MAINAREA_EventScript_Yan1_12

LAYER1_MAINAREA_EventScript_Yan1_17:
# 405 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_30
# 406 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_31
# 407 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_32
# 408 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_33
	goto LAYER1_MAINAREA_EventScript_Yan1_16


LAYER1_MAINAREA_EventScript_Yan2::
# 421 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 422 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_YAN_1, LAYER1_MAINAREA_EventScript_Yan2_2
LAYER1_MAINAREA_EventScript_Yan2_1:
# 489 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Yan2_2:
# 423 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_0
# 424 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanTurnAround2
# 425 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 426 "data/maps/LAYER1_MAINAREA/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 427 "data/maps/LAYER1_MAINAREA/scripts.pory"
	faceplayer
# 428 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_1
# 429 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_2
# 430 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_3
# 431 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_14
# 432 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_BLUE_SCARF, 1
# 433 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_4
# 434 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_5
# 435 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_6
# 436 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_7
# 437 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_8
# 438 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call RollD20
# 439 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_gt LAYER1_MAINAREA_EventScript_Yan2_5
# 442 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_10
LAYER1_MAINAREA_EventScript_Yan2_4:
# 445 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_11
# 446 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_12
# 447 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_13
# 448 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_14
# 449 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_15
# 450 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_16
# 451 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call RollD20
# 452 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_gt LAYER1_MAINAREA_EventScript_Yan2_9
# 455 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_18
LAYER1_MAINAREA_EventScript_Yan2_8:
# 457 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_19
# 458 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call RollD20
# 459 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_gt LAYER1_MAINAREA_EventScript_Yan2_13
# 462 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_21
LAYER1_MAINAREA_EventScript_Yan2_12:
# 464 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanLeave2
# 465 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 466 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 100
# 467 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadenewbgm MUS_NONE
# 468 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_23
# 469 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_24
# 470 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_25
# 471 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_26
# 472 "data/maps/LAYER1_MAINAREA/scripts.pory"
	dynmultichoice 20, 8, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, LAYER1_MAINAREA_EventScript_Yan1_Text_27, LAYER1_MAINAREA_EventScript_Yan1_Text_27
# 473 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_28
# 474 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_29
# 475 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call RollD20
# 476 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt LAYER1_MAINAREA_EventScript_Yan2_17
LAYER1_MAINAREA_EventScript_Yan2_16:
# 482 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_34
# 483 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanGoOffscreen
# 484 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 485 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_YAN_1
# 486 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 8
# 487 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadedefaultbgm
	goto LAYER1_MAINAREA_EventScript_Yan2_1

LAYER1_MAINAREA_EventScript_Yan2_5:
# 440 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_9
	goto LAYER1_MAINAREA_EventScript_Yan2_4

LAYER1_MAINAREA_EventScript_Yan2_9:
# 453 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_17
	goto LAYER1_MAINAREA_EventScript_Yan2_8

LAYER1_MAINAREA_EventScript_Yan2_13:
# 460 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_20
	goto LAYER1_MAINAREA_EventScript_Yan2_12

LAYER1_MAINAREA_EventScript_Yan2_17:
# 477 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_30
# 478 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_31
# 479 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_32
# 480 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_33
	goto LAYER1_MAINAREA_EventScript_Yan2_16


# 492 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanTurnAround1:
# 493 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
# 494 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 494 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 494 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 494 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 494 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

# 497 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanTurnAround2:
# 498 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
# 499 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 499 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 499 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 499 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 499 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 500 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_down
# 501 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_down
# 502 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
	step_end

# 505 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanLeave1:
# 506 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_down
# 507 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_down
# 508 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
# 509 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 509 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 509 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

# 512 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanLeave2:
# 513 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_up
# 514 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_up
# 515 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
# 516 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 516 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 516 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

# 519 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanFaceBack:
# 520 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
	step_end

# 523 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanGoOffscreen:
# 524 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
# 525 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 525 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 525 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 525 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 525 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 525 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

LAYER1_MAINAREA_EventScript_yanbeach::
# 529 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 530 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_TALKED_YAN_BEACH, LAYER1_MAINAREA_EventScript_yanbeach_2
# 541 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_5
# 542 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_6
# 543 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_7
LAYER1_MAINAREA_EventScript_yanbeach_1:
# 545 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_yanbeach_2:
# 531 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_0
# 532 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_1
# 533 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_2
# 534 "data/maps/LAYER1_MAINAREA/scripts.pory"
	faceplayer
# 535 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_3
# 536 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_4
# 537 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_TALKED_YAN_BEACH
# 538 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 9, yfaceleft
# 539 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 9
	goto LAYER1_MAINAREA_EventScript_yanbeach_1


# 548 "data/maps/LAYER1_MAINAREA/scripts.pory"
yfaceleft:
# 549 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
	step_end

LAYER1_MAINAREA_EventScript_SignCave::
# 553 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 554 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_SignCave_Text_0
# 555 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_SignWoods::
# 559 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 560 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_SignWoods_Text_0
# 561 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_RemoveDubois::
# 565 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 566 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_ROBBED, LAYER1_MAINAREA_EventScript_RemoveDubois_2
# 569 "data/maps/LAYER1_MAINAREA/scripts.pory"
	clearflag FLAG_DUBOIS_LAYER1_MAINAREA
LAYER1_MAINAREA_EventScript_RemoveDubois_1:
# 571 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_RemoveDubois_2:
# 567 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_DUBOIS_LAYER1_MAINAREA
	goto LAYER1_MAINAREA_EventScript_RemoveDubois_1


GET_PRANKED::
# 575 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 576 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox GET_PRANKED_Text_0
# 577 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox GET_PRANKED_Text_1
# 578 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_PRANKED
# 579 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 2
# 580 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


SCRIPT_BOX_LAYER_1::
# 584 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 585 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_0
# 586 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_1
# 588 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_THIEF, SCRIPT_BOX_LAYER_1_2
SCRIPT_BOX_LAYER_1_1:
# 592 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_LADY_LAYER1, SCRIPT_BOX_LAYER_1_6
SCRIPT_BOX_LAYER_1_4:
# 618 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

SCRIPT_BOX_LAYER_1_2:
# 589 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_2
	goto SCRIPT_BOX_LAYER_1_1

SCRIPT_BOX_LAYER_1_5:
# 593 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_3
# 594 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_4
# 595 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_5, MSGBOX_YESNO
# 596 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SCRIPT_BOX_LAYER_1_9
	goto SCRIPT_BOX_LAYER_1_4

SCRIPT_BOX_LAYER_1_6:
# 592 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_THIEF, SCRIPT_BOX_LAYER_1_5
	goto SCRIPT_BOX_LAYER_1_4

SCRIPT_BOX_LAYER_1_9:
# 597 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_6
# 598 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_6
# 599 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_7, MSGBOX_YESNO
# 600 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SCRIPT_BOX_LAYER_1_11
	goto SCRIPT_BOX_LAYER_1_4

SCRIPT_BOX_LAYER_1_11:
# 601 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_THIEF
# 602 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_8
# 603 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 604 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 605 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 606 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 607 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 608 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 609 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 610 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 611 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 612 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_9
# 613 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_10
# 614 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_11
	goto SCRIPT_BOX_LAYER_1_4


LAYER1_MAINAREA_EventScript_Lady::
# 622 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 623 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_0
# 624 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_1
# 625 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_2
# 626 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_THIEF, LAYER1_MAINAREA_EventScript_Lady_2
# 635 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_9
# 636 "data/maps/LAYER1_MAINAREA/scripts.pory"
	pokemart L1_LADY_MART
# 637 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_10
# 638 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_11
LAYER1_MAINAREA_EventScript_Lady_1:
# 640 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Lady_2:
# 627 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_3
# 628 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_4
# 629 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_5
# 630 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_6
# 631 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_7
# 632 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_8
# 633 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_TALKED_TO_LADY_THIEF
	goto LAYER1_MAINAREA_EventScript_Lady_1


DIE_THIEF::
# 644 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 645 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_TALKED_TO_LADY_THIEF, DIE_THIEF_2
DIE_THIEF_1:
# 654 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

DIE_THIEF_2:
# 646 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadeoutbgm 1
# 647 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_0
# 648 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_1
# 649 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_2
# 650 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_3
# 651 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_4
# 652 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, LADY_OUTRO
	goto DIE_THIEF_1


	.align 2
# 665 "data/maps/LAYER1_MAINAREA/scripts.pory"
L1_LADY_MART:
# 666 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_POTION
# 667 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 668 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_POKE_BALL
# 669 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 670 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 671 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 672 "data/maps/LAYER1_MAINAREA/scripts.pory"
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
	.string "(There is a suspicious looking hole\nhere.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_1:
# 80 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(It's too small for you to fit through.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_2:
# 83 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The hole is resonating with your wishing\nstone...)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_3:
# 84 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The stone feels soft in your hand,\nmalleable like jelly but still\psolid enough to grip.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_4:
# 85 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Would you like to drop a wishing\nstone?)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_5:
# 87 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You drop the stone into the\nhole...)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_6:
# 94 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...$"

LAYER1_MAINAREA_EventScript_Lamp_Text_7:
# 95 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You feel a throbbing in your head.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_8:
# 96 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "What is your wish?$"

LAYER1_MAINAREA_EventScript_Lamp_Text_9:
# 97 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for power.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_10:
# 98 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for healing.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_11:
# 98 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for a better future.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_12:
# 98 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for knowledge.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_13:
# 99 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for treasure.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_14:
# 99 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for merciful death.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_15:
# 102 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for power.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_16:
# 105 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for healing.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_17:
# 107 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Your party was miraculously healed...!)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_18:
# 109 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for a better future.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_19:
# 113 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for knowledge.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_20:
# 114 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...very well.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_21:
# 115 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "As you wish, you will get three questions.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_22:
# 118 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You feel enlightened.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_23:
# 120 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for treasure.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_24:
# 127 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for merciful death.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_25:
# 128 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(....)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_26:
# 129 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Is this really what you want?$"

LAYER1_MAINAREA_EventScript_Lamp_Text_27:
# 135 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You hesitated in your conviction.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_28:
# 136 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The wish was wasted...)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_29:
# 139 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You tripped over your words,\nand the wish failed.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_0:
# 302 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "..Oh! You...!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_1:
# 303 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You seem...normal!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_2:
# 304 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, thank god.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_3:
# 307 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You've gotta help, dude!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_4:
# 309 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You've gotta help, ma'am!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_5:
# 311 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Everyone's acting really weird!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_6:
# 312 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It's like...it's like they all went\ncrazy!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_7:
# 313 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I can't find how to leave this damn\nplace, either.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_8:
# 314 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But you...I haven't seen you yet!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_9:
# 315 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You must've gotten in here somehow!\nHow? How did you do it?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_10:
# 316 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "If you can get in, surely you can\nget out, right?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_11:
# 317 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "H...hello? Why aren't you saying anything?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_12:
# 318 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Why won't you talk?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_13:
# 319 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please...help me!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_14:
# 320 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh god...oh god! Don't tell me...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_15:
# 321 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please...I just want to go home...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_16:
# 323 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(This man is hysterical.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_17:
# 324 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(He seems distracted...you could\ntry stealing from him.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_18:
# 326 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You stole a potion from the mans bag.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_19:
# 330 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You decide to be a good person.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_20:
# 335 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Best to leave him alone.)$"

LAYER1_MAINAREA_EventScript_Sign_Text_0:
# 342 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'May your wildest of dreams come true.'$"

LAYER1_MAINAREA_EventScript_Yan1_Text_0:
# 349 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Hmm?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_1:
# 354 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, hello there!$"

LAYER1_MAINAREA_EventScript_Yan1_Text_2:
# 355 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I haven't met you before.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_3:
# 356 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'Name's Yan.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_4:
# 359 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string ".....$"

LAYER1_MAINAREA_EventScript_Yan1_Text_5:
# 360 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh...you're {PLAYER}?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_6:
# 361 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Nice to meetcha!$"

LAYER1_MAINAREA_EventScript_Yan1_Text_7:
# 362 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm a detective currently investigating\nthis strange phenomenon.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_8:
# 363 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...what, don't tell me you haven't\nseen it?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_9:
# 366 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "All these people, gone completely\ncuckoo.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_10:
# 368 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "All these people, gone completely\ncrazy.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_11:
# 371 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I, uh, haven't really made any\nprogress, yet.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_12:
# 372 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But, young explorer, don't fret.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_13:
# 373 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm going to get to the bottom of this.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_14:
# 374 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "For now, I'm doing some field research.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_15:
# 375 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "There's a small village up ahead,\non the other side of the mountain.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_16:
# 376 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It's become somewhat of a safe haven.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_17:
# 379 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Don't go dying on me now, alright?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_18:
# 381 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'll meet you there, 'kay?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_19:
# 383 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I still have a few more interviews\nto conduct, stones to turn over.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_20:
# 386 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Toodles!$"

LAYER1_MAINAREA_EventScript_Yan1_Text_21:
# 388 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "See ya!$"

LAYER1_MAINAREA_EventScript_Yan1_Text_22:
# 394 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "{PLAYER}...$"

LAYER1_MAINAREA_EventScript_Yan1_Text_23:
# 395 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, {PLAYER}. One more thing.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_24:
# 397 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You haven't...er, how do I\nput this...$"

LAYER1_MAINAREA_EventScript_Yan1_Text_25:
# 398 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "A girl with a face like TV static,\nand her hair jet black.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_26:
# 399 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You haven't seen anyone like that,\nhave you?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_27:
# 400 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "NO$"

LAYER1_MAINAREA_EventScript_Yan1_Text_28:
# 401 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...alright.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_29:
# 402 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Just curious.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_30:
# 405 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string ".......$"

LAYER1_MAINAREA_EventScript_Yan1_Text_31:
# 406 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "What a weird feeling.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_32:
# 407 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You...$"

LAYER1_MAINAREA_EventScript_Yan1_Text_33:
# 408 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry, ignore me.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_34:
# 410 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Good luck, {PLAYER}.$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_0:
# 531 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The woman named Yan is standing here.)$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_1:
# 532 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(She is staring blankly into the ocean.)$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_2:
# 533 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh?$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_3:
# 535 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Hey, {PLAYER}.$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_4:
# 536 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry, but would you mind giving me\na moment alone?$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_5:
# 541 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "The woman is not even acknowledging\nyou.$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_6:
# 542 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But it doesn't seem like she is\nignoring you.$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_7:
# 543 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Rather, it seems she is focusing\non something else so intently that\pshe doesn't even sense you.$"

LAYER1_MAINAREA_EventScript_SignCave_Text_0:
# 554 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "DANKDRIP CAVE$"

LAYER1_MAINAREA_EventScript_SignWoods_Text_0:
# 560 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "DEEPf WOODS$"

GET_PRANKED_Text_0:
# 576 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The Pokeball has a note in it.)$"

GET_PRANKED_Text_1:
# 577 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'Thanks for the money, sucker!'$"

SCRIPT_BOX_LAYER_1_Text_0:
# 585 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(A box that says 'MART'.)$"

SCRIPT_BOX_LAYER_1_Text_1:
# 586 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(It looks like it contains a bunch\nof goodies.)$"

SCRIPT_BOX_LAYER_1_Text_2:
# 589 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The seal has been broken and\nshoddily repaired.)$"

SCRIPT_BOX_LAYER_1_Text_3:
# 593 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It doesn't seem like the shopkeeper's\naround...$"

SCRIPT_BOX_LAYER_1_Text_4:
# 594 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Did she forget this?$"

SCRIPT_BOX_LAYER_1_Text_5:
# 595 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(...steal something?)$"

SCRIPT_BOX_LAYER_1_Text_6:
# 598 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "This seems like it might have\nconsequences...$"

SCRIPT_BOX_LAYER_1_Text_7:
# 599 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Are you really sure about this?$"

SCRIPT_BOX_LAYER_1_Text_8:
# 602 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You unsealed the box and grabbed\nthe first few things you could see.)$"

SCRIPT_BOX_LAYER_1_Text_9:
# 612 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You hastily tried to reseal the box.)$"

SCRIPT_BOX_LAYER_1_Text_10:
# 613 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(...it won't fully seal, but\nhopefully it's good enough.)$"

SCRIPT_BOX_LAYER_1_Text_11:
# 614 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Better get out of here.$"

LAYER1_MAINAREA_EventScript_Lady_Text_0:
# 623 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Hello, {PLAYER}.$"

LAYER1_MAINAREA_EventScript_Lady_Text_1:
# 624 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It is nice to see you.$"

LAYER1_MAINAREA_EventScript_Lady_Text_2:
# 625 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I am but a humble shopkeeper.$"

LAYER1_MAINAREA_EventScript_Lady_Text_3:
# 627 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Normally, I would offer to sell\nyou some of my goods.$"

LAYER1_MAINAREA_EventScript_Lady_Text_4:
# 628 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "However, it appears that they\nhave been stolen.$"

LAYER1_MAINAREA_EventScript_Lady_Text_5:
# 629 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "What a tragedy...$"

LAYER1_MAINAREA_EventScript_Lady_Text_6:
# 630 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm sorry, but I won't be able\nto be of any use to you until\pthe criminal is found.$"

LAYER1_MAINAREA_EventScript_Lady_Text_7:
# 631 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Once I find them, I will make\nthem pay.$"

LAYER1_MAINAREA_EventScript_Lady_Text_8:
# 632 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But for now, I have nothing to\noffer you.$"

LAYER1_MAINAREA_EventScript_Lady_Text_9:
# 635 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please, take a look at what I\nhave to offer.$"

LAYER1_MAINAREA_EventScript_Lady_Text_10:
# 637 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I will be traveling futher soon.$"

LAYER1_MAINAREA_EventScript_Lady_Text_11:
# 638 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "If you need anything, please see\nme again as soon as possible.$"

DIE_THIEF_Text_0:
# 647 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...What, do you think I'm\nstupid?$"

DIE_THIEF_Text_1:
# 648 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I know it was you.$"

DIE_THIEF_Text_2:
# 649 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Who else could it possibly be?$"

DIE_THIEF_Text_3:
# 650 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You've got some real balls\nshowing your face around me.$"

DIE_THIEF_Text_4:
# 651 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Time for retribution.$"

LAYER1_MAINAREA_LassIntro::
# 152 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'M GOING TO KEEP WINNING AND AIM\n"
	.string "TO BE THE BEST TRAINER\p"
	.string "HELP ME FURTHER MY CAREER !$"

LAYER1_MAINAREA_LassOutro::
# 158 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I ENDED UP FURTHERING YOUR CAREER$"

LAYER1_MAINAREA_LassPost::
# 162 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_Lass2Intro::
# 171 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "SO  CUTE~!\p"
	.string "I'M GONNA TAKE YOU HOME~!$"

LAYER1_MAINAREA_Lass2Outro::
# 176 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string ".$"

LAYER1_MAINAREA_Lass2Post::
# 180 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_YoungsterIntro::
# 189 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "LETS HAVE A FUN POKEMON BATTLE\n$"

LAYER1_MAINAREA_YoungsterOutro::
# 193 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string " $"

LAYER1_MAINAREA_YoungsterPost::
# 197 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_Youngster2Intro::
# 208 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE SHORTS THEY ARE EASY\nAND COMFY TO WEAR$"

LAYER1_MAINAREA_Youngster2Outro::
# 212 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE $"

LAYER1_MAINAREA_Youngster2Post::
# 216 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_BugCatcherIntro::
# 228 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE BUGS\nPLEASE PLAY WITH ME$"

LAYER1_MAINAREA_BugCatcherOutro::
# 232 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "BUGS$"

LAYER1_MAINAREA_BugCatcherPost::
# 236 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

GenericOutro::
# 240 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string " $"

WAYNEINTRO::
# 282 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "DO NOT FORSAKE THE GIFTS FROM THE\nONE THAT WILL DELIVER UNTO US SAVALATION$"

WAYNEOUTRO::
# 286 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "$"

LADY_OUTRO::
# 657 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Impossible.$"

Generic_Outro::
# 661 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string " $"
