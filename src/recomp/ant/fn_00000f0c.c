/* fn_00000f0c - 1088 byte(s), 313 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00000f0c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00000f0cu): goto L_F0C;
    case RC_ADDR(0x00000f10u): goto L_F10;
    case RC_ADDR(0x00000f16u): goto L_F16;
    case RC_ADDR(0x00000f1au): goto L_F1A;
    case RC_ADDR(0x00000f1eu): goto L_F1E;
    case RC_ADDR(0x00000f22u): goto L_F22;
    case RC_ADDR(0x00000f24u): goto L_F24;
    case RC_ADDR(0x00000f28u): goto L_F28;
    case RC_ADDR(0x00000f2cu): goto L_F2C;
    case RC_ADDR(0x00000f30u): goto L_F30;
    case RC_ADDR(0x00000f32u): goto L_F32;
    case RC_ADDR(0x00000f36u): goto L_F36;
    case RC_ADDR(0x00000f3au): goto L_F3A;
    case RC_ADDR(0x00000f3eu): goto L_F3E;
    case RC_ADDR(0x00000f42u): goto L_F42;
    case RC_ADDR(0x00000f44u): goto L_F44;
    case RC_ADDR(0x00000f48u): goto L_F48;
    case RC_ADDR(0x00000f4cu): goto L_F4C;
    case RC_ADDR(0x00000f50u): goto L_F50;
    case RC_ADDR(0x00000f54u): goto L_F54;
    case RC_ADDR(0x00000f58u): goto L_F58;
    case RC_ADDR(0x00000f5cu): goto L_F5C;
    case RC_ADDR(0x00000f60u): goto L_F60;
    case RC_ADDR(0x00000f62u): goto L_F62;
    case RC_ADDR(0x00000f66u): goto L_F66;
    case RC_ADDR(0x00000f6au): goto L_F6A;
    case RC_ADDR(0x00000f6eu): goto L_F6E;
    case RC_ADDR(0x00000f72u): goto L_F72;
    case RC_ADDR(0x00000f76u): goto L_F76;
    case RC_ADDR(0x00000f7au): goto L_F7A;
    case RC_ADDR(0x00000f7eu): goto L_F7E;
    case RC_ADDR(0x00000f82u): goto L_F82;
    case RC_ADDR(0x00000f86u): goto L_F86;
    case RC_ADDR(0x00000f8au): goto L_F8A;
    case RC_ADDR(0x00000f8eu): goto L_F8E;
    case RC_ADDR(0x00000f92u): goto L_F92;
    case RC_ADDR(0x00000f94u): goto L_F94;
    case RC_ADDR(0x00000f98u): goto L_F98;
    case RC_ADDR(0x00000f9cu): goto L_F9C;
    case RC_ADDR(0x00000f9eu): goto L_F9E;
    case RC_ADDR(0x00000fa2u): goto L_FA2;
    case RC_ADDR(0x00000fa6u): goto L_FA6;
    case RC_ADDR(0x00000faau): goto L_FAA;
    case RC_ADDR(0x00000faeu): goto L_FAE;
    case RC_ADDR(0x00000fb0u): goto L_FB0;
    case RC_ADDR(0x00000fb6u): goto L_FB6;
    case RC_ADDR(0x00000fbau): goto L_FBA;
    case RC_ADDR(0x00000fbeu): goto L_FBE;
    case RC_ADDR(0x00000fc2u): goto L_FC2;
    case RC_ADDR(0x00000fc6u): goto L_FC6;
    case RC_ADDR(0x00000fc8u): goto L_FC8;
    case RC_ADDR(0x00000fceu): goto L_FCE;
    case RC_ADDR(0x00000fd2u): goto L_FD2;
    case RC_ADDR(0x00000fd6u): goto L_FD6;
    case RC_ADDR(0x00000fd8u): goto L_FD8;
    case RC_ADDR(0x00000fdcu): goto L_FDC;
    case RC_ADDR(0x00000fdeu): goto L_FDE;
    case RC_ADDR(0x00000fe4u): goto L_FE4;
    case RC_ADDR(0x00000fe8u): goto L_FE8;
    case RC_ADDR(0x00000fecu): goto L_FEC;
    case RC_ADDR(0x00000feeu): goto L_FEE;
    case RC_ADDR(0x00000ff2u): goto L_FF2;
    case RC_ADDR(0x00000ff6u): goto L_FF6;
    case RC_ADDR(0x00000ff8u): goto L_FF8;
    case RC_ADDR(0x00000ffeu): goto L_FFE;
    case RC_ADDR(0x00001002u): goto L_1002;
    case RC_ADDR(0x00001006u): goto L_1006;
    case RC_ADDR(0x00001008u): goto L_1008;
    case RC_ADDR(0x0000100cu): goto L_100C;
    case RC_ADDR(0x00001010u): goto L_1010;
    case RC_ADDR(0x00001014u): goto L_1014;
    case RC_ADDR(0x0000101au): goto L_101A;
    case RC_ADDR(0x00001020u): goto L_1020;
    case RC_ADDR(0x00001024u): goto L_1024;
    case RC_ADDR(0x00001028u): goto L_1028;
    case RC_ADDR(0x0000102au): goto L_102A;
    case RC_ADDR(0x0000102cu): goto L_102C;
    case RC_ADDR(0x0000102eu): goto L_102E;
    case RC_ADDR(0x00001030u): goto L_1030;
    case RC_ADDR(0x00001034u): goto L_1034;
    case RC_ADDR(0x00001036u): goto L_1036;
    case RC_ADDR(0x0000103au): goto L_103A;
    case RC_ADDR(0x0000103cu): goto L_103C;
    case RC_ADDR(0x00001040u): goto L_1040;
    case RC_ADDR(0x00001044u): goto L_1044;
    case RC_ADDR(0x00001046u): goto L_1046;
    case RC_ADDR(0x0000104au): goto L_104A;
    case RC_ADDR(0x0000104cu): goto L_104C;
    case RC_ADDR(0x00001050u): goto L_1050;
    case RC_ADDR(0x00001056u): goto L_1056;
    case RC_ADDR(0x0000105au): goto L_105A;
    case RC_ADDR(0x0000105eu): goto L_105E;
    case RC_ADDR(0x00001062u): goto L_1062;
    case RC_ADDR(0x00001066u): goto L_1066;
    case RC_ADDR(0x0000106au): goto L_106A;
    case RC_ADDR(0x0000106cu): goto L_106C;
    case RC_ADDR(0x0000106eu): goto L_106E;
    case RC_ADDR(0x00001072u): goto L_1072;
    case RC_ADDR(0x00001076u): goto L_1076;
    case RC_ADDR(0x00001078u): goto L_1078;
    case RC_ADDR(0x0000107cu): goto L_107C;
    case RC_ADDR(0x00001080u): goto L_1080;
    case RC_ADDR(0x00001084u): goto L_1084;
    case RC_ADDR(0x00001088u): goto L_1088;
    case RC_ADDR(0x0000108au): goto L_108A;
    case RC_ADDR(0x0000108cu): goto L_108C;
    case RC_ADDR(0x00001090u): goto L_1090;
    case RC_ADDR(0x00001094u): goto L_1094;
    case RC_ADDR(0x00001096u): goto L_1096;
    case RC_ADDR(0x00001098u): goto L_1098;
    case RC_ADDR(0x0000109cu): goto L_109C;
    case RC_ADDR(0x000010a0u): goto L_10A0;
    case RC_ADDR(0x000010a4u): goto L_10A4;
    case RC_ADDR(0x000010a8u): goto L_10A8;
    case RC_ADDR(0x000010acu): goto L_10AC;
    case RC_ADDR(0x000010aeu): goto L_10AE;
    case RC_ADDR(0x000010b0u): goto L_10B0;
    case RC_ADDR(0x000010b4u): goto L_10B4;
    case RC_ADDR(0x000010b8u): goto L_10B8;
    case RC_ADDR(0x000010bcu): goto L_10BC;
    case RC_ADDR(0x000010c0u): goto L_10C0;
    case RC_ADDR(0x000010c4u): goto L_10C4;
    case RC_ADDR(0x000010c6u): goto L_10C6;
    case RC_ADDR(0x000010c8u): goto L_10C8;
    case RC_ADDR(0x000010ccu): goto L_10CC;
    case RC_ADDR(0x000010d0u): goto L_10D0;
    case RC_ADDR(0x000010d2u): goto L_10D2;
    case RC_ADDR(0x000010d6u): goto L_10D6;
    case RC_ADDR(0x000010dau): goto L_10DA;
    case RC_ADDR(0x000010deu): goto L_10DE;
    case RC_ADDR(0x000010e2u): goto L_10E2;
    case RC_ADDR(0x000010e4u): goto L_10E4;
    case RC_ADDR(0x000010e6u): goto L_10E6;
    case RC_ADDR(0x000010eau): goto L_10EA;
    case RC_ADDR(0x000010eeu): goto L_10EE;
    case RC_ADDR(0x000010f0u): goto L_10F0;
    case RC_ADDR(0x000010f2u): goto L_10F2;
    case RC_ADDR(0x000010f6u): goto L_10F6;
    case RC_ADDR(0x000010fau): goto L_10FA;
    case RC_ADDR(0x000010feu): goto L_10FE;
    case RC_ADDR(0x00001102u): goto L_1102;
    case RC_ADDR(0x00001106u): goto L_1106;
    case RC_ADDR(0x00001108u): goto L_1108;
    case RC_ADDR(0x0000110au): goto L_110A;
    case RC_ADDR(0x0000110eu): goto L_110E;
    case RC_ADDR(0x00001112u): goto L_1112;
    case RC_ADDR(0x00001114u): goto L_1114;
    case RC_ADDR(0x00001116u): goto L_1116;
    case RC_ADDR(0x0000111au): goto L_111A;
    case RC_ADDR(0x0000111eu): goto L_111E;
    case RC_ADDR(0x00001124u): goto L_1124;
    case RC_ADDR(0x00001126u): goto L_1126;
    case RC_ADDR(0x0000112cu): goto L_112C;
    case RC_ADDR(0x0000112eu): goto L_112E;
    case RC_ADDR(0x00001132u): goto L_1132;
    case RC_ADDR(0x00001134u): goto L_1134;
    case RC_ADDR(0x00001138u): goto L_1138;
    case RC_ADDR(0x0000113au): goto L_113A;
    case RC_ADDR(0x0000113eu): goto L_113E;
    case RC_ADDR(0x00001142u): goto L_1142;
    case RC_ADDR(0x00001146u): goto L_1146;
    case RC_ADDR(0x0000114au): goto L_114A;
    case RC_ADDR(0x0000114cu): goto L_114C;
    case RC_ADDR(0x00001150u): goto L_1150;
    case RC_ADDR(0x00001156u): goto L_1156;
    case RC_ADDR(0x0000115au): goto L_115A;
    case RC_ADDR(0x0000115eu): goto L_115E;
    case RC_ADDR(0x00001162u): goto L_1162;
    case RC_ADDR(0x00001166u): goto L_1166;
    case RC_ADDR(0x00001168u): goto L_1168;
    case RC_ADDR(0x0000116cu): goto L_116C;
    case RC_ADDR(0x00001172u): goto L_1172;
    case RC_ADDR(0x00001176u): goto L_1176;
    case RC_ADDR(0x0000117au): goto L_117A;
    case RC_ADDR(0x0000117eu): goto L_117E;
    case RC_ADDR(0x00001180u): goto L_1180;
    case RC_ADDR(0x00001184u): goto L_1184;
    case RC_ADDR(0x00001188u): goto L_1188;
    case RC_ADDR(0x0000118cu): goto L_118C;
    case RC_ADDR(0x00001190u): goto L_1190;
    case RC_ADDR(0x00001194u): goto L_1194;
    case RC_ADDR(0x00001198u): goto L_1198;
    case RC_ADDR(0x0000119au): goto L_119A;
    case RC_ADDR(0x0000119eu): goto L_119E;
    case RC_ADDR(0x000011a2u): goto L_11A2;
    case RC_ADDR(0x000011a4u): goto L_11A4;
    case RC_ADDR(0x000011a8u): goto L_11A8;
    case RC_ADDR(0x000011acu): goto L_11AC;
    case RC_ADDR(0x000011b0u): goto L_11B0;
    case RC_ADDR(0x000011b2u): goto L_11B2;
    case RC_ADDR(0x000011b6u): goto L_11B6;
    case RC_ADDR(0x000011b8u): goto L_11B8;
    case RC_ADDR(0x000011bcu): goto L_11BC;
    case RC_ADDR(0x000011c0u): goto L_11C0;
    case RC_ADDR(0x000011c4u): goto L_11C4;
    case RC_ADDR(0x000011c6u): goto L_11C6;
    case RC_ADDR(0x000011cau): goto L_11CA;
    case RC_ADDR(0x000011ceu): goto L_11CE;
    case RC_ADDR(0x000011d0u): goto L_11D0;
    case RC_ADDR(0x000011d4u): goto L_11D4;
    case RC_ADDR(0x000011d8u): goto L_11D8;
    case RC_ADDR(0x000011dcu): goto L_11DC;
    case RC_ADDR(0x000011deu): goto L_11DE;
    case RC_ADDR(0x000011e2u): goto L_11E2;
    case RC_ADDR(0x000011e6u): goto L_11E6;
    case RC_ADDR(0x000011eau): goto L_11EA;
    case RC_ADDR(0x000011ecu): goto L_11EC;
    case RC_ADDR(0x000011f0u): goto L_11F0;
    case RC_ADDR(0x000011f4u): goto L_11F4;
    case RC_ADDR(0x000011f8u): goto L_11F8;
    case RC_ADDR(0x000011fau): goto L_11FA;
    case RC_ADDR(0x000011feu): goto L_11FE;
    case RC_ADDR(0x00001200u): goto L_1200;
    case RC_ADDR(0x00001206u): goto L_1206;
    case RC_ADDR(0x00001208u): goto L_1208;
    case RC_ADDR(0x0000120cu): goto L_120C;
    case RC_ADDR(0x00001210u): goto L_1210;
    case RC_ADDR(0x00001212u): goto L_1212;
    case RC_ADDR(0x00001216u): goto L_1216;
    case RC_ADDR(0x0000121au): goto L_121A;
    case RC_ADDR(0x0000121cu): goto L_121C;
    case RC_ADDR(0x00001220u): goto L_1220;
    case RC_ADDR(0x00001224u): goto L_1224;
    case RC_ADDR(0x00001226u): goto L_1226;
    case RC_ADDR(0x0000122au): goto L_122A;
    case RC_ADDR(0x0000122eu): goto L_122E;
    case RC_ADDR(0x00001232u): goto L_1232;
    case RC_ADDR(0x00001234u): goto L_1234;
    case RC_ADDR(0x00001236u): goto L_1236;
    case RC_ADDR(0x0000123au): goto L_123A;
    case RC_ADDR(0x0000123eu): goto L_123E;
    case RC_ADDR(0x00001240u): goto L_1240;
    case RC_ADDR(0x00001244u): goto L_1244;
    case RC_ADDR(0x00001248u): goto L_1248;
    case RC_ADDR(0x0000124cu): goto L_124C;
    case RC_ADDR(0x0000124eu): goto L_124E;
    case RC_ADDR(0x00001252u): goto L_1252;
    case RC_ADDR(0x00001254u): goto L_1254;
    case RC_ADDR(0x00001258u): goto L_1258;
    case RC_ADDR(0x0000125cu): goto L_125C;
    case RC_ADDR(0x0000125eu): goto L_125E;
    case RC_ADDR(0x00001262u): goto L_1262;
    case RC_ADDR(0x00001266u): goto L_1266;
    case RC_ADDR(0x0000126au): goto L_126A;
    case RC_ADDR(0x0000126cu): goto L_126C;
    case RC_ADDR(0x00001270u): goto L_1270;
    case RC_ADDR(0x00001274u): goto L_1274;
    case RC_ADDR(0x00001278u): goto L_1278;
    case RC_ADDR(0x0000127au): goto L_127A;
    case RC_ADDR(0x0000127eu): goto L_127E;
    case RC_ADDR(0x00001280u): goto L_1280;
    case RC_ADDR(0x00001284u): goto L_1284;
    case RC_ADDR(0x00001288u): goto L_1288;
    case RC_ADDR(0x0000128au): goto L_128A;
    case RC_ADDR(0x0000128eu): goto L_128E;
    case RC_ADDR(0x00001292u): goto L_1292;
    case RC_ADDR(0x00001296u): goto L_1296;
    case RC_ADDR(0x00001298u): goto L_1298;
    case RC_ADDR(0x0000129cu): goto L_129C;
    case RC_ADDR(0x0000129eu): goto L_129E;
    case RC_ADDR(0x000012a0u): goto L_12A0;
    case RC_ADDR(0x000012a4u): goto L_12A4;
    case RC_ADDR(0x000012a6u): goto L_12A6;
    case RC_ADDR(0x000012aau): goto L_12AA;
    case RC_ADDR(0x000012aeu): goto L_12AE;
    case RC_ADDR(0x000012b2u): goto L_12B2;
    case RC_ADDR(0x000012b4u): goto L_12B4;
    case RC_ADDR(0x000012b8u): goto L_12B8;
    case RC_ADDR(0x000012bcu): goto L_12BC;
    case RC_ADDR(0x000012c0u): goto L_12C0;
    case RC_ADDR(0x000012c2u): goto L_12C2;
    case RC_ADDR(0x000012c6u): goto L_12C6;
    case RC_ADDR(0x000012cau): goto L_12CA;
    case RC_ADDR(0x000012ceu): goto L_12CE;
    case RC_ADDR(0x000012d0u): goto L_12D0;
    case RC_ADDR(0x000012d4u): goto L_12D4;
    case RC_ADDR(0x000012d8u): goto L_12D8;
    case RC_ADDR(0x000012dcu): goto L_12DC;
    case RC_ADDR(0x000012deu): goto L_12DE;
    case RC_ADDR(0x000012e2u): goto L_12E2;
    case RC_ADDR(0x000012e4u): goto L_12E4;
    case RC_ADDR(0x000012e8u): goto L_12E8;
    case RC_ADDR(0x000012ecu): goto L_12EC;
    case RC_ADDR(0x000012f0u): goto L_12F0;
    case RC_ADDR(0x000012f2u): goto L_12F2;
    case RC_ADDR(0x000012f4u): goto L_12F4;
    case RC_ADDR(0x000012f8u): goto L_12F8;
    case RC_ADDR(0x000012fcu): goto L_12FC;
    case RC_ADDR(0x00001300u): goto L_1300;
    case RC_ADDR(0x00001302u): goto L_1302;
    case RC_ADDR(0x00001306u): goto L_1306;
    case RC_ADDR(0x00001308u): goto L_1308;
    case RC_ADDR(0x0000130au): goto L_130A;
    case RC_ADDR(0x0000130eu): goto L_130E;
    case RC_ADDR(0x00001310u): goto L_1310;
    case RC_ADDR(0x00001312u): goto L_1312;
    case RC_ADDR(0x00001316u): goto L_1316;
    case RC_ADDR(0x0000131au): goto L_131A;
    case RC_ADDR(0x0000131eu): goto L_131E;
    case RC_ADDR(0x00001322u): goto L_1322;
    case RC_ADDR(0x00001324u): goto L_1324;
    case RC_ADDR(0x00001328u): goto L_1328;
    case RC_ADDR(0x0000132au): goto L_132A;
    case RC_ADDR(0x0000132cu): goto L_132C;
    case RC_ADDR(0x00001330u): goto L_1330;
    case RC_ADDR(0x00001332u): goto L_1332;
    case RC_ADDR(0x00001336u): goto L_1336;
    case RC_ADDR(0x0000133au): goto L_133A;
    case RC_ADDR(0x0000133eu): goto L_133E;
    case RC_ADDR(0x00001342u): goto L_1342;
    case RC_ADDR(0x00001346u): goto L_1346;
    case RC_ADDR(0x00001348u): goto L_1348;
    case RC_ADDR(0x0000134au): goto L_134A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F0C:
    /* 00000f0c   4  link.w A5,#fffffbde */
    c->pc = RC_ADDR(0x00000f0cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x422u;

L_F10:
    /* 00000f10   6  subi.b #41,(d,A5) */
    c->pc = RC_ADDR(0x00000f10u);
    rc_step(c, m, 20);
    t3 = (c->a[5] + 0xdu);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x00000041u;
    rc_flags_sub(c, RC_B, t1, 0x00000041u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_F16:
    /* 00000f16   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x00000f16u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_F1A:
    /* 00000f1a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000f1au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F1E:
    /* 00000f1e   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x00000f1eu);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x00000f22u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023daau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022518u);
    return;

L_F22:
    /* 00000f22   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000f22u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F24:
    /* 00000f24   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00000f24u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F28:
    /* 00000f28   4  beq 00001348 */
    c->pc = RC_ADDR(0x00000f28u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1348;

L_F2C:
    /* 00000f2c   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00000f2cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_F30:
    /* 00000f30   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00000f30u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F32:
    /* 00000f32   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00000f32u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F36:
    /* 00000f36   4  jsr (ffff833e,A4) */
    c->pc = RC_ADDR(0x00000f36u);
    rc_step(c, m, 18);
    /* vector 138 */
    rc_push32(c, m, RC_ADDR(0x00000f3au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e34u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023526u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002352au);
    return;

L_F3A:
    /* 00000f3a   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00000f3au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_F3E:
    /* 00000f3e   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x00000f3eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_F42:
    /* 00000f42   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00000f42u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F44:
    /* 00000f44   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00000f44u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F48:
    /* 00000f48   4  jsr (ffff833e,A4) */
    c->pc = RC_ADDR(0x00000f48u);
    rc_step(c, m, 18);
    /* vector 138 */
    rc_push32(c, m, RC_ADDR(0x00000f4cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e34u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023526u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002352au);
    return;

L_F4C:
    /* 00000f4c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00000f4cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_F50:
    /* 00000f50   4  move.l D0,(ffffffe8,A5) */
    c->pc = RC_ADDR(0x00000f50u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F54:
    /* 00000f54   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00000f54u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_F58:
    /* 00000f58   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000f58u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F5C:
    /* 00000f5c   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00000f5cu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00000f60u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_F60:
    /* 00000f60   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000f60u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F62:
    /* 00000f62   4  move.l D0,(ffffffde,A5) */
    c->pc = RC_ADDR(0x00000f62u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x22u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F66:
    /* 00000f66   4  move.l D0,(ffffd730,A4) */
    c->pc = RC_ADDR(0x00000f66u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x28d0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F6A:
    /* 00000f6a   4  movea.l (ffffd730,A4),A0 */
    c->pc = RC_ADDR(0x00000f6au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x28d0u));
    c->a[0] = t0;

L_F6E:
    /* 00000f6e   4  adda.l (ffffffe8,A5),A0 */
    c->pc = RC_ADDR(0x00000f6eu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[0] += t0;

L_F72:
    /* 00000f72   4  move.l A0,(ffffd734,A4) */
    c->pc = RC_ADDR(0x00000f72u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x28ccu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F76:
    /* 00000f76   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000f76u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F7A:
    /* 00000f7a   4  move.l (ffffd730,A4),-(A7) */
    c->pc = RC_ADDR(0x00000f7au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x28d0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F7E:
    /* 00000f7e   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00000f7eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F82:
    /* 00000f82   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00000f82u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00000f86u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_F86:
    /* 00000f86   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00000f86u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_F8A:
    /* 00000f8a   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00000f8au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F8E:
    /* 00000f8e   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x00000f8eu);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x00000f92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_F92:
    /* 00000f92   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000f92u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_F94:
    /* 00000f94   4  clr.l (fffff73c,A4) */
    c->pc = RC_ADDR(0x00000f94u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x8c4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F98:
    /* 00000f98   4  tst.w (fffff740,A4) */
    c->pc = RC_ADDR(0x00000f98u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x8c0u));
    rc_set_nzvc(c, t0, RC_W);

L_F9C:
    /* 00000f9c   2  beq 00000fa2 */
    c->pc = RC_ADDR(0x00000f9cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_FA2;

L_F9E:
    /* 00000f9e   4  clr.l (fffff738,A4) */
    c->pc = RC_ADDR(0x00000f9eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x8c8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_FA2:
    /* 00000fa2   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000fa2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_FA6:
    /* 00000fa6   4  pea (fffffffa,A5) */
    c->pc = RC_ADDR(0x00000fa6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x6u));

L_FAA:
    /* 00000faa   4  jsr (00000e54) */
    c->pc = RC_ADDR(0x00000faau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000faeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_FAE:
    /* 00000fae   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000faeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_FB0:
    /* 00000fb0   6  move.w (fffffffa,A5),(fffff736,A4) */
    c->pc = RC_ADDR(0x00000fb0u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_wr16(c, m, (c->a[4] - 0x8cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_FB6:
    /* 00000fb6   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00000fb6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_FBA:
    /* 00000fba   4  beq 0000133a */
    c->pc = RC_ADDR(0x00000fbau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_133A;

L_FBE:
    /* 00000fbe   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000fbeu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_FC2:
    /* 00000fc2   4  jsr (00000e9a) */
    c->pc = RC_ADDR(0x00000fc2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000fc6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e9au);
    return;

L_FC6:
    /* 00000fc6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000fc6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_FC8:
    /* 00000fc8   6  cmpi.b #2a,(fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000fc8u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[5] - 0x41eu));
    rc_cmp(c, RC_B, t0, 0x0000002au);

L_FCE:
    /* 00000fce   4  bne 0000105a */
    c->pc = RC_ADDR(0x00000fceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_105A;

L_FD2:
    /* 00000fd2   4  tst.w (fffff740,A4) */
    c->pc = RC_ADDR(0x00000fd2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x8c0u));
    rc_set_nzvc(c, t0, RC_W);

L_FD6:
    /* 00000fd6   2  beq 00001056 */
    c->pc = RC_ADDR(0x00000fd6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1056;

L_FD8:
    /* 00000fd8   4  tst.l (fffff738,A4) */
    c->pc = RC_ADDR(0x00000fd8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x8c8u));
    rc_set_nzvc(c, t0, RC_L);

L_FDC:
    /* 00000fdc   2  bne 00000ff8 */
    c->pc = RC_ADDR(0x00000fdcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_FF8;

L_FDE:
    /* 00000fde   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00000fdeu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_FE4:
    /* 00000fe4   4  pea (0000000c).l */
    c->pc = RC_ADDR(0x00000fe4u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000cu);

L_FE8:
    /* 00000fe8   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00000fe8u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00000fecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_FEC:
    /* 00000fec   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000fecu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_FEE:
    /* 00000fee   4  move.l D0,(fffffbde,A5) */
    c->pc = RC_ADDR(0x00000feeu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x422u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_FF2:
    /* 00000ff2   4  move.l D0,(fffff738,A4) */
    c->pc = RC_ADDR(0x00000ff2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x8c8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_FF6:
    /* 00000ff6   2  bra 0000101a */
    c->pc = RC_ADDR(0x00000ff6u);
    rc_step(c, m, 10);
    goto L_101A;

L_FF8:
    /* 00000ff8   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00000ff8u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_FFE:
    /* 00000ffe   4  pea (0000000c).l */
    c->pc = RC_ADDR(0x00000ffeu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000cu);

L_1002:
    /* 00001002   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00001002u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00001006u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1006:
    /* 00001006   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001006u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1008:
    /* 00001008   4  movea.l (fffffbde,A5),A0 */
    c->pc = RC_ADDR(0x00001008u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x422u));
    c->a[0] = t0;

L_100C:
    /* 0000100c   4  move.l D0,(8,A0) */
    c->pc = RC_ADDR(0x0000100cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1010:
    /* 00001010   4  movea.l (fffffbde,A5),A0 */
    c->pc = RC_ADDR(0x00001010u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x422u));
    c->a[0] = t0;

L_1014:
    /* 00001014   6  move.l (8,A0),(fffffbde,A5) */
    c->pc = RC_ADDR(0x00001014u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x422u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_101A:
    /* 0000101a   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0000101au);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_1020:
    /* 00001020   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00001020u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_1024:
    /* 00001024   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x00001024u);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x00001028u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_1028:
    /* 00001028   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001028u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_102A:
    /* 0000102a   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000102au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_102C:
    /* 0000102c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000102cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_102E:
    /* 0000102e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000102eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1030:
    /* 00001030   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00001030u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00001034u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1034:
    /* 00001034   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001034u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1036:
    /* 00001036   4  movea.l (fffffbde,A5),A0 */
    c->pc = RC_ADDR(0x00001036u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x422u));
    c->a[0] = t0;

L_103A:
    /* 0000103a   2  move.l D0,(A0) */
    c->pc = RC_ADDR(0x0000103au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_103C:
    /* 0000103c   4  pea (fffffbe3,A5) */
    c->pc = RC_ADDR(0x0000103cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41du));

L_1040:
    /* 00001040   4  movea.l (fffffbde,A5),A0 */
    c->pc = RC_ADDR(0x00001040u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x422u));
    c->a[0] = t0;

L_1044:
    /* 00001044   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x00001044u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1046:
    /* 00001046   4  jsr (ffff82cc,A4) */
    c->pc = RC_ADDR(0x00001046u);
    rc_step(c, m, 18);
    /* vector 119 */
    rc_push32(c, m, RC_ADDR(0x0000104au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228b2u);
    return;

L_104A:
    /* 0000104a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000104au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_104C:
    /* 0000104c   4  movea.l (fffffbde,A5),A0 */
    c->pc = RC_ADDR(0x0000104cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x422u));
    c->a[0] = t0;

L_1050:
    /* 00001050   6  move.l (fffff73c,A4),(4,A0) */
    c->pc = RC_ADDR(0x00001050u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x8c4u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1056:
    /* 00001056   4  bra 00001172 */
    c->pc = RC_ADDR(0x00001056u);
    rc_step(c, m, 10);
    goto L_1172;

L_105A:
    /* 0000105a   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x0000105au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_105E:
    /* 0000105e   4  lea (fffffbe2,A5),A0 */
    c->pc = RC_ADDR(0x0000105eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x41eu);

L_1062:
    /* 00001062   4  move.l A0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00001062u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1066:
    /* 00001066   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x00001066u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_106A:
    /* 0000106a   2  tst.b (A0) */
    c->pc = RC_ADDR(0x0000106au);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_106C:
    /* 0000106c   2  beq 00001096 */
    c->pc = RC_ADDR(0x0000106cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1096;

L_106E:
    /* 0000106e   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x0000106eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_1072:
    /* 00001072   4  cmpi.b #2d,(A0) */
    c->pc = RC_ADDR(0x00001072u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002du);

L_1076:
    /* 00001076   2  beq 00001096 */
    c->pc = RC_ADDR(0x00001076u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1096;

L_1078:
    /* 00001078   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x00001078u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_107C:
    /* 0000107c   4  addq.l #1,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x0000107cu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x1eu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1080:
    /* 00001080   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00001080u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1084:
    /* 00001084   4  addq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00001084u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1088:
    /* 00001088   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00001088u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_108A:
    /* 0000108a   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0000108au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_108C:
    /* 0000108c   4  lea (ffffffca,A5),A1 */
    c->pc = RC_ADDR(0x0000108cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[5] - 0x36u);

L_1090:
    /* 00001090   4  move.b (A0),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00001090u);
    rc_step(c, m, 18);
    t0 = rc_rd8(c, m, c->a[0]);
    t4 = c->d[1];
    rc_wr8(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1094:
    /* 00001094   2  bra 00001066 */
    c->pc = RC_ADDR(0x00001094u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1066;

L_1096:
    /* 00001096   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00001096u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1098:
    /* 00001098   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00001098u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_109C:
    /* 0000109c   4  lea (ffffffca,A5),A0 */
    c->pc = RC_ADDR(0x0000109cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x36u);

L_10A0:
    /* 000010a0   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000010a0u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_10A4:
    /* 000010a4   4  pea (ffffffca,A5) */
    c->pc = RC_ADDR(0x000010a4u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x36u));

L_10A8:
    /* 000010a8   4  jsr (ffff82d8,A4) */
    c->pc = RC_ADDR(0x000010a8u);
    rc_step(c, m, 18);
    /* vector 121 */
    rc_push32(c, m, RC_ADDR(0x000010acu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dceu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228d4u);
    return;

L_10AC:
    /* 000010ac   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000010acu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_10AE:
    /* 000010ae   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x000010aeu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_10B0:
    /* 000010b0   4  move.w D0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x000010b0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10B4:
    /* 000010b4   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x000010b4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_10B8:
    /* 000010b8   4  addq.l #1,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x000010b8u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x1eu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_10BC:
    /* 000010bc   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x000010bcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10C0:
    /* 000010c0   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x000010c0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_10C4:
    /* 000010c4   2  tst.b (A0) */
    c->pc = RC_ADDR(0x000010c4u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_10C6:
    /* 000010c6   2  beq 000010f0 */
    c->pc = RC_ADDR(0x000010c6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10F0;

L_10C8:
    /* 000010c8   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x000010c8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_10CC:
    /* 000010cc   4  cmpi.b #41,(A0) */
    c->pc = RC_ADDR(0x000010ccu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000041u);

L_10D0:
    /* 000010d0   2  bge 000010f0 */
    c->pc = RC_ADDR(0x000010d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_10F0;

L_10D2:
    /* 000010d2   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x000010d2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_10D6:
    /* 000010d6   4  addq.l #1,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x000010d6u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x1eu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_10DA:
    /* 000010da   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000010dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10DE:
    /* 000010de   4  addq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000010deu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_10E2:
    /* 000010e2   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x000010e2u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_10E4:
    /* 000010e4   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x000010e4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10E6:
    /* 000010e6   4  lea (ffffffca,A5),A1 */
    c->pc = RC_ADDR(0x000010e6u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[5] - 0x36u);

L_10EA:
    /* 000010ea   4  move.b (A0),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000010eau);
    rc_step(c, m, 18);
    t0 = rc_rd8(c, m, c->a[0]);
    t4 = c->d[1];
    rc_wr8(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_10EE:
    /* 000010ee   2  bra 000010c0 */
    c->pc = RC_ADDR(0x000010eeu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_10C0;

L_10F0:
    /* 000010f0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000010f0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10F2:
    /* 000010f2   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000010f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10F6:
    /* 000010f6   4  lea (ffffffca,A5),A0 */
    c->pc = RC_ADDR(0x000010f6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x36u);

L_10FA:
    /* 000010fa   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000010fau);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_10FE:
    /* 000010fe   4  pea (ffffffca,A5) */
    c->pc = RC_ADDR(0x000010feu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x36u));

L_1102:
    /* 00001102   4  jsr (ffff82d8,A4) */
    c->pc = RC_ADDR(0x00001102u);
    rc_step(c, m, 18);
    /* vector 121 */
    rc_push32(c, m, RC_ADDR(0x00001106u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dceu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228d4u);
    return;

L_1106:
    /* 00001106   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001106u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1108:
    /* 00001108   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00001108u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_110A:
    /* 0000110a   4  move.w D0,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0000110au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_110E:
    /* 0000110e   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x0000110eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_1112:
    /* 00001112   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00001112u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1114:
    /* 00001114   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001114u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_1116:
    /* 00001116   4  sub.w #41,D0 */
    c->pc = RC_ADDR(0x00001116u);
    rc_step(c, m, 10);
    t0 = 0x00000041u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_111A:
    /* 0000111a   4  move.w D0,(ffffffec,A5) */
    c->pc = RC_ADDR(0x0000111au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_111E:
    /* 0000111e   6  cmpi.w #f,(fffffff0,A5) */
    c->pc = RC_ADDR(0x0000111eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_1124:
    /* 00001124   2  bcc 00001172 */
    c->pc = RC_ADDR(0x00001124u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1172;

L_1126:
    /* 00001126   6  cmpi.w #27,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00001126u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_112C:
    /* 0000112c   2  bcc 00001172 */
    c->pc = RC_ADDR(0x0000112cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1172;

L_112E:
    /* 0000112e   4  move.b (d,A5),D0 */
    c->pc = RC_ADDR(0x0000112eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xdu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1132:
    /* 00001132   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001132u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_1134:
    /* 00001134   4  cmp.w (ffffffec,A5),D0 */
    c->pc = RC_ADDR(0x00001134u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1138:
    /* 00001138   2  bne 00001172 */
    c->pc = RC_ADDR(0x00001138u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1172;

L_113A:
    /* 0000113a   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x0000113au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_113E:
    /* 0000113e   4  mulu.w #222,D0 */
    c->pc = RC_ADDR(0x0000113eu);
    rc_step(c, m, 42);
    t0 = 0x00000222u;
    rc_mulu(c, 0, t0);

L_1142:
    /* 00001142   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x00001142u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1146:
    /* 00001146   4  mulu.w #e,D1 */
    c->pc = RC_ADDR(0x00001146u);
    rc_step(c, m, 42);
    t0 = 0x0000000eu;
    rc_mulu(c, 1, t0);

L_114A:
    /* 0000114a   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0000114au);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_114C:
    /* 0000114c   4  lea (ffffd738,A4),A0 */
    c->pc = RC_ADDR(0x0000114cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x28c8u);

L_1150:
    /* 00001150   6  move.l (fffff73c,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00001150u);
    rc_step(c, m, 30);
    t0 = rc_rd32(c, m, (c->a[4] - 0x8c4u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1156:
    /* 00001156   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x00001156u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_115A:
    /* 0000115a   4  mulu.w #222,D0 */
    c->pc = RC_ADDR(0x0000115au);
    rc_step(c, m, 42);
    t0 = 0x00000222u;
    rc_mulu(c, 0, t0);

L_115E:
    /* 0000115e   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x0000115eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1162:
    /* 00001162   4  mulu.w #e,D1 */
    c->pc = RC_ADDR(0x00001162u);
    rc_step(c, m, 42);
    t0 = 0x0000000eu;
    rc_mulu(c, 1, t0);

L_1166:
    /* 00001166   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00001166u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1168:
    /* 00001168   4  lea (ffffd744,A4),A0 */
    c->pc = RC_ADDR(0x00001168u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x28bcu);

L_116C:
    /* 0000116c   6  move.b (ffffffed,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000116cu);
    rc_step(c, m, 22);
    t0 = rc_rd8(c, m, (c->a[5] - 0x13u));
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1172:
    /* 00001172   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00001172u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_1176:
    /* 00001176   4  pea (fffffff8,A5) */
    c->pc = RC_ADDR(0x00001176u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x8u));

L_117A:
    /* 0000117a   4  jsr (00000e54) */
    c->pc = RC_ADDR(0x0000117au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000117eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_117E:
    /* 0000117e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000117eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1180:
    /* 00001180   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00001180u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_1184:
    /* 00001184   4  beq 00001316 */
    c->pc = RC_ADDR(0x00001184u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1316;

L_1188:
    /* 00001188   4  subq.w #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00001188u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_118C:
    /* 0000118c   4  pea (00000001).l */
    c->pc = RC_ADDR(0x0000118cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_1190:
    /* 00001190   4  pea (ffffffe6,A5) */
    c->pc = RC_ADDR(0x00001190u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x1au));

L_1194:
    /* 00001194   4  jsr (00000e54) */
    c->pc = RC_ADDR(0x00001194u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001198u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_1198:
    /* 00001198   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001198u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_119A:
    /* 0000119a   4  movea.l (ffffd730,A4),A0 */
    c->pc = RC_ADDR(0x0000119au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x28d0u));
    c->a[0] = t0;

L_119E:
    /* 0000119e   4  cmpi.b #64,(A0) */
    c->pc = RC_ADDR(0x0000119eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000064u);

L_11A2:
    /* 000011a2   2  ble 000011de */
    c->pc = RC_ADDR(0x000011a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_11DE;

L_11A4:
    /* 000011a4   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000011a4u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_11A8:
    /* 000011a8   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x000011a8u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_11AC:
    /* 000011ac   4  jsr (00000e54) */
    c->pc = RC_ADDR(0x000011acu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000011b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_11B0:
    /* 000011b0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000011b0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_11B2:
    /* 000011b2   4  move.b (fffffbe2,A5),D0 */
    c->pc = RC_ADDR(0x000011b2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x41eu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11B6:
    /* 000011b6   2  ext.w D0 */
    c->pc = RC_ADDR(0x000011b6u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_11B8:
    /* 000011b8   4  sub.w #64,D0 */
    c->pc = RC_ADDR(0x000011b8u);
    rc_step(c, m, 10);
    t0 = 0x00000064u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11BC:
    /* 000011bc   4  move.w D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x000011bcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11C0:
    /* 000011c0   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x000011c0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11C4:
    /* 000011c4   2  bra 000011d4 */
    c->pc = RC_ADDR(0x000011c4u);
    rc_step(c, m, 10);
    goto L_11D4;

L_11C6:
    /* 000011c6   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x000011c6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_11CA:
    /* 000011ca   4  jsr (00000e9a) */
    c->pc = RC_ADDR(0x000011cau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000011ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e9au);
    return;

L_11CE:
    /* 000011ce   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000011ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_11D0:
    /* 000011d0   4  addq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000011d0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11D4:
    /* 000011d4   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000011d4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11D8:
    /* 000011d8   4  cmp.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x000011d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_11DC:
    /* 000011dc   2  bcs 000011c6 */
    c->pc = RC_ADDR(0x000011dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_11C6; }

L_11DE:
    /* 000011de   4  pea (00000002).l */
    c->pc = RC_ADDR(0x000011deu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_11E2:
    /* 000011e2   4  pea (fffffff6,A5) */
    c->pc = RC_ADDR(0x000011e2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0xau));

L_11E6:
    /* 000011e6   4  jsr (00000e54) */
    c->pc = RC_ADDR(0x000011e6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000011eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_11EA:
    /* 000011ea   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000011eau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_11EC:
    /* 000011ec   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000011ecu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_11F0:
    /* 000011f0   4  pea (ffffffe7,A5) */
    c->pc = RC_ADDR(0x000011f0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x19u));

L_11F4:
    /* 000011f4   4  jsr (00000e54) */
    c->pc = RC_ADDR(0x000011f4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000011f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_11F8:
    /* 000011f8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000011f8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_11FA:
    /* 000011fa   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x000011fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_11FE:
    /* 000011fe   2  beq 00001254 */
    c->pc = RC_ADDR(0x000011feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1254;

L_1200:
    /* 00001200   6  cmpi.b #64,(ffffffe7,A5) */
    c->pc = RC_ADDR(0x00001200u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[5] - 0x19u));
    rc_cmp(c, RC_B, t0, 0x00000064u);

L_1206:
    /* 00001206   2  bne 00001236 */
    c->pc = RC_ADDR(0x00001206u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1236;

L_1208:
    /* 00001208   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00001208u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_120C:
    /* 0000120c   4  jsr (00000e9a) */
    c->pc = RC_ADDR(0x0000120cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001210u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e9au);
    return;

L_1210:
    /* 00001210   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001210u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1212:
    /* 00001212   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00001212u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_1216:
    /* 00001216   4  jsr (00000e9a) */
    c->pc = RC_ADDR(0x00001216u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000121au));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e9au);
    return;

L_121A:
    /* 0000121a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000121au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_121C:
    /* 0000121c   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x0000121cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_1220:
    /* 00001220   4  jsr (00000e9a) */
    c->pc = RC_ADDR(0x00001220u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001224u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e9au);
    return;

L_1224:
    /* 00001224   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001224u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1226:
    /* 00001226   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00001226u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_122A:
    /* 0000122a   4  pea (ffffffe7,A5) */
    c->pc = RC_ADDR(0x0000122au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x19u));

L_122E:
    /* 0000122e   4  jsr (00000e54) */
    c->pc = RC_ADDR(0x0000122eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001232u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_1232:
    /* 00001232   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001232u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1234:
    /* 00001234   2  bra 0000124e */
    c->pc = RC_ADDR(0x00001234u);
    rc_step(c, m, 10);
    goto L_124E;

L_1236:
    /* 00001236   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00001236u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_123A:
    /* 0000123a   4  jsr (00000e9a) */
    c->pc = RC_ADDR(0x0000123au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000123eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e9au);
    return;

L_123E:
    /* 0000123e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000123eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1240:
    /* 00001240   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00001240u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_1244:
    /* 00001244   4  pea (ffffffe7,A5) */
    c->pc = RC_ADDR(0x00001244u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x19u));

L_1248:
    /* 00001248   4  jsr (00000e54) */
    c->pc = RC_ADDR(0x00001248u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000124cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_124C:
    /* 0000124c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000124cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_124E:
    /* 0000124e   4  subq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000124eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1252:
    /* 00001252   2  bra 000011fa */
    c->pc = RC_ADDR(0x00001252u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_11FA;

L_1254:
    /* 00001254   4  movea.l (ffffd730,A4),A0 */
    c->pc = RC_ADDR(0x00001254u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x28d0u));
    c->a[0] = t0;

L_1258:
    /* 00001258   4  cmpi.b #fc,(A0) */
    c->pc = RC_ADDR(0x00001258u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x000000fcu);

L_125C:
    /* 0000125c   2  bne 0000126c */
    c->pc = RC_ADDR(0x0000125cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_126C;

L_125E:
    /* 0000125e   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0000125eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_1262:
    /* 00001262   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00001262u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_1266:
    /* 00001266   4  jsr (00000e54) */
    c->pc = RC_ADDR(0x00001266u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000126au));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_126A:
    /* 0000126a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000126au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_126C:
    /* 0000126c   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0000126cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_1270:
    /* 00001270   4  pea (fffffff2,A5) */
    c->pc = RC_ADDR(0x00001270u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0xeu));

L_1274:
    /* 00001274   4  jsr (00000e54) */
    c->pc = RC_ADDR(0x00001274u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001278u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_1278:
    /* 00001278   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001278u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_127A:
    /* 0000127a   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x0000127au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_127E:
    /* 0000127e   2  bra 000012b8 */
    c->pc = RC_ADDR(0x0000127eu);
    rc_step(c, m, 10);
    goto L_12B8;

L_1280:
    /* 00001280   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00001280u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_1284:
    /* 00001284   4  jsr (00000e9a) */
    c->pc = RC_ADDR(0x00001284u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001288u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e9au);
    return;

L_1288:
    /* 00001288   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001288u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_128A:
    /* 0000128a   4  pea (00000001).l */
    c->pc = RC_ADDR(0x0000128au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_128E:
    /* 0000128e   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x0000128eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_1292:
    /* 00001292   4  jsr (00000e54) */
    c->pc = RC_ADDR(0x00001292u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001296u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_1296:
    /* 00001296   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001296u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1298:
    /* 00001298   4  move.b (fffffbe2,A5),D0 */
    c->pc = RC_ADDR(0x00001298u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x41eu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_129C:
    /* 0000129c   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000129cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_129E:
    /* 0000129e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000129eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A0:
    /* 000012a0   4  jsr (00000ecc) */
    c->pc = RC_ADDR(0x000012a0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000012a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000eccu);
    return;

L_12A4:
    /* 000012a4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000012a4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_12A6:
    /* 000012a6   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000012a6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_12AA:
    /* 000012aa   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x000012aau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_12AE:
    /* 000012ae   4  jsr (00000e54) */
    c->pc = RC_ADDR(0x000012aeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000012b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_12B2:
    /* 000012b2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000012b2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_12B4:
    /* 000012b4   4  addq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000012b4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_12B8:
    /* 000012b8   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000012b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12BC:
    /* 000012bc   4  cmp.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x000012bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12C0:
    /* 000012c0   2  bcs 00001280 */
    c->pc = RC_ADDR(0x000012c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1280; }

L_12C2:
    /* 000012c2   4  pea (00000002).l */
    c->pc = RC_ADDR(0x000012c2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_12C6:
    /* 000012c6   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x000012c6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_12CA:
    /* 000012ca   4  jsr (00000e54) */
    c->pc = RC_ADDR(0x000012cau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000012ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_12CE:
    /* 000012ce   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000012ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_12D0:
    /* 000012d0   4  pea (00000002).l */
    c->pc = RC_ADDR(0x000012d0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_12D4:
    /* 000012d4   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x000012d4u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_12D8:
    /* 000012d8   4  jsr (00000e54) */
    c->pc = RC_ADDR(0x000012d8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000012dcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_12DC:
    /* 000012dc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000012dcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_12DE:
    /* 000012de   4  move.b (fffffbe3,A5),D0 */
    c->pc = RC_ADDR(0x000012deu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x41du));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_12E2:
    /* 000012e2   2  ext.w D0 */
    c->pc = RC_ADDR(0x000012e2u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_12E4:
    /* 000012e4   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000012e4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E8:
    /* 000012e8   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000012e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12EC:
    /* 000012ec   4  subq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000012ecu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_12F0:
    /* 000012f0   2  tst.w D0 */
    c->pc = RC_ADDR(0x000012f0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_12F2:
    /* 000012f2   2  beq 00001312 */
    c->pc = RC_ADDR(0x000012f2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1312;

L_12F4:
    /* 000012f4   4  pea (00000002).l */
    c->pc = RC_ADDR(0x000012f4u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_12F8:
    /* 000012f8   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x000012f8u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_12FC:
    /* 000012fc   4  jsr (00000e54) */
    c->pc = RC_ADDR(0x000012fcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001300u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_1300:
    /* 00001300   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001300u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1302:
    /* 00001302   4  move.b (fffffbe3,A5),D0 */
    c->pc = RC_ADDR(0x00001302u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x41du));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1306:
    /* 00001306   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001306u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_1308:
    /* 00001308   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00001308u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_130A:
    /* 0000130a   4  jsr (00000ecc) */
    c->pc = RC_ADDR(0x0000130au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000130eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000eccu);
    return;

L_130E:
    /* 0000130e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000130eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1310:
    /* 00001310   2  bra 000012e8 */
    c->pc = RC_ADDR(0x00001310u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_12E8;

L_1312:
    /* 00001312   4  bra 00001180 */
    c->pc = RC_ADDR(0x00001312u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1180;

L_1316:
    /* 00001316   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00001316u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_131A:
    /* 0000131a   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x0000131au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_131E:
    /* 0000131e   4  jsr (00000e54) */
    c->pc = RC_ADDR(0x0000131eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001322u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_1322:
    /* 00001322   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001322u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1324:
    /* 00001324   4  move.b (fffffbe2,A5),D0 */
    c->pc = RC_ADDR(0x00001324u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x41eu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1328:
    /* 00001328   2  ext.w D0 */
    c->pc = RC_ADDR(0x00001328u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_132A:
    /* 0000132a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000132au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_132C:
    /* 0000132c   4  jsr (00000ecc) */
    c->pc = RC_ADDR(0x0000132cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001330u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000eccu);
    return;

L_1330:
    /* 00001330   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00001330u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1332:
    /* 00001332   4  subq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00001332u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1336:
    /* 00001336   4  bra 00000fb6 */
    c->pc = RC_ADDR(0x00001336u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_FB6;

L_133A:
    /* 0000133a   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000133au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_133E:
    /* 0000133e   4  move.l (ffffffde,A5),-(A7) */
    c->pc = RC_ADDR(0x0000133eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1342:
    /* 00001342   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00001342u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00001346u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1346:
    /* 00001346   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001346u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1348:
    /* 00001348   2  unlk A5 */
    c->pc = RC_ADDR(0x00001348u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_134A:
    /* 0000134a   2  rts */
    c->pc = RC_ADDR(0x0000134au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
