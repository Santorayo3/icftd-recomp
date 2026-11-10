/* fn_00009c72 - 60 byte(s), 23 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009c72(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00009c72u): goto L_9C72;
    case RC_ADDR(0x00009c76u): goto L_9C76;
    case RC_ADDR(0x00009c78u): goto L_9C78;
    case RC_ADDR(0x00009c7au): goto L_9C7A;
    case RC_ADDR(0x00009c7cu): goto L_9C7C;
    case RC_ADDR(0x00009c7eu): goto L_9C7E;
    case RC_ADDR(0x00009c80u): goto L_9C80;
    case RC_ADDR(0x00009c84u): goto L_9C84;
    case RC_ADDR(0x00009c88u): goto L_9C88;
    case RC_ADDR(0x00009c8au): goto L_9C8A;
    case RC_ADDR(0x00009c8cu): goto L_9C8C;
    case RC_ADDR(0x00009c8eu): goto L_9C8E;
    case RC_ADDR(0x00009c90u): goto L_9C90;
    case RC_ADDR(0x00009c94u): goto L_9C94;
    case RC_ADDR(0x00009c98u): goto L_9C98;
    case RC_ADDR(0x00009c9au): goto L_9C9A;
    case RC_ADDR(0x00009c9eu): goto L_9C9E;
    case RC_ADDR(0x00009ca0u): goto L_9CA0;
    case RC_ADDR(0x00009ca2u): goto L_9CA2;
    case RC_ADDR(0x00009ca6u): goto L_9CA6;
    case RC_ADDR(0x00009ca8u): goto L_9CA8;
    case RC_ADDR(0x00009caau): goto L_9CAA;
    case RC_ADDR(0x00009cacu): goto L_9CAC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9C72:
    /* 00009c72   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00009c72u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9C76:
    /* 00009c76   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00009c76u);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9C78:
    /* 00009c78   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00009c78u);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_9C7A:
    /* 00009c7a   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00009c7au);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9C7C:
    /* 00009c7c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009c7cu);
    rc_ext_l(c, 0);

L_9C7E:
    /* 00009c7e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009c7eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_9C80:
    /* 00009c80   4  lea (2e4,A4),A0 */
    c->pc = RC_ADDR(0x00009c80u);
    c->a[0] = (c->a[4] + 0x2e4u);

L_9C84:
    /* 00009c84   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00009c84u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_9C88:
    /* 00009c88   2  beq 00009ca0 */
    c->pc = RC_ADDR(0x00009c88u);
    if (rc_cond(c, 7)) goto L_9CA0;

L_9C8A:
    /* 00009c8a   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00009c8au);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9C8C:
    /* 00009c8c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009c8cu);
    rc_ext_l(c, 0);

L_9C8E:
    /* 00009c8e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00009c8eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_9C90:
    /* 00009c90   4  lea (2e4,A4),A0 */
    c->pc = RC_ADDR(0x00009c90u);
    c->a[0] = (c->a[4] + 0x2e4u);

L_9C94:
    /* 00009c94   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00009c94u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9C98:
    /* 00009c98   2  move.w D4,-(A7) */
    c->pc = RC_ADDR(0x00009c98u);
    t0 = rc_d_get(c, 4, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9C9A:
    /* 00009c9a   4  jsr (00009bca) */
    c->pc = RC_ADDR(0x00009c9au);
    rc_push32(c, m, RC_ADDR(0x00009c9eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_9C9E:
    /* 00009c9e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00009c9eu);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_9CA0:
    /* 00009ca0   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x00009ca0u);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_9CA2:
    /* 00009ca2   4  cmp.w #4,D4 */
    c->pc = RC_ADDR(0x00009ca2u);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_9CA6:
    /* 00009ca6   2  blt 00009c7a */
    c->pc = RC_ADDR(0x00009ca6u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_9C7A; }

L_9CA8:
    /* 00009ca8   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x00009ca8u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9CAA:
    /* 00009caa   2  unlk A5 */
    c->pc = RC_ADDR(0x00009caau);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9CAC:
    /* 00009cac   2  rts */
    c->pc = RC_ADDR(0x00009cacu);
    rc_ret(c, m);
    return;

}
