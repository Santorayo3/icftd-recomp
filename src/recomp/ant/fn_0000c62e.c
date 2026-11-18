/* fn_0000c62e - 8 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000c62e(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0000c62eu): goto L_C62E;
    case RC_ADDR(0x0000c632u): goto L_C632;
    case RC_ADDR(0x0000c634u): goto L_C634;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C62E:
    /* 0000c62e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000c62eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_C632:
    /* 0000c632   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c632u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C634:
    /* 0000c634   2  rts */
    c->pc = RC_ADDR(0x0000c634u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
