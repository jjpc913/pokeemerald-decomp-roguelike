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


LAYER1_MAINAREA_EventScript_Ball1::
# 146 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 147 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 148 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL1
# 149 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 3
# 150 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Ball2::
# 154 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 155 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Common
# 156 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL2
# 157 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 6
# 158 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Ball3::
# 162 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 163 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 164 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_L1AREA_BALL3
# 165 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 7
# 166 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Boy1::
# 170 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 171 "data/maps/LAYER1_MAINAREA/scripts.pory"
	faceplayer
# 172 "data/maps/LAYER1_MAINAREA/scripts.pory"
	goto_if_unset FLAG_SAD_GUY, LAYER1_MAINAREA_EventScript_Boy1_2
# 205 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_17
# 206 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_21
LAYER1_MAINAREA_EventScript_Boy1_1:
# 208 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return

LAYER1_MAINAREA_EventScript_Boy1_2:
# 173 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_0
# 174 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_1
# 175 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_2
# 176 "data/maps/LAYER1_MAINAREA/scripts.pory"
	checkplayergender
# 177 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LAYER1_MAINAREA_EventScript_Boy1_6
# 180 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_4
LAYER1_MAINAREA_EventScript_Boy1_5:
# 182 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_5
# 183 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_6
# 184 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_7
# 185 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_8
# 186 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_9
# 187 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_10
# 188 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_11
# 189 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_12
# 190 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_13
# 191 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_14
# 192 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_15
# 193 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_16
# 194 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_17
# 195 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_18, MSGBOX_YESNO
# 196 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Boy1_10
# 201 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_20
LAYER1_MAINAREA_EventScript_Boy1_9:
# 203 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_SAD_GUY
	goto LAYER1_MAINAREA_EventScript_Boy1_1

LAYER1_MAINAREA_EventScript_Boy1_6:
# 178 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_3
	goto LAYER1_MAINAREA_EventScript_Boy1_5

LAYER1_MAINAREA_EventScript_Boy1_10:
# 197 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Boy1_Text_19
# 198 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_POTION, 1
# 199 "data/maps/LAYER1_MAINAREA/scripts.pory"
	addvar VAR_VENOM, 1
	goto LAYER1_MAINAREA_EventScript_Boy1_9


LAYER1_MAINAREA_EventScript_Sign::
# 212 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 213 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Sign_Text_0
# 214 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Yan1::
# 218 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 219 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_0
# 220 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanTurnAround1
# 221 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 222 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_1
# 223 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_2
# 224 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_3
# 225 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_13
# 226 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_BLUE_SCARF, 1
# 227 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_4
# 228 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_5
# 229 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_6
# 230 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_7
# 231 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_8
# 232 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_9
# 233 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_10
# 234 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_11
# 235 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_12
# 236 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_13
# 237 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_14
# 238 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_15
# 239 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_16
# 240 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_17
# 241 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_18
# 242 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanLeave1
# 243 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 244 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_YAN_1
# 245 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 8
# 246 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


LAYER1_MAINAREA_EventScript_Yan2::
# 250 "data/maps/LAYER1_MAINAREA/scripts.pory"
	lockall
# 251 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_0
# 252 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanTurnAround2
# 253 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 254 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_1
# 255 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_2
# 256 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_3
# 257 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Mothman_Text_13
# 258 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_BLUE_SCARF, 1
# 259 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_4
# 260 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_5
# 261 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_6
# 262 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_7
# 263 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_8
# 264 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_9
# 265 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_10
# 266 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_11
# 267 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_12
# 268 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_13
# 269 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_14
# 270 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_15
# 271 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_16
# 272 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_17
# 273 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Yan1_Text_18
# 274 "data/maps/LAYER1_MAINAREA/scripts.pory"
	applymovement 8, YanLeave2
# 275 "data/maps/LAYER1_MAINAREA/scripts.pory"
	waitmovement 8
# 276 "data/maps/LAYER1_MAINAREA/scripts.pory"
	setflag FLAG_YAN_1
# 277 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeobject 8
# 278 "data/maps/LAYER1_MAINAREA/scripts.pory"
	releaseall
	return


# 281 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanTurnAround1:
# 282 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
# 283 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 283 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 283 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 283 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

# 286 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanTurnAround2:
# 287 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
# 288 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 288 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 288 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 288 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 289 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_down
# 290 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_down
# 291 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_right
	step_end

# 294 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanLeave1:
# 295 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_down
# 296 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_down
# 297 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
# 298 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 298 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 298 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 298 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 298 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 298 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 298 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 298 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 298 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 298 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

# 301 "data/maps/LAYER1_MAINAREA/scripts.pory"
YanLeave2:
# 302 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_up
# 303 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_up
# 304 "data/maps/LAYER1_MAINAREA/scripts.pory"
	face_left
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
# 305 "data/maps/LAYER1_MAINAREA/scripts.pory"
	walk_left
	step_end

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
# 173 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "..Oh! You...!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_1:
# 174 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You seem...normal!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_2:
# 175 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, thank god.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_3:
# 178 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You've gotta help, dude!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_4:
# 180 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You've gotta help, ma'am!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_5:
# 182 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Everyone's acting really weird!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_6:
# 183 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "It's like...it's like they all went\ncrazy!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_7:
# 184 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I can't find how to leave this damn\nplace, either.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_8:
# 185 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But you...I haven't seen you yet!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_9:
# 186 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You must've gotten in here somehow!\nHow? How did you do it?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_10:
# 187 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "If you can get in, surely you can\nget out, right?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_11:
# 188 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "H...hello? Why aren't you saying anything?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_12:
# 189 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Why won't you talk?$"

LAYER1_MAINAREA_EventScript_Boy1_Text_13:
# 190 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please...help me!$"

LAYER1_MAINAREA_EventScript_Boy1_Text_14:
# 191 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh god...oh god! Don't tell me...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_15:
# 192 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Please...I just want to go home...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_16:
# 193 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...$"

LAYER1_MAINAREA_EventScript_Boy1_Text_17:
# 194 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(This man is hysterical.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_18:
# 195 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(He seems distracted...you could\ntry stealing from him.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_19:
# 197 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "You stole a potion from the mans bag.$"

LAYER1_MAINAREA_EventScript_Boy1_Text_20:
# 201 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You decide to be a good person.)$"

LAYER1_MAINAREA_EventScript_Boy1_Text_21:
# 206 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Best to leave him alone.)$"

LAYER1_MAINAREA_EventScript_Sign_Text_0:
# 213 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'No matter what, never stop dreaming.'$"

LAYER1_MAINAREA_EventScript_Yan1_Text_0:
# 219 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Hmm?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_1:
# 222 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Oh, hello there!$"

LAYER1_MAINAREA_EventScript_Yan1_Text_2:
# 223 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I haven't met you before.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_3:
# 224 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "'Name's Yan.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_4:
# 227 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm a detective currently investigating\nthis strange phenomenon.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_5:
# 228 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...what, don't tell me you haven't\nseen it?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_6:
# 229 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "All these people, gone completely\ncuckoo.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_7:
# 230 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I, uh, haven't really made any\nprogress, yet.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_8:
# 231 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "But, young explorer, don't fret.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_9:
# 232 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm going to get to the bottom of this.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_10:
# 233 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I mean that literally.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_11:
# 234 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I think...the answers I seek are\nin the deepest pits below.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_12:
# 235 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "...weird.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_13:
# 236 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'm getting a really strange feeling...$"

LAYER1_MAINAREA_EventScript_Yan1_Text_14:
# 237 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "The only way to go deeper is to\nkeep jumping into holes, right?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_15:
# 238 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Well, if that's what you're looking\nfor, there was one just up ahead.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_16:
# 239 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I'll meet you down there, 'kay?$"

LAYER1_MAINAREA_EventScript_Yan1_Text_17:
# 240 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I still have a few more interviews\nto conduct, and stones to turn over.$"

LAYER1_MAINAREA_EventScript_Yan1_Text_18:
# 241 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Toodles!$"

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
