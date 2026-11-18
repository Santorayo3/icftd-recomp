/* fn_0001f7e0 - 6 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f7e0(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f7e0u): goto L_1F7E0;
    case RC_ADDR(0x0001f7e2u): goto L_1F7E2;
    case RC_ADDR(0x0001f7e4u): goto L_1F7E4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F7E0:
    /* 0001f7e0   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x0001f7e0u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1F7E2:
    /* 0001f7e2   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f7e2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F7E4:
    /* 0001f7e4   2  rts */
    c->pc = RC_ADDR(0x0001f7e4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
