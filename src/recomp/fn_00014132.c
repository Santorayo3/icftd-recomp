/* fn_00014132 - 132 byte(s), 35 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00014132(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00014132u): goto L_14132;
    case RC_ADDR(0x00014136u): goto L_14136;
    case RC_ADDR(0x0001413au): goto L_1413A;
    case RC_ADDR(0x0001413eu): goto L_1413E;
    case RC_ADDR(0x00014142u): goto L_14142;
    case RC_ADDR(0x00014144u): goto L_14144;
    case RC_ADDR(0x0001414au): goto L_1414A;
    case RC_ADDR(0x0001414cu): goto L_1414C;
    case RC_ADDR(0x00014150u): goto L_14150;
    case RC_ADDR(0x00014154u): goto L_14154;
    case RC_ADDR(0x00014158u): goto L_14158;
    case RC_ADDR(0x0001415au): goto L_1415A;
    case RC_ADDR(0x0001415eu): goto L_1415E;
    case RC_ADDR(0x00014162u): goto L_14162;
    case RC_ADDR(0x00014166u): goto L_14166;
    case RC_ADDR(0x00014168u): goto L_14168;
    case RC_ADDR(0x0001416cu): goto L_1416C;
    case RC_ADDR(0x00014172u): goto L_14172;
    case RC_ADDR(0x00014176u): goto L_14176;
    case RC_ADDR(0x0001417cu): goto L_1417C;
    case RC_ADDR(0x0001417eu): goto L_1417E;
    case RC_ADDR(0x00014184u): goto L_14184;
    case RC_ADDR(0x00014186u): goto L_14186;
    case RC_ADDR(0x0001418cu): goto L_1418C;
    case RC_ADDR(0x0001418eu): goto L_1418E;
    case RC_ADDR(0x00014192u): goto L_14192;
    case RC_ADDR(0x00014196u): goto L_14196;
    case RC_ADDR(0x0001419au): goto L_1419A;
    case RC_ADDR(0x0001419cu): goto L_1419C;
    case RC_ADDR(0x000141a0u): goto L_141A0;
    case RC_ADDR(0x000141a4u): goto L_141A4;
    case RC_ADDR(0x000141aau): goto L_141AA;
    case RC_ADDR(0x000141acu): goto L_141AC;
    case RC_ADDR(0x000141b2u): goto L_141B2;
    case RC_ADDR(0x000141b4u): goto L_141B4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14132:
    /* 00014132   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00014132u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_14136:
    /* 00014136   4  move.w (10d0,A4),D0 */
    c->pc = RC_ADDR(0x00014136u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1413A:
    /* 0001413a   4  addq.w #1,(10d0,A4) */
    c->pc = RC_ADDR(0x0001413au);
    t3 = (c->a[4] + 0x10d0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1413E:
    /* 0001413e   4  cmp.w (112c,A4),D0 */
    c->pc = RC_ADDR(0x0001413eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x112cu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14142:
    /* 00014142   2  ble 00014176 */
    c->pc = RC_ADDR(0x00014142u);
    if (rc_cond(c, 15)) goto L_14176;

L_14144:
    /* 00014144   6  cmpi.w #f,(112c,A4) */
    c->pc = RC_ADDR(0x00014144u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x112cu));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_1414A:
    /* 0001414a   2  ble 00014150 */
    c->pc = RC_ADDR(0x0001414au);
    if (rc_cond(c, 15)) goto L_14150;

L_1414C:
    /* 0001414c   4  subq.w #1,(112c,A4) */
    c->pc = RC_ADDR(0x0001414cu);
    t3 = (c->a[4] + 0x112cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14150:
    /* 00014150   4  move.w (fffff286,A4),D0 */
    c->pc = RC_ADDR(0x00014150u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd7au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14154:
    /* 00014154   4  cmp.w (1118,A4),D0 */
    c->pc = RC_ADDR(0x00014154u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1118u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14158:
    /* 00014158   2  bcc 0001415e */
    c->pc = RC_ADDR(0x00014158u);
    if (rc_cond(c, 4)) goto L_1415E;

L_1415A:
    /* 0001415a   4  addq.w #1,(fffff286,A4) */
    c->pc = RC_ADDR(0x0001415au);
    t3 = (c->a[4] - 0xd7au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1415E:
    /* 0001415e   4  move.w (fffff288,A4),D0 */
    c->pc = RC_ADDR(0x0001415eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd78u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14162:
    /* 00014162   4  cmp.w (111a,A4),D0 */
    c->pc = RC_ADDR(0x00014162u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x111au));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14166:
    /* 00014166   2  bcc 0001416c */
    c->pc = RC_ADDR(0x00014166u);
    if (rc_cond(c, 4)) goto L_1416C;

L_14168:
    /* 00014168   4  addq.w #1,(fffff288,A4) */
    c->pc = RC_ADDR(0x00014168u);
    t3 = (c->a[4] - 0xd78u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1416C:
    /* 0001416c   6  move.w #1,(114c,A4) */
    c->pc = RC_ADDR(0x0001416cu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x114cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14172:
    /* 00014172   4  clr.w (10d0,A4) */
    c->pc = RC_ADDR(0x00014172u);
    rc_wr16(c, m, (c->a[4] + 0x10d0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14176:
    /* 00014176   6  cmpi.w #4,(fffff286,A4) */
    c->pc = RC_ADDR(0x00014176u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd7au));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_1417C:
    /* 0001417c   2  bhi 00014186 */
    c->pc = RC_ADDR(0x0001417cu);
    if (rc_cond(c, 2)) goto L_14186;

L_1417E:
    /* 0001417e   6  cmpi.w #4,(fffff288,A4) */
    c->pc = RC_ADDR(0x0001417eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd78u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_14184:
    /* 00014184   2  bls 000141b2 */
    c->pc = RC_ADDR(0x00014184u);
    if (rc_cond(c, 3)) goto L_141B2;

L_14186:
    /* 00014186   6  cmpi.w #20,(af8,A4) */
    c->pc = RC_ADDR(0x00014186u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf8u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_1418C:
    /* 0001418c   2  bge 000141b2 */
    c->pc = RC_ADDR(0x0001418cu);
    if (rc_cond(c, 12)) goto L_141B2;

L_1418E:
    /* 0001418e   4  move.w (10d2,A4),D0 */
    c->pc = RC_ADDR(0x0001418eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10d2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14192:
    /* 00014192   4  addq.w #1,(10d2,A4) */
    c->pc = RC_ADDR(0x00014192u);
    t3 = (c->a[4] + 0x10d2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_14196:
    /* 00014196   4  cmp.w #1,D0 */
    c->pc = RC_ADDR(0x00014196u);
    t0 = 0x00000001u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1419A:
    /* 0001419a   2  ble 000141b2 */
    c->pc = RC_ADDR(0x0001419au);
    if (rc_cond(c, 15)) goto L_141B2;

L_1419C:
    /* 0001419c   4  clr.w (10d2,A4) */
    c->pc = RC_ADDR(0x0001419cu);
    rc_wr16(c, m, (c->a[4] + 0x10d2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_141A0:
    /* 000141a0   4  addq.w #1,(af8,A4) */
    c->pc = RC_ADDR(0x000141a0u);
    t3 = (c->a[4] + 0xaf8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_141A4:
    /* 000141a4   6  cmpi.w #2,(af8,A4) */
    c->pc = RC_ADDR(0x000141a4u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf8u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_141AA:
    /* 000141aa   2  ble 000141b2 */
    c->pc = RC_ADDR(0x000141aau);
    if (rc_cond(c, 15)) goto L_141B2;

L_141AC:
    /* 000141ac   6  move.w #1,(10c8,A4) */
    c->pc = RC_ADDR(0x000141acu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x10c8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_141B2:
    /* 000141b2   2  unlk A5 */
    c->pc = RC_ADDR(0x000141b2u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_141B4:
    /* 000141b4   2  rts */
    c->pc = RC_ADDR(0x000141b4u);
    rc_ret(c, m);
    return;

}
