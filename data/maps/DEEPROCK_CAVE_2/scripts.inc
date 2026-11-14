DEEPROCK_CAVE_2_MapScripts::
# 2 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DEEPROCK_CAVE_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DEEPROCK_CAVE_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	checkitem ITEM_WELLSPRING_MASK
# 4 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DEEPROCK_CAVE_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

DEEPROCK_CAVE_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	setflag FLAG_CAVE_CULTIST
	return


DEEPROCK_CAVE_2_EventScripts_Ball1::
# 12 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	lockall
# 13 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	goto_if_unset FLAG_CAVE_BALL4, DEEPROCK_CAVE_2_EventScripts_Ball1_2
DEEPROCK_CAVE_2_EventScripts_Ball1_1:
# 18 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	releaseall
	return

DEEPROCK_CAVE_2_EventScripts_Ball1_2:
# 14 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	call Rummage_Rare
# 15 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	setflag FLAG_CAVE_BALL4
# 16 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	msgbox DEEPROCK_CAVE_2_EventScripts_Ball1_Text_0
	goto DEEPROCK_CAVE_2_EventScripts_Ball1_1


DEEPROCK_CAVE_2_GetKey::
# 22 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	lockall
# 23 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	clearflag FLAG_CAVE_CULTIST
# 24 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	giveitem ITEM_WELLSPRING_MASK, 1
# 25 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	addobject 1
# 26 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	releaseall
	return


DEEPROCK_CAVE_2_EventScript_Cultist::
# 30 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, GABRIELLE_INTRO, GABRIELLE_OUTRO
# 31 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	msgbox DEEPROCK_CAVE_2_EventScript_Cultist_Text_0
	return


DEEPROCK_CAVE_2_EventScripts_Ball1_Text_0:
# 16 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	.string "Trope achieved.$"

DEEPROCK_CAVE_2_EventScript_Cultist_Text_0:
# 31 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	.string "Why...$"

GABRIELLE_INTRO::
# 34 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	.string "LADY OF THE SNOW...PLEASE...\nGUIDE MY HAND!$"

GABRIELLE_OUTRO::
# 38 "data/maps/DEEPROCK_CAVE_2/scripts.pory"
	.string "WHY...HAVE YOU ABANDONED US?$"
