/* fn_00020914 - 4 byte(s), 2 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020914(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case 0x00020914u: goto L_20914;
    case 0x00020916u: goto L_20916;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20914:
    /* 00020914   2  moveq #ffffffff,D0 */
    c->pc = 0x00020914u;
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20916:
    /* 00020916   2  rts */
    c->pc = 0x00020916u;
    rc_ret(c, m);
    return;

}
