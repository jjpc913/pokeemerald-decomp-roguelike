# 1 "data/maps/CLEARING_SHOP/scripts.pory"
CLEARING_SHOP_MapScripts::
# 2 "data/maps/CLEARING_SHOP/scripts.pory"
	.byte 0

CLEARING_SHOP_CLERK::
# 6 "data/maps/CLEARING_SHOP/scripts.pory"
	lockall
# 7 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_0
# 8 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_1
# 9 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_2
# 10 "data/maps/CLEARING_SHOP/scripts.pory"
	goto_if_set FLAG_THIEF, CLEARING_SHOP_CLERK_2
CLEARING_SHOP_CLERK_1:
# 54 "data/maps/CLEARING_SHOP/scripts.pory"
	releaseall
	return

CLEARING_SHOP_CLERK_2:
# 11 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_3
# 12 "data/maps/CLEARING_SHOP/scripts.pory"
	goto_if_set FLAG_TALKED_CLERK, CLEARING_SHOP_CLERK_5
# 20 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_8
# 21 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_9
# 22 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_10
# 23 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_11
# 24 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_12
# 25 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_13
# 26 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_14
# 27 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_15
# 28 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_16
# 29 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_17
# 30 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_18
# 31 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_16
# 32 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_19
# 33 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_20
# 34 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_21
# 35 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_22
# 36 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_23
# 37 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_24
# 38 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_25
# 39 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_26
# 40 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_27
# 41 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_28
# 42 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_29, MSGBOX_YESNO
# 43 "data/maps/CLEARING_SHOP/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CLEARING_SHOP_CLERK_7
# 49 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_33
# 50 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_34
# 51 "data/maps/CLEARING_SHOP/scripts.pory"
	setflag FLAG_TALKED_CLERK
	goto CLEARING_SHOP_CLERK_1

CLEARING_SHOP_CLERK_5:
# 13 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_4
# 14 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_5
# 15 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_6
# 16 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_7
# 17 "data/maps/CLEARING_SHOP/scripts.pory"
	releaseall
	return

CLEARING_SHOP_CLERK_7:
# 44 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_30
# 45 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_31
# 46 "data/maps/CLEARING_SHOP/scripts.pory"
	msgbox CLEARING_SHOP_CLERK_Text_32
# 47 "data/maps/CLEARING_SHOP/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, LADY_OUTRO
	goto CLEARING_SHOP_CLERK_1


CLEARING_SHOP_CLERK_Text_0:
# 7 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "Hello, there.$"

CLEARING_SHOP_CLERK_Text_1:
# 8 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "Wecome to my humble store.$"

CLEARING_SHOP_CLERK_Text_2:
# 9 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "Please, have a look at what I have to offer.$"

CLEARING_SHOP_CLERK_Text_3:
# 11 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "...is what I would say, normally.$"

CLEARING_SHOP_CLERK_Text_4:
# 13 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "You still have a job to do.$"

CLEARING_SHOP_CLERK_Text_5:
# 14 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "We have nothing to discuss yet.$"

CLEARING_SHOP_CLERK_Text_6:
# 15 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "Kill DUBOIS.$"

CLEARING_SHOP_CLERK_Text_7:
# 16 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "That is all.$"

CLEARING_SHOP_CLERK_Text_8:
# 20 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "But you...I have nothing to offer you.$"

CLEARING_SHOP_CLERK_Text_9:
# 21 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "You've got some balls showing\nyour face around here, thief.$"

CLEARING_SHOP_CLERK_Text_10:
# 22 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "You thought I wouldn't notice?$"

CLEARING_SHOP_CLERK_Text_11:
# 23 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "I should kill you where you stand.$"

CLEARING_SHOP_CLERK_Text_12:
# 24 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "...$"

CLEARING_SHOP_CLERK_Text_13:
# 25 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "You know what...$"

CLEARING_SHOP_CLERK_Text_14:
# 26 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "You've been through enough.$"

CLEARING_SHOP_CLERK_Text_15:
# 27 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "Just return the stuff you stole,\nand we can put this behind us.$"

CLEARING_SHOP_CLERK_Text_16:
# 28 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "....$"

CLEARING_SHOP_CLERK_Text_17:
# 29 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "You don't have them anymore...do you?$"

CLEARING_SHOP_CLERK_Text_18:
# 30 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "You already used those items...$"

CLEARING_SHOP_CLERK_Text_19:
# 32 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "Alright, {PLAYER}.$"

CLEARING_SHOP_CLERK_Text_20:
# 33 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "I'll give you one last chance.$"

CLEARING_SHOP_CLERK_Text_21:
# 34 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "There is a man running around\nhere and causing trouble.$"

CLEARING_SHOP_CLERK_Text_22:
# 35 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "His name is DUBOIS.$"

CLEARING_SHOP_CLERK_Text_23:
# 36 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "He has black hair and a purple jacket.$"

CLEARING_SHOP_CLERK_Text_24:
# 37 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "I'd deal with him myself, but\nI have my own role to play.$"

CLEARING_SHOP_CLERK_Text_25:
# 38 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "Your job is simple.$"

CLEARING_SHOP_CLERK_Text_26:
# 39 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "I need you to kill him for me.$"

CLEARING_SHOP_CLERK_Text_27:
# 40 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "Do that, and we will be square.$"

CLEARING_SHOP_CLERK_Text_28:
# 41 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "This is my last offer for you.$"

CLEARING_SHOP_CLERK_Text_29:
# 42 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "Will you accept, {PLAYER}?$"

CLEARING_SHOP_CLERK_Text_30:
# 44 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "I see.$"

CLEARING_SHOP_CLERK_Text_31:
# 45 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "Well, that's fine.$"

CLEARING_SHOP_CLERK_Text_32:
# 46 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "I'm perfectly happy just killing you instead.$"

CLEARING_SHOP_CLERK_Text_33:
# 49 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "Excellent.$"

CLEARING_SHOP_CLERK_Text_34:
# 50 "data/maps/CLEARING_SHOP/scripts.pory"
	.string "Good luck out there.$"
