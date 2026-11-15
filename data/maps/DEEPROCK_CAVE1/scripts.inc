# 1 "data/maps/DEEPROCK_CAVE1/scripts.pory"
DEEPROCK_CAVE1_MapScripts::
# 2 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	.byte 0

DEEPROCK_CAVE1_EventScript_Move_Dubois::
# 6 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	lockall
# 7 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	goto_if_unset FLAG_CAVE_DUBOIS, DEEPROCK_CAVE1_EventScript_Move_Dubois_2
DEEPROCK_CAVE1_EventScript_Move_Dubois_1:
# 14 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	releaseall
	return

DEEPROCK_CAVE1_EventScript_Move_Dubois_2:
# 8 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	applymovement 1, RUNUP_DUBOIS
# 9 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	waitmovement 1
# 10 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	removeobject 1
# 11 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	setflag FLAG_CAVE_DUBOIS
# 12 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	releaseall
	goto DEEPROCK_CAVE1_EventScript_Move_Dubois_1


# 17 "data/maps/DEEPROCK_CAVE1/scripts.pory"
RUNUP_DUBOIS:
# 18 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	face_up
# 19 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	walk_up
# 19 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	walk_up
# 19 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	walk_up
	step_end

DEEPROCK_CAVE1_EventScriptDoll::
# 23 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	lockall
# 24 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	msgbox DEEPROCK_CAVE1_EventScriptDoll_Text_0
# 25 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	msgbox DEEPROCK_CAVE1_EventScriptDoll_Text_1
# 26 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	checkitem ITEM_WELLSPRING_MASK
# 27 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DEEPROCK_CAVE1_EventScriptDoll_2
DEEPROCK_CAVE1_EventScriptDoll_1:
# 36 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	releaseall
	return

DEEPROCK_CAVE1_EventScriptDoll_2:
# 28 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	msgbox DEEPROCK_CAVE1_EventScriptDoll_Text_2, MSGBOX_YESNO
# 29 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DEEPROCK_CAVE1_EventScriptDoll_4
	goto DEEPROCK_CAVE1_EventScriptDoll_1

DEEPROCK_CAVE1_EventScriptDoll_4:
# 30 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	msgbox DEEPROCK_CAVE1_EventScriptDoll_Text_3
# 31 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	msgbox DEEPROCK_CAVE1_EventScriptDoll_Text_4
# 32 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	setflag FLAG_CAVE_DOLL
# 33 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	removeobject 7
	goto DEEPROCK_CAVE1_EventScriptDoll_1


DEEPROCK_CAVE1_EventScript_Move_Dubois2::
# 40 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	lockall
# 41 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	goto_if_unset FLAG_CAVE_DUBOIS2, DEEPROCK_CAVE1_EventScript_Move_Dubois2_2
DEEPROCK_CAVE1_EventScript_Move_Dubois2_1:
# 48 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	releaseall
	return

DEEPROCK_CAVE1_EventScript_Move_Dubois2_2:
# 42 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	applymovement 8, RUNUP_DUBOIS
# 43 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	waitmovement 8
# 44 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	removeobject 8
# 45 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	setflag FLAG_CAVE_DUBOIS2
# 46 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	releaseall
	goto DEEPROCK_CAVE1_EventScript_Move_Dubois2_1


DEEPROCK_CAVE1_EventScript_Ball1::
# 52 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	lockall
# 53 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	call Rummage_Common
# 54 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	setflag FLAG_CAVE_BALL1
# 55 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	removeobject 2
# 56 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	releaseall
	return


DEEPROCK_CAVE1_EventScript_Ball3::
# 60 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	lockall
# 61 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	call Rummage_Uncommon
# 62 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	setflag FLAG_CAVE_BALL3
# 63 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	removeobject 4
# 64 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	releaseall
	return


DEEPROCK_CAVE1_EventScript_Ball2::
# 68 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	lockall
# 69 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	call Rummage_Common
# 70 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	setflag FLAG_CAVE_BALL2
# 71 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	removeobject 3
# 72 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	releaseall
	return


DEEPROCK_CAVE1_EventScript_Hiker2::
# 76 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, SAWYER_INTRO, Generic_Outro
# 77 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	msgbox DEEPROCK_CAVE1_EventScript_Hiker2_Text_0
	return


DEEPROCK_CAVE1_EventScript_Hiker1::
# 86 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	trainerbattle_single TRAINER_CHIP, CHIP_INTRO, Generic_Outro
# 87 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	msgbox DEEPROCK_CAVE1_EventScript_Hiker2_Text_0
	return


DEEPROCK_CAVE1_EventScript_BlackBelt::
# 98 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, TAKAO_INTRO, Generic_Outro
# 99 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	msgbox DEEPROCK_CAVE1_EventScript_Hiker2_Text_0
	return


DEEPROCK_CAVE1_EventScript_CrushGirl::
# 108 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	trainerbattle_single TRAINER_HELENE, HELENE_INTRO, Generic_Outro
# 109 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	msgbox DEEPROCK_CAVE1_EventScript_Hiker2_Text_0
	return


DEEPROCK_CAVE1_EventScript_Gentleman::
# 118 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	trainerbattle_single TRAINER_THOMAS, THOMAS_INTRO, Generic_Outro
# 119 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	msgbox DEEPROCK_CAVE1_EventScript_Hiker2_Text_0
	return


DEEPROCK_CAVE1_EventScriptDoll_Text_0:
# 24 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	.string "(There is a giant statue of Regirock\nblocking the way.)$"

DEEPROCK_CAVE1_EventScriptDoll_Text_1:
# 25 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	.string "Looking closely, you can see a small\nkey slot.$"

DEEPROCK_CAVE1_EventScriptDoll_Text_2:
# 28 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	.string "Insert the Rocky Key?$"

DEEPROCK_CAVE1_EventScriptDoll_Text_3:
# 30 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	.string "You inserted the key into the statue.$"

DEEPROCK_CAVE1_EventScriptDoll_Text_4:
# 31 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	.string "It's disappearing..!$"

DEEPROCK_CAVE1_EventScript_Hiker2_Text_0:
# 77 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	.string "Sorry.$"

SAWYER_INTRO::
# 80 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	.string "I'M HAPPILY SURROUNDED BY HOT PEOPLE\n"
	.string "AROUND THESE PARTS. I WON'T LOSE!$"

CHIP_INTRO::
# 90 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	.string "WHO MIGHT YOU BE?\p"
	.string "ARE YOU PERHAPS SEARCHING FOR ANCIENT\n"
	.string "RUINS THAT ARE RUMORED TO POSSIBLY\l"
	.string "EXIST ACCORDING TO LEGENDS?$"

TAKAO_INTRO::
# 102 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	.string "MIGHT IS RIGHT!\n"
	.string "COME ON$"

HELENE_INTRO::
# 112 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	.string "MY POKéMON HAVE BLACK BELT-LEVEL\n"
	.string "STRENGTH!$"

THOMAS_INTRO::
# 122 "data/maps/DEEPROCK_CAVE1/scripts.pory"
	.string "OHO...NEVER LET DOWN YOUR GUARD!$"
