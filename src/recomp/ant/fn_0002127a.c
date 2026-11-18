/* fn_0002127a - 8 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002127a(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0002127au): goto L_2127A;
    case RC_ADDR(0x0002127eu): goto L_2127E;
    case RC_ADDR(0x00021280u): goto L_21280;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2127A:
    /* 0002127a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0002127au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_2127E:
    /* 0002127e   2  unlk A5 */
    c->pc = RC_ADDR(0x0002127eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21280:
    /* 00021280   2  rts */
    c->pc = RC_ADDR(0x00021280u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
