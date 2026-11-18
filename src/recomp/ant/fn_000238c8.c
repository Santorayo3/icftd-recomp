/* fn_000238c8 - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000238c8(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000238c8u): goto L_238C8;
    case RC_ADDR(0x000238ccu): goto L_238CC;
    case RC_ADDR(0x000238d0u): goto L_238D0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_238C8:
    /* 000238c8   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x000238c8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_238CC:
    /* 000238cc   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x000238ccu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_238D0:
    /* 000238d0   4  jmp (fffffde4,A6) */
    c->pc = RC_ADDR(0x000238d0u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -540);
    return;

}
