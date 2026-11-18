/* fn_0001f562 - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f562(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f562u): goto L_1F562;
    case RC_ADDR(0x0001f566u): goto L_1F566;
    case RC_ADDR(0x0001f56cu): goto L_1F56C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F562:
    /* 0001f562   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x0001f562u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_1F566:
    /* 0001f566   6  btst #0,(b,A0) */
    c->pc = RC_ADDR(0x0001f566u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1F56C:
    /* 0001f56c   2  beq 0001f5ba */
    c->pc = RC_ADDR(0x0001f56cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x0001f5bau);
        return;
    }

    /* falls through into 0001f56e */
    c->pc = RC_ADDR(0x0001f56eu);
    return;
}
