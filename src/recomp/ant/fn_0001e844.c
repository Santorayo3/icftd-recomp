/* fn_0001e844 - 42 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001e844(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e844u): goto L_1E844;
    case RC_ADDR(0x0001e848u): goto L_1E848;
    case RC_ADDR(0x0001e84cu): goto L_1E84C;
    case RC_ADDR(0x0001e850u): goto L_1E850;
    case RC_ADDR(0x0001e856u): goto L_1E856;
    case RC_ADDR(0x0001e85cu): goto L_1E85C;
    case RC_ADDR(0x0001e860u): goto L_1E860;
    case RC_ADDR(0x0001e866u): goto L_1E866;
    case RC_ADDR(0x0001e86au): goto L_1E86A;
    case RC_ADDR(0x0001e86cu): goto L_1E86C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E844:
    /* 0001e844   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e844u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E848:
    /* 0001e848   4  clr.w (30d0,A4) */
    c->pc = RC_ADDR(0x0001e848u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x30d0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E84C:
    /* 0001e84c   4  clr.w (30d4,A4) */
    c->pc = RC_ADDR(0x0001e84cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x30d4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E850:
    /* 0001e850   6  move.w #14,(30ca,A4) */
    c->pc = RC_ADDR(0x0001e850u);
    rc_step(c, m, 16);
    t0 = 0x00000014u;
    rc_wr16(c, m, (c->a[4] + 0x30cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E856:
    /* 0001e856   6  move.w #11,(2caa,A4) */
    c->pc = RC_ADDR(0x0001e856u);
    rc_step(c, m, 16);
    t0 = 0x00000011u;
    rc_wr16(c, m, (c->a[4] + 0x2caau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E85C:
    /* 0001e85c   4  clr.w (2cac,A4) */
    c->pc = RC_ADDR(0x0001e85cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2cacu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E860:
    /* 0001e860   6  move.w #ffec,(30d6,A4) */
    c->pc = RC_ADDR(0x0001e860u);
    rc_step(c, m, 16);
    t0 = 0x0000ffecu;
    rc_wr16(c, m, (c->a[4] + 0x30d6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E866:
    /* 0001e866   4  clr.w (30cc,A4) */
    c->pc = RC_ADDR(0x0001e866u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x30ccu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E86A:
    /* 0001e86a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e86au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E86C:
    /* 0001e86c   2  rts */
    c->pc = RC_ADDR(0x0001e86cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
