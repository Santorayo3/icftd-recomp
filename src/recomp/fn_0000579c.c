/* fn_0000579c - 30 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000579c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000579cu): goto L_579C;
    case RC_ADDR(0x000057a0u): goto L_57A0;
    case RC_ADDR(0x000057a6u): goto L_57A6;
    case RC_ADDR(0x000057aau): goto L_57AA;
    case RC_ADDR(0x000057aeu): goto L_57AE;
    case RC_ADDR(0x000057b2u): goto L_57B2;
    case RC_ADDR(0x000057b6u): goto L_57B6;
    case RC_ADDR(0x000057b8u): goto L_57B8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_579C:
    /* 0000579c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000579cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_57A0:
    /* 000057a0   6  move.w #1,(ffff83d2,A4) */
    c->pc = RC_ADDR(0x000057a0u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c2eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_57A6:
    /* 000057a6   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000057a6u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_57AA:
    /* 000057aa   4  add.w D0,(ffff83ce,A4) */
    c->pc = RC_ADDR(0x000057aau);
    t3 = (c->a[4] - 0x7c32u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_57AE:
    /* 000057ae   4  jsr (00005406) */
    c->pc = RC_ADDR(0x000057aeu);
    rc_push32(c, m, RC_ADDR(0x000057b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005406u);
    return;

L_57B2:
    /* 000057b2   4  clr.w (ffff83d2,A4) */
    c->pc = RC_ADDR(0x000057b2u);
    rc_wr16(c, m, (c->a[4] - 0x7c2eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_57B6:
    /* 000057b6   2  unlk A5 */
    c->pc = RC_ADDR(0x000057b6u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_57B8:
    /* 000057b8   2  rts */
    c->pc = RC_ADDR(0x000057b8u);
    rc_ret(c, m);
    return;

}
