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
	goto_if_eq SPAWN_MapScripts_Hole_2
SPAWN_MapScripts_Hole_1:
# 44 "data/maps/SPAWN/scripts.pory"
	releaseall
	return

SPAWN_MapScripts_Hole_2:
# 25 "data/maps/SPAWN/scripts.pory"
	fadescreen FADE_TO_BLACK
# 26 "data/maps/SPAWN/scripts.pory"
	delay 30
# 27 "data/maps/SPAWN/scripts.pory"
	msgbox SPAWN_MapScripts_Hole_Text_5
# 28 "data/maps/SPAWN/scripts.pory"
	delay 30
# 29 "data/maps/SPAWN/scripts.pory"
	msgbox SPAWN_MapScripts_Hole_Text_6
# 30 "data/maps/SPAWN/scripts.pory"
	delay 40
# 31 "data/maps/SPAWN/scripts.pory"
	msgbox SPAWN_MapScripts_Hole_Text_7
# 32 "data/maps/SPAWN/scripts.pory"
	delay 10
# 33 "data/maps/SPAWN/scripts.pory"
	msgbox SPAWN_MapScripts_Hole_Text_8
# 34 "data/maps/SPAWN/scripts.pory"
	delay 30
# 35 "data/maps/SPAWN/scripts.pory"
	msgbox SPAWN_MapScripts_Hole_Text_9
# 36 "data/maps/SPAWN/scripts.pory"
	delay 20
# 37 "data/maps/SPAWN/scripts.pory"
	msgbox SPAWN_MapScripts_Hole_Text_10
# 38 "data/maps/SPAWN/scripts.pory"
	delay 5
# 39 "data/maps/SPAWN/scripts.pory"
	warp MAP_LANDING_CAVE, 8, 6
# 40 "data/maps/SPAWN/scripts.pory"
	waitstate
# 41 "data/maps/SPAWN/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 42 "data/maps/SPAWN/scripts.pory"
	delay 1
	goto SPAWN_MapScripts_Hole_1


Rummage_Common::
# 48 "data/maps/SPAWN/scripts.pory"
	lockall
# 49 "data/maps/SPAWN/scripts.pory"
	random 50
# 50 "data/maps/SPAWN/scripts.pory"
	switch VAR_RESULT
# 51 "data/maps/SPAWN/scripts.pory"
	case 0, Rummage_Common_3
# 53 "data/maps/SPAWN/scripts.pory"
	case 1, Rummage_Common_4
# 55 "data/maps/SPAWN/scripts.pory"
	case 2, Rummage_Common_5
# 57 "data/maps/SPAWN/scripts.pory"
	case 3, Rummage_Common_6
# 59 "data/maps/SPAWN/scripts.pory"
	case 4, Rummage_Common_7
# 61 "data/maps/SPAWN/scripts.pory"
	case 5, Rummage_Common_8
# 63 "data/maps/SPAWN/scripts.pory"
	case 6, Rummage_Common_9
# 65 "data/maps/SPAWN/scripts.pory"
	case 7, Rummage_Common_10
# 67 "data/maps/SPAWN/scripts.pory"
	case 8, Rummage_Common_11
# 69 "data/maps/SPAWN/scripts.pory"
	case 9, Rummage_Common_12
# 71 "data/maps/SPAWN/scripts.pory"
	case 10, Rummage_Common_13
# 73 "data/maps/SPAWN/scripts.pory"
	case 11, Rummage_Common_14
# 75 "data/maps/SPAWN/scripts.pory"
	case 12, Rummage_Common_15
# 77 "data/maps/SPAWN/scripts.pory"
	case 13, Rummage_Common_16
# 79 "data/maps/SPAWN/scripts.pory"
	case 14, Rummage_Common_17
# 81 "data/maps/SPAWN/scripts.pory"
	case 15, Rummage_Common_18
# 83 "data/maps/SPAWN/scripts.pory"
	case 16, Rummage_Common_19
# 85 "data/maps/SPAWN/scripts.pory"
	case 17, Rummage_Common_20
# 87 "data/maps/SPAWN/scripts.pory"
	case 18, Rummage_Common_21
# 89 "data/maps/SPAWN/scripts.pory"
	case 19, Rummage_Common_22
# 91 "data/maps/SPAWN/scripts.pory"
	case 20, Rummage_Common_23
# 93 "data/maps/SPAWN/scripts.pory"
	case 21, Rummage_Common_24
# 95 "data/maps/SPAWN/scripts.pory"
	case 22, Rummage_Common_25
# 97 "data/maps/SPAWN/scripts.pory"
	case 23, Rummage_Common_26
# 99 "data/maps/SPAWN/scripts.pory"
	case 24, Rummage_Common_27
# 101 "data/maps/SPAWN/scripts.pory"
	case 25, Rummage_Common_28
# 103 "data/maps/SPAWN/scripts.pory"
	case 26, Rummage_Common_29
# 105 "data/maps/SPAWN/scripts.pory"
	case 27, Rummage_Common_30
# 107 "data/maps/SPAWN/scripts.pory"
	case 28, Rummage_Common_31
# 109 "data/maps/SPAWN/scripts.pory"
	case 29, Rummage_Common_32
# 111 "data/maps/SPAWN/scripts.pory"
	case 30, Rummage_Common_33
# 113 "data/maps/SPAWN/scripts.pory"
	case 31, Rummage_Common_34
# 115 "data/maps/SPAWN/scripts.pory"
	case 32, Rummage_Common_35
# 117 "data/maps/SPAWN/scripts.pory"
	case 33, Rummage_Common_36
# 119 "data/maps/SPAWN/scripts.pory"
	case 34, Rummage_Common_37
# 121 "data/maps/SPAWN/scripts.pory"
	case 35, Rummage_Common_38
# 123 "data/maps/SPAWN/scripts.pory"
	case 36, Rummage_Common_39
# 125 "data/maps/SPAWN/scripts.pory"
	case 37, Rummage_Common_40
# 127 "data/maps/SPAWN/scripts.pory"
	case 38, Rummage_Common_41
# 129 "data/maps/SPAWN/scripts.pory"
	case 39, Rummage_Common_42
# 131 "data/maps/SPAWN/scripts.pory"
	case 40, Rummage_Common_43
# 133 "data/maps/SPAWN/scripts.pory"
	case 41, Rummage_Common_44
# 135 "data/maps/SPAWN/scripts.pory"
	case 42, Rummage_Common_45
# 137 "data/maps/SPAWN/scripts.pory"
	case 43, Rummage_Common_46
# 139 "data/maps/SPAWN/scripts.pory"
	case 44, Rummage_Common_47
# 141 "data/maps/SPAWN/scripts.pory"
	case 45, Rummage_Common_48
# 143 "data/maps/SPAWN/scripts.pory"
	case 46, Rummage_Common_49
# 145 "data/maps/SPAWN/scripts.pory"
	case 47, Rummage_Common_50
# 147 "data/maps/SPAWN/scripts.pory"
	case 48, Rummage_Common_51
# 149 "data/maps/SPAWN/scripts.pory"
	case 49, Rummage_Common_52
# 151 "data/maps/SPAWN/scripts.pory"
	case 50, Rummage_Common_53
Rummage_Common_1:
# 154 "data/maps/SPAWN/scripts.pory"
	releaseall
	return

Rummage_Common_3:
# 52 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ANTIDOTE, 1
	goto Rummage_Common_1

Rummage_Common_4:
# 54 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
	goto Rummage_Common_1

Rummage_Common_5:
# 56 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_BERRY_JUICE, 1
	goto Rummage_Common_1

Rummage_Common_6:
# 58 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 2
	goto Rummage_Common_1

Rummage_Common_7:
# 60 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ANTIDOTE, 2
	goto Rummage_Common_1

Rummage_Common_8:
# 62 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ELIXER, 3
	goto Rummage_Common_1

Rummage_Common_9:
# 64 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ELIXER, 2
	goto Rummage_Common_1

Rummage_Common_10:
# 66 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ETHER, 3
	goto Rummage_Common_1

Rummage_Common_11:
# 68 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ETHER, 4
	goto Rummage_Common_1

Rummage_Common_12:
# 70 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ANTIDOTE, 1
	goto Rummage_Common_1

Rummage_Common_13:
# 72 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ELIXER, 1
	goto Rummage_Common_1

Rummage_Common_14:
# 74 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_FULL_HEAL, 1
	goto Rummage_Common_1

Rummage_Common_15:
# 76 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_PARALYZE_HEAL, 1
	goto Rummage_Common_1

Rummage_Common_16:
# 78 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_PARALYZE_HEAL, 2
	goto Rummage_Common_1

Rummage_Common_17:
# 80 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_FULL_HEAL, 1
	goto Rummage_Common_1

Rummage_Common_18:
# 82 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_POTION, 1
	goto Rummage_Common_1

Rummage_Common_19:
# 84 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_POTION, 2
	goto Rummage_Common_1

Rummage_Common_20:
# 86 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_POTION, 3
	goto Rummage_Common_1

Rummage_Common_21:
# 88 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
	goto Rummage_Common_1

Rummage_Common_22:
# 90 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_RARE_CANDY, 2
	goto Rummage_Common_1

Rummage_Common_23:
# 92 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
	goto Rummage_Common_1

Rummage_Common_24:
# 94 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_NUGGET, 1
	goto Rummage_Common_1

Rummage_Common_25:
# 96 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_NUGGET, 1
	goto Rummage_Common_1

Rummage_Common_26:
# 98 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
	goto Rummage_Common_1

Rummage_Common_27:
# 100 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_REPEL, 2
	goto Rummage_Common_1

Rummage_Common_28:
# 102 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_BURN_HEAL, 2
	goto Rummage_Common_1

Rummage_Common_29:
# 104 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_X_ATTACK, 1
	goto Rummage_Common_1

Rummage_Common_30:
# 106 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_X_DEFEND, 2
	goto Rummage_Common_1

Rummage_Common_31:
# 108 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_X_DEFEND, 1
	goto Rummage_Common_1

Rummage_Common_32:
# 110 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_X_ACCURACY, 2
	goto Rummage_Common_1

Rummage_Common_33:
# 112 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_X_ACCURACY, 1
	goto Rummage_Common_1

Rummage_Common_34:
# 114 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_X_SPEED, 2
	goto Rummage_Common_1

Rummage_Common_35:
# 116 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_X_SPEED, 1
	goto Rummage_Common_1

Rummage_Common_36:
# 118 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_X_SPECIAL, 2
	goto Rummage_Common_1

Rummage_Common_37:
# 120 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_POKE_BALL, 2
	goto Rummage_Common_1

Rummage_Common_38:
# 122 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
	goto Rummage_Common_1

Rummage_Common_39:
# 124 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
	goto Rummage_Common_1

Rummage_Common_40:
# 126 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_GREAT_BALL, 1
	goto Rummage_Common_1

Rummage_Common_41:
# 128 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_DIRE_HIT, 1
	goto Rummage_Common_1

Rummage_Common_42:
# 130 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_DIRE_HIT, 2
	goto Rummage_Common_1

Rummage_Common_43:
# 132 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_HP_UP, 1
	goto Rummage_Common_1

Rummage_Common_44:
# 134 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_CALCIUM, 1
	goto Rummage_Common_1

Rummage_Common_45:
# 136 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ZINC, 1
	goto Rummage_Common_1

Rummage_Common_46:
# 138 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_IRON, 1
	goto Rummage_Common_1

Rummage_Common_47:
# 140 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_GUARD_SPEC, 1
	goto Rummage_Common_1

Rummage_Common_48:
# 142 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_SUPER_POTION, 1
	goto Rummage_Common_1

Rummage_Common_49:
# 144 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_MOOMOO_MILK, 1
	goto Rummage_Common_1

Rummage_Common_50:
# 146 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_SUPER_POTION, 2
	goto Rummage_Common_1

Rummage_Common_51:
# 148 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_FULL_HEAL, 1
	goto Rummage_Common_1

Rummage_Common_52:
# 150 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ANTIDOTE, 1
	goto Rummage_Common_1

Rummage_Common_53:
# 152 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_BURN_HEAL, 1
	goto Rummage_Common_1


Rummage_Uncommon::
# 159 "data/maps/SPAWN/scripts.pory"
	lockall
# 160 "data/maps/SPAWN/scripts.pory"
	random 50
# 161 "data/maps/SPAWN/scripts.pory"
	switch VAR_RESULT
# 162 "data/maps/SPAWN/scripts.pory"
	case 0, Rummage_Uncommon_3
# 164 "data/maps/SPAWN/scripts.pory"
	case 1, Rummage_Uncommon_4
# 166 "data/maps/SPAWN/scripts.pory"
	case 2, Rummage_Uncommon_5
# 168 "data/maps/SPAWN/scripts.pory"
	case 3, Rummage_Uncommon_6
# 170 "data/maps/SPAWN/scripts.pory"
	case 4, Rummage_Uncommon_7
# 172 "data/maps/SPAWN/scripts.pory"
	case 5, Rummage_Uncommon_8
# 174 "data/maps/SPAWN/scripts.pory"
	case 6, Rummage_Uncommon_9
# 176 "data/maps/SPAWN/scripts.pory"
	case 7, Rummage_Uncommon_10
# 178 "data/maps/SPAWN/scripts.pory"
	case 8, Rummage_Uncommon_11
# 180 "data/maps/SPAWN/scripts.pory"
	case 9, Rummage_Uncommon_12
# 182 "data/maps/SPAWN/scripts.pory"
	case 10, Rummage_Uncommon_13
# 184 "data/maps/SPAWN/scripts.pory"
	case 11, Rummage_Uncommon_14
# 186 "data/maps/SPAWN/scripts.pory"
	case 12, Rummage_Uncommon_15
# 188 "data/maps/SPAWN/scripts.pory"
	case 13, Rummage_Uncommon_16
# 190 "data/maps/SPAWN/scripts.pory"
	case 14, Rummage_Uncommon_17
# 192 "data/maps/SPAWN/scripts.pory"
	case 15, Rummage_Uncommon_18
# 194 "data/maps/SPAWN/scripts.pory"
	case 16, Rummage_Uncommon_19
# 196 "data/maps/SPAWN/scripts.pory"
	case 17, Rummage_Uncommon_20
# 198 "data/maps/SPAWN/scripts.pory"
	case 18, Rummage_Uncommon_21
# 200 "data/maps/SPAWN/scripts.pory"
	case 19, Rummage_Uncommon_22
# 202 "data/maps/SPAWN/scripts.pory"
	case 20, Rummage_Uncommon_23
# 204 "data/maps/SPAWN/scripts.pory"
	case 21, Rummage_Uncommon_24
# 206 "data/maps/SPAWN/scripts.pory"
	case 22, Rummage_Uncommon_25
# 208 "data/maps/SPAWN/scripts.pory"
	case 23, Rummage_Uncommon_26
# 210 "data/maps/SPAWN/scripts.pory"
	case 24, Rummage_Uncommon_27
# 212 "data/maps/SPAWN/scripts.pory"
	case 25, Rummage_Uncommon_28
# 214 "data/maps/SPAWN/scripts.pory"
	case 26, Rummage_Uncommon_29
# 216 "data/maps/SPAWN/scripts.pory"
	case 27, Rummage_Uncommon_30
# 218 "data/maps/SPAWN/scripts.pory"
	case 28, Rummage_Uncommon_31
# 220 "data/maps/SPAWN/scripts.pory"
	case 29, Rummage_Uncommon_32
# 222 "data/maps/SPAWN/scripts.pory"
	case 30, Rummage_Uncommon_33
# 224 "data/maps/SPAWN/scripts.pory"
	case 31, Rummage_Uncommon_34
# 226 "data/maps/SPAWN/scripts.pory"
	case 32, Rummage_Uncommon_35
# 228 "data/maps/SPAWN/scripts.pory"
	case 33, Rummage_Uncommon_36
# 230 "data/maps/SPAWN/scripts.pory"
	case 34, Rummage_Uncommon_37
# 232 "data/maps/SPAWN/scripts.pory"
	case 35, Rummage_Uncommon_38
# 234 "data/maps/SPAWN/scripts.pory"
	case 36, Rummage_Uncommon_39
# 236 "data/maps/SPAWN/scripts.pory"
	case 37, Rummage_Uncommon_40
# 238 "data/maps/SPAWN/scripts.pory"
	case 38, Rummage_Uncommon_41
# 240 "data/maps/SPAWN/scripts.pory"
	case 39, Rummage_Uncommon_42
# 242 "data/maps/SPAWN/scripts.pory"
	case 40, Rummage_Uncommon_43
# 244 "data/maps/SPAWN/scripts.pory"
	case 41, Rummage_Uncommon_44
# 246 "data/maps/SPAWN/scripts.pory"
	case 42, Rummage_Uncommon_45
# 248 "data/maps/SPAWN/scripts.pory"
	case 43, Rummage_Uncommon_46
# 250 "data/maps/SPAWN/scripts.pory"
	case 44, Rummage_Uncommon_47
# 252 "data/maps/SPAWN/scripts.pory"
	case 45, Rummage_Uncommon_48
# 254 "data/maps/SPAWN/scripts.pory"
	case 46, Rummage_Uncommon_49
# 256 "data/maps/SPAWN/scripts.pory"
	case 47, Rummage_Uncommon_50
# 258 "data/maps/SPAWN/scripts.pory"
	case 48, Rummage_Uncommon_51
# 260 "data/maps/SPAWN/scripts.pory"
	case 49, Rummage_Uncommon_52
# 262 "data/maps/SPAWN/scripts.pory"
	case 50, Rummage_Uncommon_53
Rummage_Uncommon_1:
# 266 "data/maps/SPAWN/scripts.pory"
	releaseall
	return

Rummage_Uncommon_3:
# 163 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_FULL_HEAL, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_4:
# 165 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_FULL_HEAL, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_5:
# 167 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 2
	goto Rummage_Uncommon_1

Rummage_Uncommon_6:
# 169 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_FOCUS_SASH, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_7:
# 171 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_CHARCOAL, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_8:
# 173 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_MYSTIC_WATER, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_9:
# 175 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_SILK_SCARF, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_10:
# 177 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_MIRACLE_SEED, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_11:
# 179 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_NEVER_MELT_ICE, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_12:
# 181 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_MAGNET, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_13:
# 183 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_RARE_CANDY, 2
	goto Rummage_Uncommon_1

Rummage_Uncommon_14:
# 185 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_15:
# 187 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_PREMIER_BALL, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_16:
# 189 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 2
	goto Rummage_Uncommon_1

Rummage_Uncommon_17:
# 191 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_GREAT_BALL, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_18:
# 193 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_19:
# 195 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_POKE_DOLL, 2
	goto Rummage_Uncommon_1

Rummage_Uncommon_20:
# 197 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_POKE_DOLL, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_21:
# 199 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_BIG_PEARL, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_22:
# 201 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_STAR_PIECE, 2
	goto Rummage_Uncommon_1

Rummage_Uncommon_23:
# 203 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_FIRE_STONE, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_24:
# 205 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_WATER_STONE, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_25:
# 207 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_THUNDER_STONE, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_26:
# 209 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_SOFT_SAND, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_27:
# 211 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_BLACK_GLASSES, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_28:
# 213 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_QUICK_CLAW, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_29:
# 215 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_CHESTO_BERRY, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_30:
# 217 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_PECHA_BERRY, 2
	goto Rummage_Uncommon_1

Rummage_Uncommon_31:
# 219 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_PECHA_BERRY, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_32:
# 221 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_CHESTO_BERRY, 2
	goto Rummage_Uncommon_1

Rummage_Uncommon_33:
# 223 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_CHERI_BERRY, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_34:
# 225 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_QUICK_BALL, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_35:
# 227 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_HEAL_POWDER, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_36:
# 229 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_POKE_BALL, 3
	goto Rummage_Uncommon_1

Rummage_Uncommon_37:
# 231 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_MAX_ELIXER, 3
	goto Rummage_Uncommon_1

Rummage_Uncommon_38:
# 233 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_39:
# 235 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_POTION, 3
	goto Rummage_Uncommon_1

Rummage_Uncommon_40:
# 237 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ANTIDOTE, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_41:
# 239 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_LEMONADE, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_42:
# 241 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 2
	goto Rummage_Uncommon_1

Rummage_Uncommon_43:
# 243 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_PP_MAX, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_44:
# 245 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_PP_UP, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_45:
# 247 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ETHER, 3
	goto Rummage_Uncommon_1

Rummage_Uncommon_46:
# 249 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ETHER, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_47:
# 251 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_FOCUS_SASH, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_48:
# 253 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_DUSK_BALL, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_49:
# 255 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_NET_BALL, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_50:
# 257 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_HEAL_BALL, 2
	goto Rummage_Uncommon_1

Rummage_Uncommon_51:
# 259 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_HEAL_BALL, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_52:
# 261 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_HEAL_BALL, 1
	goto Rummage_Uncommon_1

Rummage_Uncommon_53:
# 263 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_REVIVE, 1
	goto Rummage_Uncommon_1


Rummage_Rare::
# 271 "data/maps/SPAWN/scripts.pory"
	lockall
# 272 "data/maps/SPAWN/scripts.pory"
	random 34
# 273 "data/maps/SPAWN/scripts.pory"
	switch VAR_RESULT
# 274 "data/maps/SPAWN/scripts.pory"
	case 0, Rummage_Rare_3
# 277 "data/maps/SPAWN/scripts.pory"
	case 1, Rummage_Rare_4
# 279 "data/maps/SPAWN/scripts.pory"
	case 2, Rummage_Rare_5
# 281 "data/maps/SPAWN/scripts.pory"
	case 3, Rummage_Rare_6
# 283 "data/maps/SPAWN/scripts.pory"
	case 4, Rummage_Rare_7
# 285 "data/maps/SPAWN/scripts.pory"
	case 5, Rummage_Rare_8
# 287 "data/maps/SPAWN/scripts.pory"
	case 6, Rummage_Rare_9
# 289 "data/maps/SPAWN/scripts.pory"
	case 7, Rummage_Rare_10
# 291 "data/maps/SPAWN/scripts.pory"
	case 8, Rummage_Rare_11
# 293 "data/maps/SPAWN/scripts.pory"
	case 9, Rummage_Rare_12
# 295 "data/maps/SPAWN/scripts.pory"
	case 10, Rummage_Rare_13
# 297 "data/maps/SPAWN/scripts.pory"
	case 11, Rummage_Rare_14
# 299 "data/maps/SPAWN/scripts.pory"
	case 12, Rummage_Rare_15
# 301 "data/maps/SPAWN/scripts.pory"
	case 13, Rummage_Rare_16
# 303 "data/maps/SPAWN/scripts.pory"
	case 14, Rummage_Rare_17
# 305 "data/maps/SPAWN/scripts.pory"
	case 15, Rummage_Rare_18
# 307 "data/maps/SPAWN/scripts.pory"
	case 16, Rummage_Rare_19
# 309 "data/maps/SPAWN/scripts.pory"
	case 17, Rummage_Rare_20
# 311 "data/maps/SPAWN/scripts.pory"
	case 18, Rummage_Rare_21
# 313 "data/maps/SPAWN/scripts.pory"
	case 19, Rummage_Rare_22
# 315 "data/maps/SPAWN/scripts.pory"
	case 20, Rummage_Rare_23
# 317 "data/maps/SPAWN/scripts.pory"
	case 21, Rummage_Rare_24
# 319 "data/maps/SPAWN/scripts.pory"
	case 22, Rummage_Rare_25
# 321 "data/maps/SPAWN/scripts.pory"
	case 23, Rummage_Rare_26
# 323 "data/maps/SPAWN/scripts.pory"
	case 24, Rummage_Rare_27
# 325 "data/maps/SPAWN/scripts.pory"
	case 25, Rummage_Rare_28
# 327 "data/maps/SPAWN/scripts.pory"
	case 26, Rummage_Rare_29
# 329 "data/maps/SPAWN/scripts.pory"
	case 27, Rummage_Rare_30
# 331 "data/maps/SPAWN/scripts.pory"
	case 28, Rummage_Rare_31
# 333 "data/maps/SPAWN/scripts.pory"
	case 29, Rummage_Rare_32
# 335 "data/maps/SPAWN/scripts.pory"
	case 30, Rummage_Rare_33
# 337 "data/maps/SPAWN/scripts.pory"
	case 31, Rummage_Rare_34
# 339 "data/maps/SPAWN/scripts.pory"
	case 32, Rummage_Rare_35
# 341 "data/maps/SPAWN/scripts.pory"
	case 33, Rummage_Rare_36
# 343 "data/maps/SPAWN/scripts.pory"
	case 34, Rummage_Rare_37
Rummage_Rare_1:
# 346 "data/maps/SPAWN/scripts.pory"
	releaseall
	return

Rummage_Rare_3:
# 276 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_RED_SCARF, 1
	goto Rummage_Rare_1

Rummage_Rare_4:
# 278 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_REVIVE, 1
	goto Rummage_Rare_1

Rummage_Rare_5:
# 280 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_RARE_CANDY, 3
	goto Rummage_Rare_1

Rummage_Rare_6:
# 282 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_FOCUS_SASH, 1
	goto Rummage_Rare_1

Rummage_Rare_7:
# 284 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto Rummage_Rare_1

Rummage_Rare_8:
# 286 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_CHOICE_BAND, 1
	goto Rummage_Rare_1

Rummage_Rare_9:
# 288 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_CHOICE_SCARF, 1
	goto Rummage_Rare_1

Rummage_Rare_10:
# 290 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_LEFTOVERS, 1
	goto Rummage_Rare_1

Rummage_Rare_11:
# 292 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_SHELL_BELL, 1
	goto Rummage_Rare_1

Rummage_Rare_12:
# 294 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_MASTER_BALL, 1
	goto Rummage_Rare_1

Rummage_Rare_13:
# 296 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_BICYCLE, 1
	goto Rummage_Rare_1

Rummage_Rare_14:
# 298 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
	goto Rummage_Rare_1

Rummage_Rare_15:
# 300 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_CHOICE_SPECS, 1
	goto Rummage_Rare_1

Rummage_Rare_16:
# 302 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 4
	goto Rummage_Rare_1

Rummage_Rare_17:
# 304 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_GREAT_BALL, 1
	goto Rummage_Rare_1

Rummage_Rare_18:
# 306 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_KINGS_ROCK, 1
	goto Rummage_Rare_1

Rummage_Rare_19:
# 308 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_FOCUS_BAND, 2
	goto Rummage_Rare_1

Rummage_Rare_20:
# 310 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_EXPERT_BELT, 1
	goto Rummage_Rare_1

Rummage_Rare_21:
# 312 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_LIFE_ORB, 1
	goto Rummage_Rare_1

Rummage_Rare_22:
# 314 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_EVIOLITE, 1
	goto Rummage_Rare_1

Rummage_Rare_23:
# 316 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ROCKY_HELMET, 1
	goto Rummage_Rare_1

Rummage_Rare_24:
# 318 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_TM_EARTHQUAKE, 1
	goto Rummage_Rare_1

Rummage_Rare_25:
# 320 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_ASSAULT_VEST, 1
	goto Rummage_Rare_1

Rummage_Rare_26:
# 322 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_MASTER_BALL, 1
	goto Rummage_Rare_1

Rummage_Rare_27:
# 324 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto Rummage_Rare_1

Rummage_Rare_28:
# 326 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_TM_SHADOW_BALL, 1
	goto Rummage_Rare_1

Rummage_Rare_29:
# 328 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_TM_BRICK_BREAK, 1
	goto Rummage_Rare_1

Rummage_Rare_30:
# 330 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_TM_REFLECT, 1
	goto Rummage_Rare_1

Rummage_Rare_31:
# 332 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_TM_LIGHT_SCREEN, 1
	goto Rummage_Rare_1

Rummage_Rare_32:
# 334 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_TM_PROTECT, 1
	goto Rummage_Rare_1

Rummage_Rare_33:
# 336 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_TM_PSYCHIC, 1
	goto Rummage_Rare_1

Rummage_Rare_34:
# 338 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_TM_BULK_UP, 1
	goto Rummage_Rare_1

Rummage_Rare_35:
# 340 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_TM_CALM_MIND, 1
	goto Rummage_Rare_1

Rummage_Rare_36:
# 342 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_TM_FLAMETHROWER, 1
	goto Rummage_Rare_1

Rummage_Rare_37:
# 344 "data/maps/SPAWN/scripts.pory"
	giveitem ITEM_MASTER_BALL
	goto Rummage_Rare_1


EnableRunning::
# 351 "data/maps/SPAWN/scripts.pory"
	lockall
# 352 "data/maps/SPAWN/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 353 "data/maps/SPAWN/scripts.pory"
	releaseall
	return


Script_Save::
# 357 "data/maps/SPAWN/scripts.pory"
	lockall
# 358 "data/maps/SPAWN/scripts.pory"
	fadescreen FADE_TO_WHITE
# 359 "data/maps/SPAWN/scripts.pory"
	delay 5
# 360 "data/maps/SPAWN/scripts.pory"
	msgbox Script_Save_Text_0
# 361 "data/maps/SPAWN/scripts.pory"
	special SaveGame
# 362 "data/maps/SPAWN/scripts.pory"
	waitstate
# 363 "data/maps/SPAWN/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 364 "data/maps/SPAWN/scripts.pory"
	releaseall
	return


DISABLEEXP::
# 368 "data/maps/SPAWN/scripts.pory"
	lockall
# 369 "data/maps/SPAWN/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 370 "data/maps/SPAWN/scripts.pory"
	releaseall
	return


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
	.string "(You can hear wind blowing from deep\ninside.)$"

SPAWN_MapScripts_Hole_Text_3:
# 22 "data/maps/SPAWN/scripts.pory"
	.string "(You can tell that, once you jump down,\nyou won't be able to return.)$"

SPAWN_MapScripts_Hole_Text_4:
# 23 "data/maps/SPAWN/scripts.pory"
	.string "Are you sure you are ready?$"

SPAWN_MapScripts_Hole_Text_5:
# 27 "data/maps/SPAWN/scripts.pory"
	.string "...one step further into the abyss.$"

SPAWN_MapScripts_Hole_Text_6:
# 29 "data/maps/SPAWN/scripts.pory"
	.string ".............$"

SPAWN_MapScripts_Hole_Text_7:
# 31 "data/maps/SPAWN/scripts.pory"
	.string "You've been falling for a long time...$"

SPAWN_MapScripts_Hole_Text_8:
# 33 "data/maps/SPAWN/scripts.pory"
	.string "........$"

SPAWN_MapScripts_Hole_Text_9:
# 35 "data/maps/SPAWN/scripts.pory"
	.string "You've been falling for so long, you\nalmost forget the feeling of standing on\pthe ground.$"

SPAWN_MapScripts_Hole_Text_10:
# 37 "data/maps/SPAWN/scripts.pory"
	.string "...until....$"

Script_Save_Text_0:
# 360 "data/maps/SPAWN/scripts.pory"
	.string "You exhale a sigh of relief.$"
