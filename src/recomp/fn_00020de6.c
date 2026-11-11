/* fn_00020de6 - 28 byte(s), 9 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020de6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00020de6u): goto L_20DE6;
    case RC_ADDR(0x00020deau): goto L_20DEA;
    case RC_ADDR(0x00020deeu): goto L_20DEE;
    case RC_ADDR(0x00020df2u): goto L_20DF2;
    case RC_ADDR(0x00020df6u): goto L_20DF6;
    case RC_ADDR(0x00020df8u): goto L_20DF8;
    case RC_ADDR(0x00020dfau): goto L_20DFA;
    case RC_ADDR(0x00020dfeu): goto L_20DFE;
    case RC_ADDR(0x00020e00u): goto L_20E00;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20DE6:
    /* 00020de6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00020de6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_20DEA:
    /* 00020dea   4  movea.l (ffffce12,A4),A0 */
    c->pc = RC_ADDR(0x00020deau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x31eeu));
    c->a[0] = t0;

L_20DEE:
    /* 00020dee   4  addq.l #1,(ffffce12,A4) */
    c->pc = RC_ADDR(0x00020deeu);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x31eeu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_20DF2:
    /* 00020df2   4  move.b (9,A5),D0 */
    c->pc = RC_ADDR(0x00020df2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0x9u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20DF6:
    /* 00020df6   2  move.b D0,(A0) */
    c->pc = RC_ADDR(0x00020df6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_20DF8:
    /* 00020df8   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020df8u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_20DFA:
    /* 00020dfa   4  and.w #ff,D0 */
    c->pc = RC_ADDR(0x00020dfau);
    rc_step(c, m, 10);
    t0 = 0x000000ffu;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_20DFE:
    /* 00020dfe   2  unlk A5 */
    c->pc = RC_ADDR(0x00020dfeu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_20E00:
    /* 00020e00   2  rts */
    c->pc = RC_ADDR(0x00020e00u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
