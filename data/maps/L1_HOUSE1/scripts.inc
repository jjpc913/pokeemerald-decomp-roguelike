# 1 "data/maps/L1_HOUSE1/scripts.pory"
L1_HOUSE1_MapScripts::
# 2 "data/maps/L1_HOUSE1/scripts.pory"
	.byte 0

L1HOUSE_EventScript_Cabinet1::
# 6 "data/maps/L1_HOUSE1/scripts.pory"
	lockall
# 7 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1HOUSE_EventScript_Cabinet1_Text_0
# 8 "data/maps/L1_HOUSE1/scripts.pory"
	goto_if_set FLAG_CABINET3, L1HOUSE_EventScript_Cabinet1_1
# 11 "data/maps/L1_HOUSE1/scripts.pory"
	call Rummage_Common
# 12 "data/maps/L1_HOUSE1/scripts.pory"
	setflag FLAG_CABINET3
	return

L1HOUSE_EventScript_Cabinet1_1:
# 9 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1HOUSE_EventScript_Cabinet1_Text_1
	return


L1HOUSE_EventScript_Cabine2::
# 17 "data/maps/L1_HOUSE1/scripts.pory"
	lockall
# 18 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1HOUSE_EventScript_Cabinet1_Text_0
# 19 "data/maps/L1_HOUSE1/scripts.pory"
	goto_if_set FLAG_CABINET4, L1HOUSE_EventScript_Cabine2_2
# 22 "data/maps/L1_HOUSE1/scripts.pory"
	call Rummage_Uncommon
# 23 "data/maps/L1_HOUSE1/scripts.pory"
	setflag FLAG_CABINET4
L1HOUSE_EventScript_Cabine2_1:
# 26 "data/maps/L1_HOUSE1/scripts.pory"
	releaseall
	return

L1HOUSE_EventScript_Cabine2_2:
# 20 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1HOUSE_EventScript_Cabinet1_Text_1
	goto L1HOUSE_EventScript_Cabine2_1


L1_HOUSE1_EventScript_Girl::
# 30 "data/maps/L1_HOUSE1/scripts.pory"
	lockall
# 31 "data/maps/L1_HOUSE1/scripts.pory"
	faceplayer
# 32 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_Girl_Text_0
# 33 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_Girl_Text_1
# 34 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_Girl_Text_2
# 35 "data/maps/L1_HOUSE1/scripts.pory"
	goto_if_set FLAG_ROBBED, L1_HOUSE1_EventScript_Girl_2
L1_HOUSE1_EventScript_Girl_1:
# 45 "data/maps/L1_HOUSE1/scripts.pory"
	releaseall
	return

L1_HOUSE1_EventScript_Girl_2:
# 36 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_Girl_Text_3
# 37 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_Girl_Text_4, MSGBOX_YESNO
# 38 "data/maps/L1_HOUSE1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq L1_HOUSE1_EventScript_Girl_4
	goto L1_HOUSE1_EventScript_Girl_1

L1_HOUSE1_EventScript_Girl_4:
# 39 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_Girl_Text_5
# 40 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_Girl_Text_6
# 41 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox L1_HOUSE1_EventScript_Girl_Text_7
# 42 "data/maps/L1_HOUSE1/scripts.pory"
	trainerbattle_single TRAINER_JOHANNA, JohannaOpening, JohannaOutro, JohannaPost
	goto L1_HOUSE1_EventScript_Girl_1


JohannaPost::
# 57 "data/maps/L1_HOUSE1/scripts.pory"
	removeobject 1
# 58 "data/maps/L1_HOUSE1/scripts.pory"
	setflag FLAG_ROBBED
# 59 "data/maps/L1_HOUSE1/scripts.pory"
	msgbox JohannaPost_Text_0
# 60 "data/maps/L1_HOUSE1/scripts.pory"
	addmoney 1
	return


L1_HOUSE1_EventScript_Bed::
# 65 "data/maps/L1_HOUSE1/scripts.pory"
	lockall
# 66 "data/maps/L1_HOUSE1/scripts.pory"
	call Script_Save
# 67 "data/maps/L1_HOUSE1/scripts.pory"
	checkmoney 1
# 68 "data/maps/L1_HOUSE1/scripts.pory"
	goto_if_unset FLAG_ROBBED, L1_HOUSE1_EventScript_Bed_2
L1_HOUSE1_EventScript_Bed_1:
# 74 "data/maps/L1_HOUSE1/scripts.pory"
	releaseall
	return

L1_HOUSE1_EventScript_Bed_2:
# 69 "data/maps/L1_HOUSE1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq L1_HOUSE1_EventScript_Bed_4
	goto L1_HOUSE1_EventScript_Bed_1

L1_HOUSE1_EventScript_Bed_4:
# 70 "data/maps/L1_HOUSE1/scripts.pory"
	removemoney 9999
# 71 "data/maps/L1_HOUSE1/scripts.pory"
	setflag FLAG_ROBBED
	goto L1_HOUSE1_EventScript_Bed_1


L1HOUSE_EventScript_Cabinet1_Text_0:
# 7 "data/maps/L1_HOUSE1/scripts.pory"
	.string "You rummage through the cabinet...$"

L1HOUSE_EventScript_Cabinet1_Text_1:
# 9 "data/maps/L1_HOUSE1/scripts.pory"
	.string "...but there's nothing left.$"

L1_HOUSE1_EventScript_Girl_Text_0:
# 32 "data/maps/L1_HOUSE1/scripts.pory"
	.string "It's dangerous outside.$"

L1_HOUSE1_EventScript_Girl_Text_1:
# 33 "data/maps/L1_HOUSE1/scripts.pory"
	.string "Feel free to rest here, traveler.$"

L1_HOUSE1_EventScript_Girl_Text_2:
# 34 "data/maps/L1_HOUSE1/scripts.pory"
	.string "You can use the bed to SAVE.$"

L1_HOUSE1_EventScript_Girl_Text_3:
# 36 "data/maps/L1_HOUSE1/scripts.pory"
	.string "(You notice something shiny\nin the woman's pocket.)$"

L1_HOUSE1_EventScript_Girl_Text_4:
# 37 "data/maps/L1_HOUSE1/scripts.pory"
	.string "(Confront her?)$"

L1_HOUSE1_EventScript_Girl_Text_5:
# 39 "data/maps/L1_HOUSE1/scripts.pory"
	.string "Hm? What's up?$"

L1_HOUSE1_EventScript_Girl_Text_6:
# 40 "data/maps/L1_HOUSE1/scripts.pory"
	.string "(You pad your hands on your pockets\nand realize your money is gone.)$"

L1_HOUSE1_EventScript_Girl_Text_7:
# 41 "data/maps/L1_HOUSE1/scripts.pory"
	.string "What are you doing?$"

JohannaPost_Text_0:
# 59 "data/maps/L1_HOUSE1/scripts.pory"
	.string "(You aren't sure where the rest\nwent, but you recovered 1 dollar.)$"

JohannaOpening::
# 48 "data/maps/L1_HOUSE1/scripts.pory"
	.string "This? Oh, it's...!$"

JohannaOutro::
# 52 "data/maps/L1_HOUSE1/scripts.pory"
	.string "Bastard...$"
