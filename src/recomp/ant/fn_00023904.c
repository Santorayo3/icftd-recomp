/* fn_00023904 - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023904(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00023904u): goto L_23904;
    case RC_ADDR(0x00023908u): goto L_23908;
    case RC_ADDR(0x0002390cu): goto L_2390C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23904:
    /* 00023904   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x00023904u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_23908:
    /* 00023908   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x00023908u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_2390C:
    /* 0002390c   4  jmp (ffffff3a,A6) */
    c->pc = RC_ADDR(0x0002390cu);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -198);
    return;

}
