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
	delay 1
# 66 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadescreen FADE_TO_WHITE
# 67 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 10
# 68 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 69 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 1
# 70 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_2
# 71 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_3, MSGBOX_YESNO
# 72 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Lamp_4
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_4:
# 73 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_4
# 74 "data/maps/LAYER1_MAINAREA/scripts.pory"
	removeitem ITEM_RED_SCARF, 1
# 75 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 1
# 76 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadescreen FADE_TO_WHITE
# 77 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 10
# 78 "data/maps/LAYER1_MAINAREA/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 79 "data/maps/LAYER1_MAINAREA/scripts.pory"
	delay 1
# 80 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_5, MSGBOX_DEFAULT
# 81 "data/maps/LAYER1_MAINAREA/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, LAYER1_MAINAREA_EventScript_Lamp_Text_6, LAYER1_MAINAREA_EventScript_Lamp_Text_7, LAYER1_MAINAREA_EventScript_Lamp_Text_8, LAYER1_MAINAREA_EventScript_Lamp_Text_9, LAYER1_MAINAREA_EventScript_Lamp_Text_10, LAYER1_MAINAREA_EventScript_Lamp_Text_11
# 84 "data/maps/LAYER1_MAINAREA/scripts.pory"
	switch VAR_RESULT
# 85 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 0, LAYER1_MAINAREA_EventScript_Lamp_7
# 88 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 1, LAYER1_MAINAREA_EventScript_Lamp_8
# 92 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 2, LAYER1_MAINAREA_EventScript_Lamp_9
# 96 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 3, LAYER1_MAINAREA_EventScript_Lamp_10
# 100 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 4, LAYER1_MAINAREA_EventScript_Lamp_11
# 107 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case 5, LAYER1_MAINAREA_EventScript_Lamp_12
# 117 "data/maps/LAYER1_MAINAREA/scripts.pory"
	case MULTI_B_PRESSED, LAYER1_MAINAREA_EventScript_Lamp_13
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_7:
# 86 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_12
# 87 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_RARE_CANDY, 3
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_8:
# 89 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_13
# 90 "data/maps/LAYER1_MAINAREA/scripts.pory"
	special HealPlayerParty
# 91 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_14
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_9:
# 93 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_15
# 94 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 95 "data/maps/LAYER1_MAINAREA/scripts.pory"
	giveitem ITEM_REVIVE, 1
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_10:
# 97 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_16
# 98 "data/maps/LAYER1_MAINAREA/scripts.pory"
	addmoney 5000
# 99 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_17
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_11:
# 101 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_18
# 102 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 103 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 104 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Uncommon
# 105 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
# 106 "data/maps/LAYER1_MAINAREA/scripts.pory"
	call Rummage_Rare
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_12:
# 108 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_19
# 109 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_20
# 110 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_21, MSGBOX_YESNO
# 111 "data/maps/LAYER1_MAINAREA/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LAYER1_MAINAREA_EventScript_Lamp_14
# 114 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_22
# 115 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_23
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_13:
# 118 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_24
	goto LAYER1_MAINAREA_EventScript_Lamp_1

LAYER1_MAINAREA_EventScript_Lamp_14:
	goto LAYER1_MAINAREA_EventScript_Lamp_1


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
# 70 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The stone feels soft in your hand,\nmalleable like jelly but still\psolid enough to grip.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_3:
# 71 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Would you like to crush a wishing\nstone?)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_4:
# 73 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You smash the stone against the\nlamp post.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_5:
# 80 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "What is your wish?$"

LAYER1_MAINAREA_EventScript_Lamp_Text_6:
# 81 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for power.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_7:
# 82 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for healing.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_8:
# 82 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for a better future.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_9:
# 82 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for wealth.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_10:
# 83 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for treasure.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_11:
# 83 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "I wish for merciful death.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_12:
# 86 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for power.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_13:
# 89 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for healing.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_14:
# 91 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Your party was miraculously healed...!)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_15:
# 93 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for a better future.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_16:
# 97 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for wealth.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_17:
# 99 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(Your pockets feel a bit heavier...!)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_18:
# 101 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for treasure.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_19:
# 108 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You wished for merciful death.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_20:
# 109 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(....)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_21:
# 110 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "Is this really what you want?$"

LAYER1_MAINAREA_EventScript_Lamp_Text_22:
# 114 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You hesitated in your conviction.)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_23:
# 115 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(The wish was wasted...)$"

LAYER1_MAINAREA_EventScript_Lamp_Text_24:
# 118 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "(You tripped over your words,\nand the wish failed.)$"
