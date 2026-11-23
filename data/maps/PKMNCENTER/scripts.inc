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
# 187 "data/maps/PKMNCENTER/scripts.pory"
	case 4, PKMNCENTER_EventScript_Yan_16
# 201 "data/maps/PKMNCENTER/scripts.pory"
	case 5, PKMNCENTER_EventScript_Yan_17
# 207 "data/maps/PKMNCENTER/scripts.pory"
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
# 176 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_GIRL_OPTION, 99
	goto_if_eq PKMNCENTER_EventScript_Yan_41
# 180 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_82
# 181 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_GIRL_OPTION, 1
PKMNCENTER_EventScript_Yan_35:
# 184 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 185 "data/maps/PKMNCENTER/scripts.pory"
	face_right
	return

PKMNCENTER_EventScript_Yan_16:
# 188 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_83
# 189 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_84
# 190 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_85
# 191 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_86
# 192 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_87
# 193 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_88
# 194 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_89
# 195 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_90
# 196 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_91
# 197 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_YOU_OPTION, 1
# 198 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 199 "data/maps/PKMNCENTER/scripts.pory"
	face_right
	return

PKMNCENTER_EventScript_Yan_17:
# 204 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_92
# 205 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_93
	return

PKMNCENTER_EventScript_Yan_18:
# 208 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_94
# 209 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_95
# 210 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 211 "data/maps/PKMNCENTER/scripts.pory"
	applymovement 1, yanfaceright
# 212 "data/maps/PKMNCENTER/scripts.pory"
	waitmovement 1
# 214 "data/maps/PKMNCENTER/scripts.pory"
	checkitem ITEM_DRAGON_FANG, 1
# 215 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PKMNCENTER_EventScript_Yan_58
PKMNCENTER_EventScript_Yan_57:
# 236 "data/maps/PKMNCENTER/scripts.pory"
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
	goto_if_eq PKMNCENTER_EventScript_Yan_61
# 141 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_58
# 142 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_59
# 143 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_60
# 144 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_61
# 145 "data/maps/PKMNCENTER/scripts.pory"
	fadescreen FADE_TO_WHITE
# 146 "data/maps/PKMNCENTER/scripts.pory"
	delay 10
# 147 "data/maps/PKMNCENTER/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 148 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_62
# 149 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_63
# 150 "data/maps/PKMNCENTER/scripts.pory"
	fadescreen FADE_TO_WHITE
# 151 "data/maps/PKMNCENTER/scripts.pory"
	delay 10
# 152 "data/maps/PKMNCENTER/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 153 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_64
# 154 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_65
# 155 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_66
# 156 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_67
# 157 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_68
# 158 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_69
# 159 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_70
# 160 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_71
# 161 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_72
# 162 "data/maps/PKMNCENTER/scripts.pory"
	fadescreen FADE_TO_WHITE
# 163 "data/maps/PKMNCENTER/scripts.pory"
	delay 10
# 164 "data/maps/PKMNCENTER/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 165 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_73
# 166 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_74
# 167 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_75
# 168 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_76
# 169 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_77
# 170 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_78
# 171 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_1
# 172 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_79
# 173 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_80
# 174 "data/maps/PKMNCENTER/scripts.pory"
	addvar VAR_VENOM, 5
# 175 "data/maps/PKMNCENTER/scripts.pory"
	setvar VAR_GIRL_OPTION, 99
	goto PKMNCENTER_EventScript_Yan_35

PKMNCENTER_EventScript_Yan_41:
# 177 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_25
# 178 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_81
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
# 216 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_96
# 217 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_96
# 218 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_97, MSGBOX_YESNO
# 219 "data/maps/PKMNCENTER/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne PKMNCENTER_EventScript_Yan_63
	goto PKMNCENTER_EventScript_Yan_57

PKMNCENTER_EventScript_Yan_61:
# 137 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
# 138 "data/maps/PKMNCENTER/scripts.pory"
	face_right
	return

PKMNCENTER_EventScript_Yan_63:
# 220 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_98
# 221 "data/maps/PKMNCENTER/scripts.pory"
	message PKMNCENTER_EventScript_Yan_Text_99
# 222 "data/maps/PKMNCENTER/scripts.pory"
	waitmessage
# 223 "data/maps/PKMNCENTER/scripts.pory"
	delay 30
# 224 "data/maps/PKMNCENTER/scripts.pory"
	closemessage
# 225 "data/maps/PKMNCENTER/scripts.pory"
	fadescreen FADE_TO_BLACK
# 226 "data/maps/PKMNCENTER/scripts.pory"
	delay 500
# 227 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_100
# 228 "data/maps/PKMNCENTER/scripts.pory"
	delay 10
# 229 "data/maps/PKMNCENTER/scripts.pory"
	msgbox PKMNCENTER_EventScript_Yan_Text_101
# 230 "data/maps/PKMNCENTER/scripts.pory"
	setflag FLAG_KILLED_YAN
# 231 "data/maps/PKMNCENTER/scripts.pory"
	delay 100
# 232 "data/maps/PKMNCENTER/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto PKMNCENTER_EventScript_Yan_57


# 241 "data/maps/PKMNCENTER/scripts.pory"
yanfaceright:
# 242 "data/maps/PKMNCENTER/scripts.pory"
	face_down
	step_end

PKMN_CENTER_WARP::
# 246 "data/maps/PKMNCENTER/scripts.pory"
	lockall
# 247 "data/maps/PKMNCENTER/scripts.pory"
	goto_if_set FLAG_KILLED_YAN, PKMN_CENTER_WARP_2
# 250 "data/maps/PKMNCENTER/scripts.pory"
	warp MAP_CLEARING, 40, 11
PKMN_CENTER_WARP_1:
# 252 "data/maps/PKMNCENTER/scripts.pory"
	releaseall
	return

PKMN_CENTER_WARP_2:
# 248 "data/maps/PKMNCENTER/scripts.pory"
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
	.string "That Girl$"

PKMNCENTER_EventScript_Yan_Text_16:
# 52 "data/maps/PKMNCENTER/scripts.pory"
	.string "What to Do$"

PKMNCENTER_EventScript_Yan_Text_17:
# 52 "data/maps/PKMNCENTER/scripts.pory"
	.string "$"

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
	.string "...Fine.$"

PKMNCENTER_EventScript_Yan_Text_60:
# 143 "data/maps/PKMNCENTER/scripts.pory"
	.string "'.........huh?$"

PKMNCENTER_EventScript_Yan_Text_61:
# 144 "data/maps/PKMNCENTER/scripts.pory"
	.string "...a girl?$"

PKMNCENTER_EventScript_Yan_Text_62:
# 148 "data/maps/PKMNCENTER/scripts.pory"
	.string "I think...I know what you are\ntalking about.$"

PKMNCENTER_EventScript_Yan_Text_63:
# 149 "data/maps/PKMNCENTER/scripts.pory"
	.string "So, you have seen her.$"

PKMNCENTER_EventScript_Yan_Text_64:
# 153 "data/maps/PKMNCENTER/scripts.pory"
	.string "That girl in gray.$"

PKMNCENTER_EventScript_Yan_Text_65:
# 154 "data/maps/PKMNCENTER/scripts.pory"
	.string "That phantom girl who appears in\nmy dreams.$"

PKMNCENTER_EventScript_Yan_Text_66:
# 155 "data/maps/PKMNCENTER/scripts.pory"
	.string "I see her.$"

PKMNCENTER_EventScript_Yan_Text_67:
# 156 "data/maps/PKMNCENTER/scripts.pory"
	.string "'Who are you?'$"

PKMNCENTER_EventScript_Yan_Text_68:
# 157 "data/maps/PKMNCENTER/scripts.pory"
	.string "'What does this all mean?'$"

PKMNCENTER_EventScript_Yan_Text_69:
# 158 "data/maps/PKMNCENTER/scripts.pory"
	.string "'Who am I?'$"

PKMNCENTER_EventScript_Yan_Text_70:
# 159 "data/maps/PKMNCENTER/scripts.pory"
	.string "To tell the truth, these are the\nquestions I really want to answer.$"

PKMNCENTER_EventScript_Yan_Text_71:
# 160 "data/maps/PKMNCENTER/scripts.pory"
	.string "I don't care about all these people, really...$"

PKMNCENTER_EventScript_Yan_Text_72:
# 161 "data/maps/PKMNCENTER/scripts.pory"
	.string "I just want to be free.$"

PKMNCENTER_EventScript_Yan_Text_73:
# 165 "data/maps/PKMNCENTER/scripts.pory"
	.string "Help me, {PLAYER}.$"

PKMNCENTER_EventScript_Yan_Text_74:
# 166 "data/maps/PKMNCENTER/scripts.pory"
	.string "Help me.$"

PKMNCENTER_EventScript_Yan_Text_75:
# 167 "data/maps/PKMNCENTER/scripts.pory"
	.string "Please...I don't want to be here anymore.$"

PKMNCENTER_EventScript_Yan_Text_76:
# 168 "data/maps/PKMNCENTER/scripts.pory"
	.string "Huh?$"

PKMNCENTER_EventScript_Yan_Text_77:
# 169 "data/maps/PKMNCENTER/scripts.pory"
	.string "....what am I saying?$"

PKMNCENTER_EventScript_Yan_Text_78:
# 170 "data/maps/PKMNCENTER/scripts.pory"
	.string "What?$"

PKMNCENTER_EventScript_Yan_Text_79:
# 172 "data/maps/PKMNCENTER/scripts.pory"
	.string "What's up?$"

PKMNCENTER_EventScript_Yan_Text_80:
# 173 "data/maps/PKMNCENTER/scripts.pory"
	.string "Made any progress on the investigation?$"

PKMNCENTER_EventScript_Yan_Text_81:
# 178 "data/maps/PKMNCENTER/scripts.pory"
	.string "...I hope you're satisfied.$"

PKMNCENTER_EventScript_Yan_Text_82:
# 180 "data/maps/PKMNCENTER/scripts.pory"
	.string "This optioin is unavailable.$"

PKMNCENTER_EventScript_Yan_Text_83:
# 188 "data/maps/PKMNCENTER/scripts.pory"
	.string "To the north theres a forest.$"

PKMNCENTER_EventScript_Yan_Text_84:
# 189 "data/maps/PKMNCENTER/scripts.pory"
	.string "To the south, there's some kind of bunker.$"

PKMNCENTER_EventScript_Yan_Text_85:
# 190 "data/maps/PKMNCENTER/scripts.pory"
	.string "To the east, well...$"

PKMNCENTER_EventScript_Yan_Text_86:
# 191 "data/maps/PKMNCENTER/scripts.pory"
	.string "That's where the light comes from.$"

PKMNCENTER_EventScript_Yan_Text_87:
# 192 "data/maps/PKMNCENTER/scripts.pory"
	.string "That's where we need to go.$"

PKMNCENTER_EventScript_Yan_Text_88:
# 193 "data/maps/PKMNCENTER/scripts.pory"
	.string "But it's currently blocked off by some trees.$"

PKMNCENTER_EventScript_Yan_Text_89:
# 194 "data/maps/PKMNCENTER/scripts.pory"
	.string "Locals have said there's pieces to\na legendary axe in the heart of\pthe forest and the depths of the bunker.$"

PKMNCENTER_EventScript_Yan_Text_90:
# 195 "data/maps/PKMNCENTER/scripts.pory"
	.string "That's what I'm doing once I'm ready.$"

PKMNCENTER_EventScript_Yan_Text_91:
# 196 "data/maps/PKMNCENTER/scripts.pory"
	.string "Think you can beat me to it,{PLAYER}?$"

PKMNCENTER_EventScript_Yan_Text_92:
# 204 "data/maps/PKMNCENTER/scripts.pory"
	.string "What to do, eh?$"

PKMNCENTER_EventScript_Yan_Text_93:
# 205 "data/maps/PKMNCENTER/scripts.pory"
	.string "Hmmmm....$"

PKMNCENTER_EventScript_Yan_Text_94:
# 208 "data/maps/PKMNCENTER/scripts.pory"
	.string "See you, then!$"

PKMNCENTER_EventScript_Yan_Text_95:
# 209 "data/maps/PKMNCENTER/scripts.pory"
	.string "Come back if anything happens, alright?$"

PKMNCENTER_EventScript_Yan_Text_96:
# 216 "data/maps/PKMNCENTER/scripts.pory"
	.string "..........$"

PKMNCENTER_EventScript_Yan_Text_97:
# 218 "data/maps/PKMNCENTER/scripts.pory"
	.string "Would you like to use the Fangblade?$"

PKMNCENTER_EventScript_Yan_Text_98:
# 220 "data/maps/PKMNCENTER/scripts.pory"
	.string "(You pull the blade out and raise\nit towards Yan's neck.)$"

PKMNCENTER_EventScript_Yan_Text_99:
# 221 "data/maps/PKMNCENTER/scripts.pory"
	.string "Hmm? {PLAYER}? What are....What\nare you d-!$"

PKMNCENTER_EventScript_Yan_Text_100:
# 227 "data/maps/PKMNCENTER/scripts.pory"
	.string "And with that... {PAUSE_UNTIL_PRESS}$"

PKMNCENTER_EventScript_Yan_Text_101:
# 229 "data/maps/PKMNCENTER/scripts.pory"
	.string "The{PAUSE 100} story{PAUSE 100} of{PAUSE 100} 'Yan'{PAUSE 100} was{PAUSE 100} over. {PAUSE_UNTIL_PRESS}$"
