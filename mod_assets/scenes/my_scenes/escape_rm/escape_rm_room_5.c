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
#define LENGTH_ESCAPE_RM_ROOM_5_HEADER00_OBJECTLIST 3
#define LENGTH_ESCAPE_RM_ROOM_5_HEADER00_ACTORLIST 9
SceneCmd escape_rm_room_5_header00[] = {
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(0xFF, 0xFF, 0),
    SCENE_CMD_ROOM_SHAPE(&escape_rm_room_5_shapeHeader),
    SCENE_CMD_OBJECT_LIST(LENGTH_ESCAPE_RM_ROOM_5_HEADER00_OBJECTLIST, escape_rm_room_5_header00_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_ESCAPE_RM_ROOM_5_HEADER00_ACTORLIST, escape_rm_room_5_header00_actorList),
    SCENE_CMD_END(),
};

s16 escape_rm_room_5_header00_objectList[LENGTH_ESCAPE_RM_ROOM_5_HEADER00_OBJECTLIST] = {
    OBJECT_JUMPTOGGLE_PLATFORM,
    OBJECT_PLATFORMS,
    OBJECT_BOX,
};

ActorEntry escape_rm_room_5_header00_actorList[LENGTH_ESCAPE_RM_ROOM_5_HEADER00_ACTORLIST] = {
    // Custom Actor
    {
        /* Actor ID   */ ACTOR_JUMPTOGGLE_PLATFORM,
        /* Position   */ { -570, 304, -661 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },

    // Custom Actor
    {
        /* Actor ID   */ ACTOR_JUMPTOGGLE_PLATFORM,
        /* Position   */ { -544, 304, -1158 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(180.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },

    // Custom Actor
    {
        /* Actor ID   */ ACTOR_PLATFORMS,
        /* Position   */ { 104, 960, -1575 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x8000
    },

    // Custom Actor
    {
        /* Actor ID   */ ACTOR_PLATFORMS,
        /* Position   */ { 594, 1022, -1743 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x8000
    },

    // Custom Actor
    {
        /* Actor ID   */ ACTOR_PLATFORMS,
        /* Position   */ { 261, 987, -1810 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x8000
    },

    // Custom Actor
    {
        /* Actor ID   */ ACTOR_PLATFORMS,
        /* Position   */ { 386, 999, -1539 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x8000
    },

    // Custom Actor
    {
        /* Actor ID   */ ACTOR_PLATFORMS,
        /* Position   */ { -39, 935, -1826 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x8000
    },

    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { 915, 967, -1678 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x5AA0
    },

    // Custom Actor
    {
        /* Actor ID   */ ACTOR_JUMPTOGGLE_PLATFORM,
        /* Position   */ { -313, 304, -914 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(90.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },
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
	gsSPDisplayList(escape_rm_dl_Cube_mesh_layer_Opaque),
	gsSPDisplayList(escape_rm_dl_Cube_001_mesh_layer_Opaque),
	gsSPDisplayList(escape_rm_dl_Cube_002_mesh_layer_Opaque),
	gsSPDisplayList(escape_rm_dl_Cube_003_mesh_layer_Opaque),
	gsSPDisplayList(escape_rm_dl_floor_004_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

u64 escape_rm_dl_wood_rgba16_ci8[] = {
	0x0001010102020304, 0x000501060708090a, 0x00010b0b070c0d0a, 0x0e060f0b070c0510, 0x00010101070c090a, 0x00010101070c090a, 0x00010101070c0d0a, 0x0e010101070c0d0a, 
	0x00010501070c090a, 0x00010501070c090a, 0x00010501070c0d0a, 0x0e010501070c0d0a, 0x00010505070c110a, 0x00010505070c110a, 0x00010505070c050a, 0x0e010505070c050a, 
	0x0001050d0702110a, 0x0001050d0702110a, 0x0001050d0702050a, 0x0e01050d0702050a, 0x000105051202110a, 0x000105051202110a, 0x000105051202050a, 0x0e0105051202050a, 
	0x000105051202110a, 0x000105051202110a, 0x000105051202050a, 0x0e0105051202050a, 0x000105050502110a, 0x000105050502110a, 0x000105050502050a, 0x0e0105050502050a, 
	0x000105050502110a, 0x000105050502110a, 0x000105050502050a, 0x0e0105050502050a, 0x00010d050107110a, 0x00010d050107110a, 0x00010d050107010a, 0x0e010d050107050a, 
	0x00010d050107110a, 0x00010d050107110a, 0x00010d050107010a, 0x0e010d050107050a, 0x00050706010d110a, 0x00050706010d110a, 0x00050706010d010a, 0x0e050706010d010a, 
	0x00051305010d110a, 0x00051305010d110a, 0x00051305010d010a, 0x0e051305010d010a, 0x000d1302010d110a, 0x000d1302010d110a, 0x000d1302010d010a, 0x0e0d1302010d010a, 
	0x000d1302010d110a, 0x000d1302010d110a, 0x000d1302010d010a, 0x0e0d1302010d010a, 0x140d1302050d090a, 0x140d1302050d090a, 0x140d1302050d010a, 0x0e0d1302050d010a, 
	0x140d1302050d090a, 0x140d1302050d090a, 0x140d1302050d010a, 0x0e0d1302050d010a, 0x14071302050d090a, 0x14071302050d090a, 0x14071302050d010a, 0x150d1302050d010a, 
	0x14071302050d090a, 0x14071302050d090a, 0x14071302050d010a, 0x150d1302050d010a, 0x1407130105051617, 0x1407130105051617, 0x1407130105050117, 0x1518130105050517, 
	0x14071301010d1617, 0x14071301010d1617, 0x14071301010d0117, 0x15181301010d0517, 0x140d1301050d1617, 0x140d1301050d1617, 0x140d1301050d0517, 0x190d1301050d0517, 
	0x140d1301010d1617, 0x140d1301010d1617, 0x140d1301010d0517, 0x190d1301010d0517, 0x1a050712010d110a, 0x1a050712010d110a, 0x1a050712010d050a, 0x19050712010d050a, 
	0x1a050712010d110a, 0x1a050712010d110a, 0x1a050712010d050a, 0x19050712010d050a, 0x1b0512060101110a, 0x1b0512060101110a, 0x1b0512060101160a, 0x1c0512060101050a, 
	0x1b0512060101110a, 0x1b0512060101110a, 0x1b0512060101160a, 0x1c0512060101050a, 0x1a0512120505110a, 0x1a0512120505110a, 0x1a0112120505060a, 0x190512120505010a, 
	0x1a0512120d05110a, 0x1a0512120d05110a, 0x1a0112120d05060a, 0x190512120d05010a, 0x1a0101120712110a, 0x1a0112120701110a, 0x1b0112120712060a, 0x190101120712010a, 
	0x1a0101120701110a, 0x1a0106120701110a, 0x1b0106120701060a, 0x190101120701010a, 0x1b0106120712110a, 0x1d0f06120712110a, 0x1d0601120701060a, 0x1c0601121201010a, 
	
};

u64 escape_rm_dl_wood_rgba16_pal_rgba16[] = {
	0x8b97410349853105, 0x7b0f414339034945, 0x498731477b113905, 0x518749436ad130c3, 0x7acf310741455185, 0x8b956a9139478311, 0x49836a8f83958355, 0x628f835300000000
};

u64 escape_rm_dl_bookshelf_rgba16_ci8[] = {
	0x0001000001010102, 0x0304010501050502, 0x0202000305000202, 0x0202010000010504, 0x0101000505050405, 0x0505050501010103, 0x0501030402010101, 0x0102020200010101, 
	0x060708090a0b070c, 0x0d060e0f0f0f0606, 0x10061106060f110e, 0x061106111213130c, 0x06070809090b1415, 0x0f060f16060f110f, 0x110d0f0606110610, 0x06170f111819130c, 
	0x0d070809090a140c, 0x111a1b0f06060f10, 0x0d0d1006110d0f10, 0x060d100f1c1d1e1f, 0x110708200909080c, 0x0f1b1b060f0f0e10, 0x0d0d0f0d0d0f110f, 0x11060f110121221f, 
	0x061408092009080c, 0x0f1b1b0f0f060e0f, 0x0606060d060c2324, 0x252627062221220c, 0x06070809090b080c, 0x111b280c29152a2b, 0x2c2d0606110c2e25, 0x2f2627112221220c, 
	0x0f0708090a0b140c, 0x1130301531151532, 0x332d0e1106152e25, 0x2f3427110121220c, 0x06140809090b140c, 0x1130350c310c2a36, 0x2c37060d060c2e2f, 0x3826390601213a3b, 
	0x0f1408090a08072a, 0x063c350c310c0c36, 0x3d37110d060c2e25, 0x243e390f1c223f2a, 0x0c1408090b08072a, 0x063c350c310c0c36, 0x2c37060d06152e24, 0x243e270f1c403f15, 
	0x06140b090a08070c, 0x06353015410c0c36, 0x2c420c43441f2324, 0x453e4606221e470c, 0x0e140b200a081415, 0x11281b15480c0c2b, 0x2c370c43490c2345, 0x4a4b270f1c1d3f0c, 
	0x061408090908070c, 0x061a1a0c4c0c0c2b, 0x2c4d15434e2a2324, 0x4a4b270f1c1d3f15, 0x4f505151524f4f4f, 0x4f534f4f54555655, 0x56554f5755514f58, 0x5552534f58504f51, 
	0x595a5b5c5d5e5f60, 0x5a5f5a6159625a5b, 0x6364636566636367, 0x66625c5c6268695c, 0x0500000200000204, 0x0501020204050101, 0x0505050405050105, 0x0501050504050505, 
	0x111111110f0f0f0d, 0x0f0e0c1e1d00060f, 0x0d0f0d06110f0f06, 0x0f6a080a090a1415, 0x11060f0f11100606, 0x1106151e1d1c0d06, 0x170f0c0611060606, 0x0f6a140920091415, 
	0x060f170f060f060f, 0x0606151e6b1c0606, 0x0f06110f06156c15, 0x0f6a1409090a142a, 0x0d0f110d06111111, 0x0d0f0c1e6b1c0606, 0x0f0f0d0e0d1f6c15, 0x0f07140a0a08072a, 
	0x17060611396d6e4a, 0x230c0c406b1c060f, 0x06060611061f280c, 0x0d07140b0a08070c, 0x06110d0f396f6e4a, 0x230c0c1c6b1c3b2b, 0x704d0671310c280c, 0x0614080a0b08070c, 
	0x0606060f396f7272, 0x732a0c3f1e3f1f32, 0x337406757615770c, 0x0f14080a0b08070c, 0x0606060f273e6e24, 0x230c2a1313181f3d, 0x33361175750c780c, 0x06140b090b146a0c, 
	0x060f0611273e6e72, 0x23152a137912153d, 0x333606767a0c7815, 0x0f1408090b14070c, 0x06061106393e724a, 0x7b0c0c7c7d120c3d, 0x334d0d7e7f1f802a, 0x0f140b200a08070c, 
	0x0681820c273e724a, 0x73151f3f19471f32, 0x2c3706297e15830c, 0x0d140b840908070c, 0x1185860c273e264a, 0x230c151c6b3f0c2b, 0x702d0f7e870c3515, 0x0c140b84090b6a0c, 
	0x0685820c273e4a4a, 0x730d151e6b88152b, 0x70740f7e890c352a, 0x06080a8a200a070c, 0x5851514f50558b8b, 0x4f558b8c4f8c558d, 0x4f5555508b4f8b55, 0x568e4f8c8b8f8b55, 
	
};

u64 escape_rm_dl_bookshelf_rgba16_pal_rgba16[] = {
	0x520d5a4f524f524d, 0x5a8f5a9151830201, 0x02810341030102c1, 0x4983494359c55985, 0x61c559835189620b, 0x0241498551855143, 0x51c96a4d3b173ad7, 0x5a0d6a4f624d4143, 
	0x03816a91624f80c1, 0xc241c281a9c16801, 0x3ad5939549c5a001, 0x8801c00188c1ca81, 0x32d3935598017801, 0xb1c13293a801c801, 0xd28160015a4d4183, 0x3ad39001a1815a0b, 
	0x620d9397d001c341, 0xbb41ba41700159cb, 0x9b97bb81b201a981, 0x9bd9b801c3818397, 0x83998bd98bd77b97, 0x83d77b5573137315, 0x83d99419ac9db4e1, 0xb521acddb51fb4df, 
	0xbd21a45b9c5bacdf, 0x94179459bd63c5a5, 0x9c59a49d01c16a8f, 0x3a959941c201a141, 0x80018b53ba0178c1, 0xb001828f8ad13a93, 0x32516a0d82d17881, 0x59c961cb93539b95, 
	0x320fc401bb013253, 0x03c1cc01c3018b13, 0x520b8b1104018355, 0x83956ad16b138b99, 
};

u64 escape_rm_dl_hakasitarelay_room_6Tex_004EA8_ci4_ci4[] = {
	0x0123433155115431, 0x1406662224424774, 0x4724244342601448, 0x7599959599a33703, 0x011452335333b331, 0x1400866122243777, 0x4774244442604414, 0x5aa9a9a7a9935410, 
	0x1114333533163241, 0x1466666234724774, 0x7472223426603544, 0x55a9999a9a9aa411, 0x1115331131c13531, 0x1b00866424227774, 0x4472027446633444, 0x5a99a9a999ab7741, 
	0x1114343111013341, 0x1100666242744774, 0x4440234742233547, 0x759a9a99a99ab411, 0x1115541111113541, 0x4560866424427777, 0x4220227772233553, 0x5a9999a95aab3711, 
	0x3113331511113321, 0x1500666074744774, 0x4440244740433b45, 0xa5a9a95a999a5411, 0x3115351311155341, 0x1b60666447447777, 0x746602774243337b, 0x559a9959a9aa5711, 
	0x4415b315b5335341, 0x1560d62277477977, 0x4664249442443345, 0xa79995599a9ba414, 0x3319941553533531, 0x1306260279477779, 0x4277444742433555, 0x559a999599aa5411, 
	0x3115b11511513330, 0x5500062477777977, 0x4644244444233545, 0x5aa9a5a46c5a3711, 0x3b49581311555431, 0x1b00622279777977, 0x4642424742033437, 0x35999575209a5441, 
	0x314b523301535541, 0x1106624377749777, 0x4447247424413573, 0x5a59a95999aaa713, 0x331b533513555330, 0x1b00662274777944, 0x2424724724433337, 0x379a995a599bb334, 
	0x31155315555b3301, 0x1516202447747774, 0x4444274742443375, 0x55999597a9aa5743, 0x3115331355b53230, 0x1b06664247777977, 0x4794444744433737, 0x37957955599aa333, 
	0x31135313b5b53341, 0x1700662447779777, 0x4777247744413737, 0x55a9aa5575a5a743, 0x31134513bb533432, 0x1540060777977977, 0x4772244774443373, 0x7599995959935334, 
	0x3114331535b31551, 0x2b40624479779997, 0x4922277742413175, 0x5aa9a99555957333, 0x3345533311553331, 0x1546602479797997, 0x4924447744443733, 0xaa9757a999953744, 
	0x111534535b355432, 0x1446220297979979, 0x7994449724413755, 0xabaa955975955433, 0x4315b45331cc3531, 0x1516664299779997, 0x4944447724203353, 0xaa59a74aa59a5743, 
	0x3145355151c63551, 0x4546062479977977, 0x4777477722403755, 0xa5999a75959a5334, 0x3115b43333335431, 0x1540622499779797, 0x7797474424214355, 0xba95599597aaa743, 
	0x3433345331313341, 0x1316660279747977, 0x7974286424711753, 0xa53331959a9a5533, 0x3115545133115231, 0x1566662477447794, 0x4772c869777603b3, 0xa35aa54957573534, 
	0x3113333101033331, 0x2516862474427994, 0x4734627974703555, 0xa79555795575a313, 0x11144455c0151441, 0x1568866277247444, 0x7744247774413555, 0x3595440645a75734, 
	0x3115333511b13311, 0x1466882477446c68, 0x3772447974713555, 0xa57594860794a343, 0x1113441b53333421, 0x146686247728d886, 0x4742447747411555, 0x7a9a74799993a731, 
	0x4115333555533211, 0x1768dc2474662262, 0x4424447744414353, 0x75a9a959559ab334, 0x1113543515553101, 0x1466662744477462, 0x7444277444263737, 0x559795959a753741, 
	0x1114533510bb5030, 0x2468866242477462, 0x4744477444204473, 0x3a55a55959a35713, 0x1115341301355361, 0x0566666224474262, 0x4742277744261447, 0x5795995597975341, 
	0x1115533315531c26, 0x1466866224444262, 0x4742447444004737, 0x5a599554a5533714, 0x311533333301cd8d, 0x2708866044474462, 0x4442477744603473, 0x3779597575945411, 
	0x1213533313110666, 0x3566d66224774466, 0x2744477744223347, 0x5aaa954459577711, 0x3113341513511211, 0x1468866224474462, 0x2442477442264737, 0x5599710445544410, 
	0x3113553313b11226, 0x1566d66444477460, 0x2442477740603474, 0xa59a468449977740, 0x111444331333b311, 0x17088c2444777462, 0x2442447746664437, 0x7799544545a34411, 
	0x112354551113b001, 0x136dd24444777464, 0x2442477442603773, 0x359a995759747711, 0x11143433111136d0, 0x1708624424477422, 0x4246244442663147, 0x5a99a95997aa4411, 
	0x1213433330101861, 0x5508822724447402, 0x4242644442661373, 0xa4a79a7a5a747441, 0x1113343131033121, 0x1b0d662224777422, 0x4226477422664743, 0x7599a9a9959a3441, 
	0x101741b135b33421, 0x3106860402477420, 0x1622774442c61473, 0x357a7a5599775443, 0x3124545335533351, 0x1408664222447422, 0x2242494742663347, 0x57a9a9447a5a5444, 
	0x1113433313133231, 0x1518862062474402, 0x4442494442664473, 0x757999541994a433, 0x0014543533335331, 0x140d666022447460, 0x2442774422201744, 0xa45aa95575a75414, 
	0x0114535515115321, 0x1b08666200444726, 0x4444774220061447, 0x7a4497a445947443, 0x1614453533055336, 0x1518862222747442, 0x4744774422064735, 0xb504a994459a3414, 
	0x6115543513153421, 0x1526860202447422, 0x2424774410203474, 0x575999a454547401, 0x6123453b11155531, 0x1b06862224477442, 0x2424777442004737, 0xaaa9aa995457a741, 
	0x0104233531353322, 0x1308822104744722, 0x0264774744423543, 0x5a9a99a755577411, 0x1112343b31353331, 0x1546620024774460, 0x4264477777711577, 0xbb99a99a54435501, 
	0x1112231b11353026, 0x1708d21224447724, 0x2224744777734334, 0xaaa99a9954557710, 0x0312435511153321, 0x1416662024747442, 0x4124744224201747, 0xbaa9a9a95457a310, 
	0x0126335115153412, 0x1108666024477447, 0x72227426c8dd1371, 0xba99999995537410, 0x00dd825311133231, 0x1418866224774444, 0x4660772468881473, 0x5aa9a9aa79575710, 
	0x06c8233113335136, 0x1428660244774744, 0x2672444266681744, 0xaa9a9a945553a410, 0x0002213111311240, 0x1016822244477744, 0x4742742226681443, 0x75a9994445a74410, 
	0x0012223311313120, 0x1408666224777474, 0x2422744466664444, 0x5a99a5554574a400, 0x0061221113111026, 0x1406620144477742, 0x2264444426661444, 0x4599744575573400, 
	0x0163231313551166, 0x1418666222444444, 0x0624474426661444, 0x7a7a744545535468, 0x011322313131c841, 0x1726866022447734, 0x1224444402664444, 0x37a9a45549947400, 
	
};

u64 escape_rm_dl_hakasitarelay_room_6Tex_004EA8_ci4_pal_rgba16[] = {
	0x6acf8b937b0db417, 0x9b93c4975a4dd455, 0x318bed5bdd5bd55b, 0x424d294900000000
};

Vtx escape_rm_dl_Cube_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-809, 160, -399}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-809, 262, -399}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-809, 262, -478}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-809, 160, -478}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-730, 160, -399}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-730, 262, -399}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-730, 262, -478}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-730, 160, -478}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx escape_rm_dl_Cube_mesh_layer_Opaque_vtx_0[24] = {
	{{ {-809, 160, -399}, 0, {368, 1008}, {129, 0, 0, 255} }},
	{{ {-809, 262, -399}, 0, {698, 1008}, {129, 0, 0, 255} }},
	{{ {-809, 262, -478}, 0, {698, 752}, {129, 0, 0, 255} }},
	{{ {-809, 160, -478}, 0, {368, 752}, {129, 0, 0, 255} }},
	{{ {-809, 160, -478}, 0, {368, 752}, {0, 0, 129, 255} }},
	{{ {-809, 262, -478}, 0, {698, 752}, {0, 0, 129, 255} }},
	{{ {-730, 262, -478}, 0, {698, 496}, {0, 0, 129, 255} }},
	{{ {-730, 160, -478}, 0, {368, 496}, {0, 0, 129, 255} }},
	{{ {-730, 160, -478}, 0, {368, 496}, {127, 0, 0, 255} }},
	{{ {-730, 262, -478}, 0, {698, 496}, {127, 0, 0, 255} }},
	{{ {-730, 262, -399}, 0, {698, 240}, {127, 0, 0, 255} }},
	{{ {-730, 160, -399}, 0, {368, 240}, {127, 0, 0, 255} }},
	{{ {-730, 160, -399}, 0, {368, 240}, {0, 0, 127, 255} }},
	{{ {-730, 262, -399}, 0, {698, 240}, {0, 0, 127, 255} }},
	{{ {-809, 262, -399}, 0, {698, -16}, {0, 0, 127, 255} }},
	{{ {-809, 160, -399}, 0, {368, -16}, {0, 0, 127, 255} }},
	{{ {-809, 160, -478}, 0, {112, 496}, {0, 129, 0, 255} }},
	{{ {-730, 160, -478}, 0, {368, 496}, {0, 129, 0, 255} }},
	{{ {-730, 160, -399}, 0, {368, 240}, {0, 129, 0, 255} }},
	{{ {-809, 160, -399}, 0, {112, 240}, {0, 129, 0, 255} }},
	{{ {-730, 262, -478}, 0, {624, 496}, {0, 127, 0, 255} }},
	{{ {-809, 262, -478}, 0, {880, 496}, {0, 127, 0, 255} }},
	{{ {-809, 262, -399}, 0, {880, 240}, {0, 127, 0, 255} }},
	{{ {-730, 262, -399}, 0, {624, 240}, {0, 127, 0, 255} }},
};

Gfx escape_rm_dl_Cube_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(escape_rm_dl_Cube_mesh_layer_Opaque_vtx_0 + 0, 24, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSPEndDisplayList(),
};

Vtx escape_rm_dl_Cube_001_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-809, 160, -489}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-809, 300, -489}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-809, 300, -568}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-809, 160, -568}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-730, 160, -489}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-730, 300, -489}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-730, 300, -568}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-730, 160, -568}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx escape_rm_dl_Cube_001_mesh_layer_Opaque_vtx_0[24] = {
	{{ {-809, 160, -489}, 0, {368, 1008}, {129, 0, 0, 255} }},
	{{ {-809, 300, -489}, 0, {820, 1008}, {129, 0, 0, 255} }},
	{{ {-809, 300, -568}, 0, {820, 752}, {129, 0, 0, 255} }},
	{{ {-809, 160, -568}, 0, {368, 752}, {129, 0, 0, 255} }},
	{{ {-809, 160, -568}, 0, {368, 752}, {0, 0, 129, 255} }},
	{{ {-809, 300, -568}, 0, {820, 752}, {0, 0, 129, 255} }},
	{{ {-730, 300, -568}, 0, {820, 496}, {0, 0, 129, 255} }},
	{{ {-730, 160, -568}, 0, {368, 496}, {0, 0, 129, 255} }},
	{{ {-730, 160, -568}, 0, {368, 496}, {127, 0, 0, 255} }},
	{{ {-730, 300, -568}, 0, {820, 496}, {127, 0, 0, 255} }},
	{{ {-730, 300, -489}, 0, {820, 240}, {127, 0, 0, 255} }},
	{{ {-730, 160, -489}, 0, {368, 240}, {127, 0, 0, 255} }},
	{{ {-730, 160, -489}, 0, {368, 240}, {0, 0, 127, 255} }},
	{{ {-730, 300, -489}, 0, {820, 240}, {0, 0, 127, 255} }},
	{{ {-809, 300, -489}, 0, {820, -16}, {0, 0, 127, 255} }},
	{{ {-809, 160, -489}, 0, {368, -16}, {0, 0, 127, 255} }},
	{{ {-809, 160, -568}, 0, {112, 496}, {0, 129, 0, 255} }},
	{{ {-730, 160, -568}, 0, {368, 496}, {0, 129, 0, 255} }},
	{{ {-730, 160, -489}, 0, {368, 240}, {0, 129, 0, 255} }},
	{{ {-809, 160, -489}, 0, {112, 240}, {0, 129, 0, 255} }},
	{{ {-730, 300, -568}, 0, {624, 496}, {0, 127, 0, 255} }},
	{{ {-809, 300, -568}, 0, {880, 496}, {0, 127, 0, 255} }},
	{{ {-809, 300, -489}, 0, {880, 240}, {0, 127, 0, 255} }},
	{{ {-730, 300, -489}, 0, {624, 240}, {0, 127, 0, 255} }},
};

Gfx escape_rm_dl_Cube_001_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(escape_rm_dl_Cube_001_mesh_layer_Opaque_vtx_0 + 0, 24, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSPEndDisplayList(),
};

Vtx escape_rm_dl_Cube_002_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-172, 139, -1658}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-172, 730, -1658}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-172, 730, -2009}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-172, 139, -2009}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {750, 139, -1658}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {750, 730, -1658}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {750, 730, -2009}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {750, 139, -2009}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx escape_rm_dl_Cube_002_mesh_layer_Opaque_vtx_0[20] = {
	{{ {-172, 139, -1658}, 0, {38, 1269}, {255, 255, 255, 255} }},
	{{ {-172, 730, -1658}, 0, {38, -277}, {255, 255, 255, 255} }},
	{{ {-172, 730, -2009}, 0, {954, -277}, {255, 255, 255, 255} }},
	{{ {-172, 139, -2009}, 0, {954, 1269}, {255, 255, 255, 255} }},
	{{ {-172, 139, -2009}, 0, {-708, 1269}, {255, 255, 255, 255} }},
	{{ {-172, 730, -2009}, 0, {-708, -277}, {255, 255, 255, 255} }},
	{{ {750, 730, -2009}, 0, {1700, -277}, {255, 255, 255, 255} }},
	{{ {750, 139, -2009}, 0, {1700, 1269}, {255, 255, 255, 255} }},
	{{ {750, 139, -2009}, 0, {954, 1269}, {255, 255, 255, 255} }},
	{{ {750, 730, -2009}, 0, {954, -277}, {255, 255, 255, 255} }},
	{{ {750, 730, -1658}, 0, {38, -277}, {255, 255, 255, 255} }},
	{{ {750, 139, -1658}, 0, {38, 1269}, {255, 255, 255, 255} }},
	{{ {-172, 139, -2009}, 0, {-708, 38}, {255, 255, 255, 255} }},
	{{ {750, 139, -2009}, 0, {1700, 38}, {255, 255, 255, 255} }},
	{{ {750, 139, -1658}, 0, {1700, 954}, {255, 255, 255, 255} }},
	{{ {-172, 139, -1658}, 0, {-708, 954}, {255, 255, 255, 255} }},
	{{ {750, 730, -2009}, 0, {1700, 38}, {255, 255, 255, 255} }},
	{{ {-172, 730, -2009}, 0, {-708, 38}, {255, 255, 255, 255} }},
	{{ {-172, 730, -1658}, 0, {-708, 954}, {255, 255, 255, 255} }},
	{{ {750, 730, -1658}, 0, {1700, 954}, {255, 255, 255, 255} }},
};

Gfx escape_rm_dl_Cube_002_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(escape_rm_dl_Cube_002_mesh_layer_Opaque_vtx_0 + 0, 20, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSPEndDisplayList(),
};

Vtx escape_rm_dl_Cube_002_mesh_layer_Opaque_vtx_1[4] = {
	{{ {750, 139, -1658}, 0, {3023, 2188}, {255, 255, 255, 255} }},
	{{ {750, 730, -1658}, 0, {3023, -1056}, {255, 255, 255, 255} }},
	{{ {-172, 730, -1658}, 0, {-2031, -1056}, {255, 255, 255, 255} }},
	{{ {-172, 139, -1658}, 0, {-2031, 2188}, {255, 255, 255, 255} }},
};

Gfx escape_rm_dl_Cube_002_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(escape_rm_dl_Cube_002_mesh_layer_Opaque_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx escape_rm_dl_Cube_003_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-821, 158, -1684}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-821, 579, -1684}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-821, 579, -1836}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-821, 158, -1836}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-164, 158, -1684}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-164, 579, -1684}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-164, 579, -1836}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-164, 158, -1836}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx escape_rm_dl_Cube_003_mesh_layer_Opaque_vtx_0[20] = {
	{{ {-821, 158, -1684}, 0, {38, 1269}, {255, 255, 255, 255} }},
	{{ {-821, 579, -1684}, 0, {38, -277}, {255, 255, 255, 255} }},
	{{ {-821, 579, -1836}, 0, {598, -277}, {255, 255, 255, 255} }},
	{{ {-821, 158, -1836}, 0, {598, 1269}, {255, 255, 255, 255} }},
	{{ {-821, 158, -1836}, 0, {-708, 1269}, {255, 255, 255, 255} }},
	{{ {-821, 579, -1836}, 0, {-708, -277}, {255, 255, 255, 255} }},
	{{ {-164, 579, -1836}, 0, {1700, -277}, {255, 255, 255, 255} }},
	{{ {-164, 158, -1836}, 0, {1700, 1269}, {255, 255, 255, 255} }},
	{{ {-164, 158, -1836}, 0, {598, 1269}, {255, 255, 255, 255} }},
	{{ {-164, 579, -1836}, 0, {598, -277}, {255, 255, 255, 255} }},
	{{ {-164, 579, -1684}, 0, {38, -277}, {255, 255, 255, 255} }},
	{{ {-164, 158, -1684}, 0, {38, 1269}, {255, 255, 255, 255} }},
	{{ {-821, 158, -1836}, 0, {-708, 394}, {255, 255, 255, 255} }},
	{{ {-164, 158, -1836}, 0, {1700, 394}, {255, 255, 255, 255} }},
	{{ {-164, 158, -1684}, 0, {1700, 954}, {255, 255, 255, 255} }},
	{{ {-821, 158, -1684}, 0, {-708, 954}, {255, 255, 255, 255} }},
	{{ {-164, 579, -1836}, 0, {1700, 394}, {255, 255, 255, 255} }},
	{{ {-821, 579, -1836}, 0, {-708, 394}, {255, 255, 255, 255} }},
	{{ {-821, 579, -1684}, 0, {-708, 954}, {255, 255, 255, 255} }},
	{{ {-164, 579, -1684}, 0, {1700, 954}, {255, 255, 255, 255} }},
};

Gfx escape_rm_dl_Cube_003_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(escape_rm_dl_Cube_003_mesh_layer_Opaque_vtx_0 + 0, 20, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSPEndDisplayList(),
};

Vtx escape_rm_dl_Cube_003_mesh_layer_Opaque_vtx_1[4] = {
	{{ {-164, 158, -1684}, 0, {2164, 1579}, {255, 255, 255, 255} }},
	{{ {-164, 579, -1684}, 0, {2164, -562}, {255, 255, 255, 255} }},
	{{ {-821, 579, -1684}, 0, {-1172, -562}, {255, 255, 255, 255} }},
	{{ {-821, 158, -1684}, 0, {-1172, 1579}, {255, 255, 255, 255} }},
};

Gfx escape_rm_dl_Cube_003_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(escape_rm_dl_Cube_003_mesh_layer_Opaque_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx escape_rm_dl_floor_004_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-807, 160, -382}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-807, 1427, -382}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-807, 1427, -1999}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-807, 160, -1999}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {975, 160, -382}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {975, 1427, -382}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {975, 1427, -1999}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {975, 160, -1999}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx escape_rm_dl_floor_004_mesh_layer_Opaque_vtx_0[10] = {
	{{ {-807, 160, -1999}, 0, {-16358, -13148}, {255, 255, 255, 255} }},
	{{ {-807, 160, -402}, 0, {-16358, 3163}, {223, 223, 223, 255} }},
	{{ {-55, 160, -402}, 0, {-1001, 3163}, {195, 195, 195, 255} }},
	{{ {65, 160, -402}, 0, {1451, 3163}, {250, 250, 250, 255} }},
	{{ {738, 160, -1999}, 0, {15200, -13148}, {255, 255, 255, 255} }},
	{{ {738, 160, -402}, 0, {15200, 3163}, {255, 255, 255, 255} }},
	{{ {-807, 1427, -402}, 0, {-12604, 2522}, {255, 255, 255, 255} }},
	{{ {-807, 1427, -1999}, 0, {-12604, -10314}, {255, 255, 255, 255} }},
	{{ {738, 1427, -1999}, 0, {12232, -10314}, {255, 255, 255, 255} }},
	{{ {738, 1427, -402}, 0, {12232, 2522}, {255, 255, 255, 255} }},
};

Gfx escape_rm_dl_floor_004_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(escape_rm_dl_floor_004_mesh_layer_Opaque_vtx_0 + 0, 10, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 4, 0, 0, 3, 5, 4, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
	gsSPEndDisplayList(),
};

Vtx escape_rm_dl_floor_004_mesh_layer_Opaque_vtx_1[64] = {
	{{ {738, 160, -1999}, 0, {23923, 3685}, {255, 255, 255, 255} }},
	{{ {738, 160, -402}, 0, {-1750, 3685}, {255, 255, 255, 255} }},
	{{ {738, 1427, -402}, 0, {-1750, -16674}, {255, 255, 255, 255} }},
	{{ {738, 1090, -1611}, 0, {17685, -11270}, {255, 255, 255, 255} }},
	{{ {738, 1253, -1611}, 0, {17685, -13879}, {255, 255, 255, 255} }},
	{{ {738, 1090, -1838}, 0, {21349, -11270}, {255, 255, 255, 255} }},
	{{ {738, 1427, -1999}, 0, {23923, -16674}, {255, 255, 255, 255} }},
	{{ {738, 1253, -1838}, 0, {21349, -13879}, {255, 255, 255, 255} }},
	{{ {-807, 160, -1999}, 0, {23923, 3685}, {255, 255, 255, 255} }},
	{{ {-807, 1427, -1999}, 0, {23923, -16674}, {255, 255, 255, 255} }},
	{{ {-807, 1427, -402}, 0, {-1750, -16674}, {255, 255, 255, 255} }},
	{{ {-807, 160, -402}, 0, {-1750, 3685}, {255, 255, 255, 255} }},
	{{ {738, 160, -1999}, 0, {12232, 3685}, {255, 255, 255, 255} }},
	{{ {738, 1427, -1999}, 0, {12232, -16674}, {255, 255, 255, 255} }},
	{{ {-807, 1427, -1999}, 0, {-12604, -16674}, {255, 255, 255, 255} }},
	{{ {-807, 160, -1999}, 0, {-12604, 3685}, {255, 255, 255, 255} }},
	{{ {-55, 160, -402}, 0, {-518, 3685}, {195, 195, 195, 255} }},
	{{ {-807, 160, -402}, 0, {-12604, 3685}, {234, 234, 234, 255} }},
	{{ {-807, 1427, -402}, 0, {-12604, -16674}, {255, 255, 255, 255} }},
	{{ {-55, 260, -402}, 0, {-518, 2078}, {255, 255, 255, 255} }},
	{{ {65, 260, -402}, 0, {1412, 2078}, {254, 254, 254, 255} }},
	{{ {738, 160, -402}, 0, {12232, 3685}, {252, 252, 252, 255} }},
	{{ {738, 1427, -402}, 0, {12232, -16674}, {255, 255, 255, 255} }},
	{{ {65, 160, -402}, 0, {1412, 3685}, {250, 250, 250, 255} }},
	{{ {-55, 160, -402}, 0, {-1750, 3685}, {195, 195, 195, 255} }},
	{{ {-55, 260, -402}, 0, {-1750, 2078}, {255, 255, 255, 255} }},
	{{ {-55, 260, -382}, 0, {-2071, 2078}, {87, 87, 87, 255} }},
	{{ {-55, 160, -382}, 0, {-2071, 3685}, {67, 67, 67, 255} }},
	{{ {65, 260, -402}, 0, {-1750, 2078}, {254, 254, 254, 255} }},
	{{ {65, 160, -402}, 0, {-1750, 3685}, {250, 250, 250, 255} }},
	{{ {65, 160, -382}, 0, {-2071, 3685}, {77, 77, 77, 255} }},
	{{ {65, 260, -382}, 0, {-2071, 2078}, {137, 137, 137, 255} }},
	{{ {-55, 260, -402}, 0, {-518, 5060}, {255, 255, 255, 255} }},
	{{ {65, 260, -402}, 0, {1412, 5060}, {254, 254, 254, 255} }},
	{{ {65, 260, -382}, 0, {1412, 5382}, {137, 137, 137, 255} }},
	{{ {-55, 260, -382}, 0, {-518, 5382}, {87, 87, 87, 255} }},
	{{ {65, 160, -402}, 0, {1412, 5060}, {250, 250, 250, 255} }},
	{{ {-55, 160, -402}, 0, {-518, 5060}, {195, 195, 195, 255} }},
	{{ {-55, 160, -382}, 0, {-518, 5382}, {67, 67, 67, 255} }},
	{{ {65, 160, -382}, 0, {1412, 5382}, {77, 77, 77, 255} }},
	{{ {975, 1253, -1838}, 0, {21349, -13879}, {255, 255, 255, 255} }},
	{{ {975, 1090, -1838}, 0, {21349, -11270}, {255, 255, 255, 255} }},
	{{ {975, 1090, -1611}, 0, {17685, -11270}, {255, 255, 255, 255} }},
	{{ {975, 1253, -1611}, 0, {17685, -13879}, {255, 255, 255, 255} }},
	{{ {738, 1427, -1999}, 0, {23923, -16674}, {255, 255, 255, 255} }},
	{{ {738, 1253, -1838}, 0, {21349, -13879}, {255, 255, 255, 255} }},
	{{ {738, 1253, -1611}, 0, {17685, -13879}, {255, 255, 255, 255} }},
	{{ {738, 1427, -402}, 0, {-1750, -16674}, {255, 255, 255, 255} }},
	{{ {738, 1253, -1611}, 0, {-16, 1991}, {255, 255, 255, 255} }},
	{{ {738, 1253, -1838}, 0, {-16, 25}, {255, 255, 255, 255} }},
	{{ {975, 1253, -1838}, 0, {2032, 25}, {255, 255, 255, 255} }},
	{{ {975, 1253, -1611}, 0, {2032, 1991}, {255, 255, 255, 255} }},
	{{ {738, 1090, -1838}, 0, {-16, 25}, {255, 255, 255, 255} }},
	{{ {738, 1090, -1611}, 0, {-16, 1991}, {255, 255, 255, 255} }},
	{{ {975, 1090, -1611}, 0, {2032, 1991}, {255, 255, 255, 255} }},
	{{ {975, 1090, -1838}, 0, {2032, 25}, {255, 255, 255, 255} }},
	{{ {738, 1253, -1838}, 0, {-16, -755}, {255, 255, 255, 255} }},
	{{ {738, 1090, -1838}, 0, {-16, 645}, {255, 255, 255, 255} }},
	{{ {975, 1090, -1838}, 0, {2032, 645}, {255, 255, 255, 255} }},
	{{ {975, 1253, -1838}, 0, {2032, -755}, {255, 255, 255, 255} }},
	{{ {738, 1090, -1611}, 0, {-16, 645}, {255, 255, 255, 255} }},
	{{ {738, 1253, -1611}, 0, {-16, -755}, {255, 255, 255, 255} }},
	{{ {975, 1253, -1611}, 0, {2032, -755}, {255, 255, 255, 255} }},
	{{ {975, 1090, -1611}, 0, {2032, 645}, {255, 255, 255, 255} }},
};

Gfx escape_rm_dl_floor_004_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(escape_rm_dl_floor_004_mesh_layer_Opaque_vtx_1 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(2, 4, 3, 0, 3, 5, 0, 0),
	gsSP2Triangles(5, 6, 0, 0, 5, 7, 6, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
	gsSP2Triangles(18, 20, 19, 0, 18, 21, 20, 0),
	gsSP2Triangles(18, 22, 21, 0, 21, 23, 20, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPVertex(escape_rm_dl_floor_004_mesh_layer_Opaque_vtx_1 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPEndDisplayList(),
};

Gfx mat_escape_rm_dl_debug_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 104, 104, 104, 255),
	gsSPEndDisplayList(),
};

Gfx mat_escape_rm_dl_wood2_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, escape_rm_dl_wood_rgba16_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 29),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, escape_rm_dl_wood_rgba16_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_escape_rm_dl_bookshelf_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, escape_rm_dl_bookshelf_rgba16_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 143),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, escape_rm_dl_bookshelf_rgba16_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_escape_rm_dl_wall_wood_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, escape_rm_dl_hakasitarelay_room_6Tex_004EA8_ci4_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 13),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, escape_rm_dl_hakasitarelay_room_6Tex_004EA8_ci4_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPEndDisplayList(),
};

Gfx escape_rm_dl_Cube_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(escape_rm_dl_Cube_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_escape_rm_dl_debug_layerOpaque),
	gsSPDisplayList(escape_rm_dl_Cube_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

Gfx escape_rm_dl_Cube_001_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(escape_rm_dl_Cube_001_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_escape_rm_dl_debug_layerOpaque),
	gsSPDisplayList(escape_rm_dl_Cube_001_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

Gfx escape_rm_dl_Cube_002_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(escape_rm_dl_Cube_002_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_escape_rm_dl_wood2_layerOpaque),
	gsSPDisplayList(escape_rm_dl_Cube_002_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_escape_rm_dl_bookshelf_layerOpaque),
	gsSPDisplayList(escape_rm_dl_Cube_002_mesh_layer_Opaque_tri_1),
	gsSPEndDisplayList(),
};

Gfx escape_rm_dl_Cube_003_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(escape_rm_dl_Cube_003_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_escape_rm_dl_wood2_layerOpaque),
	gsSPDisplayList(escape_rm_dl_Cube_003_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_escape_rm_dl_bookshelf_layerOpaque),
	gsSPDisplayList(escape_rm_dl_Cube_003_mesh_layer_Opaque_tri_1),
	gsSPEndDisplayList(),
};

Gfx escape_rm_dl_floor_004_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(escape_rm_dl_floor_004_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_escape_rm_dl_wood_layerOpaque),
	gsSPDisplayList(escape_rm_dl_floor_004_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_escape_rm_dl_wall_wood_layerOpaque),
	gsSPDisplayList(escape_rm_dl_floor_004_mesh_layer_Opaque_tri_1),
	gsSPEndDisplayList(),
};

