# 1 "data/maps/CLEARING_TREEAREA/scripts.pory"
CLEARING_TREEAREA_MapScripts::
# 2 "data/maps/CLEARING_TREEAREA/scripts.pory"
	.byte 0

CLEARING_TREEAREA_EventScript_Tree::
# 7 "data/maps/CLEARING_TREEAREA/scripts.pory"
	lockall
# 8 "data/maps/CLEARING_TREEAREA/scripts.pory"
	msgbox CLEARING_TREEAREA_EventScript_Tree_Text_0
# 9 "data/maps/CLEARING_TREEAREA/scripts.pory"
	msgbox CLEARING_TREEAREA_EventScript_Tree_Text_1
# 10 "data/maps/CLEARING_TREEAREA/scripts.pory"
	msgbox CLEARING_TREEAREA_EventScript_Tree_Text_2
# 11 "data/maps/CLEARING_TREEAREA/scripts.pory"
	releaseall
	return


CLEARING_TREEAREA_EventScript_Guy::
# 15 "data/maps/CLEARING_TREEAREA/scripts.pory"
	lockall
# 16 "data/maps/CLEARING_TREEAREA/scripts.pory"
	msgbox CLEARING_TREEAREA_EventScript_Guy_Text_0
# 17 "data/maps/CLEARING_TREEAREA/scripts.pory"
	msgbox CLEARING_TREEAREA_EventScript_Guy_Text_1
# 18 "data/maps/CLEARING_TREEAREA/scripts.pory"
	msgbox CLEARING_TREEAREA_EventScript_Guy_Text_2
# 19 "data/maps/CLEARING_TREEAREA/scripts.pory"
	msgbox CLEARING_TREEAREA_EventScript_Guy_Text_3
# 20 "data/maps/CLEARING_TREEAREA/scripts.pory"
	releaseall
	return


CLEARING_TREEAREA_EventScript_Tree_Text_0:
# 8 "data/maps/CLEARING_TREEAREA/scripts.pory"
	.string "$"

CLEARING_TREEAREA_EventScript_Tree_Text_1:
# 9 "data/maps/CLEARING_TREEAREA/scripts.pory"
	.string "(This tree looks cuttable.)$"

CLEARING_TREEAREA_EventScript_Tree_Text_2:
# 10 "data/maps/CLEARING_TREEAREA/scripts.pory"
	.string "(...but not by a Pokemon.)$"

CLEARING_TREEAREA_EventScript_Guy_Text_0:
# 16 "data/maps/CLEARING_TREEAREA/scripts.pory"
	.string "Oh, are you also curious about\nthat hole?$"

CLEARING_TREEAREA_EventScript_Guy_Text_1:
# 17 "data/maps/CLEARING_TREEAREA/scripts.pory"
	.string "My sister's been doing research\ninto it.$"

CLEARING_TREEAREA_EventScript_Guy_Text_2:
# 18 "data/maps/CLEARING_TREEAREA/scripts.pory"
	.string "Right now we live in the bottom\nleft house in the town.$"

CLEARING_TREEAREA_EventScript_Guy_Text_3:
# 19 "data/maps/CLEARING_TREEAREA/scripts.pory"
	.string "You should ask her about it.$"
