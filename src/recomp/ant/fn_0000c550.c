/* fn_0000c550 - 222 byte(s), 68 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000c550(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c550u): goto L_C550;
    case RC_ADDR(0x0000c554u): goto L_C554;
    case RC_ADDR(0x0000c556u): goto L_C556;
    case RC_ADDR(0x0000c55au): goto L_C55A;
    case RC_ADDR(0x0000c55cu): goto L_C55C;
    case RC_ADDR(0x0000c55eu): goto L_C55E;
    case RC_ADDR(0x0000c562u): goto L_C562;
    case RC_ADDR(0x0000c566u): goto L_C566;
    case RC_ADDR(0x0000c56au): goto L_C56A;
    case RC_ADDR(0x0000c56eu): goto L_C56E;
    case RC_ADDR(0x0000c570u): goto L_C570;
    case RC_ADDR(0x0000c574u): goto L_C574;
    case RC_ADDR(0x0000c576u): goto L_C576;
    case RC_ADDR(0x0000c578u): goto L_C578;
    case RC_ADDR(0x0000c57cu): goto L_C57C;
    case RC_ADDR(0x0000c580u): goto L_C580;
    case RC_ADDR(0x0000c582u): goto L_C582;
    case RC_ADDR(0x0000c584u): goto L_C584;
    case RC_ADDR(0x0000c588u): goto L_C588;
    case RC_ADDR(0x0000c58au): goto L_C58A;
    case RC_ADDR(0x0000c58cu): goto L_C58C;
    case RC_ADDR(0x0000c590u): goto L_C590;
    case RC_ADDR(0x0000c594u): goto L_C594;
    case RC_ADDR(0x0000c598u): goto L_C598;
    case RC_ADDR(0x0000c59cu): goto L_C59C;
    case RC_ADDR(0x0000c59eu): goto L_C59E;
    case RC_ADDR(0x0000c5a2u): goto L_C5A2;
    case RC_ADDR(0x0000c5a4u): goto L_C5A4;
    case RC_ADDR(0x0000c5a8u): goto L_C5A8;
    case RC_ADDR(0x0000c5aau): goto L_C5AA;
    case RC_ADDR(0x0000c5acu): goto L_C5AC;
    case RC_ADDR(0x0000c5b0u): goto L_C5B0;
    case RC_ADDR(0x0000c5b6u): goto L_C5B6;
    case RC_ADDR(0x0000c5b8u): goto L_C5B8;
    case RC_ADDR(0x0000c5bau): goto L_C5BA;
    case RC_ADDR(0x0000c5c0u): goto L_C5C0;
    case RC_ADDR(0x0000c5c4u): goto L_C5C4;
    case RC_ADDR(0x0000c5c8u): goto L_C5C8;
    case RC_ADDR(0x0000c5ccu): goto L_C5CC;
    case RC_ADDR(0x0000c5d0u): goto L_C5D0;
    case RC_ADDR(0x0000c5d2u): goto L_C5D2;
    case RC_ADDR(0x0000c5d6u): goto L_C5D6;
    case RC_ADDR(0x0000c5d8u): goto L_C5D8;
    case RC_ADDR(0x0000c5dau): goto L_C5DA;
    case RC_ADDR(0x0000c5deu): goto L_C5DE;
    case RC_ADDR(0x0000c5e2u): goto L_C5E2;
    case RC_ADDR(0x0000c5e6u): goto L_C5E6;
    case RC_ADDR(0x0000c5eau): goto L_C5EA;
    case RC_ADDR(0x0000c5eeu): goto L_C5EE;
    case RC_ADDR(0x0000c5f2u): goto L_C5F2;
    case RC_ADDR(0x0000c5f4u): goto L_C5F4;
    case RC_ADDR(0x0000c5f6u): goto L_C5F6;
    case RC_ADDR(0x0000c5fau): goto L_C5FA;
    case RC_ADDR(0x0000c5feu): goto L_C5FE;
    case RC_ADDR(0x0000c600u): goto L_C600;
    case RC_ADDR(0x0000c604u): goto L_C604;
    case RC_ADDR(0x0000c608u): goto L_C608;
    case RC_ADDR(0x0000c60cu): goto L_C60C;
    case RC_ADDR(0x0000c60eu): goto L_C60E;
    case RC_ADDR(0x0000c612u): goto L_C612;
    case RC_ADDR(0x0000c614u): goto L_C614;
    case RC_ADDR(0x0000c616u): goto L_C616;
    case RC_ADDR(0x0000c61au): goto L_C61A;
    case RC_ADDR(0x0000c61eu): goto L_C61E;
    case RC_ADDR(0x0000c622u): goto L_C622;
    case RC_ADDR(0x0000c626u): goto L_C626;
    case RC_ADDR(0x0000c62au): goto L_C62A;
    case RC_ADDR(0x0000c62cu): goto L_C62C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C550:
    /* 0000c550   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000c550u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_C554:
    /* 0000c554   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000c554u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C556:
    /* 0000c556   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c556u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C55A:
    /* 0000c55a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c55au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C55C:
    /* 0000c55c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c55cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C55E:
    /* 0000c55e   4  lea (d48,A4),A0 */
    c->pc = RC_ADDR(0x0000c55eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd48u);

L_C562:
    /* 0000c562   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c562u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C566:
    /* 0000c566   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000c566u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C56A:
    /* 0000c56a   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000c56au);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000c56eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_C56E:
    /* 0000c56e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c56eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C570:
    /* 0000c570   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c570u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C574:
    /* 0000c574   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c574u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C576:
    /* 0000c576   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c576u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C578:
    /* 0000c578   4  lea (d88,A4),A0 */
    c->pc = RC_ADDR(0x0000c578u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd88u);

L_C57C:
    /* 0000c57c   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c57cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_C580:
    /* 0000c580   2  beq 0000c59e */
    c->pc = RC_ADDR(0x0000c580u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C59E;

L_C582:
    /* 0000c582   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000c582u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C584:
    /* 0000c584   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c584u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C588:
    /* 0000c588   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c588u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C58A:
    /* 0000c58a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c58au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C58C:
    /* 0000c58c   4  lea (d88,A4),A0 */
    c->pc = RC_ADDR(0x0000c58cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd88u);

L_C590:
    /* 0000c590   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c590u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C594:
    /* 0000c594   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000c594u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C598:
    /* 0000c598   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000c598u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000c59cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_C59C:
    /* 0000c59c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c59cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C59E:
    /* 0000c59e   4  tst.w (de0,A4) */
    c->pc = RC_ADDR(0x0000c59eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xde0u));
    rc_set_nzvc(c, t0, RC_W);

L_C5A2:
    /* 0000c5a2   2  ble 0000c5ba */
    c->pc = RC_ADDR(0x0000c5a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_C5BA;

L_C5A4:
    /* 0000c5a4   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000c5a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C5A8:
    /* 0000c5a8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c5a8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C5AA:
    /* 0000c5aa   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c5aau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C5AC:
    /* 0000c5ac   4  lea (ffff9900,A4),A0 */
    c->pc = RC_ADDR(0x0000c5acu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6700u);

L_C5B0:
    /* 0000c5b0   6  move.w (0,A0,D0.w),(dce,A4) */
    c->pc = RC_ADDR(0x0000c5b0u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0xdceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C5B6:
    /* 0000c5b6   2  bsr 0000c62e */
    c->pc = RC_ADDR(0x0000c5b6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c5b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c62eu);
    return;

L_C5B8:
    /* 0000c5b8   2  bra 0000c5c4 */
    c->pc = RC_ADDR(0x0000c5b8u);
    rc_step(c, m, 10);
    goto L_C5C4;

L_C5BA:
    /* 0000c5ba   6  move.w #8,(dce,A4) */
    c->pc = RC_ADDR(0x0000c5bau);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0xdceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C5C0:
    /* 0000c5c0   4  clr.w (de0,A4) */
    c->pc = RC_ADDR(0x0000c5c0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xde0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C5C4:
    /* 0000c5c4   4  move.w #a,-(A7) */
    c->pc = RC_ADDR(0x0000c5c4u);
    rc_step(c, m, 12);
    t0 = 0x0000000au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C5C8:
    /* 0000c5c8   4  move.w (dca,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c5c8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdcau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C5CC:
    /* 0000c5cc   4  move.w (dc8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c5ccu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdc8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C5D0:
    /* 0000c5d0   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000c5d0u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C5D2:
    /* 0000c5d2   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c5d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C5D6:
    /* 0000c5d6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c5d6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C5D8:
    /* 0000c5d8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c5d8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C5DA:
    /* 0000c5da   4  lea (d48,A4),A0 */
    c->pc = RC_ADDR(0x0000c5dau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd48u);

L_C5DE:
    /* 0000c5de   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c5deu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C5E2:
    /* 0000c5e2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000c5e2u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C5E6:
    /* 0000c5e6   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000c5e6u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000c5eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_C5EA:
    /* 0000c5ea   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000c5eau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_C5EE:
    /* 0000c5ee   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c5eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C5F2:
    /* 0000c5f2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c5f2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C5F4:
    /* 0000c5f4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c5f4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C5F6:
    /* 0000c5f6   4  lea (d88,A4),A0 */
    c->pc = RC_ADDR(0x0000c5f6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd88u);

L_C5FA:
    /* 0000c5fa   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c5fau);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_C5FE:
    /* 0000c5fe   2  beq 0000c62a */
    c->pc = RC_ADDR(0x0000c5feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C62A;

L_C600:
    /* 0000c600   4  move.w #28,-(A7) */
    c->pc = RC_ADDR(0x0000c600u);
    rc_step(c, m, 12);
    t0 = 0x00000028u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C604:
    /* 0000c604   4  move.w (dca,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c604u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdcau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C608:
    /* 0000c608   4  move.w (dc8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c608u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdc8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C60C:
    /* 0000c60c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000c60cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C60E:
    /* 0000c60e   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c60eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C612:
    /* 0000c612   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c612u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C614:
    /* 0000c614   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c614u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C616:
    /* 0000c616   4  lea (d88,A4),A0 */
    c->pc = RC_ADDR(0x0000c616u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd88u);

L_C61A:
    /* 0000c61a   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c61au);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C61E:
    /* 0000c61e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000c61eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C622:
    /* 0000c622   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000c622u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000c626u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_C626:
    /* 0000c626   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000c626u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_C62A:
    /* 0000c62a   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c62au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C62C:
    /* 0000c62c   2  rts */
    c->pc = RC_ADDR(0x0000c62cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
