/* fn_00021272 - 8 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021272(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x00021272u): goto L_21272;
    case RC_ADDR(0x00021276u): goto L_21276;
    case RC_ADDR(0x00021278u): goto L_21278;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21272:
    /* 00021272   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00021272u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_21276:
    /* 00021276   2  unlk A5 */
    c->pc = RC_ADDR(0x00021276u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21278:
    /* 00021278   2  rts */
    c->pc = RC_ADDR(0x00021278u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
