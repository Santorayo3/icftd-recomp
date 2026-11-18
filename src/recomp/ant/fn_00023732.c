/* fn_00023732 - 14 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023732(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00023732u): goto L_23732;
    case RC_ADDR(0x00023738u): goto L_23738;
    case RC_ADDR(0x0002373cu): goto L_2373C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23732:
    /* 00023732   6  movem.l (SP)+,{ D0 D1 } */
    c->pc = RC_ADDR(0x00023732u);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;

L_23738:
    /* 00023738   4  movea.l (4524,A4),A6 */
    c->pc = RC_ADDR(0x00023738u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4524u));
    c->a[6] = t0;

L_2373C:
    /* 0002373c   4  jmp (ffffff3a,A6) */
    c->pc = RC_ADDR(0x0002373cu);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -198);
    return;

}
