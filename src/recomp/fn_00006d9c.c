/* fn_00006d9c - 86 byte(s), 28 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00006d9c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00006d9cu): goto L_6D9C;
    case RC_ADDR(0x00006da0u): goto L_6DA0;
    case RC_ADDR(0x00006da4u): goto L_6DA4;
    case RC_ADDR(0x00006da6u): goto L_6DA6;
    case RC_ADDR(0x00006daau): goto L_6DAA;
    case RC_ADDR(0x00006daeu): goto L_6DAE;
    case RC_ADDR(0x00006db0u): goto L_6DB0;
    case RC_ADDR(0x00006db4u): goto L_6DB4;
    case RC_ADDR(0x00006db8u): goto L_6DB8;
    case RC_ADDR(0x00006dbau): goto L_6DBA;
    case RC_ADDR(0x00006dbcu): goto L_6DBC;
    case RC_ADDR(0x00006dbeu): goto L_6DBE;
    case RC_ADDR(0x00006dc2u): goto L_6DC2;
    case RC_ADDR(0x00006dc6u): goto L_6DC6;
    case RC_ADDR(0x00006dc8u): goto L_6DC8;
    case RC_ADDR(0x00006dceu): goto L_6DCE;
    case RC_ADDR(0x00006dd0u): goto L_6DD0;
    case RC_ADDR(0x00006dd4u): goto L_6DD4;
    case RC_ADDR(0x00006dd6u): goto L_6DD6;
    case RC_ADDR(0x00006dd8u): goto L_6DD8;
    case RC_ADDR(0x00006ddau): goto L_6DDA;
    case RC_ADDR(0x00006ddeu): goto L_6DDE;
    case RC_ADDR(0x00006de2u): goto L_6DE2;
    case RC_ADDR(0x00006de6u): goto L_6DE6;
    case RC_ADDR(0x00006de8u): goto L_6DE8;
    case RC_ADDR(0x00006decu): goto L_6DEC;
    case RC_ADDR(0x00006deeu): goto L_6DEE;
    case RC_ADDR(0x00006df0u): goto L_6DF0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6D9C:
    /* 00006d9c   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00006d9cu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_6DA0:
    /* 00006da0   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00006da0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_6DA4:
    /* 00006da4   2  beq 00006dee */
    c->pc = RC_ADDR(0x00006da4u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_6DEE;

L_6DA6:
    /* 00006da6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006da6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6DAA:
    /* 00006daa   4  tst.b (12,A0) */
    c->pc = RC_ADDR(0x00006daau);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[0] + 0x12u));
    rc_set_nzvc(c, t0, RC_B);

L_6DAE:
    /* 00006dae   2  beq 00006dee */
    c->pc = RC_ADDR(0x00006daeu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_6DEE;

L_6DB0:
    /* 00006db0   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00006db0u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6DB4:
    /* 00006db4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00006db4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6DB8:
    /* 00006db8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006db8u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_6DBA:
    /* 00006dba   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00006dbau);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_6DBC:
    /* 00006dbc   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00006dbcu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_6DBE:
    /* 00006dbe   4  adda.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006dbeu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_6DC2:
    /* 00006dc2   4  tst.b (12,A0) */
    c->pc = RC_ADDR(0x00006dc2u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[0] + 0x12u));
    rc_set_nzvc(c, t0, RC_B);

L_6DC6:
    /* 00006dc6   2  beq 00006dee */
    c->pc = RC_ADDR(0x00006dc6u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_6DEE;

L_6DC8:
    /* 00006dc8   6  cmpi.w #a,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00006dc8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_6DCE:
    /* 00006dce   2  bge 00006dee */
    c->pc = RC_ADDR(0x00006dceu);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_6DEE;

L_6DD0:
    /* 00006dd0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00006dd0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6DD4:
    /* 00006dd4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006dd4u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_6DD6:
    /* 00006dd6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00006dd6u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_6DD8:
    /* 00006dd8   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00006dd8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_6DDA:
    /* 00006dda   4  adda.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006ddau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_6DDE:
    /* 00006dde   4  pea (12,A0) */
    c->pc = RC_ADDR(0x00006ddeu);
    rc_step(c, m);
    rc_push32(c, m, (c->a[0] + 0x12u));

L_6DE2:
    /* 00006de2   4  jsr (00006a60) */
    c->pc = RC_ADDR(0x00006de2u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00006de6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006a60u);
    return;

L_6DE6:
    /* 00006de6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006de6u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6DE8:
    /* 00006de8   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00006de8u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6DEC:
    /* 00006dec   2  bra 00006db4 */
    c->pc = RC_ADDR(0x00006decu);
    rc_step(c, m);
    rc_tick();
    goto L_6DB4;

L_6DEE:
    /* 00006dee   2  unlk A5 */
    c->pc = RC_ADDR(0x00006deeu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6DF0:
    /* 00006df0   2  rts */
    c->pc = RC_ADDR(0x00006df0u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
