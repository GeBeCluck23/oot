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
#define LENGTH_ESCAPE_RM_ROOM_2_HEADER00_OBJECTLIST 2
#define LENGTH_ESCAPE_RM_ROOM_2_HEADER00_ACTORLIST 2
SceneCmd escape_rm_room_2_header00[] = {
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(0xFF, 0xFF, 0),
    SCENE_CMD_ROOM_SHAPE(&escape_rm_room_2_shapeHeader),
    SCENE_CMD_OBJECT_LIST(LENGTH_ESCAPE_RM_ROOM_2_HEADER00_OBJECTLIST, escape_rm_room_2_header00_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_ESCAPE_RM_ROOM_2_HEADER00_ACTORLIST, escape_rm_room_2_header00_actorList),
    SCENE_CMD_END(),
};

s16 escape_rm_room_2_header00_objectList[LENGTH_ESCAPE_RM_ROOM_2_HEADER00_OBJECTLIST] = {
    OBJECT_RAT,
    OBJECT_BOX,
};

ActorEntry escape_rm_room_2_header00_actorList[LENGTH_ESCAPE_RM_ROOM_2_HEADER00_ACTORLIST] = {
    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { 379, -50, -1030 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(90.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x054A
    },

    // Custom Actor
    {
        /* Actor ID   */ ACTOR_RAT,
        /* Position   */ { 352, -50, -498 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },
};

RoomShapeNormal escape_rm_room_2_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(escape_rm_room_2_shapeDListEntry),
    escape_rm_room_2_shapeDListEntry,
    escape_rm_room_2_shapeDListEntry + ARRAY_COUNT(escape_rm_room_2_shapeDListEntry)
};

RoomShapeDListsEntry escape_rm_room_2_shapeDListEntry[1] = {
    { escape_rm_room_2_entry_0_opaque, NULL },
};

Gfx escape_rm_room_2_entry_0_opaque[] = {
	gsSPDisplayList(escape_rm_dl_floor_002_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

u64 escape_rm_dl_old_wall_rgba16_ci8[] = {
	0x0001010203040506, 0x02030708090a0b0c, 0x0d0e0f0610050311, 0x120313140e150316, 0x050315171805191a, 0x1b1c1d1e1f202122, 0x231a2124250e2627, 0x1c1a1c28291a1c2a, 
	0x2b2c182d261e2e2f, 0x2d30310e32332121, 0x0e30343521361a37, 0x38213036393a2929, 0x3b3c3d183e031821, 0x26301a0e3f2e2121, 0x0e2f343839112937, 0x1a21291134214022, 
	0x3b262f262f281c41, 0x42213f363f184321, 0x2321444039364537, 0x3a39291127463447, 0x3b262f482f0e1c49, 0x2f342f3630323439, 0x36214434434a454b, 0x39274c4d2744374e, 
	0x4f262f482f0e2421, 0x30342f36303e3443, 0x36214e34504a4551, 0x4337394d4444374b, 0x4f182f48520e0f21, 0x2f34303630263439, 0x11394b44274a4c53, 0x2737435455373737, 
	0x0318424241365621, 0x423452362f323439, 0x11434b4443574c51, 0x4337435455373737, 0x4f2e3e35411b5622, 0x3534213621322139, 0x1139374350234558, 0x59555054375a5537, 
	0x4f2e26263006102f, 0x35342f365b323939, 0x1139374350575c55, 0x4055432a375d5e37, 0x4f2e3526323b1022, 0x5f342136343e3939, 0x4d436043274a6162, 0x6355502a605e5a37, 
	0x4f2e1a353e3b5622, 0x35343036343e3939, 0x4d43604355115c55, 0x40585064585e5565, 0x2b2e1a3d2f281821, 0x1a343036342f3439, 0x1143605d37542958, 0x43585064605a5565, 
	0x4f2e3e48211b1c21, 0x4234303634412739, 0x11436044372a4c58, 0x5551506660555565, 0x2b103e2f21361c21, 0x4234303634412739, 0x4d43514b37544c67, 0x6067686960605851, 
	0x3b183e484136265b, 0x4234454a34413439, 0x4d43514b372a596a, 0x6067556460606058, 0x28183e4221362634, 0x2f34292334412739, 0x4d435137582a596b, 0x6067556458585858, 
	0x6c263e3552361c5b, 0x3e341a2334524339, 0x4d43603451695967, 0x2751276458373737, 0x283e423521361c39, 0x1a341a23342f3939, 0x4d396043536d4c67, 0x4358276460555537, 
	0x2835303541362634, 0x1a393123342f2139, 0x4d39604351294551, 0x43585064585a5537, 0x3b354235410e1834, 0x1a416123342f2143, 0x3621444358612958, 0x43604354605a5562, 
	0x6e26483d410e186f, 0x42211c235b2f3943, 0x36404443582a6158, 0x5a604354555a3727, 0x28264842410e5634, 0x2f210f235b2f3434, 0x3625443455112a37, 0x343739543744375a, 
	0x3b263e4870061741, 0x52210f2339224734, 0x3625443439711027, 0x4437595437373737, 0x4f263e7241731741, 0x2f221c2321304734, 0x3625272139231027, 0x343739545a44374b, 
	0x2b183d3d52731741, 0x2f221c0e212f6f34, 0x4a30342f39711043, 0x7455594d2744374b, 0x752e2676520e2e41, 0x3e3f0f0e3f18345b, 0x0e30391a34365639, 0x30504c4d27344477, 
	0x751d0f262f732e52, 0x1c1a180e1c783422, 0x031a211a34562a25, 0x6d7961112774447a, 0x7b0e182476130631, 0x183e0f280f10393f, 0x1e1c211a34562a25, 0x7c61612339304172, 
	0x7d062e171f050318, 0x7e311828317f393f, 0x1e18251a5b101c21, 0x7e800f6e291a2f81, 0x8283061284010585, 0x86068788898a2c19, 0x14032e8b1083152e, 0x128c8c7d850c8d8a, 
	
};

u64 escape_rm_dl_old_wall_rgba16_pal_rgba16[] = {
	0x410349435a076a47, 0x390359c572895185, 0x30c161c549038acb, 0x8ac951837ac9934d, 0x8b0b8b0962476207, 0x41436a4982477b0b, 0x8b4d7acb9bcf7b09, 0x938d82cb62058b0d, 
	0x724bac53ac137ac7, 0x8b8dac11938fbc95, 0x7287a3cf934b6245, 0x830d834d830ba413, 0xa4119b8f9b918b4f, 0xb49593cf8309c4d7, 0x9c0fb453a4516a87, 0x8b8f93d19bd1a3d1, 
	0xac51ac559c11b493, 0xbcd7a40fb4d5bc97, 0x9c13ac958307c519, 0xac0f8b49bcd96a45, 0xbc93cd19a453cd59, 0x9349c4d58b4b82c7, 0xcd17b451bcd5b455, 0xa3cdb4d3bcd393cd, 
	0xc5179b8dc495ac4f, 0x9389cd5b9b89d559, 0xc4d39b8bd55bd59b, 0x72c79bcd7285b497, 0xa45582c99bd372c9, 0xac935a039391c51b, 0x7a87abcfbcdb51c3, 0x938b4983834b8b0f, 
	0x9b4d7291390159c7, 0x72497a896a896a07, 0x51c57acd6a4d72cb, 0x72478b1100000000
};

u64 escape_rm_dl_old_wall2_rgba16_ci8[] = {
	0x0001020304050607, 0x08090a080b0c0d0e, 0x080a0f1011121213, 0x1415161718191a1b, 0x1c1d1e1f20212223, 0x2425262728292a2b, 0x2c0b2d2e2f301a31, 0x3233341635363738, 
	0x01393a3b093c263d, 0x3e3f402641424342, 0x1a2844452f461a33, 0x47384849354a4b4c, 0x4d4e4f2441504625, 0x51521a4025524853, 0x54482b552f1a494a, 0x56575859575a2833, 
	0x5b5c5d5e5f466052, 0x3b613d3062524b52, 0x631316484a30544a, 0x642f134965576667, 0x6849695225504052, 0x524b0d454b314b31, 0x1a586a5a4c30494a, 0x35366b6b6c353567, 
	0x6d546e2525402625, 0x20522e46524b4b31, 0x496f70573571714a, 0x315a283072737467, 0x75765d252540776e, 0x78797a307b627c33, 0x491323573671637d, 0x655a137e7f7f7235, 
	0x80816a5e6e828353, 0x81423d1a7b315757, 0x496b848536861573, 0x873588717f723572, 0x8976257652603c25, 0x245258464b4b5757, 0x49488a4157636365, 0x568b86308c8d8e8b, 
	0x893d7a2e522c2c29, 0x3b534140534b8f4b, 0x582a909136925972, 0x937286636c8b9474, 0x0595207a2540967a, 0x51530b40537b3157, 0x717a42483671638b, 0x5e72869794986c8b, 
	0x0520993225409629, 0x9a6260404b4b577b, 0x304b9b9136498872, 0x9c7f15596c987f9d, 0x809e9f5e2582963f, 0x476254404b335257, 0x494b9ba036718873, 0xa165a2376ca3a4a5, 
	0x08097a2025602c28, 0x61523d404b4b5731, 0x49a25248366363a6, 0xa772a8889da58ba5, 0x171625a925828329, 0xaa5258494b4b3157, 0x301552ab74866372, 0xac7fad6b8b8c73a3, 
	0xae16af5f6e402690, 0xb0622881a7315736, 0xb12a9bb23649458c, 0xb3b4ad6bb5b5a57f, 0xb63429b7611977af, 0x9a42418131625733, 0x494bb8a074716372, 0xb972946b7faca3a4, 
	0xae3dbabb251a5029, 0x5152561a8f313113, 0x2c2a28bc3663596c, 0x857fa888bd7fab35, 0x08197a7653463452, 0x474bbe814b335731, 0x40375fa23354717f, 0x877235888b8ea5b5, 
	0x89167a7a6934464b, 0x476243343131578f, 0x304b909336635973, 0xb98c3586bd8c8c98, 0x80163dbf53604625, 0xc03141263131a74b, 0x267a25c133494935, 0x647f1345c2a5a5a5, 
	0x80c38a2025301a25, 0xc43141406262c542, 0x2c42af6f74494935, 0xbc7236c6c2a57f73, 0x08bb205225401a25, 0x826225167ba76229, 0xb1c7af3536c84965, 0xa2729440747f726c, 
	0x08bbc9616e403441, 0x52aa34ca7bcb3129, 0x402a285a57454935, 0x4a3559cc67cd7374, 0x89cecf61aa60407a, 0x5f5241ca31624b29, 0x2c2a484a5a583036, 0x4a332a9667726c35, 
	0x17bb61995d502c7a, 0xd025349625626253, 0x2c48afd1366b304c, 0xd28f152c67d37235, 0xd4216976613c3cba, 0xbb25beca527b4b15, 0x4048d54c571a304a, 0xbb31a20e33363574, 
	0xd6d7d8d961ca963d, 0xda527a3caa524b3f, 0x163ddb48a726dc7b, 0xc05728456772678f, 0xddde7a9941ca0e2a, 0xdf250bd44153483f, 0x4034e06f310ee133, 0xe23148158f331315, 
	0xe38649207ae4e5e6, 0xe77a190e8a7a4829, 0x4028e84231963c8f, 0xc0312a592f4b1313, 0xe92109eae608ebe6, 0xec1bd4ed238a230d, 0xeeeff0f153edf23d, 0xf33fd4f2150bf418, 
	
};

u64 escape_rm_dl_old_wall2_rgba16_pal_rgba16[] = {
	0x188362955a957b59, 0x72d7184130c371c3, 0x30c1830d49437acb, 0x624982c951833041, 0x5987930b4101a3cf, 0x51c7934b6a473901, 0x8ac9728972877a89, 0x7359418d5a512085, 
	0x8b8f59c751817247, 0x5205a41362056247, 0x9bcf9b8f938d8b0b, 0x6203828f8b8dbc97, 0x7285b4957b09b453, 0x830bc4d7bc95938b, 0xa38f18859b936287, 0x5a038b4d5a87934d, 
	0x6a459bd1ac139c11, 0x6a4d83096a856ac7, 0xa4117ac7c519ac53, 0xbcd55a5349cb8311, 0x62455a45ac55a3d1, 0x7ac98b87834bbcd7, 0x8b4b82c7c4d949cd, 0x8b539bd37309ac57, 
	0x6a87a455b4978307, 0x7b47cd5bb493b411, 0x10439c1393918b49, 0xc4d5724da415a40f, 0x930f7ac5cd19cd59, 0xbc935185834d6243, 0xbd1dac95938fb455, 0xc51bcd1b82c5d55b, 
	0x208172c772c95a05, 0x7a4b7b498b098389, 0x8b0728c18b0dcd17, 0xd59bcd15dd59ac11, 0xa3d38349724393cd, 0xb45172cb59c37a85, 0xccd793d16ac5ac15, 0x940dc4938b4f9c15, 
	0xa4518387ac51dd9b, 0xd519d559d599bcd9, 0xa3cda457ac97c517, 0xd59d9b8b28819b91, 0xbd1b6a43d5dfee63, 0xdddfdd9d4141730b, 0xb4578b89934f6a89, 0x8b8bccd593cf838d, 
	0x62859c0fc49559c5, 0x6b09b4d972459b8d, 0x6a8393d351c3c55b, 0x61c3bd178b91ac99, 0x6ac9a4537b07acd5, 0x62077a8b180161c7, 0x6a078bcf5a857a87, 0x6a05518938c15a43, 
	0xa38b59c162834945, 0x4941498182cb4181, 0xa39349037b0b4145, 0x314141434983abd1, 0x51cb82cd49855207, 0x7205000000000000
};

Vtx escape_rm_dl_floor_002_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-459, -50, -382}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-459, 156, -382}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-459, 156, -1081}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-459, -50, -1081}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {437, -50, -382}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {437, 156, -382}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {437, 156, -1081}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {437, -50, -1081}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx escape_rm_dl_floor_002_mesh_layer_Opaque_vtx_0[20] = {
	{{ {-459, -50, -1081}, 0, {496, -7680}, {196, 196, 196, 255} }},
	{{ {-459, -50, -402}, 0, {496, 496}, {43, 43, 43, 255} }},
	{{ {-29, -50, -402}, 0, {5676, 496}, {114, 114, 114, 255} }},
	{{ {31, -50, -402}, 0, {6398, 496}, {25, 25, 25, 255} }},
	{{ {-29, -50, -382}, 0, {5676, 737}, {3, 3, 3, 255} }},
	{{ {31, -50, -382}, 0, {6398, 737}, {0, 0, 0, 255} }},
	{{ {437, -50, -1081}, 0, {11286, -7680}, {57, 57, 57, 255} }},
	{{ {437, -50, -402}, 0, {11286, 496}, {57, 57, 57, 255} }},
	{{ {-459, 156, -402}, 0, {496, 496}, {107, 107, 107, 255} }},
	{{ {-459, 156, -1081}, 0, {496, -7680}, {147, 147, 147, 255} }},
	{{ {437, 156, -1081}, 0, {11286, -7680}, {80, 80, 80, 255} }},
	{{ {437, 156, -402}, 0, {11286, 496}, {196, 196, 196, 255} }},
	{{ {-29, -50, -402}, 0, {410, 993}, {114, 114, 114, 255} }},
	{{ {-29, 50, -382}, 0, {410, 510}, {33, 33, 33, 255} }},
	{{ {-29, -50, -382}, 0, {410, 993}, {3, 3, 3, 255} }},
	{{ {-29, 50, -402}, 0, {410, 510}, {255, 255, 255, 255} }},
	{{ {31, 50, -382}, 0, {700, 510}, {8, 8, 8, 255} }},
	{{ {31, 50, -402}, 0, {700, 510}, {255, 255, 255, 255} }},
	{{ {31, -50, -382}, 0, {700, 993}, {0, 0, 0, 255} }},
	{{ {31, -50, -402}, 0, {700, 993}, {25, 25, 25, 255} }},
};

Gfx escape_rm_dl_floor_002_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(escape_rm_dl_floor_002_mesh_layer_Opaque_vtx_0 + 0, 20, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 6, 0, 0, 3, 7, 6, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSP2Triangles(15, 16, 13, 0, 15, 17, 16, 0),
	gsSP2Triangles(17, 18, 16, 0, 17, 19, 18, 0),
	gsSPEndDisplayList(),
};

Vtx escape_rm_dl_floor_002_mesh_layer_Opaque_vtx_1[16] = {
	{{ {437, -50, -1081}, 0, {2661, 993}, {57, 57, 57, 255} }},
	{{ {437, 156, -1081}, 0, {2661, -1}, {80, 80, 80, 255} }},
	{{ {-459, 156, -1081}, 0, {-1669, -1}, {147, 147, 147, 255} }},
	{{ {-459, -50, -1081}, 0, {-1669, 993}, {196, 196, 196, 255} }},
	{{ {-29, -50, -402}, 0, {410, 993}, {114, 114, 114, 255} }},
	{{ {-459, -50, -402}, 0, {-1669, 993}, {43, 43, 43, 255} }},
	{{ {-459, 156, -402}, 0, {-1669, -1}, {107, 107, 107, 255} }},
	{{ {-29, 50, -402}, 0, {410, 510}, {255, 255, 255, 255} }},
	{{ {437, 156, -402}, 0, {2661, -1}, {196, 196, 196, 255} }},
	{{ {31, 50, -402}, 0, {700, 510}, {255, 255, 255, 255} }},
	{{ {31, -50, -402}, 0, {700, 993}, {25, 25, 25, 255} }},
	{{ {437, -50, -402}, 0, {2661, 993}, {57, 57, 57, 255} }},
	{{ {437, -50, -402}, 0, {-1144, 993}, {57, 57, 57, 255} }},
	{{ {437, 156, -402}, 0, {-1144, -1}, {196, 196, 196, 255} }},
	{{ {437, 156, -1081}, 0, {2136, -1}, {80, 80, 80, 255} }},
	{{ {437, -50, -1081}, 0, {2136, 993}, {57, 57, 57, 255} }},
};

Gfx escape_rm_dl_floor_002_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(escape_rm_dl_floor_002_mesh_layer_Opaque_vtx_1 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
	gsSP2Triangles(6, 8, 7, 0, 8, 9, 7, 0),
	gsSP2Triangles(8, 10, 9, 0, 8, 11, 10, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Vtx escape_rm_dl_floor_002_mesh_layer_Opaque_vtx_2[4] = {
	{{ {-459, -50, -1081}, 0, {2136, 993}, {196, 196, 196, 255} }},
	{{ {-459, 156, -1081}, 0, {2136, -1}, {147, 147, 147, 255} }},
	{{ {-459, 156, -402}, 0, {-1144, -1}, {107, 107, 107, 255} }},
	{{ {-459, -50, -402}, 0, {-1144, 993}, {43, 43, 43, 255} }},
};

Gfx escape_rm_dl_floor_002_mesh_layer_Opaque_tri_2[] = {
	gsSPVertex(escape_rm_dl_floor_002_mesh_layer_Opaque_vtx_2 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_escape_rm_dl_old_wall_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, escape_rm_dl_old_wall_rgba16_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 141),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, escape_rm_dl_old_wall_rgba16_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_escape_rm_dl_old_wall2_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, escape_rm_dl_old_wall2_rgba16_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 244),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, escape_rm_dl_old_wall2_rgba16_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx escape_rm_dl_floor_002_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(escape_rm_dl_floor_002_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_escape_rm_dl_tile_layerOpaque),
	gsSPDisplayList(escape_rm_dl_floor_002_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_escape_rm_dl_old_wall_layerOpaque),
	gsSPDisplayList(escape_rm_dl_floor_002_mesh_layer_Opaque_tri_1),
	gsSPDisplayList(mat_escape_rm_dl_old_wall2_layerOpaque),
	gsSPDisplayList(escape_rm_dl_floor_002_mesh_layer_Opaque_tri_2),
	gsSPEndDisplayList(),
};

