/* fn_0002352a - 14 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002352a(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002352au): goto L_2352A;
    case RC_ADDR(0x00023530u): goto L_23530;
    case RC_ADDR(0x00023534u): goto L_23534;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2352A:
    /* 0002352a   6  movem.l (SP)+,{ D1 D2 D3 } */
    c->pc = RC_ADDR(0x0002352au);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;

L_23530:
    /* 00023530   4  movea.l (4528,A4),A6 */
    c->pc = RC_ADDR(0x00023530u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4528u));
    c->a[6] = t0;

L_23534:
    /* 00023534   4  jmp (ffffffbe,A6) */
    c->pc = RC_ADDR(0x00023534u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -66);
    return;

}
