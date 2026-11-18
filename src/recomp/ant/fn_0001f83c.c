/* fn_0001f83c - 36 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f83c(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0001f83cu): goto L_1F83C;
    case RC_ADDR(0x0001f840u): goto L_1F840;
    case RC_ADDR(0x0001f844u): goto L_1F844;
    case RC_ADDR(0x0001f848u): goto L_1F848;
    case RC_ADDR(0x0001f84cu): goto L_1F84C;
    case RC_ADDR(0x0001f850u): goto L_1F850;
    case RC_ADDR(0x0001f854u): goto L_1F854;
    case RC_ADDR(0x0001f858u): goto L_1F858;
    case RC_ADDR(0x0001f85cu): goto L_1F85C;
    case RC_ADDR(0x0001f85eu): goto L_1F85E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F83C:
    /* 0001f83c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001f83cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F840:
    /* 0001f840   4  clr.w (924,A4) */
    c->pc = RC_ADDR(0x0001f840u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x924u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F844:
    /* 0001f844   4  clr.w (91c,A4) */
    c->pc = RC_ADDR(0x0001f844u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x91cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F848:
    /* 0001f848   4  clr.w (32f2,A4) */
    c->pc = RC_ADDR(0x0001f848u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x32f2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F84C:
    /* 0001f84c   4  clr.w (32f0,A4) */
    c->pc = RC_ADDR(0x0001f84cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x32f0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F850:
    /* 0001f850   4  clr.w (91e,A4) */
    c->pc = RC_ADDR(0x0001f850u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x91eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F854:
    /* 0001f854   4  clr.w (30ea,A4) */
    c->pc = RC_ADDR(0x0001f854u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x30eau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F858:
    /* 0001f858   4  jsr (0001fbba) */
    c->pc = RC_ADDR(0x0001f858u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f85cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fbbau);
    return;

L_1F85C:
    /* 0001f85c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f85cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F85E:
    /* 0001f85e   2  rts */
    c->pc = RC_ADDR(0x0001f85eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
