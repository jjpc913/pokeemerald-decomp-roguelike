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
	goto_if_set FLAG_ACTIVATE_LAMP, LAYER1_MAINAREA_EventScript_Lamp_1
	return

LAYER1_MAINAREA_EventScript_Lamp_1:
# 63 "data/maps/LAYER1_MAINAREA/scripts.pory"
	msgbox LAYER1_MAINAREA_EventScript_Lamp_Text_1
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
	.string "There is a suspicious looking\nlamppost here.$"

LAYER1_MAINAREA_EventScript_Lamp_Text_1:
# 63 "data/maps/LAYER1_MAINAREA/scripts.pory"
	.string "The lamp is resonating with your wishing stone...$"
