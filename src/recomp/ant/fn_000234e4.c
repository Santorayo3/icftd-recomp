/* fn_000234e4 - 8 byte(s), 2 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000234e4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000234e4u): goto L_234E4;
    case RC_ADDR(0x000234e8u): goto L_234E8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_234E4:
    /* 000234e4   4  movea.l (4528,A4),A6 */
    c->pc = RC_ADDR(0x000234e4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4528u));
    c->a[6] = t0;

L_234E8:
    /* 000234e8   4  jmp (ffffffca,A6) */
    c->pc = RC_ADDR(0x000234e8u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -54);
    return;

}
