L1_HOUSE1_MapScripts::
# 2 "data/maps/L1_HOUSE1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, L1_HOUSE1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

L1_HOUSE1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/L1_HOUSE1/scripts.pory"
	goto_if_set FLAG_ROBBED, L1_HOUSE1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 6 "data/maps/L1_HOUSE1/scripts.pory"
	setflag FLAG_PRANKED
	return

L1_HOUSE1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/L1_HOUSE1/scripts.pory"
	clearflag FLAG_PRANKED
	return


L1HOUSE_EventScript_Cabinet1::
# 12 "data/maps/L1_HOUSE1/scripts.pory"
	lockall
# 13 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1HOUSE_EventScript_Cabinet1_Text_0
# 14 "data/maps/L1_HOUSE1/scripts.pory"
	goto_if_set FLAG_CABINET3, L1HOUSE_EventScript_Cabinet1_1
# 17 "data/maps/L1_HOUSE1/scripts.pory"
	call Rummage_Common
# 18 "data/maps/L1_HOUSE1/scripts.pory"
	setflag FLAG_CABINET3
	return

L1HOUSE_EventScript_Cabinet1_1:
# 15 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1HOUSE_EventScript_Cabinet1_Text_1
	return


L1HOUSE_EventScript_Cabine2::
# 23 "data/maps/L1_HOUSE1/scripts.pory"
	lockall
# 24 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1HOUSE_EventScript_Cabinet1_Text_0
# 25 "data/maps/L1_HOUSE1/scripts.pory"
	goto_if_set FLAG_CABINET4, L1HOUSE_EventScript_Cabine2_2
# 28 "data/maps/L1_HOUSE1/scripts.pory"
	call Rummage_Uncommon
# 29 "data/maps/L1_HOUSE1/scripts.pory"
	setflag FLAG_CABINET4
L1HOUSE_EventScript_Cabine2_1:
# 32 "data/maps/L1_HOUSE1/scripts.pory"
	releaseall
	return

L1HOUSE_EventScript_Cabine2_2:
# 26 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1HOUSE_EventScript_Cabinet1_Text_1
	goto L1HOUSE_EventScript_Cabine2_1


L1_HOUSE1_EventScript_Girl::
# 36 "data/maps/L1_HOUSE1/scripts.pory"
	lockall
# 37 "data/maps/L1_HOUSE1/scripts.pory"
	faceplayer
# 38 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_Girl_Text_0
# 39 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_Girl_Text_1
# 40 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_Girl_Text_2
# 41 "data/maps/L1_HOUSE1/scripts.pory"
	goto_if_set FLAG_ROBBED, L1_HOUSE1_EventScript_Girl_2
L1_HOUSE1_EventScript_Girl_1:
# 51 "data/maps/L1_HOUSE1/scripts.pory"
	releaseall
	return

L1_HOUSE1_EventScript_Girl_2:
# 42 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_Girl_Text_3
# 43 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_Girl_Text_4, MSGBOX_YESNO
# 44 "data/maps/L1_HOUSE1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq L1_HOUSE1_EventScript_Girl_4
	goto L1_HOUSE1_EventScript_Girl_1

L1_HOUSE1_EventScript_Girl_4:
# 45 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_Girl_Text_5
# 46 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_Girl_Text_6
# 47 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_Girl_Text_7
# 48 "data/maps/L1_HOUSE1/scripts.pory"
	trainerbattle_single TRAINER_JOHANNA, JohannaOpening, JohannaOutro, JohannaPost
	goto L1_HOUSE1_EventScript_Girl_1


JohannaPost::
# 63 "data/maps/L1_HOUSE1/scripts.pory"
	removeobject 1
# 64 "data/maps/L1_HOUSE1/scripts.pory"
	setflag FLAG_ROBBED
# 65 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox JohannaPost_Text_0
# 66 "data/maps/L1_HOUSE1/scripts.pory"
	addmoney 1000
# 67 "data/maps/L1_HOUSE1/scripts.pory"
	releaseall
	return


L1_HOUSE1_EventScript_Bed::
# 71 "data/maps/L1_HOUSE1/scripts.pory"
	lockall
# 72 "data/maps/L1_HOUSE1/scripts.pory"
	showobjectat 9, MAP_LAYER1_MAINAREA
# 73 "data/maps/L1_HOUSE1/scripts.pory"
	call Script_Save
# 74 "data/maps/L1_HOUSE1/scripts.pory"
	checkmoney 1
# 75 "data/maps/L1_HOUSE1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq L1_HOUSE1_EventScript_Bed_2
L1_HOUSE1_EventScript_Bed_1:
# 83 "data/maps/L1_HOUSE1/scripts.pory"
	releaseall
	return

L1_HOUSE1_EventScript_Bed_2:
# 76 "data/maps/L1_HOUSE1/scripts.pory"
	goto_if_unset FLAG_ROBBED, L1_HOUSE1_EventScript_Bed_4
	goto L1_HOUSE1_EventScript_Bed_1

L1_HOUSE1_EventScript_Bed_4:
# 77 "data/maps/L1_HOUSE1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq L1_HOUSE1_EventScript_Bed_6
	goto L1_HOUSE1_EventScript_Bed_1

L1_HOUSE1_EventScript_Bed_6:
# 78 "data/maps/L1_HOUSE1/scripts.pory"
	removemoney 9999
# 79 "data/maps/L1_HOUSE1/scripts.pory"
	setflag FLAG_ROBBED
	goto L1_HOUSE1_EventScript_Bed_1


L1_HOUSE1_EventScript_GetPranked::
# 87 "data/maps/L1_HOUSE1/scripts.pory"
	lockall
# 88 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_GetPranked_Text_0
# 89 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_GetPranked_Text_1
# 90 "data/maps/L1_HOUSE1/scripts.pory"
	removeobject 2
# 91 "data/maps/L1_HOUSE1/scripts.pory"
	setflag FLAG_PRANKED
# 92 "data/maps/L1_HOUSE1/scripts.pory"
	releaseall
	return


L1HOUSE_EventScript_Cabinet1_Text_0:
# 13 "data/maps/L1_HOUSE1/scripts.pory"
	.string "You rummage through the cabinet...$"

L1HOUSE_EventScript_Cabinet1_Text_1:
# 15 "data/maps/L1_HOUSE1/scripts.pory"
	.string "...but there's nothing left.$"

L1_HOUSE1_EventScript_Girl_Text_0:
# 38 "data/maps/L1_HOUSE1/scripts.pory"
	.string "It's dangerous outside.$"

L1_HOUSE1_EventScript_Girl_Text_1:
# 39 "data/maps/L1_HOUSE1/scripts.pory"
	.string "Feel free to rest here, traveler.$"

L1_HOUSE1_EventScript_Girl_Text_2:
# 40 "data/maps/L1_HOUSE1/scripts.pory"
	.string "You can use the bed to SAVE.$"

L1_HOUSE1_EventScript_Girl_Text_3:
# 42 "data/maps/L1_HOUSE1/scripts.pory"
	.string "(You notice something shiny\nin the woman's pocket.)$"

L1_HOUSE1_EventScript_Girl_Text_4:
# 43 "data/maps/L1_HOUSE1/scripts.pory"
	.string "(Confront her?)$"

L1_HOUSE1_EventScript_Girl_Text_5:
# 45 "data/maps/L1_HOUSE1/scripts.pory"
	.string "Hm? What's up?$"

L1_HOUSE1_EventScript_Girl_Text_6:
# 46 "data/maps/L1_HOUSE1/scripts.pory"
	.string "(You pad your hands on your pockets\nand realize your money is gone.)$"

L1_HOUSE1_EventScript_Girl_Text_7:
# 47 "data/maps/L1_HOUSE1/scripts.pory"
	.string "Hmm?$"

JohannaPost_Text_0:
# 65 "data/maps/L1_HOUSE1/scripts.pory"
	.string "(You aren't sure where the rest\nwent, but you recovered 1000 dollars.)$"

L1_HOUSE1_EventScript_GetPranked_Text_0:
# 88 "data/maps/L1_HOUSE1/scripts.pory"
	.string "The Pokeball has a note in it.$"

L1_HOUSE1_EventScript_GetPranked_Text_1:
# 89 "data/maps/L1_HOUSE1/scripts.pory"
	.string "'Thanks for the money, sucker!'$"

JohannaOpening::
# 54 "data/maps/L1_HOUSE1/scripts.pory"
	.string "This? Oh, it's...!$"

JohannaOutro::
# 58 "data/maps/L1_HOUSE1/scripts.pory"
	.string "Bastard...$"
