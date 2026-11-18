/* fn_0002355a - 14 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002355a(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002355au): goto L_2355A;
    case RC_ADDR(0x00023560u): goto L_23560;
    case RC_ADDR(0x00023564u): goto L_23564;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2355A:
    /* 0002355a   6  movem.l (SP)+,{ D0 A1 } */
    c->pc = RC_ADDR(0x0002355au);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;

L_23560:
    /* 00023560   4  movea.l (4524,A4),A6 */
    c->pc = RC_ADDR(0x00023560u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4524u));
    c->a[6] = t0;

L_23564:
    /* 00023564   4  jmp (ffffff58,A6) */
    c->pc = RC_ADDR(0x00023564u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -168);
    return;

}
