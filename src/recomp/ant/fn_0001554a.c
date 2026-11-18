/* fn_0001554a - 148 byte(s), 43 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001554a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001554au): goto L_1554A;
    case RC_ADDR(0x0001554eu): goto L_1554E;
    case RC_ADDR(0x00015552u): goto L_15552;
    case RC_ADDR(0x00015556u): goto L_15556;
    case RC_ADDR(0x0001555au): goto L_1555A;
    case RC_ADDR(0x0001555eu): goto L_1555E;
    case RC_ADDR(0x00015560u): goto L_15560;
    case RC_ADDR(0x00015564u): goto L_15564;
    case RC_ADDR(0x00015568u): goto L_15568;
    case RC_ADDR(0x0001556cu): goto L_1556C;
    case RC_ADDR(0x0001556eu): goto L_1556E;
    case RC_ADDR(0x00015570u): goto L_15570;
    case RC_ADDR(0x00015574u): goto L_15574;
    case RC_ADDR(0x00015578u): goto L_15578;
    case RC_ADDR(0x0001557cu): goto L_1557C;
    case RC_ADDR(0x0001557eu): goto L_1557E;
    case RC_ADDR(0x00015582u): goto L_15582;
    case RC_ADDR(0x00015586u): goto L_15586;
    case RC_ADDR(0x0001558au): goto L_1558A;
    case RC_ADDR(0x0001558cu): goto L_1558C;
    case RC_ADDR(0x0001558eu): goto L_1558E;
    case RC_ADDR(0x00015592u): goto L_15592;
    case RC_ADDR(0x00015596u): goto L_15596;
    case RC_ADDR(0x0001559au): goto L_1559A;
    case RC_ADDR(0x0001559cu): goto L_1559C;
    case RC_ADDR(0x000155a0u): goto L_155A0;
    case RC_ADDR(0x000155a4u): goto L_155A4;
    case RC_ADDR(0x000155a8u): goto L_155A8;
    case RC_ADDR(0x000155aau): goto L_155AA;
    case RC_ADDR(0x000155acu): goto L_155AC;
    case RC_ADDR(0x000155b2u): goto L_155B2;
    case RC_ADDR(0x000155b6u): goto L_155B6;
    case RC_ADDR(0x000155bau): goto L_155BA;
    case RC_ADDR(0x000155beu): goto L_155BE;
    case RC_ADDR(0x000155c0u): goto L_155C0;
    case RC_ADDR(0x000155c4u): goto L_155C4;
    case RC_ADDR(0x000155c8u): goto L_155C8;
    case RC_ADDR(0x000155ccu): goto L_155CC;
    case RC_ADDR(0x000155ceu): goto L_155CE;
    case RC_ADDR(0x000155d0u): goto L_155D0;
    case RC_ADDR(0x000155d6u): goto L_155D6;
    case RC_ADDR(0x000155dau): goto L_155DA;
    case RC_ADDR(0x000155dcu): goto L_155DC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1554A:
    /* 0001554a   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001554au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1554E:
    /* 0001554e   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001554eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15552:
    /* 00015552   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015552u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15556:
    /* 00015556   4  add.w (c,A5),D0 */
    c->pc = RC_ADDR(0x00015556u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1555A:
    /* 0001555a   4  cmp.w (10,A5),D0 */
    c->pc = RC_ADDR(0x0001555au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1555E:
    /* 0001555e   2  ble 000155d6 */
    c->pc = RC_ADDR(0x0001555eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_155D6;

L_15560:
    /* 00015560   4  move.w (10,A5),D0 */
    c->pc = RC_ADDR(0x00015560u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15564:
    /* 00015564   4  add.w (c,A5),D0 */
    c->pc = RC_ADDR(0x00015564u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15568:
    /* 00015568   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x00015568u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1556C:
    /* 0001556c   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001556cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1556E:
    /* 0001556e   2  bge 000155d6 */
    c->pc = RC_ADDR(0x0001556eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_155D6;

L_15570:
    /* 00015570   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x00015570u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15574:
    /* 00015574   4  add.w (e,A5),D0 */
    c->pc = RC_ADDR(0x00015574u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15578:
    /* 00015578   4  cmp.w (12,A5),D0 */
    c->pc = RC_ADDR(0x00015578u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1557C:
    /* 0001557c   2  ble 000155d6 */
    c->pc = RC_ADDR(0x0001557cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_155D6;

L_1557E:
    /* 0001557e   4  move.w (12,A5),D0 */
    c->pc = RC_ADDR(0x0001557eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15582:
    /* 00015582   4  add.w (e,A5),D0 */
    c->pc = RC_ADDR(0x00015582u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15586:
    /* 00015586   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00015586u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1558A:
    /* 0001558a   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001558au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1558C:
    /* 0001558c   2  bge 000155d6 */
    c->pc = RC_ADDR(0x0001558cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_155D6;

L_1558E:
    /* 0001558e   4  move.w (14,A5),D0 */
    c->pc = RC_ADDR(0x0001558eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15592:
    /* 00015592   4  add.w (c,A5),D0 */
    c->pc = RC_ADDR(0x00015592u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15596:
    /* 00015596   4  cmp.w (10,A5),D0 */
    c->pc = RC_ADDR(0x00015596u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1559A:
    /* 0001559a   2  ble 000155b2 */
    c->pc = RC_ADDR(0x0001559au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_155B2;

L_1559C:
    /* 0001559c   4  move.w (10,A5),D0 */
    c->pc = RC_ADDR(0x0001559cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_155A0:
    /* 000155a0   4  add.w (c,A5),D0 */
    c->pc = RC_ADDR(0x000155a0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_155A4:
    /* 000155a4   4  move.w (14,A5),D1 */
    c->pc = RC_ADDR(0x000155a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_155A8:
    /* 000155a8   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000155a8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_155AA:
    /* 000155aa   2  bge 000155b2 */
    c->pc = RC_ADDR(0x000155aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_155B2;

L_155AC:
    /* 000155ac   6  bset #1,(ffffffff,A5) */
    c->pc = RC_ADDR(0x000155acu);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x1u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_155B2:
    /* 000155b2   4  move.w (16,A5),D0 */
    c->pc = RC_ADDR(0x000155b2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_155B6:
    /* 000155b6   4  add.w (e,A5),D0 */
    c->pc = RC_ADDR(0x000155b6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_155BA:
    /* 000155ba   4  cmp.w (12,A5),D0 */
    c->pc = RC_ADDR(0x000155bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_155BE:
    /* 000155be   2  ble 000155d6 */
    c->pc = RC_ADDR(0x000155beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_155D6;

L_155C0:
    /* 000155c0   4  move.w (12,A5),D0 */
    c->pc = RC_ADDR(0x000155c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_155C4:
    /* 000155c4   4  add.w (e,A5),D0 */
    c->pc = RC_ADDR(0x000155c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_155C8:
    /* 000155c8   4  move.w (16,A5),D1 */
    c->pc = RC_ADDR(0x000155c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x16u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_155CC:
    /* 000155cc   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000155ccu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_155CE:
    /* 000155ce   2  bge 000155d6 */
    c->pc = RC_ADDR(0x000155ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_155D6;

L_155D0:
    /* 000155d0   6  bset #0,(ffffffff,A5) */
    c->pc = RC_ADDR(0x000155d0u);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x1u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_155D6:
    /* 000155d6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000155d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_155DA:
    /* 000155da   2  unlk A5 */
    c->pc = RC_ADDR(0x000155dau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_155DC:
    /* 000155dc   2  rts */
    c->pc = RC_ADDR(0x000155dcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
