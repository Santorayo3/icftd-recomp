/* fn_0002273a - 4 byte(s), 2 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002273a(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0002273au): goto L_2273A;
    case RC_ADDR(0x0002273cu): goto L_2273C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2273A:
    /* 0002273a   2  unlk A5 */
    c->pc = RC_ADDR(0x0002273au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2273C:
    /* 0002273c   2  rts */
    c->pc = RC_ADDR(0x0002273cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
