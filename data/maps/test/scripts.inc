# 1 "data/maps/test/scripts.pory"
test_MapScripts::
# 2 "data/maps/test/scripts.pory"
	.byte 0

test_EventScript_dubois2::
# 6 "data/maps/test/scripts.pory"
	lockall
# 7 "data/maps/test/scripts.pory"
	goto_if_unset FLAG_DUBOIS_OPENER, test_EventScript_dubois2_2
# 29 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_19
# 30 "data/maps/test/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_VR_5, DUBOIS_OUTRO
test_EventScript_dubois2_1:
# 32 "data/maps/test/scripts.pory"
	releaseall
	return

test_EventScript_dubois2_2:
# 8 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_0
# 9 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_1
# 10 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_2
# 11 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_3
# 12 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_4
# 13 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_5
# 14 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_6
# 15 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_7
# 16 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_8
# 17 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_9
# 18 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_10
# 19 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_11
# 20 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_12
# 21 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_13
# 22 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_14
# 23 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_15
# 24 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_16
# 25 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_17
# 26 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_18
# 27 "data/maps/test/scripts.pory"
	setflag FLAG_DUBOIS_OPENER
	goto test_EventScript_dubois2_1


DUBOIS_POST::
	return


# 42 "data/maps/test/scripts.pory"
faceatplayer:
# 43 "data/maps/test/scripts.pory"
	face_down
# 44 "data/maps/test/scripts.pory"
	walk_down
	step_end

test_EventScript_dubois::
# 48 "data/maps/test/scripts.pory"
	lockall
# 49 "data/maps/test/scripts.pory"
	goto_if_unset FLAG_DUBOIS_OPENER, test_EventScript_dubois_2
# 61 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_19
# 62 "data/maps/test/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_VR_5, DUBOIS_OUTRO
test_EventScript_dubois_1:
# 64 "data/maps/test/scripts.pory"
	releaseall
	return

test_EventScript_dubois_2:
# 50 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois_Text_0
# 51 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois_Text_1
# 52 "data/maps/test/scripts.pory"
	applymovement 1, faceatplayer
# 53 "data/maps/test/scripts.pory"
	waitmovement 1
# 54 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois_Text_2
# 55 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_14
# 56 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois_Text_3
# 57 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_17
# 58 "data/maps/test/scripts.pory"
	msgbox test_EventScript_dubois2_Text_18
# 59 "data/maps/test/scripts.pory"
	setflag FLAG_DUBOIS_OPENER
	goto test_EventScript_dubois_1


test_EventScript_dubois2_Text_0:
# 8 "data/maps/test/scripts.pory"
	.string "Ah...it's you.$"

test_EventScript_dubois2_Text_1:
# 9 "data/maps/test/scripts.pory"
	.string "I don't believe we've been formally\nintroduced.$"

test_EventScript_dubois2_Text_2:
# 10 "data/maps/test/scripts.pory"
	.string "My name is DUBOIS.$"

test_EventScript_dubois2_Text_3:
# 11 "data/maps/test/scripts.pory"
	.string "And your name...'{PLAYER}'$"

test_EventScript_dubois2_Text_4:
# 12 "data/maps/test/scripts.pory"
	.string "What a nice name.$"

test_EventScript_dubois2_Text_5:
# 13 "data/maps/test/scripts.pory"
	.string "I have been tracking you, watching you.$"

test_EventScript_dubois2_Text_6:
# 14 "data/maps/test/scripts.pory"
	.string "Observing you, and how you respond\nto your enviromnent$"

test_EventScript_dubois2_Text_7:
# 15 "data/maps/test/scripts.pory"
	.string "It is clear to me your goal is to reach\nthe end.$"

test_EventScript_dubois2_Text_8:
# 16 "data/maps/test/scripts.pory"
	.string "And, as a result, reach the truth.$"

test_EventScript_dubois2_Text_9:
# 17 "data/maps/test/scripts.pory"
	.string "But, what you might not know, is\nthat at the bottom there's only room\pfor one.$"

test_EventScript_dubois2_Text_10:
# 18 "data/maps/test/scripts.pory"
	.string "And so I have come to my conclusion.$"

test_EventScript_dubois2_Text_11:
# 19 "data/maps/test/scripts.pory"
	.string "Your prescence here...and\nyour mission...are a threat to\pLady Yan.$"

test_EventScript_dubois2_Text_12:
# 20 "data/maps/test/scripts.pory"
	.string "So, I will give you a chance to step\nback.$"

test_EventScript_dubois2_Text_13:
# 21 "data/maps/test/scripts.pory"
	.string "Go, live your life, and be happy,\nand prosper.$"

test_EventScript_dubois2_Text_14:
# 22 "data/maps/test/scripts.pory"
	.string "I mean no offense, but this world\nis better off without your intervention.$"

test_EventScript_dubois2_Text_15:
# 23 "data/maps/test/scripts.pory"
	.string "I'll put it bluntly: You have no\nidea what you are doing.$"

test_EventScript_dubois2_Text_16:
# 24 "data/maps/test/scripts.pory"
	.string "So again I ask, just go home.$"

test_EventScript_dubois2_Text_17:
# 25 "data/maps/test/scripts.pory"
	.string "Take one step further, and I\nwill have to intervene myself.$"

test_EventScript_dubois2_Text_18:
# 26 "data/maps/test/scripts.pory"
	.string "That is all.$"

test_EventScript_dubois2_Text_19:
# 29 "data/maps/test/scripts.pory"
	.string "..so be it.$"

test_EventScript_dubois_Text_0:
# 50 "data/maps/test/scripts.pory"
	.string "...$"

test_EventScript_dubois_Text_1:
# 51 "data/maps/test/scripts.pory"
	.string "(The mysterious man stands before you.)$"

test_EventScript_dubois_Text_2:
# 54 "data/maps/test/scripts.pory"
	.string "You have no idea what you are\ndoing.$"

test_EventScript_dubois_Text_3:
# 56 "data/maps/test/scripts.pory"
	.string "Just go home.$"

DUBOIS_OUTRO::
# 35 "data/maps/test/scripts.pory"
	.string "....$"
