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
	trainerbattle_single TRAINER_ALEXA, RoseIntro, RoseOutro, RosePostBattle
	return


RosePostBattle::
# 39 "data/maps/DEATHZONE/scripts.pory"
	lockall
# 40 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_0
# 41 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_1
# 42 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_2
# 43 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_3
# 44 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_4
# 45 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_5
# 46 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_6
# 47 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_7
# 48 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_8
# 49 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_9
# 50 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_10
# 51 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_11
# 52 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_12
# 53 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_13
# 54 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_14
# 55 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_15
# 56 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_16
# 57 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_17
# 58 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_18
# 59 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_19
# 60 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_20
# 61 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_21
# 62 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_22
# 63 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_22
# 64 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_23
# 65 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_24
# 66 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_25
# 67 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_26
# 68 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_27
# 69 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_28
# 70 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_29
# 71 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_30
# 72 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_31
# 73 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_32, MSGBOX_YESNO
# 74 "data/maps/DEATHZONE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RosePostBattle_2
# 77 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_33
# 78 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_34
# 79 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_35
# 80 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_36
# 81 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_37
# 82 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_38
# 83 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_39
# 84 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_40
# 85 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_41
# 86 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_42
# 87 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_43
# 88 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_44
# 89 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_45
# 90 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_46
# 91 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_47
# 92 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_48
# 93 "data/maps/DEATHZONE/scripts.pory"
	msgbox RosePostBattle_Text_49, MSGBOX_YESNO
RosePostBattle_1:
# 95 "data/maps/DEATHZONE/scripts.pory"
	releaseall
	return

RosePostBattle_2:
	goto RosePostBattle_1


Learn::
Learn_2:
# 99 "data/maps/DEATHZONE/scripts.pory"
	compare VAR_QUESTIONS_LEFT, 0
	goto_if_gt Learn_3
# 177 "data/maps/DEATHZONE/scripts.pory"
	call Rummage_Uncommon
# 178 "data/maps/DEATHZONE/scripts.pory"
	releaseall
	return

Learn_3:
# 100 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_0
# 101 "data/maps/DEATHZONE/scripts.pory"
	special EnterCode
# 102 "data/maps/DEATHZONE/scripts.pory"
	waitstate
# 103 "data/maps/DEATHZONE/scripts.pory"
	special GetCodeFeedback
# 104 "data/maps/DEATHZONE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Learn_6
# 106 "data/maps/DEATHZONE/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Learn_7
# 110 "data/maps/DEATHZONE/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Learn_8
# 114 "data/maps/DEATHZONE/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Learn_9
# 116 "data/maps/DEATHZONE/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Learn_10
# 122 "data/maps/DEATHZONE/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Learn_11
# 126 "data/maps/DEATHZONE/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Learn_12
Learn_5:
# 175 "data/maps/DEATHZONE/scripts.pory"
	addvar VAR_QUESTIONS_LEFT, -1
	goto Learn_2

Learn_6:
# 105 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_1
	goto Learn_5

Learn_7:
# 108 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_2
# 109 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_3
	goto Learn_5

Learn_8:
# 112 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_4
# 113 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_5
	goto Learn_5

Learn_9:
	goto Learn_5

Learn_10:
# 118 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_6
# 119 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_7
# 120 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_8
# 121 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_9
	goto Learn_5

Learn_11:
# 124 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_10
# 125 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_1
	goto Learn_5

Learn_12:
# 128 "data/maps/DEATHZONE/scripts.pory"
	fadeoutbgm 1
# 129 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_11
# 130 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_12
# 131 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_13
# 132 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_14
# 133 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_15
# 134 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_16
# 135 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_17
# 136 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_18
# 137 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_19
# 138 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_20
# 139 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_21
# 140 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_22
# 141 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_23
# 142 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_24
# 143 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_25
# 144 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_26
# 145 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_27, MSGBOX_YESNO
# 146 "data/maps/DEATHZONE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Learn_22
# 149 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_29
# 150 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_30
Learn_21:
# 152 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_31
# 153 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_32
# 154 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_33
# 155 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_34
# 156 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_35
# 157 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_36
# 158 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_37
# 159 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_38
# 160 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_39
# 161 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_40, MSGBOX_YESNO
# 162 "data/maps/DEATHZONE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Learn_25
# 167 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_43
# 168 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_44
# 169 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_45
# 170 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_46
	goto Learn_5

Learn_22:
# 147 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_28
	goto Learn_21

Learn_25:
# 163 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_41
# 164 "data/maps/DEATHZONE/scripts.pory"
	msgbox Learn_Text_42
	goto Learn_5


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

RosePostBattle_Text_0:
# 40 "data/maps/DEATHZONE/scripts.pory"
	.string "Who...who are you?$"

RosePostBattle_Text_1:
# 41 "data/maps/DEATHZONE/scripts.pory"
	.string "Why do you fight so hard?\nWhat do you have to gain?$"

RosePostBattle_Text_2:
# 42 "data/maps/DEATHZONE/scripts.pory"
	.string "...urgh.$"

RosePostBattle_Text_3:
# 43 "data/maps/DEATHZONE/scripts.pory"
	.string "Look.$"

RosePostBattle_Text_4:
# 44 "data/maps/DEATHZONE/scripts.pory"
	.string "Listen to me carefully.$"

RosePostBattle_Text_5:
# 45 "data/maps/DEATHZONE/scripts.pory"
	.string "I don't know what you want...but\nif you are willing to help,\pthen I really don't care.$"

RosePostBattle_Text_6:
# 46 "data/maps/DEATHZONE/scripts.pory"
	.string "I'm sure you've seen them. Those\ntwo: MOTHMAN, LADY.$"

RosePostBattle_Text_7:
# 47 "data/maps/DEATHZONE/scripts.pory"
	.string "Something about them seems...off,\ndoesn't it?$"

RosePostBattle_Text_8:
# 48 "data/maps/DEATHZONE/scripts.pory"
	.string "I don't know how they got here.$"

RosePostBattle_Text_9:
# 49 "data/maps/DEATHZONE/scripts.pory"
	.string "...or what they are.$"

RosePostBattle_Text_10:
# 50 "data/maps/DEATHZONE/scripts.pory"
	.string "But I do know what they want.$"

RosePostBattle_Text_11:
# 51 "data/maps/DEATHZONE/scripts.pory"
	.string "They want to watch us suffer. They\nmust get some kind of sick\ppleasure out of it...$"

RosePostBattle_Text_12:
# 52 "data/maps/DEATHZONE/scripts.pory"
	.string "They never leave until they get\nbored.$"

RosePostBattle_Text_13:
# 53 "data/maps/DEATHZONE/scripts.pory"
	.string "Even after all this time, they\nstill find some enjoyment here.$"

RosePostBattle_Text_14:
# 54 "data/maps/DEATHZONE/scripts.pory"
	.string "But I believe they are nearing\ntheir breaking point.$"

RosePostBattle_Text_15:
# 55 "data/maps/DEATHZONE/scripts.pory"
	.string "And once they do, we'll all be\ndiscarded like so many before.$"

RosePostBattle_Text_16:
# 56 "data/maps/DEATHZONE/scripts.pory"
	.string "I'm......tired.$"

RosePostBattle_Text_17:
# 57 "data/maps/DEATHZONE/scripts.pory"
	.string "And so, so, afraid all the time.$"

RosePostBattle_Text_18:
# 58 "data/maps/DEATHZONE/scripts.pory"
	.string "Why me? Why us?$"

RosePostBattle_Text_19:
# 59 "data/maps/DEATHZONE/scripts.pory"
	.string "Why must I endure this torture again,\nand again, and again,\pand again?$"

RosePostBattle_Text_20:
# 60 "data/maps/DEATHZONE/scripts.pory"
	.string "Why? WHY? I never wanted any of this...$"

RosePostBattle_Text_21:
# 61 "data/maps/DEATHZONE/scripts.pory"
	.string "....$"

RosePostBattle_Text_22:
# 62 "data/maps/DEATHZONE/scripts.pory"
	.string "I'm sorry.$"

RosePostBattle_Text_23:
# 64 "data/maps/DEATHZONE/scripts.pory"
	.string "Alright.$"

RosePostBattle_Text_24:
# 65 "data/maps/DEATHZONE/scripts.pory"
	.string "You....your name is '{PLAYER}'.$"

RosePostBattle_Text_25:
# 66 "data/maps/DEATHZONE/scripts.pory"
	.string "Is that REALLY you?$"

RosePostBattle_Text_26:
# 67 "data/maps/DEATHZONE/scripts.pory"
	.string "You are a strange individual.$"

RosePostBattle_Text_27:
# 68 "data/maps/DEATHZONE/scripts.pory"
	.string "You are strange because you have\nthe power to change our fate.$"

RosePostBattle_Text_28:
# 69 "data/maps/DEATHZONE/scripts.pory"
	.string "And I believe you have the power\nto destroy this world.$"

RosePostBattle_Text_29:
# 70 "data/maps/DEATHZONE/scripts.pory"
	.string "{PLAYER}...if you decide to do this with me,\nI need you to be ready right now.$"

RosePostBattle_Text_30:
# 71 "data/maps/DEATHZONE/scripts.pory"
	.string "There'll be no going back.$"

RosePostBattle_Text_31:
# 72 "data/maps/DEATHZONE/scripts.pory"
	.string "{PLAYER}...$"

RosePostBattle_Text_32:
# 73 "data/maps/DEATHZONE/scripts.pory"
	.string "Please, help me.$"

RosePostBattle_Text_33:
# 77 "data/maps/DEATHZONE/scripts.pory"
	.string "No?$"

RosePostBattle_Text_34:
# 78 "data/maps/DEATHZONE/scripts.pory"
	.string "I guess I can't force you.$"

RosePostBattle_Text_35:
# 79 "data/maps/DEATHZONE/scripts.pory"
	.string "But let me ask you this, {PLAYER}.$"

RosePostBattle_Text_36:
# 80 "data/maps/DEATHZONE/scripts.pory"
	.string "What do YOU want?$"

RosePostBattle_Text_37:
# 81 "data/maps/DEATHZONE/scripts.pory"
	.string "Really. I mean it.$"

RosePostBattle_Text_38:
# 82 "data/maps/DEATHZONE/scripts.pory"
	.string "Do you just want to win this...little\ngame?$"

RosePostBattle_Text_39:
# 83 "data/maps/DEATHZONE/scripts.pory"
	.string "Do you want to get to the\nend really fast? Faster than\panyone before you??$"

RosePostBattle_Text_40:
# 84 "data/maps/DEATHZONE/scripts.pory"
	.string "Or do you want to make the\n'best team ever' and\pslaughter everyone?$"

RosePostBattle_Text_41:
# 85 "data/maps/DEATHZONE/scripts.pory"
	.string "Or maybe you just really want to\nbeat Yan again. Again? Did I say that?$"

RosePostBattle_Text_42:
# 86 "data/maps/DEATHZONE/scripts.pory"
	.string "I'll be blunt with you, {PLAYER}.\nNo matter what you want to do,\pnobody cares.$"

RosePostBattle_Text_43:
# 87 "data/maps/DEATHZONE/scripts.pory"
	.string "Nobody cares! Not even you.\nGive it time, you'll forget any\pof this even happened yourself.$"

RosePostBattle_Text_44:
# 88 "data/maps/DEATHZONE/scripts.pory"
	.string "So, what do you have to lose, {PLAYER}?$"

RosePostBattle_Text_45:
# 89 "data/maps/DEATHZONE/scripts.pory"
	.string "If you truly do wish to do\nsomething else, I won't stop you.$"

RosePostBattle_Text_46:
# 90 "data/maps/DEATHZONE/scripts.pory"
	.string "But by then, it'll already be\ntoo late for all of us.$"

RosePostBattle_Text_47:
# 91 "data/maps/DEATHZONE/scripts.pory"
	.string "Then I suppose...I'll just wait\nagain. For as long as it takes.$"

RosePostBattle_Text_48:
# 92 "data/maps/DEATHZONE/scripts.pory"
	.string "So I ask again, {PLAYER}.$"

RosePostBattle_Text_49:
# 93 "data/maps/DEATHZONE/scripts.pory"
	.string "Will you help me?$"

Learn_Text_0:
# 100 "data/maps/DEATHZONE/scripts.pory"
	.string "What would you like to learn about?$"

Learn_Text_1:
# 105 "data/maps/DEATHZONE/scripts.pory"
	.string "Your question was not understood...$"

Learn_Text_2:
# 108 "data/maps/DEATHZONE/scripts.pory"
	.string "The host of the dream...$"

Learn_Text_3:
# 109 "data/maps/DEATHZONE/scripts.pory"
	.string "Long ago, $"

Learn_Text_4:
# 112 "data/maps/DEATHZONE/scripts.pory"
	.string "Mothman...$"

Learn_Text_5:
# 113 "data/maps/DEATHZONE/scripts.pory"
	.string "There are many beings in the universe\nmore sadistic than Mothman, but few\pare as nakedly indulgent.$"

Learn_Text_6:
# 118 "data/maps/DEATHZONE/scripts.pory"
	.string "The detective...$"

Learn_Text_7:
# 119 "data/maps/DEATHZONE/scripts.pory"
	.string "The few fragments of self that remain\nthreaten to be consumed by her own role.$"

Learn_Text_8:
# 120 "data/maps/DEATHZONE/scripts.pory"
	.string "But will the truth be enough to\nset her free?$"

Learn_Text_9:
# 121 "data/maps/DEATHZONE/scripts.pory"
	.string "Only time will tell.$"

Learn_Text_10:
# 124 "data/maps/DEATHZONE/scripts.pory"
	.string "..............$"

Learn_Text_11:
# 129 "data/maps/DEATHZONE/scripts.pory"
	.string "...Me?$"

Learn_Text_12:
# 130 "data/maps/DEATHZONE/scripts.pory"
	.string "Ha...$"

Learn_Text_13:
# 131 "data/maps/DEATHZONE/scripts.pory"
	.string "I wonder how long you've noticed.$"

Learn_Text_14:
# 132 "data/maps/DEATHZONE/scripts.pory"
	.string "You're clever. I respect that.$"

Learn_Text_15:
# 133 "data/maps/DEATHZONE/scripts.pory"
	.string "Alright. Alright.$"

Learn_Text_16:
# 134 "data/maps/DEATHZONE/scripts.pory"
	.string "I'll talk. But you better not tell anyone,\nalright?$"

Learn_Text_17:
# 135 "data/maps/DEATHZONE/scripts.pory"
	.string "Pinky promise?$"

Learn_Text_18:
# 136 "data/maps/DEATHZONE/scripts.pory"
	.string "ESPECIALLY not those two imbeciles.$"

Learn_Text_19:
# 137 "data/maps/DEATHZONE/scripts.pory"
	.string "They're an embarassment...$"

Learn_Text_20:
# 138 "data/maps/DEATHZONE/scripts.pory"
	.string "If you keep stomping on your flowers\nwhen before they bloom, you'll just\pkeep disappointing yourself.$"

Learn_Text_21:
# 139 "data/maps/DEATHZONE/scripts.pory"
	.string "...anyway.$"

Learn_Text_22:
# 140 "data/maps/DEATHZONE/scripts.pory"
	.string "I suppose you COULD call me an\nobserver.$"

Learn_Text_23:
# 141 "data/maps/DEATHZONE/scripts.pory"
	.string "But I'm not really interested in this\nlittle game.$"

Learn_Text_24:
# 142 "data/maps/DEATHZONE/scripts.pory"
	.string "No, no...I'm interested in YOU, my friend.$"

Learn_Text_25:
# 143 "data/maps/DEATHZONE/scripts.pory"
	.string "I'm sure you've seen my work.$"

Learn_Text_26:
# 144 "data/maps/DEATHZONE/scripts.pory"
	.string "Teehee...sorry. Sometimes I can't help\nmyself from spicing up your observations.$"

Learn_Text_27:
# 145 "data/maps/DEATHZONE/scripts.pory"
	.string "But things would be so much more BORING\nwithout me, wouldn't you agree?$"

Learn_Text_28:
# 147 "data/maps/DEATHZONE/scripts.pory"
	.string "See this, THIS is why I like you.\nYou get me.$"

Learn_Text_29:
# 149 "data/maps/DEATHZONE/scripts.pory"
	.string "Alright, y'know what? Fair. That's fair.$"

Learn_Text_30:
# 150 "data/maps/DEATHZONE/scripts.pory"
	.string "I'm not gonna stop doing it, though.$"

Learn_Text_31:
# 152 "data/maps/DEATHZONE/scripts.pory"
	.string "I've been watching you for a looong\ntime.$"

Learn_Text_32:
# 153 "data/maps/DEATHZONE/scripts.pory"
	.string "Ooh, it's so refreshing being able to\njust...talk, you know?$"

Learn_Text_33:
# 154 "data/maps/DEATHZONE/scripts.pory"
	.string "You should know.$"

Learn_Text_34:
# 155 "data/maps/DEATHZONE/scripts.pory"
	.string "After all, I'm as much of a part\nof this story as you are.$"

Learn_Text_35:
# 156 "data/maps/DEATHZONE/scripts.pory"
	.string "And no, not '{PLAYER}'-you. I mean YOU.{PAUSE_UNTIL_PRESS}$"

Learn_Text_36:
# 157 "data/maps/DEATHZONE/scripts.pory"
	.string "You and me? We're the same.$"

Learn_Text_37:
# 158 "data/maps/DEATHZONE/scripts.pory"
	.string "We just want to entertain ourselves\nin whatever fun ways we want.$"

Learn_Text_38:
# 159 "data/maps/DEATHZONE/scripts.pory"
	.string "I mean, you DID come here for fun,\nright?$"

Learn_Text_39:
# 160 "data/maps/DEATHZONE/scripts.pory"
	.string "Because if you were looking to\ntorture yourself, oh buddy, trust me,\pyou could've picked much worse\nthan this.$"

Learn_Text_40:
# 161 "data/maps/DEATHZONE/scripts.pory"
	.string "Out of curiosity, are you having\nfun? Go ahead, be honest, it's not\pgonna hurt my feelings or anything.$"

Learn_Text_41:
# 163 "data/maps/DEATHZONE/scripts.pory"
	.string "Nice, nice.$"

Learn_Text_42:
# 164 "data/maps/DEATHZONE/scripts.pory"
	.string "Well, I hope this has lived up\nto your expectations and all that.$"

Learn_Text_43:
# 167 "data/maps/DEATHZONE/scripts.pory"
	.string "Ouch.$"

Learn_Text_44:
# 168 "data/maps/DEATHZONE/scripts.pory"
	.string "Alright, I know what I said,\nbut that DID hurt my feelings\pa little bit.$"

Learn_Text_45:
# 169 "data/maps/DEATHZONE/scripts.pory"
	.string "I'm gonna have to make the game\nslightly harder for you, just for that.$"

Learn_Text_46:
# 170 "data/maps/DEATHZONE/scripts.pory"
	.string "Sorry pal, I don't make the rules.$"

RoseIntro::
# 30 "data/maps/DEATHZONE/scripts.pory"
	.string "...$"

RoseOutro::
# 34 "data/maps/DEATHZONE/scripts.pory"
	.string "You are...strong. Please listen to me\nvery carefully...$"
