/* fn_00011b90 - 80 byte(s), 21 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011b90(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00011b90u): goto L_11B90;
    case RC_ADDR(0x00011b94u): goto L_11B94;
    case RC_ADDR(0x00011b9au): goto L_11B9A;
    case RC_ADDR(0x00011ba2u): goto L_11BA2;
    case RC_ADDR(0x00011ba8u): goto L_11BA8;
    case RC_ADDR(0x00011bacu): goto L_11BAC;
    case RC_ADDR(0x00011baeu): goto L_11BAE;
    case RC_ADDR(0x00011bb2u): goto L_11BB2;
    case RC_ADDR(0x00011bb4u): goto L_11BB4;
    case RC_ADDR(0x00011bb6u): goto L_11BB6;
    case RC_ADDR(0x00011bb8u): goto L_11BB8;
    case RC_ADDR(0x00011bbau): goto L_11BBA;
    case RC_ADDR(0x00011bbeu): goto L_11BBE;
    case RC_ADDR(0x00011bc0u): goto L_11BC0;
    case RC_ADDR(0x00011bc2u): goto L_11BC2;
    case RC_ADDR(0x00011bc8u): goto L_11BC8;
    case RC_ADDR(0x00011bceu): goto L_11BCE;
    case RC_ADDR(0x00011bd6u): goto L_11BD6;
    case RC_ADDR(0x00011bd8u): goto L_11BD8;
    case RC_ADDR(0x00011bdcu): goto L_11BDC;
    case RC_ADDR(0x00011bdeu): goto L_11BDE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11B90:
    /* 00011b90   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00011b90u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_11B94:
    /* 00011b94   6  clr.w (00dff066).l */
    c->pc = RC_ADDR(0x00011b94u);
    rc_wr16(c, m, RC_ADDR(0x00dff066u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11B9A:
    /* 00011b9a   8  move.w #100,(00dff040).l */
    c->pc = RC_ADDR(0x00011b9au);
    t0 = 0x00000100u;
    rc_wr16(c, m, RC_ADDR(0x00dff040u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11BA2:
    /* 00011ba2   6  clr.w (00dff042).l */
    c->pc = RC_ADDR(0x00011ba2u);
    rc_wr16(c, m, RC_ADDR(0x00dff042u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11BA8:
    /* 00011ba8   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00011ba8u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_11BAC:
    /* 00011bac   2  move.w (A0),D1 */
    c->pc = RC_ADDR(0x00011bacu);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11BAE:
    /* 00011bae   4  move.w (2,A0),D2 */
    c->pc = RC_ADDR(0x00011baeu);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11BB2:
    /* 00011bb2   2  lsl.w #6,D2 */
    c->pc = RC_ADDR(0x00011bb2u);
    c->d[2] = rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 2, RC_W), RC_W);

L_11BB4:
    /* 00011bb4   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x00011bb4u);
    c->d[1] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_11BB6:
    /* 00011bb6   2  or.w D1,D2 */
    c->pc = RC_ADDR(0x00011bb6u);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 2, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 2, RC_W, t2);

L_11BB8:
    /* 00011bb8   2  clr.w D0 */
    c->pc = RC_ADDR(0x00011bb8u);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11BBA:
    /* 00011bba   4  move.b (5,A0),D0 */
    c->pc = RC_ADDR(0x00011bbau);
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11BBE:
    /* 00011bbe   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00011bbeu);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11BC0:
    /* 00011bc0   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x00011bc0u);
    c->a[0] += 0x00000008u;

L_11BC2:
    /* 00011bc2   6  move.l (A0)+,(00dff054).l */
    c->pc = RC_ADDR(0x00011bc2u);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_wr32(c, m, RC_ADDR(0x00dff054u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11BC8:
    /* 00011bc8   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x00011bc8u);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, RC_ADDR(0x00dff058u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11BCE:
    /* 00011bce   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x00011bceu);
    t4 = 0x00000006u;
    t3 = RC_ADDR(0x00dff002u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11BD6:
    /* 00011bd6   2  bne 00011bce */
    c->pc = RC_ADDR(0x00011bd6u);
    if (rc_cond(c, 6)) { rc_tick(); goto L_11BCE; }

L_11BD8:
    /* 00011bd8   4  dbf D0,00011bc2 */
    c->pc = RC_ADDR(0x00011bd8u);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_11BC2; }
    }

L_11BDC:
    /* 00011bdc   2  unlk A5 */
    c->pc = RC_ADDR(0x00011bdcu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11BDE:
    /* 00011bde   2  rts */
    c->pc = RC_ADDR(0x00011bdeu);
    rc_ret(c, m);
    return;

}
