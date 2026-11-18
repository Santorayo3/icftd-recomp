/* fn_00016920 - 362 byte(s), 120 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00016920(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00016920u): goto L_16920;
    case RC_ADDR(0x00016924u): goto L_16924;
    case RC_ADDR(0x00016928u): goto L_16928;
    case RC_ADDR(0x0001692eu): goto L_1692E;
    case RC_ADDR(0x00016932u): goto L_16932;
    case RC_ADDR(0x00016934u): goto L_16934;
    case RC_ADDR(0x00016938u): goto L_16938;
    case RC_ADDR(0x0001693au): goto L_1693A;
    case RC_ADDR(0x0001693cu): goto L_1693C;
    case RC_ADDR(0x0001693eu): goto L_1693E;
    case RC_ADDR(0x00016942u): goto L_16942;
    case RC_ADDR(0x00016946u): goto L_16946;
    case RC_ADDR(0x0001694au): goto L_1694A;
    case RC_ADDR(0x0001694cu): goto L_1694C;
    case RC_ADDR(0x0001694eu): goto L_1694E;
    case RC_ADDR(0x00016950u): goto L_16950;
    case RC_ADDR(0x00016954u): goto L_16954;
    case RC_ADDR(0x00016958u): goto L_16958;
    case RC_ADDR(0x0001695au): goto L_1695A;
    case RC_ADDR(0x0001695cu): goto L_1695C;
    case RC_ADDR(0x0001695eu): goto L_1695E;
    case RC_ADDR(0x00016962u): goto L_16962;
    case RC_ADDR(0x00016966u): goto L_16966;
    case RC_ADDR(0x00016968u): goto L_16968;
    case RC_ADDR(0x0001696cu): goto L_1696C;
    case RC_ADDR(0x00016970u): goto L_16970;
    case RC_ADDR(0x00016972u): goto L_16972;
    case RC_ADDR(0x00016976u): goto L_16976;
    case RC_ADDR(0x00016978u): goto L_16978;
    case RC_ADDR(0x0001697cu): goto L_1697C;
    case RC_ADDR(0x00016980u): goto L_16980;
    case RC_ADDR(0x00016982u): goto L_16982;
    case RC_ADDR(0x00016986u): goto L_16986;
    case RC_ADDR(0x00016988u): goto L_16988;
    case RC_ADDR(0x0001698cu): goto L_1698C;
    case RC_ADDR(0x00016990u): goto L_16990;
    case RC_ADDR(0x00016992u): goto L_16992;
    case RC_ADDR(0x00016996u): goto L_16996;
    case RC_ADDR(0x00016998u): goto L_16998;
    case RC_ADDR(0x0001699cu): goto L_1699C;
    case RC_ADDR(0x000169a0u): goto L_169A0;
    case RC_ADDR(0x000169a2u): goto L_169A2;
    case RC_ADDR(0x000169a6u): goto L_169A6;
    case RC_ADDR(0x000169a8u): goto L_169A8;
    case RC_ADDR(0x000169aau): goto L_169AA;
    case RC_ADDR(0x000169acu): goto L_169AC;
    case RC_ADDR(0x000169b0u): goto L_169B0;
    case RC_ADDR(0x000169b6u): goto L_169B6;
    case RC_ADDR(0x000169b8u): goto L_169B8;
    case RC_ADDR(0x000169bau): goto L_169BA;
    case RC_ADDR(0x000169bcu): goto L_169BC;
    case RC_ADDR(0x000169c0u): goto L_169C0;
    case RC_ADDR(0x000169c4u): goto L_169C4;
    case RC_ADDR(0x000169c6u): goto L_169C6;
    case RC_ADDR(0x000169c8u): goto L_169C8;
    case RC_ADDR(0x000169ccu): goto L_169CC;
    case RC_ADDR(0x000169d0u): goto L_169D0;
    case RC_ADDR(0x000169d2u): goto L_169D2;
    case RC_ADDR(0x000169d6u): goto L_169D6;
    case RC_ADDR(0x000169d8u): goto L_169D8;
    case RC_ADDR(0x000169dau): goto L_169DA;
    case RC_ADDR(0x000169dcu): goto L_169DC;
    case RC_ADDR(0x000169deu): goto L_169DE;
    case RC_ADDR(0x000169e2u): goto L_169E2;
    case RC_ADDR(0x000169e6u): goto L_169E6;
    case RC_ADDR(0x000169e8u): goto L_169E8;
    case RC_ADDR(0x000169eau): goto L_169EA;
    case RC_ADDR(0x000169eeu): goto L_169EE;
    case RC_ADDR(0x000169f2u): goto L_169F2;
    case RC_ADDR(0x000169f6u): goto L_169F6;
    case RC_ADDR(0x000169f8u): goto L_169F8;
    case RC_ADDR(0x000169fcu): goto L_169FC;
    case RC_ADDR(0x00016a00u): goto L_16A00;
    case RC_ADDR(0x00016a02u): goto L_16A02;
    case RC_ADDR(0x00016a04u): goto L_16A04;
    case RC_ADDR(0x00016a06u): goto L_16A06;
    case RC_ADDR(0x00016a08u): goto L_16A08;
    case RC_ADDR(0x00016a0au): goto L_16A0A;
    case RC_ADDR(0x00016a0eu): goto L_16A0E;
    case RC_ADDR(0x00016a10u): goto L_16A10;
    case RC_ADDR(0x00016a12u): goto L_16A12;
    case RC_ADDR(0x00016a14u): goto L_16A14;
    case RC_ADDR(0x00016a18u): goto L_16A18;
    case RC_ADDR(0x00016a1cu): goto L_16A1C;
    case RC_ADDR(0x00016a1eu): goto L_16A1E;
    case RC_ADDR(0x00016a20u): goto L_16A20;
    case RC_ADDR(0x00016a22u): goto L_16A22;
    case RC_ADDR(0x00016a24u): goto L_16A24;
    case RC_ADDR(0x00016a26u): goto L_16A26;
    case RC_ADDR(0x00016a2au): goto L_16A2A;
    case RC_ADDR(0x00016a2cu): goto L_16A2C;
    case RC_ADDR(0x00016a2eu): goto L_16A2E;
    case RC_ADDR(0x00016a30u): goto L_16A30;
    case RC_ADDR(0x00016a32u): goto L_16A32;
    case RC_ADDR(0x00016a34u): goto L_16A34;
    case RC_ADDR(0x00016a38u): goto L_16A38;
    case RC_ADDR(0x00016a3cu): goto L_16A3C;
    case RC_ADDR(0x00016a42u): goto L_16A42;
    case RC_ADDR(0x00016a44u): goto L_16A44;
    case RC_ADDR(0x00016a46u): goto L_16A46;
    case RC_ADDR(0x00016a48u): goto L_16A48;
    case RC_ADDR(0x00016a4au): goto L_16A4A;
    case RC_ADDR(0x00016a4eu): goto L_16A4E;
    case RC_ADDR(0x00016a54u): goto L_16A54;
    case RC_ADDR(0x00016a58u): goto L_16A58;
    case RC_ADDR(0x00016a5au): goto L_16A5A;
    case RC_ADDR(0x00016a5cu): goto L_16A5C;
    case RC_ADDR(0x00016a60u): goto L_16A60;
    case RC_ADDR(0x00016a62u): goto L_16A62;
    case RC_ADDR(0x00016a68u): goto L_16A68;
    case RC_ADDR(0x00016a6eu): goto L_16A6E;
    case RC_ADDR(0x00016a72u): goto L_16A72;
    case RC_ADDR(0x00016a74u): goto L_16A74;
    case RC_ADDR(0x00016a78u): goto L_16A78;
    case RC_ADDR(0x00016a7au): goto L_16A7A;
    case RC_ADDR(0x00016a7cu): goto L_16A7C;
    case RC_ADDR(0x00016a7eu): goto L_16A7E;
    case RC_ADDR(0x00016a82u): goto L_16A82;
    case RC_ADDR(0x00016a86u): goto L_16A86;
    case RC_ADDR(0x00016a88u): goto L_16A88;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16920:
    /* 00016920   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00016920u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_16924:
    /* 00016924   4  movem.l { D5 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x00016924u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_16928:
    /* 00016928   6  btst #3,(14e5,A4) */
    c->pc = RC_ADDR(0x00016928u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x14e5u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1692E:
    /* 0001692e   4  beq 00016a86 */
    c->pc = RC_ADDR(0x0001692eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16A86;

L_16932:
    /* 00016932   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00016932u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_16934:
    /* 00016934   4  bra 00016a7e */
    c->pc = RC_ADDR(0x00016934u);
    rc_step(c, m, 10);
    goto L_16A7E;

L_16938:
    /* 00016938   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016938u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1693A:
    /* 0001693a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001693au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1693C:
    /* 0001693c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001693cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1693E:
    /* 0001693e   4  lea (1c0e,A4),A0 */
    c->pc = RC_ADDR(0x0001693eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c0eu);

L_16942:
    /* 00016942   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016942u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_16946:
    /* 00016946   4  bne 00016a7c */
    c->pc = RC_ADDR(0x00016946u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16A7C;

L_1694A:
    /* 0001694a   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0001694au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1694C:
    /* 0001694c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001694cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1694E:
    /* 0001694e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001694eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16950:
    /* 00016950   4  lea (1bde,A4),A0 */
    c->pc = RC_ADDR(0x00016950u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bdeu);

L_16954:
    /* 00016954   4  move.w (0,A0,D0.w),D5 */
    c->pc = RC_ADDR(0x00016954u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16958:
    /* 00016958   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016958u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1695A:
    /* 0001695a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001695au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1695C:
    /* 0001695c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001695cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1695E:
    /* 0001695e   4  lea (1be6,A4),A0 */
    c->pc = RC_ADDR(0x0001695eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1be6u);

L_16962:
    /* 00016962   4  move.w (0,A0,D0.w),D6 */
    c->pc = RC_ADDR(0x00016962u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16966:
    /* 00016966   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x00016966u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16968:
    /* 00016968   4  sub.w #96,D0 */
    c->pc = RC_ADDR(0x00016968u);
    rc_step(c, m, 10);
    t0 = 0x00000096u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1696C:
    /* 0001696c   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x0001696cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16970:
    /* 00016970   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00016970u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16972:
    /* 00016972   4  ble 00016a7c */
    c->pc = RC_ADDR(0x00016972u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_16A7C;

L_16976:
    /* 00016976   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x00016976u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16978:
    /* 00016978   4  add.w #a0,D0 */
    c->pc = RC_ADDR(0x00016978u);
    rc_step(c, m, 10);
    t0 = 0x000000a0u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1697C:
    /* 0001697c   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x0001697cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16980:
    /* 00016980   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00016980u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16982:
    /* 00016982   4  bge 00016a7c */
    c->pc = RC_ADDR(0x00016982u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16A7C;

L_16986:
    /* 00016986   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x00016986u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16988:
    /* 00016988   4  sub.w #4b,D0 */
    c->pc = RC_ADDR(0x00016988u);
    rc_step(c, m, 10);
    t0 = 0x0000004bu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1698C:
    /* 0001698c   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x0001698cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16990:
    /* 00016990   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00016990u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16992:
    /* 00016992   4  ble 00016a7c */
    c->pc = RC_ADDR(0x00016992u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_16A7C;

L_16996:
    /* 00016996   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x00016996u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16998:
    /* 00016998   4  add.w #64,D0 */
    c->pc = RC_ADDR(0x00016998u);
    rc_step(c, m, 10);
    t0 = 0x00000064u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1699C:
    /* 0001699c   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x0001699cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_169A0:
    /* 000169a0   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000169a0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_169A2:
    /* 000169a2   4  bge 00016a7c */
    c->pc = RC_ADDR(0x000169a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16A7C;

L_169A6:
    /* 000169a6   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x000169a6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_169A8:
    /* 000169a8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000169a8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_169AA:
    /* 000169aa   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000169aau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_169AC:
    /* 000169ac   4  lea (1c84,A4),A0 */
    c->pc = RC_ADDR(0x000169acu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c84u);

L_169B0:
    /* 000169b0   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000169b0u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_169B6:
    /* 000169b6   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x000169b6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_169B8:
    /* 000169b8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000169b8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_169BA:
    /* 000169ba   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000169bau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_169BC:
    /* 000169bc   4  lea (1bfe,A4),A0 */
    c->pc = RC_ADDR(0x000169bcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bfeu);

L_169C0:
    /* 000169c0   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000169c0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_169C4:
    /* 000169c4   2  ext.l D1 */
    c->pc = RC_ADDR(0x000169c4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_169C6:
    /* 000169c6   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000169c6u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_169C8:
    /* 000169c8   4  lea (1b9a,A4),A0 */
    c->pc = RC_ADDR(0x000169c8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1b9au);

L_169CC:
    /* 000169cc   4  movea.l (0,A0,D1.w),A1 */
    c->pc = RC_ADDR(0x000169ccu);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_169D0:
    /* 000169d0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000169d0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_169D2:
    /* 000169d2   4  move.b (4,A1),D0 */
    c->pc = RC_ADDR(0x000169d2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_169D6:
    /* 000169d6   2  move.w D0,D7 */
    c->pc = RC_ADDR(0x000169d6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_169D8:
    /* 000169d8   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x000169d8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_169DA:
    /* 000169da   2  ext.l D0 */
    c->pc = RC_ADDR(0x000169dau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_169DC:
    /* 000169dc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000169dcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_169DE:
    /* 000169de   4  lea (1bfe,A4),A0 */
    c->pc = RC_ADDR(0x000169deu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1bfeu);

L_169E2:
    /* 000169e2   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000169e2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_169E6:
    /* 000169e6   2  ext.l D1 */
    c->pc = RC_ADDR(0x000169e6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_169E8:
    /* 000169e8   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000169e8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_169EA:
    /* 000169ea   4  lea (1b9a,A4),A0 */
    c->pc = RC_ADDR(0x000169eau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1b9au);

L_169EE:
    /* 000169ee   4  movea.l (0,A0,D1.w),A1 */
    c->pc = RC_ADDR(0x000169eeu);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_169F2:
    /* 000169f2   4  movea.w (2,A1),A2 */
    c->pc = RC_ADDR(0x000169f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    c->a[2] = rc_ext(t0, RC_W);

L_169F6:
    /* 000169f6   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x000169f6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_169F8:
    /* 000169f8   4  sub.w #10,D0 */
    c->pc = RC_ADDR(0x000169f8u);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_169FC:
    /* 000169fc   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x000169fcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A00:
    /* 00016a00   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00016a00u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16A02:
    /* 00016a02   2  ble 00016a7c */
    c->pc = RC_ADDR(0x00016a02u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_16A7C;

L_16A04:
    /* 00016a04   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x00016a04u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A06:
    /* 00016a06   2  add.w D7,D0 */
    c->pc = RC_ADDR(0x00016a06u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16A08:
    /* 00016a08   2  addq.w #4,D0 */
    c->pc = RC_ADDR(0x00016a08u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16A0A:
    /* 00016a0a   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x00016a0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A0E:
    /* 00016a0e   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00016a0eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16A10:
    /* 00016a10   2  bge 00016a7c */
    c->pc = RC_ADDR(0x00016a10u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16A7C;

L_16A12:
    /* 00016a12   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x00016a12u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A14:
    /* 00016a14   4  sub.w #a,D0 */
    c->pc = RC_ADDR(0x00016a14u);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16A18:
    /* 00016a18   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00016a18u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A1C:
    /* 00016a1c   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00016a1cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16A1E:
    /* 00016a1e   2  ble 00016a7c */
    c->pc = RC_ADDR(0x00016a1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_16A7C;

L_16A20:
    /* 00016a20   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x00016a20u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A22:
    /* 00016a22   2  add.w A2,D0 */
    c->pc = RC_ADDR(0x00016a22u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16A24:
    /* 00016a24   2  addq.w #4,D0 */
    c->pc = RC_ADDR(0x00016a24u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16A26:
    /* 00016a26   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00016a26u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A2A:
    /* 00016a2a   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00016a2au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16A2C:
    /* 00016a2c   2  bge 00016a7c */
    c->pc = RC_ADDR(0x00016a2cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16A7C;

L_16A2E:
    /* 00016a2e   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016a2eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A30:
    /* 00016a30   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016a30u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16A32:
    /* 00016a32   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016a32u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16A34:
    /* 00016a34   4  lea (1c16,A4),A0 */
    c->pc = RC_ADDR(0x00016a34u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c16u);

L_16A38:
    /* 00016a38   4  addq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016a38u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16A3C:
    /* 00016a3c   6  cmpi.w #19,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016a3cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000019u);

L_16A42:
    /* 00016a42   2  bne 00016a72 */
    c->pc = RC_ADDR(0x00016a42u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16A72;

L_16A44:
    /* 00016a44   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00016a44u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A46:
    /* 00016a46   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016a46u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16A48:
    /* 00016a48   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016a48u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16A4A:
    /* 00016a4a   4  lea (1c0e,A4),A0 */
    c->pc = RC_ADDR(0x00016a4au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c0eu);

L_16A4E:
    /* 00016a4e   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016a4eu);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A54:
    /* 00016a54   4  move.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x00016a54u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A58:
    /* 00016a58   2  cmp.w D4,D0 */
    c->pc = RC_ADDR(0x00016a58u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16A5A:
    /* 00016a5a   2  bne 00016a6e */
    c->pc = RC_ADDR(0x00016a5au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16A6E;

L_16A5C:
    /* 00016a5c   4  tst.w (1ab2,A4) */
    c->pc = RC_ADDR(0x00016a5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ab2u));
    rc_set_nzvc(c, t0, RC_W);

L_16A60:
    /* 00016a60   2  beq 00016a6e */
    c->pc = RC_ADDR(0x00016a60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16A6E;

L_16A62:
    /* 00016a62   6  move.w #1,(14e8,A4) */
    c->pc = RC_ADDR(0x00016a62u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14e8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A68:
    /* 00016a68   6  move.w #1,(ffffb4c8,A4) */
    c->pc = RC_ADDR(0x00016a68u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4b38u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A6E:
    /* 00016a6e   4  subq.w #1,(1ca2,A4) */
    c->pc = RC_ADDR(0x00016a6eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1ca2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16A72:
    /* 00016a72   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00016a72u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_16A74:
    /* 00016a74   4  movem.l (SP)+,{ D4 D5 D6 D7 A2 } */
    c->pc = RC_ADDR(0x00016a74u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_16A78:
    /* 00016a78   2  unlk A5 */
    c->pc = RC_ADDR(0x00016a78u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16A7A:
    /* 00016a7a   2  rts */
    c->pc = RC_ADDR(0x00016a7au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_16A7C:
    /* 00016a7c   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x00016a7cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_16A7E:
    /* 00016a7e   4  cmp.w (1ca0,A4),D4 */
    c->pc = RC_ADDR(0x00016a7eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca0u));
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16A82:
    /* 00016a82   4  blt 00016938 */
    c->pc = RC_ADDR(0x00016a82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_16938; }

L_16A86:
    /* 00016a86   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00016a86u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_16A88:
    /* 00016a88   2  bra 00016a74 */
    c->pc = RC_ADDR(0x00016a88u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_16A74;

}
