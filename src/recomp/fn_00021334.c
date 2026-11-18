/* fn_00021334 - 6 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021334(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x00021334u): goto L_21334;
    case RC_ADDR(0x00021336u): goto L_21336;
    case RC_ADDR(0x00021338u): goto L_21338;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21334:
    /* 00021334   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00021334u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_21336:
    /* 00021336   2  frestore (A7)+ */
    c->pc = RC_ADDR(0x00021336u);
    rc_step(c, m, 0);
    rc_line_f(c, m, "frestore");
    return;

L_21338:
    /* 00021338   2  rte */
    c->pc = RC_ADDR(0x00021338u);
    rc_step(c, m, 20);
    c->sr = (u16)rc_pop16(c, m);
    c->pc = rc_pop32(c, m);
    return;

}
