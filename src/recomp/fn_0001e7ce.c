/* fn_0001e7ce - 18 byte(s), 6 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001e7ce(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e7ceu): goto L_1E7CE;
    case RC_ADDR(0x0001e7d2u): goto L_1E7D2;
    case RC_ADDR(0x0001e7d6u): goto L_1E7D6;
    case RC_ADDR(0x0001e7dau): goto L_1E7DA;
    case RC_ADDR(0x0001e7dcu): goto L_1E7DC;
    case RC_ADDR(0x0001e7deu): goto L_1E7DE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E7CE:
    /* 0001e7ce   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e7ceu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E7D2:
    /* 0001e7d2   4  move.w #14,-(A7) */
    c->pc = RC_ADDR(0x0001e7d2u);
    rc_step(c, m);
    t0 = 0x00000014u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E7D6:
    /* 0001e7d6   4  jsr (0001e756) */
    c->pc = RC_ADDR(0x0001e7d6u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001e7dau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e756u);
    return;

L_1E7DA:
    /* 0001e7da   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001e7dau);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1E7DC:
    /* 0001e7dc   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e7dcu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E7DE:
    /* 0001e7de   2  rts */
    c->pc = RC_ADDR(0x0001e7deu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
