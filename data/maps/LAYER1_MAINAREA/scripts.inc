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
	applymovement 1, MothmanMoveOne
# 36 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 37 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_11
# 38 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_12
# 39 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_13
# 40 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_FULL_HEAL, 1
# 41 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_POTION, 1
# 42 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_ETHER, 1
# 43 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_14
# 44 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_15
# 45 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_16
# 46 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_17
# 47 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanFaceLeft
# 48 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 49 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanMoveLeft
# 50 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 51 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_MET_MOTHMAN
# 52 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 1
# 53 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Mothman_2:
# 15 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


# 56 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanMoveRight:
# 57 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 57 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 57 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 57 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 57 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
	step_end

# 59 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanMoveOne:
# 60 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
	step_end

# 62 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanFaceLeft:
# 63 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
	step_end

# 66 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanMoveLeft:
# 67 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 67 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 67 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 67 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 67 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 67 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 67 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 67 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

LAYER1_MAINAREA_EventScript_Lamp::
# 71 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 72 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_0
# 73 "data/maps/LAYER1_MAINAREA/scripts.pory"
	checkitem ITEM_RED_SCARF, 1
# 74 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LAYER1_MAINAREA_EventScript_Lamp_2
LAYER1_MAINAREA_EventScript_Lamp_1:
# 133 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Lamp_2:
# 75 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_1
# 76 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_2
# 77 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_3, MSGBOX_YESNO
# 78 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Lamp_4
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_4:
# 79 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_4
# 80 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeitem ITEM_RED_SCARF, 1
# 81 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 1
# 82 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadescreen FADE_TO_WHITE
# 83 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 10
# 84 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 85 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 1
# 86 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_5, MSGBOX_DEFAULT
# 87 "data/maps/LAYER1_MAINAREA/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, LAYER1_MAINAREA_EventScript_Lamp_Text_6, LAYER1_MAINAREA_EventScript_Lamp_Text_7, LAYER1_MAINAREA_EventScript_Lamp_Text_8, LAYER1_MAINAREA_EventScript_Lamp_Text_9, LAYER1_MAINAREA_EventScript_Lamp_Text_10, LAYER1_MAINAREA_EventScript_Lamp_Text_11
# 90 "data/maps/LAYER1_MAINAREA/scripts.pory"
	switch VAR_RESULT
# 91 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 0, LAYER1_MAINAREA_EventScript_Lamp_7
# 94 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 1, LAYER1_MAINAREA_EventScript_Lamp_8
# 98 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 2, LAYER1_MAINAREA_EventScript_Lamp_9
# 102 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 3, LAYER1_MAINAREA_EventScript_Lamp_10
# 109 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 4, LAYER1_MAINAREA_EventScript_Lamp_11
# 116 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 5, LAYER1_MAINAREA_EventScript_Lamp_12
# 128 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case MULTI_B_PRESSED, LAYER1_MAINAREA_EventScript_Lamp_13
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_7:
# 92 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_12
# 93 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_RARE_CANDY, 3
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_8:
# 95 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_13
# 96 "data/maps/LAYER1_MAINAREA/scripts.pory"
	special HealPlayerParty
# 97 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_14
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_9:
# 99 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_15
# 100 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 101 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_REVIVE, 1
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_10:
# 103 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_16
# 104 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_17
# 105 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_18
# 106 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setvar VAR_QUESTIONS_LEFT, 3
# 107 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Learn
# 108 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_19
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_11:
# 110 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_20
# 111 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 112 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 113 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 114 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 115 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_12:
# 117 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_21
# 118 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_22
# 119 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_23, MSGBOX_YESNO
# 120 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Lamp_14
# 125 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_24
# 126 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_25
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_13:
# 129 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_26
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_14:
# 122 "data/maps/LAYER1_MAINAREA/scripts.pory"
	warp MAP_DEATHZONE, 9, 27
# 123 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitstate
	goto LAYER1_MAINAREA_EventScript_Lamp_1


LAYER1_MAINAREA_EventScript_Lass::
# 137 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_TIANA, LAYER1_MAINAREA_LassIntro, LAYER1_MAINAREA_LassOutro
# 138 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_LassPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Lass2::
# 156 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_JANICE, LAYER1_MAINAREA_Lass2Intro, LAYER1_MAINAREA_Lass2Outro
# 157 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_Lass2Post, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Youngster::
# 174 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, LAYER1_MAINAREA_YoungsterIntro, LAYER1_MAINAREA_YoungsterOutro
# 175 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_YoungsterPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Youngster2::
# 193 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, LAYER1_MAINAREA_YoungsterIntro, LAYER1_MAINAREA_YoungsterOutro
# 194 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_YoungsterPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_BugCatcher::
# 213 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, LAYER1_MAINAREA_BugCatcherIntro, LAYER1_MAINAREA_BugCatcherOutro
# 214 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_BugCatcherPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Ball1::
# 231 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 232 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 233 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL1
# 234 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 3
# 235 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Ball2::
# 239 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 240 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 241 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL2
# 242 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 6
# 243 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Ball4::
# 247 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 248 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_L1AREA_BALL4, LAYER1_MAINAREA_EventScript_Ball4_2
LAYER1_MAINAREA_EventScript_Ball4_1:
# 252 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Ball4_2:
# 249 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL4
	goto LAYER1_MAINAREA_EventScript_Ball4_1


LAYER1_MAINAREA_EventScript_Ball3::
# 256 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, WAYNEINTRO, WAYNEOUTRO, WAYNEPOST
	return


WAYNEPOST::
# 268 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL3
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 7
# 270 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 10
# 271 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 272 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


# 275 "data/maps/LAYER1_MAINAREA/scripts.pory"
CULTISTRUN:
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
	step_end

LAYER1_MAINAREA_EventScript_Boy1::
# 280 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 281 "data/maps/LAYER1_MAINAREA/scripts.pory"
	faceplayer
# 282 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_SAD_GUY, LAYER1_MAINAREA_EventScript_Boy1_2
# 315 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_17
# 316 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_21
LAYER1_MAINAREA_EventScript_Boy1_1:
# 318 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Boy1_2:
# 283 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_0
# 284 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_1
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_2
# 286 "data/maps/LAYER1_MAINAREA/scripts.pory"
	checkplayergender
# 287 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LAYER1_MAINAREA_EventScript_Boy1_6
# 290 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_4
LAYER1_MAINAREA_EventScript_Boy1_5:
# 292 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_5
# 293 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_6
# 294 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_7
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_8
# 296 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_9
# 297 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_10
# 298 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_11
# 299 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_12
# 300 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_13
# 301 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_14
# 302 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_15
# 303 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_16
# 304 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_17
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_18, MSGBOX_YESNO
# 306 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Boy1_10
# 311 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_20
LAYER1_MAINAREA_EventScript_Boy1_9:
# 313 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_SAD_GUY
	goto LAYER1_MAINAREA_EventScript_Boy1_1

LAYER1_MAINAREA_EventScript_Boy1_6:
# 288 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_3
	goto LAYER1_MAINAREA_EventScript_Boy1_5

LAYER1_MAINAREA_EventScript_Boy1_10:
# 307 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_19
# 308 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_POTION, 1
# 309 "data/maps/LAYER1_MAINAREA/scripts.pory"
	addvar VAR_VENOM, 1
	goto LAYER1_MAINAREA_EventScript_Boy1_9


LAYER1_MAINAREA_EventScript_Sign::
# 322 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 323 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Sign_Text_0
# 324 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Yan1::
# 328 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 329 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_YAN_1, LAYER1_MAINAREA_EventScript_Yan1_2
LAYER1_MAINAREA_EventScript_Yan1_1:
# 360 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Yan1_2:
# 330 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_0
# 331 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanTurnAround1
# 332 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 333 "data/maps/LAYER1_MAINAREA/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 334 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_1
# 335 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_2
# 336 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_3
# 337 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_13
# 338 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_BLUE_SCARF, 1
# 339 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_4
# 340 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_5
# 341 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_6
# 342 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_7
# 343 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_8
# 344 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_9
# 345 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_10
# 346 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_11
# 347 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_12
# 348 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_13
# 349 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_14
# 350 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_15
# 351 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_16
# 352 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_17
# 353 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_18
# 354 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanLeave1
# 355 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 356 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_YAN_1
# 357 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 8
# 358 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadedefaultbgm
	goto LAYER1_MAINAREA_EventScript_Yan1_1


LAYER1_MAINAREA_EventScript_Yan2::
# 364 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 365 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_YAN_1, LAYER1_MAINAREA_EventScript_Yan2_2
LAYER1_MAINAREA_EventScript_Yan2_1:
# 396 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Yan2_2:
# 366 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_0
# 367 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanTurnAround2
# 368 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 369 "data/maps/LAYER1_MAINAREA/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 370 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_1
# 371 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_2
# 372 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_3
# 373 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_13
# 374 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_BLUE_SCARF, 1
# 375 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_4
# 376 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_5
# 377 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_6
# 378 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_7
# 379 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_8
# 380 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_9
# 381 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_10
# 382 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_11
# 383 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_12
# 384 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_13
# 385 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_14
# 386 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_15
# 387 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_16
# 388 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_17
# 389 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_18
# 390 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanLeave2
# 391 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 392 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_YAN_1
# 393 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 8
# 394 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadedefaultbgm
	goto LAYER1_MAINAREA_EventScript_Yan2_1


# 399 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanTurnAround1:
# 400 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
# 401 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 401 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 401 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 401 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 401 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

# 404 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanTurnAround2:
# 405 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
# 406 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 406 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 406 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 406 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 406 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 407 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_down
# 408 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_down
# 409 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
	step_end

# 412 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanLeave1:
# 413 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_down
# 414 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_down
# 415 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
# 416 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 416 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 416 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 416 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 416 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 416 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 416 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 416 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 416 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 416 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

# 419 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanLeave2:
# 420 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_up
# 421 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_up
# 422 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
# 423 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 423 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 423 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 423 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 423 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 423 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 423 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 423 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 423 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 423 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

LAYER1_MAINAREA_EventScript_yanbeach::
# 427 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 428 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_ROBBED, LAYER1_MAINAREA_EventScript_yanbeach_2
LAYER1_MAINAREA_EventScript_yanbeach_1:
# 436 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_yanbeach_2:
# 429 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_0
# 430 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_1
# 431 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_2
# 432 "data/maps/LAYER1_MAINAREA/scripts.pory"
	faceplayer
# 433 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_3
# 434 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_yanbeach_Text_4
	goto LAYER1_MAINAREA_EventScript_yanbeach_1


LAYER1_MAINAREA_EventScript_SignCave::
# 440 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 441 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_SignCave_Text_0
# 442 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_SignWoods::
# 446 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 447 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_SignWoods_Text_0
# 448 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_RemoveDubois::
# 452 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 453 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_ROBBED, LAYER1_MAINAREA_EventScript_RemoveDubois_2
# 456 "data/maps/LAYER1_MAINAREA/scripts.pory"
	clearflag FLAG_DUBOIS_LAYER1_MAINAREA
LAYER1_MAINAREA_EventScript_RemoveDubois_1:
# 458 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_RemoveDubois_2:
# 454 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_DUBOIS_LAYER1_MAINAREA
	goto LAYER1_MAINAREA_EventScript_RemoveDubois_1


GET_PRANKED::
# 462 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 463 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox GET_PRANKED_Text_0
# 464 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox GET_PRANKED_Text_1
# 465 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_PRANKED
# 466 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 2
# 467 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


SCRIPT_BOX_LAYER_1::
# 471 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 472 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_0
# 473 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_1
# 474 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_2
# 475 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_THIEF, SCRIPT_BOX_LAYER_1_2
# 478 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_4
SCRIPT_BOX_LAYER_1_1:
# 481 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_LADY_LAYER1, SCRIPT_BOX_LAYER_1_7
SCRIPT_BOX_LAYER_1_5:
# 504 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

SCRIPT_BOX_LAYER_1_2:
# 476 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_3
	goto SCRIPT_BOX_LAYER_1_1

SCRIPT_BOX_LAYER_1_6:
# 482 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_5
# 483 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_6, MSGBOX_YESNO
# 484 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SCRIPT_BOX_LAYER_1_10
	goto SCRIPT_BOX_LAYER_1_5

SCRIPT_BOX_LAYER_1_7:
# 481 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_THIEF, SCRIPT_BOX_LAYER_1_6
	goto SCRIPT_BOX_LAYER_1_5

SCRIPT_BOX_LAYER_1_10:
# 485 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_16
# 486 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_7, MSGBOX_YESNO
# 487 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SCRIPT_BOX_LAYER_1_12
	goto SCRIPT_BOX_LAYER_1_5

SCRIPT_BOX_LAYER_1_12:
# 488 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_THIEF
# 489 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_8
# 490 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 491 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 492 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 493 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 494 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 495 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 496 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 497 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 498 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_9
# 499 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_10
# 500 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox SCRIPT_BOX_LAYER_1_Text_11
	goto SCRIPT_BOX_LAYER_1_5


LAYER1_MAINAREA_EventScript_Lady::
# 508 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 509 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_0
# 510 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_1
# 511 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_2
# 512 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_THIEF, LAYER1_MAINAREA_EventScript_Lady_2
# 532 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_17
# 533 "data/maps/LAYER1_MAINAREA/scripts.pory"
	pokemart L1_LADY_MART
# 534 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_18
# 535 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_19
LAYER1_MAINAREA_EventScript_Lady_1:
# 537 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Lady_2:
# 513 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_3
# 514 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_4
# 515 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_5
# 516 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_6
# 517 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_7
# 518 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_8
# 519 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_9, MSGBOX_YESNO
# 520 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LAYER1_MAINAREA_EventScript_Lady_6
# 527 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_15
# 528 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_16
LAYER1_MAINAREA_EventScript_Lady_5:
# 530 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_TALKED_TO_LADY_THIEF
	goto LAYER1_MAINAREA_EventScript_Lady_1

LAYER1_MAINAREA_EventScript_Lady_6:
# 521 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_10
# 522 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_11
# 523 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_12
# 524 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_13
# 525 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lady_Text_14
	goto LAYER1_MAINAREA_EventScript_Lady_5


DIE_THIEF::
# 541 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 542 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_set FLAG_TALKED_TO_LADY_THIEF, DIE_THIEF_2
DIE_THIEF_1:
# 551 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

DIE_THIEF_2:
# 543 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadeoutbgm 1
# 544 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_0
# 545 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_1
# 546 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_2
# 547 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_3
# 548 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox DIE_THIEF_Text_4
# 549 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, LADY_OUTRO
	goto DIE_THIEF_1


	.align 2
# 558 "data/maps/LAYER1_MAINAREA/scripts.pory"
L1_LADY_MART:
# 559 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_POTION
# 560 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 561 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_POKE_BALL
# 562 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 563 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 564 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 565 "data/maps/LAYER1_MAINAREA/scripts.pory"
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
	.string "...just a friendly word of advice.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_11:
# 37 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You can call me MOTHMAN.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_12:
# 38 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm your guardian angel, in a way.\nEheheh...$"

LAYER1_MAINAREA_EventScript_Mothman_Text_13:
# 39 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You can take this.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_14:
# 43 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Just a little stuff to get you started.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_15:
# 44 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It's brutal out there.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_16:
# 45 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Good luck, {PLAYER}.\n$"

LAYER1_MAINAREA_EventScript_Mothman_Text_17:
# 46 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'll be rooting for you...eheheh.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_0:
# 72 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(There is a suspicious looking\nlamp post here.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_1:
# 75 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The lamp is resonating with your wishing\nstone...)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_2:
# 76 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The stone feels soft in your hand,\nmalleable like jelly but still\psolid enough to grip.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_3:
# 77 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Would you like to crush a wishing\nstone?)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_4:
# 79 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You smash the stone against the\nlamp post.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_5:
# 86 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "What is your wish?$"

LAYER1_MAINAREA_EventScript_Lamp_Text_6:
# 87 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for power.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_7:
# 88 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for healing.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_8:
# 88 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for a better future.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_9:
# 88 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for knowledge.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_10:
# 89 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for treasure.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_11:
# 89 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for merciful death.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_12:
# 92 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for power.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_13:
# 95 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for healing.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_14:
# 97 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Your party was miraculously healed...!)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_15:
# 99 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for a better future.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_16:
# 103 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for knowledge.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_17:
# 104 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...very well.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_18:
# 105 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "As you wish, you will get three questions.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_19:
# 108 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You feel enlightened.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_20:
# 110 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for treasure.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_21:
# 117 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for merciful death.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_22:
# 118 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(....)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_23:
# 119 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Is this really what you want?$"

LAYER1_MAINAREA_EventScript_Lamp_Text_24:
# 125 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You hesitated in your conviction.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_25:
# 126 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The wish was wasted...)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_26:
# 129 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You tripped over your words,\nand the wish failed.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_0:
# 283 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "..Oh! You...!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_1:
# 284 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You seem...normal!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_2:
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, thank god.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_3:
# 288 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You've gotta help, dude!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_4:
# 290 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You've gotta help, ma'am!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_5:
# 292 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Everyone's acting really weird!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_6:
# 293 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It's like...it's like they all went\ncrazy!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_7:
# 294 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I can't find how to leave this damn\nplace, either.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_8:
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But you...I haven't seen you yet!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_9:
# 296 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You must've gotten in here somehow!\nHow? How did you do it?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_10:
# 297 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "If you can get in, surely you can\nget out, right?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_11:
# 298 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "H...hello? Why aren't you saying anything?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_12:
# 299 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Why won't you talk?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_13:
# 300 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please...help me!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_14:
# 301 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh god...oh god! Don't tell me...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_15:
# 302 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please...I just want to go home...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_16:
# 303 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_17:
# 304 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(This man is hysterical.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_18:
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(He seems distracted...you could\ntry stealing from him.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_19:
# 307 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You stole a potion from the mans bag.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_20:
# 311 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You decide to be a good person.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_21:
# 316 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Best to leave him alone.)$"

LAYER1_MAINAREA_EventScript_Sign_Text_0:
# 323 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'No matter what, never stop dreaming.'$"

LAYER1_MAINAREA_EventScript_Yan1_Text_0:
# 330 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Hmm?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_1:
# 334 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, hello there!$"

LAYER1_MAINAREA_EventScript_Yan1_Text_2:
# 335 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I haven't met you before.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_3:
# 336 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'Name's Yan.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_4:
# 339 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm a detective currently investigating\nthis strange phenomenon.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_5:
# 340 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...what, don't tell me you haven't\nseen it?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_6:
# 341 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "All these people, gone completely\ncuckoo.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_7:
# 342 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I, uh, haven't really made any\nprogress, yet.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_8:
# 343 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But, young explorer, don't fret.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_9:
# 344 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm going to get to the bottom of this.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_10:
# 345 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I mean that literally.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_11:
# 346 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I think...the answers I seek are\nin the deepest pits below.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_12:
# 347 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...weird.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_13:
# 348 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm getting a really strange feeling...$"

LAYER1_MAINAREA_EventScript_Yan1_Text_14:
# 349 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "The only way to go deeper is to\nkeep jumping into holes, right?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_15:
# 350 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Well, if that's what you're looking\nfor, there was one just up ahead.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_16:
# 351 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'll meet you down there, 'kay?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_17:
# 352 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I still have a few more interviews\nto conduct, and stones to turn over.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_18:
# 353 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Toodles!$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_0:
# 429 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The woman named Yan is standing here.)$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_1:
# 430 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(She is staring blankly into the ocean.)$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_2:
# 431 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh?$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_3:
# 433 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Hey, {PLAYER}.$"

LAYER1_MAINAREA_EventScript_yanbeach_Text_4:
# 434 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry, but would you mind giving me\na moment alone?$"

LAYER1_MAINAREA_EventScript_SignCave_Text_0:
# 441 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "DANKDRIP CAVE$"

LAYER1_MAINAREA_EventScript_SignWoods_Text_0:
# 447 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "DEEPf WOODS$"

GET_PRANKED_Text_0:
# 463 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The Pokeball has a note in it.)$"

GET_PRANKED_Text_1:
# 464 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'Thanks for the money, sucker!'$"

SCRIPT_BOX_LAYER_1_Text_0:
# 472 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(A box that says 'MART'.)$"

SCRIPT_BOX_LAYER_1_Text_1:
# 473 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(It looks like it contains a bunch\nof goodies.)$"

SCRIPT_BOX_LAYER_1_Text_2:
# 474 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Did she forget this?$"

SCRIPT_BOX_LAYER_1_Text_3:
# 476 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The seal has been broken and\nshoddily repaired.)$"

SCRIPT_BOX_LAYER_1_Text_4:
# 478 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It looks properly sealed.$"

SCRIPT_BOX_LAYER_1_Text_5:
# 482 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It doesn't seem like the shopkeeper's\naround...$"

SCRIPT_BOX_LAYER_1_Text_6:
# 483 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Steal something?$"

SCRIPT_BOX_LAYER_1_Text_7:
# 486 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Are you really sure about this?$"

SCRIPT_BOX_LAYER_1_Text_8:
# 489 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You unsealed the box and grabbed\nthe first few things you could see.)$"

SCRIPT_BOX_LAYER_1_Text_9:
# 498 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You hastily tried to reseal the box.)$"

SCRIPT_BOX_LAYER_1_Text_10:
# 499 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(...it won't fully seal, but\nhopefully it's good enough.)$"

SCRIPT_BOX_LAYER_1_Text_11:
# 500 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Better get out of here.$"

LAYER1_MAINAREA_EventScript_Lady_Text_0:
# 509 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Hello, {PLAYER}.$"

LAYER1_MAINAREA_EventScript_Lady_Text_1:
# 510 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It is nice to see you.$"

LAYER1_MAINAREA_EventScript_Lady_Text_2:
# 511 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I am but a humble shopkeeper.$"

LAYER1_MAINAREA_EventScript_Lady_Text_3:
# 513 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Normally, I would offer to sell\nyou some of my goods.$"

LAYER1_MAINAREA_EventScript_Lady_Text_4:
# 514 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "However, it appears that they\nhave been stolen.$"

LAYER1_MAINAREA_EventScript_Lady_Text_5:
# 515 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "What a tragedy...$"

LAYER1_MAINAREA_EventScript_Lady_Text_6:
# 516 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm sorry, but I won't be able\nto be of any use to you until\pthe criminal is found.$"

LAYER1_MAINAREA_EventScript_Lady_Text_7:
# 517 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Once I find them, I will make\nthem pay.$"

LAYER1_MAINAREA_EventScript_Lady_Text_8:
# 518 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But for now, I have nothing to\noffer you.$"

LAYER1_MAINAREA_EventScript_Lady_Text_9:
# 519 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You wouldn't happen to have seen\nanything, have you?$"

LAYER1_MAINAREA_EventScript_Lady_Text_10:
# 521 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You have?$"

LAYER1_MAINAREA_EventScript_Lady_Text_11:
# 522 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, joyous day.$"

LAYER1_MAINAREA_EventScript_Lady_Text_12:
# 523 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "With you help, we can bring the\ncriminal to justice.$"

LAYER1_MAINAREA_EventScript_Lady_Text_13:
# 524 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string ".........{PAUSE_UNTIL_PRESS}$"

LAYER1_MAINAREA_EventScript_Lady_Text_14:
# 525 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It was you, wasn't it?$"

LAYER1_MAINAREA_EventScript_Lady_Text_15:
# 527 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, that is a shame.$"

LAYER1_MAINAREA_EventScript_Lady_Text_16:
# 528 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "If you see anything, please let me know.$"

LAYER1_MAINAREA_EventScript_Lady_Text_17:
# 532 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please, take a look at what I\nhave to offer.$"

LAYER1_MAINAREA_EventScript_Lady_Text_18:
# 534 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I will be traveling futher soon.$"

LAYER1_MAINAREA_EventScript_Lady_Text_19:
# 535 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "If you need anything, please see\nme again as soon as possible.$"

DIE_THIEF_Text_0:
# 544 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...do you think I'm stupid?$"

DIE_THIEF_Text_1:
# 545 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I know it was you.$"

DIE_THIEF_Text_2:
# 546 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Who else could it possibly be?$"

DIE_THIEF_Text_3:
# 547 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You're the only one that can\ninfluence this world.$"

DIE_THIEF_Text_4:
# 548 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Time for retribution.$"

LAYER1_MAINAREA_LassIntro::
# 141 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'M GOING TO KEEP WINNING AND AIM\n"
	.string "TO BE THE BEST TRAINER\p"
	.string "HELP ME FURTHER MY CAREER !$"

LAYER1_MAINAREA_LassOutro::
# 147 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I ENDED UP FURTHERING YOUR CAREER$"

LAYER1_MAINAREA_LassPost::
# 151 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_Lass2Intro::
# 160 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "SO  CUTE~!\p"
	.string "I'M GONNA TAKE YOU HOME~!$"

LAYER1_MAINAREA_Lass2Outro::
# 165 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string ".$"

LAYER1_MAINAREA_Lass2Post::
# 169 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_YoungsterIntro::
# 178 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "LETS HAVE A FUN POKEMON BATTLE\n$"

LAYER1_MAINAREA_YoungsterOutro::
# 182 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string " $"

LAYER1_MAINAREA_YoungsterPost::
# 186 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_Youngster2Intro::
# 197 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE SHORTS THEY ARE EASY\nAND COMFY TO WEAR$"

LAYER1_MAINAREA_Youngster2Outro::
# 201 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE $"

LAYER1_MAINAREA_Youngster2Post::
# 205 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_BugCatcherIntro::
# 217 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE BUGS\nPLEASE PLAY WITH ME$"

LAYER1_MAINAREA_BugCatcherOutro::
# 221 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "BUGS$"

LAYER1_MAINAREA_BugCatcherPost::
# 225 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

WAYNEINTRO::
# 259 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "DO NOT TAKE THE GIFTS FROM THE ONE\nTHAT WILL DELIVER UNTO US SAVALATION IN VAIN $"

WAYNEOUTRO::
# 263 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "$"

LADY_OUTRO::
# 554 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Impossible.$"
