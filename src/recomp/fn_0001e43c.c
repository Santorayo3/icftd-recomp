/* fn_0001e43c - 22 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001e43c(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0001e43cu): goto L_1E43C;
    case RC_ADDR(0x0001e440u): goto L_1E440;
    case RC_ADDR(0x0001e444u): goto L_1E444;
    case RC_ADDR(0x0001e448u): goto L_1E448;
    case RC_ADDR(0x0001e44cu): goto L_1E44C;
    case RC_ADDR(0x0001e44eu): goto L_1E44E;
    case RC_ADDR(0x0001e450u): goto L_1E450;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E43C:
    /* 0001e43c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e43cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E440:
    /* 0001e440   4  pea (ffffcdfa,A4) */
    c->pc = RC_ADDR(0x0001e440u);
    rc_push32(c, m, (c->a[4] - 0x3206u));

L_1E444:
    /* 0001e444   4  pea (00000005).l */
    c->pc = RC_ADDR(0x0001e444u);
    rc_push32(c, m, RC_ADDR(0x00000005u));

L_1E448:
    /* 0001e448   4  jsr (ffff8356,A4) */
    c->pc = RC_ADDR(0x0001e448u);
    /* vector 142: exec.library -174 */
    c->pc = RC_ADDR(0x0001e44cu);
    rc_os_call(c, m, 0, -174);

L_1E44C:
    /* 0001e44c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001e44cu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E44E:
    /* 0001e44e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e44eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E450:
    /* 0001e450   2  rts */
    c->pc = RC_ADDR(0x0001e450u);
    rc_ret(c, m);
    return;

}
