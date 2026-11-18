/* fn_000238bc - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000238bc(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000238bcu): goto L_238BC;
    case RC_ADDR(0x000238c0u): goto L_238C0;
    case RC_ADDR(0x000238c4u): goto L_238C4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_238BC:
    /* 000238bc   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x000238bcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_238C0:
    /* 000238c0   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x000238c0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_238C4:
    /* 000238c4   4  jmp (fffffdcc,A6) */
    c->pc = RC_ADDR(0x000238c4u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -564);
    return;

}
