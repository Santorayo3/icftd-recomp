/* fn_0000a220 - 276 byte(s), 85 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000a220(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a220u): goto L_A220;
    case RC_ADDR(0x0000a224u): goto L_A224;
    case RC_ADDR(0x0000a228u): goto L_A228;
    case RC_ADDR(0x0000a22cu): goto L_A22C;
    case RC_ADDR(0x0000a22eu): goto L_A22E;
    case RC_ADDR(0x0000a230u): goto L_A230;
    case RC_ADDR(0x0000a234u): goto L_A234;
    case RC_ADDR(0x0000a236u): goto L_A236;
    case RC_ADDR(0x0000a23au): goto L_A23A;
    case RC_ADDR(0x0000a23eu): goto L_A23E;
    case RC_ADDR(0x0000a240u): goto L_A240;
    case RC_ADDR(0x0000a242u): goto L_A242;
    case RC_ADDR(0x0000a246u): goto L_A246;
    case RC_ADDR(0x0000a24au): goto L_A24A;
    case RC_ADDR(0x0000a250u): goto L_A250;
    case RC_ADDR(0x0000a252u): goto L_A252;
    case RC_ADDR(0x0000a256u): goto L_A256;
    case RC_ADDR(0x0000a25au): goto L_A25A;
    case RC_ADDR(0x0000a25eu): goto L_A25E;
    case RC_ADDR(0x0000a260u): goto L_A260;
    case RC_ADDR(0x0000a264u): goto L_A264;
    case RC_ADDR(0x0000a268u): goto L_A268;
    case RC_ADDR(0x0000a26au): goto L_A26A;
    case RC_ADDR(0x0000a26cu): goto L_A26C;
    case RC_ADDR(0x0000a270u): goto L_A270;
    case RC_ADDR(0x0000a274u): goto L_A274;
    case RC_ADDR(0x0000a276u): goto L_A276;
    case RC_ADDR(0x0000a278u): goto L_A278;
    case RC_ADDR(0x0000a27cu): goto L_A27C;
    case RC_ADDR(0x0000a280u): goto L_A280;
    case RC_ADDR(0x0000a284u): goto L_A284;
    case RC_ADDR(0x0000a288u): goto L_A288;
    case RC_ADDR(0x0000a28au): goto L_A28A;
    case RC_ADDR(0x0000a28eu): goto L_A28E;
    case RC_ADDR(0x0000a292u): goto L_A292;
    case RC_ADDR(0x0000a296u): goto L_A296;
    case RC_ADDR(0x0000a298u): goto L_A298;
    case RC_ADDR(0x0000a29cu): goto L_A29C;
    case RC_ADDR(0x0000a2a0u): goto L_A2A0;
    case RC_ADDR(0x0000a2a2u): goto L_A2A2;
    case RC_ADDR(0x0000a2a4u): goto L_A2A4;
    case RC_ADDR(0x0000a2a6u): goto L_A2A6;
    case RC_ADDR(0x0000a2a8u): goto L_A2A8;
    case RC_ADDR(0x0000a2aau): goto L_A2AA;
    case RC_ADDR(0x0000a2acu): goto L_A2AC;
    case RC_ADDR(0x0000a2b2u): goto L_A2B2;
    case RC_ADDR(0x0000a2b6u): goto L_A2B6;
    case RC_ADDR(0x0000a2bau): goto L_A2BA;
    case RC_ADDR(0x0000a2beu): goto L_A2BE;
    case RC_ADDR(0x0000a2c2u): goto L_A2C2;
    case RC_ADDR(0x0000a2c4u): goto L_A2C4;
    case RC_ADDR(0x0000a2c6u): goto L_A2C6;
    case RC_ADDR(0x0000a2c8u): goto L_A2C8;
    case RC_ADDR(0x0000a2ccu): goto L_A2CC;
    case RC_ADDR(0x0000a2d0u): goto L_A2D0;
    case RC_ADDR(0x0000a2d2u): goto L_A2D2;
    case RC_ADDR(0x0000a2d4u): goto L_A2D4;
    case RC_ADDR(0x0000a2d8u): goto L_A2D8;
    case RC_ADDR(0x0000a2dcu): goto L_A2DC;
    case RC_ADDR(0x0000a2deu): goto L_A2DE;
    case RC_ADDR(0x0000a2e0u): goto L_A2E0;
    case RC_ADDR(0x0000a2e4u): goto L_A2E4;
    case RC_ADDR(0x0000a2e8u): goto L_A2E8;
    case RC_ADDR(0x0000a2eau): goto L_A2EA;
    case RC_ADDR(0x0000a2f0u): goto L_A2F0;
    case RC_ADDR(0x0000a2f2u): goto L_A2F2;
    case RC_ADDR(0x0000a2f6u): goto L_A2F6;
    case RC_ADDR(0x0000a2fau): goto L_A2FA;
    case RC_ADDR(0x0000a2feu): goto L_A2FE;
    case RC_ADDR(0x0000a302u): goto L_A302;
    case RC_ADDR(0x0000a306u): goto L_A306;
    case RC_ADDR(0x0000a30au): goto L_A30A;
    case RC_ADDR(0x0000a30cu): goto L_A30C;
    case RC_ADDR(0x0000a310u): goto L_A310;
    case RC_ADDR(0x0000a314u): goto L_A314;
    case RC_ADDR(0x0000a318u): goto L_A318;
    case RC_ADDR(0x0000a31cu): goto L_A31C;
    case RC_ADDR(0x0000a320u): goto L_A320;
    case RC_ADDR(0x0000a324u): goto L_A324;
    case RC_ADDR(0x0000a326u): goto L_A326;
    case RC_ADDR(0x0000a328u): goto L_A328;
    case RC_ADDR(0x0000a32cu): goto L_A32C;
    case RC_ADDR(0x0000a32eu): goto L_A32E;
    case RC_ADDR(0x0000a330u): goto L_A330;
    case RC_ADDR(0x0000a332u): goto L_A332;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A220:
    /* 0000a220   4  link.w A5,#ffffffec */
    c->pc = RC_ADDR(0x0000a220u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x14u;

L_A224:
    /* 0000a224   4  movem.l { A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000a224u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_A228:
    /* 0000a228   4  move.b (fffff862,A4),D0 */
    c->pc = RC_ADDR(0x0000a228u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[4] - 0x79eu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_A22C:
    /* 0000a22c   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000a22cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_A22E:
    /* 0000a22e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000a22eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A230:
    /* 0000a230   4  jsr (00005dd4) */
    c->pc = RC_ADDR(0x0000a230u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000a234u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005dd4u);
    return;

L_A234:
    /* 0000a234   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000a234u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_A236:
    /* 0000a236   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000a236u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A23A:
    /* 0000a23a   4  jsr (ffff824e,A4) */
    c->pc = RC_ADDR(0x0000a23au);
    rc_step(c, m, 18);
    /* vector 98 */
    rc_push32(c, m, RC_ADDR(0x0000a23eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d44u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ff16u);
    return;

L_A23E:
    /* 0000a23e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a23eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A240:
    /* 0000a240   2  tst.l D0 */
    c->pc = RC_ADDR(0x0000a240u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_A242:
    /* 0000a242   4  beq 0000a330 */
    c->pc = RC_ADDR(0x0000a242u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A330;

L_A246:
    /* 0000a246   4  jsr (ffff8056,A4) */
    c->pc = RC_ADDR(0x0000a246u);
    rc_step(c, m, 18);
    /* vector 14 */
    rc_push32(c, m, RC_ADDR(0x0000a24au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b4cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00003988u);
    return;

L_A24A:
    /* 0000a24a   6  cmpi.w #2,(fffff8a8,A4) */
    c->pc = RC_ADDR(0x0000a24au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x758u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_A250:
    /* 0000a250   2  bne 0000a256 */
    c->pc = RC_ADDR(0x0000a250u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_A256;

L_A252:
    /* 0000a252   4  jsr (000064c0) */
    c->pc = RC_ADDR(0x0000a252u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000a256u));
    rc_depth++;
    c->pc = RC_ADDR(0x000064c0u);
    return;

L_A256:
    /* 0000a256   4  pea (0000a334) */
    c->pc = RC_ADDR(0x0000a256u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000a334u));

L_A25A:
    /* 0000a25a   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x0000a25au);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x0000a25eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_A25E:
    /* 0000a25e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a25eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A260:
    /* 0000a260   4  pea (0000a343) */
    c->pc = RC_ADDR(0x0000a260u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000a343u));

L_A264:
    /* 0000a264   4  jsr (ffff824e,A4) */
    c->pc = RC_ADDR(0x0000a264u);
    rc_step(c, m, 18);
    /* vector 98 */
    rc_push32(c, m, RC_ADDR(0x0000a268u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d44u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ff16u);
    return;

L_A268:
    /* 0000a268   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a268u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A26A:
    /* 0000a26a   2  tst.l D0 */
    c->pc = RC_ADDR(0x0000a26au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_A26C:
    /* 0000a26c   4  beq 0000a330 */
    c->pc = RC_ADDR(0x0000a26cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A330;

L_A270:
    /* 0000a270   4  move.w (a62,A4),D0 */
    c->pc = RC_ADDR(0x0000a270u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xa62u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A274:
    /* 0000a274   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a274u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_A276:
    /* 0000a276   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000a276u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_A278:
    /* 0000a278   4  lea (ffff950c,A4),A0 */
    c->pc = RC_ADDR(0x0000a278u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6af4u);

L_A27C:
    /* 0000a27c   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000a27cu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A280:
    /* 0000a280   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x0000a280u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_A284:
    /* 0000a284   4  jsr (ffff82cc,A4) */
    c->pc = RC_ADDR(0x0000a284u);
    rc_step(c, m, 18);
    /* vector 119 */
    rc_push32(c, m, RC_ADDR(0x0000a288u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228b2u);
    return;

L_A288:
    /* 0000a288   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000a288u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_A28A:
    /* 0000a28a   4  pea (0000a348) */
    c->pc = RC_ADDR(0x0000a28au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000a348u));

L_A28E:
    /* 0000a28e   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x0000a28eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_A292:
    /* 0000a292   4  jsr (ffff82ea,A4) */
    c->pc = RC_ADDR(0x0000a292u);
    rc_step(c, m, 18);
    /* vector 124 */
    rc_push32(c, m, RC_ADDR(0x0000a296u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023de0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022d34u);
    return;

L_A296:
    /* 0000a296   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000a296u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_A298:
    /* 0000a298   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x0000a298u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_A29C:
    /* 0000a29c   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x0000a29cu);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x0000a2a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_A2A0:
    /* 0000a2a0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a2a0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A2A2:
    /* 0000a2a2   2  subq.w #5,D0 */
    c->pc = RC_ADDR(0x0000a2a2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000005u;
    rc_flags_sub(c, RC_W, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_A2A4:
    /* 0000a2a4   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a2a4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_A2A6:
    /* 0000a2a6   2  move.l D0,D5 */
    c->pc = RC_ADDR(0x0000a2a6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_A2A8:
    /* 0000a2a8   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000a2a8u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_A2AA:
    /* 0000a2aa   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000a2aau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_A2AC:
    /* 0000a2ac   6  add.l #31,D0 */
    c->pc = RC_ADDR(0x0000a2acu);
    rc_step(c, m, 16);
    t0 = 0x00000031u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_A2B2:
    /* 0000a2b2   4  lea (ffffffec,A5),A0 */
    c->pc = RC_ADDR(0x0000a2b2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x14u);

L_A2B6:
    /* 0000a2b6   4  move.b D0,(0,A0,D5.w) */
    c->pc = RC_ADDR(0x0000a2b6u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_B);
    t4 = c->d[5];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_A2BA:
    /* 0000a2ba   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x0000a2bau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_A2BE:
    /* 0000a2be   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x0000a2beu);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x0000a2c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_A2C2:
    /* 0000a2c2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a2c2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A2C4:
    /* 0000a2c4   2  move.l D4,D1 */
    c->pc = RC_ADDR(0x0000a2c4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_A2C6:
    /* 0000a2c6   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0000a2c6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_A2C8:
    /* 0000a2c8   4  lea (a64,A4),A0 */
    c->pc = RC_ADDR(0x0000a2c8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xa64u);

L_A2CC:
    /* 0000a2cc   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0000a2ccu);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A2D0:
    /* 0000a2d0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000a2d0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_A2D2:
    /* 0000a2d2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000a2d2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_A2D4:
    /* 0000a2d4   4  lea (a9c,A4),A0 */
    c->pc = RC_ADDR(0x0000a2d4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xa9cu);

L_A2D8:
    /* 0000a2d8   4  clr.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000a2d8u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A2DC:
    /* 0000a2dc   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000a2dcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_A2DE:
    /* 0000a2de   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000a2deu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_A2E0:
    /* 0000a2e0   4  lea (a80,A4),A0 */
    c->pc = RC_ADDR(0x0000a2e0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xa80u);

L_A2E4:
    /* 0000a2e4   4  clr.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000a2e4u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A2E8:
    /* 0000a2e8   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000a2e8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_A2EA:
    /* 0000a2ea   6  cmp.l #7,D4 */
    c->pc = RC_ADDR(0x0000a2eau);
    rc_step(c, m, 14);
    t0 = 0x00000007u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_A2F0:
    /* 0000a2f0   2  blt 0000a2aa */
    c->pc = RC_ADDR(0x0000a2f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_A2AA; }

L_A2F2:
    /* 0000a2f2   4  pea (cba,A4) */
    c->pc = RC_ADDR(0x0000a2f2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xcbau));

L_A2F6:
    /* 0000a2f6   4  pea (cb6,A4) */
    c->pc = RC_ADDR(0x0000a2f6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xcb6u));

L_A2FA:
    /* 0000a2fa   4  pea (0000a350) */
    c->pc = RC_ADDR(0x0000a2fau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000a350u));

L_A2FE:
    /* 0000a2fe   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000a2feu);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000a302u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_A302:
    /* 0000a302   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000a302u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_A306:
    /* 0000a306   4  move.l D0,(cae,A4) */
    c->pc = RC_ADDR(0x0000a306u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xcaeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A30A:
    /* 0000a30a   2  beq 0000a330 */
    c->pc = RC_ADDR(0x0000a30au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A330;

L_A30C:
    /* 0000a30c   4  pea (cbe,A4) */
    c->pc = RC_ADDR(0x0000a30cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xcbeu));

L_A310:
    /* 0000a310   4  pea (cb8,A4) */
    c->pc = RC_ADDR(0x0000a310u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xcb8u));

L_A314:
    /* 0000a314   4  pea (0000a361) */
    c->pc = RC_ADDR(0x0000a314u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000a361u));

L_A318:
    /* 0000a318   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000a318u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000a31cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_A31C:
    /* 0000a31c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000a31cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_A320:
    /* 0000a320   4  move.l D0,(cb2,A4) */
    c->pc = RC_ADDR(0x0000a320u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xcb2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_A324:
    /* 0000a324   2  beq 0000a330 */
    c->pc = RC_ADDR(0x0000a324u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A330;

L_A326:
    /* 0000a326   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000a326u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_A328:
    /* 0000a328   4  movem.l (SP)+,{ D4 D5 } */
    c->pc = RC_ADDR(0x0000a328u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_A32C:
    /* 0000a32c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a32cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A32E:
    /* 0000a32e   2  rts */
    c->pc = RC_ADDR(0x0000a32eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_A330:
    /* 0000a330   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000a330u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_A332:
    /* 0000a332   2  bra 0000a328 */
    c->pc = RC_ADDR(0x0000a332u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_A328;

}
