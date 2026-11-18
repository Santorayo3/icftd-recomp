/* fn_000215a6 - 14 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000215a6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000215a6u): goto L_215A6;
    case RC_ADDR(0x000215aau): goto L_215AA;
    case RC_ADDR(0x000215b0u): goto L_215B0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_215A6:
    /* 000215a6   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x000215a6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_215AA:
    /* 000215aa   6  andi.w #fffd,(a,A0) */
    c->pc = RC_ADDR(0x000215aau);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000fffdu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_215B0:
    /* 000215b0   4  bra 00021950 */
    c->pc = RC_ADDR(0x000215b0u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
