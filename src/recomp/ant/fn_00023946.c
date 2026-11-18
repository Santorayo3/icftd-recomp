/* fn_00023946 - 14 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023946(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00023946u): goto L_23946;
    case RC_ADDR(0x0002394cu): goto L_2394C;
    case RC_ADDR(0x00023950u): goto L_23950;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23946:
    /* 00023946   6  movem.l (SP)+,{ A0 A1 } */
    c->pc = RC_ADDR(0x00023946u);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;

L_2394C:
    /* 0002394c   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x0002394cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_23950:
    /* 00023950   4  jmp (ffffff28,A6) */
    c->pc = RC_ADDR(0x00023950u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -216);
    return;

}
