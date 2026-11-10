/* fn_000170c4 - 26 byte(s), 6 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000170c4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000170c4u): goto L_170C4;
    case RC_ADDR(0x000170c8u): goto L_170C8;
    case RC_ADDR(0x000170ceu): goto L_170CE;
    case RC_ADDR(0x000170d4u): goto L_170D4;
    case RC_ADDR(0x000170dau): goto L_170DA;
    case RC_ADDR(0x000170dcu): goto L_170DC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_170C4:
    /* 000170c4   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000170c4u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_170C8:
    /* 000170c8   6  move.l (ffffcbbc,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x000170c8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_170CE:
    /* 000170ce   6  move.l (ffffcbb8,A4),(ffffcbbc,A4) */
    c->pc = RC_ADDR(0x000170ceu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    rc_wr32(c, m, (c->a[4] - 0x3444u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_170D4:
    /* 000170d4   6  move.l (fffffffc,A5),(ffffcbb8,A4) */
    c->pc = RC_ADDR(0x000170d4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_wr32(c, m, (c->a[4] - 0x3448u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_170DA:
    /* 000170da   2  unlk A5 */
    c->pc = RC_ADDR(0x000170dau);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_170DC:
    /* 000170dc   2  rts */
    c->pc = RC_ADDR(0x000170dcu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
