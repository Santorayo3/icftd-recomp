/* fn_0001f2ca - 8 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f2ca(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f2cau): goto L_1F2CA;
    case RC_ADDR(0x0001f2ceu): goto L_1F2CE;
    case RC_ADDR(0x0001f2d0u): goto L_1F2D0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F2CA:
    /* 0001f2ca   4  movem.l (SP)+,{ A2 A3 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2cau);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1F2CE:
    /* 0001f2ce   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2ceu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F2D0:
    /* 0001f2d0   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2d0u);
    rc_ret(c, m);
    return;

}
