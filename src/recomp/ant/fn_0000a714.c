/* fn_0000a714 - 28 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000a714(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0000a714u): goto L_A714;
    case RC_ADDR(0x0000a718u): goto L_A718;
    case RC_ADDR(0x0000a71cu): goto L_A71C;
    case RC_ADDR(0x0000a720u): goto L_A720;
    case RC_ADDR(0x0000a724u): goto L_A724;
    case RC_ADDR(0x0000a728u): goto L_A728;
    case RC_ADDR(0x0000a72cu): goto L_A72C;
    case RC_ADDR(0x0000a72eu): goto L_A72E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A714:
    /* 0000a714   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000a714u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_A718:
    /* 0000a718   4  clr.w (fffff8a2,A4) */
    c->pc = RC_ADDR(0x0000a718u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x75eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A71C:
    /* 0000a71c   4  clr.w (fffff8a0,A4) */
    c->pc = RC_ADDR(0x0000a71cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x760u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A720:
    /* 0000a720   4  clr.w (fffff8a6,A4) */
    c->pc = RC_ADDR(0x0000a720u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x75au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A724:
    /* 0000a724   4  clr.w (fffff8a4,A4) */
    c->pc = RC_ADDR(0x0000a724u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x75cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A728:
    /* 0000a728   4  clr.w (fffff8a8,A4) */
    c->pc = RC_ADDR(0x0000a728u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x758u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A72C:
    /* 0000a72c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a72cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A72E:
    /* 0000a72e   2  rts */
    c->pc = RC_ADDR(0x0000a72eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
