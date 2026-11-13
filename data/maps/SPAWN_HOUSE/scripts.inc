# 1 "data/maps/SPAWN_HOUSE/scripts.pory"
SPAWN_HOUSE_MapScripts::
# 2 "data/maps/SPAWN_HOUSE/scripts.pory"
	.byte 0

SPAWN_HOUSE_EventScript_Rose::
# 6 "data/maps/SPAWN_HOUSE/scripts.pory"
	lockall
# 7 "data/maps/SPAWN_HOUSE/scripts.pory"
	faceplayer
# 8 "data/maps/SPAWN_HOUSE/scripts.pory"
	goto_if_unset FLAG_TALKED_TO_ROSE, SPAWN_HOUSE_EventScript_Rose_2
# 18 "data/maps/SPAWN_HOUSE/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, SPAWN_HOUSE_EventScript_Rose_3
SPAWN_HOUSE_EventScript_Rose_1:
# 25 "data/maps/SPAWN_HOUSE/scripts.pory"
	setflag FLAG_TALKED_TO_ROSE
# 26 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_12
# 27 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_13
# 28 "data/maps/SPAWN_HOUSE/scripts.pory"
	releaseall
	return

SPAWN_HOUSE_EventScript_Rose_2:
# 9 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_0
# 10 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_1
# 11 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_2
# 12 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_3
# 13 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_4
# 14 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_5
# 15 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_6
# 16 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_7
# 17 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_8
	goto SPAWN_HOUSE_EventScript_Rose_1

SPAWN_HOUSE_EventScript_Rose_3:
# 19 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_9
# 20 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_10
# 21 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Rose_Text_11
# 22 "data/maps/SPAWN_HOUSE/scripts.pory"
	releaseall
	return


SPAWN_HOUSE_EventScript_Cabinet2::
# 32 "data/maps/SPAWN_HOUSE/scripts.pory"
	lockall
# 33 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Cabinet2_Text_0
# 34 "data/maps/SPAWN_HOUSE/scripts.pory"
	goto_if_set FLAG_CABINET2, SPAWN_HOUSE_EventScript_Cabinet2_1
# 37 "data/maps/SPAWN_HOUSE/scripts.pory"
	call Rummage_Common
# 38 "data/maps/SPAWN_HOUSE/scripts.pory"
	setflag FLAG_CABINET2
	return

SPAWN_HOUSE_EventScript_Cabinet2_1:
# 35 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Cabinet2_Text_1
	return


SPAWN_HOUSE_EventScript_Cabinet::
# 43 "data/maps/SPAWN_HOUSE/scripts.pory"
	lockall
# 44 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Cabinet2_Text_0
# 45 "data/maps/SPAWN_HOUSE/scripts.pory"
	goto_if_set FLAG_CABINET1, SPAWN_HOUSE_EventScript_Cabinet_2
# 48 "data/maps/SPAWN_HOUSE/scripts.pory"
	call Rummage_Common
# 49 "data/maps/SPAWN_HOUSE/scripts.pory"
	setflag FLAG_CABINET1
SPAWN_HOUSE_EventScript_Cabinet_1:
# 52 "data/maps/SPAWN_HOUSE/scripts.pory"
	releaseall
	return

SPAWN_HOUSE_EventScript_Cabinet_2:
# 46 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Cabinet2_Text_1
	goto SPAWN_HOUSE_EventScript_Cabinet_1


SPAWN_HOUSE_EventScript_Fridge::
# 56 "data/maps/SPAWN_HOUSE/scripts.pory"
	lockall
# 57 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Fridge_Text_0
# 58 "data/maps/SPAWN_HOUSE/scripts.pory"
	goto_if_set FLAG_FRIDGE, SPAWN_HOUSE_EventScript_Fridge_2
# 61 "data/maps/SPAWN_HOUSE/scripts.pory"
	call Rummage_Common
# 62 "data/maps/SPAWN_HOUSE/scripts.pory"
	setflag FLAG_FRIDGE
SPAWN_HOUSE_EventScript_Fridge_1:
# 64 "data/maps/SPAWN_HOUSE/scripts.pory"
	releaseall
	return

SPAWN_HOUSE_EventScript_Fridge_2:
# 59 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Cabinet2_Text_1
	goto SPAWN_HOUSE_EventScript_Fridge_1


SPAWN_HOUSE_EventScript_TV::
# 68 "data/maps/SPAWN_HOUSE/scripts.pory"
	lockall
# 69 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_TV_Text_0
# 70 "data/maps/SPAWN_HOUSE/scripts.pory"
	releaseall
	return


SPAWN_HOUSE_EventScript_Door::
# 74 "data/maps/SPAWN_HOUSE/scripts.pory"
	lockall
# 75 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Door_Text_0
# 76 "data/maps/SPAWN_HOUSE/scripts.pory"
	goto_if_set FLAG_HAS_KEY, SPAWN_HOUSE_EventScript_Door_2
SPAWN_HOUSE_EventScript_Door_1:
# 82 "data/maps/SPAWN_HOUSE/scripts.pory"
	releaseall
	return

SPAWN_HOUSE_EventScript_Door_2:
# 77 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Door_Text_1, MSGBOX_YESNO
# 78 "data/maps/SPAWN_HOUSE/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SPAWN_HOUSE_EventScript_Door_4
	goto SPAWN_HOUSE_EventScript_Door_1

SPAWN_HOUSE_EventScript_Door_4:
# 79 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Door_Text_2
	goto SPAWN_HOUSE_EventScript_Door_1


SPAWN_HOUSE_EventScript_Mudkip::
# 86 "data/maps/SPAWN_HOUSE/scripts.pory"
	lockall
# 87 "data/maps/SPAWN_HOUSE/scripts.pory"
	goto_if_set FLAG_TREECKO, SPAWN_HOUSE_EventScript_Mudkip_2
# 87 "data/maps/SPAWN_HOUSE/scripts.pory"
	goto_if_set FLAG_TORCHIC, SPAWN_HOUSE_EventScript_Mudkip_2
# 91 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Mudkip_Text_1, MSGBOX_YESNO
# 92 "data/maps/SPAWN_HOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SPAWN_HOUSE_EventScript_Mudkip_7
SPAWN_HOUSE_EventScript_Mudkip_1:
# 100 "data/maps/SPAWN_HOUSE/scripts.pory"
	releaseall
	return

SPAWN_HOUSE_EventScript_Mudkip_2:
# 88 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Mudkip_Text_0
# 89 "data/maps/SPAWN_HOUSE/scripts.pory"
	releaseall
	goto SPAWN_HOUSE_EventScript_Mudkip_1

SPAWN_HOUSE_EventScript_Mudkip_7:
# 93 "data/maps/SPAWN_HOUSE/scripts.pory"
	givemon SPECIES_MUDKIP, 10, ITEM_ORAN_BERRY
# 94 "data/maps/SPAWN_HOUSE/scripts.pory"
	setflag FLAG_MUDKIP
# 95 "data/maps/SPAWN_HOUSE/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 96 "data/maps/SPAWN_HOUSE/scripts.pory"
	removeobject 2
	goto SPAWN_HOUSE_EventScript_Mudkip_1


SPAWN_HOUSE_EventScript_Torchic::
# 104 "data/maps/SPAWN_HOUSE/scripts.pory"
	lockall
# 105 "data/maps/SPAWN_HOUSE/scripts.pory"
	goto_if_set FLAG_TREECKO, SPAWN_HOUSE_EventScript_Torchic_2
# 105 "data/maps/SPAWN_HOUSE/scripts.pory"
	goto_if_set FLAG_MUDKIP, SPAWN_HOUSE_EventScript_Torchic_2
# 109 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Torchic_Text_0, MSGBOX_YESNO
# 110 "data/maps/SPAWN_HOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SPAWN_HOUSE_EventScript_Torchic_7
SPAWN_HOUSE_EventScript_Torchic_1:
# 117 "data/maps/SPAWN_HOUSE/scripts.pory"
	releaseall
	return

SPAWN_HOUSE_EventScript_Torchic_2:
# 106 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Mudkip_Text_0
# 107 "data/maps/SPAWN_HOUSE/scripts.pory"
	releaseall
	goto SPAWN_HOUSE_EventScript_Torchic_1

SPAWN_HOUSE_EventScript_Torchic_7:
# 111 "data/maps/SPAWN_HOUSE/scripts.pory"
	givemon SPECIES_TORCHIC, 10, ITEM_ORAN_BERRY
# 112 "data/maps/SPAWN_HOUSE/scripts.pory"
	setflag FLAG_TORCHIC
# 113 "data/maps/SPAWN_HOUSE/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 114 "data/maps/SPAWN_HOUSE/scripts.pory"
	removeobject 4
	goto SPAWN_HOUSE_EventScript_Torchic_1


SPAWN_HOUSE_EventScript_Treecko::
# 121 "data/maps/SPAWN_HOUSE/scripts.pory"
	lockall
# 122 "data/maps/SPAWN_HOUSE/scripts.pory"
	goto_if_set FLAG_MUDKIP, SPAWN_HOUSE_EventScript_Treecko_2
# 122 "data/maps/SPAWN_HOUSE/scripts.pory"
	goto_if_set FLAG_TORCHIC, SPAWN_HOUSE_EventScript_Treecko_2
# 126 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Treecko_Text_0, MSGBOX_YESNO
# 127 "data/maps/SPAWN_HOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SPAWN_HOUSE_EventScript_Treecko_7
SPAWN_HOUSE_EventScript_Treecko_1:
# 134 "data/maps/SPAWN_HOUSE/scripts.pory"
	releaseall
	return

SPAWN_HOUSE_EventScript_Treecko_2:
# 123 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_Mudkip_Text_0
# 124 "data/maps/SPAWN_HOUSE/scripts.pory"
	releaseall
	goto SPAWN_HOUSE_EventScript_Treecko_1

SPAWN_HOUSE_EventScript_Treecko_7:
# 128 "data/maps/SPAWN_HOUSE/scripts.pory"
	givemon SPECIES_TREECKO, 10, ITEM_ORAN_BERRY
# 129 "data/maps/SPAWN_HOUSE/scripts.pory"
	setflag FLAG_TREECKO
# 130 "data/maps/SPAWN_HOUSE/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 131 "data/maps/SPAWN_HOUSE/scripts.pory"
	removeobject 4
	goto SPAWN_HOUSE_EventScript_Treecko_1


SPAWN_HOUSE_EventScript_OneMoreThing::
# 139 "data/maps/SPAWN_HOUSE/scripts.pory"
	lockall
# 140 "data/maps/SPAWN_HOUSE/scripts.pory"
	faceplayer
# 141 "data/maps/SPAWN_HOUSE/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, SPAWN_HOUSE_EventScript_OneMoreThing_3
SPAWN_HOUSE_EventScript_OneMoreThing_1:
# 157 "data/maps/SPAWN_HOUSE/scripts.pory"
	releaseall
	return

SPAWN_HOUSE_EventScript_OneMoreThing_2:
# 142 "data/maps/SPAWN_HOUSE/scripts.pory"
	delay 30
# 143 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_OneMoreThing_Text_0
# 144 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_OneMoreThing_Text_1
# 145 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_OneMoreThing_Text_2
# 146 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_OneMoreThing_Text_3
# 147 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_OneMoreThing_Text_4
# 148 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_OneMoreThing_Text_5
# 149 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_OneMoreThing_Text_6
# 150 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_OneMoreThing_Text_7
# 151 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_OneMoreThing_Text_8
# 152 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_OneMoreThing_Text_9
# 153 "data/maps/SPAWN_HOUSE/scripts.pory"
	msgbox SPAWN_HOUSE_EventScript_OneMoreThing_Text_10
# 154 "data/maps/SPAWN_HOUSE/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 155 "data/maps/SPAWN_HOUSE/scripts.pory"
	setflag FLAG_OMINOUS_MESSAGE
	goto SPAWN_HOUSE_EventScript_OneMoreThing_1

SPAWN_HOUSE_EventScript_OneMoreThing_3:
# 141 "data/maps/SPAWN_HOUSE/scripts.pory"
	goto_if_unset FLAG_OMINOUS_MESSAGE, SPAWN_HOUSE_EventScript_OneMoreThing_2
	goto SPAWN_HOUSE_EventScript_OneMoreThing_1


SPAWN_HOUSE_EventScript_Rose_Text_0:
# 9 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "...ah.$"

SPAWN_HOUSE_EventScript_Rose_Text_1:
# 10 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Hello, there.$"

SPAWN_HOUSE_EventScript_Rose_Text_2:
# 11 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Have we met?$"

SPAWN_HOUSE_EventScript_Rose_Text_3:
# 12 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "....$"

SPAWN_HOUSE_EventScript_Rose_Text_4:
# 13 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Well, it doesn't matter.$"

SPAWN_HOUSE_EventScript_Rose_Text_5:
# 14 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Don't bother giving me your name.$"

SPAWN_HOUSE_EventScript_Rose_Text_6:
# 15 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "I've seen enough like you.$"

SPAWN_HOUSE_EventScript_Rose_Text_7:
# 16 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "You've got an arduous journey ahead of\nyou.$"

SPAWN_HOUSE_EventScript_Rose_Text_8:
# 17 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "The least I can do is help you get\nstarted.$"

SPAWN_HOUSE_EventScript_Rose_Text_9:
# 19 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Ah...good choice.$"

SPAWN_HOUSE_EventScript_Rose_Text_10:
# 20 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "You can go ahead and take what\nyou can find from the cabinets too.$"

SPAWN_HOUSE_EventScript_Rose_Text_11:
# 21 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "You're gonna need it.$"

SPAWN_HOUSE_EventScript_Rose_Text_12:
# 26 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Pick your favorite from these Pokemon.$"

SPAWN_HOUSE_EventScript_Rose_Text_13:
# 27 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "I'm sure they'll make a useful companion.$"

SPAWN_HOUSE_EventScript_Cabinet2_Text_0:
# 33 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "You rummage through the strange woman's\ncabinet...$"

SPAWN_HOUSE_EventScript_Cabinet2_Text_1:
# 35 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "...but there's nothing left.$"

SPAWN_HOUSE_EventScript_Fridge_Text_0:
# 57 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "You rummage through the strange woman's\nfridge...$"

SPAWN_HOUSE_EventScript_TV_Text_0:
# 69 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "The TV is off.$"

SPAWN_HOUSE_EventScript_Door_Text_0:
# 75 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "There is a door here, but it's locked.$"

SPAWN_HOUSE_EventScript_Door_Text_1:
# 77 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Use SECRET KEY?$"

SPAWN_HOUSE_EventScript_Door_Text_2:
# 79 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "You slowly open the door...$"

SPAWN_HOUSE_EventScript_Mudkip_Text_0:
# 88 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "It's just a doll...$"

SPAWN_HOUSE_EventScript_Mudkip_Text_1:
# 91 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Take Mudkip, the water type?$"

SPAWN_HOUSE_EventScript_Torchic_Text_0:
# 109 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Take Torchic, the fire type?$"

SPAWN_HOUSE_EventScript_Treecko_Text_0:
# 126 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Take Treecko, the grass type?$"

SPAWN_HOUSE_EventScript_OneMoreThing_Text_0:
# 143 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "....hey.$"

SPAWN_HOUSE_EventScript_OneMoreThing_Text_1:
# 144 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "One more thing, before you go.$"

SPAWN_HOUSE_EventScript_OneMoreThing_Text_2:
# 145 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "If you happen to see a girl with\npurple hair down there...$"

SPAWN_HOUSE_EventScript_OneMoreThing_Text_3:
# 146 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "...$"

SPAWN_HOUSE_EventScript_OneMoreThing_Text_4:
# 147 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "...nevermind.$"

SPAWN_HOUSE_EventScript_OneMoreThing_Text_5:
# 148 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Just...don't let her reach the\nbottom.$"

SPAWN_HOUSE_EventScript_OneMoreThing_Text_6:
# 149 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "I don't care how you do it.$"

SPAWN_HOUSE_EventScript_OneMoreThing_Text_7:
# 150 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Under no circumstances can she\nreach the end.$"

SPAWN_HOUSE_EventScript_OneMoreThing_Text_8:
# 151 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Got that?$"

SPAWN_HOUSE_EventScript_OneMoreThing_Text_9:
# 152 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "That's all.$"

SPAWN_HOUSE_EventScript_OneMoreThing_Text_10:
# 153 "data/maps/SPAWN_HOUSE/scripts.pory"
	.string "Good luck, kid.$"
