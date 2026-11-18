/* fn_000109cc - 6 byte(s), 1 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000109cc(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000109ccu): goto L_109CC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_109CC:
    /* 000109cc   6  bclr #0,(1c,A6) */
    c->pc = RC_ADDR(0x000109ccu);
    rc_step(c, m, 20);
    t3 = (c->a[6] + 0x1cu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 & ~(1u << t4);
    rc_wr8(c, m, t3, t2);

    /* falls through into 000109d2 */
    c->pc = RC_ADDR(0x000109d2u);
    return;
}
