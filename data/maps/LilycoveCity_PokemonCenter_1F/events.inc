@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/LilycoveCity_PokemonCenter_1F/map.json
@

LilycoveCity_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 0, 7, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_PokemonCenter_1F_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_BOY_1, 0, 10, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_PokemonCenter_1F_EventScript_Boy, 0
	object_event 3, OBJ_EVENT_GFX_MANIAC, 0, 11, 8, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_PokemonCenter_1F_EventScript_Maniac, 0
	object_event 4, OBJ_EVENT_GFX_VAR_0, 0, 1, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_PokemonCenter_1F_EventScript_LilycoveLady, 0
	object_event 5, OBJ_EVENT_GFX_VAR_1, 0, 2, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, LilycoveCity_PokemonCenter_1F_EventScript_ContestLadyMon, FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON

LilycoveCity_PokemonCenter_1F_MapWarps:
	warp_def 7, 8, 3, 2, MAP_LILYCOVE_CITY
	warp_def 6, 8, 3, 2, MAP_LILYCOVE_CITY
	warp_def 1, 6, 4, 0, MAP_LILYCOVE_CITY_POKEMON_CENTER_2F

LilycoveCity_PokemonCenter_1F_MapEvents::
	map_events LilycoveCity_PokemonCenter_1F_ObjectEvents, LilycoveCity_PokemonCenter_1F_MapWarps, 0x0, 0x0
