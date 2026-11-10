/* fn_0002098a - 8 byte(s), 2 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002098a(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0002098au): goto L_2098A;
    case RC_ADDR(0x00020990u): goto L_20990;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2098A:
    /* 0002098a   6  lea (00029a56).l,A4 */
    c->pc = RC_ADDR(0x0002098au);
    c->a[4] = RC_ADDR(0x00029a56u);

L_20990:
    /* 00020990   2  rts */
    c->pc = RC_ADDR(0x00020990u);
    rc_ret(c, m);
    return;

}
