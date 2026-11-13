# 1 "data/maps/LAYER1_MAINAREA/scripts.pory"
LAYER1_MAINAREA_MapScripts::
# 2 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.byte 0

LAYER1_MAINAREA_EventScript_Mothman::
# 6 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 7 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_MET_MOTHMAN, LAYER1_MAINAREA_EventScript_Mothman_2
# 11 "data/maps/LAYER1_MAINAREA/scripts.pory"
	hideobjectat 9, MAP_LAYER1_MAINAREA
# 12 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_0
# 13 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanMoveRight
# 14 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 15 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_1
# 16 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_2
# 17 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_3
# 18 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_4
# 19 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_5
# 20 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_6
# 21 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanMoveOne
# 22 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 23 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_7
# 24 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_8
# 25 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_9
# 26 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_10
# 27 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanMoveOne
# 28 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 29 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_11
# 30 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_12
# 31 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_13
# 32 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_FULL_HEAL, 1
# 33 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_POTION, 1
# 34 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_ETHER, 1
# 35 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_14
# 36 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_15
# 37 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_16
# 38 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_17
# 39 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanFaceLeft
# 40 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 41 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanMoveLeft
# 42 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 43 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_MET_MOTHMAN
# 44 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 1
# 45 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Mothman_2:
# 8 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


# 48 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanMoveRight:
# 49 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 49 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 49 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 49 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 49 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
	step_end

# 51 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanMoveOne:
# 52 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
	step_end

# 54 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanFaceLeft:
# 55 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
	step_end

# 58 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanMoveLeft:
# 59 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 59 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 59 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 59 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 59 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 59 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 59 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 59 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

LAYER1_MAINAREA_EventScript_Lamp::
# 63 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 64 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_0
# 65 "data/maps/LAYER1_MAINAREA/scripts.pory"
	checkitem ITEM_RED_SCARF, 1
# 66 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LAYER1_MAINAREA_EventScript_Lamp_2
LAYER1_MAINAREA_EventScript_Lamp_1:
# 125 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Lamp_2:
# 67 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_1
# 68 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_2
# 69 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_3, MSGBOX_YESNO
# 70 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Lamp_4
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_4:
# 71 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_4
# 72 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeitem ITEM_RED_SCARF, 1
# 73 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 1
# 74 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadescreen FADE_TO_WHITE
# 75 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 10
# 76 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 77 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 1
# 78 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_5, MSGBOX_DEFAULT
# 79 "data/maps/LAYER1_MAINAREA/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, LAYER1_MAINAREA_EventScript_Lamp_Text_6, LAYER1_MAINAREA_EventScript_Lamp_Text_7, LAYER1_MAINAREA_EventScript_Lamp_Text_8, LAYER1_MAINAREA_EventScript_Lamp_Text_9, LAYER1_MAINAREA_EventScript_Lamp_Text_10, LAYER1_MAINAREA_EventScript_Lamp_Text_11
# 82 "data/maps/LAYER1_MAINAREA/scripts.pory"
	switch VAR_RESULT
# 83 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 0, LAYER1_MAINAREA_EventScript_Lamp_7
# 86 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 1, LAYER1_MAINAREA_EventScript_Lamp_8
# 90 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 2, LAYER1_MAINAREA_EventScript_Lamp_9
# 94 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 3, LAYER1_MAINAREA_EventScript_Lamp_10
# 101 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 4, LAYER1_MAINAREA_EventScript_Lamp_11
# 108 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 5, LAYER1_MAINAREA_EventScript_Lamp_12
# 120 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case MULTI_B_PRESSED, LAYER1_MAINAREA_EventScript_Lamp_13
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_7:
# 84 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_12
# 85 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_RARE_CANDY, 3
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_8:
# 87 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_13
# 88 "data/maps/LAYER1_MAINAREA/scripts.pory"
	special HealPlayerParty
# 89 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_14
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_9:
# 91 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_15
# 92 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 93 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_REVIVE, 1
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_10:
# 95 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_16
# 96 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_17
# 97 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_18
# 98 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setvar VAR_QUESTIONS_LEFT, 3
# 99 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Learn
# 100 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_19
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_11:
# 102 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_20
# 103 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 104 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 105 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 106 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 107 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_12:
# 109 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_21
# 110 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_22
# 111 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_23, MSGBOX_YESNO
# 112 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Lamp_14
# 117 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_24
# 118 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_25
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_13:
# 121 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_26
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_14:
# 114 "data/maps/LAYER1_MAINAREA/scripts.pory"
	warp MAP_DEATHZONE, 9, 27
# 115 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitstate
	goto LAYER1_MAINAREA_EventScript_Lamp_1


LAYER1_MAINAREA_EventScript_Lass::
# 129 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_TIANA, LAYER1_MAINAREA_LassIntro, LAYER1_MAINAREA_LassOutro
# 130 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_LassPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Lass2::
# 148 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_JANICE, LAYER1_MAINAREA_Lass2Intro, LAYER1_MAINAREA_Lass2Outro
# 149 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_Lass2Post, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Youngster::
# 166 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, LAYER1_MAINAREA_YoungsterIntro, LAYER1_MAINAREA_YoungsterOutro
# 167 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_YoungsterPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Youngster2::
# 185 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, LAYER1_MAINAREA_YoungsterIntro, LAYER1_MAINAREA_YoungsterOutro
# 186 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_YoungsterPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_BugCatcher::
# 205 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, LAYER1_MAINAREA_BugCatcherIntro, LAYER1_MAINAREA_BugCatcherOutro
# 206 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_BugCatcherPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Ball1::
# 223 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 224 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 225 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL1
# 226 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 3
# 227 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Ball2::
# 231 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 232 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 233 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL2
# 234 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 6
# 235 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Ball4::
# 239 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 240 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_L1AREA_BALL4, LAYER1_MAINAREA_EventScript_Ball4_2
LAYER1_MAINAREA_EventScript_Ball4_1:
# 244 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Ball4_2:
# 241 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 242 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL4
	goto LAYER1_MAINAREA_EventScript_Ball4_1


LAYER1_MAINAREA_EventScript_Ball3::
# 248 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, WAYNEINTRO, WAYNEOUTRO, WAYNEPOST
	return


WAYNEPOST::
# 260 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL3
# 261 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 7
# 262 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 10
# 263 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 264 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitstate
# 265 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


# 268 "data/maps/LAYER1_MAINAREA/scripts.pory"
CULTISTRUN:
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
	step_end

LAYER1_MAINAREA_EventScript_Boy1::
# 273 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 274 "data/maps/LAYER1_MAINAREA/scripts.pory"
	faceplayer
# 275 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_SAD_GUY, LAYER1_MAINAREA_EventScript_Boy1_2
# 308 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_17
# 309 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_21
LAYER1_MAINAREA_EventScript_Boy1_1:
# 311 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Boy1_2:
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_0
# 277 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_1
# 278 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_2
# 279 "data/maps/LAYER1_MAINAREA/scripts.pory"
	checkplayergender
# 280 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LAYER1_MAINAREA_EventScript_Boy1_6
# 283 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_4
LAYER1_MAINAREA_EventScript_Boy1_5:
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_5
# 286 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_6
# 287 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_7
# 288 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_8
# 289 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_9
# 290 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_10
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_11
# 292 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_12
# 293 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_13
# 294 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_14
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_15
# 296 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_16
# 297 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_17
# 298 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_18, MSGBOX_YESNO
# 299 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Boy1_10
# 304 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_20
LAYER1_MAINAREA_EventScript_Boy1_9:
# 306 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_SAD_GUY
	goto LAYER1_MAINAREA_EventScript_Boy1_1

LAYER1_MAINAREA_EventScript_Boy1_6:
# 281 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_3
	goto LAYER1_MAINAREA_EventScript_Boy1_5

LAYER1_MAINAREA_EventScript_Boy1_10:
# 300 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_19
# 301 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_POTION, 1
# 302 "data/maps/LAYER1_MAINAREA/scripts.pory"
	addvar VAR_VENOM, 1
	goto LAYER1_MAINAREA_EventScript_Boy1_9


LAYER1_MAINAREA_EventScript_Sign::
# 315 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 316 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Sign_Text_0
# 317 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Yan1::
# 321 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 322 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_YAN_1, LAYER1_MAINAREA_EventScript_Yan1_2
LAYER1_MAINAREA_EventScript_Yan1_1:
# 351 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Yan1_2:
# 323 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_0
# 324 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanTurnAround1
# 325 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 326 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_1
# 327 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_2
# 328 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_3
# 329 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_13
# 330 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_BLUE_SCARF, 1
# 331 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_4
# 332 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_5
# 333 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_6
# 334 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_7
# 335 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_8
# 336 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_9
# 337 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_10
# 338 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_11
# 339 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_12
# 340 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_13
# 341 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_14
# 342 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_15
# 343 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_16
# 344 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_17
# 345 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_18
# 346 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanLeave1
# 347 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 348 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_YAN_1
# 349 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 8
	goto LAYER1_MAINAREA_EventScript_Yan1_1


LAYER1_MAINAREA_EventScript_Yan2::
# 355 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 356 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_0
# 357 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanTurnAround2
# 358 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 359 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_1
# 360 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_2
# 361 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_3
# 362 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_13
# 363 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_BLUE_SCARF, 1
# 364 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_4
# 365 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_5
# 366 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_6
# 367 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_7
# 368 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_8
# 369 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_9
# 370 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_10
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
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_17
# 378 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_18
# 379 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanLeave2
# 380 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 381 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_YAN_1
# 382 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 8
# 383 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


# 386 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanTurnAround1:
# 387 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
# 388 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 388 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 388 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 388 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

# 391 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanTurnAround2:
# 392 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
# 393 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 393 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 393 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 393 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 394 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_down
# 395 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_down
# 396 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
	step_end

# 399 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanLeave1:
# 400 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_down
# 401 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_down
# 402 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
# 403 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 403 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 403 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 403 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 403 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 403 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 403 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 403 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 403 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 403 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

# 406 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanLeave2:
# 407 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_up
# 408 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_up
# 409 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
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

LAYER1_MAINAREA_EventScript_yanbeach::
# 414 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 415 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_ROBBED, LAYER1_MAINAREA_EventScript_yanbeach_2
LAYER1_MAINAREA_EventScript_yanbeach_1:
# 423 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_yanbeach_2:
# 416 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_0
# 417 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_1
# 418 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_2
# 419 "data/maps/LAYER1_MAINAREA/scripts.pory"
	faceplayer
# 420 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_3
# 421 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_4
	goto LAYER1_MAINAREA_EventScript_yanbeach_1


LAYER1_MAINAREA_EventScript_SignCave::
# 427 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 428 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_SignCave_Text_0
# 429 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_SignWoods::
# 433 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 434 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_SignWoods_Text_0
# 435 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_RemoveDubois::
# 439 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 440 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_ROBBED, LAYER1_MAINAREA_EventScript_RemoveDubois_2
# 443 "data/maps/LAYER1_MAINAREA/scripts.pory"
	hideobjectat 9, MAP_LAYER1_MAINAREA
# 444 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_DUBOIS_LAYER1_MAINAREA
LAYER1_MAINAREA_EventScript_RemoveDubois_1:
# 446 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_RemoveDubois_2:
# 441 "data/maps/LAYER1_MAINAREA/scripts.pory"
	hideobjectat 9, MAP_LAYER1_MAINAREA
	goto LAYER1_MAINAREA_EventScript_RemoveDubois_1


LAYER1_MAINAREA_EventScript_Mothman_Text_0:
# 12 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "..not so fast, buddy!$"

LAYER1_MAINAREA_EventScript_Mothman_Text_1:
# 15 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I couldn't help but notice you were\nabout to wander into the grass\pwithout a care in the world.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_2:
# 16 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You know the grass is dangerous,\nright?$"

LAYER1_MAINAREA_EventScript_Mothman_Text_3:
# 17 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I mean, more dangerous than normal.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_4:
# 18 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "This place is special, you see.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_5:
# 19 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "The Pokemon are more aggressive.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_6:
# 20 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "They'll hunt you down before they\nlet you run away.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_7:
# 23 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "And even if you do beat 'em, you\nwon't get anything in return.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_8:
# 24 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You won't find any Pokemon Centers\neither.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_9:
# 25 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "In other words, you should\navoid fights when you can.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_10:
# 26 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...just a friendly word of advice.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_11:
# 29 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You can call me MOTHMAN.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_12:
# 30 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm your guardian angel, in a way.\nEheheh...$"

LAYER1_MAINAREA_EventScript_Mothman_Text_13:
# 31 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You can take this.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_14:
# 35 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Just a little stuff to get you started.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_15:
# 36 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It's brutal out there.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_16:
# 37 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Good luck, {PLAYER}.\n$"

LAYER1_MAINAREA_EventScript_Mothman_Text_17:
# 38 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'll be rooting for you...eheheh.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_0:
# 64 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(There is a suspicious looking\nlamp post here.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_1:
# 67 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The lamp is resonating with your wishing\nstone...)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_2:
# 68 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The stone feels soft in your hand,\nmalleable like jelly but still\psolid enough to grip.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_3:
# 69 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Would you like to crush a wishing\nstone?)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_4:
# 71 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You smash the stone against the\nlamp post.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_5:
# 78 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "What is your wish?$"

LAYER1_MAINAREA_EventScript_Lamp_Text_6:
# 79 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for power.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_7:
# 80 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for healing.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_8:
# 80 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for a better future.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_9:
# 80 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for knowledge.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_10:
# 81 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for treasure.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_11:
# 81 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for merciful death.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_12:
# 84 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for power.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_13:
# 87 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for healing.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_14:
# 89 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Your party was miraculously healed...!)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_15:
# 91 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for a better future.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_16:
# 95 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for knowledge.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_17:
# 96 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...very well.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_18:
# 97 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "As you wish, you will get three questions.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_19:
# 100 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You feel enlightened.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_20:
# 102 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for treasure.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_21:
# 109 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for merciful death.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_22:
# 110 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(....)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_23:
# 111 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Is this really what you want?$"

LAYER1_MAINAREA_EventScript_Lamp_Text_24:
# 117 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You hesitated in your conviction.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_25:
# 118 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The wish was wasted...)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_26:
# 121 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You tripped over your words,\nand the wish failed.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_0:
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "..Oh! You...!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_1:
# 277 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You seem...normal!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_2:
# 278 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, thank god.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_3:
# 281 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You've gotta help, dude!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_4:
# 283 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You've gotta help, ma'am!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_5:
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Everyone's acting really weird!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_6:
# 286 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It's like...it's like they all went\ncrazy!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_7:
# 287 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I can't find how to leave this damn\nplace, either.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_8:
# 288 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But you...I haven't seen you yet!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_9:
# 289 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You must've gotten in here somehow!\nHow? How did you do it?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_10:
# 290 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "If you can get in, surely you can\nget out, right?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_11:
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "H...hello? Why aren't you saying anything?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_12:
# 292 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Why won't you talk?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_13:
# 293 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please...help me!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_14:
# 294 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh god...oh god! Don't tell me...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_15:
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please...I just want to go home...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_16:
# 296 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_17:
# 297 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(This man is hysterical.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_18:
# 298 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(He seems distracted...you could\ntry stealing from him.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_19:
# 300 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You stole a potion from the mans bag.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_20:
# 304 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You decide to be a good person.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_21:
# 309 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Best to leave him alone.)$"

LAYER1_MAINAREA_EventScript_Sign_Text_0:
# 316 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'No matter what, never stop dreaming.'$"

LAYER1_MAINAREA_EventScript_Yan1_Text_0:
# 323 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Hmm?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_1:
# 326 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, hello there!$"

LAYER1_MAINAREA_EventScript_Yan1_Text_2:
# 327 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I haven't met you before.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_3:
# 328 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'Name's Yan.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_4:
# 331 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm a detective currently investigating\nthis strange phenomenon.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_5:
# 332 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...what, don't tell me you haven't\nseen it?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_6:
# 333 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "All these people, gone completely\ncuckoo.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_7:
# 334 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I, uh, haven't really made any\nprogress, yet.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_8:
# 335 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But, young explorer, don't fret.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_9:
# 336 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm going to get to the bottom of this.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_10:
# 337 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I mean that literally.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_11:
# 338 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I think...the answers I seek are\nin the deepest pits below.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_12:
# 339 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...weird.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_13:
# 340 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm getting a really strange feeling...$"

LAYER1_MAINAREA_EventScript_Yan1_Text_14:
# 341 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "The only way to go deeper is to\nkeep jumping into holes, right?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_15:
# 342 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Well, if that's what you're looking\nfor, there was one just up ahead.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_16:
# 343 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'll meet you down there, 'kay?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_17:
# 344 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I still have a few more interviews\nto conduct, and stones to turn over.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_18:
# 345 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Toodles!$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_0:
# 416 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The woman named Yan is standing here.)$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_1:
# 417 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(She is staring blankly into the ocean.)$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_2:
# 418 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh?$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_3:
# 420 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Hey, {PLAYER}.$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_4:
# 421 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry, but would you mind giving me\na moment alone?$"

LAYER1_MAINAREA_EventScript_SignCave_Text_0:
# 428 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "DANKDRIP CAVE$"

LAYER1_MAINAREA_EventScript_SignWoods_Text_0:
# 434 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "DEEPf WOODS$"

LAYER1_MAINAREA_LassIntro::
# 133 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'M GOING TO KEEP WINNING AND AIM\n"
	.string "TO BE THE BEST TRAINER\p"
	.string "HELP ME FURTHER MY CAREER !$"

LAYER1_MAINAREA_LassOutro::
# 139 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I ENDED UP FURTHERING YOUR CAREER$"

LAYER1_MAINAREA_LassPost::
# 143 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_Lass2Intro::
# 152 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "SO  CUTE~!\p"
	.string "I'M GONNA TAKE YOU HOME~!$"

LAYER1_MAINAREA_Lass2Outro::
# 157 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string ".$"

LAYER1_MAINAREA_Lass2Post::
# 161 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_YoungsterIntro::
# 170 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "LETS HAVE A FUN POKEMON BATTLE\n$"

LAYER1_MAINAREA_YoungsterOutro::
# 174 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string " $"

LAYER1_MAINAREA_YoungsterPost::
# 178 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_Youngster2Intro::
# 189 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE SHORTS THEY ARE EASY\nAND COMFY TO WEAR$"

LAYER1_MAINAREA_Youngster2Outro::
# 193 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE $"

LAYER1_MAINAREA_Youngster2Post::
# 197 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_BugCatcherIntro::
# 209 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE BUGS\nPLEASE PLAY WITH ME$"

LAYER1_MAINAREA_BugCatcherOutro::
# 213 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "BUGS$"

LAYER1_MAINAREA_BugCatcherPost::
# 217 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

WAYNEINTRO::
# 251 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "DO NOT TAKE THE GIFTS FROM THE ONE\nTHAT WILL DELIVER UNTO US SAVALATION IN VAIN $"

WAYNEOUTRO::
# 255 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "$"
