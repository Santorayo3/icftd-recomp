/* fn_0000b224 - 8 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b224(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0000b224u): goto L_B224;
    case RC_ADDR(0x0000b228u): goto L_B228;
    case RC_ADDR(0x0000b22au): goto L_B22A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B224:
    /* 0000b224   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000b224u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B228:
    /* 0000b228   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b228u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B22A:
    /* 0000b22a   2  rts */
    c->pc = RC_ADDR(0x0000b22au);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
