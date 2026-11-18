/* fn_0002350c - 8 byte(s), 2 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002350c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002350cu): goto L_2350C;
    case RC_ADDR(0x00023510u): goto L_23510;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2350C:
    /* 0002350c   4  movea.l (4528,A4),A6 */
    c->pc = RC_ADDR(0x0002350cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4528u));
    c->a[6] = t0;

L_23510:
    /* 00023510   4  jmp (ffffffc4,A6) */
    c->pc = RC_ADDR(0x00023510u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -60);
    return;

}
