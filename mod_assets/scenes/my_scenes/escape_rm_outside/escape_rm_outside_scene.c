#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "escape_rm_outside_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"

/**
 * Header Child Day (Default)
*/
SceneCmd escape_rm_outside_scene_header00[] = {
    SCENE_CMD_SOUND_SETTINGS(0x00, 0x05, 0x67),
    SCENE_CMD_ROOM_LIST(1, escape_rm_outside_scene_roomList),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00),
    SCENE_CMD_COL_HEADER(&escape_rm_outside_collisionHeader),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x01, 0x00, LIGHT_MODE_TIME),
    SCENE_CMD_ENTRANCE_LIST(escape_rm_outside_scene_header00_entranceList),
    SCENE_CMD_SPAWN_LIST(1, escape_rm_outside_scene_header00_playerEntryList),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, escape_rm_outside_scene_header00_lightSettings),
    SCENE_CMD_END(),
};

RomFile escape_rm_outside_scene_roomList[] = {
    { (u32)_escape_rm_outside_room_0SegmentRomStart, (u32)_escape_rm_outside_room_0SegmentRomEnd },
};

ActorEntry escape_rm_outside_scene_header00_playerEntryList[] = {
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { 2387, 152, -200 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(270.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0FFF
    },
};

Spawn escape_rm_outside_scene_header00_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

EnvLightSettings escape_rm_outside_scene_header00_lightSettings[4] = {
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

SurfaceType escape_rm_outside_polygonTypes[] = {
	{ 0x00000000, 0x00000000 },
	{ 0x00000000, 0x00000008 },
};

CollisionPoly escape_rm_outside_polygons[] = {
	{ 0x0000, 0x0001, 0x0002, 0x0000, COLPOLY_SNORMAL(-0.8786786198616028), COLPOLY_SNORMAL(-0.32150039076805115), COLPOLY_SNORMAL(0.35293248295783997), 0xff7d },
	{ 0x0000, 0x0000, 0x0002, 0x0003, COLPOLY_SNORMAL(-0.8786782622337341), COLPOLY_SNORMAL(-0.32150062918663025), COLPOLY_SNORMAL(0.35293328762054443), 0xff7d },
	{ 0x0000, 0x0004, 0x0005, 0x0006, COLPOLY_SNORMAL(-0.3865410387516022), COLPOLY_SNORMAL(-0.2720175087451935), COLPOLY_SNORMAL(-0.8812448382377625), 0xfdb6 },
	{ 0x0000, 0x0004, 0x0006, 0x0007, COLPOLY_SNORMAL(-0.38654085993766785), COLPOLY_SNORMAL(-0.2720174491405487), COLPOLY_SNORMAL(-0.8812450170516968), 0xfdb6 },
	{ 0x0000, 0x0008, 0x0004, 0x0007, COLPOLY_SNORMAL(-0.0739363506436348), COLPOLY_SNORMAL(-0.2570335268974304), COLPOLY_SNORMAL(-0.9635699987411499), 0xfcfb },
	{ 0x0000, 0x0008, 0x0007, 0x0009, COLPOLY_SNORMAL(-0.0645357221364975), COLPOLY_SNORMAL(-0.2468450665473938), COLPOLY_SNORMAL(-0.9669036269187927), 0xfcf8 },
	{ 0x0000, 0x000a, 0x000b, 0x0001, COLPOLY_SNORMAL(-0.38654109835624695), COLPOLY_SNORMAL(-0.2720174491405487), COLPOLY_SNORMAL(0.8812448978424072), 0xff1b },
	{ 0x0000, 0x0001, 0x000b, 0x0002, COLPOLY_SNORMAL(-0.3865410089492798), COLPOLY_SNORMAL(-0.2720174789428711), COLPOLY_SNORMAL(0.8812448978424072), 0xff1b },
	{ 0x0000, 0x0005, 0x0000, 0x0003, COLPOLY_SNORMAL(-0.8786785006523132), COLPOLY_SNORMAL(-0.3215007781982422), COLPOLY_SNORMAL(-0.35293257236480713), 0xfeee },
	{ 0x0000, 0x0005, 0x0003, 0x0006, COLPOLY_SNORMAL(-0.8786782622337341), COLPOLY_SNORMAL(-0.3215004503726959), COLPOLY_SNORMAL(-0.35293343663215637), 0xfeee },
	{ 0x0000, 0x000c, 0x0008, 0x0009, COLPOLY_SNORMAL(0.5783920884132385), COLPOLY_SNORMAL(-0.8157588243484497), COLPOLY_SNORMAL(4.3667391480539663e-08), 0xf7e1 },
	{ 0x0000, 0x000c, 0x0009, 0x000d, COLPOLY_SNORMAL(0.5783920884132385), COLPOLY_SNORMAL(-0.8157589435577393), COLPOLY_SNORMAL(4.3667391480539663e-08), 0xf7e1 },
	{ 0x0000, 0x000c, 0x000d, 0x000a, COLPOLY_SNORMAL(-0.07266872376203537), COLPOLY_SNORMAL(-0.2361089140176773), COLPOLY_SNORMAL(0.9690055847167969), 0xfe9b },
	{ 0x0000, 0x000a, 0x000d, 0x000b, COLPOLY_SNORMAL(-0.06512458622455597), COLPOLY_SNORMAL(-0.25623172521591187), COLPOLY_SNORMAL(0.9644190073013306), 0xfe7d },
	{ 0x0000, 0x0009, 0x0007, 0x000e, COLPOLY_SNORMAL(-0.0471993125975132), COLPOLY_SNORMAL(0.003554269438609481), COLPOLY_SNORMAL(-0.9988791346549988), 0xfd2a },
	{ 0x0000, 0x0009, 0x000e, 0x000f, COLPOLY_SNORMAL(-0.0471993125975132), COLPOLY_SNORMAL(0.0035542685072869062), COLPOLY_SNORMAL(-0.9988791346549988), 0xfd2a },
	{ 0x0000, 0x000d, 0x0010, 0x000b, COLPOLY_SNORMAL(-0.04719940200448036), COLPOLY_SNORMAL(0.0035542647819966078), COLPOLY_SNORMAL(0.9988791346549988), 0xfebe },
	{ 0x0000, 0x000b, 0x0010, 0x0011, COLPOLY_SNORMAL(-0.04719940200448036), COLPOLY_SNORMAL(0.0035542685072869062), COLPOLY_SNORMAL(0.9988791346549988), 0xfebe },
	{ 0x0000, 0x0002, 0x0012, 0x0003, COLPOLY_SNORMAL(-0.9212710857391357), COLPOLY_SNORMAL(0.06937473267316818), COLPOLY_SNORMAL(0.3826836943626404), 0xffed },
	{ 0x0000, 0x0003, 0x0012, 0x0013, COLPOLY_SNORMAL(-0.9212710857391357), COLPOLY_SNORMAL(0.06937473267316818), COLPOLY_SNORMAL(0.3826836347579956), 0xffed },
	{ 0x0000, 0x0007, 0x0006, 0x0014, COLPOLY_SNORMAL(-0.3816029727458954), COLPOLY_SNORMAL(0.028735965490341187), COLPOLY_SNORMAL(-0.9238796234130859), 0xfdf6 },
	{ 0x0000, 0x0007, 0x0014, 0x000e, COLPOLY_SNORMAL(-0.3816029727458954), COLPOLY_SNORMAL(0.028735987842082977), COLPOLY_SNORMAL(-0.9238796234130859), 0xfdf6 },
	{ 0x0000, 0x000b, 0x0011, 0x0002, COLPOLY_SNORMAL(-0.3816031217575073), COLPOLY_SNORMAL(0.028735965490341187), COLPOLY_SNORMAL(0.9238795042037964), 0xff6c },
	{ 0x0000, 0x0002, 0x0011, 0x0012, COLPOLY_SNORMAL(-0.3816031217575073), COLPOLY_SNORMAL(0.02873595617711544), COLPOLY_SNORMAL(0.9238795042037964), 0xff6c },
	{ 0x0000, 0x0006, 0x0003, 0x0013, COLPOLY_SNORMAL(-0.9212710857391357), COLPOLY_SNORMAL(0.06937473267316818), COLPOLY_SNORMAL(-0.38268375396728516), 0xff52 },
	{ 0x0000, 0x0006, 0x0013, 0x0014, COLPOLY_SNORMAL(-0.9212710857391357), COLPOLY_SNORMAL(0.06937473267316818), COLPOLY_SNORMAL(-0.38268375396728516), 0xff52 },
	{ 0x0000, 0x0011, 0x0015, 0x0012, COLPOLY_SNORMAL(-0.29196056723594666), COLPOLY_SNORMAL(0.5266904234886169), COLPOLY_SNORMAL(0.7983459234237671), 0xff1f },
	{ 0x0000, 0x0012, 0x0015, 0x0016, COLPOLY_SNORMAL(-0.29196053743362427), COLPOLY_SNORMAL(0.5266902446746826), COLPOLY_SNORMAL(0.7983460426330566), 0xff1f },
	{ 0x0000, 0x0014, 0x0013, 0x0017, COLPOLY_SNORMAL(-0.6819978952407837), COLPOLY_SNORMAL(0.6659043431282043), COLPOLY_SNORMAL(-0.30240756273269653), 0xff00 },
	{ 0x0000, 0x0014, 0x0017, 0x0018, COLPOLY_SNORMAL(-0.6819983124732971), COLPOLY_SNORMAL(0.6659039258956909), COLPOLY_SNORMAL(-0.30240747332572937), 0xff00 },
	{ 0x0000, 0x000f, 0x000e, 0x0019, COLPOLY_SNORMAL(-0.008706954307854176), COLPOLY_SNORMAL(0.44840168952941895), COLPOLY_SNORMAL(-0.8937897682189941), 0xfd21 },
	{ 0x0000, 0x000f, 0x0019, 0x001a, COLPOLY_SNORMAL(0.001527518266811967), COLPOLY_SNORMAL(0.5069169402122498), COLPOLY_SNORMAL(-0.8619934916496277), 0xfd20 },
	{ 0x0000, 0x0010, 0x001b, 0x0011, COLPOLY_SNORMAL(-0.002761221257969737), COLPOLY_SNORMAL(0.5071911811828613), COLPOLY_SNORMAL(0.8618291616439819), 0xfe89 },
	{ 0x0000, 0x001b, 0x0015, 0x0011, COLPOLY_SNORMAL(-0.004379443824291229), COLPOLY_SNORMAL(0.44687601923942566), COLPOLY_SNORMAL(0.8945851922035217), 0xfe88 },
	{ 0x0000, 0x0012, 0x0016, 0x0013, COLPOLY_SNORMAL(-0.6819983124732971), COLPOLY_SNORMAL(0.6659039258956909), COLPOLY_SNORMAL(0.30240756273269653), 0xff7b },
	{ 0x0000, 0x0013, 0x0016, 0x0017, COLPOLY_SNORMAL(-0.6819980144500732), COLPOLY_SNORMAL(0.6659042835235596), COLPOLY_SNORMAL(0.3024072051048279), 0xff7b },
	{ 0x0000, 0x000e, 0x0014, 0x0018, COLPOLY_SNORMAL(-0.2919605076313019), COLPOLY_SNORMAL(0.5266903042793274), COLPOLY_SNORMAL(-0.7983460426330566), 0xfddc },
	{ 0x0000, 0x000e, 0x0018, 0x0019, COLPOLY_SNORMAL(-0.2919604480266571), COLPOLY_SNORMAL(0.5266903638839722), COLPOLY_SNORMAL(-0.7983460426330566), 0xfddc },
	{ 0x0000, 0x001c, 0x001d, 0x001e, COLPOLY_SNORMAL(0.0750906690955162), COLPOLY_SNORMAL(0.9971767067909241), COLPOLY_SNORMAL(6.686169484737547e-08), 0xfeb5 },
	{ 0x0000, 0x0020, 0x001e, 0x001f, COLPOLY_SNORMAL(0.0750906690955162), COLPOLY_SNORMAL(0.9971766471862793), COLPOLY_SNORMAL(-5.552333703917611e-08), 0xfeb5 },
	{ 0x0000, 0x0021, 0x0022, 0x0020, COLPOLY_SNORMAL(0.07509071379899979), COLPOLY_SNORMAL(0.9971767067909241), COLPOLY_SNORMAL(5.669191338597557e-09), 0xfeb5 },
	{ 0x0000, 0x0023, 0x0024, 0x001c, COLPOLY_SNORMAL(0.07509070634841919), COLPOLY_SNORMAL(0.9971767067909241), COLPOLY_SNORMAL(5.669190450419137e-09), 0xfeb5 },
	{ 0x0000, 0x0022, 0x0023, 0x0020, COLPOLY_SNORMAL(0.07509070634841919), COLPOLY_SNORMAL(0.9971766471862793), COLPOLY_SNORMAL(5.669190894508347e-09), 0xfeb5 },
	{ 0x0000, 0x001c, 0x001e, 0x0020, COLPOLY_SNORMAL(0.07509061694145203), COLPOLY_SNORMAL(0.9971766471862793), COLPOLY_SNORMAL(5.669184233170199e-09), 0xfeb5 },
	{ 0x0000, 0x0023, 0x001c, 0x0020, COLPOLY_SNORMAL(0.07509070634841919), COLPOLY_SNORMAL(0.9971767067909241), COLPOLY_SNORMAL(5.669190450419137e-09), 0xfeb5 },
	{ 0x0000, 0x0024, 0x0023, 0x0025, COLPOLY_SNORMAL(-0.9971767067909241), COLPOLY_SNORMAL(0.07509075105190277), COLPOLY_SNORMAL(-7.528474554874265e-08), 0x09dd },
	{ 0x0000, 0x0023, 0x0026, 0x0025, COLPOLY_SNORMAL(-0.9971766471862793), COLPOLY_SNORMAL(0.07509111613035202), COLPOLY_SNORMAL(9.867299155530418e-08), 0x09dd },
	{ 0x0000, 0x0027, 0x0028, 0x0029, COLPOLY_SNORMAL(-0.9971768856048584), COLPOLY_SNORMAL(0.075087770819664), COLPOLY_SNORMAL(-7.528476686502472e-08), 0x09dd },
	{ 0x0000, 0x0021, 0x002a, 0x0027, COLPOLY_SNORMAL(-0.9971767067909241), COLPOLY_SNORMAL(0.07509075850248337), COLPOLY_SNORMAL(2.624093440317665e-07), 0x09dd },
	{ 0x0000, 0x0022, 0x0021, 0x002b, COLPOLY_SNORMAL(-0.9971767663955688), COLPOLY_SNORMAL(0.07509040087461472), COLPOLY_SNORMAL(-7.528475265417e-08), 0x09dd },
	{ 0x0000, 0x0025, 0x0026, 0x0029, COLPOLY_SNORMAL(-0.9971767663955688), COLPOLY_SNORMAL(0.07508962601423264), COLPOLY_SNORMAL(1.4405336514755618e-06), 0x09dd },
	{ 0x0000, 0x0021, 0x0027, 0x002b, COLPOLY_SNORMAL(-0.9971767067909241), COLPOLY_SNORMAL(0.07509072870016098), COLPOLY_SNORMAL(2.1447151254960772e-07), 0x09dd },
	{ 0x0000, 0x002b, 0x0029, 0x0026, COLPOLY_SNORMAL(-0.9971768260002136), COLPOLY_SNORMAL(0.0750887393951416), COLPOLY_SNORMAL(-2.9972187576277065e-07), 0x09dd },
	{ 0x0000, 0x002b, 0x0027, 0x0029, COLPOLY_SNORMAL(-0.9971767067909241), COLPOLY_SNORMAL(0.07509099692106247), COLPOLY_SNORMAL(-7.528474554874265e-08), 0x09dd },
	{ 0x0000, 0x002c, 0x002b, 0x0026, COLPOLY_SNORMAL(-0.07507693767547607), COLPOLY_SNORMAL(-0.996992826461792), COLPOLY_SNORMAL(-0.019205911085009575), 0x01ce },
	{ 0x0000, 0x002d, 0x002b, 0x002c, COLPOLY_SNORMAL(-0.07507697492837906), COLPOLY_SNORMAL(-0.996992826461792), COLPOLY_SNORMAL(-0.019205933436751366), 0x01ce },
	{ 0x0000, 0x002e, 0x002d, 0x002c, COLPOLY_SNORMAL(-0.9971767663955688), COLPOLY_SNORMAL(0.07509035617113113), COLPOLY_SNORMAL(-5.509043035090144e-07), 0x0b38 },
	{ 0x0000, 0x002e, 0x002c, 0x002f, COLPOLY_SNORMAL(-0.9971766471862793), COLPOLY_SNORMAL(0.07509222626686096), COLPOLY_SNORMAL(-7.528473844331529e-08), 0x0b38 },
	{ 0x0000, 0x002e, 0x0023, 0x0022, COLPOLY_SNORMAL(0.07509070634841919), COLPOLY_SNORMAL(0.9971767067909241), COLPOLY_SNORMAL(5.669190450419137e-09), 0xfeb5 },
	{ 0x0000, 0x002e, 0x002f, 0x0023, COLPOLY_SNORMAL(0.07509070634841919), COLPOLY_SNORMAL(0.9971767067909241), COLPOLY_SNORMAL(5.669190450419137e-09), 0xfeb5 },
	{ 0x0000, 0x0022, 0x002b, 0x002d, COLPOLY_SNORMAL(-0.00890662893652916), COLPOLY_SNORMAL(-0.11827751994132996), COLPOLY_SNORMAL(-0.9929406642913818), 0x0063 },
	{ 0x0000, 0x002e, 0x0022, 0x002d, COLPOLY_SNORMAL(-0.008906622417271137), COLPOLY_SNORMAL(-0.11827757209539413), COLPOLY_SNORMAL(-0.9929406642913818), 0x0063 },
	{ 0x0000, 0x002f, 0x0026, 0x0023, COLPOLY_SNORMAL(-0.0024334259796887636), COLPOLY_SNORMAL(-0.032313987612724304), COLPOLY_SNORMAL(0.999474823474884), 0x01fe },
	{ 0x0000, 0x002f, 0x002c, 0x0026, COLPOLY_SNORMAL(-0.0024334287736564875), COLPOLY_SNORMAL(-0.032313987612724304), COLPOLY_SNORMAL(0.999474823474884), 0x01fe },
	{ 0x0000, 0x0030, 0x0031, 0x0032, COLPOLY_SNORMAL(0.9175736904144287), COLPOLY_SNORMAL(-6.927488271912807e-08), COLPOLY_SNORMAL(0.39756569266319275), 0x002b },
	{ 0x0000, 0x0030, 0x0032, 0x0033, COLPOLY_SNORMAL(0.9175736904144287), COLPOLY_SNORMAL(-6.927488271912807e-08), COLPOLY_SNORMAL(0.39756569266319275), 0x002b },
	{ 0x0000, 0x0031, 0x0034, 0x0035, COLPOLY_SNORMAL(0.3953351378440857), COLPOLY_SNORMAL(-2.9846979998637835e-08), COLPOLY_SNORMAL(0.918536901473999), 0x01a1 },
	{ 0x0000, 0x0031, 0x0035, 0x0032, COLPOLY_SNORMAL(0.3953351378440857), COLPOLY_SNORMAL(-2.9846979998637835e-08), COLPOLY_SNORMAL(0.918536901473999), 0x01a1 },
	{ 0x0000, 0x0034, 0x0036, 0x0037, COLPOLY_SNORMAL(0.042363882064819336), COLPOLY_SNORMAL(-3.198389553205061e-09), COLPOLY_SNORMAL(0.9991022944450378), 0x028d },
	{ 0x0000, 0x0034, 0x0037, 0x0035, COLPOLY_SNORMAL(0.042363885790109634), COLPOLY_SNORMAL(-3.198389997294271e-09), COLPOLY_SNORMAL(0.9991022944450378), 0x028d },
	{ 0x0000, 0x0038, 0x0039, 0x0036, COLPOLY_SNORMAL(0.05054590106010437), COLPOLY_SNORMAL(-3.816115423660449e-09), COLPOLY_SNORMAL(0.998721718788147), 0x0281 },
	{ 0x0000, 0x0036, 0x0039, 0x0037, COLPOLY_SNORMAL(0.05054589733481407), COLPOLY_SNORMAL(-3.816114979571239e-09), COLPOLY_SNORMAL(0.9987216591835022), 0x0281 },
	{ 0x0000, 0x0038, 0x003a, 0x003b, COLPOLY_SNORMAL(0.021414319053292274), COLPOLY_SNORMAL(-1.6167417404844286e-09), COLPOLY_SNORMAL(0.9997707009315491), 0x02bd },
	{ 0x0000, 0x0038, 0x003b, 0x0039, COLPOLY_SNORMAL(0.021414319053292274), COLPOLY_SNORMAL(-1.6167417404844286e-09), COLPOLY_SNORMAL(0.9997707009315491), 0x02bd },
	{ 0x0000, 0x003a, 0x003c, 0x003d, COLPOLY_SNORMAL(-0.9998202919960022), COLPOLY_SNORMAL(7.54843298977903e-08), COLPOLY_SNORMAL(-0.018958553671836853), 0x09d3 },
	{ 0x0000, 0x003a, 0x003d, 0x003b, COLPOLY_SNORMAL(-0.9998202919960022), COLPOLY_SNORMAL(7.54843298977903e-08), COLPOLY_SNORMAL(-0.018958553671836853), 0x09d3 },
	{ 0x0000, 0x003c, 0x003e, 0x003f, COLPOLY_SNORMAL(-0.9998270869255066), COLPOLY_SNORMAL(7.548484859398741e-08), COLPOLY_SNORMAL(0.018595406785607338), 0x09db },
	{ 0x0000, 0x003c, 0x003f, 0x003d, COLPOLY_SNORMAL(-0.9998270869255066), COLPOLY_SNORMAL(7.548484859398741e-08), COLPOLY_SNORMAL(0.018595406785607338), 0x09db },
	{ 0x0000, 0x003e, 0x0040, 0x0041, COLPOLY_SNORMAL(0.041191257536411285), COLPOLY_SNORMAL(-3.1098477126789703e-09), COLPOLY_SNORMAL(-0.999151349067688), 0x00fb },
	{ 0x0000, 0x003e, 0x0041, 0x003f, COLPOLY_SNORMAL(0.041191257536411285), COLPOLY_SNORMAL(-3.1098477126789703e-09), COLPOLY_SNORMAL(-0.999151349067688), 0x00fb },
	{ 0x0000, 0x0040, 0x0042, 0x0043, COLPOLY_SNORMAL(0.042929332703351974), COLPOLY_SNORMAL(-3.2410687467177013e-09), COLPOLY_SNORMAL(-0.9990781545639038), 0x00f8 },
	{ 0x0000, 0x0040, 0x0043, 0x0041, COLPOLY_SNORMAL(0.042929328978061676), COLPOLY_SNORMAL(-3.2410685246730964e-09), COLPOLY_SNORMAL(-0.9990781545639038), 0x00f8 },
	{ 0x0000, 0x0044, 0x0045, 0x0042, COLPOLY_SNORMAL(0.03975607827305794), COLPOLY_SNORMAL(-3.0014948304568634e-09), COLPOLY_SNORMAL(-0.9992094039916992), 0x00fc },
	{ 0x0000, 0x0042, 0x0045, 0x0043, COLPOLY_SNORMAL(0.03975607827305794), COLPOLY_SNORMAL(-3.0014948304568634e-09), COLPOLY_SNORMAL(-0.9992094039916992), 0x00fc },
	{ 0x0000, 0x0033, 0x0032, 0x0035, COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-5.699932459211259e-15), 0x0496 },
	{ 0x0000, 0x0037, 0x0039, 0x003b, COLPOLY_SNORMAL(-0.02099403738975525), COLPOLY_SNORMAL(-0.19715188443660736), COLPOLY_SNORMAL(-0.980148196220398), 0xfe38 },
	{ 0x0000, 0x0037, 0x0033, 0x0035, COLPOLY_SNORMAL(-0.09445226192474365), COLPOLY_SNORMAL(-0.9910346269607544), COLPOLY_SNORMAL(-0.0944940596818924), 0x047c },
	{ 0x0000, 0x0045, 0x0046, 0x0033, COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-5.699932459211259e-15), 0x0496 },
	{ 0x0000, 0x0043, 0x003f, 0x0041, COLPOLY_SNORMAL(-0.04118840768933296), COLPOLY_SNORMAL(-0.01176088023930788), COLPOLY_SNORMAL(0.9990822076797485), 0xff13 },
	{ 0x0000, 0x0043, 0x0045, 0x0033, COLPOLY_SNORMAL(-0.09501196444034576), COLPOLY_SNORMAL(-0.9909607172012329), COLPOLY_SNORMAL(0.0947079211473465), 0x04a2 },
	{ 0x0000, 0x0037, 0x003b, 0x0033, COLPOLY_SNORMAL(0.08644559234380722), COLPOLY_SNORMAL(-0.9173873662948608), COLPOLY_SNORMAL(0.38849398493766785), 0x047f },
	{ 0x0000, 0x0043, 0x003d, 0x003f, COLPOLY_SNORMAL(0.0775875449180603), COLPOLY_SNORMAL(-0.9969845414161682), COLPOLY_SNORMAL(-0.0014430228620767593), 0x03ce },
	{ 0x0000, 0x0033, 0x003b, 0x003d, COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-5.699932459211259e-15), 0x0496 },
	{ 0x0000, 0x0043, 0x0033, 0x003d, COLPOLY_SNORMAL(-0.0002551577053964138), COLPOLY_SNORMAL(-0.9865438938140869), COLPOLY_SNORMAL(-0.16349664330482483), 0x0465 },
	{ 0x0000, 0x0044, 0x0047, 0x0046, COLPOLY_SNORMAL(0.3935999870300293), COLPOLY_SNORMAL(-2.971596479994787e-08), COLPOLY_SNORMAL(-0.9192818403244019), 0x0031 },
	{ 0x0000, 0x0044, 0x0046, 0x0045, COLPOLY_SNORMAL(0.3935999870300293), COLPOLY_SNORMAL(-2.971596479994787e-08), COLPOLY_SNORMAL(-0.9192818403244019), 0x0031 },
	{ 0x0000, 0x0047, 0x0030, 0x0033, COLPOLY_SNORMAL(0.9210348129272461), COLPOLY_SNORMAL(-6.953619902105856e-08), COLPOLY_SNORMAL(-0.3894804120063782), 0xff8d },
	{ 0x0000, 0x0047, 0x0033, 0x0046, COLPOLY_SNORMAL(0.9210348129272461), COLPOLY_SNORMAL(-6.953619902105856e-08), COLPOLY_SNORMAL(-0.3894804120063782), 0xff8d },
	{ 0x0000, 0x0031, 0x0030, 0x0047, COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(5.699932459211259e-15), 0x017c },
	{ 0x0000, 0x0047, 0x0044, 0x0042, COLPOLY_SNORMAL(-0.09829266369342804), COLPOLY_SNORMAL(0.9683161973953247), COLPOLY_SNORMAL(0.2295699566602707), 0x0164 },
	{ 0x0000, 0x0040, 0x003e, 0x0042, COLPOLY_SNORMAL(-0.04118840768933296), COLPOLY_SNORMAL(0.01176088210195303), COLPOLY_SNORMAL(0.9990822076797485), 0xff09 },
	{ 0x0000, 0x003c, 0x003a, 0x0038, COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(5.699932459211259e-15), 0x017c },
	{ 0x0000, 0x003e, 0x003c, 0x0042, COLPOLY_SNORMAL(0.07758771628141403), COLPOLY_SNORMAL(0.9969844818115234), COLPOLY_SNORMAL(-0.0014430236769840121), 0x00b7 },
	{ 0x0000, 0x0031, 0x0047, 0x0042, COLPOLY_SNORMAL(-0.06750685721635818), COLPOLY_SNORMAL(0.9977187514305115), COLPOLY_SNORMAL(-0.0003512621042318642), 0x0187 },
	{ 0x0000, 0x0034, 0x0031, 0x0036, COLPOLY_SNORMAL(-0.09807278215885162), COLPOLY_SNORMAL(0.9687408208847046), COLPOLY_SNORMAL(-0.2278662472963333), 0x0108 },
	{ 0x0000, 0x003c, 0x0038, 0x0036, COLPOLY_SNORMAL(0.13641780614852905), COLPOLY_SNORMAL(0.9829603433609009), COLPOLY_SNORMAL(-0.12320420145988464), 0x0004 },
	{ 0x0000, 0x0031, 0x0042, 0x003c, COLPOLY_SNORMAL(0.01776186376810074), COLPOLY_SNORMAL(0.9918126463890076), COLPOLY_SNORMAL(-0.12646019458770752), 0x0132 },
	{ 0x0000, 0x003c, 0x0036, 0x0031, COLPOLY_SNORMAL(-0.032348185777664185), COLPOLY_SNORMAL(0.9725788235664368), COLPOLY_SNORMAL(0.23031282424926758), 0x01f2 },
	{ 0x0000, 0x0048, 0x0049, 0x004a, COLPOLY_SNORMAL(0.9629393219947815), COLPOLY_SNORMAL(-7.269989765745777e-08), COLPOLY_SNORMAL(-0.26971814036369324), 0xec1f },
	{ 0x0000, 0x0048, 0x004a, 0x004b, COLPOLY_SNORMAL(0.9629393219947815), COLPOLY_SNORMAL(-7.269989765745777e-08), COLPOLY_SNORMAL(-0.26971814036369324), 0xec1f },
	{ 0x0000, 0x004c, 0x004d, 0x004e, COLPOLY_SNORMAL(0.9927861094474792), COLPOLY_SNORMAL(-7.495326315165585e-08), COLPOLY_SNORMAL(0.11989866942167282), 0xed0a },
	{ 0x0000, 0x004c, 0x004e, 0x004f, COLPOLY_SNORMAL(0.9927861094474792), COLPOLY_SNORMAL(-7.495326315165585e-08), COLPOLY_SNORMAL(0.11989866942167282), 0xed0a },
	{ 0x0000, 0x0050, 0x0051, 0x0052, COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(5.699932459211259e-15), 0x0526 },
	{ 0x0000, 0x0050, 0x0052, 0x0053, COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(5.699932459211259e-15), 0x0526 },
	{ 0x0001, 0x0019, 0x001d, 0x001c, COLPOLY_SNORMAL(0.07509061694145203), COLPOLY_SNORMAL(0.9971767663955688), COLPOLY_SNORMAL(-1.0506965253398448e-07), 0xfeb5 },
	{ 0x0001, 0x0019, 0x0018, 0x001d, COLPOLY_SNORMAL(0.07509072124958038), COLPOLY_SNORMAL(0.9971767067909241), COLPOLY_SNORMAL(2.0378683629473926e-08), 0xfeb5 },
	{ 0x0001, 0x001d, 0x0018, 0x001e, COLPOLY_SNORMAL(0.07509062439203262), COLPOLY_SNORMAL(0.9971766471862793), COLPOLY_SNORMAL(4.4837662471763906e-08), 0xfeb5 },
	{ 0x0001, 0x0018, 0x0017, 0x001e, COLPOLY_SNORMAL(0.0750914216041565), COLPOLY_SNORMAL(0.9971767067909241), COLPOLY_SNORMAL(1.5846467249502894e-07), 0xfeb5 },
	{ 0x0001, 0x001f, 0x001e, 0x0017, COLPOLY_SNORMAL(0.0750914216041565), COLPOLY_SNORMAL(0.9971767067909241), COLPOLY_SNORMAL(-4.0799093881105364e-07), 0xfeb5 },
	{ 0x0001, 0x001f, 0x0017, 0x0016, COLPOLY_SNORMAL(0.07509090006351471), COLPOLY_SNORMAL(0.9971766471862793), COLPOLY_SNORMAL(6.605750968446955e-08), 0xfeb5 },
	{ 0x0001, 0x0020, 0x001f, 0x0016, COLPOLY_SNORMAL(0.07509066164493561), COLPOLY_SNORMAL(0.9971767067909241), COLPOLY_SNORMAL(-2.1769917424308005e-08), 0xfeb5 },
	{ 0x0001, 0x0015, 0x0020, 0x0016, COLPOLY_SNORMAL(0.0750906765460968), COLPOLY_SNORMAL(0.9971766471862793), COLPOLY_SNORMAL(1.1379359676766398e-07), 0xfeb5 },
	{ 0x0001, 0x0021, 0x0020, 0x0015, COLPOLY_SNORMAL(0.07509071379899979), COLPOLY_SNORMAL(0.9971767067909241), COLPOLY_SNORMAL(1.0824497564954072e-07), 0xfeb5 },
	{ 0x0001, 0x001b, 0x0021, 0x0015, COLPOLY_SNORMAL(0.07509069889783859), COLPOLY_SNORMAL(0.9971767067909241), COLPOLY_SNORMAL(5.669190006329927e-09), 0xfeb5 },
	{ 0x0001, 0x001a, 0x001c, 0x0024, COLPOLY_SNORMAL(0.07509070634841919), COLPOLY_SNORMAL(0.9971766471862793), COLPOLY_SNORMAL(5.669190894508347e-09), 0xfeb5 },
	{ 0x0001, 0x001a, 0x0019, 0x001c, COLPOLY_SNORMAL(0.07509069889783859), COLPOLY_SNORMAL(0.9971766471862793), COLPOLY_SNORMAL(-1.1147145073664433e-07), 0xfeb5 },
	{ 0x0001, 0x0054, 0x0027, 0x002a, COLPOLY_SNORMAL(-0.32298898696899414), COLPOLY_SNORMAL(0.5652778148651123), COLPOLY_SNORMAL(0.7590383291244507), 0x0238 },
	{ 0x0001, 0x0054, 0x0055, 0x0027, COLPOLY_SNORMAL(-0.07944999635219574), COLPOLY_SNORMAL(0.8086978793144226), COLPOLY_SNORMAL(0.5828340649604797), 0xff8b },
	{ 0x0001, 0x001b, 0x0054, 0x0021, COLPOLY_SNORMAL(-0.43168824911117554), COLPOLY_SNORMAL(0.0325089655816555), COLPOLY_SNORMAL(0.9014368653297424), 0x0395 },
	{ 0x0001, 0x0021, 0x0054, 0x002a, COLPOLY_SNORMAL(-0.43168818950653076), COLPOLY_SNORMAL(0.03250758349895477), COLPOLY_SNORMAL(0.9014369249343872), 0x0395 },
	{ 0x0001, 0x001a, 0x0024, 0x0025, COLPOLY_SNORMAL(-0.4316882789134979), COLPOLY_SNORMAL(0.032507579773664474), COLPOLY_SNORMAL(-0.9014368653297424), 0x0229 },
	{ 0x0001, 0x001a, 0x0025, 0x0056, COLPOLY_SNORMAL(-0.43168798089027405), COLPOLY_SNORMAL(0.03250909969210625), COLPOLY_SNORMAL(-0.9014370441436768), 0x0229 },
	{ 0x0001, 0x0025, 0x0029, 0x0057, COLPOLY_SNORMAL(-0.16536486148834229), COLPOLY_SNORMAL(0.5077242851257324), COLPOLY_SNORMAL(-0.8455001711845398), 0xff4b },
	{ 0x0001, 0x0056, 0x0025, 0x0057, COLPOLY_SNORMAL(-0.23085066676139832), COLPOLY_SNORMAL(0.7665940523147583), COLPOLY_SNORMAL(-0.5992007851600647), 0x0055 },
	{ 0x0001, 0x0058, 0x0029, 0x0028, COLPOLY_SNORMAL(0.07498562335968018), COLPOLY_SNORMAL(0.9957788586616516), COLPOLY_SNORMAL(-0.05292945355176926), 0xfde0 },
	{ 0x0001, 0x0057, 0x0029, 0x0058, COLPOLY_SNORMAL(0.06520269811153412), COLPOLY_SNORMAL(0.9970287680625916), COLPOLY_SNORMAL(-0.04101721942424774), 0xfdff },
	{ 0x0001, 0x0055, 0x0028, 0x0027, COLPOLY_SNORMAL(0.06154998019337654), COLPOLY_SNORMAL(0.9965301752090454), COLPOLY_SNORMAL(0.05603024736046791), 0xfe18 },
	{ 0x0001, 0x0055, 0x0058, 0x0028, COLPOLY_SNORMAL(0.07502186298370361), COLPOLY_SNORMAL(0.9962603449821472), COLPOLY_SNORMAL(0.042861416935920715), 0xfdf3 },
};

Vec3s escape_rm_outside_vertices[89] = {
	{ 239, -1282, -202 },
	{ 325, -1289, 5 },
	{ 33, -295, 183 },
	{ -126, -283, -202 },
	{ 531, -1304, -495 },
	{ 325, -1289, -409 },
	{ 33, -295, -588 },
	{ 417, -324, -747 },
	{ 1637, -1388, -557 },
	{ 2876, -509, -864 },
	{ 531, -1304, 90 },
	{ 417, -324, 343 },
	{ 1637, -1388, 153 },
	{ 2876, -509, 460 },
	{ 454, 159, -747 },
	{ 2912, -26, -864 },
	{ 2912, -26, 460 },
	{ 454, 159, 343 },
	{ 69, 188, 183 },
	{ -90, 200, -202 },
	{ 69, 188, -588 },
	{ 513, 294, 276 },
	{ 176, 319, 136 },
	{ 36, 330, -202 },
	{ 176, 319, -540 },
	{ 513, 294, -680 },
	{ 2924, 112, -783 },
	{ 2924, 112, 379 },
	{ 499, 295, -507 },
	{ 223, 315, -407 },
	{ 128, 323, -202 },
	{ 223, 315, 2 },
	{ 499, 295, 103 },
	{ 2543, 141, 195 },
	{ 2543, 141, 60 },
	{ 2543, 141, -499 },
	{ 2543, 141, -599 },
	{ 2546, 188, -599 },
	{ 2553, 281, -495 },
	{ 2557, 326, 96 },
	{ 2558, 343, -202 },
	{ 2557, 326, -518 },
	{ 2546, 188, 195 },
	{ 2552, 271, 44 },
	{ 2900, 255, -495 },
	{ 2899, 245, 44 },
	{ 2889, 115, 60 },
	{ 2889, 115, -499 },
	{ 40, -380, -201 },
	{ 184, -380, -533 },
	{ 184, 1174, -533 },
	{ 40, 1174, -201 },
	{ 515, -380, -676 },
	{ 515, 1174, -676 },
	{ 1446, -295, -715 },
	{ 1446, 1089, -715 },
	{ 2032, -380, -745 },
	{ 2032, 1174, -745 },
	{ 2530, -380, -755 },
	{ 2530, 1174, -755 },
	{ 2520, -380, -205 },
	{ 2520, 1174, -205 },
	{ 2530, -380, 356 },
	{ 2530, 1174, 356 },
	{ 2011, -380, 334 },
	{ 2011, 1174, 334 },
	{ 1436, -295, 310 },
	{ 1436, 1089, 310 },
	{ 513, -380, 273 },
	{ 513, 1174, 273 },
	{ 180, 1174, 131 },
	{ 180, -380, 131 },
	{ 5326, 105, 148 },
	{ 4668, 105, -2200 },
	{ 4668, 737, -2200 },
	{ 5326, 737, 148 },
	{ 4604, 120, 2363 },
	{ 4884, 120, 46 },
	{ 4884, 751, 46 },
	{ 4604, 751, 2363 },
	{ 1334, -1318, 3396 },
	{ 1334, -1318, -3455 },
	{ -5517, -1318, -3455 },
	{ -5517, -1318, 3396 },
	{ 2928, 159, 379 },
	{ 2938, 298, 188 },
	{ 2928, 159, -783 },
	{ 2938, 298, -610 },
	{ 2940, 314, -202 },
};

CollisionHeader escape_rm_outside_collisionHeader = {
	-5517,
	-1388,
	-3455,
	5326,
	1174,
	3396,
	89,
	escape_rm_outside_vertices,
	138,
	escape_rm_outside_polygons,
	escape_rm_outside_polygonTypes,
	0,
	0,
	0
};

