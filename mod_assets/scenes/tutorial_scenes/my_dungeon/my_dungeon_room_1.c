#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "my_dungeon_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"

/**
 * Header Child Day (Default)
*/
#define LENGTH_MY_DUNGEON_ROOM_1_HEADER00_OBJECTLIST 3
#define LENGTH_MY_DUNGEON_ROOM_1_HEADER00_ACTORLIST 5
SceneCmd my_dungeon_room_1_header00[] = {
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(0xFF, 0xFF, 0),
    SCENE_CMD_ROOM_SHAPE(&my_dungeon_room_1_shapeHeader),
    SCENE_CMD_OBJECT_LIST(LENGTH_MY_DUNGEON_ROOM_1_HEADER00_OBJECTLIST, my_dungeon_room_1_header00_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_MY_DUNGEON_ROOM_1_HEADER00_ACTORLIST, my_dungeon_room_1_header00_actorList),
    SCENE_CMD_END(),
};

s16 my_dungeon_room_1_header00_objectList[LENGTH_MY_DUNGEON_ROOM_1_HEADER00_OBJECTLIST] = {
    OBJECT_FIREFLY,
    OBJECT_BOX,
    OBJECT_ZF,
};

ActorEntry my_dungeon_room_1_header00_actorList[LENGTH_MY_DUNGEON_ROOM_1_HEADER00_ACTORLIST] = {
    // Lizalfos
    {
        /* Actor ID   */ ACTOR_EN_ZF,
        /* Position   */ { -606, -120, 513 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x00FE
    },

    // Keese
    {
        /* Actor ID   */ ACTOR_EN_FIREFLY,
        /* Position   */ { -597, 11, 604 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0002
    },

    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { -856, -120, 414 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(270.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x7841
    },

    // Keese
    {
        /* Actor ID   */ ACTOR_EN_FIREFLY,
        /* Position   */ { -549, 37, 340 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0002
    },

    // Keese
    {
        /* Actor ID   */ ACTOR_EN_FIREFLY,
        /* Position   */ { -732, 10, 273 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0002
    },
};

RoomShapeNormal my_dungeon_room_1_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(my_dungeon_room_1_shapeDListEntry),
    my_dungeon_room_1_shapeDListEntry,
    my_dungeon_room_1_shapeDListEntry + ARRAY_COUNT(my_dungeon_room_1_shapeDListEntry)
};

RoomShapeDListsEntry my_dungeon_room_1_shapeDListEntry[1] = {
    { my_dungeon_room_1_entry_0_opaque, NULL },
};

Gfx my_dungeon_room_1_entry_0_opaque[] = {
	gsSPDisplayList(my_dungeon_dl_Floor_001_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx my_dungeon_dl_Floor_001_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-940, -120, 724}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-940, 901, 724}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-940, 901, 124}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-940, -120, 124}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-320, -120, 724}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-320, 901, 724}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-320, 901, 124}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-320, -120, 124}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx my_dungeon_dl_Floor_001_mesh_layer_Opaque_vtx_0[6] = {
	{{ {-940, -120, 124}, 0, {-1390, -1597}, {255, 255, 255, 255} }},
	{{ {-940, -120, 724}, 0, {-1390, 2589}, {255, 255, 255, 255} }},
	{{ {-340, -120, 724}, 0, {2796, 2589}, {255, 255, 255, 255} }},
	{{ {-340, -120, 309}, 0, {2796, -306}, {255, 255, 255, 255} }},
	{{ {-340, -120, 249}, 0, {2796, -725}, {255, 255, 255, 255} }},
	{{ {-340, -120, 124}, 0, {2796, -1597}, {255, 255, 255, 255} }},
};

Gfx my_dungeon_dl_Floor_001_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(my_dungeon_dl_Floor_001_mesh_layer_Opaque_vtx_0 + 0, 6, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 4, 0, 0, 4, 5, 0, 0),
	gsSPEndDisplayList(),
};

Vtx my_dungeon_dl_Floor_001_mesh_layer_Opaque_vtx_1[50] = {
	{{ {-340, -20, 249}, 0, {958, 5014}, {255, 255, 255, 255} }},
	{{ {-340, -120, 249}, 0, {958, 6226}, {255, 255, 255, 255} }},
	{{ {-320, -120, 249}, 0, {1077, 6226}, {255, 255, 255, 255} }},
	{{ {-320, -20, 249}, 0, {1077, 5014}, {255, 255, 255, 255} }},
	{{ {-340, -120, 124}, 0, {1519, 6226}, {255, 255, 255, 255} }},
	{{ {-340, -120, 249}, 0, {774, 6226}, {255, 255, 255, 255} }},
	{{ {-340, -20, 249}, 0, {774, 5014}, {255, 255, 255, 255} }},
	{{ {-340, 357, 124}, 0, {1519, 445}, {13, 13, 13, 255} }},
	{{ {-340, 357, 249}, 0, {774, 445}, {25, 25, 25, 255} }},
	{{ {-340, 901, 249}, 0, {774, -6148}, {1, 1, 1, 255} }},
	{{ {-340, 901, 124}, 0, {1519, -6148}, {1, 1, 1, 255} }},
	{{ {-940, 357, 124}, 0, {5095, 445}, {17, 17, 17, 255} }},
	{{ {-340, 901, 124}, 0, {1519, -6148}, {1, 1, 1, 255} }},
	{{ {-940, 901, 124}, 0, {5095, -6148}, {0, 0, 0, 255} }},
	{{ {-940, -120, 124}, 0, {5095, 6226}, {255, 255, 255, 255} }},
	{{ {-940, 357, 724}, 0, {8672, 445}, {26, 26, 26, 255} }},
	{{ {-940, 901, 124}, 0, {5095, -6148}, {0, 0, 0, 255} }},
	{{ {-940, 901, 724}, 0, {8672, -6148}, {1, 1, 1, 255} }},
	{{ {-340, 357, 724}, 0, {12248, 445}, {25, 25, 25, 255} }},
	{{ {-340, 901, 724}, 0, {12248, -6148}, {1, 1, 1, 255} }},
	{{ {-940, -120, 724}, 0, {8672, 6226}, {255, 255, 255, 255} }},
	{{ {-340, -120, 724}, 0, {12248, 6226}, {255, 255, 255, 255} }},
	{{ {-340, -120, 309}, 0, {14721, 6226}, {255, 255, 255, 255} }},
	{{ {-340, -20, 309}, 0, {14721, 5014}, {255, 255, 255, 255} }},
	{{ {-340, 357, 309}, 0, {14721, 445}, {31, 31, 31, 255} }},
	{{ {-340, 901, 724}, 0, {12248, -6148}, {1, 1, 1, 255} }},
	{{ {-340, 901, 309}, 0, {14721, -6148}, {1, 1, 1, 255} }},
	{{ {-340, -20, 249}, 0, {15079, 5014}, {255, 255, 255, 255} }},
	{{ {-340, -20, 309}, 0, {14721, 5014}, {255, 255, 255, 255} }},
	{{ {-340, 357, 249}, 0, {15079, 445}, {25, 25, 25, 255} }},
	{{ {-340, 901, 309}, 0, {14721, -6148}, {1, 1, 1, 255} }},
	{{ {-340, 901, 249}, 0, {15079, -6148}, {1, 1, 1, 255} }},
	{{ {-340, -120, 309}, 0, {958, 6226}, {255, 255, 255, 255} }},
	{{ {-340, -20, 309}, 0, {958, 5014}, {255, 255, 255, 255} }},
	{{ {-320, -20, 309}, 0, {1077, 5014}, {255, 255, 255, 255} }},
	{{ {-320, -120, 309}, 0, {1077, 6226}, {255, 255, 255, 255} }},
	{{ {-340, -20, 309}, 0, {958, 3952}, {255, 255, 255, 255} }},
	{{ {-340, -20, 249}, 0, {958, 3225}, {255, 255, 255, 255} }},
	{{ {-320, -20, 249}, 0, {1077, 3225}, {255, 255, 255, 255} }},
	{{ {-320, -20, 309}, 0, {1077, 3952}, {255, 255, 255, 255} }},
	{{ {-340, -120, 249}, 0, {958, 3225}, {255, 255, 255, 255} }},
	{{ {-340, -120, 309}, 0, {958, 3952}, {255, 255, 255, 255} }},
	{{ {-320, -120, 309}, 0, {1077, 3952}, {255, 255, 255, 255} }},
	{{ {-320, -120, 249}, 0, {1077, 3225}, {255, 255, 255, 255} }},
	{{ {-940, 901, 724}, 0, {-16, 1008}, {1, 1, 1, 255} }},
	{{ {-940, 901, 124}, 0, {1008, 1008}, {0, 0, 0, 255} }},
	{{ {-340, 901, 124}, 0, {1008, -16}, {1, 1, 1, 255} }},
	{{ {-340, 901, 249}, 0, {795, -16}, {1, 1, 1, 255} }},
	{{ {-340, 901, 309}, 0, {692, -16}, {1, 1, 1, 255} }},
	{{ {-340, 901, 724}, 0, {-16, -16}, {1, 1, 1, 255} }},
};

Gfx my_dungeon_dl_Floor_001_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(my_dungeon_dl_Floor_001_mesh_layer_Opaque_vtx_1 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
	gsSP2Triangles(6, 8, 7, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 9, 10, 0, 4, 7, 11, 0),
	gsSP2Triangles(11, 7, 12, 0, 11, 12, 13, 0),
	gsSP2Triangles(4, 11, 14, 0, 14, 11, 15, 0),
	gsSP2Triangles(15, 11, 16, 0, 15, 16, 17, 0),
	gsSP2Triangles(18, 15, 17, 0, 18, 17, 19, 0),
	gsSP2Triangles(20, 15, 18, 0, 14, 15, 20, 0),
	gsSP2Triangles(20, 18, 21, 0, 22, 21, 18, 0),
	gsSP2Triangles(18, 23, 22, 0, 18, 24, 23, 0),
	gsSP2Triangles(24, 18, 25, 0, 24, 25, 26, 0),
	gsSP2Triangles(27, 28, 24, 0, 27, 24, 29, 0),
	gsSP2Triangles(29, 24, 30, 0, 29, 30, 31, 0),
	gsSPVertex(my_dungeon_dl_Floor_001_mesh_layer_Opaque_vtx_1 + 32, 18, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(15, 16, 12, 0, 16, 17, 12, 0),
	gsSPEndDisplayList(),
};

Gfx my_dungeon_dl_Floor_001_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(my_dungeon_dl_Floor_001_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_my_dungeon_dl_floor_mat_layerOpaque),
	gsSPDisplayList(my_dungeon_dl_Floor_001_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_my_dungeon_dl_wall_brick_layerOpaque),
	gsSPDisplayList(my_dungeon_dl_Floor_001_mesh_layer_Opaque_tri_1),
	gsSPEndDisplayList(),
};

