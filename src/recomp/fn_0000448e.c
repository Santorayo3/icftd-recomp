/* fn_0000448e - 16 byte(s), 5 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000448e(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0000448eu): goto L_448E;
    case RC_ADDR(0x00004492u): goto L_4492;
    case RC_ADDR(0x00004496u): goto L_4496;
    case RC_ADDR(0x0000449au): goto L_449A;
    case RC_ADDR(0x0000449cu): goto L_449C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_448E:
    /* 0000448e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000448eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_4492:
    /* 00004492   4  jsr (000043b8) */
    c->pc = RC_ADDR(0x00004492u);
    rc_push32(c, m, RC_ADDR(0x00004496u));
    rc_depth++;
    c->pc = RC_ADDR(0x000043b8u);
    return;

L_4496:
    /* 00004496   4  jsr (ffff8260,A4) */
    c->pc = RC_ADDR(0x00004496u);
    /* vector 101 */
    rc_push32(c, m, RC_ADDR(0x0000449au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f27eu);
    return;

L_449A:
    /* 0000449a   2  unlk A5 */
    c->pc = RC_ADDR(0x0000449au);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_449C:
    /* 0000449c   2  rts */
    c->pc = RC_ADDR(0x0000449cu);
    rc_ret(c, m);
    return;

}
