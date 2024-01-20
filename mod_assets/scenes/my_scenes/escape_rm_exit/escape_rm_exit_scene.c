#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "escape_rm_exit_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"

/**
 * Header Child Day (Default)
*/
SceneCmd escape_rm_exit_scene_header00[] = {
    SCENE_CMD_SOUND_SETTINGS(0x00, 0x00, 0x00),
    SCENE_CMD_ROOM_LIST(1, escape_rm_exit_scene_roomList),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00),
    SCENE_CMD_COL_HEADER(&escape_rm_exit_collisionHeader),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x01, 0x00, LIGHT_MODE_TIME),
    SCENE_CMD_ENTRANCE_LIST(escape_rm_exit_scene_header00_entranceList),
    SCENE_CMD_SPAWN_LIST(1, escape_rm_exit_scene_header00_playerEntryList),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, escape_rm_exit_scene_header00_lightSettings),
    SCENE_CMD_TRANSITION_ACTOR_LIST(1, escape_rm_exit_scene_header00_transitionActors),
    SCENE_CMD_EXIT_LIST(escape_rm_exit_scene_header00_exitList),
    SCENE_CMD_END(),
};

RomFile escape_rm_exit_scene_roomList[] = {
    { (u32)_escape_rm_exit_room_0SegmentRomStart, (u32)_escape_rm_exit_room_0SegmentRomEnd },
};

ActorEntry escape_rm_exit_scene_header00_playerEntryList[] = {
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { -1, -105, -235 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0FFF
    },
};

TransitionActorEntry escape_rm_exit_scene_header00_transitionActors[] = {
    // Lifting Wooden Door
    {
        /* Room & Cam Index (Front, Back) */ { 0, 0x00, 0, 0x00 },
        /* Actor ID                       */ ACTOR_DOOR_SHUTTER,
        /* Position                       */ { 0, -121, -320 },
        /* Rotation Y                     */ DEG_TO_BINANG(0.000),
        /* Parameters                     */ 0x008A
    },
};

Spawn escape_rm_exit_scene_header00_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

u16 escape_rm_exit_scene_header00_exitList[1] = {
    ENTR_ESCAPE_RM_OUTSIDE_0,
};

EnvLightSettings escape_rm_exit_scene_header00_lightSettings[4] = {
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

SurfaceType escape_rm_exit_polygonTypes[] = {
	{ 0x00000000, 0x00000000 },
	{ 0x00000100, 0x00000000 },
};

CollisionPoly escape_rm_exit_polygons[] = {
	{ 0x0000, 0x0000, 0x0001, 0x0002, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xffc4 },
	{ 0x0000, 0x0000, 0x0002, 0x0003, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xffc4 },
	{ 0x0000, 0x0003, 0x0002, 0x0004, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0), 0xfeac },
	{ 0x0000, 0x0003, 0x0004, 0x0005, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0), 0xfeac },
	{ 0x0000, 0x0005, 0x0004, 0x0006, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xffc4 },
	{ 0x0000, 0x0005, 0x0006, 0x0007, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xffc4 },
	{ 0x0000, 0x0007, 0x0006, 0x0001, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0x012c },
	{ 0x0000, 0x0007, 0x0001, 0x0000, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0x012c },
	{ 0x0000, 0x0003, 0x0005, 0x0007, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0xff55 },
	{ 0x0000, 0x0003, 0x0007, 0x0000, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0xff55 },
	{ 0x0000, 0x0004, 0x0002, 0x0001, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0xffe3 },
	{ 0x0000, 0x0004, 0x0001, 0x0006, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0xffe3 },
	{ 0x0000, 0x0009, 0x000a, 0x0008, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-0.9669214487075806), COLPOLY_SNORMAL(0.2550743520259857), 0x0079 },
	{ 0x0000, 0x000a, 0x000b, 0x0008, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-0.9669214487075806), COLPOLY_SNORMAL(0.2550743818283081), 0x0079 },
	{ 0x0000, 0x000c, 0x000d, 0x000a, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0x012c },
	{ 0x0000, 0x000e, 0x000f, 0x0009, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0x012c },
	{ 0x0000, 0x000f, 0x0010, 0x0009, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0x012c },
	{ 0x0000, 0x000c, 0x000a, 0x0011, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0x012c },
	{ 0x0000, 0x0010, 0x0011, 0x0009, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0x012c },
	{ 0x0000, 0x0011, 0x000a, 0x0009, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0x012c },
	{ 0x0000, 0x0012, 0x0008, 0x000b, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-0.9323931336402893), COLPOLY_SNORMAL(-0.36144569516181946), 0x0730 },
	{ 0x0000, 0x0012, 0x0013, 0x0008, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-0.9323931336402893), COLPOLY_SNORMAL(-0.36144569516181946), 0x0730 },
	{ 0x0000, 0x000a, 0x0014, 0x000b, COLPOLY_SNORMAL(-0.9985651969909668), COLPOLY_SNORMAL(-4.042913559487715e-09), COLPOLY_SNORMAL(0.05355001240968704), 0x0094 },
	{ 0x0000, 0x000d, 0x0014, 0x000a, COLPOLY_SNORMAL(-0.9985651969909668), COLPOLY_SNORMAL(-4.042914003576925e-09), COLPOLY_SNORMAL(0.05355001986026764), 0x0094 },
	{ 0x0000, 0x000e, 0x0009, 0x0008, COLPOLY_SNORMAL(0.9985651969909668), COLPOLY_SNORMAL(-4.042914003576925e-09), COLPOLY_SNORMAL(0.05355001986026764), 0x0094 },
	{ 0x0000, 0x000e, 0x0008, 0x0015, COLPOLY_SNORMAL(0.9985651969909668), COLPOLY_SNORMAL(-4.042913559487715e-09), COLPOLY_SNORMAL(0.05355001240968704), 0x0094 },
	{ 0x0000, 0x0016, 0x0014, 0x0017, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.9323931932449341), COLPOLY_SNORMAL(0.3614456057548523), 0xf9e6 },
	{ 0x0000, 0x0018, 0x0017, 0x0015, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.9323931932449341), COLPOLY_SNORMAL(0.3614456057548523), 0xf9e6 },
	{ 0x0000, 0x0018, 0x0016, 0x0017, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.9323931932449341), COLPOLY_SNORMAL(0.3614456355571747), 0xf9e6 },
	{ 0x0000, 0x0016, 0x000b, 0x0014, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x012c },
	{ 0x0000, 0x0016, 0x0012, 0x000b, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x012c },
	{ 0x0000, 0x0015, 0x0008, 0x0013, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x012c },
	{ 0x0000, 0x0018, 0x0015, 0x0013, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x012c },
	{ 0x0000, 0x0011, 0x0010, 0x0019, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0xffeb },
	{ 0x0000, 0x0011, 0x0019, 0x001a, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0xffeb },
	{ 0x0000, 0x001b, 0x001a, 0x0019, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0x016c },
	{ 0x0000, 0x001b, 0x0019, 0x001c, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0x016c },
	{ 0x0000, 0x000c, 0x0011, 0x001a, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x001e },
	{ 0x0000, 0x000c, 0x001a, 0x001b, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x001e },
	{ 0x0000, 0x000f, 0x001c, 0x0010, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x001e },
	{ 0x0000, 0x001c, 0x0019, 0x0010, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x001e },
	{ 0x0000, 0x000f, 0x000c, 0x001b, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0x0079 },
	{ 0x0000, 0x000f, 0x001b, 0x001c, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0x0079 },
	{ 0x0000, 0x000d, 0x0017, 0x0014, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.9762722849845886), COLPOLY_SNORMAL(-0.21654649078845978), 0x0035 },
	{ 0x0000, 0x000d, 0x000c, 0x0017, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.9762722849845886), COLPOLY_SNORMAL(-0.21654649078845978), 0x0035 },
	{ 0x0000, 0x000e, 0x0015, 0x0017, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.9762722849845886), COLPOLY_SNORMAL(-0.21654649078845978), 0x0035 },
	{ 0x0000, 0x000c, 0x000f, 0x0017, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.9762722849845886), COLPOLY_SNORMAL(-0.21654649078845978), 0x0035 },
	{ 0x0000, 0x000f, 0x000e, 0x0017, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.9762722849845886), COLPOLY_SNORMAL(-0.21654649078845978), 0x0035 },
	{ 0x0001, 0x001f, 0x001d, 0x001e, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.9737902879714966), COLPOLY_SNORMAL(-0.227447971701622), 0x004e },
	{ 0x0001, 0x001f, 0x0020, 0x0021, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.9737902879714966), COLPOLY_SNORMAL(-0.22744795680046082), 0x004e },
	{ 0x0001, 0x001f, 0x0021, 0x001d, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.9737902879714966), COLPOLY_SNORMAL(-0.22744795680046082), 0x004e },
};

Vec3s escape_rm_exit_vertices[34] = {
	{ -60, -171, -300 },
	{ -60, 29, -300 },
	{ -60, 29, -340 },
	{ -60, -171, -340 },
	{ 60, 29, -340 },
	{ 60, -171, -340 },
	{ 60, 29, -300 },
	{ 60, -171, -300 },
	{ -300, 874, 2838 },
	{ -132, 46, -300 },
	{ 132, 46, -300 },
	{ 300, 874, 2838 },
	{ 30, -121, -300 },
	{ 132, -121, -300 },
	{ -132, -121, -300 },
	{ -30, -121, -300 },
	{ -30, -21, -300 },
	{ 30, -21, -300 },
	{ 300, 666, 3374 },
	{ -300, 666, 3374 },
	{ 300, 575, 2838 },
	{ -300, 575, 2838 },
	{ 300, 367, 3374 },
	{ -222, 575, 2838 },
	{ -300, 367, 3374 },
	{ -30, -21, -364 },
	{ 30, -21, -364 },
	{ 30, -121, -364 },
	{ -30, -121, -364 },
	{ -287, 587, 2857 },
	{ 426, 587, 2857 },
	{ 432, 502, 2491 },
	{ -404, 502, 2491 },
	{ -394, 587, 2857 },
};

CollisionHeader escape_rm_exit_collisionHeader = {
	-404,
	-171,
	-364,
	432,
	874,
	3374,
	34,
	escape_rm_exit_vertices,
	51,
	escape_rm_exit_polygons,
	escape_rm_exit_polygonTypes,
	0,
	0,
	0
};

