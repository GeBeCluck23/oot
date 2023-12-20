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
SceneCmd escape_rm_room_9_header00[] = {
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(0xFF, 0xFF, 0),
    SCENE_CMD_ROOM_SHAPE(&escape_rm_room_9_shapeHeader),
    SCENE_CMD_END(),
};

RoomShapeNormal escape_rm_room_9_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(escape_rm_room_9_shapeDListEntry),
    escape_rm_room_9_shapeDListEntry,
    escape_rm_room_9_shapeDListEntry + ARRAY_COUNT(escape_rm_room_9_shapeDListEntry)
};

RoomShapeDListsEntry escape_rm_room_9_shapeDListEntry[1] = {
    { escape_rm_room_9_entry_0_opaque, NULL },
};

Gfx escape_rm_room_9_entry_0_opaque[] = {
	gsSPDisplayList(escape_rm_dl_Cylinder_009_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx escape_rm_dl_Cylinder_009_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {3064, 417, 1971}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {3064, 935, 1971}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {3064, 935, 787}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {3064, 417, 787}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {4168, 417, 1971}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {4168, 935, 1971}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {4168, 935, 787}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {4168, 417, 787}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx escape_rm_dl_Cylinder_009_mesh_layer_Opaque_vtx_0[46] = {
	{{ {3271, 418, 1721}, 0, {130, 1980}, {123, 4, 223, 255} }},
	{{ {3081, 418, 1010}, 0, {1549, 1877}, {123, 4, 223, 255} }},
	{{ {3064, 905, 1014}, 0, {1516, -69}, {123, 4, 223, 255} }},
	{{ {3268, 518, 1722}, 0, {123, 1580}, {123, 4, 223, 255} }},
	{{ {3320, 905, 1971}, 0, {-395, 69}, {123, 4, 223, 255} }},
	{{ {3283, 518, 1780}, 0, {7, 1589}, {123, 4, 223, 255} }},
	{{ {3287, 418, 1779}, 0, {14, 1988}, {123, 4, 223, 255} }},
	{{ {3337, 418, 1967}, 0, {-362, 2015}, {123, 4, 223, 255} }},
	{{ {4168, 448, 1744}, 0, {-113, 1876}, {252, 127, 1, 255} }},
	{{ {3912, 448, 787}, 0, {913, 1877}, {252, 127, 1, 255} }},
	{{ {3081, 418, 1010}, 0, {914, 92}, {252, 127, 1, 255} }},
	{{ {3271, 418, 1721}, 0, {151, 91}, {252, 127, 1, 255} }},
	{{ {3337, 418, 1967}, 0, {-112, 91}, {252, 127, 1, 255} }},
	{{ {3287, 418, 1779}, 0, {89, 91}, {252, 127, 1, 255} }},
	{{ {3912, 448, 787}, 0, {-566, 1858}, {33, 0, 123, 255} }},
	{{ {3895, 935, 792}, 0, {-575, -88}, {33, 0, 123, 255} }},
	{{ {3064, 905, 1014}, 0, {1087, -88}, {33, 0, 123, 255} }},
	{{ {3081, 418, 1010}, 0, {1096, 1858}, {33, 0, 123, 255} }},
	{{ {4168, 448, 1744}, 0, {84, 2015}, {133, 252, 33, 255} }},
	{{ {4152, 935, 1748}, 0, {51, 69}, {133, 252, 33, 255} }},
	{{ {3895, 935, 792}, 0, {1962, -69}, {133, 252, 33, 255} }},
	{{ {3912, 448, 787}, 0, {1995, 1877}, {133, 252, 33, 255} }},
	{{ {3064, 905, 1014}, 0, {993, 18}, {4, 129, 255, 255} }},
	{{ {3895, 935, 792}, 0, {1004, 1970}, {4, 129, 255, 255} }},
	{{ {4152, 935, 1748}, 0, {-118, 1996}, {4, 129, 255, 255} }},
	{{ {3320, 905, 1971}, 0, {-129, 44}, {4, 129, 255, 255} }},
	{{ {3268, 518, 1722}, 0, {123, 753}, {4, 129, 255, 255} }},
	{{ {3283, 518, 1780}, 0, {7, 815}, {4, 129, 255, 255} }},
	{{ {3264, 517, 1785}, 0, {-3, 737}, {4, 129, 255, 255} }},
	{{ {3248, 517, 1727}, 0, {112, 675}, {4, 129, 255, 255} }},
	{{ {3287, 418, 1779}, 0, {14, 811}, {252, 127, 1, 255} }},
	{{ {3271, 418, 1721}, 0, {130, 749}, {252, 127, 1, 255} }},
	{{ {3252, 417, 1726}, 0, {119, 672}, {252, 127, 1, 255} }},
	{{ {3267, 417, 1784}, 0, {3, 734}, {252, 127, 1, 255} }},
	{{ {3271, 418, 1721}, 0, {646, 1980}, {33, 0, 123, 255} }},
	{{ {3268, 518, 1722}, 0, {644, 1580}, {33, 0, 123, 255} }},
	{{ {3248, 517, 1727}, 0, {683, 1580}, {33, 0, 123, 255} }},
	{{ {3252, 417, 1726}, 0, {685, 1980}, {33, 0, 123, 255} }},
	{{ {3283, 518, 1780}, 0, {613, 1589}, {223, 0, 133, 255} }},
	{{ {3287, 418, 1779}, 0, {615, 1988}, {223, 0, 133, 255} }},
	{{ {3267, 417, 1784}, 0, {654, 1988}, {223, 0, 133, 255} }},
	{{ {3264, 517, 1785}, 0, {652, 1589}, {223, 0, 133, 255} }},
	{{ {4168, 448, 1744}, 0, {996, 2015}, {223, 0, 133, 255} }},
	{{ {3337, 418, 1967}, 0, {-14, 2015}, {223, 0, 133, 255} }},
	{{ {3320, 905, 1971}, 0, {-21, 44}, {223, 0, 133, 255} }},
	{{ {4152, 935, 1748}, 0, {991, 69}, {223, 0, 133, 255} }},
};

Gfx escape_rm_dl_Cylinder_009_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(escape_rm_dl_Cylinder_009_mesh_layer_Opaque_vtx_0 + 0, 30, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(2, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(11, 12, 8, 0, 11, 13, 12, 0),
	gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
	gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
	gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
	gsSPVertex(escape_rm_dl_Cylinder_009_mesh_layer_Opaque_vtx_0 + 30, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Gfx escape_rm_dl_Cylinder_009_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(escape_rm_dl_Cylinder_009_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_escape_rm_dl_red_siding_layerOpaque),
	gsSPDisplayList(escape_rm_dl_Cylinder_009_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

