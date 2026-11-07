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

RoseIntro::
# 30 "data/maps/DEATHZONE/scripts.pory"
	.string "...$"

RoseOutro::
# 34 "data/maps/DEATHZONE/scripts.pory"
	.string "You are...strong. Please listen to me very carefully.$"
