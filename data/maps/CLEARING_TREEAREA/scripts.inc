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


CLEARING_TREEAREA_EventScript_Tree_Text_0:
# 8 "data/maps/CLEARING_TREEAREA/scripts.pory"
	.string "$"

CLEARING_TREEAREA_EventScript_Tree_Text_1:
# 9 "data/maps/CLEARING_TREEAREA/scripts.pory"
	.string "(This tree looks cuttable.)$"

CLEARING_TREEAREA_EventScript_Tree_Text_2:
# 10 "data/maps/CLEARING_TREEAREA/scripts.pory"
	.string "(...but not by a Pokemon.)$"
