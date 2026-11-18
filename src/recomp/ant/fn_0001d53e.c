/* fn_0001d53e - 90 byte(s), 22 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001d53e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d53eu): goto L_1D53E;
    case RC_ADDR(0x0001d542u): goto L_1D542;
    case RC_ADDR(0x0001d546u): goto L_1D546;
    case RC_ADDR(0x0001d54cu): goto L_1D54C;
    case RC_ADDR(0x0001d550u): goto L_1D550;
    case RC_ADDR(0x0001d554u): goto L_1D554;
    case RC_ADDR(0x0001d558u): goto L_1D558;
    case RC_ADDR(0x0001d55eu): goto L_1D55E;
    case RC_ADDR(0x0001d562u): goto L_1D562;
    case RC_ADDR(0x0001d566u): goto L_1D566;
    case RC_ADDR(0x0001d568u): goto L_1D568;
    case RC_ADDR(0x0001d56cu): goto L_1D56C;
    case RC_ADDR(0x0001d570u): goto L_1D570;
    case RC_ADDR(0x0001d576u): goto L_1D576;
    case RC_ADDR(0x0001d57au): goto L_1D57A;
    case RC_ADDR(0x0001d57eu): goto L_1D57E;
    case RC_ADDR(0x0001d580u): goto L_1D580;
    case RC_ADDR(0x0001d584u): goto L_1D584;
    case RC_ADDR(0x0001d588u): goto L_1D588;
    case RC_ADDR(0x0001d58eu): goto L_1D58E;
    case RC_ADDR(0x0001d594u): goto L_1D594;
    case RC_ADDR(0x0001d596u): goto L_1D596;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D53E:
    /* 0001d53e   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001d53eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1D542:
    /* 0001d542   4  clr.w (fffffacc,A4) */
    c->pc = RC_ADDR(0x0001d542u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x534u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D546:
    /* 0001d546   6  move.w #f,(fffffa26,A4) */
    c->pc = RC_ADDR(0x0001d546u);
    rc_step(c, m, 16);
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] - 0x5dau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D54C:
    /* 0001d54c   4  clr.w (fffffa28,A4) */
    c->pc = RC_ADDR(0x0001d54cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D550:
    /* 0001d550   4  clr.l (fffffa2a,A4) */
    c->pc = RC_ADDR(0x0001d550u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x5d6u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D554:
    /* 0001d554   4  clr.w (fffffa32,A4) */
    c->pc = RC_ADDR(0x0001d554u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5ceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D558:
    /* 0001d558   6  move.w #1,(fffffa34,A4) */
    c->pc = RC_ADDR(0x0001d558u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x5ccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D55E:
    /* 0001d55e   4  clr.l (ffff8556,A4) */
    c->pc = RC_ADDR(0x0001d55eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x7aaau), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D562:
    /* 0001d562   4  move.w (113a,A4),D0 */
    c->pc = RC_ADDR(0x0001d562u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x113au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D566:
    /* 0001d566   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d566u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D568:
    /* 0001d568   4  divs.w #8,D0 */
    c->pc = RC_ADDR(0x0001d568u);
    rc_step(c, m, 162);
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_1D56C:
    /* 0001d56c   4  move.w D0,(fffffa76,A4) */
    c->pc = RC_ADDR(0x0001d56cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x58au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D570:
    /* 0001d570   6  move.w (113c,A4),(fffffa78,A4) */
    c->pc = RC_ADDR(0x0001d570u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x113cu));
    rc_wr16(c, m, (c->a[4] - 0x588u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D576:
    /* 0001d576   4  move.w (113a,A4),D0 */
    c->pc = RC_ADDR(0x0001d576u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x113au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D57A:
    /* 0001d57a   4  sub.w #130,D0 */
    c->pc = RC_ADDR(0x0001d57au);
    rc_step(c, m, 10);
    t0 = 0x00000130u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1D57E:
    /* 0001d57e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d57eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D580:
    /* 0001d580   4  divs.w #8,D0 */
    c->pc = RC_ADDR(0x0001d580u);
    rc_step(c, m, 162);
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_1D584:
    /* 0001d584   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001d584u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D588:
    /* 0001d588   6  move.w (fffffffe,A5),(ffffb69e,A4) */
    c->pc = RC_ADDR(0x0001d588u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[4] - 0x4962u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D58E:
    /* 0001d58e   6  move.w (fffffffe,A5),(ffffb6a2,A4) */
    c->pc = RC_ADDR(0x0001d58eu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[4] - 0x495eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D594:
    /* 0001d594   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d594u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D596:
    /* 0001d596   2  rts */
    c->pc = RC_ADDR(0x0001d596u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
