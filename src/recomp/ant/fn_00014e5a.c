/* fn_00014e5a - 1358 byte(s), 370 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00014e5a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00014e5au): goto L_14E5A;
    case RC_ADDR(0x00014e5eu): goto L_14E5E;
    case RC_ADDR(0x00014e62u): goto L_14E62;
    case RC_ADDR(0x00014e64u): goto L_14E64;
    case RC_ADDR(0x00014e66u): goto L_14E66;
    case RC_ADDR(0x00014e68u): goto L_14E68;
    case RC_ADDR(0x00014e6cu): goto L_14E6C;
    case RC_ADDR(0x00014e6eu): goto L_14E6E;
    case RC_ADDR(0x00014e72u): goto L_14E72;
    case RC_ADDR(0x00014e74u): goto L_14E74;
    case RC_ADDR(0x00014e78u): goto L_14E78;
    case RC_ADDR(0x00014e7au): goto L_14E7A;
    case RC_ADDR(0x00014e80u): goto L_14E80;
    case RC_ADDR(0x00014e86u): goto L_14E86;
    case RC_ADDR(0x00014e88u): goto L_14E88;
    case RC_ADDR(0x00014e8cu): goto L_14E8C;
    case RC_ADDR(0x00014e90u): goto L_14E90;
    case RC_ADDR(0x00014e94u): goto L_14E94;
    case RC_ADDR(0x00014e98u): goto L_14E98;
    case RC_ADDR(0x00014e9cu): goto L_14E9C;
    case RC_ADDR(0x00014ea0u): goto L_14EA0;
    case RC_ADDR(0x00014ea4u): goto L_14EA4;
    case RC_ADDR(0x00014ea8u): goto L_14EA8;
    case RC_ADDR(0x00014eaau): goto L_14EAA;
    case RC_ADDR(0x00014eaeu): goto L_14EAE;
    case RC_ADDR(0x00014eb2u): goto L_14EB2;
    case RC_ADDR(0x00014eb4u): goto L_14EB4;
    case RC_ADDR(0x00014eb8u): goto L_14EB8;
    case RC_ADDR(0x00014ebcu): goto L_14EBC;
    case RC_ADDR(0x00014ec0u): goto L_14EC0;
    case RC_ADDR(0x00014ec4u): goto L_14EC4;
    case RC_ADDR(0x00014ec8u): goto L_14EC8;
    case RC_ADDR(0x00014eccu): goto L_14ECC;
    case RC_ADDR(0x00014ed0u): goto L_14ED0;
    case RC_ADDR(0x00014ed4u): goto L_14ED4;
    case RC_ADDR(0x00014ed8u): goto L_14ED8;
    case RC_ADDR(0x00014edau): goto L_14EDA;
    case RC_ADDR(0x00014edcu): goto L_14EDC;
    case RC_ADDR(0x00014edeu): goto L_14EDE;
    case RC_ADDR(0x00014ee4u): goto L_14EE4;
    case RC_ADDR(0x00014ee8u): goto L_14EE8;
    case RC_ADDR(0x00014eeeu): goto L_14EEE;
    case RC_ADDR(0x00014ef0u): goto L_14EF0;
    case RC_ADDR(0x00014ef4u): goto L_14EF4;
    case RC_ADDR(0x00014ef8u): goto L_14EF8;
    case RC_ADDR(0x00014efcu): goto L_14EFC;
    case RC_ADDR(0x00014f00u): goto L_14F00;
    case RC_ADDR(0x00014f02u): goto L_14F02;
    case RC_ADDR(0x00014f06u): goto L_14F06;
    case RC_ADDR(0x00014f0au): goto L_14F0A;
    case RC_ADDR(0x00014f0cu): goto L_14F0C;
    case RC_ADDR(0x00014f10u): goto L_14F10;
    case RC_ADDR(0x00014f14u): goto L_14F14;
    case RC_ADDR(0x00014f16u): goto L_14F16;
    case RC_ADDR(0x00014f1au): goto L_14F1A;
    case RC_ADDR(0x00014f1eu): goto L_14F1E;
    case RC_ADDR(0x00014f20u): goto L_14F20;
    case RC_ADDR(0x00014f24u): goto L_14F24;
    case RC_ADDR(0x00014f28u): goto L_14F28;
    case RC_ADDR(0x00014f2au): goto L_14F2A;
    case RC_ADDR(0x00014f2eu): goto L_14F2E;
    case RC_ADDR(0x00014f34u): goto L_14F34;
    case RC_ADDR(0x00014f38u): goto L_14F38;
    case RC_ADDR(0x00014f3cu): goto L_14F3C;
    case RC_ADDR(0x00014f40u): goto L_14F40;
    case RC_ADDR(0x00014f44u): goto L_14F44;
    case RC_ADDR(0x00014f48u): goto L_14F48;
    case RC_ADDR(0x00014f4cu): goto L_14F4C;
    case RC_ADDR(0x00014f50u): goto L_14F50;
    case RC_ADDR(0x00014f54u): goto L_14F54;
    case RC_ADDR(0x00014f58u): goto L_14F58;
    case RC_ADDR(0x00014f5au): goto L_14F5A;
    case RC_ADDR(0x00014f5eu): goto L_14F5E;
    case RC_ADDR(0x00014f62u): goto L_14F62;
    case RC_ADDR(0x00014f66u): goto L_14F66;
    case RC_ADDR(0x00014f6au): goto L_14F6A;
    case RC_ADDR(0x00014f6eu): goto L_14F6E;
    case RC_ADDR(0x00014f72u): goto L_14F72;
    case RC_ADDR(0x00014f74u): goto L_14F74;
    case RC_ADDR(0x00014f78u): goto L_14F78;
    case RC_ADDR(0x00014f7cu): goto L_14F7C;
    case RC_ADDR(0x00014f82u): goto L_14F82;
    case RC_ADDR(0x00014f86u): goto L_14F86;
    case RC_ADDR(0x00014f8au): goto L_14F8A;
    case RC_ADDR(0x00014f8eu): goto L_14F8E;
    case RC_ADDR(0x00014f92u): goto L_14F92;
    case RC_ADDR(0x00014f98u): goto L_14F98;
    case RC_ADDR(0x00014f9cu): goto L_14F9C;
    case RC_ADDR(0x00014fa0u): goto L_14FA0;
    case RC_ADDR(0x00014fa2u): goto L_14FA2;
    case RC_ADDR(0x00014fa6u): goto L_14FA6;
    case RC_ADDR(0x00014faau): goto L_14FAA;
    case RC_ADDR(0x00014facu): goto L_14FAC;
    case RC_ADDR(0x00014fb0u): goto L_14FB0;
    case RC_ADDR(0x00014fb4u): goto L_14FB4;
    case RC_ADDR(0x00014fb6u): goto L_14FB6;
    case RC_ADDR(0x00014fb8u): goto L_14FB8;
    case RC_ADDR(0x00014fbcu): goto L_14FBC;
    case RC_ADDR(0x00014fc0u): goto L_14FC0;
    case RC_ADDR(0x00014fc4u): goto L_14FC4;
    case RC_ADDR(0x00014fc8u): goto L_14FC8;
    case RC_ADDR(0x00014fcau): goto L_14FCA;
    case RC_ADDR(0x00014fceu): goto L_14FCE;
    case RC_ADDR(0x00014fd2u): goto L_14FD2;
    case RC_ADDR(0x00014fd6u): goto L_14FD6;
    case RC_ADDR(0x00014fdau): goto L_14FDA;
    case RC_ADDR(0x00014fdeu): goto L_14FDE;
    case RC_ADDR(0x00014fe2u): goto L_14FE2;
    case RC_ADDR(0x00014fe4u): goto L_14FE4;
    case RC_ADDR(0x00014fe8u): goto L_14FE8;
    case RC_ADDR(0x00014fecu): goto L_14FEC;
    case RC_ADDR(0x00014ff0u): goto L_14FF0;
    case RC_ADDR(0x00014ff2u): goto L_14FF2;
    case RC_ADDR(0x00014ff6u): goto L_14FF6;
    case RC_ADDR(0x00014ffau): goto L_14FFA;
    case RC_ADDR(0x00014ffcu): goto L_14FFC;
    case RC_ADDR(0x00015000u): goto L_15000;
    case RC_ADDR(0x00015004u): goto L_15004;
    case RC_ADDR(0x00015008u): goto L_15008;
    case RC_ADDR(0x0001500au): goto L_1500A;
    case RC_ADDR(0x00015010u): goto L_15010;
    case RC_ADDR(0x00015012u): goto L_15012;
    case RC_ADDR(0x00015016u): goto L_15016;
    case RC_ADDR(0x0001501au): goto L_1501A;
    case RC_ADDR(0x0001501cu): goto L_1501C;
    case RC_ADDR(0x00015020u): goto L_15020;
    case RC_ADDR(0x00015022u): goto L_15022;
    case RC_ADDR(0x00015024u): goto L_15024;
    case RC_ADDR(0x0001502au): goto L_1502A;
    case RC_ADDR(0x0001502eu): goto L_1502E;
    case RC_ADDR(0x00015032u): goto L_15032;
    case RC_ADDR(0x00015036u): goto L_15036;
    case RC_ADDR(0x00015038u): goto L_15038;
    case RC_ADDR(0x0001503eu): goto L_1503E;
    case RC_ADDR(0x00015040u): goto L_15040;
    case RC_ADDR(0x00015044u): goto L_15044;
    case RC_ADDR(0x00015048u): goto L_15048;
    case RC_ADDR(0x0001504au): goto L_1504A;
    case RC_ADDR(0x0001504eu): goto L_1504E;
    case RC_ADDR(0x00015050u): goto L_15050;
    case RC_ADDR(0x00015052u): goto L_15052;
    case RC_ADDR(0x00015058u): goto L_15058;
    case RC_ADDR(0x0001505cu): goto L_1505C;
    case RC_ADDR(0x0001505eu): goto L_1505E;
    case RC_ADDR(0x00015062u): goto L_15062;
    case RC_ADDR(0x00015066u): goto L_15066;
    case RC_ADDR(0x0001506au): goto L_1506A;
    case RC_ADDR(0x0001506cu): goto L_1506C;
    case RC_ADDR(0x00015070u): goto L_15070;
    case RC_ADDR(0x00015074u): goto L_15074;
    case RC_ADDR(0x00015078u): goto L_15078;
    case RC_ADDR(0x0001507au): goto L_1507A;
    case RC_ADDR(0x0001507eu): goto L_1507E;
    case RC_ADDR(0x00015082u): goto L_15082;
    case RC_ADDR(0x00015084u): goto L_15084;
    case RC_ADDR(0x00015088u): goto L_15088;
    case RC_ADDR(0x0001508au): goto L_1508A;
    case RC_ADDR(0x0001508eu): goto L_1508E;
    case RC_ADDR(0x00015092u): goto L_15092;
    case RC_ADDR(0x00015094u): goto L_15094;
    case RC_ADDR(0x00015098u): goto L_15098;
    case RC_ADDR(0x0001509cu): goto L_1509C;
    case RC_ADDR(0x000150a0u): goto L_150A0;
    case RC_ADDR(0x000150a2u): goto L_150A2;
    case RC_ADDR(0x000150a6u): goto L_150A6;
    case RC_ADDR(0x000150acu): goto L_150AC;
    case RC_ADDR(0x000150b0u): goto L_150B0;
    case RC_ADDR(0x000150b2u): goto L_150B2;
    case RC_ADDR(0x000150b4u): goto L_150B4;
    case RC_ADDR(0x000150b8u): goto L_150B8;
    case RC_ADDR(0x000150bau): goto L_150BA;
    case RC_ADDR(0x000150beu): goto L_150BE;
    case RC_ADDR(0x000150c0u): goto L_150C0;
    case RC_ADDR(0x000150c4u): goto L_150C4;
    case RC_ADDR(0x000150c6u): goto L_150C6;
    case RC_ADDR(0x000150cau): goto L_150CA;
    case RC_ADDR(0x000150ccu): goto L_150CC;
    case RC_ADDR(0x000150d0u): goto L_150D0;
    case RC_ADDR(0x000150d4u): goto L_150D4;
    case RC_ADDR(0x000150d6u): goto L_150D6;
    case RC_ADDR(0x000150dau): goto L_150DA;
    case RC_ADDR(0x000150deu): goto L_150DE;
    case RC_ADDR(0x000150e0u): goto L_150E0;
    case RC_ADDR(0x000150e4u): goto L_150E4;
    case RC_ADDR(0x000150e8u): goto L_150E8;
    case RC_ADDR(0x000150eau): goto L_150EA;
    case RC_ADDR(0x000150eeu): goto L_150EE;
    case RC_ADDR(0x000150f2u): goto L_150F2;
    case RC_ADDR(0x000150f4u): goto L_150F4;
    case RC_ADDR(0x0001510cu): goto L_1510C;
    case RC_ADDR(0x00015112u): goto L_15112;
    case RC_ADDR(0x00015114u): goto L_15114;
    case RC_ADDR(0x00015116u): goto L_15116;
    case RC_ADDR(0x0001511au): goto L_1511A;
    case RC_ADDR(0x0001511eu): goto L_1511E;
    case RC_ADDR(0x00015120u): goto L_15120;
    case RC_ADDR(0x00015124u): goto L_15124;
    case RC_ADDR(0x00015128u): goto L_15128;
    case RC_ADDR(0x0001512cu): goto L_1512C;
    case RC_ADDR(0x00015130u): goto L_15130;
    case RC_ADDR(0x00015134u): goto L_15134;
    case RC_ADDR(0x00015138u): goto L_15138;
    case RC_ADDR(0x0001513au): goto L_1513A;
    case RC_ADDR(0x0001513eu): goto L_1513E;
    case RC_ADDR(0x00015142u): goto L_15142;
    case RC_ADDR(0x00015144u): goto L_15144;
    case RC_ADDR(0x00015148u): goto L_15148;
    case RC_ADDR(0x0001514au): goto L_1514A;
    case RC_ADDR(0x0001514cu): goto L_1514C;
    case RC_ADDR(0x0001514eu): goto L_1514E;
    case RC_ADDR(0x00015154u): goto L_15154;
    case RC_ADDR(0x00015158u): goto L_15158;
    case RC_ADDR(0x0001515eu): goto L_1515E;
    case RC_ADDR(0x00015162u): goto L_15162;
    case RC_ADDR(0x00015168u): goto L_15168;
    case RC_ADDR(0x0001516cu): goto L_1516C;
    case RC_ADDR(0x00015170u): goto L_15170;
    case RC_ADDR(0x00015172u): goto L_15172;
    case RC_ADDR(0x00015176u): goto L_15176;
    case RC_ADDR(0x0001517au): goto L_1517A;
    case RC_ADDR(0x0001517cu): goto L_1517C;
    case RC_ADDR(0x00015180u): goto L_15180;
    case RC_ADDR(0x00015184u): goto L_15184;
    case RC_ADDR(0x00015188u): goto L_15188;
    case RC_ADDR(0x0001518cu): goto L_1518C;
    case RC_ADDR(0x0001518eu): goto L_1518E;
    case RC_ADDR(0x00015192u): goto L_15192;
    case RC_ADDR(0x00015196u): goto L_15196;
    case RC_ADDR(0x0001519au): goto L_1519A;
    case RC_ADDR(0x0001519cu): goto L_1519C;
    case RC_ADDR(0x000151a0u): goto L_151A0;
    case RC_ADDR(0x000151a4u): goto L_151A4;
    case RC_ADDR(0x000151a8u): goto L_151A8;
    case RC_ADDR(0x000151acu): goto L_151AC;
    case RC_ADDR(0x000151b0u): goto L_151B0;
    case RC_ADDR(0x000151b4u): goto L_151B4;
    case RC_ADDR(0x000151b8u): goto L_151B8;
    case RC_ADDR(0x000151bcu): goto L_151BC;
    case RC_ADDR(0x000151c0u): goto L_151C0;
    case RC_ADDR(0x000151c4u): goto L_151C4;
    case RC_ADDR(0x000151c8u): goto L_151C8;
    case RC_ADDR(0x000151ccu): goto L_151CC;
    case RC_ADDR(0x000151d0u): goto L_151D0;
    case RC_ADDR(0x000151d4u): goto L_151D4;
    case RC_ADDR(0x000151d8u): goto L_151D8;
    case RC_ADDR(0x000151dcu): goto L_151DC;
    case RC_ADDR(0x000151e0u): goto L_151E0;
    case RC_ADDR(0x000151e4u): goto L_151E4;
    case RC_ADDR(0x000151e6u): goto L_151E6;
    case RC_ADDR(0x000151eau): goto L_151EA;
    case RC_ADDR(0x000151eeu): goto L_151EE;
    case RC_ADDR(0x000151f2u): goto L_151F2;
    case RC_ADDR(0x000151f8u): goto L_151F8;
    case RC_ADDR(0x000151feu): goto L_151FE;
    case RC_ADDR(0x00015200u): goto L_15200;
    case RC_ADDR(0x00015204u): goto L_15204;
    case RC_ADDR(0x0001520au): goto L_1520A;
    case RC_ADDR(0x00015210u): goto L_15210;
    case RC_ADDR(0x00015214u): goto L_15214;
    case RC_ADDR(0x00015216u): goto L_15216;
    case RC_ADDR(0x0001521au): goto L_1521A;
    case RC_ADDR(0x0001521eu): goto L_1521E;
    case RC_ADDR(0x00015222u): goto L_15222;
    case RC_ADDR(0x00015224u): goto L_15224;
    case RC_ADDR(0x00015226u): goto L_15226;
    case RC_ADDR(0x0001522au): goto L_1522A;
    case RC_ADDR(0x0001522cu): goto L_1522C;
    case RC_ADDR(0x00015230u): goto L_15230;
    case RC_ADDR(0x00015234u): goto L_15234;
    case RC_ADDR(0x00015238u): goto L_15238;
    case RC_ADDR(0x0001523eu): goto L_1523E;
    case RC_ADDR(0x00015240u): goto L_15240;
    case RC_ADDR(0x00015244u): goto L_15244;
    case RC_ADDR(0x0001524au): goto L_1524A;
    case RC_ADDR(0x00015250u): goto L_15250;
    case RC_ADDR(0x00015254u): goto L_15254;
    case RC_ADDR(0x00015256u): goto L_15256;
    case RC_ADDR(0x0001525au): goto L_1525A;
    case RC_ADDR(0x0001525eu): goto L_1525E;
    case RC_ADDR(0x00015262u): goto L_15262;
    case RC_ADDR(0x00015264u): goto L_15264;
    case RC_ADDR(0x00015266u): goto L_15266;
    case RC_ADDR(0x0001526au): goto L_1526A;
    case RC_ADDR(0x0001526cu): goto L_1526C;
    case RC_ADDR(0x00015270u): goto L_15270;
    case RC_ADDR(0x00015274u): goto L_15274;
    case RC_ADDR(0x0001527au): goto L_1527A;
    case RC_ADDR(0x0001527eu): goto L_1527E;
    case RC_ADDR(0x00015280u): goto L_15280;
    case RC_ADDR(0x00015284u): goto L_15284;
    case RC_ADDR(0x00015286u): goto L_15286;
    case RC_ADDR(0x0001528au): goto L_1528A;
    case RC_ADDR(0x0001528eu): goto L_1528E;
    case RC_ADDR(0x00015292u): goto L_15292;
    case RC_ADDR(0x00015296u): goto L_15296;
    case RC_ADDR(0x0001529au): goto L_1529A;
    case RC_ADDR(0x000152a0u): goto L_152A0;
    case RC_ADDR(0x000152a4u): goto L_152A4;
    case RC_ADDR(0x000152a8u): goto L_152A8;
    case RC_ADDR(0x000152aau): goto L_152AA;
    case RC_ADDR(0x000152aeu): goto L_152AE;
    case RC_ADDR(0x000152b2u): goto L_152B2;
    case RC_ADDR(0x000152b6u): goto L_152B6;
    case RC_ADDR(0x000152bau): goto L_152BA;
    case RC_ADDR(0x000152beu): goto L_152BE;
    case RC_ADDR(0x000152c4u): goto L_152C4;
    case RC_ADDR(0x000152c8u): goto L_152C8;
    case RC_ADDR(0x000152cau): goto L_152CA;
    case RC_ADDR(0x000152ccu): goto L_152CC;
    case RC_ADDR(0x000152d0u): goto L_152D0;
    case RC_ADDR(0x000152d2u): goto L_152D2;
    case RC_ADDR(0x000152d8u): goto L_152D8;
    case RC_ADDR(0x000152dau): goto L_152DA;
    case RC_ADDR(0x000152e0u): goto L_152E0;
    case RC_ADDR(0x000152e2u): goto L_152E2;
    case RC_ADDR(0x000152e8u): goto L_152E8;
    case RC_ADDR(0x000152eau): goto L_152EA;
    case RC_ADDR(0x000152f0u): goto L_152F0;
    case RC_ADDR(0x000152f2u): goto L_152F2;
    case RC_ADDR(0x000152f8u): goto L_152F8;
    case RC_ADDR(0x000152fau): goto L_152FA;
    case RC_ADDR(0x00015300u): goto L_15300;
    case RC_ADDR(0x00015302u): goto L_15302;
    case RC_ADDR(0x00015308u): goto L_15308;
    case RC_ADDR(0x0001530au): goto L_1530A;
    case RC_ADDR(0x00015310u): goto L_15310;
    case RC_ADDR(0x00015328u): goto L_15328;
    case RC_ADDR(0x0001532eu): goto L_1532E;
    case RC_ADDR(0x00015330u): goto L_15330;
    case RC_ADDR(0x00015332u): goto L_15332;
    case RC_ADDR(0x00015336u): goto L_15336;
    case RC_ADDR(0x0001533au): goto L_1533A;
    case RC_ADDR(0x0001533eu): goto L_1533E;
    case RC_ADDR(0x00015342u): goto L_15342;
    case RC_ADDR(0x00015344u): goto L_15344;
    case RC_ADDR(0x00015348u): goto L_15348;
    case RC_ADDR(0x0001534cu): goto L_1534C;
    case RC_ADDR(0x00015350u): goto L_15350;
    case RC_ADDR(0x00015354u): goto L_15354;
    case RC_ADDR(0x00015358u): goto L_15358;
    case RC_ADDR(0x0001535cu): goto L_1535C;
    case RC_ADDR(0x0001535eu): goto L_1535E;
    case RC_ADDR(0x00015362u): goto L_15362;
    case RC_ADDR(0x00015366u): goto L_15366;
    case RC_ADDR(0x0001536au): goto L_1536A;
    case RC_ADDR(0x0001536cu): goto L_1536C;
    case RC_ADDR(0x00015370u): goto L_15370;
    case RC_ADDR(0x00015376u): goto L_15376;
    case RC_ADDR(0x00015378u): goto L_15378;
    case RC_ADDR(0x0001537cu): goto L_1537C;
    case RC_ADDR(0x00015380u): goto L_15380;
    case RC_ADDR(0x00015384u): goto L_15384;
    case RC_ADDR(0x00015388u): goto L_15388;
    case RC_ADDR(0x0001538eu): goto L_1538E;
    case RC_ADDR(0x00015392u): goto L_15392;
    case RC_ADDR(0x00015398u): goto L_15398;
    case RC_ADDR(0x0001539cu): goto L_1539C;
    case RC_ADDR(0x000153a0u): goto L_153A0;
    case RC_ADDR(0x000153a4u): goto L_153A4;
    case RC_ADDR(0x000153aau): goto L_153AA;
    case RC_ADDR(0x000153aeu): goto L_153AE;
    case RC_ADDR(0x000153b2u): goto L_153B2;
    case RC_ADDR(0x000153b6u): goto L_153B6;
    case RC_ADDR(0x000153bau): goto L_153BA;
    case RC_ADDR(0x000153beu): goto L_153BE;
    case RC_ADDR(0x000153c0u): goto L_153C0;
    case RC_ADDR(0x000153c4u): goto L_153C4;
    case RC_ADDR(0x000153cau): goto L_153CA;
    case RC_ADDR(0x000153ccu): goto L_153CC;
    case RC_ADDR(0x000153d0u): goto L_153D0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14E5A:
    /* 00014e5a   4  link.w A5,#ffffffe2 */
    c->pc = RC_ADDR(0x00014e5au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x1eu;

L_14E5E:
    /* 00014e5e   4  tst.w (6b8,A4) */
    c->pc = RC_ADDR(0x00014e5eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6b8u));
    rc_set_nzvc(c, t0, RC_W);

L_14E62:
    /* 00014e62   2  bne 00014e68 */
    c->pc = RC_ADDR(0x00014e62u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14E68;

L_14E64:
    /* 00014e64   2  unlk A5 */
    c->pc = RC_ADDR(0x00014e64u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14E66:
    /* 00014e66   2  rts */
    c->pc = RC_ADDR(0x00014e66u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_14E68:
    /* 00014e68   4  tst.w (6c6,A4) */
    c->pc = RC_ADDR(0x00014e68u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6c6u));
    rc_set_nzvc(c, t0, RC_W);

L_14E6C:
    /* 00014e6c   2  beq 00014e88 */
    c->pc = RC_ADDR(0x00014e6cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14E88;

L_14E6E:
    /* 00014e6e   4  subq.w #1,(6c6,A4) */
    c->pc = RC_ADDR(0x00014e6eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6c6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14E72:
    /* 00014e72   2  bne 00014e88 */
    c->pc = RC_ADDR(0x00014e72u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14E88;

L_14E74:
    /* 00014e74   4  tst.w (14f0,A4) */
    c->pc = RC_ADDR(0x00014e74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f0u));
    rc_set_nzvc(c, t0, RC_W);

L_14E78:
    /* 00014e78   2  bne 00014e88 */
    c->pc = RC_ADDR(0x00014e78u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14E88;

L_14E7A:
    /* 00014e7a   6  move.w #1,(14e8,A4) */
    c->pc = RC_ADDR(0x00014e7au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14e8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E80:
    /* 00014e80   6  move.w #1,(856,A4) */
    c->pc = RC_ADDR(0x00014e80u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x856u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E86:
    /* 00014e86   2  bra 00014e64 */
    c->pc = RC_ADDR(0x00014e86u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_14E64;

L_14E88:
    /* 00014e88   4  clr.w (ffffffe4,A5) */
    c->pc = RC_ADDR(0x00014e88u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x1cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14E8C:
    /* 00014e8c   4  jsr (00014db0) */
    c->pc = RC_ADDR(0x00014e8cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014e90u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014db0u);
    return;

L_14E90:
    /* 00014e90   4  jsr (000168ac) */
    c->pc = RC_ADDR(0x00014e90u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014e94u));
    rc_depth++;
    c->pc = RC_ADDR(0x000168acu);
    return;

L_14E94:
    /* 00014e94   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00014e94u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14E98:
    /* 00014e98   4  bra 00014f38 */
    c->pc = RC_ADDR(0x00014e98u);
    rc_step(c, m, 10);
    goto L_14F38;

L_14E9C:
    /* 00014e9c   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00014e9cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14EA0:
    /* 00014ea0   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014ea0u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14EA4:
    /* 00014ea4   4  lea (fffffb24,A4),A0 */
    c->pc = RC_ADDR(0x00014ea4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4dcu);

L_14EA8:
    /* 00014ea8   2  add.l A0,D0 */
    c->pc = RC_ADDR(0x00014ea8u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_14EAA:
    /* 00014eaa   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00014eaau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_14EAE:
    /* 00014eae   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014eaeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_14EB2:
    /* 00014eb2   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x00014eb2u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14EB4:
    /* 00014eb4   4  sub.w (17f4,A4),D0 */
    c->pc = RC_ADDR(0x00014eb4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14EB8:
    /* 00014eb8   4  move.w D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00014eb8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14EBC:
    /* 00014ebc   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014ebcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_14EC0:
    /* 00014ec0   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x00014ec0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14EC4:
    /* 00014ec4   4  sub.w (17f6,A4),D0 */
    c->pc = RC_ADDR(0x00014ec4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14EC8:
    /* 00014ec8   4  move.w D0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00014ec8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14ECC:
    /* 00014ecc   4  move.w (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00014eccu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14ED0:
    /* 00014ed0   4  move.w (fffffff2,A5),-(A7) */
    c->pc = RC_ADDR(0x00014ed0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14ED4:
    /* 00014ed4   4  jsr (00014482) */
    c->pc = RC_ADDR(0x00014ed4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014ed8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014482u);
    return;

L_14ED8:
    /* 00014ed8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00014ed8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_14EDA:
    /* 00014eda   2  tst.w D0 */
    c->pc = RC_ADDR(0x00014edau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_14EDC:
    /* 00014edc   2  beq 00014ef0 */
    c->pc = RC_ADDR(0x00014edcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14EF0;

L_14EDE:
    /* 00014ede   6  move.w #1,(ffffffe4,A5) */
    c->pc = RC_ADDR(0x00014edeu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14EE4:
    /* 00014ee4   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014ee4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_14EE8:
    /* 00014ee8   6  move.b #1,(15,A0) */
    c->pc = RC_ADDR(0x00014ee8u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr8(c, m, (c->a[0] + 0x15u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_14EEE:
    /* 00014eee   2  bra 00014ef8 */
    c->pc = RC_ADDR(0x00014eeeu);
    rc_step(c, m, 10);
    goto L_14EF8;

L_14EF0:
    /* 00014ef0   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014ef0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_14EF4:
    /* 00014ef4   4  clr.b (15,A0) */
    c->pc = RC_ADDR(0x00014ef4u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[0] + 0x15u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_14EF8:
    /* 00014ef8   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00014ef8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14EFC:
    /* 00014efc   4  cmp.w (6bc,A4),D0 */
    c->pc = RC_ADDR(0x00014efcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6bcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14F00:
    /* 00014f00   2  blt 00014f0c */
    c->pc = RC_ADDR(0x00014f00u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_14F0C;

L_14F02:
    /* 00014f02   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00014f02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F06:
    /* 00014f06   4  cmp.w (6be,A4),D0 */
    c->pc = RC_ADDR(0x00014f06u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6beu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14F0A:
    /* 00014f0a   2  blt 00014f2a */
    c->pc = RC_ADDR(0x00014f0au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_14F2A;

L_14F0C:
    /* 00014f0c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014f0cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_14F10:
    /* 00014f10   4  tst.b (15,A0) */
    c->pc = RC_ADDR(0x00014f10u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x15u));
    rc_set_nzvc(c, t0, RC_B);

L_14F14:
    /* 00014f14   2  beq 00014f20 */
    c->pc = RC_ADDR(0x00014f14u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14F20;

L_14F16:
    /* 00014f16   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014f16u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_14F1A:
    /* 00014f1a   4  tst.b (c,A0) */
    c->pc = RC_ADDR(0x00014f1au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0xcu));
    rc_set_nzvc(c, t0, RC_B);

L_14F1E:
    /* 00014f1e   2  bge 00014f2a */
    c->pc = RC_ADDR(0x00014f1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_14F2A;

L_14F20:
    /* 00014f20   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014f20u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_14F24:
    /* 00014f24   4  clr.b (13,A0) */
    c->pc = RC_ADDR(0x00014f24u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[0] + 0x13u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_14F28:
    /* 00014f28   2  bra 00014f34 */
    c->pc = RC_ADDR(0x00014f28u);
    rc_step(c, m, 10);
    goto L_14F34;

L_14F2A:
    /* 00014f2a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014f2au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_14F2E:
    /* 00014f2e   6  move.b #1,(13,A0) */
    c->pc = RC_ADDR(0x00014f2eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr8(c, m, (c->a[0] + 0x13u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_14F34:
    /* 00014f34   4  addq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00014f34u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14F38:
    /* 00014f38   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00014f38u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F3C:
    /* 00014f3c   4  cmp.w (6b8,A4),D0 */
    c->pc = RC_ADDR(0x00014f3cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6b8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14F40:
    /* 00014f40   4  blt 00014e9c */
    c->pc = RC_ADDR(0x00014f40u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_14E9C; }

L_14F44:
    /* 00014f44   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00014f44u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14F48:
    /* 00014f48   4  bra 000153ae */
    c->pc = RC_ADDR(0x00014f48u);
    rc_step(c, m, 10);
    goto L_153AE;

L_14F4C:
    /* 00014f4c   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00014f4cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F50:
    /* 00014f50   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014f50u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14F54:
    /* 00014f54   4  lea (fffffb24,A4),A0 */
    c->pc = RC_ADDR(0x00014f54u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4dcu);

L_14F58:
    /* 00014f58   2  add.l A0,D0 */
    c->pc = RC_ADDR(0x00014f58u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_14F5A:
    /* 00014f5a   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00014f5au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_14F5E:
    /* 00014f5e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014f5eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_14F62:
    /* 00014f62   4  tst.b (13,A0) */
    c->pc = RC_ADDR(0x00014f62u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x13u));
    rc_set_nzvc(c, t0, RC_B);

L_14F66:
    /* 00014f66   4  beq 000153aa */
    c->pc = RC_ADDR(0x00014f66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_153AA;

L_14F6A:
    /* 00014f6a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014f6au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_14F6E:
    /* 00014f6e   4  move.b (d,A0),D0 */
    c->pc = RC_ADDR(0x00014f6eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0xdu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_14F72:
    /* 00014f72   2  ext.w D0 */
    c->pc = RC_ADDR(0x00014f72u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_14F74:
    /* 00014f74   4  move.w D0,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00014f74u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F78:
    /* 00014f78   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014f78u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_14F7C:
    /* 00014f7c   6  cmpi.b #ff,(c,A0) */
    c->pc = RC_ADDR(0x00014f7cu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[0] + 0xcu));
    rc_cmp(c, RC_B, t0, 0x000000ffu);

L_14F82:
    /* 00014f82   4  ble 000153aa */
    c->pc = RC_ADDR(0x00014f82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_153AA;

L_14F86:
    /* 00014f86   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014f86u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_14F8A:
    /* 00014f8a   4  move.w (A0),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00014f8au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F8E:
    /* 00014f8e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014f8eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_14F92:
    /* 00014f92   6  move.w (2,A0),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00014f92u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F98:
    /* 00014f98   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014f98u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_14F9C:
    /* 00014f9c   4  move.b (10,A0),D0 */
    c->pc = RC_ADDR(0x00014f9cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x10u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_14FA0:
    /* 00014fa0   2  ext.w D0 */
    c->pc = RC_ADDR(0x00014fa0u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_14FA2:
    /* 00014fa2   4  move.w D0,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00014fa2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14FA6:
    /* 00014fa6   4  tst.w (6c4,A4) */
    c->pc = RC_ADDR(0x00014fa6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6c4u));
    rc_set_nzvc(c, t0, RC_W);

L_14FAA:
    /* 00014faa   2  beq 00014fb8 */
    c->pc = RC_ADDR(0x00014faau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14FB8;

L_14FAC:
    /* 00014fac   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00014facu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14FB0:
    /* 00014fb0   4  jsr (00014300) */
    c->pc = RC_ADDR(0x00014fb0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014fb4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014300u);
    return;

L_14FB4:
    /* 00014fb4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00014fb4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_14FB6:
    /* 00014fb6   2  bra 00014fca */
    c->pc = RC_ADDR(0x00014fb6u);
    rc_step(c, m, 10);
    goto L_14FCA;

L_14FB8:
    /* 00014fb8   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00014fb8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14FBC:
    /* 00014fbc   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00014fbcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14FC0:
    /* 00014fc0   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00014fc0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14FC4:
    /* 00014fc4   4  jsr (00014d0c) */
    c->pc = RC_ADDR(0x00014fc4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014fc8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014d0cu);
    return;

L_14FC8:
    /* 00014fc8   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00014fc8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_14FCA:
    /* 00014fca   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014fcau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_14FCE:
    /* 00014fce   4  tst.b (c,A0) */
    c->pc = RC_ADDR(0x00014fceu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0xcu));
    rc_set_nzvc(c, t0, RC_B);

L_14FD2:
    /* 00014fd2   4  bne 00015120 */
    c->pc = RC_ADDR(0x00014fd2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_15120;

L_14FD6:
    /* 00014fd6   4  clr.w (ffffffea,A5) */
    c->pc = RC_ADDR(0x00014fd6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14FDA:
    /* 00014fda   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014fdau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_14FDE:
    /* 00014fde   4  tst.b (14,A0) */
    c->pc = RC_ADDR(0x00014fdeu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x14u));
    rc_set_nzvc(c, t0, RC_B);

L_14FE2:
    /* 00014fe2   2  beq 00014ffc */
    c->pc = RC_ADDR(0x00014fe2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14FFC;

L_14FE4:
    /* 00014fe4   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014fe4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_14FE8:
    /* 00014fe8   4  subq.b #1,(14,A0) */
    c->pc = RC_ADDR(0x00014fe8u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0x14u);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_14FEC:
    /* 00014fec   4  tst.b (14,A0) */
    c->pc = RC_ADDR(0x00014fecu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x14u));
    rc_set_nzvc(c, t0, RC_B);

L_14FF0:
    /* 00014ff0   2  bne 00014ffc */
    c->pc = RC_ADDR(0x00014ff0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14FFC;

L_14FF2:
    /* 00014ff2   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00014ff2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14FF6:
    /* 00014ff6   4  jsr (00014300) */
    c->pc = RC_ADDR(0x00014ff6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00014ffau));
    rc_depth++;
    c->pc = RC_ADDR(0x00014300u);
    return;

L_14FFA:
    /* 00014ffa   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00014ffau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_14FFC:
    /* 00014ffc   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00014ffcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15000:
    /* 00015000   4  move.w (8,A0),D0 */
    c->pc = RC_ADDR(0x00015000u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15004:
    /* 00015004   4  cmp.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00015004u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15008:
    /* 00015008   2  bls 00015012 */
    c->pc = RC_ADDR(0x00015008u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_15012;

L_1500A:
    /* 0001500a   6  bset #0,(ffffffeb,A5) */
    c->pc = RC_ADDR(0x0001500au);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x15u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_15010:
    /* 00015010   2  bra 0001502a */
    c->pc = RC_ADDR(0x00015010u);
    rc_step(c, m, 10);
    goto L_1502A;

L_15012:
    /* 00015012   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015012u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15016:
    /* 00015016   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00015016u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1501A:
    /* 0001501a   2  subq.w #3,D0 */
    c->pc = RC_ADDR(0x0001501au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1501C:
    /* 0001501c   4  move.w (8,A0),D1 */
    c->pc = RC_ADDR(0x0001501cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15020:
    /* 00015020   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00015020u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15022:
    /* 00015022   2  bcc 0001502a */
    c->pc = RC_ADDR(0x00015022u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1502A;

L_15024:
    /* 00015024   6  bset #1,(ffffffeb,A5) */
    c->pc = RC_ADDR(0x00015024u);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x15u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1502A:
    /* 0001502a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001502au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1502E:
    /* 0001502e   4  move.w (a,A0),D0 */
    c->pc = RC_ADDR(0x0001502eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15032:
    /* 00015032   4  cmp.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00015032u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15036:
    /* 00015036   2  bls 00015040 */
    c->pc = RC_ADDR(0x00015036u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_15040;

L_15038:
    /* 00015038   6  bset #2,(ffffffeb,A5) */
    c->pc = RC_ADDR(0x00015038u);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x15u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1503E:
    /* 0001503e   2  bra 00015058 */
    c->pc = RC_ADDR(0x0001503eu);
    rc_step(c, m, 10);
    goto L_15058;

L_15040:
    /* 00015040   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015040u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15044:
    /* 00015044   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00015044u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15048:
    /* 00015048   2  subq.w #3,D0 */
    c->pc = RC_ADDR(0x00015048u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1504A:
    /* 0001504a   4  move.w (a,A0),D1 */
    c->pc = RC_ADDR(0x0001504au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1504E:
    /* 0001504e   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001504eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15050:
    /* 00015050   2  bcc 00015058 */
    c->pc = RC_ADDR(0x00015050u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_15058;

L_15052:
    /* 00015052   6  bset #3,(ffffffeb,A5) */
    c->pc = RC_ADDR(0x00015052u);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x15u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_15058:
    /* 00015058   4  tst.w (ffffffea,A5) */
    c->pc = RC_ADDR(0x00015058u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_set_nzvc(c, t0, RC_W);

L_1505C:
    /* 0001505c   2  bne 0001507a */
    c->pc = RC_ADDR(0x0001505cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1507A;

L_1505E:
    /* 0001505e   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0001505eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15062:
    /* 00015062   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00015062u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15066:
    /* 00015066   4  jsr (00014cb0) */
    c->pc = RC_ADDR(0x00015066u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001506au));
    rc_depth++;
    c->pc = RC_ADDR(0x00014cb0u);
    return;

L_1506A:
    /* 0001506a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001506au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1506C:
    /* 0001506c   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001506cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15070:
    /* 00015070   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00015070u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15074:
    /* 00015074   4  jsr (00014c54) */
    c->pc = RC_ADDR(0x00015074u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00015078u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014c54u);
    return;

L_15078:
    /* 00015078   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00015078u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1507A:
    /* 0001507a   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x0001507au);
    rc_step(c, m, 12);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1507E:
    /* 0001507e   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0001507eu);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x00015082u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_15082:
    /* 00015082   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00015082u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_15084:
    /* 00015084   4  cmp.w #1e,D0 */
    c->pc = RC_ADDR(0x00015084u);
    rc_step(c, m, 8);
    t0 = 0x0000001eu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15088:
    /* 00015088   2  bge 000150a2 */
    c->pc = RC_ADDR(0x00015088u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_150A2;

L_1508A:
    /* 0001508a   4  move.w #f,-(A7) */
    c->pc = RC_ADDR(0x0001508au);
    rc_step(c, m, 12);
    t0 = 0x0000000fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1508E:
    /* 0001508e   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0001508eu);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x00015092u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_15092:
    /* 00015092   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00015092u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_15094:
    /* 00015094   4  add.w #a,D0 */
    c->pc = RC_ADDR(0x00015094u);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15098:
    /* 00015098   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015098u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1509C:
    /* 0001509c   4  move.b D0,(c,A0) */
    c->pc = RC_ADDR(0x0001509cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_150A0:
    /* 000150a0   2  bra 000150ac */
    c->pc = RC_ADDR(0x000150a0u);
    rc_step(c, m, 10);
    goto L_150AC;

L_150A2:
    /* 000150a2   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000150a2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_150A6:
    /* 000150a6   6  move.b #2,(c,A0) */
    c->pc = RC_ADDR(0x000150a6u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr8(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_150AC:
    /* 000150ac   4  move.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x000150acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_150B0:
    /* 000150b0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000150b0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_150B2:
    /* 000150b2   2  bra 0001510c */
    c->pc = RC_ADDR(0x000150b2u);
    rc_step(c, m, 10);
    goto L_1510C;

L_150B4:
    /* 000150b4   4  addq.w #3,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000150b4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_150B8:
    /* 000150b8   2  bra 0001511e */
    c->pc = RC_ADDR(0x000150b8u);
    rc_step(c, m, 10);
    goto L_1511E;

L_150BA:
    /* 000150ba   4  subq.w #3,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000150bau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_150BE:
    /* 000150be   2  bra 0001511e */
    c->pc = RC_ADDR(0x000150beu);
    rc_step(c, m, 10);
    goto L_1511E;

L_150C0:
    /* 000150c0   4  addq.w #3,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000150c0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_150C4:
    /* 000150c4   2  bra 0001511e */
    c->pc = RC_ADDR(0x000150c4u);
    rc_step(c, m, 10);
    goto L_1511E;

L_150C6:
    /* 000150c6   4  subq.w #3,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000150c6u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_150CA:
    /* 000150ca   2  bra 0001511e */
    c->pc = RC_ADDR(0x000150cau);
    rc_step(c, m, 10);
    goto L_1511E;

L_150CC:
    /* 000150cc   4  addq.w #2,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000150ccu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_150D0:
    /* 000150d0   4  addq.w #2,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000150d0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_150D4:
    /* 000150d4   2  bra 0001511e */
    c->pc = RC_ADDR(0x000150d4u);
    rc_step(c, m, 10);
    goto L_1511E;

L_150D6:
    /* 000150d6   4  addq.w #2,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000150d6u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_150DA:
    /* 000150da   4  subq.w #2,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000150dau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_150DE:
    /* 000150de   2  bra 0001511e */
    c->pc = RC_ADDR(0x000150deu);
    rc_step(c, m, 10);
    goto L_1511E;

L_150E0:
    /* 000150e0   4  subq.w #2,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000150e0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_150E4:
    /* 000150e4   4  addq.w #2,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000150e4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_150E8:
    /* 000150e8   2  bra 0001511e */
    c->pc = RC_ADDR(0x000150e8u);
    rc_step(c, m, 10);
    goto L_1511E;

L_150EA:
    /* 000150ea   4  subq.w #2,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000150eau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_150EE:
    /* 000150ee   4  subq.w #2,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000150eeu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_150F2:
    /* 000150f2   2  bra 0001511e */
    c->pc = RC_ADDR(0x000150f2u);
    rc_step(c, m, 10);
    goto L_1511E;

L_150F4:
    /* 000150f4   2  bra 0001511e */
    c->pc = RC_ADDR(0x000150f4u);
    rc_step(c, m, 10);
    goto L_1511E;

L_1510C:
    /* 0001510c   6  cmp.l #b,D0 */
    c->pc = RC_ADDR(0x0001510cu);
    rc_step(c, m, 14);
    t0 = 0x0000000bu;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_15112:
    /* 00015112   2  bcc 000150f4 */
    c->pc = RC_ADDR(0x00015112u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) { rc_tick(); goto L_150F4; }

L_15114:
    /* 00015114   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015114u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15116:
    /* 00015116   4  move.w (000150f6),D0 */
    c->pc = RC_ADDR(0x00015116u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x000150f6u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1511A:
    /* 0001511a   4  jmp (0001511c) */
    c->pc = RC_ADDR(0x0001511au);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0001511cu) + t4);
    c->pc = t3;
    return;

L_1511E:
    /* 0001511e   2  bra 00015128 */
    c->pc = RC_ADDR(0x0001511eu);
    rc_step(c, m, 10);
    goto L_15128;

L_15120:
    /* 00015120   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015120u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15124:
    /* 00015124   4  subq.b #1,(c,A0) */
    c->pc = RC_ADDR(0x00015124u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xcu);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_15128:
    /* 00015128   4  clr.w (ffffffe2,A5) */
    c->pc = RC_ADDR(0x00015128u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x1eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1512C:
    /* 0001512c   4  move.w (ffffffea,A5),-(A7) */
    c->pc = RC_ADDR(0x0001512cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15130:
    /* 00015130   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00015130u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15134:
    /* 00015134   4  add.w #12,D0 */
    c->pc = RC_ADDR(0x00015134u);
    rc_step(c, m, 10);
    t0 = 0x00000012u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15138:
    /* 00015138   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00015138u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1513A:
    /* 0001513a   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001513au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1513E:
    /* 0001513e   4  add.w #12,D0 */
    c->pc = RC_ADDR(0x0001513eu);
    rc_step(c, m, 10);
    t0 = 0x00000012u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15142:
    /* 00015142   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00015142u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15144:
    /* 00015144   4  jsr (000155de) */
    c->pc = RC_ADDR(0x00015144u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00015148u));
    rc_depth++;
    c->pc = RC_ADDR(0x000155deu);
    return;

L_15148:
    /* 00015148   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00015148u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1514A:
    /* 0001514a   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001514au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1514C:
    /* 0001514c   2  beq 00015168 */
    c->pc = RC_ADDR(0x0001514cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15168;

L_1514E:
    /* 0001514e   6  move.w #1,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x0001514eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15154:
    /* 00015154   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015154u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15158:
    /* 00015158   6  move.w (6,A0),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00015158u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x6u));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1515E:
    /* 0001515e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001515eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15162:
    /* 00015162   6  move.w (4,A0),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00015162u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x4u));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15168:
    /* 00015168   4  clr.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x00015168u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x14u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1516C:
    /* 0001516c   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x0001516cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15170:
    /* 00015170   2  bra 000151dc */
    c->pc = RC_ADDR(0x00015170u);
    rc_step(c, m, 10);
    goto L_151DC;

L_15172:
    /* 00015172   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00015172u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15176:
    /* 00015176   4  cmp.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00015176u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1517A:
    /* 0001517a   2  beq 000151d8 */
    c->pc = RC_ADDR(0x0001517au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_151D8;

L_1517C:
    /* 0001517c   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0001517cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15180:
    /* 00015180   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00015180u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_15184:
    /* 00015184   4  lea (fffffb37,A4),A0 */
    c->pc = RC_ADDR(0x00015184u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4c9u);

L_15188:
    /* 00015188   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015188u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_1518C:
    /* 0001518c   2  beq 000151d8 */
    c->pc = RC_ADDR(0x0001518cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_151D8;

L_1518E:
    /* 0001518e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001518eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15192:
    /* 00015192   4  move.w (2,A0),-(A7) */
    c->pc = RC_ADDR(0x00015192u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15196:
    /* 00015196   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015196u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1519A:
    /* 0001519a   2  move.w (A0),-(A7) */
    c->pc = RC_ADDR(0x0001519au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, c->a[0]);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1519C:
    /* 0001519c   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0001519cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_151A0:
    /* 000151a0   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x000151a0u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_151A4:
    /* 000151a4   4  lea (fffffb26,A4),A0 */
    c->pc = RC_ADDR(0x000151a4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4dau);

L_151A8:
    /* 000151a8   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000151a8u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_151AC:
    /* 000151ac   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000151acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_151B0:
    /* 000151b0   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x000151b0u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_151B4:
    /* 000151b4   4  lea (fffffb24,A4),A0 */
    c->pc = RC_ADDR(0x000151b4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4dcu);

L_151B8:
    /* 000151b8   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000151b8u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_151BC:
    /* 000151bc   4  move.w #1e,-(A7) */
    c->pc = RC_ADDR(0x000151bcu);
    rc_step(c, m, 12);
    t0 = 0x0000001eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_151C0:
    /* 000151c0   4  move.w #23,-(A7) */
    c->pc = RC_ADDR(0x000151c0u);
    rc_step(c, m, 12);
    t0 = 0x00000023u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_151C4:
    /* 000151c4   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x000151c4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_151C8:
    /* 000151c8   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x000151c8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_151CC:
    /* 000151cc   4  jsr (0001554a) */
    c->pc = RC_ADDR(0x000151ccu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000151d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001554au);
    return;

L_151D0:
    /* 000151d0   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x000151d0u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x10u);

L_151D4:
    /* 000151d4   4  or.w D0,(ffffffec,A5) */
    c->pc = RC_ADDR(0x000151d4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x14u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_151D8:
    /* 000151d8   4  addq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000151d8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_151DC:
    /* 000151dc   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000151dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_151E0:
    /* 000151e0   4  cmp.w (6b8,A4),D0 */
    c->pc = RC_ADDR(0x000151e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6b8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_151E4:
    /* 000151e4   2  blt 00015172 */
    c->pc = RC_ADDR(0x000151e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_15172; }

L_151E6:
    /* 000151e6   4  tst.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x000151e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_151EA:
    /* 000151ea   4  beq 0001527a */
    c->pc = RC_ADDR(0x000151eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1527A;

L_151EE:
    /* 000151ee   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000151eeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_151F2:
    /* 000151f2   6  move.b #1,(c,A0) */
    c->pc = RC_ADDR(0x000151f2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr8(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_151F8:
    /* 000151f8   6  btst #0,(ffffffed,A5) */
    c->pc = RC_ADDR(0x000151f8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x13u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_151FE:
    /* 000151fe   2  beq 00015226 */
    c->pc = RC_ADDR(0x000151feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15226;

L_15200:
    /* 00015200   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015200u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15204:
    /* 00015204   6  move.w (4,A0),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00015204u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x4u));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1520A:
    /* 0001520a   6  andi.w #c,(ffffffea,A5) */
    c->pc = RC_ADDR(0x0001520au);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x16u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000000cu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_15210:
    /* 00015210   4  tst.w (ffffffea,A5) */
    c->pc = RC_ADDR(0x00015210u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_set_nzvc(c, t0, RC_W);

L_15214:
    /* 00015214   2  bne 00015224 */
    c->pc = RC_ADDR(0x00015214u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_15224;

L_15216:
    /* 00015216   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00015216u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1521A:
    /* 0001521a   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x0001521au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1521E:
    /* 0001521e   4  jsr (00014c54) */
    c->pc = RC_ADDR(0x0001521eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00015222u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014c54u);
    return;

L_15222:
    /* 00015222   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00015222u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_15224:
    /* 00015224   2  bra 00015238 */
    c->pc = RC_ADDR(0x00015224u);
    rc_step(c, m, 10);
    goto L_15238;

L_15226:
    /* 00015226   4  tst.w (ffffffe2,A5) */
    c->pc = RC_ADDR(0x00015226u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1eu));
    rc_set_nzvc(c, t0, RC_W);

L_1522A:
    /* 0001522a   2  bne 00015238 */
    c->pc = RC_ADDR(0x0001522au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_15238;

L_1522C:
    /* 0001522c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001522cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15230:
    /* 00015230   4  movea.l (fffffffc,A5),A1 */
    c->pc = RC_ADDR(0x00015230u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_15234:
    /* 00015234   4  move.w (A0),(4,A1) */
    c->pc = RC_ADDR(0x00015234u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[1] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15238:
    /* 00015238   6  btst #1,(ffffffed,A5) */
    c->pc = RC_ADDR(0x00015238u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x13u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1523E:
    /* 0001523e   2  beq 00015266 */
    c->pc = RC_ADDR(0x0001523eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15266;

L_15240:
    /* 00015240   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015240u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15244:
    /* 00015244   6  move.w (6,A0),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00015244u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x6u));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1524A:
    /* 0001524a   6  andi.w #3,(ffffffea,A5) */
    c->pc = RC_ADDR(0x0001524au);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x16u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x00000003u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_15250:
    /* 00015250   4  tst.w (ffffffea,A5) */
    c->pc = RC_ADDR(0x00015250u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_set_nzvc(c, t0, RC_W);

L_15254:
    /* 00015254   2  bne 00015264 */
    c->pc = RC_ADDR(0x00015254u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_15264;

L_15256:
    /* 00015256   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00015256u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1525A:
    /* 0001525a   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x0001525au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1525E:
    /* 0001525e   4  jsr (00014cb0) */
    c->pc = RC_ADDR(0x0001525eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00015262u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014cb0u);
    return;

L_15262:
    /* 00015262   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00015262u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_15264:
    /* 00015264   2  bra 0001527a */
    c->pc = RC_ADDR(0x00015264u);
    rc_step(c, m, 10);
    goto L_1527A;

L_15266:
    /* 00015266   4  tst.w (ffffffe2,A5) */
    c->pc = RC_ADDR(0x00015266u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1eu));
    rc_set_nzvc(c, t0, RC_W);

L_1526A:
    /* 0001526a   2  bne 0001527a */
    c->pc = RC_ADDR(0x0001526au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1527A;

L_1526C:
    /* 0001526c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001526cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15270:
    /* 00015270   4  movea.l (fffffffc,A5),A1 */
    c->pc = RC_ADDR(0x00015270u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_15274:
    /* 00015274   6  move.w (2,A0),(6,A1) */
    c->pc = RC_ADDR(0x00015274u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_wr16(c, m, (c->a[1] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1527A:
    /* 0001527a   4  tst.w (ffffffe2,A5) */
    c->pc = RC_ADDR(0x0001527au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1eu));
    rc_set_nzvc(c, t0, RC_W);

L_1527E:
    /* 0001527e   2  bne 000152a0 */
    c->pc = RC_ADDR(0x0001527eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_152A0;

L_15280:
    /* 00015280   4  tst.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x00015280u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_15284:
    /* 00015284   2  bne 000152a0 */
    c->pc = RC_ADDR(0x00015284u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_152A0;

L_15286:
    /* 00015286   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015286u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1528A:
    /* 0001528a   4  movea.l (fffffffc,A5),A1 */
    c->pc = RC_ADDR(0x0001528au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_1528E:
    /* 0001528e   4  move.w (A0),(4,A1) */
    c->pc = RC_ADDR(0x0001528eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[1] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15292:
    /* 00015292   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015292u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15296:
    /* 00015296   4  movea.l (fffffffc,A5),A1 */
    c->pc = RC_ADDR(0x00015296u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_1529A:
    /* 0001529a   6  move.w (2,A0),(6,A1) */
    c->pc = RC_ADDR(0x0001529au);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_wr16(c, m, (c->a[1] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_152A0:
    /* 000152a0   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000152a0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_152A4:
    /* 000152a4   4  move.b (10,A0),D0 */
    c->pc = RC_ADDR(0x000152a4u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x10u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_152A8:
    /* 000152a8   2  ext.w D0 */
    c->pc = RC_ADDR(0x000152a8u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_152AA:
    /* 000152aa   4  cmp.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x000152aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_152AE:
    /* 000152ae   4  beq 0001533a */
    c->pc = RC_ADDR(0x000152aeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1533A;

L_152B2:
    /* 000152b2   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000152b2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_152B6:
    /* 000152b6   4  clr.b (e,A0) */
    c->pc = RC_ADDR(0x000152b6u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[0] + 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_152BA:
    /* 000152ba   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000152bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_152BE:
    /* 000152be   6  move.b #1,(11,A0) */
    c->pc = RC_ADDR(0x000152beu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr8(c, m, (c->a[0] + 0x11u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_152C4:
    /* 000152c4   4  move.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x000152c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_152C8:
    /* 000152c8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000152c8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_152CA:
    /* 000152ca   2  bra 00015328 */
    c->pc = RC_ADDR(0x000152cau);
    rc_step(c, m, 10);
    goto L_15328;

L_152CC:
    /* 000152cc   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x000152ccu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_152D0:
    /* 000152d0   2  bra 0001533a */
    c->pc = RC_ADDR(0x000152d0u);
    rc_step(c, m, 10);
    goto L_1533A;

L_152D2:
    /* 000152d2   6  move.w #1c,(ffffffee,A5) */
    c->pc = RC_ADDR(0x000152d2u);
    rc_step(c, m, 16);
    t0 = 0x0000001cu;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_152D8:
    /* 000152d8   2  bra 0001533a */
    c->pc = RC_ADDR(0x000152d8u);
    rc_step(c, m, 10);
    goto L_1533A;

L_152DA:
    /* 000152da   6  move.w #10,(ffffffee,A5) */
    c->pc = RC_ADDR(0x000152dau);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_152E0:
    /* 000152e0   2  bra 0001533a */
    c->pc = RC_ADDR(0x000152e0u);
    rc_step(c, m, 10);
    goto L_1533A;

L_152E2:
    /* 000152e2   6  move.w #4,(ffffffee,A5) */
    c->pc = RC_ADDR(0x000152e2u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_152E8:
    /* 000152e8   2  bra 0001533a */
    c->pc = RC_ADDR(0x000152e8u);
    rc_step(c, m, 10);
    goto L_1533A;

L_152EA:
    /* 000152ea   6  move.w #14,(ffffffee,A5) */
    c->pc = RC_ADDR(0x000152eau);
    rc_step(c, m, 16);
    t0 = 0x00000014u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_152F0:
    /* 000152f0   2  bra 0001533a */
    c->pc = RC_ADDR(0x000152f0u);
    rc_step(c, m, 10);
    goto L_1533A;

L_152F2:
    /* 000152f2   6  move.w #8,(ffffffee,A5) */
    c->pc = RC_ADDR(0x000152f2u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_152F8:
    /* 000152f8   2  bra 0001533a */
    c->pc = RC_ADDR(0x000152f8u);
    rc_step(c, m, 10);
    goto L_1533A;

L_152FA:
    /* 000152fa   6  move.w #18,(ffffffee,A5) */
    c->pc = RC_ADDR(0x000152fau);
    rc_step(c, m, 16);
    t0 = 0x00000018u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15300:
    /* 00015300   2  bra 0001533a */
    c->pc = RC_ADDR(0x00015300u);
    rc_step(c, m, 10);
    goto L_1533A;

L_15302:
    /* 00015302   6  move.w #c,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00015302u);
    rc_step(c, m, 16);
    t0 = 0x0000000cu;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15308:
    /* 00015308   2  bra 0001533a */
    c->pc = RC_ADDR(0x00015308u);
    rc_step(c, m, 10);
    goto L_1533A;

L_1530A:
    /* 0001530a   6  andi.w #fc,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001530au);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x000000fcu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_15310:
    /* 00015310   2  bra 0001533a */
    c->pc = RC_ADDR(0x00015310u);
    rc_step(c, m, 10);
    goto L_1533A;

L_15328:
    /* 00015328   6  cmp.l #b,D0 */
    c->pc = RC_ADDR(0x00015328u);
    rc_step(c, m, 14);
    t0 = 0x0000000bu;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1532E:
    /* 0001532e   2  bcc 0001530a */
    c->pc = RC_ADDR(0x0001532eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) { rc_tick(); goto L_1530A; }

L_15330:
    /* 00015330   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015330u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15332:
    /* 00015332   4  move.w (00015312),D0 */
    c->pc = RC_ADDR(0x00015332u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x00015312u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15336:
    /* 00015336   4  jmp (00015338) */
    c->pc = RC_ADDR(0x00015336u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x00015338u) + t4);
    c->pc = t3;
    return;

L_1533A:
    /* 0001533a   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001533au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1533E:
    /* 0001533e   4  tst.b (c,A0) */
    c->pc = RC_ADDR(0x0001533eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0xcu));
    rc_set_nzvc(c, t0, RC_B);

L_15342:
    /* 00015342   2  bne 00015384 */
    c->pc = RC_ADDR(0x00015342u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_15384;

L_15344:
    /* 00015344   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015344u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15348:
    /* 00015348   4  movea.l (fffffffc,A5),A1 */
    c->pc = RC_ADDR(0x00015348u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_1534C:
    /* 0001534c   4  move.b (11,A1),D0 */
    c->pc = RC_ADDR(0x0001534cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x11u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_15350:
    /* 00015350   4  add.b D0,(e,A0) */
    c->pc = RC_ADDR(0x00015350u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xeu);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_B);
    rc_flags_add(c, RC_B, t1, rc_d_get(c, 0, RC_B), t2, 0);
    rc_wr8(c, m, t3, t2);

L_15354:
    /* 00015354   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015354u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15358:
    /* 00015358   4  move.b (11,A0),D0 */
    c->pc = RC_ADDR(0x00015358u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x11u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1535C:
    /* 0001535c   2  ext.w D0 */
    c->pc = RC_ADDR(0x0001535cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_1535E:
    /* 0001535e   4  add.w D0,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001535eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_15362:
    /* 00015362   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015362u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15366:
    /* 00015366   4  tst.b (e,A0) */
    c->pc = RC_ADDR(0x00015366u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0xeu));
    rc_set_nzvc(c, t0, RC_B);

L_1536A:
    /* 0001536a   2  beq 00015378 */
    c->pc = RC_ADDR(0x0001536au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15378;

L_1536C:
    /* 0001536c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001536cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15370:
    /* 00015370   6  cmpi.b #2,(e,A0) */
    c->pc = RC_ADDR(0x00015370u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[0] + 0xeu));
    rc_cmp(c, RC_B, t0, 0x00000002u);

L_15376:
    /* 00015376   2  bne 00015384 */
    c->pc = RC_ADDR(0x00015376u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_15384;

L_15378:
    /* 00015378   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015378u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1537C:
    /* 0001537c   4  movea.l (fffffffc,A5),A1 */
    c->pc = RC_ADDR(0x0001537cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_15380:
    /* 00015380   4  neg.b (11,A0) */
    c->pc = RC_ADDR(0x00015380u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0x11u);
    t1 = rc_rd8(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_B, 0u, t1, t2, 0);
    rc_wr8(c, m, t3, t2);

L_15384:
    /* 00015384   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015384u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15388:
    /* 00015388   6  move.b (ffffffef,A5),(d,A0) */
    c->pc = RC_ADDR(0x00015388u);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[5] - 0x11u));
    rc_wr8(c, m, (c->a[0] + 0xdu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1538E:
    /* 0001538e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001538eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15392:
    /* 00015392   6  move.b (ffffffeb,A5),(10,A0) */
    c->pc = RC_ADDR(0x00015392u);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[5] - 0x15u));
    rc_wr8(c, m, (c->a[0] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_15398:
    /* 00015398   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015398u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1539C:
    /* 0001539c   4  move.w (fffffffa,A5),(A0) */
    c->pc = RC_ADDR(0x0001539cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_153A0:
    /* 000153a0   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000153a0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_153A4:
    /* 000153a4   6  move.w (fffffff8,A5),(2,A0) */
    c->pc = RC_ADDR(0x000153a4u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_wr16(c, m, (c->a[0] + 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_153AA:
    /* 000153aa   4  addq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000153aau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_153AE:
    /* 000153ae   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x000153aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_153B2:
    /* 000153b2   4  cmp.w (6b8,A4),D0 */
    c->pc = RC_ADDR(0x000153b2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6b8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_153B6:
    /* 000153b6   4  blt 00014f4c */
    c->pc = RC_ADDR(0x000153b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_14F4C; }

L_153BA:
    /* 000153ba   4  tst.w (ffffffe4,A5) */
    c->pc = RC_ADDR(0x000153bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1cu));
    rc_set_nzvc(c, t0, RC_W);

L_153BE:
    /* 000153be   2  beq 000153cc */
    c->pc = RC_ADDR(0x000153beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_153CC;

L_153C0:
    /* 000153c0   4  jsr (00018706) */
    c->pc = RC_ADDR(0x000153c0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000153c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018706u);
    return;

L_153C4:
    /* 000153c4   6  move.w #1,(6ac,A4) */
    c->pc = RC_ADDR(0x000153c4u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x6acu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_153CA:
    /* 000153ca   2  bra 000153d0 */
    c->pc = RC_ADDR(0x000153cau);
    rc_step(c, m, 10);
    goto L_153D0;

L_153CC:
    /* 000153cc   4  jsr (0001874c) */
    c->pc = RC_ADDR(0x000153ccu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000153d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001874cu);
    return;

L_153D0:
    /* 000153d0   4  bra 00014e64 */
    c->pc = RC_ADDR(0x000153d0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_14E64;

}
