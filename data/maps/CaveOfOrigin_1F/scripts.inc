CaveOfOrigin_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CaveOfOrigin_1F_OnTransition
	.byte 0

CaveOfOrigin_1F_OnTransition:
	call_if_set FLAG_CAVE_BALL_1, CaveOfOrigin_EventScript_DisableTriggers
	end
