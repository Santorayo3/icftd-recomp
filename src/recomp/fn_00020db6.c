/* fn_00020db6 - 48 byte(s), 15 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020db6(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00020db6u): goto L_20DB6;
    case RC_ADDR(0x00020dbau): goto L_20DBA;
    case RC_ADDR(0x00020dbcu): goto L_20DBC;
    case RC_ADDR(0x00020dc2u): goto L_20DC2;
    case RC_ADDR(0x00020dc6u): goto L_20DC6;
    case RC_ADDR(0x00020dcau): goto L_20DCA;
    case RC_ADDR(0x00020dceu): goto L_20DCE;
    case RC_ADDR(0x00020dd2u): goto L_20DD2;
    case RC_ADDR(0x00020dd4u): goto L_20DD4;
    case RC_ADDR(0x00020dd8u): goto L_20DD8;
    case RC_ADDR(0x00020ddau): goto L_20DDA;
    case RC_ADDR(0x00020ddcu): goto L_20DDC;
    case RC_ADDR(0x00020de0u): goto L_20DE0;
    case RC_ADDR(0x00020de2u): goto L_20DE2;
    case RC_ADDR(0x00020de4u): goto L_20DE4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20DB6:
    /* 00020db6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00020db6u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_20DBA:
    /* 00020dba   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00020dbau);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20DBC:
    /* 00020dbc   6  move.l (8,A5),(ffffce12,A4) */
    c->pc = RC_ADDR(0x00020dbcu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x31eeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20DC2:
    /* 00020dc2   4  pea (10,A5) */
    c->pc = RC_ADDR(0x00020dc2u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] + 0x10u));

L_20DC6:
    /* 00020dc6   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00020dc6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20DCA:
    /* 00020dca   4  pea (00020de6) */
    c->pc = RC_ADDR(0x00020dcau);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020de6u));

L_20DCE:
    /* 00020dce   4  jsr (00020e90) */
    c->pc = RC_ADDR(0x00020dceu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020dd2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020e90u);
    return;

L_20DD2:
    /* 00020dd2   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00020dd2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20DD4:
    /* 00020dd4   4  movea.l (ffffce12,A4),A0 */
    c->pc = RC_ADDR(0x00020dd4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x31eeu));
    c->a[0] = t0;

L_20DD8:
    /* 00020dd8   2  clr.b (A0) */
    c->pc = RC_ADDR(0x00020dd8u);
    rc_step(c, m);
    rc_wr8(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_20DDA:
    /* 00020dda   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00020ddau);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20DDC:
    /* 00020ddc   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00020ddcu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_20DE0:
    /* 00020de0   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x00020de0u);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20DE2:
    /* 00020de2   2  unlk A5 */
    c->pc = RC_ADDR(0x00020de2u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_20DE4:
    /* 00020de4   2  rts */
    c->pc = RC_ADDR(0x00020de4u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
