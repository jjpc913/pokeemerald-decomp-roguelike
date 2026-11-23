# 1 "data/maps/CLEARING_HOUSE3/scripts.pory"
CLEARING_HOUSE3_MapScripts::
# 2 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.byte 0

CLEARING_HOUSE3_EventScript_Girl::
# 6 "data/maps/CLEARING_HOUSE3/scripts.pory"
	lockall
# 7 "data/maps/CLEARING_HOUSE3/scripts.pory"
	goto_if_unset FLAG_TALKED_GIRL, CLEARING_HOUSE3_EventScript_Girl_2
# 56 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_37
# 57 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_38
CLEARING_HOUSE3_EventScript_Girl_1:
# 59 "data/maps/CLEARING_HOUSE3/scripts.pory"
	releaseall
	return

CLEARING_HOUSE3_EventScript_Girl_2:
# 8 "data/maps/CLEARING_HOUSE3/scripts.pory"
	faceplayer
# 9 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_0
# 10 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_1
# 11 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_2
# 12 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_3
# 13 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_4, MSGBOX_YESNO
# 14 "data/maps/CLEARING_HOUSE3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CLEARING_HOUSE3_EventScript_Girl_5
# 51 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_34
# 52 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_35
# 53 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_36
	goto CLEARING_HOUSE3_EventScript_Girl_1

CLEARING_HOUSE3_EventScript_Girl_5:
# 15 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_5, MSGBOX_YESNO
# 16 "data/maps/CLEARING_HOUSE3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CLEARING_HOUSE3_EventScript_Girl_9
# 21 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_9
CLEARING_HOUSE3_EventScript_Girl_8:
# 23 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_10
# 24 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_11
# 25 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_12
# 26 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_13
# 27 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_14
# 28 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_15
# 29 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_16
# 30 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_17
# 31 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_18
# 32 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_19
# 33 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_20
# 34 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_21
# 35 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_22
# 36 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_23
# 37 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_24
# 38 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_25
# 39 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_26
# 40 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_27
# 41 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_28
# 42 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_29
# 43 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_30
# 44 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_31
# 45 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_32
# 46 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_33
# 47 "data/maps/CLEARING_HOUSE3/scripts.pory"
	giveitem ITEM_RED_SCARF, 1
# 48 "data/maps/CLEARING_HOUSE3/scripts.pory"
	removeobject 2
# 49 "data/maps/CLEARING_HOUSE3/scripts.pory"
	setflag FLAG_TALKED_GIRL
	goto CLEARING_HOUSE3_EventScript_Girl_1

CLEARING_HOUSE3_EventScript_Girl_9:
# 17 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_6
# 18 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_7
# 19 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Girl_Text_8
	goto CLEARING_HOUSE3_EventScript_Girl_8


CLEARING_HOUSE3_EventScript_Stones::
# 63 "data/maps/CLEARING_HOUSE3/scripts.pory"
	lockall
# 64 "data/maps/CLEARING_HOUSE3/scripts.pory"
	applymovement 1, GirlFacePlayer
# 65 "data/maps/CLEARING_HOUSE3/scripts.pory"
	waitmovement 1
# 66 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Stones_Text_0
# 67 "data/maps/CLEARING_HOUSE3/scripts.pory"
	msgbox CLEARING_HOUSE3_EventScript_Stones_Text_1
# 68 "data/maps/CLEARING_HOUSE3/scripts.pory"
	applymovement 1, GirlFaceDown
# 69 "data/maps/CLEARING_HOUSE3/scripts.pory"
	waitmovement 1
# 70 "data/maps/CLEARING_HOUSE3/scripts.pory"
	releaseall
	return


# 73 "data/maps/CLEARING_HOUSE3/scripts.pory"
GirlFacePlayer:
# 74 "data/maps/CLEARING_HOUSE3/scripts.pory"
	faceplayer
	step_end

# 77 "data/maps/CLEARING_HOUSE3/scripts.pory"
GirlFaceDown:
# 78 "data/maps/CLEARING_HOUSE3/scripts.pory"
	face_down
	step_end

CLEARING_HOUSE3_EventScript_Girl_Text_0:
# 9 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "Hmm?$"

CLEARING_HOUSE3_EventScript_Girl_Text_1:
# 10 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "Hello, there.$"

CLEARING_HOUSE3_EventScript_Girl_Text_2:
# 11 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "I bet you're interested in these\nrocks. Am I right?$"

CLEARING_HOUSE3_EventScript_Girl_Text_3:
# 12 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "I've been studying them, trying to\nfigure out what they are for.$"

CLEARING_HOUSE3_EventScript_Girl_Text_4:
# 13 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "Would you like to hear my findings?$"

CLEARING_HOUSE3_EventScript_Girl_Text_5:
# 15 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "...do you actually care, or do\nyou just want one for yourself?$"

CLEARING_HOUSE3_EventScript_Girl_Text_6:
# 17 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "...I kind of respect your honesty.$"

CLEARING_HOUSE3_EventScript_Girl_Text_7:
# 18 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "Here, I'll lend you one.$"

CLEARING_HOUSE3_EventScript_Girl_Text_8:
# 19 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "But indulge me for a second, alright?$"

CLEARING_HOUSE3_EventScript_Girl_Text_9:
# 21 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "Alright, then.$"

CLEARING_HOUSE3_EventScript_Girl_Text_10:
# 23 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "The first thing you'll notice about\nthe stones is their texture.$"

CLEARING_HOUSE3_EventScript_Girl_Text_11:
# 24 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "You can push your thumb into it and it\nwill recede back like some kind of dough.$"

CLEARING_HOUSE3_EventScript_Girl_Text_12:
# 25 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "Weird, right?$"

CLEARING_HOUSE3_EventScript_Girl_Text_13:
# 26 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "And you can feel a warmth eminating\nfrom the core.$"

CLEARING_HOUSE3_EventScript_Girl_Text_14:
# 27 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "I've tried to shatter it or slice it\ninto pieces, but even my sharpest and\pheaviest tools are useless.$"

CLEARING_HOUSE3_EventScript_Girl_Text_15:
# 28 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "Most things just sink into it.$"

CLEARING_HOUSE3_EventScript_Girl_Text_16:
# 29 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "It's almost like it doesn't want\nto be disturbed.$"

CLEARING_HOUSE3_EventScript_Girl_Text_17:
# 30 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "But that's not even the strangest part.$"

CLEARING_HOUSE3_EventScript_Girl_Text_18:
# 31 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "The other day I was taking a stroll\nthrough the village, and decided to stop\pby the hole.$"

CLEARING_HOUSE3_EventScript_Girl_Text_19:
# 32 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "I don't know why I did.$"

CLEARING_HOUSE3_EventScript_Girl_Text_20:
# 33 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "But when I stared down the hole, I\nfelt a warmth radiating from my pocket.$"

CLEARING_HOUSE3_EventScript_Girl_Text_21:
# 34 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "I pulled the stone out of my\npocket and saw it was glowing!$"

CLEARING_HOUSE3_EventScript_Girl_Text_22:
# 35 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "I had to shield my eyes from the\nbrightness.$"

CLEARING_HOUSE3_EventScript_Girl_Text_23:
# 36 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "I deduced that the stone was resonating\nwith the hole for some reason.$"

CLEARING_HOUSE3_EventScript_Girl_Text_24:
# 37 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "But I haven't been back there since then.$"

CLEARING_HOUSE3_EventScript_Girl_Text_25:
# 38 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "I could feel an aura coming from the hole.$"

CLEARING_HOUSE3_EventScript_Girl_Text_26:
# 39 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "It wanted me to throw down the rock.\nIt hungered for it.$"

CLEARING_HOUSE3_EventScript_Girl_Text_27:
# 40 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "I couldn't do it, though.$"

CLEARING_HOUSE3_EventScript_Girl_Text_28:
# 41 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "Something about it terrifies me.$"

CLEARING_HOUSE3_EventScript_Girl_Text_29:
# 42 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "So I've been conducting my research in here.$"

CLEARING_HOUSE3_EventScript_Girl_Text_30:
# 43 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "....thanks for hearing me out.$"

CLEARING_HOUSE3_EventScript_Girl_Text_31:
# 44 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "Honestly, I don't really have a use for\ntwo of these.$"

CLEARING_HOUSE3_EventScript_Girl_Text_32:
# 45 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "Here.$"

CLEARING_HOUSE3_EventScript_Girl_Text_33:
# 46 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "I hope you'll get more use out of\nit than me.$"

CLEARING_HOUSE3_EventScript_Girl_Text_34:
# 51 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "Ah.$"

CLEARING_HOUSE3_EventScript_Girl_Text_35:
# 52 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "Well, fair enough.$"

CLEARING_HOUSE3_EventScript_Girl_Text_36:
# 53 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "I'm afraid I don't have much\nelse to offer you, then.$"

CLEARING_HOUSE3_EventScript_Girl_Text_37:
# 56 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "I've told you all I know, I'm afraid.$"

CLEARING_HOUSE3_EventScript_Girl_Text_38:
# 57 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "I hope you get more use out of\nthat stone than I did.$"

CLEARING_HOUSE3_EventScript_Stones_Text_0:
# 66 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "Ah ah ah! Hey! Hands off!$"

CLEARING_HOUSE3_EventScript_Stones_Text_1:
# 67 "data/maps/CLEARING_HOUSE3/scripts.pory"
	.string "That's mine!$"
