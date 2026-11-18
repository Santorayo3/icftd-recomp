/* fn_00023772 - 16 byte(s), 4 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023772(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00023772u): goto L_23772;
    case RC_ADDR(0x00023776u): goto L_23776;
    case RC_ADDR(0x0002377au): goto L_2377A;
    case RC_ADDR(0x0002377eu): goto L_2377E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23772:
    /* 00023772   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x00023772u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_23776:
    /* 00023776   4  move.l (8,A7),D0 */
    c->pc = RC_ADDR(0x00023776u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2377A:
    /* 0002377a   4  movea.l (4524,A4),A6 */
    c->pc = RC_ADDR(0x0002377au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4524u));
    c->a[6] = t0;

L_2377E:
    /* 0002377e   4  jmp (ffffff2e,A6) */
    c->pc = RC_ADDR(0x0002377eu);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -210);
    return;

}
