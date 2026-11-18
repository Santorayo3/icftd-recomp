/* fn_00020956 - 6 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020956(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x00020956u): goto L_20956;
    case RC_ADDR(0x00020958u): goto L_20958;
    case RC_ADDR(0x0002095au): goto L_2095A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20956:
    /* 00020956   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00020956u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20958:
    /* 00020958   2  frestore (A7)+ */
    c->pc = RC_ADDR(0x00020958u);
    rc_step(c, m, 0);
    rc_line_f(c, m, "frestore");
    return;

L_2095A:
    /* 0002095a   2  rte */
    c->pc = RC_ADDR(0x0002095au);
    rc_step(c, m, 20);
    c->sr = (u16)rc_pop16(c, m);
    c->pc = rc_pop32(c, m);
    return;

}
