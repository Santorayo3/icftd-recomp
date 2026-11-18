/* fn_000003f0 - 80 byte(s), 21 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000003f0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x000003f0u): goto L_3F0;
    case RC_ADDR(0x000003f4u): goto L_3F4;
    case RC_ADDR(0x000003fau): goto L_3FA;
    case RC_ADDR(0x000003feu): goto L_3FE;
    case RC_ADDR(0x00000402u): goto L_402;
    case RC_ADDR(0x00000406u): goto L_406;
    case RC_ADDR(0x0000040au): goto L_40A;
    case RC_ADDR(0x0000040eu): goto L_40E;
    case RC_ADDR(0x00000412u): goto L_412;
    case RC_ADDR(0x00000414u): goto L_414;
    case RC_ADDR(0x00000418u): goto L_418;
    case RC_ADDR(0x0000041cu): goto L_41C;
    case RC_ADDR(0x00000422u): goto L_422;
    case RC_ADDR(0x00000426u): goto L_426;
    case RC_ADDR(0x0000042au): goto L_42A;
    case RC_ADDR(0x0000042cu): goto L_42C;
    case RC_ADDR(0x00000430u): goto L_430;
    case RC_ADDR(0x00000434u): goto L_434;
    case RC_ADDR(0x00000436u): goto L_436;
    case RC_ADDR(0x0000043au): goto L_43A;
    case RC_ADDR(0x0000043eu): goto L_43E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3F0:
    /* 000003f0   4  link.w A5,#ffffffb8 */
    c->pc = RC_ADDR(0x000003f0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x48u;

L_3F4:
    /* 000003f4   6  move.w #1,(ffffd5ba,A4) */
    c->pc = RC_ADDR(0x000003f4u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2a46u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3FA:
    /* 000003fa   4  clr.w (7b6,A4) */
    c->pc = RC_ADDR(0x000003fau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7b6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3FE:
    /* 000003fe   4  clr.w (ffffffc2,A5) */
    c->pc = RC_ADDR(0x000003feu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x3eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_402:
    /* 00000402   4  jsr (0000065e) */
    c->pc = RC_ADDR(0x00000402u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000406u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000065eu);
    return;

L_406:
    /* 00000406   4  jsr (00007ffa) */
    c->pc = RC_ADDR(0x00000406u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000040au));
    rc_depth++;
    c->pc = RC_ADDR(0x00007ffau);
    return;

L_40A:
    /* 0000040a   4  move.w #c,-(A7) */
    c->pc = RC_ADDR(0x0000040au);
    rc_step(c, m, 12);
    t0 = 0x0000000cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_40E:
    /* 0000040e   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0000040eu);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x00000412u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_412:
    /* 00000412   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00000412u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_414:
    /* 00000414   4  muls.w #5,D0 */
    c->pc = RC_ADDR(0x00000414u);
    rc_step(c, m, 42);
    t0 = 0x00000005u;
    rc_muls(c, 0, t0);

L_418:
    /* 00000418   4  move.w D0,(79e,A4) */
    c->pc = RC_ADDR(0x00000418u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x79eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_41C:
    /* 0000041c   6  move.w (79e,A4),(7a0,A4) */
    c->pc = RC_ADDR(0x0000041cu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x79eu));
    rc_wr16(c, m, (c->a[4] + 0x7a0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_422:
    /* 00000422   4  move.w (79e,A4),D0 */
    c->pc = RC_ADDR(0x00000422u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x79eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_426:
    /* 00000426   4  cmp.w (7a0,A4),D0 */
    c->pc = RC_ADDR(0x00000426u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a0u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_42A:
    /* 0000042a   2  bne 00000440 */
    c->pc = RC_ADDR(0x0000042au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6))
    {
        c->pc = RC_ADDR(0x00000440u);
        return;
    }

L_42C:
    /* 0000042c   4  move.w #c,-(A7) */
    c->pc = RC_ADDR(0x0000042cu);
    rc_step(c, m, 12);
    t0 = 0x0000000cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_430:
    /* 00000430   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x00000430u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x00000434u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_434:
    /* 00000434   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00000434u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_436:
    /* 00000436   4  muls.w #5,D0 */
    c->pc = RC_ADDR(0x00000436u);
    rc_step(c, m, 42);
    t0 = 0x00000005u;
    rc_muls(c, 0, t0);

L_43A:
    /* 0000043a   4  move.w D0,(7a0,A4) */
    c->pc = RC_ADDR(0x0000043au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x7a0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_43E:
    /* 0000043e   2  bra 00000422 */
    c->pc = RC_ADDR(0x0000043eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_422;

}
