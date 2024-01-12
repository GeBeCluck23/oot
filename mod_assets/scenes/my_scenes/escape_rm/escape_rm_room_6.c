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
SceneCmd escape_rm_room_6_header00[] = {
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(0xFF, 0xFF, 0),
    SCENE_CMD_ROOM_SHAPE(&escape_rm_room_6_shapeHeader),
    SCENE_CMD_END(),
};

RoomShapeNormal escape_rm_room_6_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(escape_rm_room_6_shapeDListEntry),
    escape_rm_room_6_shapeDListEntry,
    escape_rm_room_6_shapeDListEntry + ARRAY_COUNT(escape_rm_room_6_shapeDListEntry)
};

RoomShapeDListsEntry escape_rm_room_6_shapeDListEntry[1] = {
    { escape_rm_room_6_entry_0_opaque, NULL },
};

Gfx escape_rm_room_6_entry_0_opaque[] = {
	gsSPDisplayList(escape_rm_dl_floor_011_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

u64 escape_rm_dl_Bmori1_room_3Tex_0033D8_ci8_ci8[] = {
	0x0001020304050506, 0x05070806090a0b04, 0x050c0d04030e0a0c, 0x040405040f101011, 0x1213140215011617, 0x1802060e191a1b1b, 0x1b1c1d181b011b14, 0x011e1b161f202122, 
	0x0003230903240e16, 0x161606011d181f16, 0x21021f2524010016, 0x1602152116012026, 0x030c27280429281f, 0x0e24060118161b1b, 0x180102240e2a021d, 0x1d16012801021703, 
	0x0924230b2b232c28, 0x160e060a1c141e14, 0x2a01012d0016182a, 0x211f02092601162e, 0x030b2323161f2816, 0x162408031d141c1b, 0x0202020e01182001, 0x162a2d0e020e1610, 
	0x1c0e18012a010e19, 0x1a2a0607012f1b1e, 0x1c1e180e2a2d2a16, 0x161e141b18171607, 0x0607070410303105, 0x0c3211080631102e, 0x03052e05090a0b03, 0x0c090305050f1033, 
	0x11070c0c07043432, 0x072e030a0c040410, 0x06352e0f32081110, 0x0d0c060707080705, 0x0a36361a1e1d0122, 0x2821151528281f1f, 0x2a181e370e060a36, 0x1d1d1e1e38181515, 
	0x0a0e241417010e28, 0x2339153a22280021, 0x161c381b02061436, 0x25251f1d02152623, 0x0d16180e18152f28, 0x273b232623020221, 0x21181c1603082a1b, 0x010b03030021122e, 
	0x0317200b18212128, 0x393a052303381416, 0x18170e020c080116, 0x01090b060501213c, 0x0b2123241d162128, 0x39150005012a141b, 0x1e2a00160a061621, 0x25240203010e183d, 
	0x052125181e142a18, 0x1500020e1c181e1b, 0x1c1c14360a071618, 0x2a1c140202142400, 0x082e31100c0b0505, 0x2e2e2e0c0a030b0b, 0x0900030607080405, 0x03090c0c05030304, 
	0x380a0c030c0c0607, 0x081111080d0d0c0c, 0x060606060c0a0c06, 0x0d06070606071111, 0x3619362a2a181b02, 0x020b080e1a1e1a36, 0x1b1919383814141e, 0x1e1b1c1c1c1c0c08, 
	0x0c03090a0109090d, 0x0309041b1b2a141d, 0x162d2409240a021d, 0x160b252901142432, 0x0c06050c060c0c06, 0x0129100e012a1c14, 0x2d240a090916211d, 0x1d09132328160108, 
	0x0c060c0d1005080d, 0x160a0824021c1e14, 0x380e0a090902010e, 0x1d01232327000008, 0x070410080404070d, 0x0a09080e1d1c1c2a, 0x14240b090b000121, 0x0e1623222e002932, 
	0x100403050c0c0a24, 0x240c33022a1e3617, 0x1816160e16012a1d, 0x1d182a0103290008, 0x1033103032070606, 0x081108060c030d07, 0x2e2e0f0606040404, 0x0606040707301008, 
	0x33060c0c0404060c, 0x0c0c0a0c032e2e0c, 0x06060f070811330c, 0x090a0c0a0c030002, 0x062a1c381b1d142a, 0x2a141b212a02002a, 0x0100152807061d1a, 0x3e381e361401161b, 
	0x0701050c2b030305, 0x272c3d27232b040d, 0x2b233126060d141d, 0x2d0e1c1c0e000116, 0x100b29050404070f, 0x3c0f232c050b0c05, 0x0d2e0416060c1e16, 0x1d24021c240a0b0c, 
	0x071f030306300732, 0x300d0704343c2831, 0x2e050c240d060e21, 0x1624290216280303, 0x0628032604310407, 0x040b07042e3c1328, 0x280028160b100116, 0x0e380e0e16000003, 
	0x112e16283c032904, 0x030b0c2626222816, 0x16011f180c321616, 0x160e1d1b0e161621, 0x11322e323f040407, 0x303332323211320f, 0x071032083306060f, 0x32342e0f3232100f, 
	
};

u64 escape_rm_dl_Bmori1_room_3Tex_0033D8_ci8_pal_rgba16[] = {
	0x53535b556b994a91, 0x39cd424f39cf29cb, 0x218b63175b595b15, 0x4a934a5173db29c9, 0x298910c56b8f5ad1, 0x845f5b916b9773d7, 0x7419ad679ce38c5d, 0x84217c1b8cdf5b53, 
	0x63136b933a8b4a8d, 0x739b52cf4b0f424b, 0x53115b13741b5ad3, 0x420d83df3a0b8415, 0x2185318919452107, 0x31c7294794e39d9f, 0x9463534f4ac9634b, 0x3ac95309b5ab2145, 
	
};

Vtx escape_rm_dl_floor_011_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {179, -826, 1814}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {179, -347, 1814}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {179, -347, 1115}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {179, -826, 1115}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1075, -826, 1814}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1075, -347, 1814}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1075, -347, 1115}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1075, -826, 1115}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx escape_rm_dl_floor_011_mesh_layer_Opaque_vtx_0[44] = {
	{{ {179, -826, 1135}, 0, {-2108, -946}, {255, 255, 255, 255} }},
	{{ {179, -826, 1814}, 0, {-2108, 2900}, {255, 255, 255, 255} }},
	{{ {1075, -826, 1814}, 0, {2969, 2900}, {255, 255, 255, 255} }},
	{{ {715, -826, 1135}, 0, {931, -946}, {255, 255, 255, 255} }},
	{{ {775, -826, 1135}, 0, {1271, -946}, {255, 255, 255, 255} }},
	{{ {1075, -826, 1135}, 0, {2969, -946}, {255, 255, 255, 255} }},
	{{ {775, -826, 1115}, 0, {1271, -1060}, {255, 255, 255, 255} }},
	{{ {715, -826, 1115}, 0, {931, -1060}, {255, 255, 255, 255} }},
	{{ {179, -347, 1814}, 0, {-2108, 2900}, {255, 255, 255, 255} }},
	{{ {179, -347, 1135}, 0, {-2108, -946}, {255, 255, 255, 255} }},
	{{ {1075, -347, 1135}, 0, {2969, -946}, {255, 255, 255, 255} }},
	{{ {1075, -347, 1814}, 0, {2969, 2900}, {255, 255, 255, 255} }},
	{{ {1075, -826, 1814}, 0, {-2025, 994}, {255, 255, 255, 255} }},
	{{ {1075, -347, 1814}, 0, {-2025, -1718}, {255, 255, 255, 255} }},
	{{ {1075, -347, 1135}, 0, {1822, -1718}, {255, 255, 255, 255} }},
	{{ {1075, -826, 1135}, 0, {1822, 994}, {255, 255, 255, 255} }},
	{{ {179, -826, 1135}, 0, {1822, 994}, {255, 255, 255, 255} }},
	{{ {179, -347, 1135}, 0, {1822, -1718}, {255, 255, 255, 255} }},
	{{ {179, -347, 1814}, 0, {-2025, -1718}, {255, 255, 255, 255} }},
	{{ {179, -826, 1814}, 0, {-2025, 994}, {255, 255, 255, 255} }},
	{{ {775, -826, 1135}, 0, {1271, 994}, {255, 255, 255, 255} }},
	{{ {1075, -826, 1135}, 0, {2969, 994}, {255, 255, 255, 255} }},
	{{ {1075, -347, 1135}, 0, {2969, -1718}, {255, 255, 255, 255} }},
	{{ {775, -726, 1135}, 0, {1271, 428}, {255, 255, 255, 255} }},
	{{ {715, -726, 1135}, 0, {931, 428}, {255, 255, 255, 255} }},
	{{ {179, -826, 1135}, 0, {-2108, 994}, {255, 255, 255, 255} }},
	{{ {179, -347, 1135}, 0, {-2108, -1718}, {255, 255, 255, 255} }},
	{{ {715, -826, 1135}, 0, {931, 994}, {255, 255, 255, 255} }},
	{{ {179, -826, 1814}, 0, {-2108, 994}, {255, 255, 255, 255} }},
	{{ {179, -347, 1814}, 0, {-2108, -1718}, {255, 255, 255, 255} }},
	{{ {1075, -347, 1814}, 0, {2969, -1718}, {255, 255, 255, 255} }},
	{{ {1075, -826, 1814}, 0, {2969, 994}, {255, 255, 255, 255} }},
	{{ {775, -726, 1135}, 0, {1271, -946}, {255, 255, 255, 255} }},
	{{ {715, -726, 1135}, 0, {931, -946}, {255, 255, 255, 255} }},
	{{ {715, -726, 1115}, 0, {931, -1060}, {255, 255, 255, 255} }},
	{{ {775, -726, 1115}, 0, {1271, -1060}, {255, 255, 255, 255} }},
	{{ {775, -826, 1135}, 0, {1822, 994}, {255, 255, 255, 255} }},
	{{ {775, -726, 1135}, 0, {1822, 428}, {255, 255, 255, 255} }},
	{{ {775, -726, 1115}, 0, {1935, 428}, {255, 255, 255, 255} }},
	{{ {775, -826, 1115}, 0, {1935, 994}, {255, 255, 255, 255} }},
	{{ {715, -726, 1135}, 0, {1822, 428}, {255, 255, 255, 255} }},
	{{ {715, -826, 1135}, 0, {1822, 994}, {255, 255, 255, 255} }},
	{{ {715, -826, 1115}, 0, {1935, 994}, {255, 255, 255, 255} }},
	{{ {715, -726, 1115}, 0, {1935, 428}, {255, 255, 255, 255} }},
};

Gfx escape_rm_dl_floor_011_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(escape_rm_dl_floor_011_mesh_layer_Opaque_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
	gsSP2Triangles(3, 4, 6, 0, 3, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
	gsSP2Triangles(22, 24, 23, 0, 22, 25, 24, 0),
	gsSP2Triangles(22, 26, 25, 0, 25, 27, 24, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPVertex(escape_rm_dl_floor_011_mesh_layer_Opaque_vtx_0 + 32, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSPEndDisplayList(),
};

Gfx mat_escape_rm_dl_brick_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, escape_rm_dl_Bmori1_room_3Tex_0033D8_ci8_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 63),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, escape_rm_dl_Bmori1_room_3Tex_0033D8_ci8_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx escape_rm_dl_floor_011_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(escape_rm_dl_floor_011_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_escape_rm_dl_brick_layerOpaque),
	gsSPDisplayList(escape_rm_dl_floor_011_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

