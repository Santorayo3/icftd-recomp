/* fn_0001f70c - 8 byte(s), 2 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f70c(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0001f70cu): goto L_1F70C;
    case RC_ADDR(0x0001f710u): goto L_1F710;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F70C:
    /* 0001f70c   4  clr.w (28c2,A4) */
    c->pc = RC_ADDR(0x0001f70cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x28c2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F710:
    /* 0001f710   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f710u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
