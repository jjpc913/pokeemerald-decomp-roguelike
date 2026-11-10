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
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_0
# 12 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanMoveRight
# 13 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 14 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_1
# 15 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_2
# 16 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_3
# 17 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_4
# 18 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_5
# 19 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_6
# 20 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanMoveOne
# 21 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 22 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_7
# 23 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_8
# 24 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_9
# 25 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_10
# 26 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanMoveOne
# 27 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 28 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_11
# 29 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_12
# 30 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_13
# 31 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_FULL_HEAL, 1
# 32 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_POTION, 1
# 33 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_14
# 34 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_15
# 35 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_16
# 36 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanFaceLeft
# 37 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 38 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 1, MothmanMoveLeft
# 39 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 1
# 40 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_MET_MOTHMAN
# 41 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 1
# 42 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Mothman_2:
# 8 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


# 45 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanMoveRight:
# 46 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 46 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 46 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 46 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 46 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
	step_end

# 48 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanMoveOne:
# 49 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
	step_end

# 51 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanFaceLeft:
# 52 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
	step_end

# 55 "data/maps/LAYER1_MAINAREA/scripts.pory"
MothmanMoveLeft:
# 56 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 56 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 56 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 56 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 56 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 56 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 56 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 56 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

LAYER1_MAINAREA_EventScript_Lamp::
# 60 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 61 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_0
# 62 "data/maps/LAYER1_MAINAREA/scripts.pory"
	checkitem ITEM_RED_SCARF, 1
# 63 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LAYER1_MAINAREA_EventScript_Lamp_2
LAYER1_MAINAREA_EventScript_Lamp_1:
# 122 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Lamp_2:
# 64 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_1
# 65 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_2
# 66 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_3, MSGBOX_YESNO
# 67 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Lamp_4
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_4:
# 68 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_4
# 69 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeitem ITEM_RED_SCARF, 1
# 70 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 1
# 71 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadescreen FADE_TO_WHITE
# 72 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 10
# 73 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 74 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 1
# 75 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_5, MSGBOX_DEFAULT
# 76 "data/maps/LAYER1_MAINAREA/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, LAYER1_MAINAREA_EventScript_Lamp_Text_6, LAYER1_MAINAREA_EventScript_Lamp_Text_7, LAYER1_MAINAREA_EventScript_Lamp_Text_8, LAYER1_MAINAREA_EventScript_Lamp_Text_9, LAYER1_MAINAREA_EventScript_Lamp_Text_10, LAYER1_MAINAREA_EventScript_Lamp_Text_11
# 79 "data/maps/LAYER1_MAINAREA/scripts.pory"
	switch VAR_RESULT
# 80 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 0, LAYER1_MAINAREA_EventScript_Lamp_7
# 83 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 1, LAYER1_MAINAREA_EventScript_Lamp_8
# 87 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 2, LAYER1_MAINAREA_EventScript_Lamp_9
# 91 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 3, LAYER1_MAINAREA_EventScript_Lamp_10
# 98 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 4, LAYER1_MAINAREA_EventScript_Lamp_11
# 105 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 5, LAYER1_MAINAREA_EventScript_Lamp_12
# 117 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case MULTI_B_PRESSED, LAYER1_MAINAREA_EventScript_Lamp_13
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_7:
# 81 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_12
# 82 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_RARE_CANDY, 3
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_8:
# 84 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_13
# 85 "data/maps/LAYER1_MAINAREA/scripts.pory"
	special HealPlayerParty
# 86 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_14
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_9:
# 88 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_15
# 89 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 90 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_REVIVE, 1
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_10:
# 92 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_16
# 93 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_17
# 94 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_18
# 95 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setvar VAR_QUESTIONS_LEFT, 3
# 96 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Learn
# 97 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_19
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_11:
# 99 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_20
# 100 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 101 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 102 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 103 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 104 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_12:
# 106 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_21
# 107 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_22
# 108 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_23, MSGBOX_YESNO
# 109 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Lamp_14
# 114 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_24
# 115 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_25
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_13:
# 118 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_26
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_14:
# 111 "data/maps/LAYER1_MAINAREA/scripts.pory"
	warp MAP_DEATHZONE, 9, 27
# 112 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitstate
	goto LAYER1_MAINAREA_EventScript_Lamp_1


LAYER1_MAINAREA_EventScript_Lass::
# 126 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_TIANA, LAYER1_MAINAREA_LassIntro, LAYER1_MAINAREA_LassOutro
# 127 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_LassPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Youngster::
# 145 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, LAYER1_MAINAREA_YoungsterIntro, LAYER1_MAINAREA_YoungsterOutro
# 146 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_YoungsterPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Youngster2::
# 164 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, LAYER1_MAINAREA_YoungsterIntro, LAYER1_MAINAREA_YoungsterOutro
# 165 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_YoungsterPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_BugCatcher::
# 184 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, LAYER1_MAINAREA_BugCatcherIntro, LAYER1_MAINAREA_BugCatcherOutro
# 185 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_BugCatcherPost, MSGBOX_AUTOCLOSE
	return


LAYER1_MAINAREA_EventScript_Ball1::
# 202 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 203 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 204 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL1
# 205 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 3
# 206 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Ball2::
# 210 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 211 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 212 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL2
# 213 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 6
# 214 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Ball4::
# 218 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 219 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_L1AREA_BALL4, LAYER1_MAINAREA_EventScript_Ball4_2
LAYER1_MAINAREA_EventScript_Ball4_1:
# 223 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Ball4_2:
# 220 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 221 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL4
	goto LAYER1_MAINAREA_EventScript_Ball4_1


LAYER1_MAINAREA_EventScript_Ball3::
# 227 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 228 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 229 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitstate
# 230 "data/maps/LAYER1_MAINAREA/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, WAYNEINTRO, WAYNEOUTRO, WAYNEPOST
# 231 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


WAYNEPOST::
# 243 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL3
# 244 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 7
# 245 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 10
# 246 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


# 249 "data/maps/LAYER1_MAINAREA/scripts.pory"
CULTISTRUN:
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_right
	step_end

LAYER1_MAINAREA_EventScript_Boy1::
# 254 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 255 "data/maps/LAYER1_MAINAREA/scripts.pory"
	faceplayer
# 256 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_SAD_GUY, LAYER1_MAINAREA_EventScript_Boy1_2
# 289 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_17
# 290 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_21
LAYER1_MAINAREA_EventScript_Boy1_1:
# 292 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Boy1_2:
# 257 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_0
# 258 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_1
# 259 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_2
# 260 "data/maps/LAYER1_MAINAREA/scripts.pory"
	checkplayergender
# 261 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LAYER1_MAINAREA_EventScript_Boy1_6
# 264 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_4
LAYER1_MAINAREA_EventScript_Boy1_5:
# 266 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_5
# 267 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_6
# 268 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_7
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_8
# 270 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_9
# 271 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_10
# 272 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_11
# 273 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_12
# 274 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_13
# 275 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_14
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_15
# 277 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_16
# 278 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_17
# 279 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_18, MSGBOX_YESNO
# 280 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Boy1_10
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_20
LAYER1_MAINAREA_EventScript_Boy1_9:
# 287 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_SAD_GUY
	goto LAYER1_MAINAREA_EventScript_Boy1_1

LAYER1_MAINAREA_EventScript_Boy1_6:
# 262 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_3
	goto LAYER1_MAINAREA_EventScript_Boy1_5

LAYER1_MAINAREA_EventScript_Boy1_10:
# 281 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_19
# 282 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_POTION, 1
# 283 "data/maps/LAYER1_MAINAREA/scripts.pory"
	addvar VAR_VENOM, 1
	goto LAYER1_MAINAREA_EventScript_Boy1_9


LAYER1_MAINAREA_EventScript_Sign::
# 296 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 297 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Sign_Text_0
# 298 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Yan1::
# 302 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 303 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_0
# 304 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanTurnAround1
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 306 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_1
# 307 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_2
# 308 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_3
# 309 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_13
# 310 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_BLUE_SCARF, 1
# 311 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_4
# 312 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_5
# 313 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_6
# 314 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_7
# 315 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_8
# 316 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_9
# 317 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_10
# 318 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_11
# 319 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_12
# 320 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_13
# 321 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_14
# 322 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_15
# 323 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_16
# 324 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_17
# 325 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_18
# 326 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanLeave1
# 327 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 328 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_YAN_1
# 329 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 8
# 330 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Yan2::
# 334 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 335 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_0
# 336 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanTurnAround2
# 337 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 338 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_1
# 339 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_2
# 340 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_3
# 341 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_13
# 342 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_BLUE_SCARF, 1
# 343 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_4
# 344 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_5
# 345 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_6
# 346 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_7
# 347 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_8
# 348 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_9
# 349 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_10
# 350 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_11
# 351 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_12
# 352 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_13
# 353 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_14
# 354 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_15
# 355 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_16
# 356 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_17
# 357 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_18
# 358 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanLeave2
# 359 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 360 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_YAN_1
# 361 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 8
# 362 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


# 365 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanTurnAround1:
# 366 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
# 367 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 367 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 367 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 367 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

# 370 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanTurnAround2:
# 371 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
# 372 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 372 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 372 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 372 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 373 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_down
# 374 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_down
# 375 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
	step_end

# 378 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanLeave1:
# 379 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_down
# 380 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_down
# 381 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
# 382 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 382 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 382 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 382 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 382 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 382 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 382 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 382 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 382 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 382 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

# 385 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanLeave2:
# 386 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_up
# 387 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_up
# 388 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
# 389 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 389 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 389 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 389 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 389 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 389 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 389 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 389 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 389 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 389 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

LAYER1_MAINAREA_EventScript_dubois::
# 393 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 394 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_dubois_Text_0
# 395 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_dubois_Text_1
# 396 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Mothman_Text_0:
# 11 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "..not so fast, buddy!$"

LAYER1_MAINAREA_EventScript_Mothman_Text_1:
# 14 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I couldn't help but notice you were\nabout to wander into the grass\pwithout a care in the world.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_2:
# 15 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You know the grass is dangerous,\nright?$"

LAYER1_MAINAREA_EventScript_Mothman_Text_3:
# 16 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I mean, more dangerous than normal.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_4:
# 17 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "This place is special, you see.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_5:
# 18 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "The Pokemon are more aggressive.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_6:
# 19 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "They'll hunt you down before they\nlet you run away.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_7:
# 22 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "And even if you do beat 'em, you\nwon't get anything in return.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_8:
# 23 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You won't find any Pokemon Centers\neither.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_9:
# 24 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "In other words, you should\navoid fights when you can.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_10:
# 25 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...just a friendly word of advice.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_11:
# 28 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You can call me MOTHMAN.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_12:
# 29 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm your guardian angel, in a way.\nEheheh...$"

LAYER1_MAINAREA_EventScript_Mothman_Text_13:
# 30 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You can take this.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_14:
# 33 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It's brutal out there.$"

LAYER1_MAINAREA_EventScript_Mothman_Text_15:
# 34 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Good luck, {PLAYER}.\n$"

LAYER1_MAINAREA_EventScript_Mothman_Text_16:
# 35 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'll be rooting for you...eheheh.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_0:
# 61 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(There is a suspicious looking\nlamp post here.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_1:
# 64 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The lamp is resonating with your wishing\nstone...)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_2:
# 65 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The stone feels soft in your hand,\nmalleable like jelly but still\psolid enough to grip.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_3:
# 66 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Would you like to crush a wishing\nstone?)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_4:
# 68 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You smash the stone against the\nlamp post.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_5:
# 75 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "What is your wish?$"

LAYER1_MAINAREA_EventScript_Lamp_Text_6:
# 76 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for power.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_7:
# 77 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for healing.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_8:
# 77 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for a better future.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_9:
# 77 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for knowledge.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_10:
# 78 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for treasure.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_11:
# 78 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for merciful death.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_12:
# 81 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for power.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_13:
# 84 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for healing.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_14:
# 86 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Your party was miraculously healed...!)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_15:
# 88 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for a better future.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_16:
# 92 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for knowledge.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_17:
# 93 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...very well.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_18:
# 94 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "As you wish, you will get three questions.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_19:
# 97 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You feel enlightened.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_20:
# 99 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for treasure.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_21:
# 106 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for merciful death.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_22:
# 107 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(....)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_23:
# 108 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Is this really what you want?$"

LAYER1_MAINAREA_EventScript_Lamp_Text_24:
# 114 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You hesitated in your conviction.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_25:
# 115 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The wish was wasted...)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_26:
# 118 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You tripped over your words,\nand the wish failed.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_0:
# 257 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "..Oh! You...!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_1:
# 258 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You seem...normal!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_2:
# 259 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, thank god.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_3:
# 262 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You've gotta help, dude!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_4:
# 264 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You've gotta help, ma'am!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_5:
# 266 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Everyone's acting really weird!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_6:
# 267 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It's like...it's like they all went\ncrazy!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_7:
# 268 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I can't find how to leave this damn\nplace, either.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_8:
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But you...I haven't seen you yet!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_9:
# 270 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You must've gotten in here somehow!\nHow? How did you do it?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_10:
# 271 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "If you can get in, surely you can\nget out, right?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_11:
# 272 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "H...hello? Why aren't you saying anything?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_12:
# 273 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Why won't you talk?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_13:
# 274 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please...help me!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_14:
# 275 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh god...oh god! Don't tell me...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_15:
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please...I just want to go home...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_16:
# 277 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_17:
# 278 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(This man is hysterical.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_18:
# 279 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(He seems distracted...you could\ntry stealing from him.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_19:
# 281 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You stole a potion from the mans bag.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_20:
# 285 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You decide to be a good person.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_21:
# 290 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Best to leave him alone.)$"

LAYER1_MAINAREA_EventScript_Sign_Text_0:
# 297 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'No matter what, never stop dreaming.'$"

LAYER1_MAINAREA_EventScript_Yan1_Text_0:
# 303 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Hmm?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_1:
# 306 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, hello there!$"

LAYER1_MAINAREA_EventScript_Yan1_Text_2:
# 307 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I haven't met you before.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_3:
# 308 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'Name's Yan.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_4:
# 311 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm a detective currently investigating\nthis strange phenomenon.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_5:
# 312 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...what, don't tell me you haven't\nseen it?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_6:
# 313 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "All these people, gone completely\ncuckoo.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_7:
# 314 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I, uh, haven't really made any\nprogress, yet.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_8:
# 315 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But, young explorer, don't fret.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_9:
# 316 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm going to get to the bottom of this.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_10:
# 317 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I mean that literally.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_11:
# 318 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I think...the answers I seek are\nin the deepest pits below.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_12:
# 319 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...weird.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_13:
# 320 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm getting a really strange feeling...$"

LAYER1_MAINAREA_EventScript_Yan1_Text_14:
# 321 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "The only way to go deeper is to\nkeep jumping into holes, right?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_15:
# 322 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Well, if that's what you're looking\nfor, there was one just up ahead.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_16:
# 323 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'll meet you down there, 'kay?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_17:
# 324 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I still have a few more interviews\nto conduct, and stones to turn over.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_18:
# 325 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Toodles!$"

LAYER1_MAINAREA_EventScript_dubois_Text_0:
# 394 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(There is a man standing here,\nsilently staring into the ocean.)$"

LAYER1_MAINAREA_EventScript_dubois_Text_1:
# 395 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(He doesn't even acknowledge your\npresence.)$"

LAYER1_MAINAREA_LassIntro::
# 130 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'M GOING TO KEEP WINNING AND AIM\n"
	.string "TO BE THE BEST TRAINER\p"
	.string "HELP ME FURTHER MY CAREER !$"

LAYER1_MAINAREA_LassOutro::
# 136 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I ENDED UP FURTHERING YOUR CAREER$"

LAYER1_MAINAREA_LassPost::
# 140 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_YoungsterIntro::
# 149 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "LETS HAVE A FUN POKEMON BATTLE\n$"

LAYER1_MAINAREA_YoungsterOutro::
# 153 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string " $"

LAYER1_MAINAREA_YoungsterPost::
# 157 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_Youngster2Intro::
# 168 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE SHORTS THEY ARE EASY\nAND COMFY TO WEAR$"

LAYER1_MAINAREA_Youngster2Outro::
# 172 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE $"

LAYER1_MAINAREA_Youngster2Post::
# 176 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

LAYER1_MAINAREA_BugCatcherIntro::
# 188 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I LOVE BUGS\nPLEASE PLAY WITH ME$"

LAYER1_MAINAREA_BugCatcherOutro::
# 192 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "BUGS$"

LAYER1_MAINAREA_BugCatcherPost::
# 196 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Sorry$"

WAYNEINTRO::
# 234 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "DO NOT TAKE THE GIFTS FROM THE ONE\nTHAT WILL DELIVER UNTO US SAVALATION IN VAIN $"

WAYNEOUTRO::
# 238 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "$"
