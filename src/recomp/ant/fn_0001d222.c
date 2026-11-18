/* fn_0001d222 - 260 byte(s), 77 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001d222(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d222u): goto L_1D222;
    case RC_ADDR(0x0001d226u): goto L_1D226;
    case RC_ADDR(0x0001d22au): goto L_1D22A;
    case RC_ADDR(0x0001d22cu): goto L_1D22C;
    case RC_ADDR(0x0001d230u): goto L_1D230;
    case RC_ADDR(0x0001d234u): goto L_1D234;
    case RC_ADDR(0x0001d238u): goto L_1D238;
    case RC_ADDR(0x0001d23cu): goto L_1D23C;
    case RC_ADDR(0x0001d23eu): goto L_1D23E;
    case RC_ADDR(0x0001d242u): goto L_1D242;
    case RC_ADDR(0x0001d244u): goto L_1D244;
    case RC_ADDR(0x0001d246u): goto L_1D246;
    case RC_ADDR(0x0001d24au): goto L_1D24A;
    case RC_ADDR(0x0001d24cu): goto L_1D24C;
    case RC_ADDR(0x0001d24eu): goto L_1D24E;
    case RC_ADDR(0x0001d252u): goto L_1D252;
    case RC_ADDR(0x0001d254u): goto L_1D254;
    case RC_ADDR(0x0001d258u): goto L_1D258;
    case RC_ADDR(0x0001d25au): goto L_1D25A;
    case RC_ADDR(0x0001d25eu): goto L_1D25E;
    case RC_ADDR(0x0001d264u): goto L_1D264;
    case RC_ADDR(0x0001d268u): goto L_1D268;
    case RC_ADDR(0x0001d26cu): goto L_1D26C;
    case RC_ADDR(0x0001d270u): goto L_1D270;
    case RC_ADDR(0x0001d272u): goto L_1D272;
    case RC_ADDR(0x0001d276u): goto L_1D276;
    case RC_ADDR(0x0001d27au): goto L_1D27A;
    case RC_ADDR(0x0001d27eu): goto L_1D27E;
    case RC_ADDR(0x0001d280u): goto L_1D280;
    case RC_ADDR(0x0001d282u): goto L_1D282;
    case RC_ADDR(0x0001d284u): goto L_1D284;
    case RC_ADDR(0x0001d288u): goto L_1D288;
    case RC_ADDR(0x0001d28cu): goto L_1D28C;
    case RC_ADDR(0x0001d292u): goto L_1D292;
    case RC_ADDR(0x0001d296u): goto L_1D296;
    case RC_ADDR(0x0001d298u): goto L_1D298;
    case RC_ADDR(0x0001d29cu): goto L_1D29C;
    case RC_ADDR(0x0001d29eu): goto L_1D29E;
    case RC_ADDR(0x0001d2a0u): goto L_1D2A0;
    case RC_ADDR(0x0001d2a4u): goto L_1D2A4;
    case RC_ADDR(0x0001d2aau): goto L_1D2AA;
    case RC_ADDR(0x0001d2aeu): goto L_1D2AE;
    case RC_ADDR(0x0001d2b2u): goto L_1D2B2;
    case RC_ADDR(0x0001d2b4u): goto L_1D2B4;
    case RC_ADDR(0x0001d2b8u): goto L_1D2B8;
    case RC_ADDR(0x0001d2bcu): goto L_1D2BC;
    case RC_ADDR(0x0001d2c0u): goto L_1D2C0;
    case RC_ADDR(0x0001d2c2u): goto L_1D2C2;
    case RC_ADDR(0x0001d2c6u): goto L_1D2C6;
    case RC_ADDR(0x0001d2c8u): goto L_1D2C8;
    case RC_ADDR(0x0001d2ccu): goto L_1D2CC;
    case RC_ADDR(0x0001d2d0u): goto L_1D2D0;
    case RC_ADDR(0x0001d2d2u): goto L_1D2D2;
    case RC_ADDR(0x0001d2d4u): goto L_1D2D4;
    case RC_ADDR(0x0001d2d6u): goto L_1D2D6;
    case RC_ADDR(0x0001d2dau): goto L_1D2DA;
    case RC_ADDR(0x0001d2deu): goto L_1D2DE;
    case RC_ADDR(0x0001d2e2u): goto L_1D2E2;
    case RC_ADDR(0x0001d2e6u): goto L_1D2E6;
    case RC_ADDR(0x0001d2eau): goto L_1D2EA;
    case RC_ADDR(0x0001d2eeu): goto L_1D2EE;
    case RC_ADDR(0x0001d2f0u): goto L_1D2F0;
    case RC_ADDR(0x0001d2f4u): goto L_1D2F4;
    case RC_ADDR(0x0001d2f8u): goto L_1D2F8;
    case RC_ADDR(0x0001d2fcu): goto L_1D2FC;
    case RC_ADDR(0x0001d300u): goto L_1D300;
    case RC_ADDR(0x0001d302u): goto L_1D302;
    case RC_ADDR(0x0001d306u): goto L_1D306;
    case RC_ADDR(0x0001d30au): goto L_1D30A;
    case RC_ADDR(0x0001d30eu): goto L_1D30E;
    case RC_ADDR(0x0001d310u): goto L_1D310;
    case RC_ADDR(0x0001d314u): goto L_1D314;
    case RC_ADDR(0x0001d318u): goto L_1D318;
    case RC_ADDR(0x0001d31cu): goto L_1D31C;
    case RC_ADDR(0x0001d320u): goto L_1D320;
    case RC_ADDR(0x0001d322u): goto L_1D322;
    case RC_ADDR(0x0001d324u): goto L_1D324;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D222:
    /* 0001d222   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0001d222u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_1D226:
    /* 0001d226   4  pea (8dc,A4) */
    c->pc = RC_ADDR(0x0001d226u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x8dcu));

L_1D22A:
    /* 0001d22a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001d22au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D22C:
    /* 0001d22c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d22cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D230:
    /* 0001d230   4  jsr (0001834e) */
    c->pc = RC_ADDR(0x0001d230u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d234u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001834eu);
    return;

L_1D234:
    /* 0001d234   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001d234u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1D238:
    /* 0001d238   4  move.l D0,(ffff8556,A4) */
    c->pc = RC_ADDR(0x0001d238u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x7aaau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D23C:
    /* 0001d23c   2  beq 0001d292 */
    c->pc = RC_ADDR(0x0001d23cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D292;

L_1D23E:
    /* 0001d23e   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001d23eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D242:
    /* 0001d242   2  bra 0001d268 */
    c->pc = RC_ADDR(0x0001d242u);
    rc_step(c, m, 10);
    goto L_1D268;

L_1D244:
    /* 0001d244   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d244u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D246:
    /* 0001d246   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001d246u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D24A:
    /* 0001d24a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001d24au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1D24C:
    /* 0001d24c   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001d24cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1D24E:
    /* 0001d24e   4  adda.l (ffff8556,A4),A0 */
    c->pc = RC_ADDR(0x0001d24eu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7aaau));
    c->a[0] += t0;

L_1D252:
    /* 0001d252   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d252u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D254:
    /* 0001d254   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001d254u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D258:
    /* 0001d258   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001d258u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1D25A:
    /* 0001d25a   4  lea (fffffaa8,A4),A1 */
    c->pc = RC_ADDR(0x0001d25au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x558u);

L_1D25E:
    /* 0001d25e   6  move.l (8,A0),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x0001d25eu);
    rc_step(c, m, 30);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D264:
    /* 0001d264   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001d264u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D268:
    /* 0001d268   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001d268u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D26C:
    /* 0001d26c   4  cmp.w (e,A5),D0 */
    c->pc = RC_ADDR(0x0001d26cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1D270:
    /* 0001d270   2  bcs 0001d244 */
    c->pc = RC_ADDR(0x0001d270u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1D244; }

L_1D272:
    /* 0001d272   4  movea.l (ffff8556,A4),A0 */
    c->pc = RC_ADDR(0x0001d272u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7aaau));
    c->a[0] = t0;

L_1D276:
    /* 0001d276   4  move.w (A0),(fffffa9c,A4) */
    c->pc = RC_ADDR(0x0001d276u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[4] - 0x564u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D27A:
    /* 0001d27a   4  move.w (fffffa9c,A4),D0 */
    c->pc = RC_ADDR(0x0001d27au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x564u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D27E:
    /* 0001d27e   2  swap D0 */
    c->pc = RC_ADDR(0x0001d27eu);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D280:
    /* 0001d280   2  clr.w D0 */
    c->pc = RC_ADDR(0x0001d280u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D282:
    /* 0001d282   2  swap D0 */
    c->pc = RC_ADDR(0x0001d282u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D284:
    /* 0001d284   4  divu.w (fffffa94,A4),D0 */
    c->pc = RC_ADDR(0x0001d284u);
    rc_step(c, m, 148);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56cu));
    rc_divu(c, m, 0, t0);

L_1D288:
    /* 0001d288   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001d288u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D28C:
    /* 0001d28c   6  move.w (c,A5),(fffffa9e,A4) */
    c->pc = RC_ADDR(0x0001d28cu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_wr16(c, m, (c->a[4] - 0x562u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D292:
    /* 0001d292   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001d292u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D296:
    /* 0001d296   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x0001d296u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_1D298:
    /* 0001d298   4  mulu.w (fffffa9e,A4),D0 */
    c->pc = RC_ADDR(0x0001d298u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x562u));
    rc_mulu(c, 0, t0);

L_1D29C:
    /* 0001d29c   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001d29cu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1D29E:
    /* 0001d29e   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0001d29eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D2A0:
    /* 0001d2a0   4  move.l D1,(fffffac4,A4) */
    c->pc = RC_ADDR(0x0001d2a0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x53cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D2A4:
    /* 0001d2a4   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0001d2a4u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_1D2AA:
    /* 0001d2aa   4  move.l (fffffac4,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d2aau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x53cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D2AE:
    /* 0001d2ae   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0001d2aeu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0001d2b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1D2B2:
    /* 0001d2b2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d2b2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D2B4:
    /* 0001d2b4   4  move.l D0,(fffffabc,A4) */
    c->pc = RC_ADDR(0x0001d2b4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x544u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D2B8:
    /* 0001d2b8   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0001d2b8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D2BC:
    /* 0001d2bc   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001d2bcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D2C0:
    /* 0001d2c0   2  bra 0001d306 */
    c->pc = RC_ADDR(0x0001d2c0u);
    rc_step(c, m, 10);
    goto L_1D306;

L_1D2C2:
    /* 0001d2c2   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d2c2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D2C6:
    /* 0001d2c6   2  bra 0001d2f8 */
    c->pc = RC_ADDR(0x0001d2c6u);
    rc_step(c, m, 10);
    goto L_1D2F8;

L_1D2C8:
    /* 0001d2c8   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001d2c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D2CC:
    /* 0001d2cc   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001d2ccu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D2D0:
    /* 0001d2d0   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001d2d0u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1D2D2:
    /* 0001d2d2   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0001d2d2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D2D4:
    /* 0001d2d4   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001d2d4u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1D2D6:
    /* 0001d2d6   4  movea.l (fffffabc,A4),A0 */
    c->pc = RC_ADDR(0x0001d2d6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x544u));
    c->a[0] = t0;

L_1D2DA:
    /* 0001d2da   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001d2dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D2DE:
    /* 0001d2de   4  mulu.w (fffffa96,A4),D0 */
    c->pc = RC_ADDR(0x0001d2deu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56au));
    rc_mulu(c, 0, t0);

L_1D2E2:
    /* 0001d2e2   4  mulu.w (fffffa9c,A4),D0 */
    c->pc = RC_ADDR(0x0001d2e2u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x564u));
    rc_mulu(c, 0, t0);

L_1D2E6:
    /* 0001d2e6   4  move.w (fffffa94,A4),D2 */
    c->pc = RC_ADDR(0x0001d2e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56cu));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D2EA:
    /* 0001d2ea   4  mulu.w (fffffffe,A5),D2 */
    c->pc = RC_ADDR(0x0001d2eau);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_mulu(c, 2, t0);

L_1D2EE:
    /* 0001d2ee   2  add.w D2,D0 */
    c->pc = RC_ADDR(0x0001d2eeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D2F0:
    /* 0001d2f0   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0001d2f0u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D2F4:
    /* 0001d2f4   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d2f4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D2F8:
    /* 0001d2f8   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001d2f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D2FC:
    /* 0001d2fc   4  cmp.w (fffffa9e,A4),D0 */
    c->pc = RC_ADDR(0x0001d2fcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x562u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1D300:
    /* 0001d300   2  bcs 0001d2c8 */
    c->pc = RC_ADDR(0x0001d300u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1D2C8; }

L_1D302:
    /* 0001d302   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001d302u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D306:
    /* 0001d306   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001d306u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D30A:
    /* 0001d30a   4  cmp.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001d30au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1D30E:
    /* 0001d30e   2  bcs 0001d2c2 */
    c->pc = RC_ADDR(0x0001d30eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1D2C2; }

L_1D310:
    /* 0001d310   4  move.w (fffffa9c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d310u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x564u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D314:
    /* 0001d314   4  move.w (fffffa96,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d314u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56au));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D318:
    /* 0001d318   4  move.w (fffffa94,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d318u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56cu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D31C:
    /* 0001d31c   4  jsr (ffff816a,A4) */
    c->pc = RC_ADDR(0x0001d31cu);
    rc_step(c, m, 18);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x0001d320u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c60u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000128eau);
    return;

L_1D320:
    /* 0001d320   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0001d320u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1D322:
    /* 0001d322   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d322u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D324:
    /* 0001d324   2  rts */
    c->pc = RC_ADDR(0x0001d324u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
