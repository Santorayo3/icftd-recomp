/* fn_00010002 - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00010002(cpu_t *c, rt_machine *m)
{
    u32 t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00010002u): goto L_10002;
    case RC_ADDR(0x00010006u): goto L_10006;
    case RC_ADDR(0x0001000au): goto L_1000A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10002:
    /* 00010002   4  ori.b #1,D0 */
    c->pc = RC_ADDR(0x00010002u);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 | 0x00000001u;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_10006:
    /* 00010006   4  beq 000100ba */
    c->pc = RC_ADDR(0x00010006u);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x000100bau);
        return;
    }

L_1000A:
    /* 0001000a   4  bra 00010084 */
    c->pc = RC_ADDR(0x0001000au);
    c->pc = RC_ADDR(0x00010084u);
    return;

}
