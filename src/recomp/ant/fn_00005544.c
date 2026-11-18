/* fn_00005544 - 82 byte(s), 23 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00005544(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00005544u): goto L_5544;
    case RC_ADDR(0x00005548u): goto L_5548;
    case RC_ADDR(0x0000554eu): goto L_554E;
    case RC_ADDR(0x00005552u): goto L_5552;
    case RC_ADDR(0x00005554u): goto L_5554;
    case RC_ADDR(0x00005558u): goto L_5558;
    case RC_ADDR(0x0000555cu): goto L_555C;
    case RC_ADDR(0x0000555eu): goto L_555E;
    case RC_ADDR(0x00005562u): goto L_5562;
    case RC_ADDR(0x00005566u): goto L_5566;
    case RC_ADDR(0x0000556au): goto L_556A;
    case RC_ADDR(0x0000556eu): goto L_556E;
    case RC_ADDR(0x00005572u): goto L_5572;
    case RC_ADDR(0x00005576u): goto L_5576;
    case RC_ADDR(0x0000557au): goto L_557A;
    case RC_ADDR(0x0000557eu): goto L_557E;
    case RC_ADDR(0x00005582u): goto L_5582;
    case RC_ADDR(0x00005584u): goto L_5584;
    case RC_ADDR(0x00005588u): goto L_5588;
    case RC_ADDR(0x0000558cu): goto L_558C;
    case RC_ADDR(0x00005590u): goto L_5590;
    case RC_ADDR(0x00005592u): goto L_5592;
    case RC_ADDR(0x00005594u): goto L_5594;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5544:
    /* 00005544   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00005544u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_5548:
    /* 00005548   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00005548u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_554E:
    /* 0000554e   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000554eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_5552:
    /* 00005552   2  beq 00005592 */
    c->pc = RC_ADDR(0x00005552u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5592;

L_5554:
    /* 00005554   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00005554u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5558:
    /* 00005558   4  jsr (000054be) */
    c->pc = RC_ADDR(0x00005558u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000555cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000054beu);
    return;

L_555C:
    /* 0000555c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000555cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_555E:
    /* 0000555e   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000555eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5562:
    /* 00005562   4  move.l (fffffa1c,A4),-(A7) */
    c->pc = RC_ADDR(0x00005562u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5e4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5566:
    /* 00005566   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00005566u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_556A:
    /* 0000556a   4  move.w (fffffa1a,A4),-(A7) */
    c->pc = RC_ADDR(0x0000556au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5e6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_556E:
    /* 0000556e   4  move.w (850,A4),-(A7) */
    c->pc = RC_ADDR(0x0000556eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x850u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5572:
    /* 00005572   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00005572u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5576:
    /* 00005576   4  jsr (000053b0) */
    c->pc = RC_ADDR(0x00005576u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000557au));
    rc_depth++;
    c->pc = RC_ADDR(0x000053b0u);
    return;

L_557A:
    /* 0000557a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000557au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_557E:
    /* 0000557e   4  move.l (fffffa1c,A4),D0 */
    c->pc = RC_ADDR(0x0000557eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5e4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_5582:
    /* 00005582   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x00005582u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_5584:
    /* 00005584   4  add.l D0,(8,A5) */
    c->pc = RC_ADDR(0x00005584u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_5588:
    /* 00005588   4  move.w (9e8,A4),D0 */
    c->pc = RC_ADDR(0x00005588u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x9e8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_558C:
    /* 0000558c   4  add.w D0,(fffffa1a,A4) */
    c->pc = RC_ADDR(0x0000558cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5e6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_5590:
    /* 00005590   2  bra 0000554e */
    c->pc = RC_ADDR(0x00005590u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_554E;

L_5592:
    /* 00005592   2  unlk A5 */
    c->pc = RC_ADDR(0x00005592u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5594:
    /* 00005594   2  rts */
    c->pc = RC_ADDR(0x00005594u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
