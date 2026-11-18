/* fn_00023922 - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023922(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00023922u): goto L_23922;
    case RC_ADDR(0x00023926u): goto L_23926;
    case RC_ADDR(0x0002392au): goto L_2392A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23922:
    /* 00023922   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x00023922u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_23926:
    /* 00023926   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x00023926u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_2392A:
    /* 0002392a   4  jmp (fffffe98,A6) */
    c->pc = RC_ADDR(0x0002392au);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -360);
    return;

}
