/* fn_0001f35e - 12 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f35e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f35eu): goto L_1F35E;
    case RC_ADDR(0x0001f362u): goto L_1F362;
    case RC_ADDR(0x0001f364u): goto L_1F364;
    case RC_ADDR(0x0001f366u): goto L_1F366;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F35E:
    /* 0001f35e   4  tst.l (a,A5) */
    c->pc = RC_ADDR(0x0001f35eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    rc_set_nzvc(c, t0, RC_L);

L_1F362:
    /* 0001f362   2  bne 0001f36a */
    c->pc = RC_ADDR(0x0001f362u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6))
    {
        c->pc = RC_ADDR(0x0001f36au);
        return;
    }

L_1F364:
    /* 0001f364   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f364u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F366:
    /* 0001f366   4  bra 0001f2ca */
    c->pc = RC_ADDR(0x0001f366u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f2cau);
    return;

}
