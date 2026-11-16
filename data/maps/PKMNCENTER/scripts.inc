# 1 "data/maps/PKMNCENTER/scripts.pory"
PKMNCENTER_MapScripts::
# 2 "data/maps/PKMNCENTER/scripts.pory"
	.byte 0

PKMNCENTER_EventScript_PC::
# 5 "data/maps/PKMNCENTER/scripts.pory"
	lockall
# 6 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_PC_Text_0
# 7 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_PC_Text_1
# 8 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
	return


PKMNCENTER_EventScript_Healing::
# 12 "data/maps/PKMNCENTER/scripts.pory"
	lockall
# 13 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Healing_Text_0
# 14 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
	return


PKMNCENTER_EventScript_Map::
# 18 "data/maps/PKMNCENTER/scripts.pory"
	lockall
# 19 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Map_Text_0
# 20 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
	return


PKMNCENTER_EventScript_Yan::
# 25 "data/maps/PKMNCENTER/scripts.pory"
	lockall
# 26 "data/maps/PKMNCENTER/scripts.pory"
	faceplayer
# 27 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_unset FLAG_TALKED_TO_YAN_PC, PKMNCENTER_EventScript_Yan_2
# 40 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_8
PKMNCENTER_EventScript_Yan_1:
# 42 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_9
# 43 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_set FLAG_DEFAULT_YAN, PKMNCENTER_EventScript_Yan_6
PKMNCENTER_EventScript_Yan_5:
# 47 "data/maps/PKMNCENTER/scripts.pory"
	faceplayer
# 48 "data/maps/PKMNCENTER/scripts.pory"
	switch VAR_RESULT
# 49 "data/maps/PKMNCENTER/scripts.pory"
	case 0, PKMNCENTER_EventScript_Yan_9
# 67 "data/maps/PKMNCENTER/scripts.pory"
	case 1, PKMNCENTER_EventScript_Yan_10
# 97 "data/maps/PKMNCENTER/scripts.pory"
	case 2, PKMNCENTER_EventScript_Yan_11
# 104 "data/maps/PKMNCENTER/scripts.pory"
	case 3, PKMNCENTER_EventScript_Yan_12
# 147 "data/maps/PKMNCENTER/scripts.pory"
	case 4, PKMNCENTER_EventScript_Yan_13
# 176 "data/maps/PKMNCENTER/scripts.pory"
	case 5, PKMNCENTER_EventScript_Yan_14
# 182 "data/maps/PKMNCENTER/scripts.pory"
	case 127, PKMNCENTER_EventScript_Yan_15
	return

PKMNCENTER_EventScript_Yan_2:
# 28 "data/maps/PKMNCENTER/scripts.pory"
	setflag FLAG_TALKED_TO_YAN_PC
# 29 "data/maps/PKMNCENTER/scripts.pory"
	setvar VAR_GIRL_OPTION, 1
# 30 "data/maps/PKMNCENTER/scripts.pory"
	setvar VAR_YOU_OPTION, 1
# 31 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_0
# 32 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_1
# 33 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_2
# 34 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_3
# 35 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_4
# 36 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_5
# 37 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_6
# 38 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_7
	goto PKMNCENTER_EventScript_Yan_1

PKMNCENTER_EventScript_Yan_6:
# 44 "data/maps/PKMNCENTER/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, PKMNCENTER_EventScript_Yan_Text_10, PKMNCENTER_EventScript_Yan_Text_11, PKMNCENTER_EventScript_Yan_Text_12, PKMNCENTER_EventScript_Yan_Text_13, PKMNCENTER_EventScript_Yan_Text_14, PKMNCENTER_EventScript_Yan_Text_15
	goto PKMNCENTER_EventScript_Yan_5

PKMNCENTER_EventScript_Yan_9:
# 50 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_unset FLAG_TALKED_BUSINESS_CARD, PKMNCENTER_EventScript_Yan_17
# 55 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_set FLAG_TALKED_BUSINESS_CARD, PKMNCENTER_EventScript_Yan_20
PKMNCENTER_EventScript_Yan_19:
# 62 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_23
PKMNCENTER_EventScript_Yan_16:
# 64 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 65 "data/maps/PKMNCENTER/scripts.pory"
	face_right
	return

PKMNCENTER_EventScript_Yan_10:
# 68 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_unset FLAG_TALKED_MAP, PKMNCENTER_EventScript_Yan_25
# 81 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_set FLAG_TALKED_MAP, PKMNCENTER_EventScript_Yan_28
PKMNCENTER_EventScript_Yan_27:
# 92 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_23
PKMNCENTER_EventScript_Yan_24:
# 94 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 95 "data/maps/PKMNCENTER/scripts.pory"
	face_right
	return

PKMNCENTER_EventScript_Yan_11:
# 98 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_41
# 99 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_42
# 100 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_43
# 101 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 102 "data/maps/PKMNCENTER/scripts.pory"
	face_right
	return

PKMNCENTER_EventScript_Yan_12:
# 105 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 2
	goto_if_ge PKMNCENTER_EventScript_Yan_51
PKMNCENTER_EventScript_Yan_49:
# 108 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 4
	goto_if_ge PKMNCENTER_EventScript_Yan_48
PKMNCENTER_EventScript_Yan_46:
# 111 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 6
	goto_if_ge PKMNCENTER_EventScript_Yan_45
PKMNCENTER_EventScript_Yan_43:
# 114 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 8
	goto_if_ge PKMNCENTER_EventScript_Yan_42
PKMNCENTER_EventScript_Yan_41:
# 118 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 10
	goto_if_eq PKMNCENTER_EventScript_Yan_37
# 136 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 99
	goto_if_eq PKMNCENTER_EventScript_Yan_38
# 140 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_58
# 141 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
PKMNCENTER_EventScript_Yan_32:
# 144 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 145 "data/maps/PKMNCENTER/scripts.pory"
	face_right
	return

PKMNCENTER_EventScript_Yan_13:
# 148 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_YOU_OPTION, 1
	goto_if_eq PKMNCENTER_EventScript_Yan_55
# 156 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_YOU_OPTION, 2
	goto_if_eq PKMNCENTER_EventScript_Yan_56
# 164 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_YOU_OPTION, 3
	goto_if_eq PKMNCENTER_EventScript_Yan_57
# 171 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_23
PKMNCENTER_EventScript_Yan_54:
# 173 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 174 "data/maps/PKMNCENTER/scripts.pory"
	face_right
	return

PKMNCENTER_EventScript_Yan_14:
# 179 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_74
# 180 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_75
	return

PKMNCENTER_EventScript_Yan_15:
# 183 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_76
# 184 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_77
# 185 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 186 "data/maps/PKMNCENTER/scripts.pory"
	face_right
	return

PKMNCENTER_EventScript_Yan_17:
# 51 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_16
# 52 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_17
# 53 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_18
# 54 "data/maps/PKMNCENTER/scripts.pory"
	setflag FLAG_TALKED_BUSINESS_CARD
	goto PKMNCENTER_EventScript_Yan_16

PKMNCENTER_EventScript_Yan_18:
# 56 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_19
# 57 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_20
# 58 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_21
# 59 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_22
# 60 "data/maps/PKMNCENTER/scripts.pory"
	setflag FLAG_TALKED_BUSINESS_CARD_2
	goto PKMNCENTER_EventScript_Yan_16

PKMNCENTER_EventScript_Yan_20:
# 55 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_unset FLAG_TALKED_BUSINESS_CARD_2, PKMNCENTER_EventScript_Yan_18
	goto PKMNCENTER_EventScript_Yan_19

PKMNCENTER_EventScript_Yan_25:
# 69 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_24
# 70 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_25
# 71 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_26
# 72 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_27
# 73 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_28
# 74 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_29
# 75 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_30
# 76 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_31
# 77 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_32
# 78 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_33
# 79 "data/maps/PKMNCENTER/scripts.pory"
	setflag FLAG_TALKED_MAP
	goto PKMNCENTER_EventScript_Yan_24

PKMNCENTER_EventScript_Yan_26:
# 82 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_34
# 83 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_35
# 84 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_36
# 85 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_37
# 86 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_38
# 87 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_39
# 88 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_40
# 89 "data/maps/PKMNCENTER/scripts.pory"
	setflag FLAG_TALKED_MAP_2
	goto PKMNCENTER_EventScript_Yan_24

PKMNCENTER_EventScript_Yan_28:
# 81 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_unset FLAG_TALKED_MAP_2, PKMNCENTER_EventScript_Yan_26
	goto PKMNCENTER_EventScript_Yan_27

PKMNCENTER_EventScript_Yan_33:
# 106 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_44
# 107 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
	goto PKMNCENTER_EventScript_Yan_32

PKMNCENTER_EventScript_Yan_34:
# 109 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_45
# 110 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
	goto PKMNCENTER_EventScript_Yan_32

PKMNCENTER_EventScript_Yan_35:
# 112 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_46
# 113 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
	goto PKMNCENTER_EventScript_Yan_32

PKMNCENTER_EventScript_Yan_36:
# 115 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_47
# 116 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
	goto PKMNCENTER_EventScript_Yan_32

PKMNCENTER_EventScript_Yan_37:
# 119 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_48
# 120 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_49, MSGBOX_YESNO
# 121 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PKMNCENTER_EventScript_Yan_63
# 126 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_50
# 127 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_51
# 128 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_52
# 129 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_53
# 130 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_54
# 131 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_55
# 132 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_56
# 134 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_VENOM, 5
# 135 "data/maps/PKMNCENTER/scripts.pory"
	setvar VAR_GIRL_OPTION, 99
	goto PKMNCENTER_EventScript_Yan_32

PKMNCENTER_EventScript_Yan_38:
# 137 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_23
# 138 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_57
	goto PKMNCENTER_EventScript_Yan_32

PKMNCENTER_EventScript_Yan_42:
# 114 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 9
	goto_if_le PKMNCENTER_EventScript_Yan_36
	goto PKMNCENTER_EventScript_Yan_41

PKMNCENTER_EventScript_Yan_45:
# 111 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 8
	goto_if_lt PKMNCENTER_EventScript_Yan_35
	goto PKMNCENTER_EventScript_Yan_43

PKMNCENTER_EventScript_Yan_48:
# 108 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 6
	goto_if_lt PKMNCENTER_EventScript_Yan_34
	goto PKMNCENTER_EventScript_Yan_46

PKMNCENTER_EventScript_Yan_51:
# 105 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 4
	goto_if_lt PKMNCENTER_EventScript_Yan_33
	goto PKMNCENTER_EventScript_Yan_49

PKMNCENTER_EventScript_Yan_55:
# 149 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_59
# 150 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_60
# 151 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_61
# 152 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_62
# 153 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_63
# 154 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_YOU_OPTION, 1
	goto PKMNCENTER_EventScript_Yan_54

PKMNCENTER_EventScript_Yan_56:
# 157 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_64
# 158 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_65
# 159 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_66
# 160 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_67
# 161 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_68
# 162 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_69
# 163 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_YOU_OPTION, 1
	goto PKMNCENTER_EventScript_Yan_54

PKMNCENTER_EventScript_Yan_57:
# 165 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_70
# 166 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_71
# 167 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_72
# 168 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_73
# 169 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_YOU_OPTION, 1
	goto PKMNCENTER_EventScript_Yan_54

PKMNCENTER_EventScript_Yan_63:
# 122 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 123 "data/maps/PKMNCENTER/scripts.pory"
	face_right
	return


# 195 "data/maps/PKMNCENTER/scripts.pory"
yanfaceright:
# 196 "data/maps/PKMNCENTER/scripts.pory"
	face_down
	step_end

PKMNCENTER_EventScript_PC_Text_0:
# 6 "data/maps/PKMNCENTER/scripts.pory"
	.string "(The PC is turned off.)$"

PKMNCENTER_EventScript_PC_Text_1:
# 7 "data/maps/PKMNCENTER/scripts.pory"
	.string "There is a thick layer of dust\nover the keyboard.$"

PKMNCENTER_EventScript_Healing_Text_0:
# 13 "data/maps/PKMNCENTER/scripts.pory"
	.string "(It seems the healing device is\npowered off.)$"

PKMNCENTER_EventScript_Map_Text_0:
# 19 "data/maps/PKMNCENTER/scripts.pory"
	.string "It's a map of North America.$"

PKMNCENTER_EventScript_Yan_Text_0:
# 31 "data/maps/PKMNCENTER/scripts.pory"
	.string "Oh, hey, {PLAYER}.$"

PKMNCENTER_EventScript_Yan_Text_1:
# 32 "data/maps/PKMNCENTER/scripts.pory"
	.string "Good to see you again.$"

PKMNCENTER_EventScript_Yan_Text_2:
# 33 "data/maps/PKMNCENTER/scripts.pory"
	.string "I'm just taking a break...from\ninvestigating.$"

PKMNCENTER_EventScript_Yan_Text_3:
# 34 "data/maps/PKMNCENTER/scripts.pory"
	.string "Hah...sorry.$"

PKMNCENTER_EventScript_Yan_Text_4:
# 35 "data/maps/PKMNCENTER/scripts.pory"
	.string "I feel like my body is shutting down or something.$"

PKMNCENTER_EventScript_Yan_Text_5:
# 36 "data/maps/PKMNCENTER/scripts.pory"
	.string "I'm so tired...hah.$"

PKMNCENTER_EventScript_Yan_Text_6:
# 37 "data/maps/PKMNCENTER/scripts.pory"
	.string "I'll be staying here for a bit...\nwhile I rest up.$"

PKMNCENTER_EventScript_Yan_Text_7:
# 38 "data/maps/PKMNCENTER/scripts.pory"
	.string "In the meantime, I'd be happy to\ntalk to you about anything.$"

PKMNCENTER_EventScript_Yan_Text_8:
# 40 "data/maps/PKMNCENTER/scripts.pory"
	.string "Hey, {PLAYER}.$"

PKMNCENTER_EventScript_Yan_Text_9:
# 42 "data/maps/PKMNCENTER/scripts.pory"
	.string "What'd you want to talk about?$"

PKMNCENTER_EventScript_Yan_Text_10:
# 44 "data/maps/PKMNCENTER/scripts.pory"
	.string "Business Card$"

PKMNCENTER_EventScript_Yan_Text_11:
# 44 "data/maps/PKMNCENTER/scripts.pory"
	.string "This Place$"

PKMNCENTER_EventScript_Yan_Text_12:
# 44 "data/maps/PKMNCENTER/scripts.pory"
	.string "This World$"

PKMNCENTER_EventScript_Yan_Text_13:
# 44 "data/maps/PKMNCENTER/scripts.pory"
	.string "Silver Girl$"

PKMNCENTER_EventScript_Yan_Text_14:
# 44 "data/maps/PKMNCENTER/scripts.pory"
	.string "You$"

PKMNCENTER_EventScript_Yan_Text_15:
# 44 "data/maps/PKMNCENTER/scripts.pory"
	.string "What Should I Do Now$"

PKMNCENTER_EventScript_Yan_Text_16:
# 51 "data/maps/PKMNCENTER/scripts.pory"
	.string "Ah, the card?$"

PKMNCENTER_EventScript_Yan_Text_17:
# 52 "data/maps/PKMNCENTER/scripts.pory"
	.string "That's my special business card.$"

PKMNCENTER_EventScript_Yan_Text_18:
# 53 "data/maps/PKMNCENTER/scripts.pory"
	.string "It even has a watermark!$"

PKMNCENTER_EventScript_Yan_Text_19:
# 56 "data/maps/PKMNCENTER/scripts.pory"
	.string "Hm?$"

PKMNCENTER_EventScript_Yan_Text_20:
# 57 "data/maps/PKMNCENTER/scripts.pory"
	.string "What, still on the card?$"

PKMNCENTER_EventScript_Yan_Text_21:
# 58 "data/maps/PKMNCENTER/scripts.pory"
	.string "Yes, I know it's great.$"

PKMNCENTER_EventScript_Yan_Text_22:
# 59 "data/maps/PKMNCENTER/scripts.pory"
	.string "You've got good taste, my friend!$"

PKMNCENTER_EventScript_Yan_Text_23:
# 62 "data/maps/PKMNCENTER/scripts.pory"
	.string "(Seems there's nothing left to discuss.)$"

PKMNCENTER_EventScript_Yan_Text_24:
# 69 "data/maps/PKMNCENTER/scripts.pory"
	.string "This place?$"

PKMNCENTER_EventScript_Yan_Text_25:
# 70 "data/maps/PKMNCENTER/scripts.pory"
	.string "Well, I'm sorry to say, I don't\nreally have an answer for you.$"

PKMNCENTER_EventScript_Yan_Text_26:
# 71 "data/maps/PKMNCENTER/scripts.pory"
	.string "But if I had to take a guess...hmm.$"

PKMNCENTER_EventScript_Yan_Text_27:
# 72 "data/maps/PKMNCENTER/scripts.pory"
	.string "Well, obviously, it resembles a\nPokemon Center.$"

PKMNCENTER_EventScript_Yan_Text_28:
# 73 "data/maps/PKMNCENTER/scripts.pory"
	.string "But, it's, uh, not, obviously.$"

PKMNCENTER_EventScript_Yan_Text_29:
# 74 "data/maps/PKMNCENTER/scripts.pory"
	.string "It doesn't seem dangerous or\nanything, though.$"

PKMNCENTER_EventScript_Yan_Text_30:
# 75 "data/maps/PKMNCENTER/scripts.pory"
	.string "Seems safe enough for taking a nap.$"

PKMNCENTER_EventScript_Yan_Text_31:
# 76 "data/maps/PKMNCENTER/scripts.pory"
	.string "..oh! There is something interesting,\nactually.$"

PKMNCENTER_EventScript_Yan_Text_32:
# 77 "data/maps/PKMNCENTER/scripts.pory"
	.string "Why don't you take a look at the map?$"

PKMNCENTER_EventScript_Yan_Text_33:
# 78 "data/maps/PKMNCENTER/scripts.pory"
	.string "The one on the wall, I mean.$"

PKMNCENTER_EventScript_Yan_Text_34:
# 82 "data/maps/PKMNCENTER/scripts.pory"
	.string "See what I mean?$"

PKMNCENTER_EventScript_Yan_Text_35:
# 83 "data/maps/PKMNCENTER/scripts.pory"
	.string "It quite odd...it looks familiar,\nbut it's definitely not Hoenn.$"

PKMNCENTER_EventScript_Yan_Text_36:
# 84 "data/maps/PKMNCENTER/scripts.pory"
	.string "Well, if you were asking about this\ntown, I'm afraid I know even less.$"

PKMNCENTER_EventScript_Yan_Text_37:
# 85 "data/maps/PKMNCENTER/scripts.pory"
	.string "It's got a nostalgic vibe, I guess.\nIt's pretty cute.$"

PKMNCENTER_EventScript_Yan_Text_38:
# 86 "data/maps/PKMNCENTER/scripts.pory"
	.string "God, I feel like I'm...missing\nsomething,y'know?$"

PKMNCENTER_EventScript_Yan_Text_39:
# 87 "data/maps/PKMNCENTER/scripts.pory"
	.string "Maybe if I hang out here longer,\nI might make a connection.$"

PKMNCENTER_EventScript_Yan_Text_40:
# 88 "data/maps/PKMNCENTER/scripts.pory"
	.string "For now, let's just enjoy this\nlittle safe room, eheh.$"

PKMNCENTER_EventScript_Yan_Text_41:
# 98 "data/maps/PKMNCENTER/scripts.pory"
	.string "This world, huh?$"

PKMNCENTER_EventScript_Yan_Text_42:
# 99 "data/maps/PKMNCENTER/scripts.pory"
	.string "I'm sorry, {PLAYER}, but I don't have\nany real answers for you.$"

PKMNCENTER_EventScript_Yan_Text_43:
# 100 "data/maps/PKMNCENTER/scripts.pory"
	.string "I know as much as you do.$"

PKMNCENTER_EventScript_Yan_Text_44:
# 106 "data/maps/PKMNCENTER/scripts.pory"
	.string "This option is unavailable.$"

PKMNCENTER_EventScript_Yan_Text_45:
# 109 "data/maps/PKMNCENTER/scripts.pory"
	.string "This OPTION IS UNAVAILABLE.$"

PKMNCENTER_EventScript_Yan_Text_46:
# 112 "data/maps/PKMNCENTER/scripts.pory"
	.string "This OPTION IS UNAVAILABLE.\nThis OPTION IS UNAVAILABLE.This\nOPTION IS UNAVAILABLE.This OPTION IS\nUNAVAILABLE.This OPTION IS UNAVAILABLE.$"

PKMNCENTER_EventScript_Yan_Text_47:
# 115 "data/maps/PKMNCENTER/scripts.pory"
	.string "This Option is Unavailable.$"

PKMNCENTER_EventScript_Yan_Text_48:
# 119 "data/maps/PKMNCENTER/scripts.pory"
	.string "WARNING!\pThe following option will\ndelete all saved data.{PAUSE_UNTIL_PRESS}$"

PKMNCENTER_EventScript_Yan_Text_49:
# 120 "data/maps/PKMNCENTER/scripts.pory"
	.string "Is it really okay to delete all saved\ndata? This cannot be undone.{PAUSE_UNTIL_PRESS}$"

PKMNCENTER_EventScript_Yan_Text_50:
# 126 "data/maps/PKMNCENTER/scripts.pory"
	.string ".........$"

PKMNCENTER_EventScript_Yan_Text_51:
# 127 "data/maps/PKMNCENTER/scripts.pory"
	.string "Fine.$"

PKMNCENTER_EventScript_Yan_Text_52:
# 128 "data/maps/PKMNCENTER/scripts.pory"
	.string "'...a girl?'$"

PKMNCENTER_EventScript_Yan_Text_53:
# 129 "data/maps/PKMNCENTER/scripts.pory"
	.string "I think...I know what you are\ntalking about.$"

PKMNCENTER_EventScript_Yan_Text_54:
# 130 "data/maps/PKMNCENTER/scripts.pory"
	.string "So, you have seen her.$"

PKMNCENTER_EventScript_Yan_Text_55:
# 131 "data/maps/PKMNCENTER/scripts.pory"
	.string "The woman in gray.$"

PKMNCENTER_EventScript_Yan_Text_56:
# 132 "data/maps/PKMNCENTER/scripts.pory"
	.string "That phantom girl who appears in\nmy dreams.$"

PKMNCENTER_EventScript_Yan_Text_57:
# 138 "data/maps/PKMNCENTER/scripts.pory"
	.string "...I hope you're satisfied.$"

PKMNCENTER_EventScript_Yan_Text_58:
# 140 "data/maps/PKMNCENTER/scripts.pory"
	.string "(This optioin is unavailable.)$"

PKMNCENTER_EventScript_Yan_Text_59:
# 149 "data/maps/PKMNCENTER/scripts.pory"
	.string "Me?$"

PKMNCENTER_EventScript_Yan_Text_60:
# 150 "data/maps/PKMNCENTER/scripts.pory"
	.string "What, didja forget my name already?$"

PKMNCENTER_EventScript_Yan_Text_61:
# 151 "data/maps/PKMNCENTER/scripts.pory"
	.string "I'm Yan!$"

PKMNCENTER_EventScript_Yan_Text_62:
# 152 "data/maps/PKMNCENTER/scripts.pory"
	.string "And it's my job to figure out what's\ngoing on.$"

PKMNCENTER_EventScript_Yan_Text_63:
# 153 "data/maps/PKMNCENTER/scripts.pory"
	.string "Y'know, with the weirdness and all.$"

PKMNCENTER_EventScript_Yan_Text_64:
# 157 "data/maps/PKMNCENTER/scripts.pory"
	.string "...I just told you, dude.$"

PKMNCENTER_EventScript_Yan_Text_65:
# 158 "data/maps/PKMNCENTER/scripts.pory"
	.string "Yan.$"

PKMNCENTER_EventScript_Yan_Text_66:
# 159 "data/maps/PKMNCENTER/scripts.pory"
	.string "I'm a detective.$"

PKMNCENTER_EventScript_Yan_Text_67:
# 160 "data/maps/PKMNCENTER/scripts.pory"
	.string "Don't make me investigate your case of\nmemory loss, now!$"

PKMNCENTER_EventScript_Yan_Text_68:
# 161 "data/maps/PKMNCENTER/scripts.pory"
	.string "...eheh. Bad joke.$"

PKMNCENTER_EventScript_Yan_Text_69:
# 162 "data/maps/PKMNCENTER/scripts.pory"
	.string "....mm.$"

PKMNCENTER_EventScript_Yan_Text_70:
# 165 "data/maps/PKMNCENTER/scripts.pory"
	.string "...$"

PKMNCENTER_EventScript_Yan_Text_71:
# 166 "data/maps/PKMNCENTER/scripts.pory"
	.string "Alright, your kind of starting\nto creep me out now.$"

PKMNCENTER_EventScript_Yan_Text_72:
# 167 "data/maps/PKMNCENTER/scripts.pory"
	.string "Are you feeling alright, {PLAYER}?$"

PKMNCENTER_EventScript_Yan_Text_73:
# 168 "data/maps/PKMNCENTER/scripts.pory"
	.string "You know my name.$"

PKMNCENTER_EventScript_Yan_Text_74:
# 179 "data/maps/PKMNCENTER/scripts.pory"
	.string "What to do, eh?$"

PKMNCENTER_EventScript_Yan_Text_75:
# 180 "data/maps/PKMNCENTER/scripts.pory"
	.string "Hmmmm....$"

PKMNCENTER_EventScript_Yan_Text_76:
# 183 "data/maps/PKMNCENTER/scripts.pory"
	.string "See you, then!$"

PKMNCENTER_EventScript_Yan_Text_77:
# 184 "data/maps/PKMNCENTER/scripts.pory"
	.string "Come back if anything happens, alright?$"
