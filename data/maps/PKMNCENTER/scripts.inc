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
# 28 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_set FLAG_KILLED_YAN, PKMNCENTER_EventScript_Yan_2
# 33 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_unset FLAG_TALKED_TO_YAN_PC, PKMNCENTER_EventScript_Yan_5
# 48 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_10
PKMNCENTER_EventScript_Yan_4:
# 50 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_11
# 51 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_set FLAG_DEFAULT_YAN, PKMNCENTER_EventScript_Yan_9
PKMNCENTER_EventScript_Yan_8:
# 55 "data/maps/PKMNCENTER/scripts.pory"
	faceplayer
# 56 "data/maps/PKMNCENTER/scripts.pory"
	switch VAR_RESULT
# 57 "data/maps/PKMNCENTER/scripts.pory"
	case 0, PKMNCENTER_EventScript_Yan_12
# 75 "data/maps/PKMNCENTER/scripts.pory"
	case 1, PKMNCENTER_EventScript_Yan_13
# 89 "data/maps/PKMNCENTER/scripts.pory"
	case 2, PKMNCENTER_EventScript_Yan_14
# 119 "data/maps/PKMNCENTER/scripts.pory"
	case 3, PKMNCENTER_EventScript_Yan_15
# 165 "data/maps/PKMNCENTER/scripts.pory"
	case 4, PKMNCENTER_EventScript_Yan_16
# 194 "data/maps/PKMNCENTER/scripts.pory"
	case 5, PKMNCENTER_EventScript_Yan_17
# 200 "data/maps/PKMNCENTER/scripts.pory"
	case 127, PKMNCENTER_EventScript_Yan_18
	return

PKMNCENTER_EventScript_Yan_2:
# 29 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_0
# 30 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
	return

PKMNCENTER_EventScript_Yan_5:
# 34 "data/maps/PKMNCENTER/scripts.pory"
	setflag FLAG_TALKED_TO_YAN_PC
# 35 "data/maps/PKMNCENTER/scripts.pory"
	setvar VAR_GIRL_OPTION, 1
# 36 "data/maps/PKMNCENTER/scripts.pory"
	setvar VAR_YOU_OPTION, 1
# 37 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_1
# 38 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_2
# 39 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_3
# 40 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_4
# 41 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_5
# 42 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_6
# 43 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_7
# 44 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_8
# 45 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_9
# 46 "data/maps/PKMNCENTER/scripts.pory"
	setflag FLAG_DEFAULT_YAN
	goto PKMNCENTER_EventScript_Yan_4

PKMNCENTER_EventScript_Yan_9:
# 52 "data/maps/PKMNCENTER/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, PKMNCENTER_EventScript_Yan_Text_12, PKMNCENTER_EventScript_Yan_Text_13, PKMNCENTER_EventScript_Yan_Text_14, PKMNCENTER_EventScript_Yan_Text_15, PKMNCENTER_EventScript_Yan_Text_16, PKMNCENTER_EventScript_Yan_Text_17
	goto PKMNCENTER_EventScript_Yan_8

PKMNCENTER_EventScript_Yan_12:
# 58 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_unset FLAG_TALKED_BUSINESS_CARD, PKMNCENTER_EventScript_Yan_20
# 63 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_set FLAG_TALKED_BUSINESS_CARD, PKMNCENTER_EventScript_Yan_23
PKMNCENTER_EventScript_Yan_22:
# 70 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_25
PKMNCENTER_EventScript_Yan_19:
# 72 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 73 "data/maps/PKMNCENTER/scripts.pory"
	face_right
	return

PKMNCENTER_EventScript_Yan_13:
# 76 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_unset FLAG_TALKED_ONCE, PKMNCENTER_EventScript_Yan_28
# 84 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_25
PKMNCENTER_EventScript_Yan_27:
# 86 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 87 "data/maps/PKMNCENTER/scripts.pory"
	face_right
	return

PKMNCENTER_EventScript_Yan_14:
# 90 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_unset FLAG_TALKED_MAP, PKMNCENTER_EventScript_Yan_32
# 114 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_51
PKMNCENTER_EventScript_Yan_31:
# 116 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 117 "data/maps/PKMNCENTER/scripts.pory"
	face_right
	return

PKMNCENTER_EventScript_Yan_15:
# 120 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 2
	goto_if_ge PKMNCENTER_EventScript_Yan_54
PKMNCENTER_EventScript_Yan_52:
# 123 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 4
	goto_if_ge PKMNCENTER_EventScript_Yan_51
PKMNCENTER_EventScript_Yan_49:
# 126 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 6
	goto_if_ge PKMNCENTER_EventScript_Yan_48
PKMNCENTER_EventScript_Yan_46:
# 129 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 8
	goto_if_ge PKMNCENTER_EventScript_Yan_45
PKMNCENTER_EventScript_Yan_44:
# 133 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 10
	goto_if_eq PKMNCENTER_EventScript_Yan_40
# 154 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 99
	goto_if_eq PKMNCENTER_EventScript_Yan_41
# 158 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_69
# 159 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
PKMNCENTER_EventScript_Yan_35:
# 162 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 163 "data/maps/PKMNCENTER/scripts.pory"
	face_right
	return

PKMNCENTER_EventScript_Yan_16:
# 166 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_YOU_OPTION, 1
	goto_if_eq PKMNCENTER_EventScript_Yan_58
# 174 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_YOU_OPTION, 2
	goto_if_eq PKMNCENTER_EventScript_Yan_59
# 182 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_YOU_OPTION, 3
	goto_if_eq PKMNCENTER_EventScript_Yan_60
# 189 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_25
PKMNCENTER_EventScript_Yan_57:
# 191 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 192 "data/maps/PKMNCENTER/scripts.pory"
	face_right
	return

PKMNCENTER_EventScript_Yan_17:
# 197 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_85
# 198 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_86
	return

PKMNCENTER_EventScript_Yan_18:
# 201 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_87
# 202 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_88
# 203 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 204 "data/maps/PKMNCENTER/scripts.pory"
	applymovement 1, yanfaceright
# 205 "data/maps/PKMNCENTER/scripts.pory"
	waitmovement 1
# 207 "data/maps/PKMNCENTER/scripts.pory"
	checkitem ITEM_DRAGON_FANG, 1
# 208 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PKMNCENTER_EventScript_Yan_66
PKMNCENTER_EventScript_Yan_65:
# 229 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
	return

PKMNCENTER_EventScript_Yan_20:
# 59 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_18
# 60 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_19
# 61 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_20
# 62 "data/maps/PKMNCENTER/scripts.pory"
	setflag FLAG_TALKED_BUSINESS_CARD
	goto PKMNCENTER_EventScript_Yan_19

PKMNCENTER_EventScript_Yan_21:
# 64 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_21
# 65 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_22
# 66 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_23
# 67 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_24
# 68 "data/maps/PKMNCENTER/scripts.pory"
	setflag FLAG_TALKED_BUSINESS_CARD_2
	goto PKMNCENTER_EventScript_Yan_19

PKMNCENTER_EventScript_Yan_23:
# 63 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_unset FLAG_TALKED_BUSINESS_CARD_2, PKMNCENTER_EventScript_Yan_21
	goto PKMNCENTER_EventScript_Yan_22

PKMNCENTER_EventScript_Yan_28:
# 77 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_26
# 78 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_27
# 79 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_28
# 80 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_29
# 81 "data/maps/PKMNCENTER/scripts.pory"
	setflag FLAG_TALKED_ONCE
	goto PKMNCENTER_EventScript_Yan_27

PKMNCENTER_EventScript_Yan_32:
# 91 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_30
# 92 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_31
# 93 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_32
# 94 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_33
# 95 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_34
# 96 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_35
# 97 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_36
# 98 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_37
# 99 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_38
# 100 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_39
# 101 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_40
# 102 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_41
# 103 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_42
# 104 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_43
# 105 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_44
# 106 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_45
# 107 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_46
# 108 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_47
# 109 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_48
# 110 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_49
# 111 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_50
# 112 "data/maps/PKMNCENTER/scripts.pory"
	setflag FLAG_TALKED_MAP
	goto PKMNCENTER_EventScript_Yan_31

PKMNCENTER_EventScript_Yan_36:
# 121 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_52
# 122 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
	goto PKMNCENTER_EventScript_Yan_35

PKMNCENTER_EventScript_Yan_37:
# 124 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_53
# 125 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
	goto PKMNCENTER_EventScript_Yan_35

PKMNCENTER_EventScript_Yan_38:
# 127 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_54
# 128 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
	goto PKMNCENTER_EventScript_Yan_35

PKMNCENTER_EventScript_Yan_39:
# 130 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_55
# 131 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
	goto PKMNCENTER_EventScript_Yan_35

PKMNCENTER_EventScript_Yan_40:
# 134 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_56
# 135 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_57, MSGBOX_YESNO
# 136 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PKMNCENTER_EventScript_Yan_69
# 141 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_58
# 142 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_59
# 143 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_60
# 144 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_61
# 145 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_62
# 146 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_63
# 147 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_64
# 148 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_65
# 149 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_66
# 150 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_67
# 152 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_VENOM, 5
# 153 "data/maps/PKMNCENTER/scripts.pory"
	setvar VAR_GIRL_OPTION, 99
	goto PKMNCENTER_EventScript_Yan_35

PKMNCENTER_EventScript_Yan_41:
# 155 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_25
# 156 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_68
	goto PKMNCENTER_EventScript_Yan_35

PKMNCENTER_EventScript_Yan_45:
# 129 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 9
	goto_if_le PKMNCENTER_EventScript_Yan_39
	goto PKMNCENTER_EventScript_Yan_44

PKMNCENTER_EventScript_Yan_48:
# 126 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 8
	goto_if_lt PKMNCENTER_EventScript_Yan_38
	goto PKMNCENTER_EventScript_Yan_46

PKMNCENTER_EventScript_Yan_51:
# 123 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 6
	goto_if_lt PKMNCENTER_EventScript_Yan_37
	goto PKMNCENTER_EventScript_Yan_49

PKMNCENTER_EventScript_Yan_54:
# 120 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 4
	goto_if_lt PKMNCENTER_EventScript_Yan_36
	goto PKMNCENTER_EventScript_Yan_52

PKMNCENTER_EventScript_Yan_58:
# 167 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_70
# 168 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_71
# 169 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_72
# 170 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_73
# 171 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_74
# 172 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_YOU_OPTION, 1
	goto PKMNCENTER_EventScript_Yan_57

PKMNCENTER_EventScript_Yan_59:
# 175 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_75
# 176 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_76
# 177 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_77
# 178 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_78
# 179 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_79
# 180 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_80
# 181 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_YOU_OPTION, 1
	goto PKMNCENTER_EventScript_Yan_57

PKMNCENTER_EventScript_Yan_60:
# 183 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_81
# 184 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_82
# 185 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_83
# 186 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_84
# 187 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_YOU_OPTION, 1
	goto PKMNCENTER_EventScript_Yan_57

PKMNCENTER_EventScript_Yan_66:
# 209 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_89
# 210 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_89
# 211 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_90, MSGBOX_YESNO
# 212 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PKMNCENTER_EventScript_Yan_71
	goto PKMNCENTER_EventScript_Yan_65

PKMNCENTER_EventScript_Yan_69:
# 137 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 138 "data/maps/PKMNCENTER/scripts.pory"
	face_right
	return

PKMNCENTER_EventScript_Yan_71:
# 213 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_91
# 214 "data/maps/PKMNCENTER/scripts.pory"
	message PKMNCENTER_EventScript_Yan_Text_92
# 215 "data/maps/PKMNCENTER/scripts.pory"
	waitmessage
# 216 "data/maps/PKMNCENTER/scripts.pory"
	delay 30
# 217 "data/maps/PKMNCENTER/scripts.pory"
	closemessage
# 218 "data/maps/PKMNCENTER/scripts.pory"
	fadescreen FADE_TO_BLACK
# 219 "data/maps/PKMNCENTER/scripts.pory"
	delay 500
# 220 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_93
# 221 "data/maps/PKMNCENTER/scripts.pory"
	delay 10
# 222 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_94
# 223 "data/maps/PKMNCENTER/scripts.pory"
	setflag FLAG_KILLED_YAN
# 224 "data/maps/PKMNCENTER/scripts.pory"
	delay 100
# 225 "data/maps/PKMNCENTER/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto PKMNCENTER_EventScript_Yan_65


# 234 "data/maps/PKMNCENTER/scripts.pory"
yanfaceright:
# 235 "data/maps/PKMNCENTER/scripts.pory"
	face_down
	step_end

PKMN_CENTER_WARP::
# 239 "data/maps/PKMNCENTER/scripts.pory"
	lockall
# 240 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_set FLAG_KILLED_YAN, PKMN_CENTER_WARP_2
# 243 "data/maps/PKMNCENTER/scripts.pory"
	warp MAP_CLEARING, 40, 11
PKMN_CENTER_WARP_1:
# 245 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
	return

PKMN_CENTER_WARP_2:
# 241 "data/maps/PKMNCENTER/scripts.pory"
	warp MAP_CLEARING_EVIL, 40, 11
	goto PKMN_CENTER_WARP_1


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
# 29 "data/maps/PKMNCENTER/scripts.pory"
	.string "(She doesn't respond.)$"

PKMNCENTER_EventScript_Yan_Text_1:
# 37 "data/maps/PKMNCENTER/scripts.pory"
	.string "Oh, hey, {PLAYER}.$"

PKMNCENTER_EventScript_Yan_Text_2:
# 38 "data/maps/PKMNCENTER/scripts.pory"
	.string "Good to see you again.$"

PKMNCENTER_EventScript_Yan_Text_3:
# 39 "data/maps/PKMNCENTER/scripts.pory"
	.string "I'm just taking a break...from\ninvestigating.$"

PKMNCENTER_EventScript_Yan_Text_4:
# 40 "data/maps/PKMNCENTER/scripts.pory"
	.string "Hah...sorry.$"

PKMNCENTER_EventScript_Yan_Text_5:
# 41 "data/maps/PKMNCENTER/scripts.pory"
	.string "I feel like my body is shutting\ndown or something.$"

PKMNCENTER_EventScript_Yan_Text_6:
# 42 "data/maps/PKMNCENTER/scripts.pory"
	.string "I'm so tired...hah.$"

PKMNCENTER_EventScript_Yan_Text_7:
# 43 "data/maps/PKMNCENTER/scripts.pory"
	.string "I'll be staying here for a bit...\nwhile I rest up.$"

PKMNCENTER_EventScript_Yan_Text_8:
# 44 "data/maps/PKMNCENTER/scripts.pory"
	.string "One of the neighbors might let you take a nap.$"

PKMNCENTER_EventScript_Yan_Text_9:
# 45 "data/maps/PKMNCENTER/scripts.pory"
	.string "In the meantime, I'd be happy to\ntalk to you about anything.$"

PKMNCENTER_EventScript_Yan_Text_10:
# 48 "data/maps/PKMNCENTER/scripts.pory"
	.string "Hey, {PLAYER}.$"

PKMNCENTER_EventScript_Yan_Text_11:
# 50 "data/maps/PKMNCENTER/scripts.pory"
	.string "What'd you want to talk about?$"

PKMNCENTER_EventScript_Yan_Text_12:
# 52 "data/maps/PKMNCENTER/scripts.pory"
	.string "Business Card$"

PKMNCENTER_EventScript_Yan_Text_13:
# 52 "data/maps/PKMNCENTER/scripts.pory"
	.string "Town$"

PKMNCENTER_EventScript_Yan_Text_14:
# 52 "data/maps/PKMNCENTER/scripts.pory"
	.string "Investigation$"

PKMNCENTER_EventScript_Yan_Text_15:
# 52 "data/maps/PKMNCENTER/scripts.pory"
	.string "Static Girl$"

PKMNCENTER_EventScript_Yan_Text_16:
# 52 "data/maps/PKMNCENTER/scripts.pory"
	.string "You$"

PKMNCENTER_EventScript_Yan_Text_17:
# 52 "data/maps/PKMNCENTER/scripts.pory"
	.string "What Should I Do Now$"

PKMNCENTER_EventScript_Yan_Text_18:
# 59 "data/maps/PKMNCENTER/scripts.pory"
	.string "Ah, the card?$"

PKMNCENTER_EventScript_Yan_Text_19:
# 60 "data/maps/PKMNCENTER/scripts.pory"
	.string "That's my special business card.$"

PKMNCENTER_EventScript_Yan_Text_20:
# 61 "data/maps/PKMNCENTER/scripts.pory"
	.string "It even has a watermark!$"

PKMNCENTER_EventScript_Yan_Text_21:
# 64 "data/maps/PKMNCENTER/scripts.pory"
	.string "Hm?$"

PKMNCENTER_EventScript_Yan_Text_22:
# 65 "data/maps/PKMNCENTER/scripts.pory"
	.string "What, still on the card?$"

PKMNCENTER_EventScript_Yan_Text_23:
# 66 "data/maps/PKMNCENTER/scripts.pory"
	.string "Yes, I know it's great.$"

PKMNCENTER_EventScript_Yan_Text_24:
# 67 "data/maps/PKMNCENTER/scripts.pory"
	.string "You've got good taste, my friend!$"

PKMNCENTER_EventScript_Yan_Text_25:
# 70 "data/maps/PKMNCENTER/scripts.pory"
	.string "(Seems there's nothing left to discuss.)$"

PKMNCENTER_EventScript_Yan_Text_26:
# 77 "data/maps/PKMNCENTER/scripts.pory"
	.string "I found this little town only a\nshort while ago.$"

PKMNCENTER_EventScript_Yan_Text_27:
# 78 "data/maps/PKMNCENTER/scripts.pory"
	.string "They do give off a vibe that they\ndon't want me here.$"

PKMNCENTER_EventScript_Yan_Text_28:
# 79 "data/maps/PKMNCENTER/scripts.pory"
	.string "But compared to the others, the\npeople here are nice.$"

PKMNCENTER_EventScript_Yan_Text_29:
# 80 "data/maps/PKMNCENTER/scripts.pory"
	.string "There's a lot of useful$"

PKMNCENTER_EventScript_Yan_Text_30:
# 91 "data/maps/PKMNCENTER/scripts.pory"
	.string "Oh, my investigation?$"

PKMNCENTER_EventScript_Yan_Text_31:
# 92 "data/maps/PKMNCENTER/scripts.pory"
	.string "Er, well...$"

PKMNCENTER_EventScript_Yan_Text_32:
# 93 "data/maps/PKMNCENTER/scripts.pory"
	.string "Well...it's definitely weird.$"

PKMNCENTER_EventScript_Yan_Text_33:
# 94 "data/maps/PKMNCENTER/scripts.pory"
	.string "Everyone I've run into has yelled nonsense\nat me before promptly trying to kill me.$"

PKMNCENTER_EventScript_Yan_Text_34:
# 95 "data/maps/PKMNCENTER/scripts.pory"
	.string "Save for a few exceptions, of course.$"

PKMNCENTER_EventScript_Yan_Text_35:
# 96 "data/maps/PKMNCENTER/scripts.pory"
	.string "Nobody seems to want to just...talk.$"

PKMNCENTER_EventScript_Yan_Text_36:
# 97 "data/maps/PKMNCENTER/scripts.pory"
	.string "I'll be honest, {PLAYER}.$"

PKMNCENTER_EventScript_Yan_Text_37:
# 98 "data/maps/PKMNCENTER/scripts.pory"
	.string "I don't know how far my investigation will go.$"

PKMNCENTER_EventScript_Yan_Text_38:
# 99 "data/maps/PKMNCENTER/scripts.pory"
	.string "The answers I'm looking for...I'm certain\nthey're here.$"

PKMNCENTER_EventScript_Yan_Text_39:
# 100 "data/maps/PKMNCENTER/scripts.pory"
	.string "I can feel it.$"

PKMNCENTER_EventScript_Yan_Text_40:
# 101 "data/maps/PKMNCENTER/scripts.pory"
	.string "East of here, I can sense that's exactly\nwhere I need to go.$"

PKMNCENTER_EventScript_Yan_Text_41:
# 102 "data/maps/PKMNCENTER/scripts.pory"
	.string "That the answers are waiting for me.$"

PKMNCENTER_EventScript_Yan_Text_42:
# 103 "data/maps/PKMNCENTER/scripts.pory"
	.string "...some detective, I am, huh?$"

PKMNCENTER_EventScript_Yan_Text_43:
# 104 "data/maps/PKMNCENTER/scripts.pory"
	.string "Just working off of hunches and gut feelings.$"

PKMNCENTER_EventScript_Yan_Text_44:
# 105 "data/maps/PKMNCENTER/scripts.pory"
	.string "But it's as good of a lead as any, I guess.$"

PKMNCENTER_EventScript_Yan_Text_45:
# 106 "data/maps/PKMNCENTER/scripts.pory"
	.string "I'm sure that's where your adventure\nwill take you to as well.$"

PKMNCENTER_EventScript_Yan_Text_46:
# 107 "data/maps/PKMNCENTER/scripts.pory"
	.string "I do enjoy your company, {PLAYER}, but\nI'll be blunt.$"

PKMNCENTER_EventScript_Yan_Text_47:
# 108 "data/maps/PKMNCENTER/scripts.pory"
	.string "If it comes down to it...I won't hold\nback.$"

PKMNCENTER_EventScript_Yan_Text_48:
# 109 "data/maps/PKMNCENTER/scripts.pory"
	.string "What I'm fighting for...is too important.$"

PKMNCENTER_EventScript_Yan_Text_49:
# 110 "data/maps/PKMNCENTER/scripts.pory"
	.string "...but hopefully it won't\ncome to that, heehee.$"

PKMNCENTER_EventScript_Yan_Text_50:
# 111 "data/maps/PKMNCENTER/scripts.pory"
	.string "Sorry, I don't mean to frighten you.$"

PKMNCENTER_EventScript_Yan_Text_51:
# 114 "data/maps/PKMNCENTER/scripts.pory"
	.string "(Seems like Yan doesn't want to\ncontinue that conversation.)$"

PKMNCENTER_EventScript_Yan_Text_52:
# 121 "data/maps/PKMNCENTER/scripts.pory"
	.string "This option is unavailable.$"

PKMNCENTER_EventScript_Yan_Text_53:
# 124 "data/maps/PKMNCENTER/scripts.pory"
	.string "This OPTION IS UNAVAILABLE.$"

PKMNCENTER_EventScript_Yan_Text_54:
# 127 "data/maps/PKMNCENTER/scripts.pory"
	.string "This OPTION IS UNAVAILABLE.\nThis OPTION IS UNAVAILABLE.This\nOPTION IS UNAVAILABLE.This OPTION IS\nUNAVAILABLE.This OPTION IS UNAVAILABLE.$"

PKMNCENTER_EventScript_Yan_Text_55:
# 130 "data/maps/PKMNCENTER/scripts.pory"
	.string "This Option is Unavailable.$"

PKMNCENTER_EventScript_Yan_Text_56:
# 134 "data/maps/PKMNCENTER/scripts.pory"
	.string "WARNING!\pThe following option will\ndelete all saved data.{PAUSE_UNTIL_PRESS}$"

PKMNCENTER_EventScript_Yan_Text_57:
# 135 "data/maps/PKMNCENTER/scripts.pory"
	.string "Is it really okay to delete all saved\ndata? This cannot be undone.{PAUSE_UNTIL_PRESS}$"

PKMNCENTER_EventScript_Yan_Text_58:
# 141 "data/maps/PKMNCENTER/scripts.pory"
	.string ".........$"

PKMNCENTER_EventScript_Yan_Text_59:
# 142 "data/maps/PKMNCENTER/scripts.pory"
	.string "Fine.$"

PKMNCENTER_EventScript_Yan_Text_60:
# 143 "data/maps/PKMNCENTER/scripts.pory"
	.string "'...a girl?'$"

PKMNCENTER_EventScript_Yan_Text_61:
# 144 "data/maps/PKMNCENTER/scripts.pory"
	.string "I think...I know what you are\ntalking about.$"

PKMNCENTER_EventScript_Yan_Text_62:
# 145 "data/maps/PKMNCENTER/scripts.pory"
	.string "So, you have seen her.$"

PKMNCENTER_EventScript_Yan_Text_63:
# 146 "data/maps/PKMNCENTER/scripts.pory"
	.string "The woman in gray.$"

PKMNCENTER_EventScript_Yan_Text_64:
# 147 "data/maps/PKMNCENTER/scripts.pory"
	.string "That phantom girl who appears in\nmy dreams.$"

PKMNCENTER_EventScript_Yan_Text_65:
# 148 "data/maps/PKMNCENTER/scripts.pory"
	.string "Who are you?$"

PKMNCENTER_EventScript_Yan_Text_66:
# 149 "data/maps/PKMNCENTER/scripts.pory"
	.string "What does this all mean?$"

PKMNCENTER_EventScript_Yan_Text_67:
# 150 "data/maps/PKMNCENTER/scripts.pory"
	.string "To tell the truth, these are the\nquestions I really want to answer.$"

PKMNCENTER_EventScript_Yan_Text_68:
# 156 "data/maps/PKMNCENTER/scripts.pory"
	.string "...I hope you're satisfied.$"

PKMNCENTER_EventScript_Yan_Text_69:
# 158 "data/maps/PKMNCENTER/scripts.pory"
	.string "This optioin is unavailable.$"

PKMNCENTER_EventScript_Yan_Text_70:
# 167 "data/maps/PKMNCENTER/scripts.pory"
	.string "Me?$"

PKMNCENTER_EventScript_Yan_Text_71:
# 168 "data/maps/PKMNCENTER/scripts.pory"
	.string "What, didja forget my name already?$"

PKMNCENTER_EventScript_Yan_Text_72:
# 169 "data/maps/PKMNCENTER/scripts.pory"
	.string "I'm Yan!$"

PKMNCENTER_EventScript_Yan_Text_73:
# 170 "data/maps/PKMNCENTER/scripts.pory"
	.string "And it's my job to figure out what's\ngoing on.$"

PKMNCENTER_EventScript_Yan_Text_74:
# 171 "data/maps/PKMNCENTER/scripts.pory"
	.string "Y'know, with the weirdness and all.$"

PKMNCENTER_EventScript_Yan_Text_75:
# 175 "data/maps/PKMNCENTER/scripts.pory"
	.string "...I just told you, dude.$"

PKMNCENTER_EventScript_Yan_Text_76:
# 176 "data/maps/PKMNCENTER/scripts.pory"
	.string "Yan.$"

PKMNCENTER_EventScript_Yan_Text_77:
# 177 "data/maps/PKMNCENTER/scripts.pory"
	.string "I'm a detective.$"

PKMNCENTER_EventScript_Yan_Text_78:
# 178 "data/maps/PKMNCENTER/scripts.pory"
	.string "Don't make me investigate your case of\nmemory loss, now!$"

PKMNCENTER_EventScript_Yan_Text_79:
# 179 "data/maps/PKMNCENTER/scripts.pory"
	.string "...eheh. Bad joke.$"

PKMNCENTER_EventScript_Yan_Text_80:
# 180 "data/maps/PKMNCENTER/scripts.pory"
	.string "....mm.$"

PKMNCENTER_EventScript_Yan_Text_81:
# 183 "data/maps/PKMNCENTER/scripts.pory"
	.string "...$"

PKMNCENTER_EventScript_Yan_Text_82:
# 184 "data/maps/PKMNCENTER/scripts.pory"
	.string "Alright, your kind of starting\nto creep me out now.$"

PKMNCENTER_EventScript_Yan_Text_83:
# 185 "data/maps/PKMNCENTER/scripts.pory"
	.string "Are you feeling alright, {PLAYER}?$"

PKMNCENTER_EventScript_Yan_Text_84:
# 186 "data/maps/PKMNCENTER/scripts.pory"
	.string "You know my name.$"

PKMNCENTER_EventScript_Yan_Text_85:
# 197 "data/maps/PKMNCENTER/scripts.pory"
	.string "What to do, eh?$"

PKMNCENTER_EventScript_Yan_Text_86:
# 198 "data/maps/PKMNCENTER/scripts.pory"
	.string "Hmmmm....$"

PKMNCENTER_EventScript_Yan_Text_87:
# 201 "data/maps/PKMNCENTER/scripts.pory"
	.string "See you, then!$"

PKMNCENTER_EventScript_Yan_Text_88:
# 202 "data/maps/PKMNCENTER/scripts.pory"
	.string "Come back if anything happens, alright?$"

PKMNCENTER_EventScript_Yan_Text_89:
# 209 "data/maps/PKMNCENTER/scripts.pory"
	.string "..........$"

PKMNCENTER_EventScript_Yan_Text_90:
# 211 "data/maps/PKMNCENTER/scripts.pory"
	.string "Would you like to use the Fangblade?$"

PKMNCENTER_EventScript_Yan_Text_91:
# 213 "data/maps/PKMNCENTER/scripts.pory"
	.string "(You pull the blade out and raise\nit towards Yan's neck.)$"

PKMNCENTER_EventScript_Yan_Text_92:
# 214 "data/maps/PKMNCENTER/scripts.pory"
	.string "Hmm? {PLAYER}? What are....What\nare you d-!$"

PKMNCENTER_EventScript_Yan_Text_93:
# 220 "data/maps/PKMNCENTER/scripts.pory"
	.string "And with that... {PAUSE_UNTIL_PRESS}$"

PKMNCENTER_EventScript_Yan_Text_94:
# 222 "data/maps/PKMNCENTER/scripts.pory"
	.string "The{PAUSE 100} story{PAUSE 100} of{PAUSE 100} 'Yan'{PAUSE 100} was{PAUSE 100} over. {PAUSE_UNTIL_PRESS}$"
