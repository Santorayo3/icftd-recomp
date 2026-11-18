/* fn_000237f4 - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000237f4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000237f4u): goto L_237F4;
    case RC_ADDR(0x000237f8u): goto L_237F8;
    case RC_ADDR(0x000237fcu): goto L_237FC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_237F4:
    /* 000237f4   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x000237f4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_237F8:
    /* 000237f8   4  movea.l (4524,A4),A6 */
    c->pc = RC_ADDR(0x000237f8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4524u));
    c->a[6] = t0;

L_237FC:
    /* 000237fc   4  jmp (fffffe98,A6) */
    c->pc = RC_ADDR(0x000237fcu);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -360);
    return;

}
