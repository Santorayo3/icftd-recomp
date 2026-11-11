/* fn_00006e5c - 4 byte(s), 2 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00006e5c(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x00006e5cu): goto L_6E5C;
    case RC_ADDR(0x00006e5eu): goto L_6E5E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6E5C:
    /* 00006e5c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00006e5cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6E5E:
    /* 00006e5e   2  bra 00006e36 */
    c->pc = RC_ADDR(0x00006e5eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00006e36u);
    return;

}
