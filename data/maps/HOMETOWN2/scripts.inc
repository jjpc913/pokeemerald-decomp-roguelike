# 1 "data/maps/HOMETOWN2/scripts.pory"
HOMETOWN2_MapScripts::
# 2 "data/maps/HOMETOWN2/scripts.pory"
	.byte 0

HOMETOWN2_EventScript_Mothman::
# 6 "data/maps/HOMETOWN2/scripts.pory"
	lockall
# 7 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_0
# 8 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_1
# 9 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_2
# 10 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_3
# 11 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_4
# 12 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_5
# 13 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_6
# 14 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_7
# 15 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_8
# 16 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_9
# 17 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_10
# 18 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_11
# 19 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_12
# 20 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_13
# 21 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_14
# 22 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_15
# 23 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_16
# 24 "data/maps/HOMETOWN2/scripts.pory"
	msgbox HOMETOWN2_EventScript_Mothman_Text_17, MSGBOX_YESNO
# 25 "data/maps/HOMETOWN2/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, MOTHMAN_INTRO, MOTHMAN_OUTRO
	return


HOMETOWN2_EventScript_Mothman_Text_0:
# 7 "data/maps/HOMETOWN2/scripts.pory"
	.string "...oh?$"

HOMETOWN2_EventScript_Mothman_Text_1:
# 8 "data/maps/HOMETOWN2/scripts.pory"
	.string "{PLAYER}! What an excellent surprise.$"

HOMETOWN2_EventScript_Mothman_Text_2:
# 9 "data/maps/HOMETOWN2/scripts.pory"
	.string "Don't mind the mess...I can\nget a little frustrated sometimes!$"

HOMETOWN2_EventScript_Mothman_Text_3:
# 10 "data/maps/HOMETOWN2/scripts.pory"
	.string "You....you...$"

HOMETOWN2_EventScript_Mothman_Text_4:
# 11 "data/maps/HOMETOWN2/scripts.pory"
	.string "I really...despise you, kid.$"

HOMETOWN2_EventScript_Mothman_Text_5:
# 12 "data/maps/HOMETOWN2/scripts.pory"
	.string "You have absolutely no idea\nwhat you are messing with.$"

HOMETOWN2_EventScript_Mothman_Text_6:
# 13 "data/maps/HOMETOWN2/scripts.pory"
	.string "You just had to go and\nfuck with us.$"

HOMETOWN2_EventScript_Mothman_Text_7:
# 14 "data/maps/HOMETOWN2/scripts.pory"
	.string "For no benefit of your own, mind you.$"

HOMETOWN2_EventScript_Mothman_Text_8:
# 15 "data/maps/HOMETOWN2/scripts.pory"
	.string "You can walk away at any time.$"

HOMETOWN2_EventScript_Mothman_Text_9:
# 16 "data/maps/HOMETOWN2/scripts.pory"
	.string "But you don't.$"

HOMETOWN2_EventScript_Mothman_Text_10:
# 17 "data/maps/HOMETOWN2/scripts.pory"
	.string "That really pisses me off.$"

HOMETOWN2_EventScript_Mothman_Text_11:
# 18 "data/maps/HOMETOWN2/scripts.pory"
	.string "I'm really not supposed to fight you.$"

HOMETOWN2_EventScript_Mothman_Text_12:
# 19 "data/maps/HOMETOWN2/scripts.pory"
	.string "So how about this, kid. A\nfriendly wager.$"

HOMETOWN2_EventScript_Mothman_Text_13:
# 20 "data/maps/HOMETOWN2/scripts.pory"
	.string "You love stuff like this, right?$"

HOMETOWN2_EventScript_Mothman_Text_14:
# 21 "data/maps/HOMETOWN2/scripts.pory"
	.string "Let's make this interesting.\nI'll put my own life on the line\pjust to kick your ass.$"

HOMETOWN2_EventScript_Mothman_Text_15:
# 22 "data/maps/HOMETOWN2/scripts.pory"
	.string "But it only works both ways, kid.$"

HOMETOWN2_EventScript_Mothman_Text_16:
# 23 "data/maps/HOMETOWN2/scripts.pory"
	.string "If you lose, I'll take your entire save.$"

HOMETOWN2_EventScript_Mothman_Text_17:
# 24 "data/maps/HOMETOWN2/scripts.pory"
	.string "Well, you ready for this?$"

MOTHMAN_INTRO::
# 28 "data/maps/HOMETOWN2/scripts.pory"
	.string "That wasn't a question.$"

MOTHMAN_OUTRO::
# 32 "data/maps/HOMETOWN2/scripts.pory"
	.string "...G...goddamn.$"
