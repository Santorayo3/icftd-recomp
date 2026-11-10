/* fn_00020c92 - 6 byte(s), 2 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020c92(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00020c92u): goto L_20C92;
    case RC_ADDR(0x00020c96u): goto L_20C96;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20C92:
    /* 00020c92   4  move.w #7fff,D0 */
    c->pc = RC_ADDR(0x00020c92u);
    t0 = 0x00007fffu;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20C96:
    /* 00020c96   2  bra 00020c9c */
    c->pc = RC_ADDR(0x00020c96u);
    c->pc = RC_ADDR(0x00020c9cu);
    return;

}
