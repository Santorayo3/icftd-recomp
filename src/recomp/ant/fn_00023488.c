/* fn_00023488 - 14 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023488(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00023488u): goto L_23488;
    case RC_ADDR(0x0002348cu): goto L_2348C;
    case RC_ADDR(0x00023492u): goto L_23492;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23488:
    /* 00023488   4  movea.l (4,A7),A6 */
    c->pc = RC_ADDR(0x00023488u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[6] = t0;

L_2348C:
    /* 0002348c   6  movem.l (SP)+,{ D0 A1 } */
    c->pc = RC_ADDR(0x0002348cu);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;

L_23492:
    /* 00023492   4  jmp (fffffffa,A6) */
    c->pc = RC_ADDR(0x00023492u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -6);
    return;

}
