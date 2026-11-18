/* fn_00023590 - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023590(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00023590u): goto L_23590;
    case RC_ADDR(0x00023594u): goto L_23594;
    case RC_ADDR(0x00023598u): goto L_23598;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23590:
    /* 00023590   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x00023590u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_23594:
    /* 00023594   4  movea.l (4524,A4),A6 */
    c->pc = RC_ADDR(0x00023594u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4524u));
    c->a[6] = t0;

L_23598:
    /* 00023598   4  jmp (fffffe62,A6) */
    c->pc = RC_ADDR(0x00023598u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -414);
    return;

}
