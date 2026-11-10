/* fn_00004dca - 100 byte(s), 30 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00004dca(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00004dcau): goto L_4DCA;
    case RC_ADDR(0x00004dceu): goto L_4DCE;
    case RC_ADDR(0x00004dd2u): goto L_4DD2;
    case RC_ADDR(0x00004dd8u): goto L_4DD8;
    case RC_ADDR(0x00004ddcu): goto L_4DDC;
    case RC_ADDR(0x00004ddeu): goto L_4DDE;
    case RC_ADDR(0x00004de0u): goto L_4DE0;
    case RC_ADDR(0x00004de4u): goto L_4DE4;
    case RC_ADDR(0x00004de8u): goto L_4DE8;
    case RC_ADDR(0x00004deau): goto L_4DEA;
    case RC_ADDR(0x00004deeu): goto L_4DEE;
    case RC_ADDR(0x00004df0u): goto L_4DF0;
    case RC_ADDR(0x00004df2u): goto L_4DF2;
    case RC_ADDR(0x00004df6u): goto L_4DF6;
    case RC_ADDR(0x00004df8u): goto L_4DF8;
    case RC_ADDR(0x00004dfau): goto L_4DFA;
    case RC_ADDR(0x00004dfeu): goto L_4DFE;
    case RC_ADDR(0x00004e02u): goto L_4E02;
    case RC_ADDR(0x00004e06u): goto L_4E06;
    case RC_ADDR(0x00004e0au): goto L_4E0A;
    case RC_ADDR(0x00004e0eu): goto L_4E0E;
    case RC_ADDR(0x00004e10u): goto L_4E10;
    case RC_ADDR(0x00004e12u): goto L_4E12;
    case RC_ADDR(0x00004e16u): goto L_4E16;
    case RC_ADDR(0x00004e1au): goto L_4E1A;
    case RC_ADDR(0x00004e1eu): goto L_4E1E;
    case RC_ADDR(0x00004e22u): goto L_4E22;
    case RC_ADDR(0x00004e26u): goto L_4E26;
    case RC_ADDR(0x00004e2au): goto L_4E2A;
    case RC_ADDR(0x00004e2cu): goto L_4E2C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4DCA:
    /* 00004dca   4  link.w A5,#fffffffc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004dcau);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_4DCE:
    /* 00004dce   4  movea.l (ffffcb14,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004dceu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[0] = t0;

L_4DD2:
    /* 00004dd2   6  move.l (ffffcbbc,A4),(4,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004dd2u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4DD8:
    /* 00004dd8   4  move.w (10,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004dd8u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4DDC:
    /* 00004ddc   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004ddcu);
    rc_ext_l(c, 0);

L_4DDE:
    /* 00004dde   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004ddeu);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4DE0:
    /* 00004de0   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004de0u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4DE4:
    /* 00004de4   4  jsr (ffff838c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004de4u);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x00004de8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000218eau);
    return;

L_4DE8:
    /* 00004de8   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004de8u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_4DEA:
    /* 00004dea   4  move.w (e,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004deau);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4DEE:
    /* 00004dee   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004deeu);
    rc_ext_l(c, 0);

L_4DF0:
    /* 00004df0   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004df0u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4DF2:
    /* 00004df2   4  move.w (c,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004df2u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4DF6:
    /* 00004df6   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004df6u);
    rc_ext_l(c, 0);

L_4DF8:
    /* 00004df8   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004df8u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4DFA:
    /* 00004dfa   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004dfau);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4DFE:
    /* 00004dfe   4  jsr (ffff837a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004dfeu);
    /* vector 148 */
    rc_push32(c, m, RC_ADDR(0x00004e02u));
    rc_depth++;
    c->pc = RC_ADDR(0x000218b2u);
    return;

L_4E02:
    /* 00004e02   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004e02u);
    c->a[7] = (c->a[7] + 0xcu);

L_4E06:
    /* 00004e06   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004e06u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4E0A:
    /* 00004e0a   4  jsr (ffff82ae,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004e0au);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x00004e0eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020820u);
    return;

L_4E0E:
    /* 00004e0e   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004e0eu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4E10:
    /* 00004e10   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004e10u);
    rc_ext_l(c, 0);

L_4E12:
    /* 00004e12   4  move.l D0,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004e12u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4E16:
    /* 00004e16   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004e16u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4E1A:
    /* 00004e1a   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004e1au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4E1E:
    /* 00004e1e   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004e1eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4E22:
    /* 00004e22   4  jsr (ffff839e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004e22u);
    /* vector 154 */
    rc_push32(c, m, RC_ADDR(0x00004e26u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002191au);
    return;

L_4E26:
    /* 00004e26   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004e26u);
    c->a[7] = (c->a[7] + 0xcu);

L_4E2A:
    /* 00004e2a   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004e2au);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4E2C:
    /* 00004e2c   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004e2cu);
    rc_ret(c, m);
    return;

}
