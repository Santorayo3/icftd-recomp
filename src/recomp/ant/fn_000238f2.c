/* fn_000238f2 - 18 byte(s), 4 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000238f2(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000238f2u): goto L_238F2;
    case RC_ADDR(0x000238f6u): goto L_238F6;
    case RC_ADDR(0x000238fcu): goto L_238FC;
    case RC_ADDR(0x00023900u): goto L_23900;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_238F2:
    /* 000238f2   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x000238f2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_238F6:
    /* 000238f6   6  movem.l (SP)+,{ D0 D1 D2 } */
    c->pc = RC_ADDR(0x000238f6u);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;

L_238FC:
    /* 000238fc   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x000238fcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_23900:
    /* 00023900   4  jmp (fffffe7a,A6) */
    c->pc = RC_ADDR(0x00023900u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -390);
    return;

}
