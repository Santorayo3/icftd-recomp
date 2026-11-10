/* fn_0001c838 - 400 byte(s), 121 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001c838(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001c838u): goto L_1C838;
    case RC_ADDR(0x0001c83cu): goto L_1C83C;
    case RC_ADDR(0x0001c842u): goto L_1C842;
    case RC_ADDR(0x0001c846u): goto L_1C846;
    case RC_ADDR(0x0001c84au): goto L_1C84A;
    case RC_ADDR(0x0001c84eu): goto L_1C84E;
    case RC_ADDR(0x0001c852u): goto L_1C852;
    case RC_ADDR(0x0001c854u): goto L_1C854;
    case RC_ADDR(0x0001c858u): goto L_1C858;
    case RC_ADDR(0x0001c85cu): goto L_1C85C;
    case RC_ADDR(0x0001c860u): goto L_1C860;
    case RC_ADDR(0x0001c862u): goto L_1C862;
    case RC_ADDR(0x0001c864u): goto L_1C864;
    case RC_ADDR(0x0001c868u): goto L_1C868;
    case RC_ADDR(0x0001c86eu): goto L_1C86E;
    case RC_ADDR(0x0001c874u): goto L_1C874;
    case RC_ADDR(0x0001c878u): goto L_1C878;
    case RC_ADDR(0x0001c87eu): goto L_1C87E;
    case RC_ADDR(0x0001c880u): goto L_1C880;
    case RC_ADDR(0x0001c884u): goto L_1C884;
    case RC_ADDR(0x0001c888u): goto L_1C888;
    case RC_ADDR(0x0001c88cu): goto L_1C88C;
    case RC_ADDR(0x0001c890u): goto L_1C890;
    case RC_ADDR(0x0001c892u): goto L_1C892;
    case RC_ADDR(0x0001c894u): goto L_1C894;
    case RC_ADDR(0x0001c896u): goto L_1C896;
    case RC_ADDR(0x0001c89au): goto L_1C89A;
    case RC_ADDR(0x0001c89eu): goto L_1C89E;
    case RC_ADDR(0x0001c8a0u): goto L_1C8A0;
    case RC_ADDR(0x0001c8a4u): goto L_1C8A4;
    case RC_ADDR(0x0001c8a6u): goto L_1C8A6;
    case RC_ADDR(0x0001c8aau): goto L_1C8AA;
    case RC_ADDR(0x0001c8aeu): goto L_1C8AE;
    case RC_ADDR(0x0001c8b2u): goto L_1C8B2;
    case RC_ADDR(0x0001c8b4u): goto L_1C8B4;
    case RC_ADDR(0x0001c8b6u): goto L_1C8B6;
    case RC_ADDR(0x0001c8bau): goto L_1C8BA;
    case RC_ADDR(0x0001c8beu): goto L_1C8BE;
    case RC_ADDR(0x0001c8c0u): goto L_1C8C0;
    case RC_ADDR(0x0001c8c4u): goto L_1C8C4;
    case RC_ADDR(0x0001c8c6u): goto L_1C8C6;
    case RC_ADDR(0x0001c8cau): goto L_1C8CA;
    case RC_ADDR(0x0001c8ccu): goto L_1C8CC;
    case RC_ADDR(0x0001c8d0u): goto L_1C8D0;
    case RC_ADDR(0x0001c8d2u): goto L_1C8D2;
    case RC_ADDR(0x0001c8d4u): goto L_1C8D4;
    case RC_ADDR(0x0001c8d8u): goto L_1C8D8;
    case RC_ADDR(0x0001c8dcu): goto L_1C8DC;
    case RC_ADDR(0x0001c8deu): goto L_1C8DE;
    case RC_ADDR(0x0001c8e2u): goto L_1C8E2;
    case RC_ADDR(0x0001c8e4u): goto L_1C8E4;
    case RC_ADDR(0x0001c8e8u): goto L_1C8E8;
    case RC_ADDR(0x0001c8ecu): goto L_1C8EC;
    case RC_ADDR(0x0001c8eeu): goto L_1C8EE;
    case RC_ADDR(0x0001c8f0u): goto L_1C8F0;
    case RC_ADDR(0x0001c8f2u): goto L_1C8F2;
    case RC_ADDR(0x0001c8f4u): goto L_1C8F4;
    case RC_ADDR(0x0001c8f8u): goto L_1C8F8;
    case RC_ADDR(0x0001c8fcu): goto L_1C8FC;
    case RC_ADDR(0x0001c8feu): goto L_1C8FE;
    case RC_ADDR(0x0001c902u): goto L_1C902;
    case RC_ADDR(0x0001c906u): goto L_1C906;
    case RC_ADDR(0x0001c90au): goto L_1C90A;
    case RC_ADDR(0x0001c90eu): goto L_1C90E;
    case RC_ADDR(0x0001c910u): goto L_1C910;
    case RC_ADDR(0x0001c914u): goto L_1C914;
    case RC_ADDR(0x0001c916u): goto L_1C916;
    case RC_ADDR(0x0001c91au): goto L_1C91A;
    case RC_ADDR(0x0001c91cu): goto L_1C91C;
    case RC_ADDR(0x0001c920u): goto L_1C920;
    case RC_ADDR(0x0001c922u): goto L_1C922;
    case RC_ADDR(0x0001c926u): goto L_1C926;
    case RC_ADDR(0x0001c928u): goto L_1C928;
    case RC_ADDR(0x0001c92au): goto L_1C92A;
    case RC_ADDR(0x0001c92eu): goto L_1C92E;
    case RC_ADDR(0x0001c930u): goto L_1C930;
    case RC_ADDR(0x0001c932u): goto L_1C932;
    case RC_ADDR(0x0001c936u): goto L_1C936;
    case RC_ADDR(0x0001c938u): goto L_1C938;
    case RC_ADDR(0x0001c93au): goto L_1C93A;
    case RC_ADDR(0x0001c93eu): goto L_1C93E;
    case RC_ADDR(0x0001c942u): goto L_1C942;
    case RC_ADDR(0x0001c946u): goto L_1C946;
    case RC_ADDR(0x0001c94au): goto L_1C94A;
    case RC_ADDR(0x0001c94cu): goto L_1C94C;
    case RC_ADDR(0x0001c950u): goto L_1C950;
    case RC_ADDR(0x0001c952u): goto L_1C952;
    case RC_ADDR(0x0001c954u): goto L_1C954;
    case RC_ADDR(0x0001c958u): goto L_1C958;
    case RC_ADDR(0x0001c95cu): goto L_1C95C;
    case RC_ADDR(0x0001c960u): goto L_1C960;
    case RC_ADDR(0x0001c964u): goto L_1C964;
    case RC_ADDR(0x0001c96au): goto L_1C96A;
    case RC_ADDR(0x0001c96cu): goto L_1C96C;
    case RC_ADDR(0x0001c970u): goto L_1C970;
    case RC_ADDR(0x0001c972u): goto L_1C972;
    case RC_ADDR(0x0001c976u): goto L_1C976;
    case RC_ADDR(0x0001c978u): goto L_1C978;
    case RC_ADDR(0x0001c97au): goto L_1C97A;
    case RC_ADDR(0x0001c97eu): goto L_1C97E;
    case RC_ADDR(0x0001c980u): goto L_1C980;
    case RC_ADDR(0x0001c984u): goto L_1C984;
    case RC_ADDR(0x0001c986u): goto L_1C986;
    case RC_ADDR(0x0001c988u): goto L_1C988;
    case RC_ADDR(0x0001c98cu): goto L_1C98C;
    case RC_ADDR(0x0001c990u): goto L_1C990;
    case RC_ADDR(0x0001c994u): goto L_1C994;
    case RC_ADDR(0x0001c998u): goto L_1C998;
    case RC_ADDR(0x0001c99cu): goto L_1C99C;
    case RC_ADDR(0x0001c9a0u): goto L_1C9A0;
    case RC_ADDR(0x0001c9a2u): goto L_1C9A2;
    case RC_ADDR(0x0001c9a6u): goto L_1C9A6;
    case RC_ADDR(0x0001c9a8u): goto L_1C9A8;
    case RC_ADDR(0x0001c9aeu): goto L_1C9AE;
    case RC_ADDR(0x0001c9b2u): goto L_1C9B2;
    case RC_ADDR(0x0001c9b6u): goto L_1C9B6;
    case RC_ADDR(0x0001c9bau): goto L_1C9BA;
    case RC_ADDR(0x0001c9bcu): goto L_1C9BC;
    case RC_ADDR(0x0001c9c0u): goto L_1C9C0;
    case RC_ADDR(0x0001c9c4u): goto L_1C9C4;
    case RC_ADDR(0x0001c9c6u): goto L_1C9C6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C838:
    /* 0001c838   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x0001c838u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_1C83C:
    /* 0001c83c   6  cmpi.w #ffff,(227c,A4) */
    c->pc = RC_ADDR(0x0001c83cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x227cu));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1C842:
    /* 0001c842   4  ble 0001c9ae */
    c->pc = RC_ADDR(0x0001c842u);
    if (rc_cond(c, 15)) goto L_1C9AE;

L_1C846:
    /* 0001c846   4  tst.w (2288,A4) */
    c->pc = RC_ADDR(0x0001c846u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2288u));
    rc_set_nzvc(c, t0, RC_W);

L_1C84A:
    /* 0001c84a   4  beq 0001c9ae */
    c->pc = RC_ADDR(0x0001c84au);
    if (rc_cond(c, 7)) goto L_1C9AE;

L_1C84E:
    /* 0001c84e   4  tst.w (227e,A4) */
    c->pc = RC_ADDR(0x0001c84eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x227eu));
    rc_set_nzvc(c, t0, RC_W);

L_1C852:
    /* 0001c852   2  beq 0001c85c */
    c->pc = RC_ADDR(0x0001c852u);
    if (rc_cond(c, 7)) goto L_1C85C;

L_1C854:
    /* 0001c854   4  jsr (0001c9c8) */
    c->pc = RC_ADDR(0x0001c854u);
    rc_push32(c, m, RC_ADDR(0x0001c858u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c9c8u);
    return;

L_1C858:
    /* 0001c858   4  bra 0001c99c */
    c->pc = RC_ADDR(0x0001c858u);
    goto L_1C99C;

L_1C85C:
    /* 0001c85c   4  move.w (227c,A4),D0 */
    c->pc = RC_ADDR(0x0001c85cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x227cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C860:
    /* 0001c860   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c860u);
    rc_ext_l(c, 0);

L_1C862:
    /* 0001c862   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001c862u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1C864:
    /* 0001c864   4  lea (264c,A4),A0 */
    c->pc = RC_ADDR(0x0001c864u);
    c->a[0] = (c->a[4] + 0x264cu);

L_1C868:
    /* 0001c868   6  move.l (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001c868u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C86E:
    /* 0001c86e   6  move.w (2644,A4),(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001c86eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2644u));
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C874:
    /* 0001c874   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001c874u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1C878:
    /* 0001c878   6  move.w (2,A0),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001c878u);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C87E:
    /* 0001c87e   2  moveq #64,D1 */
    c->pc = RC_ADDR(0x0001c87eu);
    c->d[1] = 0x00000064u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1C880:
    /* 0001c880   4  move.l (2646,A4),D0 */
    c->pc = RC_ADDR(0x0001c880u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2646u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C884:
    /* 0001c884   4  jsr (ffff82cc,A4) */
    c->pc = RC_ADDR(0x0001c884u);
    /* vector 119 */
    rc_push32(c, m, RC_ADDR(0x0001c888u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020cdeu);
    return;

L_1C888:
    /* 0001c888   4  move.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x0001c888u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C88C:
    /* 0001c88c   4  muls.w #64,D1 */
    c->pc = RC_ADDR(0x0001c88cu);
    t0 = 0x00000064u;
    rc_muls(c, 1, t0);

L_1C890:
    /* 0001c890   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c890u);
    rc_ext_l(c, 1);

L_1C892:
    /* 0001c892   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x0001c892u);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1C894:
    /* 0001c894   2  moveq #6f,D1 */
    c->pc = RC_ADDR(0x0001c894u);
    c->d[1] = 0x0000006fu;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1C896:
    /* 0001c896   4  jsr (ffff82d8,A4) */
    c->pc = RC_ADDR(0x0001c896u);
    /* vector 121 */
    rc_push32(c, m, RC_ADDR(0x0001c89au));
    rc_depth++;
    c->pc = RC_ADDR(0x000211acu);
    return;

L_1C89A:
    /* 0001c89a   4  move.w (fffffff8,A5),D1 */
    c->pc = RC_ADDR(0x0001c89au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C89E:
    /* 0001c89e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c89eu);
    rc_ext_l(c, 1);

L_1C8A0:
    /* 0001c8a0   4  jsr (ffff82cc,A4) */
    c->pc = RC_ADDR(0x0001c8a0u);
    /* vector 119 */
    rc_push32(c, m, RC_ADDR(0x0001c8a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020cdeu);
    return;

L_1C8A4:
    /* 0001c8a4   2  moveq #64,D1 */
    c->pc = RC_ADDR(0x0001c8a4u);
    c->d[1] = 0x00000064u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1C8A6:
    /* 0001c8a6   4  jsr (ffff82d8,A4) */
    c->pc = RC_ADDR(0x0001c8a6u);
    /* vector 121 */
    rc_push32(c, m, RC_ADDR(0x0001c8aau));
    rc_depth++;
    c->pc = RC_ADDR(0x000211acu);
    return;

L_1C8AA:
    /* 0001c8aa   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001c8aau);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8AE:
    /* 0001c8ae   4  move.w (227c,A4),D0 */
    c->pc = RC_ADDR(0x0001c8aeu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x227cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8B2:
    /* 0001c8b2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c8b2u);
    rc_ext_l(c, 0);

L_1C8B4:
    /* 0001c8b4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c8b4u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1C8B6:
    /* 0001c8b6   4  lea (ffffcab6,A4),A0 */
    c->pc = RC_ADDR(0x0001c8b6u);
    c->a[0] = (c->a[4] - 0x354au);

L_1C8BA:
    /* 0001c8ba   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001c8bau);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8BE:
    /* 0001c8be   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c8beu);
    rc_ext_l(c, 1);

L_1C8C0:
    /* 0001c8c0   4  divs.w #2,D1 */
    c->pc = RC_ADDR(0x0001c8c0u);
    t0 = 0x00000002u;
    rc_divs(c, m, 1, t0);

L_1C8C4:
    /* 0001c8c4   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c8c4u);
    rc_ext_l(c, 1);

L_1C8C6:
    /* 0001c8c6   4  move.l (2646,A4),D0 */
    c->pc = RC_ADDR(0x0001c8c6u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2646u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C8CA:
    /* 0001c8ca   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x0001c8cau);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1C8CC:
    /* 0001c8cc   4  move.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x0001c8ccu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8D0:
    /* 0001c8d0   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c8d0u);
    rc_ext_l(c, 1);

L_1C8D2:
    /* 0001c8d2   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x0001c8d2u);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1C8D4:
    /* 0001c8d4   4  move.w D0,(26a0,A4) */
    c->pc = RC_ADDR(0x0001c8d4u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x26a0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8D8:
    /* 0001c8d8   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001c8d8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8DC:
    /* 0001c8dc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c8dcu);
    rc_ext_l(c, 0);

L_1C8DE:
    /* 0001c8de   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x0001c8deu);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_1C8E2:
    /* 0001c8e2   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001c8e2u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8E4:
    /* 0001c8e4   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001c8e4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8E8:
    /* 0001c8e8   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0001c8e8u);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0001c8ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_1C8EC:
    /* 0001c8ec   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001c8ecu);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1C8EE:
    /* 0001c8ee   2  move.w (A7)+,D1 */
    c->pc = RC_ADDR(0x0001c8eeu);
    t3 = c->a[7];
    c->a[7] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C8F0:
    /* 0001c8f0   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x0001c8f0u);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1C8F2:
    /* 0001c8f2   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c8f2u);
    rc_ext_l(c, 1);

L_1C8F4:
    /* 0001c8f4   4  divs.w #5,D1 */
    c->pc = RC_ADDR(0x0001c8f4u);
    t0 = 0x00000005u;
    rc_divs(c, m, 1, t0);

L_1C8F8:
    /* 0001c8f8   4  add.w D1,(26a0,A4) */
    c->pc = RC_ADDR(0x0001c8f8u);
    t3 = (c->a[4] + 0x26a0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C8FC:
    /* 0001c8fc   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001c8fcu);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1C8FE:
    /* 0001c8fe   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001c8feu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1C902:
    /* 0001c902   4  move.l (24,A0),-(A7) */
    c->pc = RC_ADDR(0x0001c902u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C906:
    /* 0001c906   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001c906u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1C90A:
    /* 0001c90a   4  move.l (20,A0),-(A7) */
    c->pc = RC_ADDR(0x0001c90au);
    t0 = rc_rd32(c, m, (c->a[0] + 0x20u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C90E:
    /* 0001c90e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001c90eu);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1C910:
    /* 0001c910   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001c910u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1C914:
    /* 0001c914   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c914u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C916:
    /* 0001c916   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x0001c916u);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C91A:
    /* 0001c91a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001c91au);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C91C:
    /* 0001c91c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001c91cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1C920:
    /* 0001c920   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c920u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C922:
    /* 0001c922   4  move.b (4,A0),D0 */
    c->pc = RC_ADDR(0x0001c922u);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C926:
    /* 0001c926   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001c926u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C928:
    /* 0001c928   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001c928u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1C92A:
    /* 0001c92a   4  move.w (26a0,A4),D0 */
    c->pc = RC_ADDR(0x0001c92au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26a0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C92E:
    /* 0001c92e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c92eu);
    rc_ext_l(c, 0);

L_1C930:
    /* 0001c930   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001c930u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C932:
    /* 0001c932   4  pea (229a,A4) */
    c->pc = RC_ADDR(0x0001c932u);
    rc_push32(c, m, (c->a[4] + 0x229au));

L_1C936:
    /* 0001c936   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001c936u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1C938:
    /* 0001c938   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001c938u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1C93A:
    /* 0001c93a   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001c93au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C93E:
    /* 0001c93e   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x0001c93eu);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x0001c942u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e8c8u);
    return;

L_1C942:
    /* 0001c942   4  lea (30,A7),A7 */
    c->pc = RC_ADDR(0x0001c942u);
    c->a[7] = (c->a[7] + 0x30u);

L_1C946:
    /* 0001c946   4  tst.w (269c,A4) */
    c->pc = RC_ADDR(0x0001c946u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x269cu));
    rc_set_nzvc(c, t0, RC_W);

L_1C94A:
    /* 0001c94a   2  beq 0001c952 */
    c->pc = RC_ADDR(0x0001c94au);
    if (rc_cond(c, 7)) goto L_1C952;

L_1C94C:
    /* 0001c94c   4  subq.w #1,(269c,A4) */
    c->pc = RC_ADDR(0x0001c94cu);
    t3 = (c->a[4] + 0x269cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C950:
    /* 0001c950   2  bra 0001c964 */
    c->pc = RC_ADDR(0x0001c950u);
    goto L_1C964;

L_1C952:
    /* 0001c952   2  moveq #9,D0 */
    c->pc = RC_ADDR(0x0001c952u);
    c->d[0] = 0x00000009u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C954:
    /* 0001c954   4  sub.w (2288,A4),D0 */
    c->pc = RC_ADDR(0x0001c954u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2288u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1C958:
    /* 0001c958   4  move.w D0,(269c,A4) */
    c->pc = RC_ADDR(0x0001c958u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x269cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C95C:
    /* 0001c95c   4  subq.w #1,(227c,A4) */
    c->pc = RC_ADDR(0x0001c95cu);
    t3 = (c->a[4] + 0x227cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C960:
    /* 0001c960   4  addq.w #1,(269e,A4) */
    c->pc = RC_ADDR(0x0001c960u);
    t3 = (c->a[4] + 0x269eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C964:
    /* 0001c964   6  cmpi.w #1,(227c,A4) */
    c->pc = RC_ADDR(0x0001c964u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x227cu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1C96A:
    /* 0001c96a   2  bne 0001c99c */
    c->pc = RC_ADDR(0x0001c96au);
    if (rc_cond(c, 6)) goto L_1C99C;

L_1C96C:
    /* 0001c96c   4  move.w (26aa,A4),D0 */
    c->pc = RC_ADDR(0x0001c96cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26aau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C970:
    /* 0001c970   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c970u);
    rc_ext_l(c, 0);

L_1C972:
    /* 0001c972   4  move.l (2642,A4),D1 */
    c->pc = RC_ADDR(0x0001c972u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2642u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C976:
    /* 0001c976   2  cmp.l D0,D1 */
    c->pc = RC_ADDR(0x0001c976u);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1C978:
    /* 0001c978   2  ble 0001c99c */
    c->pc = RC_ADDR(0x0001c978u);
    if (rc_cond(c, 15)) goto L_1C99C;

L_1C97A:
    /* 0001c97a   4  move.w (26ac,A4),D0 */
    c->pc = RC_ADDR(0x0001c97au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26acu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C97E:
    /* 0001c97e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c97eu);
    rc_ext_l(c, 0);

L_1C980:
    /* 0001c980   4  move.l (2642,A4),D1 */
    c->pc = RC_ADDR(0x0001c980u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2642u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C984:
    /* 0001c984   2  cmp.l D0,D1 */
    c->pc = RC_ADDR(0x0001c984u);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1C986:
    /* 0001c986   2  bge 0001c99c */
    c->pc = RC_ADDR(0x0001c986u);
    if (rc_cond(c, 12)) goto L_1C99C;

L_1C988:
    /* 0001c988   4  addq.w #1,(227e,A4) */
    c->pc = RC_ADDR(0x0001c988u);
    t3 = (c->a[4] + 0x227eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C98C:
    /* 0001c98c   4  move.w (26a0,A4),D0 */
    c->pc = RC_ADDR(0x0001c98cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26a0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C990:
    /* 0001c990   4  sub.w #50,D0 */
    c->pc = RC_ADDR(0x0001c990u);
    t0 = 0x00000050u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1C994:
    /* 0001c994   4  move.w D0,(26a4,A4) */
    c->pc = RC_ADDR(0x0001c994u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x26a4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C998:
    /* 0001c998   4  jsr (0001c174) */
    c->pc = RC_ADDR(0x0001c998u);
    rc_push32(c, m, RC_ADDR(0x0001c99cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c174u);
    return;

L_1C99C:
    /* 0001c99c   4  tst.w (227c,A4) */
    c->pc = RC_ADDR(0x0001c99cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x227cu));
    rc_set_nzvc(c, t0, RC_W);

L_1C9A0:
    /* 0001c9a0   2  bge 0001c9ae */
    c->pc = RC_ADDR(0x0001c9a0u);
    if (rc_cond(c, 12)) goto L_1C9AE;

L_1C9A2:
    /* 0001c9a2   4  tst.w (2278,A4) */
    c->pc = RC_ADDR(0x0001c9a2u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2278u));
    rc_set_nzvc(c, t0, RC_W);

L_1C9A6:
    /* 0001c9a6   2  bne 0001c9ae */
    c->pc = RC_ADDR(0x0001c9a6u);
    if (rc_cond(c, 6)) goto L_1C9AE;

L_1C9A8:
    /* 0001c9a8   6  move.w #1,(227a,A4) */
    c->pc = RC_ADDR(0x0001c9a8u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x227au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C9AE:
    /* 0001c9ae   4  pea (fffff326,A4) */
    c->pc = RC_ADDR(0x0001c9aeu);
    rc_push32(c, m, (c->a[4] - 0xcdau));

L_1C9B2:
    /* 0001c9b2   4  move.l (2388,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c9b2u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2388u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C9B6:
    /* 0001c9b6   4  move.w #4b,-(A7) */
    c->pc = RC_ADDR(0x0001c9b6u);
    t0 = 0x0000004bu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C9BA:
    /* 0001c9ba   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001c9bau);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C9BC:
    /* 0001c9bc   4  jsr (ffff8152,A4) */
    c->pc = RC_ADDR(0x0001c9bcu);
    /* vector 56 */
    rc_push32(c, m, RC_ADDR(0x0001c9c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011130u);
    return;

L_1C9C0:
    /* 0001c9c0   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001c9c0u);
    c->a[7] = (c->a[7] + 0xcu);

L_1C9C4:
    /* 0001c9c4   2  unlk A5 */
    c->pc = RC_ADDR(0x0001c9c4u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C9C6:
    /* 0001c9c6   2  rts */
    c->pc = RC_ADDR(0x0001c9c6u);
    rc_ret(c, m);
    return;

}
