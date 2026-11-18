/* fn_00023884 - 18 byte(s), 4 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023884(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00023884u): goto L_23884;
    case RC_ADDR(0x00023888u): goto L_23888;
    case RC_ADDR(0x0002388eu): goto L_2388E;
    case RC_ADDR(0x00023892u): goto L_23892;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23884:
    /* 00023884   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x00023884u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_23888:
    /* 00023888   6  movem.l (SP)+,{ D0 D1 } */
    c->pc = RC_ADDR(0x00023888u);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;

L_2388E:
    /* 0002388e   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x0002388eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_23892:
    /* 00023892   4  jmp (fffffe86,A6) */
    c->pc = RC_ADDR(0x00023892u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -378);
    return;

}
