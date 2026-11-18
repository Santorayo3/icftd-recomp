/* fn_00014204 - 252 byte(s), 90 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00014204(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00014204u): goto L_14204;
    case RC_ADDR(0x00014208u): goto L_14208;
    case RC_ADDR(0x0001420cu): goto L_1420C;
    case RC_ADDR(0x0001420eu): goto L_1420E;
    case RC_ADDR(0x00014210u): goto L_14210;
    case RC_ADDR(0x00014214u): goto L_14214;
    case RC_ADDR(0x00014218u): goto L_14218;
    case RC_ADDR(0x0001421cu): goto L_1421C;
    case RC_ADDR(0x00014220u): goto L_14220;
    case RC_ADDR(0x00014222u): goto L_14222;
    case RC_ADDR(0x00014226u): goto L_14226;
    case RC_ADDR(0x00014228u): goto L_14228;
    case RC_ADDR(0x0001422au): goto L_1422A;
    case RC_ADDR(0x0001422cu): goto L_1422C;
    case RC_ADDR(0x0001422eu): goto L_1422E;
    case RC_ADDR(0x00014230u): goto L_14230;
    case RC_ADDR(0x00014232u): goto L_14232;
    case RC_ADDR(0x00014234u): goto L_14234;
    case RC_ADDR(0x00014236u): goto L_14236;
    case RC_ADDR(0x00014238u): goto L_14238;
    case RC_ADDR(0x0001423au): goto L_1423A;
    case RC_ADDR(0x0001423eu): goto L_1423E;
    case RC_ADDR(0x00014240u): goto L_14240;
    case RC_ADDR(0x00014242u): goto L_14242;
    case RC_ADDR(0x00014244u): goto L_14244;
    case RC_ADDR(0x00014246u): goto L_14246;
    case RC_ADDR(0x00014248u): goto L_14248;
    case RC_ADDR(0x0001424cu): goto L_1424C;
    case RC_ADDR(0x00014250u): goto L_14250;
    case RC_ADDR(0x00014252u): goto L_14252;
    case RC_ADDR(0x00014256u): goto L_14256;
    case RC_ADDR(0x0001425au): goto L_1425A;
    case RC_ADDR(0x0001425cu): goto L_1425C;
    case RC_ADDR(0x0001425eu): goto L_1425E;
    case RC_ADDR(0x00014262u): goto L_14262;
    case RC_ADDR(0x00014264u): goto L_14264;
    case RC_ADDR(0x00014268u): goto L_14268;
    case RC_ADDR(0x0001426au): goto L_1426A;
    case RC_ADDR(0x0001426cu): goto L_1426C;
    case RC_ADDR(0x00014270u): goto L_14270;
    case RC_ADDR(0x00014272u): goto L_14272;
    case RC_ADDR(0x00014276u): goto L_14276;
    case RC_ADDR(0x00014278u): goto L_14278;
    case RC_ADDR(0x0001427au): goto L_1427A;
    case RC_ADDR(0x0001427eu): goto L_1427E;
    case RC_ADDR(0x00014280u): goto L_14280;
    case RC_ADDR(0x00014284u): goto L_14284;
    case RC_ADDR(0x00014288u): goto L_14288;
    case RC_ADDR(0x0001428cu): goto L_1428C;
    case RC_ADDR(0x00014290u): goto L_14290;
    case RC_ADDR(0x00014292u): goto L_14292;
    case RC_ADDR(0x00014294u): goto L_14294;
    case RC_ADDR(0x00014296u): goto L_14296;
    case RC_ADDR(0x00014298u): goto L_14298;
    case RC_ADDR(0x0001429au): goto L_1429A;
    case RC_ADDR(0x0001429cu): goto L_1429C;
    case RC_ADDR(0x0001429eu): goto L_1429E;
    case RC_ADDR(0x000142a0u): goto L_142A0;
    case RC_ADDR(0x000142a2u): goto L_142A2;
    case RC_ADDR(0x000142a6u): goto L_142A6;
    case RC_ADDR(0x000142a8u): goto L_142A8;
    case RC_ADDR(0x000142aeu): goto L_142AE;
    case RC_ADDR(0x000142b0u): goto L_142B0;
    case RC_ADDR(0x000142b2u): goto L_142B2;
    case RC_ADDR(0x000142b4u): goto L_142B4;
    case RC_ADDR(0x000142b6u): goto L_142B6;
    case RC_ADDR(0x000142b8u): goto L_142B8;
    case RC_ADDR(0x000142bcu): goto L_142BC;
    case RC_ADDR(0x000142beu): goto L_142BE;
    case RC_ADDR(0x000142c4u): goto L_142C4;
    case RC_ADDR(0x000142c8u): goto L_142C8;
    case RC_ADDR(0x000142cau): goto L_142CA;
    case RC_ADDR(0x000142ccu): goto L_142CC;
    case RC_ADDR(0x000142ceu): goto L_142CE;
    case RC_ADDR(0x000142d0u): goto L_142D0;
    case RC_ADDR(0x000142d2u): goto L_142D2;
    case RC_ADDR(0x000142d6u): goto L_142D6;
    case RC_ADDR(0x000142d8u): goto L_142D8;
    case RC_ADDR(0x000142deu): goto L_142DE;
    case RC_ADDR(0x000142e0u): goto L_142E0;
    case RC_ADDR(0x000142e2u): goto L_142E2;
    case RC_ADDR(0x000142e4u): goto L_142E4;
    case RC_ADDR(0x000142e6u): goto L_142E6;
    case RC_ADDR(0x000142e8u): goto L_142E8;
    case RC_ADDR(0x000142ecu): goto L_142EC;
    case RC_ADDR(0x000142eeu): goto L_142EE;
    case RC_ADDR(0x000142f4u): goto L_142F4;
    case RC_ADDR(0x000142f8u): goto L_142F8;
    case RC_ADDR(0x000142fcu): goto L_142FC;
    case RC_ADDR(0x000142feu): goto L_142FE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14204:
    /* 00014204   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00014204u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_14208:
    /* 00014208   4  movem.l { D0 D1 D2 D3 A0 A1 A2 },-(SP) */
    c->pc = RC_ADDR(0x00014208u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    c->a[7] = t3;

L_1420C:
    /* 0001420c   2  clr.l D0 */
    c->pc = RC_ADDR(0x0001420cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1420E:
    /* 0001420e   2  clr.l D1 */
    c->pc = RC_ADDR(0x0001420eu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_14210:
    /* 00014210   4  move.w (1148,A4),D0 */
    c->pc = RC_ADDR(0x00014210u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1148u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14214:
    /* 00014214   4  divu.w #14,D0 */
    c->pc = RC_ADDR(0x00014214u);
    rc_step(c, m, 144);
    t0 = 0x00000014u;
    rc_divu(c, m, 0, t0);

L_14218:
    /* 00014218   4  move.w (114a,A4),D1 */
    c->pc = RC_ADDR(0x00014218u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x114au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1421C:
    /* 0001421c   4  divu.w #14,D1 */
    c->pc = RC_ADDR(0x0001421cu);
    rc_step(c, m, 144);
    t0 = 0x00000014u;
    rc_divu(c, m, 1, t0);

L_14220:
    /* 00014220   2  move.l D1,D3 */
    c->pc = RC_ADDR(0x00014220u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 3, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_14222:
    /* 00014222   4  mulu.w #3c,D1 */
    c->pc = RC_ADDR(0x00014222u);
    rc_step(c, m, 42);
    t0 = 0x0000003cu;
    rc_mulu(c, 1, t0);

L_14226:
    /* 00014226   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x00014226u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14228:
    /* 00014228   2  swap D0 */
    c->pc = RC_ADDR(0x00014228u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1422A:
    /* 0001422a   2  swap D3 */
    c->pc = RC_ADDR(0x0001422au);
    rc_step(c, m, 4);
    t0 = c->d[3];
    c->d[3] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[3], RC_L);

L_1422C:
    /* 0001422c   2  move.w D0,D2 */
    c->pc = RC_ADDR(0x0001422cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1422E:
    /* 0001422e   2  clr.l D0 */
    c->pc = RC_ADDR(0x0001422eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_14230:
    /* 00014230   2  clr.l D4 */
    c->pc = RC_ADDR(0x00014230u);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_14232:
    /* 00014232   2  clr.l D5 */
    c->pc = RC_ADDR(0x00014232u);
    rc_step(c, m, 6);
    rc_d_set(c, 5, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_14234:
    /* 00014234   2  clr.l D6 */
    c->pc = RC_ADDR(0x00014234u);
    rc_step(c, m, 6);
    rc_d_set(c, 6, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_14236:
    /* 00014236   2  move.w D2,D4 */
    c->pc = RC_ADDR(0x00014236u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14238:
    /* 00014238   2  move.w D3,D5 */
    c->pc = RC_ADDR(0x00014238u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1423A:
    /* 0001423a   4  mulu.w #14,D4 */
    c->pc = RC_ADDR(0x0001423au);
    rc_step(c, m, 42);
    t0 = 0x00000014u;
    rc_mulu(c, 4, t0);

L_1423E:
    /* 0001423e   2  move.w D4,D6 */
    c->pc = RC_ADDR(0x0001423eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14240:
    /* 00014240   2  lsl.w #1,D6 */
    c->pc = RC_ADDR(0x00014240u);
    rc_step(c, m, 6);
    rc_d_set(c, 6, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 6, RC_W), RC_W));

L_14242:
    /* 00014242   2  add.w D5,D4 */
    c->pc = RC_ADDR(0x00014242u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_14244:
    /* 00014244   2  lsl.w #1,D4 */
    c->pc = RC_ADDR(0x00014244u);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 4, RC_W), RC_W));

L_14246:
    /* 00014246   2  lsl.w #1,D5 */
    c->pc = RC_ADDR(0x00014246u);
    rc_step(c, m, 6);
    rc_d_set(c, 5, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 5, RC_W), RC_W));

L_14248:
    /* 00014248   4  lea (ffffa43a,A4),A5 */
    c->pc = RC_ADDR(0x00014248u);
    rc_step(c, m, 8);
    c->a[5] = (c->a[4] - 0x5bc6u);

L_1424C:
    /* 0001424c   4  move.b (0,A5,D1.w),D0 */
    c->pc = RC_ADDR(0x0001424cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd8(c, m, (c->a[5] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_14250:
    /* 00014250   2  lsl.w #2,D0 */
    c->pc = RC_ADDR(0x00014250u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_14252:
    /* 00014252   4  lea (1502,A4),A6 */
    c->pc = RC_ADDR(0x00014252u);
    rc_step(c, m, 8);
    c->a[6] = (c->a[4] + 0x1502u);

L_14256:
    /* 00014256   4  movea.l (0,A6,D0.w),A0 */
    c->pc = RC_ADDR(0x00014256u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd32(c, m, (c->a[6] + 0x0u + t4));
    c->a[0] = t0;

L_1425A:
    /* 0001425a   2  adda.l D4,A0 */
    c->pc = RC_ADDR(0x0001425au);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] += t0;

L_1425C:
    /* 0001425c   2  clr.w D0 */
    c->pc = RC_ADDR(0x0001425cu);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1425E:
    /* 0001425e   4  move.b (1,A5,D1.w),D0 */
    c->pc = RC_ADDR(0x0001425eu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd8(c, m, (c->a[5] + 0x1u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_14262:
    /* 00014262   2  lsl.w #2,D0 */
    c->pc = RC_ADDR(0x00014262u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_14264:
    /* 00014264   4  movea.l (0,A6,D0.w),A1 */
    c->pc = RC_ADDR(0x00014264u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd32(c, m, (c->a[6] + 0x0u + t4));
    c->a[1] = t0;

L_14268:
    /* 00014268   2  adda.l D5,A1 */
    c->pc = RC_ADDR(0x00014268u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 5, RC_L);
    c->a[1] += t0;

L_1426A:
    /* 0001426a   2  clr.w D0 */
    c->pc = RC_ADDR(0x0001426au);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1426C:
    /* 0001426c   4  move.b (3c,A5,D1.w),D0 */
    c->pc = RC_ADDR(0x0001426cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd8(c, m, (c->a[5] + 0x3cu + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_14270:
    /* 00014270   2  lsl.w #2,D0 */
    c->pc = RC_ADDR(0x00014270u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_14272:
    /* 00014272   4  movea.l (0,A6,D0.w),A2 */
    c->pc = RC_ADDR(0x00014272u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd32(c, m, (c->a[6] + 0x0u + t4));
    c->a[2] = t0;

L_14276:
    /* 00014276   2  adda.l D6,A2 */
    c->pc = RC_ADDR(0x00014276u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 6, RC_L);
    c->a[2] += t0;

L_14278:
    /* 00014278   2  clr.w D0 */
    c->pc = RC_ADDR(0x00014278u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1427A:
    /* 0001427a   4  move.b (3d,A5,D1.w),D0 */
    c->pc = RC_ADDR(0x0001427au);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd8(c, m, (c->a[5] + 0x3du + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1427E:
    /* 0001427e   2  lsl.w #2,D0 */
    c->pc = RC_ADDR(0x0001427eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_14280:
    /* 00014280   4  movea.l (0,A6,D0.w),A3 */
    c->pc = RC_ADDR(0x00014280u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd32(c, m, (c->a[6] + 0x0u + t4));
    c->a[3] = t0;

L_14284:
    /* 00014284   4  movea.l (fffffaa0,A4),A5 */
    c->pc = RC_ADDR(0x00014284u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[5] = t0;

L_14288:
    /* 00014288   4  move.w #14,D0 */
    c->pc = RC_ADDR(0x00014288u);
    rc_step(c, m, 8);
    t0 = 0x00000014u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1428C:
    /* 0001428c   4  move.w #14,D1 */
    c->pc = RC_ADDR(0x0001428cu);
    rc_step(c, m, 8);
    t0 = 0x00000014u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14290:
    /* 00014290   2  sub.w D2,D0 */
    c->pc = RC_ADDR(0x00014290u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14292:
    /* 00014292   2  sub.w D3,D1 */
    c->pc = RC_ADDR(0x00014292u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14294:
    /* 00014294   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00014294u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14296:
    /* 00014296   2  subq.w #1,D1 */
    c->pc = RC_ADDR(0x00014296u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14298:
    /* 00014298   2  subq.w #1,D2 */
    c->pc = RC_ADDR(0x00014298u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1429A:
    /* 0001429a   2  subq.w #1,D3 */
    c->pc = RC_ADDR(0x0001429au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_1429C:
    /* 0001429c   2  move.w D1,D4 */
    c->pc = RC_ADDR(0x0001429cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1429E:
    /* 0001429e   2  movea.l A0,A6 */
    c->pc = RC_ADDR(0x0001429eu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[6] = t0;

L_142A0:
    /* 000142a0   2  move.w (A0)+,(A5)+ */
    c->pc = RC_ADDR(0x000142a0u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    t3 = c->a[5];
    c->a[5] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_142A2:
    /* 000142a2   4  dbf D4,000142a0 */
    c->pc = RC_ADDR(0x000142a2u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 4, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 4, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_142A0; }
    }

L_142A6:
    /* 000142a6   2  movea.l A6,A0 */
    c->pc = RC_ADDR(0x000142a6u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 6, RC_L);
    c->a[0] = t0;

L_142A8:
    /* 000142a8   6  adda.l #28,A0 */
    c->pc = RC_ADDR(0x000142a8u);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    c->a[0] += t0;

L_142AE:
    /* 000142ae   2  tst.w D3 */
    c->pc = RC_ADDR(0x000142aeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_142B0:
    /* 000142b0   2  bmi 000142c4 */
    c->pc = RC_ADDR(0x000142b0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_142C4;

L_142B2:
    /* 000142b2   2  move.w D3,D4 */
    c->pc = RC_ADDR(0x000142b2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_142B4:
    /* 000142b4   2  movea.l A2,A6 */
    c->pc = RC_ADDR(0x000142b4u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[6] = t0;

L_142B6:
    /* 000142b6   2  move.w (A2)+,(A5)+ */
    c->pc = RC_ADDR(0x000142b6u);
    rc_step(c, m, 12);
    t3 = c->a[2];
    c->a[2] += 2u;
    t0 = rc_rd16(c, m, t3);
    t3 = c->a[5];
    c->a[5] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_142B8:
    /* 000142b8   4  dbf D4,000142b6 */
    c->pc = RC_ADDR(0x000142b8u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 4, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 4, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_142B6; }
    }

L_142BC:
    /* 000142bc   2  movea.l A6,A2 */
    c->pc = RC_ADDR(0x000142bcu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 6, RC_L);
    c->a[2] = t0;

L_142BE:
    /* 000142be   6  adda.l #28,A2 */
    c->pc = RC_ADDR(0x000142beu);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    c->a[2] += t0;

L_142C4:
    /* 000142c4   4  dbf D0,0001429c */
    c->pc = RC_ADDR(0x000142c4u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1429C; }
    }

L_142C8:
    /* 000142c8   2  tst.w D2 */
    c->pc = RC_ADDR(0x000142c8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_142CA:
    /* 000142ca   2  bmi 000142f8 */
    c->pc = RC_ADDR(0x000142cau);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_142F8;

L_142CC:
    /* 000142cc   2  move.w D1,D4 */
    c->pc = RC_ADDR(0x000142ccu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_142CE:
    /* 000142ce   2  movea.l A1,A6 */
    c->pc = RC_ADDR(0x000142ceu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[6] = t0;

L_142D0:
    /* 000142d0   2  move.w (A1)+,(A5)+ */
    c->pc = RC_ADDR(0x000142d0u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    t3 = c->a[5];
    c->a[5] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_142D2:
    /* 000142d2   4  dbf D4,000142d0 */
    c->pc = RC_ADDR(0x000142d2u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 4, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 4, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_142D0; }
    }

L_142D6:
    /* 000142d6   2  movea.l A6,A1 */
    c->pc = RC_ADDR(0x000142d6u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 6, RC_L);
    c->a[1] = t0;

L_142D8:
    /* 000142d8   6  adda.l #28,A1 */
    c->pc = RC_ADDR(0x000142d8u);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    c->a[1] += t0;

L_142DE:
    /* 000142de   2  tst.w D3 */
    c->pc = RC_ADDR(0x000142deu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_142E0:
    /* 000142e0   2  bmi 000142f4 */
    c->pc = RC_ADDR(0x000142e0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_142F4;

L_142E2:
    /* 000142e2   2  move.w D3,D4 */
    c->pc = RC_ADDR(0x000142e2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_142E4:
    /* 000142e4   2  movea.l A3,A6 */
    c->pc = RC_ADDR(0x000142e4u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[6] = t0;

L_142E6:
    /* 000142e6   2  move.w (A3)+,(A5)+ */
    c->pc = RC_ADDR(0x000142e6u);
    rc_step(c, m, 12);
    t3 = c->a[3];
    c->a[3] += 2u;
    t0 = rc_rd16(c, m, t3);
    t3 = c->a[5];
    c->a[5] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_142E8:
    /* 000142e8   4  dbf D4,000142e6 */
    c->pc = RC_ADDR(0x000142e8u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 4, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 4, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_142E6; }
    }

L_142EC:
    /* 000142ec   2  movea.l A6,A3 */
    c->pc = RC_ADDR(0x000142ecu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 6, RC_L);
    c->a[3] = t0;

L_142EE:
    /* 000142ee   6  adda.l #28,A3 */
    c->pc = RC_ADDR(0x000142eeu);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    c->a[3] += t0;

L_142F4:
    /* 000142f4   4  dbf D2,000142cc */
    c->pc = RC_ADDR(0x000142f4u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_142CC; }
    }

L_142F8:
    /* 000142f8   4  movem.l (SP)+,{ D5 D6 D7 A4 A5 A6 A7 } */
    c->pc = RC_ADDR(0x000142f8u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_142FC:
    /* 000142fc   2  unlk A5 */
    c->pc = RC_ADDR(0x000142fcu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_142FE:
    /* 000142fe   2  rts */
    c->pc = RC_ADDR(0x000142feu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
