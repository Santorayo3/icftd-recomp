/* fn_00007cfe - 6 byte(s), 1 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00007cfe(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00007cfeu): goto L_7CFE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7CFE:
    /* 00007cfe   6  cmpi.b #64,(4,A0) */
    c->pc = RC_ADDR(0x00007cfeu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_cmp(c, RC_B, t0, 0x00000064u);

    /* falls through into 00007d04 */
    c->pc = RC_ADDR(0x00007d04u);
    return;
}
