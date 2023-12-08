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
SceneCmd escape_rm_room_1_header00[] = {
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(0xFF, 0xFF, 0),
    SCENE_CMD_ROOM_SHAPE(&escape_rm_room_1_shapeHeader),
    SCENE_CMD_END(),
};

RoomShapeNormal escape_rm_room_1_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(escape_rm_room_1_shapeDListEntry),
    escape_rm_room_1_shapeDListEntry,
    escape_rm_room_1_shapeDListEntry + ARRAY_COUNT(escape_rm_room_1_shapeDListEntry)
};

RoomShapeDListsEntry escape_rm_room_1_shapeDListEntry[1] = {
    { escape_rm_room_1_entry_0_opaque, NULL },
};

Gfx escape_rm_room_1_entry_0_opaque[] = {
	gsSPDisplayList(escape_rm_dl_floor_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx escape_rm_dl_floor_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-1388, -50, 339}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1388, -50, 339}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1388, -50, -339}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1388, -50, -339}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-492, -50, 339}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-492, -50, 339}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-492, -50, -339}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-492, -50, -339}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx escape_rm_dl_floor_mesh_layer_Opaque_vtx_0[4] = {
	{{ {-1388, -50, 339}, 0, {1008, 496}, {255, 255, 255, 255} }},
	{{ {-492, -50, 339}, 0, {22589, 496}, {255, 255, 255, 255} }},
	{{ {-492, -50, -339}, 0, {22589, -7680}, {255, 255, 255, 255} }},
	{{ {-1388, -50, -339}, 0, {1008, -7680}, {255, 255, 255, 255} }},
};

Gfx escape_rm_dl_floor_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(escape_rm_dl_floor_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx escape_rm_dl_floor_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(escape_rm_dl_floor_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_escape_rm_dl_wood_layerOpaque),
	gsSPDisplayList(escape_rm_dl_floor_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

