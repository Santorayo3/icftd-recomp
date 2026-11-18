/* fn_0001732a - 80 byte(s), 25 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001732a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001732au): goto L_1732A;
    case RC_ADDR(0x0001732eu): goto L_1732E;
    case RC_ADDR(0x00017332u): goto L_17332;
    case RC_ADDR(0x00017334u): goto L_17334;
    case RC_ADDR(0x00017336u): goto L_17336;
    case RC_ADDR(0x0001733au): goto L_1733A;
    case RC_ADDR(0x0001733cu): goto L_1733C;
    case RC_ADDR(0x00017340u): goto L_17340;
    case RC_ADDR(0x00017342u): goto L_17342;
    case RC_ADDR(0x00017346u): goto L_17346;
    case RC_ADDR(0x00017348u): goto L_17348;
    case RC_ADDR(0x0001734au): goto L_1734A;
    case RC_ADDR(0x0001734eu): goto L_1734E;
    case RC_ADDR(0x00017350u): goto L_17350;
    case RC_ADDR(0x00017354u): goto L_17354;
    case RC_ADDR(0x00017356u): goto L_17356;
    case RC_ADDR(0x0001735au): goto L_1735A;
    case RC_ADDR(0x0001735eu): goto L_1735E;
    case RC_ADDR(0x00017362u): goto L_17362;
    case RC_ADDR(0x00017366u): goto L_17366;
    case RC_ADDR(0x0001736au): goto L_1736A;
    case RC_ADDR(0x0001736eu): goto L_1736E;
    case RC_ADDR(0x00017372u): goto L_17372;
    case RC_ADDR(0x00017376u): goto L_17376;
    case RC_ADDR(0x00017378u): goto L_17378;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1732A:
    /* 0001732a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001732au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1732E:
    /* 0001732e   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x0001732eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17332:
    /* 00017332   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017332u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_17334:
    /* 00017334   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00017334u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_17336:
    /* 00017336   4  lea (1bde,A4),A0 */
    c->pc = RC_ADDR(0x00017336u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bdeu);

L_1733A:
    /* 0001733a   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0001733au);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1733C:
    /* 0001733c   4  move.w (1c6e,A4),D0 */
    c->pc = RC_ADDR(0x0001733cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c6eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17340:
    /* 00017340   2  sub.w D0,(A0) */
    c->pc = RC_ADDR(0x00017340u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_17342:
    /* 00017342   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x00017342u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17346:
    /* 00017346   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017346u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_17348:
    /* 00017348   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00017348u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1734A:
    /* 0001734a   4  lea (1be6,A4),A0 */
    c->pc = RC_ADDR(0x0001734au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1be6u);

L_1734E:
    /* 0001734e   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0001734eu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_17350:
    /* 00017350   4  move.w (1c70,A4),D0 */
    c->pc = RC_ADDR(0x00017350u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c70u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17354:
    /* 00017354   2  sub.w D0,(A0) */
    c->pc = RC_ADDR(0x00017354u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_17356:
    /* 00017356   4  move.w (1c6e,A4),D0 */
    c->pc = RC_ADDR(0x00017356u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c6eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1735A:
    /* 0001735a   4  sub.w D0,(6fc,A4) */
    c->pc = RC_ADDR(0x0001735au);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6fcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1735E:
    /* 0001735e   4  move.w (1c70,A4),D0 */
    c->pc = RC_ADDR(0x0001735eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c70u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17362:
    /* 00017362   4  sub.w D0,(6fe,A4) */
    c->pc = RC_ADDR(0x00017362u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6feu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_17366:
    /* 00017366   4  clr.w (1c70,A4) */
    c->pc = RC_ADDR(0x00017366u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1c70u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1736A:
    /* 0001736a   4  clr.w (1c6e,A4) */
    c->pc = RC_ADDR(0x0001736au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1c6eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1736E:
    /* 0001736e   4  clr.w (fffffa30,A4) */
    c->pc = RC_ADDR(0x0001736eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17372:
    /* 00017372   4  clr.w (fffffa2e,A4) */
    c->pc = RC_ADDR(0x00017372u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17376:
    /* 00017376   2  unlk A5 */
    c->pc = RC_ADDR(0x00017376u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_17378:
    /* 00017378   2  rts */
    c->pc = RC_ADDR(0x00017378u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
