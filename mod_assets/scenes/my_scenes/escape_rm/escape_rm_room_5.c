#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "escape_rm_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"

/**
 * Header Child Day (Default)
*/
SceneCmd escape_rm_room_5_header00[] = {
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(0xFF, 0xFF, 0),
    SCENE_CMD_ROOM_SHAPE(&escape_rm_room_5_shapeHeader),
    SCENE_CMD_END(),
};

RoomShapeNormal escape_rm_room_5_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(escape_rm_room_5_shapeDListEntry),
    escape_rm_room_5_shapeDListEntry,
    escape_rm_room_5_shapeDListEntry + ARRAY_COUNT(escape_rm_room_5_shapeDListEntry)
};

RoomShapeDListsEntry escape_rm_room_5_shapeDListEntry[1] = {
    { escape_rm_room_5_entry_0_opaque, NULL },
};

Gfx escape_rm_room_5_entry_0_opaque[] = {
	gsSPDisplayList(escape_rm_dl_floor_004_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx escape_rm_dl_floor_004_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-385, 160, -382}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-385, 360, -382}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-385, 360, -991}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-385, 160, -991}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {497, 160, -382}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {497, 360, -382}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {497, 360, -991}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {497, 160, -991}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx escape_rm_dl_floor_004_mesh_layer_Opaque_vtx_0[39] = {
	{{ {-385, 160, -991}, 0, {5601, -4474}, {255, 255, 255, 255} }},
	{{ {-385, 160, -402}, 0, {5601, 496}, {228, 228, 228, 255} }},
	{{ {-55, 160, -402}, 0, {11173, 496}, {195, 195, 195, 255} }},
	{{ {65, 160, -402}, 0, {13197, 496}, {250, 250, 250, 255} }},
	{{ {-55, 160, -382}, 0, {11173, 665}, {67, 67, 67, 255} }},
	{{ {65, 160, -382}, 0, {13197, 665}, {77, 77, 77, 255} }},
	{{ {497, 160, -991}, 0, {20489, -4474}, {255, 255, 255, 255} }},
	{{ {497, 160, -402}, 0, {20489, 496}, {254, 254, 254, 255} }},
	{{ {-385, 360, -402}, 0, {5601, 496}, {255, 255, 255, 255} }},
	{{ {-385, 360, -991}, 0, {5601, -4474}, {255, 255, 255, 255} }},
	{{ {497, 360, -991}, 0, {20489, -4474}, {255, 255, 255, 255} }},
	{{ {497, 360, -402}, 0, {20489, 496}, {255, 255, 255, 255} }},
	{{ {497, 160, -402}, 0, {22589, 496}, {255, 255, 255, 255} }},
	{{ {497, 360, -402}, 0, {22589, 496}, {255, 255, 255, 255} }},
	{{ {497, 360, -991}, 0, {22589, -4474}, {255, 255, 255, 255} }},
	{{ {497, 160, -991}, 0, {22589, -4474}, {255, 255, 255, 255} }},
	{{ {-385, 160, -991}, 0, {1008, -4474}, {255, 255, 255, 255} }},
	{{ {-385, 360, -991}, 0, {1008, -4474}, {255, 255, 255, 255} }},
	{{ {-385, 360, -402}, 0, {1008, 496}, {255, 255, 255, 255} }},
	{{ {-385, 160, -402}, 0, {1008, 496}, {255, 255, 255, 255} }},
	{{ {497, 160, -991}, 0, {20489, -7680}, {255, 255, 255, 255} }},
	{{ {497, 360, -991}, 0, {20489, -7680}, {255, 255, 255, 255} }},
	{{ {-385, 360, -991}, 0, {5601, -7680}, {255, 255, 255, 255} }},
	{{ {-385, 160, -991}, 0, {5601, -7680}, {255, 255, 255, 255} }},
	{{ {-55, 160, -402}, 0, {11173, 496}, {195, 195, 195, 255} }},
	{{ {-385, 160, -402}, 0, {5601, 496}, {228, 228, 228, 255} }},
	{{ {-385, 360, -402}, 0, {5601, 496}, {255, 255, 255, 255} }},
	{{ {-55, 260, -402}, 0, {11173, 496}, {255, 255, 255, 255} }},
	{{ {497, 360, -402}, 0, {20489, 496}, {255, 255, 255, 255} }},
	{{ {65, 260, -402}, 0, {13197, 496}, {254, 254, 254, 255} }},
	{{ {497, 160, -402}, 0, {20489, 496}, {254, 254, 254, 255} }},
	{{ {65, 160, -382}, 0, {13197, 496}, {77, 77, 77, 255} }},
	{{ {65, 260, -402}, 0, {13197, 496}, {254, 254, 254, 255} }},
	{{ {65, 160, -382}, 0, {13197, 496}, {77, 77, 77, 255} }},
	{{ {65, 260, -382}, 0, {13197, 496}, {137, 137, 137, 255} }},
	{{ {-55, 260, -402}, 0, {11173, 496}, {255, 255, 255, 255} }},
	{{ {-55, 260, -382}, 0, {11173, 496}, {87, 87, 87, 255} }},
	{{ {-55, 160, -402}, 0, {11173, 496}, {195, 195, 195, 255} }},
	{{ {-55, 160, -382}, 0, {11173, 496}, {67, 67, 67, 255} }},
};

Gfx escape_rm_dl_floor_004_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(escape_rm_dl_floor_004_mesh_layer_Opaque_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 6, 0, 0, 3, 7, 6, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 27, 24, 26, 0),
	gsSP2Triangles(26, 28, 27, 0, 28, 29, 27, 0),
	gsSP2Triangles(28, 3, 29, 0, 28, 30, 3, 0),
	gsSP1Triangle(29, 3, 31, 0),
	gsSPVertex(escape_rm_dl_floor_004_mesh_layer_Opaque_vtx_0 + 32, 7, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(3, 2, 4, 0, 5, 3, 4, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSPEndDisplayList(),
};

Gfx escape_rm_dl_floor_004_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(escape_rm_dl_floor_004_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_escape_rm_dl_wood_layerOpaque),
	gsSPDisplayList(escape_rm_dl_floor_004_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

