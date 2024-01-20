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
#define LENGTH_ESCAPE_RM_ROOM_6_HEADER00_OBJECTLIST 1
#define LENGTH_ESCAPE_RM_ROOM_6_HEADER00_ACTORLIST 1
SceneCmd escape_rm_room_6_header00[] = {
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(0xFF, 0xFF, 0),
    SCENE_CMD_ROOM_SHAPE(&escape_rm_room_6_shapeHeader),
    SCENE_CMD_OBJECT_LIST(LENGTH_ESCAPE_RM_ROOM_6_HEADER00_OBJECTLIST, escape_rm_room_6_header00_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_ESCAPE_RM_ROOM_6_HEADER00_ACTORLIST, escape_rm_room_6_header00_actorList),
    SCENE_CMD_END(),
};

s16 escape_rm_room_6_header00_objectList[LENGTH_ESCAPE_RM_ROOM_6_HEADER00_OBJECTLIST] = {
    OBJECT_BOX,
};

ActorEntry escape_rm_room_6_header00_actorList[LENGTH_ESCAPE_RM_ROOM_6_HEADER00_ACTORLIST] = {
    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { 974, -826, 1553 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(88.989), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x47A4
    },
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
	gsSPDisplayList(escape_rm_dl_vines_mesh_layer_Opaque),
	gsSPDisplayList(escape_rm_dl_vines_001_mesh_layer_Opaque),
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

u64 escape_rm_dl_Bmori1_room_0Tex_0088F8_rgba16_ci8[] = {
	0x0001020304050606, 0x070800090a0b0b0b, 0x0b0b0b0b0c0c0b0b, 0x0b0b0b0b0b0b0b0d, 0x0e0f07100d060b0b, 0x090d0211120b0b0b, 0x0b0b0b1313141516, 0x17180b0b0b0b0619, 
	0x01070f1a0410120b, 0x06061b1c1b0b0b0b, 0x1d0a051e0f020d1f, 0x1320190b0b0b2122, 0x020f0e1a0723240b, 0x0b1825260a0b0b27, 0x2802292a2026152b, 0x2c2d2e130b0b1c04, 
	0x2f303107040e3233, 0x0b0b11340a0a3536, 0x37250820121c3839, 0x3a1a3b3c0b0b0b3d, 0x0b3e3f1508310e07, 0x0b0b150a3d0a4029, 0x41263015420a1b12, 0x121343440b0b0b0b, 
	0x0b19034546334712, 0x0b0b0b420348494a, 0x0a4b02264c0f104b, 0x100f4d4e0b0b0b0b, 0x0b0b4f2f5033020b, 0x0b0b0b0b153d0d0a, 0x0b0b260f3051043d, 0x100752220b0b0b0b, 
	0x0b0b0b121523120b, 0x0b0b0b0b0b0b0b0b, 0x0b0b0b5351542003, 0x2f1955060b0b0b0b, 0x0b0b0b0b07380b0b, 0x0b0b56570b0b0b0b, 0x0b0b0b0b58542059, 0x5a5b5c0b0b0b0b0b, 
	0x0b0b0b5d33452f0b, 0x0b2c145e060b0b0b, 0x0b0b0b0b585f1560, 0x61621d0b0b0b0b0b, 0x0b0b161a6333150b, 0x0b3064011c656615, 0x1e0b0b0b35671868, 0x59695a0b0b0b0b0b, 
	0x0b0b19336a0e1c10, 0x476b33191b02071b, 0x300e0b0b3837060b, 0x686c625a0b0b0b0b, 0x0b0b226d630f105e, 0x6b355e6e6f08153d, 0x515f360b0b040b0b, 0x0b70715a0b0b0b0b, 
	0x0b0b17727305100f, 0x7457757677170b18, 0x0178790b0b0b0b0b, 0x0b7a7b715a0b0b0b, 0x0b0b0b3471695b10, 0x127c7d7e1e0b0b0b, 0x15044a0b0b0b0b0b, 0x0b0b7f71620b0b0b, 
	0x0b0b0b0b80616266, 0x06350e81050b0b0b, 0x0b0b0b0b0b0b0b0b, 0x0b0b82835a5a0b0b, 0x0b0b0b0b84855a0b, 0x0b500f220b0b0b0b, 0x0b0b0b0b0b0b0b0b, 0x0b0b7f83860c0b0b, 
	0x0b0b0b0b87858362, 0x0b11660b0b0b0b0b, 0x0b0b0b0b0b0b0b0b, 0x0b0b7f8688880b0b, 0x0b0b0b0b0b828589, 0x0f14428a12068b8c, 0x474a0b0b0b0b0b0b, 0x0b0b7f0c5a0b0b0b, 
	0x0b0b0b0b0b0b8d70, 0x474702118e5e7447, 0x47510d0b0b0b0b0b, 0x0b0b7f865a0b0b0b, 0x0b0b0b0b0b0b190e, 0x33238e0b5702578f, 0x0f30144b0b0b0b0b, 0x0b7f830c5a0b0b0b, 
	0x0b0b0b0b0b195490, 0x5891920b0b660606, 0x1c0d04120b0b0b0b, 0x0b82865a0b0b0b0b, 0x0b0b0b0b0b939495, 0x2396620b0b0b060b, 0x0b0b0b120b0b0b0b, 0x0b0b0b0b0b0b0b0b, 
	0x0b0b0b0b0b972e23, 0x1261965a0b0b071f, 0x0b0b0b0b0b0b0b0b, 0x0b0b0b0b0b0b0b0b, 0x0b0b0b0b0b0f4d38, 0x804f5b985a0b1f02, 0x110b0b0b0b0b0b0b, 0x0b0b0b0b0b0b0b0b, 
	0x0b0b0b0b0b0b8f0b, 0x6896847b835a8c22, 0x05100b0b0b0b0b0b, 0x0b0b0b0b0b3c4e0b, 0x0b0b0b0b0b0b0b0b, 0x7a996282719a5a07, 0x57100b0b0b0b0b0b, 0x0b0b0b0b0b3c9b01, 
	0x0b0b0b0b0b0b0b0b, 0x87835a0b9c9d7b5a, 0x45260d0b0b0b0b0b, 0x07070b06020e9e1a, 0x0b0b0b0b0b0b0b0b, 0x7f865a0b0b8d5b06, 0x1b66116f470b0b11, 0x6d359fa0122613a1, 
	0x0b0b0b0b0b0b0b0b, 0x880c5a0b0b0b7f0f, 0x576650012857096b, 0x2704022c47022073, 0x0b0b0b0b0b0b0b0b, 0x880c5a0b0b0b0200, 0x73090d8f56505736, 0x8f0a06a2a3574b26, 
	0x0b0b0b0b0b0b0b0b, 0x880c620b0b0b3874, 0x20090b0a493591a4, 0x1c06065e246b1806, 0x0b0b0b0b0b0b0b88, 0x0c0c620b0b0b1066, 0x4b690b11a5a6a7a7, 0x1018065e33013d0b, 
	0x060b0b0b0b0b0b7f, 0x0c620b0b0b0b0b1c, 0x9c9a0b02a8a9020a, 0x0a0b0b5d1e184b10, 0x01380b0b0b0b0b82, 0x99620b0b0b0b0b0b, 0x7f860c0b66662612, 0x0b0b0b5e380a1501, 
	0x006b150b0b0b0b9c, 0x9a5a0b0b0b0b0b0b, 0x0b88850b0b0b0a34, 0x070f0b12120b4a22, 0x356d110b0b0b0b7a, 0x9a620b0b0b0b0b0b, 0x0b82980b0b0b1c8f, 0x356b22260b0b0b0b, 
	0x20aa720b0b0b875b, 0x69620b0b0b0b0b0b, 0x0b875b690a0a4b57, 0x35ab000b0b0b0b0b, 0xa92a380b0b0b8d6c, 0x8f570d0b0b0b0b0b, 0x0b0b870473913d0a, 0x8f00ac140b0b0b0b, 
	0x0ba9060b0b0b9c02, 0x8f8f201f0b0b0b0b, 0x0b0b476f50ad0b1b, 0x090f0e0f0b0b0b0b, 0x0b060b0b0b0b1114, 0x0227aeaf1f0b0b0b, 0x0b305130260b0b0b, 0xa70f51b00b0b0b0b, 
	0x0b0b0b0b0b264795, 0x268cb1b28c0b0b0b, 0x0b3374421c075e0b, 0x0b1819110b0b0b0b, 0x0b0b0b6602666fb3, 0x8e0ab4b5390a0b0b, 0x0a2f3d4207510130, 0x0b0b1c1b0b0b0b0b, 
	0x0b0b0b26502002a3, 0x0f0a07ac01264b06, 0x104f102314144747, 0x070b0b060b0b0b0b, 0x0b0b0b0a123023b6, 0xb0092f11741c0a12, 0x8b453a01957ca702, 0x575a0b0b0b0b0b0b, 
	0x0b0b0b0b06076f47, 0x0f0a060a02060735, 0x47b68a8a5101140a, 0x1b5a5a0b0b0b0b0b, 0x0b0b0b0b0b1b1247, 0x7406060b06060233, 0x017c0fa05e3535a9, 0x0a0c5a0b0b0b0b0b, 
	0x0b0b0b0b0b6271b7, 0xb80b0b0b0b1c1c38, 0x6b502f3d10021920, 0x7f995a5a0b0b0b0b, 0x5a5a5a0b5a9c5b0d, 0xb90b0b0b0b0b190a, 0x451d267257596545, 0x8899865a0b0b0b0b, 
	0x0c0c5a5a8298690b, 0x0d0b0b0b0b0b8f15, 0x102623ba351c10bb, 0x4d51865a0b0b0b0b, 0x880c869969bc6c0b, 0x0b0b0b0b0b0b1507, 0x512620bd730a0b22, 0x1a4d4e5a0b1c150b, 
	0x0b7f828287999a0b, 0x0b0b0b0b0b0b0d14, 0x8119150111650b66, 0x02394d51341e0013, 0x0b0b0b0b0b26070b, 0x0b0b0b0b0b0b0b8f, 0xbe201c11b84b0b0b, 0x06453333406b6bbf, 
	0x0b0b0b0b0c2f0f05, 0x0b0b0b0b0b0b0b0d, 0x23c03dc1b8060b0b, 0x06067c20b909aac2, 0x0b0b0b0b0c188c4e, 0xc30b0b0b0b0b0b0b, 0x140a6565060b0b0b, 0x0b2666260b1c0f07, 
	0x0b0b0b0b063a5458, 0x470b0b827f0b0b0b, 0x0b0b0f070b0b0b0b, 0x2213140a0b0ba90a, 0x0b0b0b064c4d3130, 0x070b9c830c0b0b0b, 0x0b51c40f0b0b0b30, 0x14310ea6650b0b4b, 
	0x0b0b0607454da245, 0xc598990c0b0b0b0b, 0x4ea3c6450b0b0b33, 0x02333600660b0b0b, 0x0b6507818a8aa00b, 0x846c0b0b0b0b0b0b, 0x39472c3d0b0b0b35, 0x26110023040b0b0b, 
	0x1c10742c1919190b, 0x85980b0b0b0b0b0b, 0x5e5e530b0b0b0b9c, 0x0d061157380b0b0b, 0x1c026fc78c515e0b, 0x0230200b0b0b0b0b, 0x0b92190b0b0b829d, 0x0b0b3815060b0b0b, 
	0x1c260f8a8cb04206, 0xb60e22150b0b0b0b, 0x0b8e0b0b0b0b9c5b, 0x0b0b06450b0b0b0b, 0xb0028f0504114b2f, 0xa26301c80a0b0b0b, 0x0b0b0b0b0b82999a, 0x0b0b0b060b0b0b1c, 
	
};

u64 escape_rm_dl_Bmori1_room_0Tex_0088F8_rgba16_pal_rgba16[] = {
	0x740d6bcd3a452941, 0x4245318308014287, 0x63cb29c121410800, 0x6a8129817c515309, 0x2983428532056b8d, 0x42c731c342074205, 0x2943424773cf1941, 0x19012101634b4a89, 
	0x4ac708814a875349, 0x744f324329c37c0f, 0x5b895b4763896b4d, 0x5b0b63cd95172143, 0x5b4b84918513740f, 0x3a03638b848f63c9, 0x3a05634d42899515, 0x841318c14a495acb, 
	0x4ac53a8321839d17, 0x94d731c54b47638d, 0x4283424331c11081, 0x29c57c116b8f1881, 0x4b076bcf845339c7, 0x8493630f42c53203, 0x84d3104120802081, 0x524d52c94ac98451, 
	0x18412881188084d1, 0x6c0f10c12181844d, 0x3940410195d37c4f, 0x390173cd5b0d5b8b, 0x394152015b095307, 0x5b494acb8d958d51, 0x8c8f7c0d52004181, 0x534b5b8d7cd18b80, 
	0x20c06c0d7b005a41, 0x418049c16a016240, 0xa40020c13a073a47, 0x530b49c032453a43, 0x8d133a8552cb7393, 0x9d557c5330c173d3, 0x494159c151818c95, 0x6a8031418cd55347, 
	0x21037bd15b4d7411, 0x3ac5738d6b8b2a03, 0x52874a856bcb8d4f, 0x7c9121c39511638f, 0x4b099d9595537c93, 0x7c138d5342c94b01, 0x42813a419dd3528b, 0x38c195936c0b39c3, 
	0x4ac13a0139c56b4f, 0x845549017bd33185, 0x3201000000000000
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

Vtx escape_rm_dl_vines_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {1072, -607, 1639}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1072, -348, 1639}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1072, -348, 1530}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1072, -607, 1530}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1072, -607, 1639}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1072, -348, 1639}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1072, -348, 1530}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1072, -607, 1530}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx escape_rm_dl_vines_mesh_layer_Opaque_vtx_0[4] = {
	{{ {1072, -607, 1639}, 0, {-16, 2032}, {127, 0, 0, 255} }},
	{{ {1072, -607, 1530}, 0, {1008, 2032}, {127, 0, 0, 255} }},
	{{ {1072, -348, 1530}, 0, {1008, -16}, {127, 0, 0, 255} }},
	{{ {1072, -348, 1639}, 0, {-16, -16}, {127, 0, 0, 255} }},
};

Gfx escape_rm_dl_vines_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(escape_rm_dl_vines_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx escape_rm_dl_vines_001_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {364, -605, 1811}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {364, -349, 1811}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {364, -349, 1811}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {364, -605, 1811}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {583, -605, 1811}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {583, -349, 1811}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {583, -349, 1811}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {583, -605, 1811}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx escape_rm_dl_vines_001_mesh_layer_Opaque_vtx_0[7] = {
	{{ {364, -349, 1811}, 0, {-880, -16}, {0, 0, 127, 255} }},
	{{ {364, -528, 1811}, 0, {-880, 1933}, {0, 0, 127, 255} }},
	{{ {413, -551, 1811}, 0, {-247, 2193}, {0, 0, 127, 255} }},
	{{ {583, -349, 1811}, 0, {1949, -16}, {0, 0, 127, 255} }},
	{{ {544, -605, 1811}, 0, {1450, 2772}, {0, 0, 127, 255} }},
	{{ {453, -584, 1811}, 0, {272, 2548}, {0, 0, 127, 255} }},
	{{ {583, -528, 1811}, 0, {1949, 1933}, {0, 0, 127, 255} }},
};

Gfx escape_rm_dl_vines_001_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(escape_rm_dl_vines_001_mesh_layer_Opaque_vtx_0 + 0, 7, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
	gsSP1Triangle(4, 6, 3, 0),
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

Gfx mat_escape_rm_dl_vines_2_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_TEX_EDGE2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, escape_rm_dl_Bmori1_room_0Tex_0088F8_rgba16_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 200),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, escape_rm_dl_Bmori1_room_0Tex_0088F8_rgba16_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
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

Gfx escape_rm_dl_vines_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(escape_rm_dl_vines_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_escape_rm_dl_vines_2_layerOpaque),
	gsSPDisplayList(escape_rm_dl_vines_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

Gfx escape_rm_dl_vines_001_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(escape_rm_dl_vines_001_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_escape_rm_dl_vines_2_layerOpaque),
	gsSPDisplayList(escape_rm_dl_vines_001_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

