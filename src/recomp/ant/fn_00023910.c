/* fn_00023910 - 18 byte(s), 4 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023910(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00023910u): goto L_23910;
    case RC_ADDR(0x00023916u): goto L_23916;
    case RC_ADDR(0x0002391au): goto L_2391A;
    case RC_ADDR(0x0002391eu): goto L_2391E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23910:
    /* 00023910   6  movem.l (SP)+,{ A0 A1 } */
    c->pc = RC_ADDR(0x00023910u);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;

L_23916:
    /* 00023916   4  move.l (c,A7),D0 */
    c->pc = RC_ADDR(0x00023916u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2391A:
    /* 0002391a   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x0002391au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_2391E:
    /* 0002391e   4  jmp (fffffe2c,A6) */
    c->pc = RC_ADDR(0x0002391eu);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -468);
    return;

}
