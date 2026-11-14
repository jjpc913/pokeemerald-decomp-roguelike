LAYER1_MAINAREA_MapScripts::
# 2 "data/maps/LAYER1_MAINAREA/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LAYER1_MAINAREA_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LAYER1_MAINAREA_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_ROBBED, LAYER1_MAINAREA_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 7 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_DUBOIS_LAYER1_MAINAREA
	return

LAYER1_MAINAREA_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/LAYER1_MAINAREA/scripts.pory"
	clearflag FLAG_DUBOIS_LAYER1_MAINAREA
# 5 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_LADY_LAYER1
	return


LAYER1_MAINAREA_EventScript_Mothman::
# 13 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 14 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_MET_MOTHMAN, LAYER1_MAINAREA_EventScript_Mothman_2
# 18 "data/maps/LAYER1_MAINAREA/scripts.pory"
	hideobjectat 9, MAP_LAYER1_MAINAREA
# 19 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_0
# 20 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_LADY_LAYER1
# 21 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanMoveRight
# 22 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 23 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_1
# 24 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_2
# 25 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_3
# 26 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_4
# 27 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_5
# 28 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_6
# 29 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanMoveOne
# 30 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 31 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_7
# 32 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_8
# 33 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_9
# 34 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_10
# 35 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_11
# 36 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanMoveOne
# 37 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 38 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_12
# 39 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_13
# 40 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_14
# 41 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_FULL_HEAL, 1
# 42 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_POTION, 1
# 43 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_ETHER, 1
# 44 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_15
# 45 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_16
# 46 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_17
# 47 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_18
# 48 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanFaceLeft
# 49 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 50 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanMoveLeft
# 51 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 52 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_MET_MOTHMAN
# 53 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 1
# 54 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Mothman_2:
# 15 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


# 57 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanMoveRight:
# 58 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 58 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 58 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 58 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 58 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
	step_end

# 60 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanMoveOne:
# 61 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
	step_end

# 63 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanFaceLeft:
# 64 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
	step_end

# 67 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanMoveLeft:
# 68 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 68 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 68 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 68 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 68 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 68 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 68 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 68 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

LAYER1_MAINAREA_EventScript_Lamp::
# 72 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 73 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_0
# 74 "data/maps/LAYER1_MAINAREA/scripts.pory"
	checkitem ITEM_RED_SCARF, 1
# 75 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LAYER1_MAINAREA_EventScript_Lamp_2
LAYER1_MAINAREA_EventScript_Lamp_1:
# 134 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Lamp_2:
# 76 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_1
# 77 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_2
# 78 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_3, MSGBOX_YESNO
# 79 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Lamp_4
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_4:
# 80 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_4
# 81 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeitem ITEM_RED_SCARF, 1
# 82 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 1
# 83 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadescreen FADE_TO_WHITE
# 84 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 10
# 85 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 86 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 1
# 87 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_5, MSGBOX_DEFAULT
# 88 "data/maps/LAYER1_MAINAREA/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, LAYER1_MAINAREA_EventScript_Lamp_Text_6, LAYER1_MAINAREA_EventScript_Lamp_Text_7, LAYER1_MAINAREA_EventScript_Lamp_Text_8, LAYER1_MAINAREA_EventScript_Lamp_Text_9, LAYER1_MAINAREA_EventScript_Lamp_Text_10, LAYER1_MAINAREA_EventScript_Lamp_Text_11
# 91 "data/maps/LAYER1_MAINAREA/scripts.pory"
	switch VAR_RESULT
# 92 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 0, LAYER1_MAINAREA_EventScript_Lamp_7
# 95 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 1, LAYER1_MAINAREA_EventScript_Lamp_8
# 99 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 2, LAYER1_MAINAREA_EventScript_Lamp_9
# 103 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 3, LAYER1_MAINAREA_EventScript_Lamp_10
# 110 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 4, LAYER1_MAINAREA_EventScript_Lamp_11
# 117 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 5, LAYER1_MAINAREA_EventScript_Lamp_12
# 129 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case MULTI_B_PRESSED, LAYER1_MAINAREA_EventScript_Lamp_13
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_7:
# 93 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_12
# 94 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_RARE_CANDY, 3
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_8:
# 96 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_13
# 97 "data/maps/LAYER1_MAINAREA/scripts.pory"
	special HealPlayerParty
# 98 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_14
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_9:
# 100 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_15
# 101 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 102 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_REVIVE, 1
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_10:
# 104 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_16
# 105 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_17
# 106 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_18
# 107 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setvar VAR_QUESTIONS_LEFT, 3
# 108 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Learn
# 109 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_19
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_11:
# 111 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_20
# 112 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 113 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 114 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 115 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 116 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_12:
# 118 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_21
# 119 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_22
# 120 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_23, MSGBOX_YESNO
# 121 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Lamp_14
# 126 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_24
# 127 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_25
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_13:
# 130 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_26
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_14:
# 123 "data/maps/LAYER1_MAINAREA/scripts.pory"
	warp MAP_DEATHZONE, 9, 27
# 124 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitstate
	goto LAYER1_MAINAREA_EventScript_Lamp_1


LAYER1_MAINAREA_EventScript_Lass::
# 138 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_TIANA, LAYER1_MAINAREA_LassIntro, LAYER1_MAINAREA_LassOutro
# 139 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_LassPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Lass2::
# 157 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_JANICE, LAYER1_MAINAREA_Lass2Intro, LAYER1_MAINAREA_Lass2Outro
# 158 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_Lass2Post, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Youngster::
# 175 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, LAYER1_MAINAREA_YoungsterIntro, LAYER1_MAINAREA_YoungsterOutro
# 176 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_YoungsterPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Youngster2::
# 194 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, LAYER1_MAINAREA_YoungsterIntro, LAYER1_MAINAREA_YoungsterOutro
# 195 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_YoungsterPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_BugCatcher::
# 214 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, LAYER1_MAINAREA_BugCatcherIntro, LAYER1_MAINAREA_BugCatcherOutro
# 215 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_BugCatcherPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Ball1::
# 235 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 236 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 237 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL1
# 238 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 3
# 239 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Ball2::
# 243 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 244 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 245 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL2
# 246 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 6
# 247 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Ball4::
# 251 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 252 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_L1AREA_BALL4, LAYER1_MAINAREA_EventScript_Ball4_2
LAYER1_MAINAREA_EventScript_Ball4_1:
# 256 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Ball4_2:
# 253 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 254 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL4
	goto LAYER1_MAINAREA_EventScript_Ball4_1


LAYER1_MAINAREA_EventScript_Ball3::
# 260 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 261 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_L1AREA_BALL4, LAYER1_MAINAREA_EventScript_Ball3_2
LAYER1_MAINAREA_EventScript_Ball3_1:
# 265 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Ball3_2:
# 262 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 263 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL4
	goto LAYER1_MAINAREA_EventScript_Ball3_1


LAYER1_MAINAREA_EventScript_Wayne::
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, WAYNEINTRO, WAYNEOUTRO, WAYNEPOST
	return


WAYNEPOST::
	return


# 284 "data/maps/LAYER1_MAINAREA/scripts.pory"
CULTISTRUN:
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
	step_end

LAYER1_MAINAREA_EventScript_Boy1::
# 289 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 290 "data/maps/LAYER1_MAINAREA/scripts.pory"
	faceplayer
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_SAD_GUY, LAYER1_MAINAREA_EventScript_Boy1_2
# 324 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_17
# 325 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_21
LAYER1_MAINAREA_EventScript_Boy1_1:
# 327 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Boy1_2:
# 292 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_0
# 293 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_1
# 294 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_2
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	checkplayergender
# 296 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LAYER1_MAINAREA_EventScript_Boy1_6
# 299 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_4
LAYER1_MAINAREA_EventScript_Boy1_5:
# 301 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_5
# 302 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_6
# 303 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_7
# 304 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_8
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_9
# 306 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_10
# 307 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_11
# 308 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_12
# 309 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_13
# 310 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_14
# 311 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_15
# 312 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_16
# 313 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_17
# 314 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_18, MSGBOX_YESNO
# 315 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Boy1_10
# 320 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_20
LAYER1_MAINAREA_EventScript_Boy1_9:
# 322 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_SAD_GUY
	goto LAYER1_MAINAREA_EventScript_Boy1_1

LAYER1_MAINAREA_EventScript_Boy1_6:
# 297 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_3
	goto LAYER1_MAINAREA_EventScript_Boy1_5

LAYER1_MAINAREA_EventScript_Boy1_10:
# 316 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_19
# 317 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_POTION, 1
# 318 "data/maps/LAYER1_MAINAREA/scripts.pory"
	addvar VAR_VENOM, 1
	goto LAYER1_MAINAREA_EventScript_Boy1_9


LAYER1_MAINAREA_EventScript_Sign::
# 331 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 332 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Sign_Text_0
# 333 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Yan1::
# 337 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 338 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_YAN_1, LAYER1_MAINAREA_EventScript_Yan1_2
LAYER1_MAINAREA_EventScript_Yan1_1:
# 369 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Yan1_2:
# 339 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_0
# 340 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanTurnAround1
# 341 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 342 "data/maps/LAYER1_MAINAREA/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 343 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_1
# 344 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_2
# 345 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_3
# 346 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_14
# 347 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_BLUE_SCARF, 1
# 348 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_4
# 349 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_5
# 350 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_6
# 351 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_7
# 352 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_8
# 353 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_9
# 354 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_10
# 355 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_11
# 356 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_12
# 357 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_13
# 358 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_14
# 359 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_15
# 360 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_16
# 361 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_17
# 362 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_18
# 363 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanLeave1
# 364 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 365 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_YAN_1
# 366 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 8
# 367 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadedefaultbgm
	goto LAYER1_MAINAREA_EventScript_Yan1_1


LAYER1_MAINAREA_EventScript_Yan2::
# 373 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 374 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_YAN_1, LAYER1_MAINAREA_EventScript_Yan2_2
LAYER1_MAINAREA_EventScript_Yan2_1:
# 405 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Yan2_2:
# 375 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_0
# 376 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanTurnAround2
# 377 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 378 "data/maps/LAYER1_MAINAREA/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 379 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_1
# 380 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_2
# 381 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_3
# 382 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_14
# 383 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_BLUE_SCARF, 1
# 384 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_4
# 385 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_5
# 386 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_6
# 387 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_7
# 388 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_8
# 389 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_9
# 390 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_10
# 391 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_11
# 392 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_12
# 393 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_13
# 394 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_14
# 395 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_15
# 396 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_16
# 397 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_17
# 398 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_18
# 399 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanLeave2
# 400 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 401 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_YAN_1
# 402 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 8
# 403 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadedefaultbgm
	goto LAYER1_MAINAREA_EventScript_Yan2_1


# 408 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanTurnAround1:
# 409 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
# 410 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 410 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 410 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 410 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 410 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

# 413 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanTurnAround2:
# 414 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
# 415 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 415 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 415 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 415 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 415 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 416 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_down
# 417 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_down
# 418 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
	step_end

# 421 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanLeave1:
# 422 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_down
# 423 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_down
# 424 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
# 425 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 425 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 425 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 425 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 425 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 425 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 425 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 425 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 425 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 425 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

# 428 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanLeave2:
# 429 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_up
# 430 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_up
# 431 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
# 432 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 432 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 432 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 432 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 432 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 432 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 432 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 432 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 432 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 432 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

LAYER1_MAINAREA_EventScript_yanbeach::
# 436 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 437 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_ROBBED, LAYER1_MAINAREA_EventScript_yanbeach_2
LAYER1_MAINAREA_EventScript_yanbeach_1:
# 445 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_yanbeach_2:
# 438 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_0
# 439 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_1
# 440 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_2
# 441 "data/maps/LAYER1_MAINAREA/scripts.pory"
	faceplayer
# 442 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_3
# 443 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_4
	goto LAYER1_MAINAREA_EventScript_yanbeach_1


LAYER1_MAINAREA_EventScript_SignCave::
# 449 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 450 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_SignCave_Text_0
# 451 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_SignWoods::
# 455 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 456 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_SignWoods_Text_0
# 457 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_RemoveDubois::
# 461 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 462 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_ROBBED, LAYER1_MAINAREA_EventScript_RemoveDubois_2
# 465 "data/maps/LAYER1_MAINAREA/scripts.pory"
	clearflag FLAG_DUBOIS_LAYER1_MAINAREA
LAYER1_MAINAREA_EventScript_RemoveDubois_1:
# 467 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_RemoveDubois_2:
# 463 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_DUBOIS_LAYER1_MAINAREA
	goto LAYER1_MAINAREA_EventScript_RemoveDubois_1


GET_PRANKED::
# 471 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 472 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox GET_PRANKED_Text_0
# 473 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox GET_PRANKED_Text_1
# 474 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_PRANKED
# 475 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 2
# 476 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


SCRIPT_BOX_LAYER_1::
# 480 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 481 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_0
# 482 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_1
# 484 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_THIEF, SCRIPT_BOX_LAYER_1_2
SCRIPT_BOX_LAYER_1_1:
# 488 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_LADY_LAYER1, SCRIPT_BOX_LAYER_1_6
SCRIPT_BOX_LAYER_1_4:
# 514 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

SCRIPT_BOX_LAYER_1_2:
# 485 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_2
	goto SCRIPT_BOX_LAYER_1_1

SCRIPT_BOX_LAYER_1_5:
# 489 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_3
# 490 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_4
# 491 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_5, MSGBOX_YESNO
# 492 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SCRIPT_BOX_LAYER_1_9
	goto SCRIPT_BOX_LAYER_1_4

SCRIPT_BOX_LAYER_1_6:
# 488 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_THIEF, SCRIPT_BOX_LAYER_1_5
	goto SCRIPT_BOX_LAYER_1_4

SCRIPT_BOX_LAYER_1_9:
# 493 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_16
# 494 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_6
# 495 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_7, MSGBOX_YESNO
# 496 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SCRIPT_BOX_LAYER_1_11
	goto SCRIPT_BOX_LAYER_1_4

SCRIPT_BOX_LAYER_1_11:
# 497 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_THIEF
# 498 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_8
# 499 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 500 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 501 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 502 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 503 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 504 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 505 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 506 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 507 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 508 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_9
# 509 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_10
# 510 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_11
	goto SCRIPT_BOX_LAYER_1_4


LAYER1_MAINAREA_EventScript_Lady::
# 518 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 519 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_0
# 520 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_1
# 521 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_2
# 522 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_THIEF, LAYER1_MAINAREA_EventScript_Lady_2
# 542 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_17
# 543 "data/maps/LAYER1_MAINAREA/scripts.pory"
	pokemart L1_LADY_MART
# 544 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_18
# 545 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_19
LAYER1_MAINAREA_EventScript_Lady_1:
# 547 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Lady_2:
# 523 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_3
# 524 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_4
# 525 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_5
# 526 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_6
# 527 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_7
# 528 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_8
# 529 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_9, MSGBOX_YESNO
# 530 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LAYER1_MAINAREA_EventScript_Lady_6
# 537 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_15
# 538 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_16
LAYER1_MAINAREA_EventScript_Lady_5:
# 540 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_TALKED_TO_LADY_THIEF
	goto LAYER1_MAINAREA_EventScript_Lady_1

LAYER1_MAINAREA_EventScript_Lady_6:
# 531 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_10
# 532 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_11
# 533 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_12
# 534 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_13
# 535 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_14
	goto LAYER1_MAINAREA_EventScript_Lady_5


DIE_THIEF::
# 551 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 552 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_TALKED_TO_LADY_THIEF, DIE_THIEF_2
DIE_THIEF_1:
# 561 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

DIE_THIEF_2:
# 553 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadeoutbgm 1
# 554 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_0
# 555 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_1
# 556 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_2
# 557 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_3
# 558 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_4
# 559 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, LADY_OUTRO
	goto DIE_THIEF_1


	.align 2
# 572 "data/maps/LAYER1_MAINAREA/scripts.pory"
L1_LADY_MART:
# 573 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_POTION
# 574 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 575 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_POKE_BALL
# 576 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 577 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 578 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 579 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

LAYER1_MAINAREA_EventScript_Mothman_Text_0:
# 19 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "..not so fast, buddy!$"

LAYER1_MAINAREA_EventScript_Mothman_Text_1:
# 23 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I couldn't help but notice you were\nabout to wander into the grass\pwithout a care in the world.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_2:
# 24 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You know the grass is dangerous,\nright?$"

LAYER1_MAINAREA_EventScript_Mothman_Text_3:
# 25 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I mean, more dangerous than normal.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_4:
# 26 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "This place is special, you see.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_5:
# 27 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "The Pokemon are more aggressive.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_6:
# 28 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "They'll hunt you down before they\nlet you run away.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_7:
# 31 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "And even if you do beat 'em, you\nwon't get anything in return.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_8:
# 32 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You won't find any Pokemon Centers\neither.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_9:
# 33 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "In other words, you should\navoid fights when you can.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_10:
# 34 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You'll get EXP from trainer battles,\nbut you probably don't want to\pfight them unless you have to.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_11:
# 35 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...just a friendly bit of advice.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_12:
# 38 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You can call me MOTHMAN.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_13:
# 39 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm your guardian angel. \nEheh...$"

LAYER1_MAINAREA_EventScript_Mothman_Text_14:
# 40 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You can take this.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_15:
# 44 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Just some goodies to get you started.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_16:
# 45 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It's brutal out there.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_17:
# 46 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Good luck, {PLAYER}.\n$"

LAYER1_MAINAREA_EventScript_Mothman_Text_18:
# 47 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'll be rooting for you...eheheh.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_0:
# 73 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(There is a suspicious looking\nlamp post here.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_1:
# 76 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The lamp is resonating with your wishing\nstone...)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_2:
# 77 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The stone feels soft in your hand,\nmalleable like jelly but still\psolid enough to grip.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_3:
# 78 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Would you like to crush a wishing\nstone?)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_4:
# 80 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You smash the stone against the\nlamp post.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_5:
# 87 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "What is your wish?$"

LAYER1_MAINAREA_EventScript_Lamp_Text_6:
# 88 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for power.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_7:
# 89 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for healing.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_8:
# 89 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for a better future.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_9:
# 89 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for knowledge.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_10:
# 90 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for treasure.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_11:
# 90 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for merciful death.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_12:
# 93 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for power.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_13:
# 96 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for healing.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_14:
# 98 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Your party was miraculously healed...!)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_15:
# 100 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for a better future.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_16:
# 104 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for knowledge.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_17:
# 105 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...very well.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_18:
# 106 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "As you wish, you will get three questions.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_19:
# 109 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You feel enlightened.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_20:
# 111 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for treasure.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_21:
# 118 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for merciful death.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_22:
# 119 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(....)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_23:
# 120 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Is this really what you want?$"

LAYER1_MAINAREA_EventScript_Lamp_Text_24:
# 126 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You hesitated in your conviction.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_25:
# 127 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The wish was wasted...)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_26:
# 130 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You tripped over your words,\nand the wish failed.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_0:
# 292 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "..Oh! You...!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_1:
# 293 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You seem...normal!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_2:
# 294 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, thank god.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_3:
# 297 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You've gotta help, dude!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_4:
# 299 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You've gotta help, ma'am!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_5:
# 301 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Everyone's acting really weird!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_6:
# 302 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It's like...it's like they all went\ncrazy!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_7:
# 303 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I can't find how to leave this damn\nplace, either.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_8:
# 304 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But you...I haven't seen you yet!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_9:
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You must've gotten in here somehow!\nHow? How did you do it?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_10:
# 306 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "If you can get in, surely you can\nget out, right?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_11:
# 307 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "H...hello? Why aren't you saying anything?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_12:
# 308 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Why won't you talk?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_13:
# 309 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please...help me!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_14:
# 310 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh god...oh god! Don't tell me...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_15:
# 311 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please...I just want to go home...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_16:
# 312 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_17:
# 313 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(This man is hysterical.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_18:
# 314 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(He seems distracted...you could\ntry stealing from him.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_19:
# 316 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You stole a potion from the mans bag.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_20:
# 320 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You decide to be a good person.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_21:
# 325 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Best to leave him alone.)$"

LAYER1_MAINAREA_EventScript_Sign_Text_0:
# 332 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'No matter what, never stop dreaming.'$"

LAYER1_MAINAREA_EventScript_Yan1_Text_0:
# 339 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Hmm?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_1:
# 343 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, hello there!$"

LAYER1_MAINAREA_EventScript_Yan1_Text_2:
# 344 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I haven't met you before.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_3:
# 345 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'Name's Yan.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_4:
# 348 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm a detective currently investigating\nthis strange phenomenon.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_5:
# 349 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...what, don't tell me you haven't\nseen it?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_6:
# 350 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "All these people, gone completely\ncuckoo.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_7:
# 351 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I, uh, haven't really made any\nprogress, yet.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_8:
# 352 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But, young explorer, don't fret.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_9:
# 353 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm going to get to the bottom of this.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_10:
# 354 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I mean that literally.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_11:
# 355 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I think...the answers I seek are\nin the deepest pits below.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_12:
# 356 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...weird.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_13:
# 357 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm getting a really strange feeling...$"

LAYER1_MAINAREA_EventScript_Yan1_Text_14:
# 358 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "The only way to go deeper is to\nkeep jumping into holes, right?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_15:
# 359 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Well, if that's what you're looking\nfor, there was one just up ahead.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_16:
# 360 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'll meet you down there, 'kay?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_17:
# 361 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I still have a few more interviews\nto conduct, and stones to turn over.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_18:
# 362 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Toodles!$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_0:
# 438 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The woman named Yan is standing here.)$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_1:
# 439 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(She is staring blankly into the ocean.)$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_2:
# 440 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh?$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_3:
# 442 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Hey, {PLAYER}.$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_4:
# 443 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry, but would you mind giving me\na moment alone?$"

LAYER1_MAINAREA_EventScript_SignCave_Text_0:
# 450 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "DANKDRIP CAVE$"

LAYER1_MAINAREA_EventScript_SignWoods_Text_0:
# 456 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "DEEPf WOODS$"

GET_PRANKED_Text_0:
# 472 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The Pokeball has a note in it.)$"

GET_PRANKED_Text_1:
# 473 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'Thanks for the money, sucker!'$"

SCRIPT_BOX_LAYER_1_Text_0:
# 481 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(A box that says 'MART'.)$"

SCRIPT_BOX_LAYER_1_Text_1:
# 482 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(It looks like it contains a bunch\nof goodies.)$"

SCRIPT_BOX_LAYER_1_Text_2:
# 485 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The seal has been broken and\nshoddily repaired.)$"

SCRIPT_BOX_LAYER_1_Text_3:
# 489 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It doesn't seem like the shopkeeper's\naround...$"

SCRIPT_BOX_LAYER_1_Text_4:
# 490 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Did she forget this?$"

SCRIPT_BOX_LAYER_1_Text_5:
# 491 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(...steal something?)$"

SCRIPT_BOX_LAYER_1_Text_6:
# 494 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "This seems like it might have\nconsequences...$"

SCRIPT_BOX_LAYER_1_Text_7:
# 495 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Are you really sure about this?$"

SCRIPT_BOX_LAYER_1_Text_8:
# 498 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You unsealed the box and grabbed\nthe first few things you could see.)$"

SCRIPT_BOX_LAYER_1_Text_9:
# 508 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You hastily tried to reseal the box.)$"

SCRIPT_BOX_LAYER_1_Text_10:
# 509 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(...it won't fully seal, but\nhopefully it's good enough.)$"

SCRIPT_BOX_LAYER_1_Text_11:
# 510 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Better get out of here.$"

LAYER1_MAINAREA_EventScript_Lady_Text_0:
# 519 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Hello, {PLAYER}.$"

LAYER1_MAINAREA_EventScript_Lady_Text_1:
# 520 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It is nice to see you.$"

LAYER1_MAINAREA_EventScript_Lady_Text_2:
# 521 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I am but a humble shopkeeper.$"

LAYER1_MAINAREA_EventScript_Lady_Text_3:
# 523 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Normally, I would offer to sell\nyou some of my goods.$"

LAYER1_MAINAREA_EventScript_Lady_Text_4:
# 524 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "However, it appears that they\nhave been stolen.$"

LAYER1_MAINAREA_EventScript_Lady_Text_5:
# 525 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "What a tragedy...$"

LAYER1_MAINAREA_EventScript_Lady_Text_6:
# 526 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm sorry, but I won't be able\nto be of any use to you until\pthe criminal is found.$"

LAYER1_MAINAREA_EventScript_Lady_Text_7:
# 527 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Once I find them, I will make\nthem pay.$"

LAYER1_MAINAREA_EventScript_Lady_Text_8:
# 528 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But for now, I have nothing to\noffer you.$"

LAYER1_MAINAREA_EventScript_Lady_Text_9:
# 529 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You wouldn't happen to have seen\nanything, have you?$"

LAYER1_MAINAREA_EventScript_Lady_Text_10:
# 531 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You have?$"

LAYER1_MAINAREA_EventScript_Lady_Text_11:
# 532 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, joyous day.$"

LAYER1_MAINAREA_EventScript_Lady_Text_12:
# 533 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "With you help, we can bring the\ncriminal to justice.$"

LAYER1_MAINAREA_EventScript_Lady_Text_13:
# 534 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string ".........{PAUSE_UNTIL_PRESS}$"

LAYER1_MAINAREA_EventScript_Lady_Text_14:
# 535 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It was you, wasn't it?$"

LAYER1_MAINAREA_EventScript_Lady_Text_15:
# 537 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, that is a shame.$"

LAYER1_MAINAREA_EventScript_Lady_Text_16:
# 538 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "If you see anything, please let me know.$"

LAYER1_MAINAREA_EventScript_Lady_Text_17:
# 542 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please, take a look at what I\nhave to offer.$"

LAYER1_MAINAREA_EventScript_Lady_Text_18:
# 544 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I will be traveling futher soon.$"

LAYER1_MAINAREA_EventScript_Lady_Text_19:
# 545 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "If you need anything, please see\nme again as soon as possible.$"

DIE_THIEF_Text_0:
# 554 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...What, do you think I'm\nstupid?$"

DIE_THIEF_Text_1:
# 555 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I know it was you.$"

DIE_THIEF_Text_2:
# 556 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Who else could it possibly be?$"

DIE_THIEF_Text_3:
# 557 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You've got some real balls\nshowing your face around me.$"

DIE_THIEF_Text_4:
# 558 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Time for retribution.$"

LAYER1_MAINAREA_LassIntro::
# 142 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'M GOING TO KEEP WINNING AND AIM\n"
	.string "TO BE THE BEST TRAINER\p"
	.string "HELP ME FURTHER MY CAREER !$"

LAYER1_MAINAREA_LassOutro::
# 148 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I ENDED UP FURTHERING YOUR CAREER$"

LAYER1_MAINAREA_LassPost::
# 152 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_Lass2Intro::
# 161 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "SO  CUTE~!\p"
	.string "I'M GONNA TAKE YOU HOME~!$"

LAYER1_MAINAREA_Lass2Outro::
# 166 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string ".$"

LAYER1_MAINAREA_Lass2Post::
# 170 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_YoungsterIntro::
# 179 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "LETS HAVE A FUN POKEMON BATTLE\n$"

LAYER1_MAINAREA_YoungsterOutro::
# 183 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string " $"

LAYER1_MAINAREA_YoungsterPost::
# 187 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_Youngster2Intro::
# 198 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE SHORTS THEY ARE EASY\nAND COMFY TO WEAR$"

LAYER1_MAINAREA_Youngster2Outro::
# 202 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE $"

LAYER1_MAINAREA_Youngster2Post::
# 206 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_BugCatcherIntro::
# 218 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE BUGS\nPLEASE PLAY WITH ME$"

LAYER1_MAINAREA_BugCatcherOutro::
# 222 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "BUGS$"

LAYER1_MAINAREA_BugCatcherPost::
# 226 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

GenericOutro::
# 230 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string " $"

WAYNEINTRO::
# 272 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "DO NOT FORSAKE THE GIFTS FROM THE\nONE THAT WILL DELIVER UNTO US SAVALATION$"

WAYNEOUTRO::
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "$"

LADY_OUTRO::
# 564 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Impossible.$"

Generic_Outro::
# 568 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string " $"
