/* fn_00023a06 - 14 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023a06(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00023a06u): goto L_23A06;
    case RC_ADDR(0x00023a0cu): goto L_23A0C;
    case RC_ADDR(0x00023a10u): goto L_23A10;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23A06:
    /* 00023a06   6  movem.l (SP)+,{ A0 A1 } */
    c->pc = RC_ADDR(0x00023a06u);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;

L_23A0C:
    /* 00023a0c   4  movea.l (4546,A4),A6 */
    c->pc = RC_ADDR(0x00023a0cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4546u));
    c->a[6] = t0;

L_23A10:
    /* 00023a10   4  jmp (ffffffa0,A6) */
    c->pc = RC_ADDR(0x00023a10u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -96);
    return;

}
