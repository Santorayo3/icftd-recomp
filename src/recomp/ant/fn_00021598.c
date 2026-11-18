/* fn_00021598 - 14 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021598(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00021598u): goto L_21598;
    case RC_ADDR(0x0002159cu): goto L_2159C;
    case RC_ADDR(0x000215a2u): goto L_215A2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21598:
    /* 00021598   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x00021598u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_2159C:
    /* 0002159c   6  bset #1,(b,A0) */
    c->pc = RC_ADDR(0x0002159cu);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_215A2:
    /* 000215a2   4  bra 00021950 */
    c->pc = RC_ADDR(0x000215a2u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
