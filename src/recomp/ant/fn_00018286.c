/* fn_00018286 - 200 byte(s), 54 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00018286(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00018286u): goto L_18286;
    case RC_ADDR(0x0001828au): goto L_1828A;
    case RC_ADDR(0x00018290u): goto L_18290;
    case RC_ADDR(0x00018294u): goto L_18294;
    case RC_ADDR(0x00018298u): goto L_18298;
    case RC_ADDR(0x0001829au): goto L_1829A;
    case RC_ADDR(0x0001829eu): goto L_1829E;
    case RC_ADDR(0x000182a2u): goto L_182A2;
    case RC_ADDR(0x000182a8u): goto L_182A8;
    case RC_ADDR(0x000182aeu): goto L_182AE;
    case RC_ADDR(0x000182b2u): goto L_182B2;
    case RC_ADDR(0x000182b4u): goto L_182B4;
    case RC_ADDR(0x000182b6u): goto L_182B6;
    case RC_ADDR(0x000182bau): goto L_182BA;
    case RC_ADDR(0x000182beu): goto L_182BE;
    case RC_ADDR(0x000182c2u): goto L_182C2;
    case RC_ADDR(0x000182c6u): goto L_182C6;
    case RC_ADDR(0x000182cau): goto L_182CA;
    case RC_ADDR(0x000182ceu): goto L_182CE;
    case RC_ADDR(0x000182d4u): goto L_182D4;
    case RC_ADDR(0x000182d8u): goto L_182D8;
    case RC_ADDR(0x000182deu): goto L_182DE;
    case RC_ADDR(0x000182e2u): goto L_182E2;
    case RC_ADDR(0x000182e6u): goto L_182E6;
    case RC_ADDR(0x000182ecu): goto L_182EC;
    case RC_ADDR(0x000182f0u): goto L_182F0;
    case RC_ADDR(0x000182f2u): goto L_182F2;
    case RC_ADDR(0x000182f6u): goto L_182F6;
    case RC_ADDR(0x000182fau): goto L_182FA;
    case RC_ADDR(0x000182feu): goto L_182FE;
    case RC_ADDR(0x00018300u): goto L_18300;
    case RC_ADDR(0x00018304u): goto L_18304;
    case RC_ADDR(0x00018306u): goto L_18306;
    case RC_ADDR(0x00018308u): goto L_18308;
    case RC_ADDR(0x0001830au): goto L_1830A;
    case RC_ADDR(0x0001830eu): goto L_1830E;
    case RC_ADDR(0x00018312u): goto L_18312;
    case RC_ADDR(0x00018314u): goto L_18314;
    case RC_ADDR(0x00018316u): goto L_18316;
    case RC_ADDR(0x00018318u): goto L_18318;
    case RC_ADDR(0x0001831cu): goto L_1831C;
    case RC_ADDR(0x00018322u): goto L_18322;
    case RC_ADDR(0x00018326u): goto L_18326;
    case RC_ADDR(0x0001832au): goto L_1832A;
    case RC_ADDR(0x0001832cu): goto L_1832C;
    case RC_ADDR(0x00018330u): goto L_18330;
    case RC_ADDR(0x00018334u): goto L_18334;
    case RC_ADDR(0x00018336u): goto L_18336;
    case RC_ADDR(0x00018338u): goto L_18338;
    case RC_ADDR(0x0001833cu): goto L_1833C;
    case RC_ADDR(0x00018340u): goto L_18340;
    case RC_ADDR(0x00018346u): goto L_18346;
    case RC_ADDR(0x0001834au): goto L_1834A;
    case RC_ADDR(0x0001834cu): goto L_1834C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18286:
    /* 00018286   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x00018286u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_1828A:
    /* 0001828a   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0001828au);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_18290:
    /* 00018290   4  pea (0000002c).l */
    c->pc = RC_ADDR(0x00018290u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000002cu);

L_18294:
    /* 00018294   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00018294u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00018298u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_18298:
    /* 00018298   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018298u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1829A:
    /* 0001829a   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001829au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1829E:
    /* 0001829e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001829eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_182A2:
    /* 000182a2   6  move.l (ffffb5d4,A4),(28,A0) */
    c->pc = RC_ADDR(0x000182a2u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4a2cu));
    rc_wr32(c, m, (c->a[0] + 0x28u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_182A8:
    /* 000182a8   6  move.l (fffffffc,A5),(ffffb5d4,A4) */
    c->pc = RC_ADDR(0x000182a8u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_wr32(c, m, (c->a[4] - 0x4a2cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_182AE:
    /* 000182ae   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000182aeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_182B2:
    /* 000182b2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000182b2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_182B4:
    /* 000182b4   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x000182b4u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_182B6:
    /* 000182b6   4  move.l D0,(1d42,A4) */
    c->pc = RC_ADDR(0x000182b6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1d42u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_182BA:
    /* 000182ba   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000182bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_182BE:
    /* 000182be   4  movea.l (ffffb5d4,A4),A1 */
    c->pc = RC_ADDR(0x000182beu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4a2cu));
    c->a[1] = t0;

L_182C2:
    /* 000182c2   4  move.w (c,A0),(A1) */
    c->pc = RC_ADDR(0x000182c2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[0] + 0xcu));
    rc_wr16(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_W);

L_182C6:
    /* 000182c6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000182c6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_182CA:
    /* 000182ca   4  movea.l (ffffb5d4,A4),A1 */
    c->pc = RC_ADDR(0x000182cau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4a2cu));
    c->a[1] = t0;

L_182CE:
    /* 000182ce   6  move.w (e,A0),(2,A1) */
    c->pc = RC_ADDR(0x000182ceu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0xeu));
    rc_wr16(c, m, (c->a[1] + 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_182D4:
    /* 000182d4   4  movea.l (ffffb5d4,A4),A0 */
    c->pc = RC_ADDR(0x000182d4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4a2cu));
    c->a[0] = t0;

L_182D8:
    /* 000182d8   6  move.b (1d45,A4),(4,A0) */
    c->pc = RC_ADDR(0x000182d8u);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[4] + 0x1d45u));
    rc_wr8(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_182DE:
    /* 000182de   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000182deu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_182E2:
    /* 000182e2   4  movea.l (ffffb5d4,A4),A1 */
    c->pc = RC_ADDR(0x000182e2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4a2cu));
    c->a[1] = t0;

L_182E6:
    /* 000182e6   6  move.b (11,A0),(5,A1) */
    c->pc = RC_ADDR(0x000182e6u);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[0] + 0x11u));
    rc_wr8(c, m, (c->a[1] + 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_182EC:
    /* 000182ec   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000182ecu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_182F0:
    /* 000182f0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000182f0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_182F2:
    /* 000182f2   4  move.w (6,A0),D0 */
    c->pc = RC_ADDR(0x000182f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_182F6:
    /* 000182f6   4  move.l D0,(1d3e,A4) */
    c->pc = RC_ADDR(0x000182f6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1d3eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_182FA:
    /* 000182fa   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x000182fau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_182FE:
    /* 000182fe   2  bra 00018326 */
    c->pc = RC_ADDR(0x000182feu);
    rc_step(c, m, 10);
    goto L_18326;

L_18300:
    /* 00018300   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00018300u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18304:
    /* 00018304   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018304u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_18306:
    /* 00018306   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00018306u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_18308:
    /* 00018308   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00018308u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1830A:
    /* 0001830a   4  adda.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001830au);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_1830E:
    /* 0001830e   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001830eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18312:
    /* 00018312   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018312u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_18314:
    /* 00018314   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00018314u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_18316:
    /* 00018316   2  movea.l D0,A1 */
    c->pc = RC_ADDR(0x00018316u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[1] = t0;

L_18318:
    /* 00018318   4  adda.l (ffffb5d4,A4),A1 */
    c->pc = RC_ADDR(0x00018318u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4a2cu));
    c->a[1] += t0;

L_1831C:
    /* 0001831c   6  move.l (14,A0),(8,A1) */
    c->pc = RC_ADDR(0x0001831cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x14u));
    rc_wr32(c, m, (c->a[1] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18322:
    /* 00018322   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00018322u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18326:
    /* 00018326   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00018326u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1832A:
    /* 0001832a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001832au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1832C:
    /* 0001832c   4  move.b (11,A0),D0 */
    c->pc = RC_ADDR(0x0001832cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x11u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_18330:
    /* 00018330   4  move.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x00018330u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18334:
    /* 00018334   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00018334u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_18336:
    /* 00018336   2  bcs 00018300 */
    c->pc = RC_ADDR(0x00018336u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_18300; }

L_18338:
    /* 00018338   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00018338u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1833C:
    /* 0001833c   4  movea.l (ffffb5d4,A4),A1 */
    c->pc = RC_ADDR(0x0001833cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4a2cu));
    c->a[1] = t0;

L_18340:
    /* 00018340   6  move.l (34,A0),(20,A1) */
    c->pc = RC_ADDR(0x00018340u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x34u));
    rc_wr32(c, m, (c->a[1] + 0x20u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18346:
    /* 00018346   4  move.l (ffffb5d4,A4),D0 */
    c->pc = RC_ADDR(0x00018346u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4a2cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1834A:
    /* 0001834a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001834au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1834C:
    /* 0001834c   2  rts */
    c->pc = RC_ADDR(0x0001834cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
