/* fn_00023848 - 18 byte(s), 4 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023848(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00023848u): goto L_23848;
    case RC_ADDR(0x0002384cu): goto L_2384C;
    case RC_ADDR(0x00023852u): goto L_23852;
    case RC_ADDR(0x00023856u): goto L_23856;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23848:
    /* 00023848   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x00023848u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_2384C:
    /* 0002384c   6  movem.l (SP)+,{ D0 D1 } */
    c->pc = RC_ADDR(0x0002384cu);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;

L_23852:
    /* 00023852   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x00023852u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_23856:
    /* 00023856   4  jmp (fffffed4,A6) */
    c->pc = RC_ADDR(0x00023856u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -300);
    return;

}
