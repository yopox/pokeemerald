FortreeCity_Mart_EventObjects: @ 8530EAC
	object_event 1, EVENT_OBJ_GFX_MART_EMPLOYEE, 0, 1, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, 0, 0, FortreeCity_Mart_EventScript_217666, 0
	object_event 2, EVENT_OBJ_GFX_WOMAN_2, 0, 9, 3, 3, MOVEMENT_TYPE_FACE_UP, 0, 0, 0, 0, FortreeCity_Mart_EventScript_217698, 0
	object_event 3, EVENT_OBJ_GFX_GIRL_3, 0, 8, 5, 3, MOVEMENT_TYPE_WANDER_AROUND, 1, 1, 0, 0, FortreeCity_Mart_EventScript_2176A1, 0
	object_event 4, EVENT_OBJ_GFX_BOY_2, 0, 5, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, 0, 0, FortreeCity_Mart_EventScript_2176AA, 0

FortreeCity_Mart_MapWarps: @ 8530F0C
	warp_def 3, 7, 0, 3, MAP_FORTREE_CITY
	warp_def 4, 7, 0, 3, MAP_FORTREE_CITY

FortreeCity_Mart_MapEvents:: @ 8530F1C
	map_events FortreeCity_Mart_EventObjects, FortreeCity_Mart_MapWarps, 0x0, 0x0

