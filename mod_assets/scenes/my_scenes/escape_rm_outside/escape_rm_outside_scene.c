#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "escape_rm_outside_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"

/**
 * Header Child Day (Default)
*/
SceneCmd escape_rm_outside_scene_header00[] = {
    SCENE_CMD_SOUND_SETTINGS(0x00, 0x00, 0x02),
    SCENE_CMD_ROOM_LIST(1, escape_rm_outside_scene_roomList),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00),
    SCENE_CMD_COL_HEADER(&escape_rm_outside_collisionHeader),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x01, 0x00, LIGHT_MODE_TIME),
    SCENE_CMD_ENTRANCE_LIST(escape_rm_outside_scene_header00_entranceList),
    SCENE_CMD_SPAWN_LIST(1, escape_rm_outside_scene_header00_playerEntryList),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, escape_rm_outside_scene_header00_lightSettings),
    SCENE_CMD_END(),
};

RomFile escape_rm_outside_scene_roomList[] = {
    { (u32)_escape_rm_outside_room_0SegmentRomStart, (u32)_escape_rm_outside_room_0SegmentRomEnd },
};

ActorEntry escape_rm_outside_scene_header00_playerEntryList[] = {
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { 0, -120, 0 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0FFF
    },
};

Spawn escape_rm_outside_scene_header00_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

EnvLightSettings escape_rm_outside_scene_header00_lightSettings[4] = {
    // Dawn Lighting
    {
        {    70,    45,    57 },   // Ambient Color
        {    73,    73,    73 },   // Diffuse0 Direction
        {   180,   154,   138 },   // Diffuse0 Color
        {   -73,   -73,   -73 },   // Diffuse1 Direction
        {    20,    20,    60 },   // Diffuse1 Color
        {   140,   120,   100 },   // Fog Color
        ((1 << 10) | 993),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Day Lighting
    {
        {   105,    90,    90 },   // Ambient Color
        {    73,    73,    73 },   // Diffuse0 Direction
        {   255,   255,   240 },   // Diffuse0 Color
        {   -73,   -73,   -73 },   // Diffuse1 Direction
        {    50,    50,    90 },   // Diffuse1 Color
        {   100,   100,   120 },   // Fog Color
        ((1 << 10) | 996),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Dusk Lighting
    {
        {   120,    90,     0 },   // Ambient Color
        {    73,    73,    73 },   // Diffuse0 Direction
        {   250,   135,    50 },   // Diffuse0 Color
        {   -73,   -73,   -73 },   // Diffuse1 Direction
        {    30,    30,    60 },   // Diffuse1 Color
        {   120,    70,    50 },   // Fog Color
        ((1 << 10) | 995),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Night Lighting
    {
        {    40,    70,   100 },   // Ambient Color
        {    73,    73,    73 },   // Diffuse0 Direction
        {    20,    20,    35 },   // Diffuse0 Color
        {   -73,   -73,   -73 },   // Diffuse1 Direction
        {    50,    50,   100 },   // Diffuse1 Color
        {     0,     0,    30 },   // Fog Color
        ((1 << 10) | 992),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
};

SurfaceType escape_rm_outside_polygonTypes[] = {
	{ 0x00000000, 0x00000000 },
};

CollisionPoly escape_rm_outside_polygons[] = {
	{ 0x0000, 0x0000, 0x0001, 0x0002, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0x0078 },
	{ 0x0000, 0x0000, 0x0002, 0x0003, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0x0078 },
};

Vec3s escape_rm_outside_vertices[4] = {
	{ -300, -120, 300 },
	{ 300, -120, 300 },
	{ 300, -120, -300 },
	{ -300, -120, -300 },
};

CollisionHeader escape_rm_outside_collisionHeader = {
	-300,
	-120,
	-300,
	300,
	-120,
	300,
	4,
	escape_rm_outside_vertices,
	2,
	escape_rm_outside_polygons,
	escape_rm_outside_polygonTypes,
	0,
	0,
	0
};

