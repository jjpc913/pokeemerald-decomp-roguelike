# 1 "data/maps/SPAWN/scripts.pory"
SPAWN_MapScripts::
# 2 "data/maps/SPAWN/scripts.pory"
	.byte 0

SPAWN_MapScripts_Enable_Permadeath::
# 6 "data/maps/SPAWN/scripts.pory"
	lockall
# 7 "data/maps/SPAWN/scripts.pory"
	setflag FLAG_PERMADEATH
# 8 "data/maps/SPAWN/scripts.pory"
	releaseall
	return


SPAWN_MapScripts_Sign::
# 12 "data/maps/SPAWN/scripts.pory"
	lockall
# 13 "data/maps/SPAWN/scripts.pory"
	msgbox SPAWN_MapScripts_Sign_Text_0
# 14 "data/maps/SPAWN/scripts.pory"
	releaseall
	return


SPAWN_MapScripts_Hole::
# 18 "data/maps/SPAWN/scripts.pory"
	lockall
# 19 "data/maps/SPAWN/scripts.pory"
	msgbox SPAWN_MapScripts_Hole_Text_0
# 20 "data/maps/SPAWN/scripts.pory"
	msgbox SPAWN_MapScripts_Hole_Text_1
# 21 "data/maps/SPAWN/scripts.pory"
	msgbox SPAWN_MapScripts_Hole_Text_2
# 22 "data/maps/SPAWN/scripts.pory"
	msgbox SPAWN_MapScripts_Hole_Text_3
# 23 "data/maps/SPAWN/scripts.pory"
	msgbox SPAWN_MapScripts_Hole_Text_4, MSGBOX_YESNO
# 24 "data/maps/SPAWN/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SPAWN_MapScripts_Hole_1
	return

SPAWN_MapScripts_Hole_1:
# 26 "data/maps/SPAWN/scripts.pory"
	msgbox SPAWN_MapScripts_Hole_Text_5
	return


Rummage_Common::
# 31 "data/maps/SPAWN/scripts.pory"
	lockall
# 32 "data/maps/SPAWN/scripts.pory"
	random 50
# 33 "data/maps/SPAWN/scripts.pory"
	switch VAR_RESULT
# 34 "data/maps/SPAWN/scripts.pory"
	case 0, Rummage_Common_3
# 36 "data/maps/SPAWN/scripts.pory"
	case 1, Rummage_Common_4
# 38 "data/maps/SPAWN/scripts.pory"
	case 2, Rummage_Common_5
# 40 "data/maps/SPAWN/scripts.pory"
	case 3, Rummage_Common_6
# 42 "data/maps/SPAWN/scripts.pory"
	case 4, Rummage_Common_7
# 44 "data/maps/SPAWN/scripts.pory"
	case 5, Rummage_Common_8
# 46 "data/maps/SPAWN/scripts.pory"
	case 6, Rummage_Common_9
# 48 "data/maps/SPAWN/scripts.pory"
	case 7, Rummage_Common_10
# 50 "data/maps/SPAWN/scripts.pory"
	case 8, Rummage_Common_11
# 52 "data/maps/SPAWN/scripts.pory"
	case 9, Rummage_Common_12
# 54 "data/maps/SPAWN/scripts.pory"
	case 10, Rummage_Common_13
# 56 "data/maps/SPAWN/scripts.pory"
	case 11, Rummage_Common_14
# 58 "data/maps/SPAWN/scripts.pory"
	case 12, Rummage_Common_15
# 60 "data/maps/SPAWN/scripts.pory"
	case 13, Rummage_Common_16
# 62 "data/maps/SPAWN/scripts.pory"
	case 14, Rummage_Common_17
# 64 "data/maps/SPAWN/scripts.pory"
	case 15, Rummage_Common_18
# 66 "data/maps/SPAWN/scripts.pory"
	case 16, Rummage_Common_19
# 68 "data/maps/SPAWN/scripts.pory"
	case 17, Rummage_Common_20
# 70 "data/maps/SPAWN/scripts.pory"
	case 18, Rummage_Common_21
# 72 "data/maps/SPAWN/scripts.pory"
	case 19, Rummage_Common_22
# 74 "data/maps/SPAWN/scripts.pory"
	case 20, Rummage_Common_23
# 76 "data/maps/SPAWN/scripts.pory"
	case 21, Rummage_Common_24
# 78 "data/maps/SPAWN/scripts.pory"
	case 22, Rummage_Common_25
# 80 "data/maps/SPAWN/scripts.pory"
	case 23, Rummage_Common_26
# 82 "data/maps/SPAWN/scripts.pory"
	case 24, Rummage_Common_27
# 84 "data/maps/SPAWN/scripts.pory"
	case 25, Rummage_Common_28
# 86 "data/maps/SPAWN/scripts.pory"
	case 26, Rummage_Common_29
# 88 "data/maps/SPAWN/scripts.pory"
	case 27, Rummage_Common_30
# 90 "data/maps/SPAWN/scripts.pory"
	case 28, Rummage_Common_31
# 92 "data/maps/SPAWN/scripts.pory"
	case 29, Rummage_Common_32
# 94 "data/maps/SPAWN/scripts.pory"
	case 30, Rummage_Common_33
# 96 "data/maps/SPAWN/scripts.pory"
	case 31, Rummage_Common_34
# 98 "data/maps/SPAWN/scripts.pory"
	case 32, Rummage_Common_35
# 100 "data/maps/SPAWN/scripts.pory"
	case 33, Rummage_Common_36
# 102 "data/maps/SPAWN/scripts.pory"
	case 34, Rummage_Common_37
# 104 "data/maps/SPAWN/scripts.pory"
	case 35, Rummage_Common_38
# 106 "data/maps/SPAWN/scripts.pory"
	case 36, Rummage_Common_39
# 108 "data/maps/SPAWN/scripts.pory"
	case 37, Rummage_Common_40
# 110 "data/maps/SPAWN/scripts.pory"
	case 38, Rummage_Common_41
# 112 "data/maps/SPAWN/scripts.pory"
	case 39, Rummage_Common_42
# 114 "data/maps/SPAWN/scripts.pory"
	case 40, Rummage_Common_43
# 116 "data/maps/SPAWN/scripts.pory"
	case 41, Rummage_Common_44
# 118 "data/maps/SPAWN/scripts.pory"
	case 42, Rummage_Common_45
# 120 "data/maps/SPAWN/scripts.pory"
	case 43, Rummage_Common_46
# 122 "data/maps/SPAWN/scripts.pory"
	case 44, Rummage_Common_47
# 124 "data/maps/SPAWN/scripts.pory"
	case 45, Rummage_Common_48
# 126 "data/maps/SPAWN/scripts.pory"
	case 46, Rummage_Common_49
# 128 "data/maps/SPAWN/scripts.pory"
	case 47, Rummage_Common_50
# 130 "data/maps/SPAWN/scripts.pory"
	case 48, Rummage_Common_51
# 132 "data/maps/SPAWN/scripts.pory"
	case 49, Rummage_Common_52
# 134 "data/maps/SPAWN/scripts.pory"
	case 50, Rummage_Common_53
Rummage_Common_1:
# 137 "data/maps/SPAWN/scripts.pory"
	releaseall
	return

Rummage_Common_3:
# 35 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ANTIDOTE, 1
	goto Rummage_Common_1

Rummage_Common_4:
# 37 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
	goto Rummage_Common_1

Rummage_Common_5:
# 39 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_BERRY_JUICE, 1
	goto Rummage_Common_1

Rummage_Common_6:
# 41 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 2
	goto Rummage_Common_1

Rummage_Common_7:
# 43 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ANTIDOTE, 2
	goto Rummage_Common_1

Rummage_Common_8:
# 45 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ELIXER, 3
	goto Rummage_Common_1

Rummage_Common_9:
# 47 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ELIXER, 2
	goto Rummage_Common_1

Rummage_Common_10:
# 49 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ETHER, 3
	goto Rummage_Common_1

Rummage_Common_11:
# 51 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ETHER, 4
	goto Rummage_Common_1

Rummage_Common_12:
# 53 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ANTIDOTE, 1
	goto Rummage_Common_1

Rummage_Common_13:
# 55 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ELIXER, 1
	goto Rummage_Common_1

Rummage_Common_14:
# 57 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_FULL_HEAL, 1
	goto Rummage_Common_1

Rummage_Common_15:
# 59 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_PARALYZE_HEAL, 1
	goto Rummage_Common_1

Rummage_Common_16:
# 61 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_PARALYZE_HEAL, 2
	goto Rummage_Common_1

Rummage_Common_17:
# 63 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_FULL_HEAL, 1
	goto Rummage_Common_1

Rummage_Common_18:
# 65 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_POTION, 1
	goto Rummage_Common_1

Rummage_Common_19:
# 67 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_POTION, 2
	goto Rummage_Common_1

Rummage_Common_20:
# 69 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_POTION, 3
	goto Rummage_Common_1

Rummage_Common_21:
# 71 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
	goto Rummage_Common_1

Rummage_Common_22:
# 73 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_RARE_CANDY, 2
	goto Rummage_Common_1

Rummage_Common_23:
# 75 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
	goto Rummage_Common_1

Rummage_Common_24:
# 77 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_NUGGET, 1
	goto Rummage_Common_1

Rummage_Common_25:
# 79 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_NUGGET, 1
	goto Rummage_Common_1

Rummage_Common_26:
# 81 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_REPEL, 1
	goto Rummage_Common_1

Rummage_Common_27:
# 83 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_REPEL, 2
	goto Rummage_Common_1

Rummage_Common_28:
# 85 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_BURN_HEAL, 2
	goto Rummage_Common_1

Rummage_Common_29:
# 87 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_X_ATTACK, 1
	goto Rummage_Common_1

Rummage_Common_30:
# 89 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_X_DEFEND, 2
	goto Rummage_Common_1

Rummage_Common_31:
# 91 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_X_DEFEND, 1
	goto Rummage_Common_1

Rummage_Common_32:
# 93 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_X_ACCURACY, 2
	goto Rummage_Common_1

Rummage_Common_33:
# 95 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_X_ACCURACY, 1
	goto Rummage_Common_1

Rummage_Common_34:
# 97 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_X_SPEED, 2
	goto Rummage_Common_1

Rummage_Common_35:
# 99 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_X_SPEED, 1
	goto Rummage_Common_1

Rummage_Common_36:
# 101 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_X_SPECIAL, 2
	goto Rummage_Common_1

Rummage_Common_37:
# 103 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_POKE_BALL, 2
	goto Rummage_Common_1

Rummage_Common_38:
# 105 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
	goto Rummage_Common_1

Rummage_Common_39:
# 107 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
	goto Rummage_Common_1

Rummage_Common_40:
# 109 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_GREAT_BALL, 1
	goto Rummage_Common_1

Rummage_Common_41:
# 111 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_DIRE_HIT, 1
	goto Rummage_Common_1

Rummage_Common_42:
# 113 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_DIRE_HIT, 2
	goto Rummage_Common_1

Rummage_Common_43:
# 115 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_HP_UP, 1
	goto Rummage_Common_1

Rummage_Common_44:
# 117 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_CALCIUM, 1
	goto Rummage_Common_1

Rummage_Common_45:
# 119 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ZINC, 1
	goto Rummage_Common_1

Rummage_Common_46:
# 121 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_IRON, 1
	goto Rummage_Common_1

Rummage_Common_47:
# 123 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_GUARD_SPEC, 1
	goto Rummage_Common_1

Rummage_Common_48:
# 125 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_SUPER_POTION, 1
	goto Rummage_Common_1

Rummage_Common_49:
# 127 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_MOOMOO_MILK, 1
	goto Rummage_Common_1

Rummage_Common_50:
# 129 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_SUPER_POTION, 2
	goto Rummage_Common_1

Rummage_Common_51:
# 131 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_FULL_HEAL, 1
	goto Rummage_Common_1

Rummage_Common_52:
# 133 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ANTIDOTE, 1
	goto Rummage_Common_1

Rummage_Common_53:
# 135 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_BURN_HEAL, 1
	goto Rummage_Common_1


SPAWN_MapScripts_Sign_Text_0:
# 13 "data/maps/SPAWN/scripts.pory"
	.string "     's House$"

SPAWN_MapScripts_Hole_Text_0:
# 19 "data/maps/SPAWN/scripts.pory"
	.string "(.........)$"

SPAWN_MapScripts_Hole_Text_1:
# 20 "data/maps/SPAWN/scripts.pory"
	.string "(The hole goes so deep, you can't make\nout anything.)$"

SPAWN_MapScripts_Hole_Text_2:
# 21 "data/maps/SPAWN/scripts.pory"
	.string "(You can hear wind blowing from deep inside.)$"

SPAWN_MapScripts_Hole_Text_3:
# 22 "data/maps/SPAWN/scripts.pory"
	.string "(You can tell that, once you jump down,\nyou won't be able to return.)$"

SPAWN_MapScripts_Hole_Text_4:
# 23 "data/maps/SPAWN/scripts.pory"
	.string "Are you sure you are ready?$"

SPAWN_MapScripts_Hole_Text_5:
# 26 "data/maps/SPAWN/scripts.pory"
	.string "...another step into the abyss.$"
