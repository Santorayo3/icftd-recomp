/* fn_000052f0 - 126 byte(s), 35 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000052f0(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000052f0u): goto L_52F0;
    case RC_ADDR(0x000052f4u): goto L_52F4;
    case RC_ADDR(0x000052f8u): goto L_52F8;
    case RC_ADDR(0x00005300u): goto L_5300;
    case RC_ADDR(0x00005304u): goto L_5304;
    case RC_ADDR(0x0000530au): goto L_530A;
    case RC_ADDR(0x00005310u): goto L_5310;
    case RC_ADDR(0x00005312u): goto L_5312;
    case RC_ADDR(0x00005318u): goto L_5318;
    case RC_ADDR(0x0000531eu): goto L_531E;
    case RC_ADDR(0x00005322u): goto L_5322;
    case RC_ADDR(0x00005326u): goto L_5326;
    case RC_ADDR(0x00005328u): goto L_5328;
    case RC_ADDR(0x0000532cu): goto L_532C;
    case RC_ADDR(0x00005330u): goto L_5330;
    case RC_ADDR(0x00005332u): goto L_5332;
    case RC_ADDR(0x00005336u): goto L_5336;
    case RC_ADDR(0x0000533au): goto L_533A;
    case RC_ADDR(0x0000533eu): goto L_533E;
    case RC_ADDR(0x00005340u): goto L_5340;
    case RC_ADDR(0x00005344u): goto L_5344;
    case RC_ADDR(0x00005348u): goto L_5348;
    case RC_ADDR(0x0000534au): goto L_534A;
    case RC_ADDR(0x0000534eu): goto L_534E;
    case RC_ADDR(0x00005352u): goto L_5352;
    case RC_ADDR(0x00005356u): goto L_5356;
    case RC_ADDR(0x00005358u): goto L_5358;
    case RC_ADDR(0x0000535au): goto L_535A;
    case RC_ADDR(0x0000535eu): goto L_535E;
    case RC_ADDR(0x00005362u): goto L_5362;
    case RC_ADDR(0x00005364u): goto L_5364;
    case RC_ADDR(0x00005366u): goto L_5366;
    case RC_ADDR(0x00005368u): goto L_5368;
    case RC_ADDR(0x0000536au): goto L_536A;
    case RC_ADDR(0x0000536cu): goto L_536C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_52F0:
    /* 000052f0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000052f0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_52F4:
    /* 000052f4   4  clr.l (9ec,A4) */
    c->pc = RC_ADDR(0x000052f4u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x9ecu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_52F8:
    /* 000052f8   8  move.l #13f,(9f0,A4) */
    c->pc = RC_ADDR(0x000052f8u);
    rc_step(c, m, 24);
    t0 = 0x0000013fu;
    rc_wr32(c, m, (c->a[4] + 0x9f0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5300:
    /* 00005300   4  clr.w (9e2,A4) */
    c->pc = RC_ADDR(0x00005300u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x9e2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5304:
    /* 00005304   6  move.w #13,(850,A4) */
    c->pc = RC_ADDR(0x00005304u);
    rc_step(c, m, 16);
    t0 = 0x00000013u;
    rc_wr16(c, m, (c->a[4] + 0x850u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_530A:
    /* 0000530a   6  move.w #12c,(852,A4) */
    c->pc = RC_ADDR(0x0000530au);
    rc_step(c, m, 16);
    t0 = 0x0000012cu;
    rc_wr16(c, m, (c->a[4] + 0x852u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5310:
    /* 00005310   2  bsr 00005380 */
    c->pc = RC_ADDR(0x00005310u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005312u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005380u);
    return;

L_5312:
    /* 00005312   6  move.l (8,A5),(9e4,A4) */
    c->pc = RC_ADDR(0x00005312u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x9e4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5318:
    /* 00005318   6  move.w (c,A5),(9e8,A4) */
    c->pc = RC_ADDR(0x00005318u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_wr16(c, m, (c->a[4] + 0x9e8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_531E:
    /* 0000531e   4  clr.b (9ea,A4) */
    c->pc = RC_ADDR(0x0000531eu);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[4] + 0x9eau), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_5322:
    /* 00005322   4  clr.b (9eb,A4) */
    c->pc = RC_ADDR(0x00005322u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[4] + 0x9ebu), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_5326:
    /* 00005326   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005326u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5328:
    /* 00005328   4  pea (0000536e) */
    c->pc = RC_ADDR(0x00005328u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000536eu));

L_532C:
    /* 0000532c   4  jsr (ffff836e,A4) */
    c->pc = RC_ADDR(0x0000532cu);
    rc_step(c, m, 18);
    /* vector 146 */
    rc_push32(c, m, RC_ADDR(0x00005330u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e64u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000237c2u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000237c6u);
    return;

L_5330:
    /* 00005330   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005330u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5332:
    /* 00005332   4  move.l D0,(ffff85de,A4) */
    c->pc = RC_ADDR(0x00005332u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x7a22u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5336:
    /* 00005336   4  pea (9e4,A4) */
    c->pc = RC_ADDR(0x00005336u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x9e4u));

L_533A:
    /* 0000533a   4  jsr (ffff83d4,A4) */
    c->pc = RC_ADDR(0x0000533au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000533eu));
    rc_depth++;
    t3 = (c->a[4] - 0x7c2cu);
    c->pc = t3;
    return;

L_533E:
    /* 0000533e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000533eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5340:
    /* 00005340   4  move.l D0,(ffff85e2,A4) */
    c->pc = RC_ADDR(0x00005340u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x7a1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5344:
    /* 00005344   4  tst.l (ffff85e2,A4) */
    c->pc = RC_ADDR(0x00005344u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7a1eu));
    rc_set_nzvc(c, t0, RC_L);

L_5348:
    /* 00005348   2  beq 0000536a */
    c->pc = RC_ADDR(0x00005348u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_536A;

L_534A:
    /* 0000534a   4  move.l (ffff85e2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000534au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7a1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_534E:
    /* 0000534e   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x0000534eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5352:
    /* 00005352   4  jsr (ffff83bc,A4) */
    c->pc = RC_ADDR(0x00005352u);
    rc_step(c, m, 18);
    /* vector 159 */
    rc_push32(c, m, RC_ADDR(0x00005356u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023eb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000239acu);
    return;

L_5356:
    /* 00005356   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005356u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5358:
    /* 00005358   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00005358u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_535A:
    /* 0000535a   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x0000535au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_535E:
    /* 0000535e   4  jsr (ffff83b6,A4) */
    c->pc = RC_ADDR(0x0000535eu);
    rc_step(c, m, 18);
    /* vector 158 */
    rc_push32(c, m, RC_ADDR(0x00005362u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023eacu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002399cu);
    return;

L_5362:
    /* 00005362   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005362u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5364:
    /* 00005364   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00005364u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_5366:
    /* 00005366   2  unlk A5 */
    c->pc = RC_ADDR(0x00005366u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5368:
    /* 00005368   2  rts */
    c->pc = RC_ADDR(0x00005368u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_536A:
    /* 0000536a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000536au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_536C:
    /* 0000536c   2  bra 00005366 */
    c->pc = RC_ADDR(0x0000536cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_5366;

}
