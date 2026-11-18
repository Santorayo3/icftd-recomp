/* fn_00021660 - 14 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021660(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021660u): goto L_21660;
    case RC_ADDR(0x00021664u): goto L_21664;
    case RC_ADDR(0x0002166au): goto L_2166A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21660:
    /* 00021660   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x00021660u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_21664:
    /* 00021664   6  move.w #ffff,(2a,A0) */
    c->pc = RC_ADDR(0x00021664u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[0] + 0x2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2166A:
    /* 0002166a   4  bra 00021950 */
    c->pc = RC_ADDR(0x0002166au);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
