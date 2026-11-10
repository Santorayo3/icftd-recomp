/* fn_00016e8e - 82 byte(s), 24 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016e8e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00016e8eu): goto L_16E8E;
    case RC_ADDR(0x00016e92u): goto L_16E92;
    case RC_ADDR(0x00016e94u): goto L_16E94;
    case RC_ADDR(0x00016e9au): goto L_16E9A;
    case RC_ADDR(0x00016e9eu): goto L_16E9E;
    case RC_ADDR(0x00016ea0u): goto L_16EA0;
    case RC_ADDR(0x00016ea2u): goto L_16EA2;
    case RC_ADDR(0x00016ea6u): goto L_16EA6;
    case RC_ADDR(0x00016eaau): goto L_16EAA;
    case RC_ADDR(0x00016eacu): goto L_16EAC;
    case RC_ADDR(0x00016eb2u): goto L_16EB2;
    case RC_ADDR(0x00016eb4u): goto L_16EB4;
    case RC_ADDR(0x00016eb6u): goto L_16EB6;
    case RC_ADDR(0x00016ebcu): goto L_16EBC;
    case RC_ADDR(0x00016ebeu): goto L_16EBE;
    case RC_ADDR(0x00016ec4u): goto L_16EC4;
    case RC_ADDR(0x00016ec6u): goto L_16EC6;
    case RC_ADDR(0x00016eccu): goto L_16ECC;
    case RC_ADDR(0x00016eceu): goto L_16ECE;
    case RC_ADDR(0x00016ed4u): goto L_16ED4;
    case RC_ADDR(0x00016ed6u): goto L_16ED6;
    case RC_ADDR(0x00016edau): goto L_16EDA;
    case RC_ADDR(0x00016edcu): goto L_16EDC;
    case RC_ADDR(0x00016edeu): goto L_16EDE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16E8E:
    /* 00016e8e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00016e8eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_16E92:
    /* 00016e92   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x00016e92u);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16E94:
    /* 00016e94   6  move.w (00dff006).l,D0 */
    c->pc = RC_ADDR(0x00016e94u);
    t0 = rc_rd16(c, m, RC_ADDR(0x00dff006u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E9A:
    /* 00016e9a   4  add.l (ffffcc06,A4),D1 */
    c->pc = RC_ADDR(0x00016e9au);
    t0 = rc_rd32(c, m, (c->a[4] - 0x33fau));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_16E9E:
    /* 00016e9e   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00016e9eu);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_16EA0:
    /* 00016ea0   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x00016ea0u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16EA2:
    /* 00016ea2   4  andi.w #3f,D1 */
    c->pc = RC_ADDR(0x00016ea2u);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 & 0x0000003fu;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_16EA6:
    /* 00016ea6   4  dbf D1,00016ea6 */
    c->pc = RC_ADDR(0x00016ea6u);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) goto L_16EA6;
    }

L_16EAA:
    /* 00016eaa   2  clr.l D1 */
    c->pc = RC_ADDR(0x00016eaau);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_16EAC:
    /* 00016eac   6  move.w (00dff006).l,D1 */
    c->pc = RC_ADDR(0x00016eacu);
    t0 = rc_rd16(c, m, RC_ADDR(0x00dff006u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16EB2:
    /* 00016eb2   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00016eb2u);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_16EB4:
    /* 00016eb4   2  clr.l D1 */
    c->pc = RC_ADDR(0x00016eb4u);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_16EB6:
    /* 00016eb6   6  move.b (00bfe801).l,D1 */
    c->pc = RC_ADDR(0x00016eb6u);
    t0 = rc_rd8(c, m, RC_ADDR(0x00bfe801u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_16EBC:
    /* 00016ebc   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00016ebcu);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_16EBE:
    /* 00016ebe   6  move.b (00bfe901).l,D1 */
    c->pc = RC_ADDR(0x00016ebeu);
    t0 = rc_rd8(c, m, RC_ADDR(0x00bfe901u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_16EC4:
    /* 00016ec4   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00016ec4u);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_16EC6:
    /* 00016ec6   6  move.b (00bfd800).l,D1 */
    c->pc = RC_ADDR(0x00016ec6u);
    t0 = rc_rd8(c, m, RC_ADDR(0x00bfd800u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_16ECC:
    /* 00016ecc   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00016eccu);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_16ECE:
    /* 00016ece   6  move.b (00bfd900).l,D1 */
    c->pc = RC_ADDR(0x00016eceu);
    t0 = rc_rd8(c, m, RC_ADDR(0x00bfd900u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_16ED4:
    /* 00016ed4   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00016ed4u);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_16ED6:
    /* 00016ed6   4  add.l D0,(ffffcc06,A4) */
    c->pc = RC_ADDR(0x00016ed6u);
    t3 = (c->a[4] - 0x33fau);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_16EDA:
    /* 00016eda   2  move.l (A7)+,D1 */
    c->pc = RC_ADDR(0x00016edau);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_16EDC:
    /* 00016edc   2  unlk A5 */
    c->pc = RC_ADDR(0x00016edcu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16EDE:
    /* 00016ede   2  rts */
    c->pc = RC_ADDR(0x00016edeu);
    rc_ret(c, m);
    return;

}
