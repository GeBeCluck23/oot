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
SceneCmd escape_rm_exit_room_0_header00[] = {
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(7, 0, 10),
    SCENE_CMD_ROOM_SHAPE(&escape_rm_exit_room_0_shapeHeader),
    SCENE_CMD_END(),
};

RoomShapeNormal escape_rm_exit_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(escape_rm_exit_room_0_shapeDListEntry),
    escape_rm_exit_room_0_shapeDListEntry,
    escape_rm_exit_room_0_shapeDListEntry + ARRAY_COUNT(escape_rm_exit_room_0_shapeDListEntry)
};

RoomShapeDListsEntry escape_rm_exit_room_0_shapeDListEntry[1] = {
    { escape_rm_exit_room_0_entry_0_opaque, NULL },
};

Gfx escape_rm_exit_room_0_entry_0_opaque[] = {
	gsSPDisplayList(escape_rm_exit_dl_Floor_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

u64 escape_rm_exit_dl_syotes_room_0Tex_0041E8_rgba16_ci8[] = {
	0x0001010203040404, 0x0005040406060504, 0x0407040404040404, 0x0404040406010404, 0x08090a0b07040404, 0x020c050404040407, 0x040404040400000d, 0x0e0e0c010f090e10, 
	0x06110b0b0305120d, 0x02130b0507040404, 0x041404000b15110b, 0x1612171215021103, 0x000b111718171901, 0x0d1a01030a110100, 0x05050b1a1b0a1c0d, 0x0a020b0d120b0a1d, 
	0x030d0a0b0a1c110d, 0x000b10031b160a11, 0x1e1317020d1b0b03, 0x1b110b031c0b0d0a, 0x00030a0d0a0a0a0d, 0x000000050d0a1f0b, 0x03110b20031e0d10, 0x0d0b0d05031e030d, 
	0x00031b0d0a1b1103, 0x040606210d0a0b1f, 0x0d0b0b031b0a0503, 0x1c0d1b011f0a031b, 0x0300200d1b0d0a05, 0x0403211a0d1b0a0d, 0x0d1b1f210d0a2203, 0x0a1b1c0b1b1b100d, 
	0x230003031b0d1b0b, 0x0d0d01110b0d0a0d, 0x031b0d1b241e0203, 0x1b250b0b0b0b0d02, 0x0b0b0d001b0b0a0b, 0x030d100a0b031b0d, 0x101c0a0a0d1e1c0d, 0x1b001b0b0d0b0b0b, 
	0x1b16080d0b0d0a0d, 0x0d0b001b03001b03, 0x100d1d111f0b0a03, 0x1b000d020d0d250d, 0x03110b0a0a030d0d, 0x0d0203200d001f02, 0x050d08111b0b0a03, 0x1b070d190b030b0d, 
	0x001b0d1e0a030d03, 0x030a05031b06030d, 0x22120b021e0b0203, 0x0a06030a0a102621, 0x100a1f0d03102025, 0x101110000005020d, 0x1f110a0a020a1703, 0x0004031111031103, 
	0x030a0b0a02100d0b, 0x031603060405150b, 0x0b11020a12110305, 0x04041011170d1601, 0x031e1f0a17070d02, 0x100a0d05050d111d, 0x1e160a0a1212000d, 0x02060b0a110d110d, 
	0x000a0a1112000317, 0x000b03030b0a160b, 0x1b1111111116171b, 0x21031d11110d1900, 0x000a021112230111, 0x04021000060d111d, 0x0a1c111c1111110a, 0x1f100d1c110b1108, 
	0x0311110a11080312, 0x071f00000003110b, 0x0a0a11111111021b, 0x0b001b11110b111d, 0x030a1111120b0312, 0x062210000010110b, 0x0a1112111111110a, 0x0b000d11110b1a0b, 
	0x031b1112131d0311, 0x0d1a020004000b03, 0x1b111a111111110a, 0x0b100d1e11171102, 0x000b1111260b0d1b, 0x0d11270000002103, 0x0a11271111111111, 0x0205251b16121a08, 
	0x001d12111202210b, 0x0d1123070b0d030d, 0x0a111a111c111111, 0x170020111a17160b, 0x061f121112170d0d, 0x0d110d000b0d0310, 0x0a1111110a0a1611, 0x1110030a11111208, 
	0x061b111a12020d05, 0x030a000003100d04, 0x0a1111110a0a1111, 0x1103030d11111205, 0x040b1111120b1101, 0x030b050405000000, 0x0a1111111b1e110a, 0x0a00000311121207, 
	0x000d1112120a0208, 0x23280e0406050410, 0x0a11110a0d24111b, 0x1b0000030a111122, 0x050d0a1112020b21, 0x0b130c0404070400, 0x0a110a030b0a111b, 0x1e0305030a111108, 
	0x040d16021c1d0d03, 0x0a16280604040403, 0x0a111b0d0d1b1112, 0x120500030a111101, 0x1010110a0b220b0b, 0x2029130604040400, 0x0a11110a0d1e1912, 0x130100101b110a17, 
	0x2a05110a11111222, 0x2002122b061b0d05, 0x0a1112020d121112, 0x130b06060d0a1117, 0x13031202240b120b, 0x0d110a0e0d0d0005, 0x1d11170a1f111112, 0x182107060d0a112c, 
	0x27210a1b0a01020b, 0x0b110d0203030022, 0x0a1112110d161111, 0x120807061f112c0d, 0x02210b0b0a020203, 0x0b110d0b0604001d, 0x0a111a170d16110b, 0x0a0d0404030a1103, 
	0x2c080a0a1b111110, 0x030b020b0404060b, 0x291d11171b11122c, 0x0b210404031b1103, 0x22080d0b1d111103, 0x001f2c100406040b, 0x0b021c110b11160a, 0x0d121700000b1105, 
	0x230d030a0a0a1100, 0x000b17020406040d, 0x0a1b11110a111a11, 0x21112d03070b1105, 0x12170a1b0a0b1100, 0x040b02181004040d, 0x0a1b0a170a121111, 0x03111522070b2e08, 
	0x120d20250a0d110b, 0x100d0a260004211d, 0x2f2e0a110d1c1111, 0x21113022000a1102, 0x111d0b250d031102, 0x230b0b110d03122c, 0x0a1111110d0a1102, 0x0d0a160d050b1111, 
	0x0a110a0d10031111, 0x0d0d1b0a0a230211, 0x0a2e2e020b112e0b, 0x0d0a1103061b1b11, 0x0a0a0d0d050d0b0a, 0x0d211b0a0b0b1c0a, 0x0b2e0a0a0a2e0a0b, 0x0a0a1b03071b1b0a, 
	0x0a1d0d0b10201b1b, 0x0b1d0a1f0b1d0a0a, 0x0a0a0a0a0a0a0a0b, 0x0d1d240b031b0b0a, 0x0a0a0b0b10030b1b, 0x1b0d0a030b0b0b0a, 0x0a0a0a0a0a1b0a1b, 0x031f1b1b1b0a0b0a, 
	0x0a1b0d1b10031b1b, 0x0d030b1b0b0a1d1d, 0x0a0a1b1b1b0d1b0b, 0x0b1f1b0d030a1b0a, 0x1b201b200b1b1b0d, 0x03251b1b0b0b0a0a, 0x0a0a1b1b1b1b1b0b, 0x0d1b0d03251d0d0d, 
	0x20310d201b200d03, 0x03030d1b1b1d0a1d, 0x0a1b1b1b1b1f1b1b, 0x0d200d031f1b0d03, 0x030320030d250300, 0x0303200d1f1b0b1b, 0x1b1b200d1b0d1b1b, 0x03032500201b0d25, 
	0x0d0d030303200300, 0x001020200d1f1b1f, 0x1b1b03201b0d0320, 0x030325002020200d, 0x0d0d030000033200, 0x03030320030d1f0d, 0x1b2003200d20200d, 0x0303030003200303, 
	0x2020030003030300, 0x2003032503200d20, 0x2020200320202020, 0x2503030020202003, 0x0303030003030300, 0x2003030303202003, 0x0320030320030303, 0x0303030020030303, 
	0x3203030000320333, 0x0303030303032003, 0x3203030320030303, 0x0303330403030303, 0x0003000004000300, 0x0303000303030303, 0x0303030303033233, 0x0303000433030303, 
	0x0003040404040300, 0x0303033200030303, 0x0003000303323203, 0x0333330400030003, 0x0000000404040332, 0x0332333203030303, 0x0033000303030303, 0x0000320400320032, 
	0x0000000004040332, 0x3300003303320303, 0x0333003200033203, 0x0000320000000000, 0x0000000000320303, 0x0003030303033203, 0x0300103300033203, 0x0400320000040600, 
	0x0000000000030300, 0x0032320332330303, 0x0333000303030303, 0x0000000000040600, 0x0000000000030000, 0x0000000000330300, 0x3233060303030303, 0x0000000000320000, 
	0x0000000006330000, 0x0000000032030300, 0x3210000333003203, 0x3300000000000000, 0x0004000000000000, 0x0400000000320033, 0x0004000000000003, 0x0300000000000000, 
	0x0004000000000000, 0x0000000000330000, 0x0004000000000032, 0x3200000000000000, 0x0400000000000000, 0x0000060032320000, 0x0004060000000032, 0x3200000006000400, 
	
};

u64 escape_rm_exit_dl_syotes_room_0Tex_0041E8_rgba16_pal_rgba16[] = {
	0x2109314b4211294b, 0x18c72909210720c7, 0x39cd635b3a1139cf, 0x6319318d52955ad7, 0x294942534a9552d7, 0x108552d942554a53, 0x4ad73a134a5531cf, 0x42133a0f39d131cd, 
	0x298d318b398d420f, 0x318f298b4a974a93, 0x5b1931d1529341cf, 0x42515b5b3a533a51, 0x4295294d214b2149, 
};

Vtx escape_rm_exit_dl_Floor_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-300, -121, 2204}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-300, 655, 2204}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-300, 655, -364}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-300, -121, -364}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {300, -121, 2204}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {300, 655, 2204}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {300, 655, -364}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {300, -121, -364}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx escape_rm_exit_dl_Floor_mesh_layer_Opaque_vtx_0[68] = {
	{{ {-300, 655, 1667}, 0, {-1179, -23}, {0, 135, 38, 255} }},
	{{ {-132, 46, -300}, 0, {2213, 557}, {0, 135, 38, 255} }},
	{{ {132, 46, -300}, 0, {2213, 1466}, {0, 135, 38, 255} }},
	{{ {300, 655, 1667}, 0, {-1179, 2046}, {0, 135, 38, 255} }},
	{{ {30, -121, -300}, 0, {545, 1525}, {0, 0, 127, 255} }},
	{{ {132, -121, -300}, 0, {712, 1525}, {0, 0, 127, 255} }},
	{{ {132, 46, -300}, 0, {712, 979}, {0, 0, 127, 255} }},
	{{ {30, -21, -300}, 0, {545, 1198}, {0, 0, 127, 255} }},
	{{ {-132, 46, -300}, 0, {280, 979}, {0, 0, 127, 255} }},
	{{ {-30, -21, -300}, 0, {447, 1198}, {0, 0, 127, 255} }},
	{{ {-30, -121, -300}, 0, {447, 1525}, {0, 0, 127, 255} }},
	{{ {-132, -121, -300}, 0, {280, 1525}, {0, 0, 127, 255} }},
	{{ {-300, 655, 1667}, 0, {-16, 92}, {0, 134, 222, 255} }},
	{{ {300, 655, 1667}, 0, {1008, 92}, {0, 134, 222, 255} }},
	{{ {300, 506, 2204}, 0, {1008, 1957}, {0, 134, 222, 255} }},
	{{ {-300, 506, 2204}, 0, {-16, 1957}, {0, 134, 222, 255} }},
	{{ {300, 357, 1667}, 0, {-1191, 1611}, {129, 0, 11, 255} }},
	{{ {300, 655, 1667}, 0, {-1191, 299}, {129, 0, 11, 255} }},
	{{ {132, 46, -300}, 0, {2202, 1182}, {129, 0, 11, 255} }},
	{{ {132, -121, -300}, 0, {2202, 1758}, {129, 0, 11, 255} }},
	{{ {-132, -121, -300}, 0, {2202, 1758}, {127, 0, 11, 255} }},
	{{ {-132, 46, -300}, 0, {2202, 1182}, {127, 0, 11, 255} }},
	{{ {-300, 655, 1667}, 0, {-1191, 299}, {127, 0, 11, 255} }},
	{{ {-300, 357, 1667}, 0, {-1191, 1611}, {127, 0, 11, 255} }},
	{{ {300, 207, 2204}, 0, {1008, 1957}, {0, 122, 34, 255} }},
	{{ {300, 357, 1667}, 0, {1008, 92}, {0, 122, 34, 255} }},
	{{ {-222, 357, 1667}, 0, {117, 92}, {0, 122, 34, 255} }},
	{{ {-300, 207, 2204}, 0, {-16, 1957}, {0, 122, 34, 255} }},
	{{ {-300, 357, 1667}, 0, {-16, 92}, {0, 122, 34, 255} }},
	{{ {300, 655, 1667}, 0, {954, 345}, {129, 0, 0, 255} }},
	{{ {300, 357, 1667}, 0, {954, 1364}, {129, 0, 0, 255} }},
	{{ {300, 207, 2204}, 0, {38, 1875}, {129, 0, 0, 255} }},
	{{ {300, 655, 1667}, 0, {954, 345}, {129, 0, 0, 255} }},
	{{ {300, 207, 2204}, 0, {38, 1875}, {129, 0, 0, 255} }},
	{{ {300, 506, 2204}, 0, {38, 856}, {129, 0, 0, 255} }},
	{{ {-300, 357, 1667}, 0, {954, 1364}, {127, 0, 0, 255} }},
	{{ {-300, 655, 1667}, 0, {954, 345}, {127, 0, 0, 255} }},
	{{ {-300, 506, 2204}, 0, {38, 856}, {127, 0, 0, 255} }},
	{{ {-300, 207, 2204}, 0, {38, 1875}, {127, 0, 0, 255} }},
	{{ {30, -21, -300}, 0, {545, 1198}, {0, 129, 0, 255} }},
	{{ {-30, -21, -300}, 0, {447, 1198}, {0, 129, 0, 255} }},
	{{ {-30, -21, -364}, 0, {447, 1198}, {0, 129, 0, 255} }},
	{{ {30, -21, -364}, 0, {545, 1198}, {0, 129, 0, 255} }},
	{{ {30, -121, -364}, 0, {545, 1525}, {0, 0, 127, 255} }},
	{{ {30, -21, -364}, 0, {545, 1198}, {0, 0, 127, 255} }},
	{{ {-30, -21, -364}, 0, {447, 1198}, {0, 0, 127, 255} }},
	{{ {-30, -121, -364}, 0, {447, 1525}, {0, 0, 127, 255} }},
	{{ {30, -121, -300}, 0, {545, 1525}, {129, 0, 0, 255} }},
	{{ {30, -21, -300}, 0, {545, 1198}, {129, 0, 0, 255} }},
	{{ {30, -21, -364}, 0, {545, 1198}, {129, 0, 0, 255} }},
	{{ {30, -121, -364}, 0, {545, 1525}, {129, 0, 0, 255} }},
	{{ {-30, -21, -300}, 0, {447, 1198}, {127, 0, 0, 255} }},
	{{ {-30, -121, -300}, 0, {447, 1525}, {127, 0, 0, 255} }},
	{{ {-30, -121, -364}, 0, {447, 1525}, {127, 0, 0, 255} }},
	{{ {-30, -21, -364}, 0, {447, 1198}, {127, 0, 0, 255} }},
	{{ {-30, -121, -300}, 0, {2213, 908}, {0, 127, 0, 255} }},
	{{ {30, -121, -300}, 0, {2213, 1115}, {0, 127, 0, 255} }},
	{{ {30, -121, -364}, 0, {2317, 1115}, {0, 127, 0, 255} }},
	{{ {-30, -121, -364}, 0, {2317, 908}, {0, 127, 0, 255} }},
	{{ {-222, 357, 1667}, 0, {-1179, 245}, {0, 123, 226, 255} }},
	{{ {300, 357, 1667}, 0, {-1179, 2046}, {0, 123, 226, 255} }},
	{{ {132, -121, -300}, 0, {2213, 1466}, {0, 123, 226, 255} }},
	{{ {30, -121, -300}, 0, {2213, 1115}, {0, 123, 226, 255} }},
	{{ {-30, -121, -300}, 0, {2213, 908}, {0, 123, 226, 255} }},
	{{ {-30, -121, -300}, 0, {2213, 908}, {0, 123, 226, 255} }},
	{{ {-132, -121, -300}, 0, {2213, 557}, {0, 123, 226, 255} }},
	{{ {-222, 357, 1667}, 0, {-1179, 245}, {0, 123, 226, 255} }},
	{{ {-300, 357, 1667}, 0, {-1179, -23}, {0, 123, 226, 255} }},
};

Gfx escape_rm_exit_dl_Floor_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(escape_rm_exit_dl_Floor_mesh_layer_Opaque_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
	gsSP2Triangles(6, 8, 7, 0, 8, 9, 7, 0),
	gsSP2Triangles(8, 10, 9, 0, 8, 11, 10, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 26, 27, 24, 0),
	gsSP2Triangles(26, 28, 27, 0, 29, 30, 31, 0),
	gsSPVertex(escape_rm_exit_dl_Floor_mesh_layer_Opaque_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
	gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
	gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
	gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
	gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
	gsSP2Triangles(27, 29, 30, 0, 27, 30, 31, 0),
	gsSPVertex(escape_rm_exit_dl_Floor_mesh_layer_Opaque_vtx_0 + 64, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSPEndDisplayList(),
};

Gfx mat_escape_rm_exit_dl_wall_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, escape_rm_exit_dl_syotes_room_0Tex_0041E8_rgba16_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 51),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, escape_rm_exit_dl_syotes_room_0Tex_0041E8_rgba16_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx escape_rm_exit_dl_Floor_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(escape_rm_exit_dl_Floor_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_escape_rm_exit_dl_wall_layerOpaque),
	gsSPDisplayList(escape_rm_exit_dl_Floor_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

