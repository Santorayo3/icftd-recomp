/* fn_00011be0 - 16 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011be0(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00011be0u): goto L_11BE0;
    case RC_ADDR(0x00011be4u): goto L_11BE4;
    case RC_ADDR(0x00011becu): goto L_11BEC;
    case RC_ADDR(0x00011beeu): goto L_11BEE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11BE0:
    /* 00011be0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00011be0u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_11BE4:
    /* 00011be4   8  move.w #400,(00dff096).l */
    c->pc = RC_ADDR(0x00011be4u);
    t0 = 0x00000400u;
    rc_wr16(c, m, RC_ADDR(0x00dff096u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11BEC:
    /* 00011bec   2  unlk A5 */
    c->pc = RC_ADDR(0x00011becu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11BEE:
    /* 00011bee   2  rts */
    c->pc = RC_ADDR(0x00011beeu);
    rc_ret(c, m);
    return;

}
