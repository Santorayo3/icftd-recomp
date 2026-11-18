/* fn_000215b4 - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000215b4(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000215b4u): goto L_215B4;
    case RC_ADDR(0x000215b8u): goto L_215B8;
    case RC_ADDR(0x000215beu): goto L_215BE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_215B4:
    /* 000215b4   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x000215b4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_215B8:
    /* 000215b8   6  btst #0,(b,A0) */
    c->pc = RC_ADDR(0x000215b8u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_215BE:
    /* 000215be   2  beq 00021600 */
    c->pc = RC_ADDR(0x000215beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x00021600u);
        return;
    }

    /* falls through into 000215c0 */
    c->pc = RC_ADDR(0x000215c0u);
    return;
}
