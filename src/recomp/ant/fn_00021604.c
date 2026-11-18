/* fn_00021604 - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021604(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00021604u): goto L_21604;
    case RC_ADDR(0x00021608u): goto L_21608;
    case RC_ADDR(0x0002160eu): goto L_2160E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21604:
    /* 00021604   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x00021604u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_21608:
    /* 00021608   6  btst #0,(b,A0) */
    c->pc = RC_ADDR(0x00021608u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_2160E:
    /* 0002160e   2  beq 0002165c */
    c->pc = RC_ADDR(0x0002160eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x0002165cu);
        return;
    }

    /* falls through into 00021610 */
    c->pc = RC_ADDR(0x00021610u);
    return;
}
