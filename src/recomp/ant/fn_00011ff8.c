/* fn_00011ff8 - 1052 byte(s), 286 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00011ff8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00011ff8u): goto L_11FF8;
    case RC_ADDR(0x00011ffcu): goto L_11FFC;
    case RC_ADDR(0x00012000u): goto L_12000;
    case RC_ADDR(0x00012004u): goto L_12004;
    case RC_ADDR(0x00012008u): goto L_12008;
    case RC_ADDR(0x0001200cu): goto L_1200C;
    case RC_ADDR(0x00012010u): goto L_12010;
    case RC_ADDR(0x00012016u): goto L_12016;
    case RC_ADDR(0x00012018u): goto L_12018;
    case RC_ADDR(0x0001201eu): goto L_1201E;
    case RC_ADDR(0x00012020u): goto L_12020;
    case RC_ADDR(0x00012026u): goto L_12026;
    case RC_ADDR(0x0001202au): goto L_1202A;
    case RC_ADDR(0x0001202cu): goto L_1202C;
    case RC_ADDR(0x00012030u): goto L_12030;
    case RC_ADDR(0x00012032u): goto L_12032;
    case RC_ADDR(0x00012034u): goto L_12034;
    case RC_ADDR(0x00012038u): goto L_12038;
    case RC_ADDR(0x0001203au): goto L_1203A;
    case RC_ADDR(0x0001203eu): goto L_1203E;
    case RC_ADDR(0x00012042u): goto L_12042;
    case RC_ADDR(0x00012044u): goto L_12044;
    case RC_ADDR(0x00012048u): goto L_12048;
    case RC_ADDR(0x0001204cu): goto L_1204C;
    case RC_ADDR(0x00012052u): goto L_12052;
    case RC_ADDR(0x00012054u): goto L_12054;
    case RC_ADDR(0x00012058u): goto L_12058;
    case RC_ADDR(0x0001205au): goto L_1205A;
    case RC_ADDR(0x0001205cu): goto L_1205C;
    case RC_ADDR(0x0001205eu): goto L_1205E;
    case RC_ADDR(0x00012062u): goto L_12062;
    case RC_ADDR(0x00012066u): goto L_12066;
    case RC_ADDR(0x0001206cu): goto L_1206C;
    case RC_ADDR(0x0001206eu): goto L_1206E;
    case RC_ADDR(0x00012074u): goto L_12074;
    case RC_ADDR(0x00012076u): goto L_12076;
    case RC_ADDR(0x0001207cu): goto L_1207C;
    case RC_ADDR(0x00012080u): goto L_12080;
    case RC_ADDR(0x00012084u): goto L_12084;
    case RC_ADDR(0x00012086u): goto L_12086;
    case RC_ADDR(0x00012088u): goto L_12088;
    case RC_ADDR(0x0001208au): goto L_1208A;
    case RC_ADDR(0x00012090u): goto L_12090;
    case RC_ADDR(0x00012094u): goto L_12094;
    case RC_ADDR(0x00012096u): goto L_12096;
    case RC_ADDR(0x0001209cu): goto L_1209C;
    case RC_ADDR(0x000120a2u): goto L_120A2;
    case RC_ADDR(0x000120a4u): goto L_120A4;
    case RC_ADDR(0x000120aau): goto L_120AA;
    case RC_ADDR(0x000120b0u): goto L_120B0;
    case RC_ADDR(0x000120b4u): goto L_120B4;
    case RC_ADDR(0x000120b6u): goto L_120B6;
    case RC_ADDR(0x000120bau): goto L_120BA;
    case RC_ADDR(0x000120bcu): goto L_120BC;
    case RC_ADDR(0x000120c0u): goto L_120C0;
    case RC_ADDR(0x000120c4u): goto L_120C4;
    case RC_ADDR(0x000120c6u): goto L_120C6;
    case RC_ADDR(0x000120cau): goto L_120CA;
    case RC_ADDR(0x000120ceu): goto L_120CE;
    case RC_ADDR(0x000120d0u): goto L_120D0;
    case RC_ADDR(0x000120d4u): goto L_120D4;
    case RC_ADDR(0x000120d6u): goto L_120D6;
    case RC_ADDR(0x000120dau): goto L_120DA;
    case RC_ADDR(0x000120deu): goto L_120DE;
    case RC_ADDR(0x000120e0u): goto L_120E0;
    case RC_ADDR(0x000120e4u): goto L_120E4;
    case RC_ADDR(0x000120e8u): goto L_120E8;
    case RC_ADDR(0x000120ecu): goto L_120EC;
    case RC_ADDR(0x000120f0u): goto L_120F0;
    case RC_ADDR(0x000120f2u): goto L_120F2;
    case RC_ADDR(0x000120f6u): goto L_120F6;
    case RC_ADDR(0x000120fau): goto L_120FA;
    case RC_ADDR(0x000120feu): goto L_120FE;
    case RC_ADDR(0x00012102u): goto L_12102;
    case RC_ADDR(0x00012106u): goto L_12106;
    case RC_ADDR(0x0001210au): goto L_1210A;
    case RC_ADDR(0x0001210eu): goto L_1210E;
    case RC_ADDR(0x00012112u): goto L_12112;
    case RC_ADDR(0x00012118u): goto L_12118;
    case RC_ADDR(0x0001211au): goto L_1211A;
    case RC_ADDR(0x0001211eu): goto L_1211E;
    case RC_ADDR(0x00012124u): goto L_12124;
    case RC_ADDR(0x00012126u): goto L_12126;
    case RC_ADDR(0x0001212au): goto L_1212A;
    case RC_ADDR(0x0001212eu): goto L_1212E;
    case RC_ADDR(0x00012132u): goto L_12132;
    case RC_ADDR(0x00012134u): goto L_12134;
    case RC_ADDR(0x00012138u): goto L_12138;
    case RC_ADDR(0x0001213au): goto L_1213A;
    case RC_ADDR(0x0001213eu): goto L_1213E;
    case RC_ADDR(0x00012144u): goto L_12144;
    case RC_ADDR(0x00012146u): goto L_12146;
    case RC_ADDR(0x0001214au): goto L_1214A;
    case RC_ADDR(0x0001214eu): goto L_1214E;
    case RC_ADDR(0x00012154u): goto L_12154;
    case RC_ADDR(0x00012156u): goto L_12156;
    case RC_ADDR(0x0001215au): goto L_1215A;
    case RC_ADDR(0x0001215eu): goto L_1215E;
    case RC_ADDR(0x00012160u): goto L_12160;
    case RC_ADDR(0x00012164u): goto L_12164;
    case RC_ADDR(0x00012168u): goto L_12168;
    case RC_ADDR(0x0001216cu): goto L_1216C;
    case RC_ADDR(0x00012170u): goto L_12170;
    case RC_ADDR(0x00012172u): goto L_12172;
    case RC_ADDR(0x00012176u): goto L_12176;
    case RC_ADDR(0x0001217au): goto L_1217A;
    case RC_ADDR(0x0001217cu): goto L_1217C;
    case RC_ADDR(0x00012182u): goto L_12182;
    case RC_ADDR(0x00012186u): goto L_12186;
    case RC_ADDR(0x0001218au): goto L_1218A;
    case RC_ADDR(0x0001218cu): goto L_1218C;
    case RC_ADDR(0x00012190u): goto L_12190;
    case RC_ADDR(0x00012194u): goto L_12194;
    case RC_ADDR(0x00012198u): goto L_12198;
    case RC_ADDR(0x0001219cu): goto L_1219C;
    case RC_ADDR(0x000121a0u): goto L_121A0;
    case RC_ADDR(0x000121a4u): goto L_121A4;
    case RC_ADDR(0x000121a8u): goto L_121A8;
    case RC_ADDR(0x000121acu): goto L_121AC;
    case RC_ADDR(0x000121b0u): goto L_121B0;
    case RC_ADDR(0x000121b4u): goto L_121B4;
    case RC_ADDR(0x000121b8u): goto L_121B8;
    case RC_ADDR(0x000121beu): goto L_121BE;
    case RC_ADDR(0x000121c4u): goto L_121C4;
    case RC_ADDR(0x000121c6u): goto L_121C6;
    case RC_ADDR(0x000121cau): goto L_121CA;
    case RC_ADDR(0x000121ceu): goto L_121CE;
    case RC_ADDR(0x000121d0u): goto L_121D0;
    case RC_ADDR(0x000121d2u): goto L_121D2;
    case RC_ADDR(0x000121d8u): goto L_121D8;
    case RC_ADDR(0x000121dcu): goto L_121DC;
    case RC_ADDR(0x000121deu): goto L_121DE;
    case RC_ADDR(0x000121e0u): goto L_121E0;
    case RC_ADDR(0x000121e6u): goto L_121E6;
    case RC_ADDR(0x000121e8u): goto L_121E8;
    case RC_ADDR(0x000121ecu): goto L_121EC;
    case RC_ADDR(0x000121f2u): goto L_121F2;
    case RC_ADDR(0x000121f4u): goto L_121F4;
    case RC_ADDR(0x000121f8u): goto L_121F8;
    case RC_ADDR(0x000121fcu): goto L_121FC;
    case RC_ADDR(0x00012200u): goto L_12200;
    case RC_ADDR(0x00012204u): goto L_12204;
    case RC_ADDR(0x00012206u): goto L_12206;
    case RC_ADDR(0x0001220au): goto L_1220A;
    case RC_ADDR(0x0001220cu): goto L_1220C;
    case RC_ADDR(0x00012210u): goto L_12210;
    case RC_ADDR(0x00012214u): goto L_12214;
    case RC_ADDR(0x00012218u): goto L_12218;
    case RC_ADDR(0x0001221au): goto L_1221A;
    case RC_ADDR(0x0001221eu): goto L_1221E;
    case RC_ADDR(0x00012222u): goto L_12222;
    case RC_ADDR(0x00012226u): goto L_12226;
    case RC_ADDR(0x00012228u): goto L_12228;
    case RC_ADDR(0x0001222cu): goto L_1222C;
    case RC_ADDR(0x0001222eu): goto L_1222E;
    case RC_ADDR(0x00012232u): goto L_12232;
    case RC_ADDR(0x00012238u): goto L_12238;
    case RC_ADDR(0x0001223au): goto L_1223A;
    case RC_ADDR(0x0001223eu): goto L_1223E;
    case RC_ADDR(0x00012242u): goto L_12242;
    case RC_ADDR(0x00012246u): goto L_12246;
    case RC_ADDR(0x00012248u): goto L_12248;
    case RC_ADDR(0x0001224cu): goto L_1224C;
    case RC_ADDR(0x00012252u): goto L_12252;
    case RC_ADDR(0x00012254u): goto L_12254;
    case RC_ADDR(0x00012258u): goto L_12258;
    case RC_ADDR(0x0001225au): goto L_1225A;
    case RC_ADDR(0x0001225eu): goto L_1225E;
    case RC_ADDR(0x00012264u): goto L_12264;
    case RC_ADDR(0x00012266u): goto L_12266;
    case RC_ADDR(0x0001226au): goto L_1226A;
    case RC_ADDR(0x0001226eu): goto L_1226E;
    case RC_ADDR(0x00012270u): goto L_12270;
    case RC_ADDR(0x00012274u): goto L_12274;
    case RC_ADDR(0x00012278u): goto L_12278;
    case RC_ADDR(0x0001227au): goto L_1227A;
    case RC_ADDR(0x00012280u): goto L_12280;
    case RC_ADDR(0x00012282u): goto L_12282;
    case RC_ADDR(0x00012286u): goto L_12286;
    case RC_ADDR(0x0001228cu): goto L_1228C;
    case RC_ADDR(0x0001228eu): goto L_1228E;
    case RC_ADDR(0x00012292u): goto L_12292;
    case RC_ADDR(0x00012296u): goto L_12296;
    case RC_ADDR(0x0001229au): goto L_1229A;
    case RC_ADDR(0x0001229cu): goto L_1229C;
    case RC_ADDR(0x000122a2u): goto L_122A2;
    case RC_ADDR(0x000122a4u): goto L_122A4;
    case RC_ADDR(0x000122a8u): goto L_122A8;
    case RC_ADDR(0x000122acu): goto L_122AC;
    case RC_ADDR(0x000122aeu): goto L_122AE;
    case RC_ADDR(0x000122b2u): goto L_122B2;
    case RC_ADDR(0x000122b6u): goto L_122B6;
    case RC_ADDR(0x000122bau): goto L_122BA;
    case RC_ADDR(0x000122beu): goto L_122BE;
    case RC_ADDR(0x000122c2u): goto L_122C2;
    case RC_ADDR(0x000122c6u): goto L_122C6;
    case RC_ADDR(0x000122cau): goto L_122CA;
    case RC_ADDR(0x000122ceu): goto L_122CE;
    case RC_ADDR(0x000122d2u): goto L_122D2;
    case RC_ADDR(0x000122d6u): goto L_122D6;
    case RC_ADDR(0x000122dau): goto L_122DA;
    case RC_ADDR(0x000122deu): goto L_122DE;
    case RC_ADDR(0x000122e2u): goto L_122E2;
    case RC_ADDR(0x000122e6u): goto L_122E6;
    case RC_ADDR(0x000122eau): goto L_122EA;
    case RC_ADDR(0x000122eeu): goto L_122EE;
    case RC_ADDR(0x000122f0u): goto L_122F0;
    case RC_ADDR(0x000122f4u): goto L_122F4;
    case RC_ADDR(0x000122f8u): goto L_122F8;
    case RC_ADDR(0x000122fcu): goto L_122FC;
    case RC_ADDR(0x000122feu): goto L_122FE;
    case RC_ADDR(0x00012304u): goto L_12304;
    case RC_ADDR(0x00012306u): goto L_12306;
    case RC_ADDR(0x0001230au): goto L_1230A;
    case RC_ADDR(0x0001230cu): goto L_1230C;
    case RC_ADDR(0x00012310u): goto L_12310;
    case RC_ADDR(0x00012312u): goto L_12312;
    case RC_ADDR(0x00012314u): goto L_12314;
    case RC_ADDR(0x00012318u): goto L_12318;
    case RC_ADDR(0x0001231au): goto L_1231A;
    case RC_ADDR(0x0001231eu): goto L_1231E;
    case RC_ADDR(0x00012322u): goto L_12322;
    case RC_ADDR(0x00012326u): goto L_12326;
    case RC_ADDR(0x0001232cu): goto L_1232C;
    case RC_ADDR(0x0001232eu): goto L_1232E;
    case RC_ADDR(0x00012332u): goto L_12332;
    case RC_ADDR(0x00012336u): goto L_12336;
    case RC_ADDR(0x0001233au): goto L_1233A;
    case RC_ADDR(0x0001233eu): goto L_1233E;
    case RC_ADDR(0x00012342u): goto L_12342;
    case RC_ADDR(0x00012346u): goto L_12346;
    case RC_ADDR(0x0001234au): goto L_1234A;
    case RC_ADDR(0x00012350u): goto L_12350;
    case RC_ADDR(0x00012352u): goto L_12352;
    case RC_ADDR(0x00012356u): goto L_12356;
    case RC_ADDR(0x0001235au): goto L_1235A;
    case RC_ADDR(0x0001235cu): goto L_1235C;
    case RC_ADDR(0x0001235eu): goto L_1235E;
    case RC_ADDR(0x00012360u): goto L_12360;
    case RC_ADDR(0x00012364u): goto L_12364;
    case RC_ADDR(0x00012366u): goto L_12366;
    case RC_ADDR(0x0001236au): goto L_1236A;
    case RC_ADDR(0x0001236eu): goto L_1236E;
    case RC_ADDR(0x00012372u): goto L_12372;
    case RC_ADDR(0x00012376u): goto L_12376;
    case RC_ADDR(0x0001237au): goto L_1237A;
    case RC_ADDR(0x0001237eu): goto L_1237E;
    case RC_ADDR(0x00012382u): goto L_12382;
    case RC_ADDR(0x00012386u): goto L_12386;
    case RC_ADDR(0x0001238au): goto L_1238A;
    case RC_ADDR(0x0001238eu): goto L_1238E;
    case RC_ADDR(0x00012392u): goto L_12392;
    case RC_ADDR(0x00012396u): goto L_12396;
    case RC_ADDR(0x0001239au): goto L_1239A;
    case RC_ADDR(0x0001239eu): goto L_1239E;
    case RC_ADDR(0x000123a2u): goto L_123A2;
    case RC_ADDR(0x000123a6u): goto L_123A6;
    case RC_ADDR(0x000123aau): goto L_123AA;
    case RC_ADDR(0x000123aeu): goto L_123AE;
    case RC_ADDR(0x000123b2u): goto L_123B2;
    case RC_ADDR(0x000123b6u): goto L_123B6;
    case RC_ADDR(0x000123bau): goto L_123BA;
    case RC_ADDR(0x000123beu): goto L_123BE;
    case RC_ADDR(0x000123c0u): goto L_123C0;
    case RC_ADDR(0x000123c4u): goto L_123C4;
    case RC_ADDR(0x000123c8u): goto L_123C8;
    case RC_ADDR(0x000123ccu): goto L_123CC;
    case RC_ADDR(0x000123d0u): goto L_123D0;
    case RC_ADDR(0x000123d4u): goto L_123D4;
    case RC_ADDR(0x000123d8u): goto L_123D8;
    case RC_ADDR(0x000123dcu): goto L_123DC;
    case RC_ADDR(0x000123e0u): goto L_123E0;
    case RC_ADDR(0x000123e4u): goto L_123E4;
    case RC_ADDR(0x000123e6u): goto L_123E6;
    case RC_ADDR(0x000123eau): goto L_123EA;
    case RC_ADDR(0x000123ecu): goto L_123EC;
    case RC_ADDR(0x000123f2u): goto L_123F2;
    case RC_ADDR(0x000123f4u): goto L_123F4;
    case RC_ADDR(0x000123fau): goto L_123FA;
    case RC_ADDR(0x000123feu): goto L_123FE;
    case RC_ADDR(0x00012402u): goto L_12402;
    case RC_ADDR(0x00012404u): goto L_12404;
    case RC_ADDR(0x00012408u): goto L_12408;
    case RC_ADDR(0x0001240au): goto L_1240A;
    case RC_ADDR(0x0001240eu): goto L_1240E;
    case RC_ADDR(0x00012410u): goto L_12410;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11FF8:
    /* 00011ff8   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x00011ff8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_11FFC:
    /* 00011ffc   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x00011ffcu);
    rc_step(c, m, 18);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x00012000u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d32u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f814u);
    return;

L_12000:
    /* 00012000   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00012000u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12004:
    /* 00012004   4  clr.w (856,A4) */
    c->pc = RC_ADDR(0x00012004u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x856u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12008:
    /* 00012008   4  clr.w (14e8,A4) */
    c->pc = RC_ADDR(0x00012008u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14e8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1200C:
    /* 0001200c   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x0001200cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12010:
    /* 00012010   6  cmpi.b #22,(fffff862,A4) */
    c->pc = RC_ADDR(0x00012010u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[4] - 0x79eu));
    rc_cmp(c, RC_B, t0, 0x00000022u);

L_12016:
    /* 00012016   2  bne 00012020 */
    c->pc = RC_ADDR(0x00012016u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_12020;

L_12018:
    /* 00012018   6  move.w #26,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00012018u);
    rc_step(c, m, 16);
    t0 = 0x00000026u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1201E:
    /* 0001201e   2  bra 00012066 */
    c->pc = RC_ADDR(0x0001201eu);
    rc_step(c, m, 10);
    goto L_12066;

L_12020:
    /* 00012020   6  move.w (fffff78c,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00012020u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12026:
    /* 00012026   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00012026u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1202A:
    /* 0001202a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001202au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1202C:
    /* 0001202c   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001202cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12030:
    /* 00012030   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00012030u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_12032:
    /* 00012032   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00012032u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_12034:
    /* 00012034   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00012034u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12038:
    /* 00012038   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00012038u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1203A:
    /* 0001203a   4  lea (fffff8aa,A4),A0 */
    c->pc = RC_ADDR(0x0001203au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x756u);

L_1203E:
    /* 0001203e   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001203eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_12042:
    /* 00012042   2  ext.w D1 */
    c->pc = RC_ADDR(0x00012042u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_12044:
    /* 00012044   4  add.w D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00012044u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_12048:
    /* 00012048   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00012048u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1204C:
    /* 0001204c   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001204cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_12052:
    /* 00012052   2  bcs 0001202a */
    c->pc = RC_ADDR(0x00012052u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1202A; }

L_12054:
    /* 00012054   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00012054u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12058:
    /* 00012058   2  swap D0 */
    c->pc = RC_ADDR(0x00012058u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1205A:
    /* 0001205a   2  clr.w D0 */
    c->pc = RC_ADDR(0x0001205au);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1205C:
    /* 0001205c   2  swap D0 */
    c->pc = RC_ADDR(0x0001205cu);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1205E:
    /* 0001205e   4  divu.w #a,D0 */
    c->pc = RC_ADDR(0x0001205eu);
    rc_step(c, m, 144);
    t0 = 0x0000000au;
    rc_divu(c, m, 0, t0);

L_12062:
    /* 00012062   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00012062u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12066:
    /* 00012066   6  cmpi.w #22,(fffff78c,A4) */
    c->pc = RC_ADDR(0x00012066u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x00000022u);

L_1206C:
    /* 0001206c   2  bne 0001207c */
    c->pc = RC_ADDR(0x0001206cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1207C;

L_1206E:
    /* 0001206e   6  cmpi.w #6,(ffff83e2,A4) */
    c->pc = RC_ADDR(0x0001206eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_12074:
    /* 00012074   2  bge 0001207c */
    c->pc = RC_ADDR(0x00012074u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1207C;

L_12076:
    /* 00012076   6  move.w #a,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00012076u);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1207C:
    /* 0001207c   4  move.w #e9,-(A7) */
    c->pc = RC_ADDR(0x0001207cu);
    rc_step(c, m, 12);
    t0 = 0x000000e9u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12080:
    /* 00012080   4  jsr (ffff808c,A4) */
    c->pc = RC_ADDR(0x00012080u);
    rc_step(c, m, 18);
    /* vector 23 */
    rc_push32(c, m, RC_ADDR(0x00012084u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000080a0u);
    return;

L_12084:
    /* 00012084   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00012084u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_12086:
    /* 00012086   2  tst.w D0 */
    c->pc = RC_ADDR(0x00012086u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_12088:
    /* 00012088   2  beq 0001209c */
    c->pc = RC_ADDR(0x00012088u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1209C;

L_1208A:
    /* 0001208a   6  bset #0,(9,A5) */
    c->pc = RC_ADDR(0x0001208au);
    rc_step(c, m, 20);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_12090:
    /* 00012090   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00012090u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_12094:
    /* 00012094   2  beq 0001209c */
    c->pc = RC_ADDR(0x00012094u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1209C;

L_12096:
    /* 00012096   6  bset #3,(9,A5) */
    c->pc = RC_ADDR(0x00012096u);
    rc_step(c, m, 20);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1209C:
    /* 0001209c   6  btst #2,(9,A5) */
    c->pc = RC_ADDR(0x0001209cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_120A2:
    /* 000120a2   2  beq 000120aa */
    c->pc = RC_ADDR(0x000120a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_120AA;

L_120A4:
    /* 000120a4   6  andi.w #fff6,(8,A5) */
    c->pc = RC_ADDR(0x000120a4u);
    rc_step(c, m, 20);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000fff6u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_120AA:
    /* 000120aa   6  move.w (8,A5),(14e4,A4) */
    c->pc = RC_ADDR(0x000120aau);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0x14e4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_120B0:
    /* 000120b0   4  jsr (ffff81a0,A4) */
    c->pc = RC_ADDR(0x000120b0u);
    rc_step(c, m, 18);
    /* vector 69 */
    rc_push32(c, m, RC_ADDR(0x000120b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c96u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00018764u);
    return;

L_120B4:
    /* 000120b4   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000120b4u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_120B6:
    /* 000120b6   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000120b6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_120BA:
    /* 000120ba   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000120bau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_120BC:
    /* 000120bc   4  lea (ffffb5d8,A4),A0 */
    c->pc = RC_ADDR(0x000120bcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4a28u);

L_120C0:
    /* 000120c0   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000120c0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_120C4:
    /* 000120c4   2  ext.l D1 */
    c->pc = RC_ADDR(0x000120c4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_120C6:
    /* 000120c6   4  divs.w #10,D1 */
    c->pc = RC_ADDR(0x000120c6u);
    rc_step(c, m, 162);
    t0 = 0x00000010u;
    rc_divs(c, m, 1, t0);

L_120CA:
    /* 000120ca   4  move.w D1,(fffffaa6,A4) */
    c->pc = RC_ADDR(0x000120cau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x55au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_120CE:
    /* 000120ce   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000120ceu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_120D0:
    /* 000120d0   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000120d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_120D4:
    /* 000120d4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000120d4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_120D6:
    /* 000120d6   4  lea (ffffb5da,A4),A0 */
    c->pc = RC_ADDR(0x000120d6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4a26u);

L_120DA:
    /* 000120da   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000120dau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_120DE:
    /* 000120de   2  ext.l D1 */
    c->pc = RC_ADDR(0x000120deu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_120E0:
    /* 000120e0   4  divs.w #a,D1 */
    c->pc = RC_ADDR(0x000120e0u);
    rc_step(c, m, 162);
    t0 = 0x0000000au;
    rc_divs(c, m, 1, t0);

L_120E4:
    /* 000120e4   4  move.w D1,(fffffaa4,A4) */
    c->pc = RC_ADDR(0x000120e4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x55cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_120E8:
    /* 000120e8   4  pea (00012414) */
    c->pc = RC_ADDR(0x000120e8u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00012414u));

L_120EC:
    /* 000120ec   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x000120ecu);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x000120f0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_120F0:
    /* 000120f0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000120f0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_120F2:
    /* 000120f2   4  jsr (00012442) */
    c->pc = RC_ADDR(0x000120f2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000120f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00012442u);
    return;

L_120F6:
    /* 000120f6   4  jsr (0001256e) */
    c->pc = RC_ADDR(0x000120f6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000120fau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001256eu);
    return;

L_120FA:
    /* 000120fa   4  jsr (0001269e) */
    c->pc = RC_ADDR(0x000120fau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000120feu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001269eu);
    return;

L_120FE:
    /* 000120fe   4  jsr (0001399e) */
    c->pc = RC_ADDR(0x000120feu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012102u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001399eu);
    return;

L_12102:
    /* 00012102   4  jsr (00017d6a) */
    c->pc = RC_ADDR(0x00012102u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012106u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017d6au);
    return;

L_12106:
    /* 00012106   4  jsr (00018804) */
    c->pc = RC_ADDR(0x00012106u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001210au));
    rc_depth++;
    c->pc = RC_ADDR(0x00018804u);
    return;

L_1210A:
    /* 0001210a   4  jsr (000191fc) */
    c->pc = RC_ADDR(0x0001210au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001210eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000191fcu);
    return;

L_1210E:
    /* 0001210e   4  jsr (00013d26) */
    c->pc = RC_ADDR(0x0001210eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012112u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013d26u);
    return;

L_12112:
    /* 00012112   6  btst #0,(9,A5) */
    c->pc = RC_ADDR(0x00012112u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_12118:
    /* 00012118   2  beq 0001211e */
    c->pc = RC_ADDR(0x00012118u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1211E;

L_1211A:
    /* 0001211a   4  jsr (00016166) */
    c->pc = RC_ADDR(0x0001211au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001211eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016166u);
    return;

L_1211E:
    /* 0001211e   6  btst #1,(9,A5) */
    c->pc = RC_ADDR(0x0001211eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_12124:
    /* 00012124   2  beq 0001213e */
    c->pc = RC_ADDR(0x00012124u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1213E;

L_12126:
    /* 00012126   4  move.w (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00012126u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1212A:
    /* 0001212a   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001212au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1212E:
    /* 0001212e   4  and.w #8,D0 */
    c->pc = RC_ADDR(0x0001212eu);
    rc_step(c, m, 10);
    t0 = 0x00000008u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_12132:
    /* 00012132   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00012132u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12134:
    /* 00012134   4  jsr (00014a28) */
    c->pc = RC_ADDR(0x00012134u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012138u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014a28u);
    return;

L_12138:
    /* 00012138   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00012138u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1213A:
    /* 0001213a   4  jsr (0001925c) */
    c->pc = RC_ADDR(0x0001213au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001213eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001925cu);
    return;

L_1213E:
    /* 0001213e   6  btst #2,(9,A5) */
    c->pc = RC_ADDR(0x0001213eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_12144:
    /* 00012144   2  beq 0001214a */
    c->pc = RC_ADDR(0x00012144u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1214A;

L_12146:
    /* 00012146   4  jsr (00015888) */
    c->pc = RC_ADDR(0x00012146u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001214au));
    rc_depth++;
    c->pc = RC_ADDR(0x00015888u);
    return;

L_1214A:
    /* 0001214a   4  jsr (000158c2) */
    c->pc = RC_ADDR(0x0001214au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001214eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000158c2u);
    return;

L_1214E:
    /* 0001214e   6  btst #3,(9,A5) */
    c->pc = RC_ADDR(0x0001214eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_12154:
    /* 00012154   2  beq 00012160 */
    c->pc = RC_ADDR(0x00012154u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_12160;

L_12156:
    /* 00012156   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00012156u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1215A:
    /* 0001215a   4  jsr (0001669e) */
    c->pc = RC_ADDR(0x0001215au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001215eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001669eu);
    return;

L_1215E:
    /* 0001215e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001215eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_12160:
    /* 00012160   4  jsr (0001667a) */
    c->pc = RC_ADDR(0x00012160u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012164u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001667au);
    return;

L_12164:
    /* 00012164   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x00012164u);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x00012168u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022308u);
    return;

L_12168:
    /* 00012168   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00012168u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1216C:
    /* 0001216c   4  jsr (0001856a) */
    c->pc = RC_ADDR(0x0001216cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012170u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001856au);
    return;

L_12170:
    /* 00012170   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00012170u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_12172:
    /* 00012172   4  pea (ffffa34e,A4) */
    c->pc = RC_ADDR(0x00012172u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x5cb2u));

L_12176:
    /* 00012176   4  jsr (ffff8128,A4) */
    c->pc = RC_ADDR(0x00012176u);
    rc_step(c, m, 18);
    /* vector 49 */
    rc_push32(c, m, RC_ADDR(0x0001217au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c1eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00010070u);
    return;

L_1217A:
    /* 0001217a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001217au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1217C:
    /* 0001217c   6  move.w #9b,(fffff7cc,A4) */
    c->pc = RC_ADDR(0x0001217cu);
    rc_step(c, m, 16);
    t0 = 0x0000009bu;
    rc_wr16(c, m, (c->a[4] - 0x834u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12182:
    /* 00012182   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x00012182u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_12186:
    /* 00012186   4  jsr (ffff80f2,A4) */
    c->pc = RC_ADDR(0x00012186u);
    rc_step(c, m, 18);
    /* vector 40 */
    rc_push32(c, m, RC_ADDR(0x0001218au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023be8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b090u);
    return;

L_1218A:
    /* 0001218a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001218au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1218C:
    /* 0001218c   4  jsr (0001351a) */
    c->pc = RC_ADDR(0x0001218cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012190u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001351au);
    return;

L_12190:
    /* 00012190   4  jsr (000137ba) */
    c->pc = RC_ADDR(0x00012190u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012194u));
    rc_depth++;
    c->pc = RC_ADDR(0x000137bau);
    return;

L_12194:
    /* 00012194   4  jsr (00013700) */
    c->pc = RC_ADDR(0x00012194u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012198u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013700u);
    return;

L_12198:
    /* 00012198   4  jsr (00012f9e) */
    c->pc = RC_ADDR(0x00012198u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001219cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00012f9eu);
    return;

L_1219C:
    /* 0001219c   4  clr.w (14e6,A4) */
    c->pc = RC_ADDR(0x0001219cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14e6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_121A0:
    /* 000121a0   4  clr.w (14ea,A4) */
    c->pc = RC_ADDR(0x000121a0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14eau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_121A4:
    /* 000121a4   4  clr.w (14ec,A4) */
    c->pc = RC_ADDR(0x000121a4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14ecu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_121A8:
    /* 000121a8   4  clr.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x000121a8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4db2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_121AC:
    /* 000121ac   4  clr.w (ffffb258,A4) */
    c->pc = RC_ADDR(0x000121acu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4da8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_121B0:
    /* 000121b0   4  tst.w (14e8,A4) */
    c->pc = RC_ADDR(0x000121b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14e8u));
    rc_set_nzvc(c, t0, RC_W);

L_121B4:
    /* 000121b4   4  bne 000122ba */
    c->pc = RC_ADDR(0x000121b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_122BA;

L_121B8:
    /* 000121b8   6  move.w #1,(fffffa32,A4) */
    c->pc = RC_ADDR(0x000121b8u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x5ceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_121BE:
    /* 000121be   6  btst #1,(9,A5) */
    c->pc = RC_ADDR(0x000121beu);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_121C4:
    /* 000121c4   2  beq 000121ca */
    c->pc = RC_ADDR(0x000121c4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_121CA;

L_121C6:
    /* 000121c6   4  jsr (00014e5a) */
    c->pc = RC_ADDR(0x000121c6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000121cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00014e5au);
    return;

L_121CA:
    /* 000121ca   4  tst.w (fffffa32,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x000121cau), 12,
                RC_ADDR(0x000121ceu), 10, 7,
                RC_ADDR(0x000121d0u), 10,
                (c->a[4] - 0x5ceu), RC_W))
        goto L_121D2;
    c->pc = RC_ADDR(0x000121cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5ceu));
    rc_set_nzvc(c, t0, RC_W);

L_121CE:
    /* 000121ce   2  beq 000121d2 */
    c->pc = RC_ADDR(0x000121ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_121D2;

L_121D0:
    /* 000121d0   2  bra 000121ca */
    c->pc = RC_ADDR(0x000121d0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_121CA;

L_121D2:
    /* 000121d2   6  move.w #1,(14ee,A4) */
    c->pc = RC_ADDR(0x000121d2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14eeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_121D8:
    /* 000121d8   4  tst.w (14ee,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x000121d8u), 12,
                RC_ADDR(0x000121dcu), 10, 7,
                RC_ADDR(0x000121deu), 10,
                (c->a[4] + 0x14eeu), RC_W))
        goto L_121E0;
    c->pc = RC_ADDR(0x000121d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14eeu));
    rc_set_nzvc(c, t0, RC_W);

L_121DC:
    /* 000121dc   2  beq 000121e0 */
    c->pc = RC_ADDR(0x000121dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_121E0;

L_121DE:
    /* 000121de   2  bra 000121d8 */
    c->pc = RC_ADDR(0x000121deu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_121D8;

L_121E0:
    /* 000121e0   6  cmpi.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000121e0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_121E6:
    /* 000121e6   2  bne 000121ec */
    c->pc = RC_ADDR(0x000121e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_121EC;

L_121E8:
    /* 000121e8   4  jsr (0001390a) */
    c->pc = RC_ADDR(0x000121e8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000121ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001390au);
    return;

L_121EC:
    /* 000121ec   6  cmpi.w #2,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000121ecu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_121F2:
    /* 000121f2   2  bcc 000121f8 */
    c->pc = RC_ADDR(0x000121f2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_121F8;

L_121F4:
    /* 000121f4   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000121f4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_121F8:
    /* 000121f8   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x000121f8u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x000121fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_121FC:
    /* 000121fc   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x000121fcu);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12200:
    /* 00012200   4  jsr (00011fac) */
    c->pc = RC_ADDR(0x00012200u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012204u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011facu);
    return;

L_12204:
    /* 00012204   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00012204u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_12206:
    /* 00012206   4  tst.w (fffffacc,A4) */
    c->pc = RC_ADDR(0x00012206u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x534u));
    rc_set_nzvc(c, t0, RC_W);

L_1220A:
    /* 0001220a   2  beq 0001221a */
    c->pc = RC_ADDR(0x0001220au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1221A;

L_1220C:
    /* 0001220c   4  jsr (00014204) */
    c->pc = RC_ADDR(0x0001220cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012210u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014204u);
    return;

L_12210:
    /* 00012210   4  jsr (0001312a) */
    c->pc = RC_ADDR(0x00012210u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012214u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001312au);
    return;

L_12214:
    /* 00012214   4  clr.w (fffffacc,A4) */
    c->pc = RC_ADDR(0x00012214u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x534u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12218:
    /* 00012218   2  bra 0001221e */
    c->pc = RC_ADDR(0x00012218u);
    rc_step(c, m, 10);
    goto L_1221E;

L_1221A:
    /* 0001221a   4  jsr (00012f3c) */
    c->pc = RC_ADDR(0x0001221au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001221eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00012f3cu);
    return;

L_1221E:
    /* 0001221e   4  jsr (00019218) */
    c->pc = RC_ADDR(0x0001221eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012222u));
    rc_depth++;
    c->pc = RC_ADDR(0x00019218u);
    return;

L_12222:
    /* 00012222   4  tst.w (14f0,A4) */
    c->pc = RC_ADDR(0x00012222u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f0u));
    rc_set_nzvc(c, t0, RC_W);

L_12226:
    /* 00012226   2  beq 0001222e */
    c->pc = RC_ADDR(0x00012226u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1222E;

L_12228:
    /* 00012228   4  jsr (000180ee) */
    c->pc = RC_ADDR(0x00012228u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001222cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000180eeu);
    return;

L_1222C:
    /* 0001222c   2  bra 00012232 */
    c->pc = RC_ADDR(0x0001222cu);
    rc_step(c, m, 10);
    goto L_12232;

L_1222E:
    /* 0001222e   4  jsr (00017e90) */
    c->pc = RC_ADDR(0x0001222eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012232u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017e90u);
    return;

L_12232:
    /* 00012232   6  btst #1,(9,A5) */
    c->pc = RC_ADDR(0x00012232u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_12238:
    /* 00012238   2  beq 00012242 */
    c->pc = RC_ADDR(0x00012238u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_12242;

L_1223A:
    /* 0001223a   4  jsr (000192d6) */
    c->pc = RC_ADDR(0x0001223au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001223eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000192d6u);
    return;

L_1223E:
    /* 0001223e   4  jsr (000154d6) */
    c->pc = RC_ADDR(0x0001223eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012242u));
    rc_depth++;
    c->pc = RC_ADDR(0x000154d6u);
    return;

L_12242:
    /* 00012242   4  tst.w (6e8,A4) */
    c->pc = RC_ADDR(0x00012242u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6e8u));
    rc_set_nzvc(c, t0, RC_W);

L_12246:
    /* 00012246   2  beq 0001224c */
    c->pc = RC_ADDR(0x00012246u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1224C;

L_12248:
    /* 00012248   4  jsr (00013a58) */
    c->pc = RC_ADDR(0x00012248u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001224cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00013a58u);
    return;

L_1224C:
    /* 0001224c   6  btst #2,(9,A5) */
    c->pc = RC_ADDR(0x0001224cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_12252:
    /* 00012252   2  beq 0001225e */
    c->pc = RC_ADDR(0x00012252u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1225E;

L_12254:
    /* 00012254   4  tst.w (14f0,A4) */
    c->pc = RC_ADDR(0x00012254u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f0u));
    rc_set_nzvc(c, t0, RC_W);

L_12258:
    /* 00012258   2  bne 0001225e */
    c->pc = RC_ADDR(0x00012258u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1225E;

L_1225A:
    /* 0001225a   4  jsr (00016074) */
    c->pc = RC_ADDR(0x0001225au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001225eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016074u);
    return;

L_1225E:
    /* 0001225e   6  btst #3,(9,A5) */
    c->pc = RC_ADDR(0x0001225eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_12264:
    /* 00012264   2  beq 0001226a */
    c->pc = RC_ADDR(0x00012264u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1226A;

L_12266:
    /* 00012266   4  jsr (0001737a) */
    c->pc = RC_ADDR(0x00012266u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001226au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001737au);
    return;

L_1226A:
    /* 0001226a   4  tst.w (14f0,A4) */
    c->pc = RC_ADDR(0x0001226au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f0u));
    rc_set_nzvc(c, t0, RC_W);

L_1226E:
    /* 0001226e   2  beq 00012274 */
    c->pc = RC_ADDR(0x0001226eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_12274;

L_12270:
    /* 00012270   4  jsr (00015b8e) */
    c->pc = RC_ADDR(0x00012270u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012274u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015b8eu);
    return;

L_12274:
    /* 00012274   4  tst.w (14f0,A4) */
    c->pc = RC_ADDR(0x00012274u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f0u));
    rc_set_nzvc(c, t0, RC_W);

L_12278:
    /* 00012278   2  beq 00012286 */
    c->pc = RC_ADDR(0x00012278u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_12286;

L_1227A:
    /* 0001227a   6  cmpi.w #3,(14f2,A4) */
    c->pc = RC_ADDR(0x0001227au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f2u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_12280:
    /* 00012280   2  bge 00012286 */
    c->pc = RC_ADDR(0x00012280u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_12286;

L_12282:
    /* 00012282   4  jsr (00015f18) */
    c->pc = RC_ADDR(0x00012282u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012286u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f18u);
    return;

L_12286:
    /* 00012286   6  btst #1,(9,A5) */
    c->pc = RC_ADDR(0x00012286u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1228C:
    /* 0001228c   2  beq 00012292 */
    c->pc = RC_ADDR(0x0001228cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_12292;

L_1228E:
    /* 0001228e   4  jsr (000153d4) */
    c->pc = RC_ADDR(0x0001228eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012292u));
    rc_depth++;
    c->pc = RC_ADDR(0x000153d4u);
    return;

L_12292:
    /* 00012292   4  jsr (00013e16) */
    c->pc = RC_ADDR(0x00012292u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00012296u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013e16u);
    return;

L_12296:
    /* 00012296   4  tst.w (14f0,A4) */
    c->pc = RC_ADDR(0x00012296u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f0u));
    rc_set_nzvc(c, t0, RC_W);

L_1229A:
    /* 0001229a   2  beq 000122a8 */
    c->pc = RC_ADDR(0x0001229au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_122A8;

L_1229C:
    /* 0001229c   6  cmpi.w #3,(14f2,A4) */
    c->pc = RC_ADDR(0x0001229cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f2u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_122A2:
    /* 000122a2   2  blt 000122a8 */
    c->pc = RC_ADDR(0x000122a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_122A8;

L_122A4:
    /* 000122a4   4  jsr (00015f18) */
    c->pc = RC_ADDR(0x000122a4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000122a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00015f18u);
    return;

L_122A8:
    /* 000122a8   4  tst.w (14f4,A4) */
    c->pc = RC_ADDR(0x000122a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f4u));
    rc_set_nzvc(c, t0, RC_W);

L_122AC:
    /* 000122ac   2  beq 000122b2 */
    c->pc = RC_ADDR(0x000122acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_122B2;

L_122AE:
    /* 000122ae   4  jsr (00016420) */
    c->pc = RC_ADDR(0x000122aeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000122b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016420u);
    return;

L_122B2:
    /* 000122b2   4  jsr (ffff83ce,A4) */
    c->pc = RC_ADDR(0x000122b2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000122b6u));
    rc_depth++;
    t3 = (c->a[4] - 0x7c32u);
    c->pc = t3;
    return;

L_122B6:
    /* 000122b6   4  bra 000121b0 */
    c->pc = RC_ADDR(0x000122b6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_121B0;

L_122BA:
    /* 000122ba   4  clr.w (ffffb254,A4) */
    c->pc = RC_ADDR(0x000122bau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4dacu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_122BE:
    /* 000122be   4  jsr (00018254) */
    c->pc = RC_ADDR(0x000122beu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000122c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018254u);
    return;

L_122C2:
    /* 000122c2   4  jsr (00013436) */
    c->pc = RC_ADDR(0x000122c2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000122c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013436u);
    return;

L_122C6:
    /* 000122c6   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x000122c6u);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x000122cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_122CA:
    /* 000122ca   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x000122cau);
    rc_step(c, m, 18);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x000122ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afb8u);
    return;

L_122CE:
    /* 000122ce   4  jsr (00018c2a) */
    c->pc = RC_ADDR(0x000122ceu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000122d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018c2au);
    return;

L_122D2:
    /* 000122d2   4  jsr (00013770) */
    c->pc = RC_ADDR(0x000122d2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000122d6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013770u);
    return;

L_122D6:
    /* 000122d6   4  jsr (0001394a) */
    c->pc = RC_ADDR(0x000122d6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000122dau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001394au);
    return;

L_122DA:
    /* 000122da   4  jsr (0001287c) */
    c->pc = RC_ADDR(0x000122dau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000122deu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001287cu);
    return;

L_122DE:
    /* 000122de   4  jsr (00017e26) */
    c->pc = RC_ADDR(0x000122deu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000122e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00017e26u);
    return;

L_122E2:
    /* 000122e2   4  jsr (ffff8194,A4) */
    c->pc = RC_ADDR(0x000122e2u);
    rc_step(c, m, 18);
    /* vector 67 */
    rc_push32(c, m, RC_ADDR(0x000122e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c8au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00018442u);
    return;

L_122E6:
    /* 000122e6   4  jsr (00012520) */
    c->pc = RC_ADDR(0x000122e6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000122eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00012520u);
    return;

L_122EA:
    /* 000122ea   4  tst.w (14f6,A4) */
    c->pc = RC_ADDR(0x000122eau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f6u));
    rc_set_nzvc(c, t0, RC_W);

L_122EE:
    /* 000122ee   2  bne 000122f4 */
    c->pc = RC_ADDR(0x000122eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_122F4;

L_122F0:
    /* 000122f0   4  jsr (00019134) */
    c->pc = RC_ADDR(0x000122f0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000122f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00019134u);
    return;

L_122F4:
    /* 000122f4   4  jsr (0001866a) */
    c->pc = RC_ADDR(0x000122f4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000122f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001866au);
    return;

L_122F8:
    /* 000122f8   4  tst.w (856,A4) */
    c->pc = RC_ADDR(0x000122f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x856u));
    rc_set_nzvc(c, t0, RC_W);

L_122FC:
    /* 000122fc   2  bne 0001232e */
    c->pc = RC_ADDR(0x000122fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1232E;

L_122FE:
    /* 000122fe   6  cmpi.w #27,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000122feu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_12304:
    /* 00012304   2  bcc 0001232e */
    c->pc = RC_ADDR(0x00012304u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1232E;

L_12306:
    /* 00012306   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00012306u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1230A:
    /* 0001230a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001230au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1230C:
    /* 0001230c   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001230cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12310:
    /* 00012310   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00012310u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_12312:
    /* 00012312   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00012312u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_12314:
    /* 00012314   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00012314u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12318:
    /* 00012318   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00012318u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1231A:
    /* 0001231a   4  lea (fffff8aa,A4),A0 */
    c->pc = RC_ADDR(0x0001231au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x756u);

L_1231E:
    /* 0001231e   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001231eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_12322:
    /* 00012322   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00012322u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_12326:
    /* 00012326   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00012326u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_1232C:
    /* 0001232c   2  bcs 0001230a */
    c->pc = RC_ADDR(0x0001232cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1230A; }

L_1232E:
    /* 0001232e   4  tst.w (14f6,A4) */
    c->pc = RC_ADDR(0x0001232eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f6u));
    rc_set_nzvc(c, t0, RC_W);

L_12332:
    /* 00012332   4  beq 00012410 */
    c->pc = RC_ADDR(0x00012332u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_12410;

L_12336:
    /* 00012336   4  clr.w (14f6,A4) */
    c->pc = RC_ADDR(0x00012336u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14f6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1233A:
    /* 0001233a   4  jsr (0000d83c) */
    c->pc = RC_ADDR(0x0001233au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001233eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000d83cu);
    return;

L_1233E:
    /* 0001233e   4  clr.w (ffff8d96,A4) */
    c->pc = RC_ADDR(0x0001233eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x726au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12342:
    /* 00012342   4  clr.w (ffff83f2,A4) */
    c->pc = RC_ADDR(0x00012342u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c0eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12346:
    /* 00012346   4  clr.w (ffff85a2,A4) */
    c->pc = RC_ADDR(0x00012346u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a5eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1234A:
    /* 0001234a   6  cmpi.w #1,(111a,A4) */
    c->pc = RC_ADDR(0x0001234au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x111au));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_12350:
    /* 00012350   2  bne 00012360 */
    c->pc = RC_ADDR(0x00012350u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_12360;

L_12352:
    /* 00012352   4  move.w #f9,-(A7) */
    c->pc = RC_ADDR(0x00012352u);
    rc_step(c, m, 12);
    t0 = 0x000000f9u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12356:
    /* 00012356   4  jsr (ffff8044,A4) */
    c->pc = RC_ADDR(0x00012356u);
    rc_step(c, m, 18);
    /* vector 11 */
    rc_push32(c, m, RC_ADDR(0x0001235au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b3au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000302cu);
    return;

L_1235A:
    /* 0001235a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001235au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1235C:
    /* 0001235c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001235cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1235E:
    /* 0001235e   2  rts */
    c->pc = RC_ADDR(0x0001235eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_12360:
    /* 00012360   4  tst.w (111a,A4) */
    c->pc = RC_ADDR(0x00012360u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x111au));
    rc_set_nzvc(c, t0, RC_W);

L_12364:
    /* 00012364   2  bne 0001236e */
    c->pc = RC_ADDR(0x00012364u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1236E;

L_12366:
    /* 00012366   4  tst.w (856,A4) */
    c->pc = RC_ADDR(0x00012366u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x856u));
    rc_set_nzvc(c, t0, RC_W);

L_1236A:
    /* 0001236a   4  beq 000123fe */
    c->pc = RC_ADDR(0x0001236au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_123FE;

L_1236E:
    /* 0001236e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001236eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12372:
    /* 00012372   4  pea (0001242d) */
    c->pc = RC_ADDR(0x00012372u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001242du));

L_12376:
    /* 00012376   4  pea (00012421) */
    c->pc = RC_ADDR(0x00012376u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00012421u));

L_1237A:
    /* 0001237a   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0001237au);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0001237eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_1237E:
    /* 0001237e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001237eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_12382:
    /* 00012382   4  pea (cde,A4) */
    c->pc = RC_ADDR(0x00012382u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xcdeu));

L_12386:
    /* 00012386   4  pea (14f8,A4) */
    c->pc = RC_ADDR(0x00012386u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x14f8u));

L_1238A:
    /* 0001238a   4  pea (00012431) */
    c->pc = RC_ADDR(0x0001238au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00012431u));

L_1238E:
    /* 0001238e   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0001238eu);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x00012392u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_12392:
    /* 00012392   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00012392u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_12396:
    /* 00012396   4  move.l D0,(ffffb370,A4) */
    c->pc = RC_ADDR(0x00012396u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x4c90u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1239A:
    /* 0001239a   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0001239au);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1239E:
    /* 0001239e   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001239eu);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_123A2:
    /* 000123a2   4  move.l (cde,A4),-(A7) */
    c->pc = RC_ADDR(0x000123a2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcdeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_123A6:
    /* 000123a6   4  move.w #44c,-(A7) */
    c->pc = RC_ADDR(0x000123a6u);
    rc_step(c, m, 12);
    t0 = 0x0000044cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_123AA:
    /* 000123aa   4  move.l (ffffb370,A4),-(A7) */
    c->pc = RC_ADDR(0x000123aau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c90u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_123AE:
    /* 000123ae   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x000123aeu);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x000123b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_123B2:
    /* 000123b2   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x000123b2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_123B6:
    /* 000123b6   4  pea (00000005).l */
    c->pc = RC_ADDR(0x000123b6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000005u);

L_123BA:
    /* 000123ba   4  jsr (ffff8326,A4) */
    c->pc = RC_ADDR(0x000123bau);
    rc_step(c, m, 18);
    /* vector 134 */
    rc_push32(c, m, RC_ADDR(0x000123beu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e1cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234cau);
    return;

L_123BE:
    /* 000123be   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000123beu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_123C0:
    /* 000123c0   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x000123c0u);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_123C4:
    /* 000123c4   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x000123c4u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_123C8:
    /* 000123c8   4  move.l (cde,A4),-(A7) */
    c->pc = RC_ADDR(0x000123c8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcdeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_123CC:
    /* 000123cc   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x000123ccu);
    rc_step(c, m, 12);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_123D0:
    /* 000123d0   4  move.l (ffffb370,A4),-(A7) */
    c->pc = RC_ADDR(0x000123d0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c90u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_123D4:
    /* 000123d4   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x000123d4u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x000123d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_123D8:
    /* 000123d8   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x000123d8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_123DC:
    /* 000123dc   4  pea (00000096).l */
    c->pc = RC_ADDR(0x000123dcu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000096u);

L_123E0:
    /* 000123e0   4  jsr (ffff8326,A4) */
    c->pc = RC_ADDR(0x000123e0u);
    rc_step(c, m, 18);
    /* vector 134 */
    rc_push32(c, m, RC_ADDR(0x000123e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e1cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234cau);
    return;

L_123E4:
    /* 000123e4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000123e4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_123E6:
    /* 000123e6   4  tst.w (856,A4) */
    c->pc = RC_ADDR(0x000123e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x856u));
    rc_set_nzvc(c, t0, RC_W);

L_123EA:
    /* 000123ea   2  beq 000123f4 */
    c->pc = RC_ADDR(0x000123eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_123F4;

L_123EC:
    /* 000123ec   6  move.w #1,(ffff9582,A4) */
    c->pc = RC_ADDR(0x000123ecu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x6a7eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_123F2:
    /* 000123f2   2  bra 000123fa */
    c->pc = RC_ADDR(0x000123f2u);
    rc_step(c, m, 10);
    goto L_123FA;

L_123F4:
    /* 000123f4   6  move.w #2,(ffff9582,A4) */
    c->pc = RC_ADDR(0x000123f4u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] - 0x6a7eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_123FA:
    /* 000123fa   4  jsr (ffff8104,A4) */
    c->pc = RC_ADDR(0x000123fau);
    rc_step(c, m, 18);
    /* vector 43 */
    rc_push32(c, m, RC_ADDR(0x000123feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bfau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b9deu);
    return;

L_123FE:
    /* 000123fe   4  tst.w (858,A4) */
    c->pc = RC_ADDR(0x000123feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x858u));
    rc_set_nzvc(c, t0, RC_W);

L_12402:
    /* 00012402   2  beq 00012408 */
    c->pc = RC_ADDR(0x00012402u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_12408;

L_12404:
    /* 00012404   4  bra 0001235c */
    c->pc = RC_ADDR(0x00012404u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1235C;

L_12408:
    /* 00012408   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00012408u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1240A:
    /* 0001240a   4  jsr (ffff8044,A4) */
    c->pc = RC_ADDR(0x0001240au);
    rc_step(c, m, 18);
    /* vector 11 */
    rc_push32(c, m, RC_ADDR(0x0001240eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b3au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000302cu);
    return;

L_1240E:
    /* 0001240e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001240eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_12410:
    /* 00012410   4  bra 0001235c */
    c->pc = RC_ADDR(0x00012410u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1235C;

}
