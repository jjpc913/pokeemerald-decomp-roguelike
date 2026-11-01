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

