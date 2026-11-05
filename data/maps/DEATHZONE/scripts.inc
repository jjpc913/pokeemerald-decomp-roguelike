# 1 "data/maps/DEATHZONE/scripts.pory"
DEATHZONE_MapScripts::
# 2 "data/maps/DEATHZONE/scripts.pory"
	.byte 0

DEATHZONE_EventScript_Mothman_Talk::
# 6 "data/maps/DEATHZONE/scripts.pory"
	lockall
# 7 "data/maps/DEATHZONE/scripts.pory"
	faceplayer
# 8 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Mothman_Talk_Text_0
# 9 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Mothman_Talk_Text_1
# 10 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Mothman_Talk_Text_2
# 11 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Mothman_Talk_Text_3
# 12 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Mothman_Talk_Text_4
# 13 "data/maps/DEATHZONE/scripts.pory"
	releaseall
	return


DEATHZONE_EventScript_Lady_Talk::
# 17 "data/maps/DEATHZONE/scripts.pory"
	lockall
# 18 "data/maps/DEATHZONE/scripts.pory"
	faceplayer
# 19 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Lady_Talk_Text_0
# 20 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Lady_Talk_Text_1
# 21 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Lady_Talk_Text_2
# 22 "data/maps/DEATHZONE/scripts.pory"
	releaseall
	return


DEATHZONE_EventScript_Rose_Talk::
# 26 "data/maps/DEATHZONE/scripts.pory"
	lockall
# 27 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Rose_Talk_Text_0
# 28 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Rose_Talk_Text_1
# 29 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Rose_Talk_Text_2
# 30 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Rose_Talk_Text_3
# 31 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Rose_Talk_Text_4
# 32 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Rose_Talk_Text_5
# 33 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Rose_Talk_Text_6
# 34 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Rose_Talk_Text_7
# 35 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Rose_Talk_Text_8
# 36 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Rose_Talk_Text_9
# 37 "data/maps/DEATHZONE/scripts.pory"
	msgbox DEATHZONE_EventScript_Rose_Talk_Text_10
# 38 "data/maps/DEATHZONE/scripts.pory"
	trainerbattle_single TRAINER_ALEXA, RoseIntro, RoseOutro
	return


DEATHZONE_EventScript_Mothman_Talk_Text_0:
# 8 "data/maps/DEATHZONE/scripts.pory"
	.string "Ah...$"

DEATHZONE_EventScript_Mothman_Talk_Text_1:
# 9 "data/maps/DEATHZONE/scripts.pory"
	.string "What a shame, what a shame.$"

DEATHZONE_EventScript_Mothman_Talk_Text_2:
# 10 "data/maps/DEATHZONE/scripts.pory"
	.string "I had high hopes for you.$"

DEATHZONE_EventScript_Mothman_Talk_Text_3:
# 11 "data/maps/DEATHZONE/scripts.pory"
	.string "...oh well.$"

DEATHZONE_EventScript_Mothman_Talk_Text_4:
# 12 "data/maps/DEATHZONE/scripts.pory"
	.string "On to the next one.$"

DEATHZONE_EventScript_Lady_Talk_Text_0:
# 19 "data/maps/DEATHZONE/scripts.pory"
	.string "Dearest challenger...$"

DEATHZONE_EventScript_Lady_Talk_Text_1:
# 20 "data/maps/DEATHZONE/scripts.pory"
	.string "It saddens me to see you throw\nyour life away like this..$"

DEATHZONE_EventScript_Lady_Talk_Text_2:
# 21 "data/maps/DEATHZONE/scripts.pory"
	.string "$"

DEATHZONE_EventScript_Rose_Talk_Text_0:
# 27 "data/maps/DEATHZONE/scripts.pory"
	.string "...here I stand to fulfill my duty\nas the game master.$"

DEATHZONE_EventScript_Rose_Talk_Text_1:
# 28 "data/maps/DEATHZONE/scripts.pory"
	.string "The founder...and the reaper.$"

DEATHZONE_EventScript_Rose_Talk_Text_2:
# 29 "data/maps/DEATHZONE/scripts.pory"
	.string "Hello again, {PLAYER}.$"

DEATHZONE_EventScript_Rose_Talk_Text_3:
# 30 "data/maps/DEATHZONE/scripts.pory"
	.string "I'm sorry things have to end this\nway.$"

DEATHZONE_EventScript_Rose_Talk_Text_4:
# 31 "data/maps/DEATHZONE/scripts.pory"
	.string "I don't want to fight you.$"

DEATHZONE_EventScript_Rose_Talk_Text_5:
# 32 "data/maps/DEATHZONE/scripts.pory"
	.string "Really...I don't.$"

DEATHZONE_EventScript_Rose_Talk_Text_6:
# 33 "data/maps/DEATHZONE/scripts.pory"
	.string "I...don't want to do any of this.$"

DEATHZONE_EventScript_Rose_Talk_Text_7:
# 34 "data/maps/DEATHZONE/scripts.pory"
	.string "But there's...nothing I can do.$"

DEATHZONE_EventScript_Rose_Talk_Text_8:
# 35 "data/maps/DEATHZONE/scripts.pory"
	.string "Perhaps we'll be here forever.$"

DEATHZONE_EventScript_Rose_Talk_Text_9:
# 36 "data/maps/DEATHZONE/scripts.pory"
	.string "Well, I've talked for too long.$"

DEATHZONE_EventScript_Rose_Talk_Text_10:
# 37 "data/maps/DEATHZONE/scripts.pory"
	.string "You've wished for a swift death,\nand now, I am prepared to deliver it\pupon you.$"

RoseIntro::
# 41 "data/maps/DEATHZONE/scripts.pory"
	.string "Please, be at peace, {PLAYER}.$"

RoseOutro::
# 45 "data/maps/DEATHZONE/scripts.pory"
	.string "...!$"
