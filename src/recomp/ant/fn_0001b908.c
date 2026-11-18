/* fn_0001b908 - 366 byte(s), 112 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001b908(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001b908u): goto L_1B908;
    case RC_ADDR(0x0001b90cu): goto L_1B90C;
    case RC_ADDR(0x0001b910u): goto L_1B910;
    case RC_ADDR(0x0001b914u): goto L_1B914;
    case RC_ADDR(0x0001b916u): goto L_1B916;
    case RC_ADDR(0x0001b91au): goto L_1B91A;
    case RC_ADDR(0x0001b91eu): goto L_1B91E;
    case RC_ADDR(0x0001b920u): goto L_1B920;
    case RC_ADDR(0x0001b924u): goto L_1B924;
    case RC_ADDR(0x0001b926u): goto L_1B926;
    case RC_ADDR(0x0001b92au): goto L_1B92A;
    case RC_ADDR(0x0001b92eu): goto L_1B92E;
    case RC_ADDR(0x0001b932u): goto L_1B932;
    case RC_ADDR(0x0001b934u): goto L_1B934;
    case RC_ADDR(0x0001b938u): goto L_1B938;
    case RC_ADDR(0x0001b93cu): goto L_1B93C;
    case RC_ADDR(0x0001b940u): goto L_1B940;
    case RC_ADDR(0x0001b942u): goto L_1B942;
    case RC_ADDR(0x0001b944u): goto L_1B944;
    case RC_ADDR(0x0001b948u): goto L_1B948;
    case RC_ADDR(0x0001b94au): goto L_1B94A;
    case RC_ADDR(0x0001b94eu): goto L_1B94E;
    case RC_ADDR(0x0001b952u): goto L_1B952;
    case RC_ADDR(0x0001b956u): goto L_1B956;
    case RC_ADDR(0x0001b958u): goto L_1B958;
    case RC_ADDR(0x0001b95au): goto L_1B95A;
    case RC_ADDR(0x0001b95eu): goto L_1B95E;
    case RC_ADDR(0x0001b960u): goto L_1B960;
    case RC_ADDR(0x0001b964u): goto L_1B964;
    case RC_ADDR(0x0001b968u): goto L_1B968;
    case RC_ADDR(0x0001b96cu): goto L_1B96C;
    case RC_ADDR(0x0001b970u): goto L_1B970;
    case RC_ADDR(0x0001b974u): goto L_1B974;
    case RC_ADDR(0x0001b978u): goto L_1B978;
    case RC_ADDR(0x0001b97cu): goto L_1B97C;
    case RC_ADDR(0x0001b980u): goto L_1B980;
    case RC_ADDR(0x0001b982u): goto L_1B982;
    case RC_ADDR(0x0001b986u): goto L_1B986;
    case RC_ADDR(0x0001b98au): goto L_1B98A;
    case RC_ADDR(0x0001b98eu): goto L_1B98E;
    case RC_ADDR(0x0001b992u): goto L_1B992;
    case RC_ADDR(0x0001b994u): goto L_1B994;
    case RC_ADDR(0x0001b996u): goto L_1B996;
    case RC_ADDR(0x0001b99au): goto L_1B99A;
    case RC_ADDR(0x0001b99eu): goto L_1B99E;
    case RC_ADDR(0x0001b9a2u): goto L_1B9A2;
    case RC_ADDR(0x0001b9a4u): goto L_1B9A4;
    case RC_ADDR(0x0001b9a6u): goto L_1B9A6;
    case RC_ADDR(0x0001b9aau): goto L_1B9AA;
    case RC_ADDR(0x0001b9acu): goto L_1B9AC;
    case RC_ADDR(0x0001b9aeu): goto L_1B9AE;
    case RC_ADDR(0x0001b9b2u): goto L_1B9B2;
    case RC_ADDR(0x0001b9b4u): goto L_1B9B4;
    case RC_ADDR(0x0001b9b8u): goto L_1B9B8;
    case RC_ADDR(0x0001b9bcu): goto L_1B9BC;
    case RC_ADDR(0x0001b9beu): goto L_1B9BE;
    case RC_ADDR(0x0001b9c0u): goto L_1B9C0;
    case RC_ADDR(0x0001b9c4u): goto L_1B9C4;
    case RC_ADDR(0x0001b9c8u): goto L_1B9C8;
    case RC_ADDR(0x0001b9ccu): goto L_1B9CC;
    case RC_ADDR(0x0001b9ceu): goto L_1B9CE;
    case RC_ADDR(0x0001b9d0u): goto L_1B9D0;
    case RC_ADDR(0x0001b9d4u): goto L_1B9D4;
    case RC_ADDR(0x0001b9d8u): goto L_1B9D8;
    case RC_ADDR(0x0001b9dau): goto L_1B9DA;
    case RC_ADDR(0x0001b9deu): goto L_1B9DE;
    case RC_ADDR(0x0001b9e0u): goto L_1B9E0;
    case RC_ADDR(0x0001b9e4u): goto L_1B9E4;
    case RC_ADDR(0x0001b9e6u): goto L_1B9E6;
    case RC_ADDR(0x0001b9eau): goto L_1B9EA;
    case RC_ADDR(0x0001b9eeu): goto L_1B9EE;
    case RC_ADDR(0x0001b9f0u): goto L_1B9F0;
    case RC_ADDR(0x0001b9f4u): goto L_1B9F4;
    case RC_ADDR(0x0001b9f6u): goto L_1B9F6;
    case RC_ADDR(0x0001b9f8u): goto L_1B9F8;
    case RC_ADDR(0x0001b9fau): goto L_1B9FA;
    case RC_ADDR(0x0001b9feu): goto L_1B9FE;
    case RC_ADDR(0x0001ba02u): goto L_1BA02;
    case RC_ADDR(0x0001ba06u): goto L_1BA06;
    case RC_ADDR(0x0001ba08u): goto L_1BA08;
    case RC_ADDR(0x0001ba0au): goto L_1BA0A;
    case RC_ADDR(0x0001ba0eu): goto L_1BA0E;
    case RC_ADDR(0x0001ba12u): goto L_1BA12;
    case RC_ADDR(0x0001ba14u): goto L_1BA14;
    case RC_ADDR(0x0001ba18u): goto L_1BA18;
    case RC_ADDR(0x0001ba1au): goto L_1BA1A;
    case RC_ADDR(0x0001ba1eu): goto L_1BA1E;
    case RC_ADDR(0x0001ba20u): goto L_1BA20;
    case RC_ADDR(0x0001ba24u): goto L_1BA24;
    case RC_ADDR(0x0001ba28u): goto L_1BA28;
    case RC_ADDR(0x0001ba2au): goto L_1BA2A;
    case RC_ADDR(0x0001ba2cu): goto L_1BA2C;
    case RC_ADDR(0x0001ba30u): goto L_1BA30;
    case RC_ADDR(0x0001ba34u): goto L_1BA34;
    case RC_ADDR(0x0001ba38u): goto L_1BA38;
    case RC_ADDR(0x0001ba3cu): goto L_1BA3C;
    case RC_ADDR(0x0001ba3eu): goto L_1BA3E;
    case RC_ADDR(0x0001ba42u): goto L_1BA42;
    case RC_ADDR(0x0001ba46u): goto L_1BA46;
    case RC_ADDR(0x0001ba48u): goto L_1BA48;
    case RC_ADDR(0x0001ba4cu): goto L_1BA4C;
    case RC_ADDR(0x0001ba4eu): goto L_1BA4E;
    case RC_ADDR(0x0001ba60u): goto L_1BA60;
    case RC_ADDR(0x0001ba66u): goto L_1BA66;
    case RC_ADDR(0x0001ba68u): goto L_1BA68;
    case RC_ADDR(0x0001ba6au): goto L_1BA6A;
    case RC_ADDR(0x0001ba6eu): goto L_1BA6E;
    case RC_ADDR(0x0001ba72u): goto L_1BA72;
    case RC_ADDR(0x0001ba76u): goto L_1BA76;
    case RC_ADDR(0x0001ba7eu): goto L_1BA7E;
    case RC_ADDR(0x0001ba82u): goto L_1BA82;
    case RC_ADDR(0x0001ba84u): goto L_1BA84;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B908:
    /* 0001b908   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0001b908u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_1B90C:
    /* 0001b90c   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b90cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1B910:
    /* 0001b910   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b910u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B914:
    /* 0001b914   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001b914u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1B916:
    /* 0001b916   4  lea (13d8,A4),A0 */
    c->pc = RC_ADDR(0x0001b916u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13d8u);

L_1B91A:
    /* 0001b91a   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b91au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_1B91E:
    /* 0001b91e   2  beq 0001b964 */
    c->pc = RC_ADDR(0x0001b91eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B964;

L_1B920:
    /* 0001b920   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b920u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B924:
    /* 0001b924   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001b924u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1B926:
    /* 0001b926   4  lea (13d8,A4),A0 */
    c->pc = RC_ADDR(0x0001b926u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13d8u);

L_1B92A:
    /* 0001b92a   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001b92au);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B92E:
    /* 0001b92e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b92eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B932:
    /* 0001b932   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b932u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B934:
    /* 0001b934   4  lea (13be,A4),A0 */
    c->pc = RC_ADDR(0x0001b934u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13beu);

L_1B938:
    /* 0001b938   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001b938u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B93C:
    /* 0001b93c   4  sub.w (e6e,A4),D1 */
    c->pc = RC_ADDR(0x0001b93cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1B940:
    /* 0001b940   2  subq.w #7,D1 */
    c->pc = RC_ADDR(0x0001b940u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_W, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1B942:
    /* 0001b942   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001b942u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B944:
    /* 0001b944   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b944u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B948:
    /* 0001b948   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b948u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B94A:
    /* 0001b94a   4  lea (13a4,A4),A0 */
    c->pc = RC_ADDR(0x0001b94au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13a4u);

L_1B94E:
    /* 0001b94e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001b94eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B952:
    /* 0001b952   4  sub.w (e6c,A4),D1 */
    c->pc = RC_ADDR(0x0001b952u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1B956:
    /* 0001b956   2  subq.w #6,D1 */
    c->pc = RC_ADDR(0x0001b956u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000006u;
    rc_flags_sub(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1B958:
    /* 0001b958   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001b958u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B95A:
    /* 0001b95a   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001b95au);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001b95eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1B95E:
    /* 0001b95e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001b95eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B960:
    /* 0001b960   4  bra 0001ba72 */
    c->pc = RC_ADDR(0x0001b960u);
    rc_step(c, m, 10);
    goto L_1BA72;

L_1B964:
    /* 0001b964   4  move.w (e76,A4),D0 */
    c->pc = RC_ADDR(0x0001b964u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B968:
    /* 0001b968   4  sub.w (e6c,A4),D0 */
    c->pc = RC_ADDR(0x0001b968u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B96C:
    /* 0001b96c   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001b96cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B970:
    /* 0001b970   4  move.w (e78,A4),D0 */
    c->pc = RC_ADDR(0x0001b970u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B974:
    /* 0001b974   4  sub.w (e6e,A4),D0 */
    c->pc = RC_ADDR(0x0001b974u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B978:
    /* 0001b978   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001b978u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B97C:
    /* 0001b97c   4  move.w (e74,A4),D0 */
    c->pc = RC_ADDR(0x0001b97cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe74u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B980:
    /* 0001b980   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b980u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B982:
    /* 0001b982   4  bra 0001ba60 */
    c->pc = RC_ADDR(0x0001b982u);
    rc_step(c, m, 10);
    goto L_1BA60;

L_1B986:
    /* 0001b986   4  move.w (e86,A4),D0 */
    c->pc = RC_ADDR(0x0001b986u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe86u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B98A:
    /* 0001b98a   4  muls.w #5,D0 */
    c->pc = RC_ADDR(0x0001b98au);
    rc_step(c, m, 42);
    t0 = 0x00000005u;
    rc_muls(c, 0, t0);

L_1B98E:
    /* 0001b98e   4  add.w (e7e,A4),D0 */
    c->pc = RC_ADDR(0x0001b98eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B992:
    /* 0001b992   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b992u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B994:
    /* 0001b994   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001b994u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1B996:
    /* 0001b996   4  lea (114c,A4),A0 */
    c->pc = RC_ADDR(0x0001b996u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x114cu);

L_1B99A:
    /* 0001b99a   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001b99au);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B99E:
    /* 0001b99e   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001b99eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B9A2:
    /* 0001b9a2   2  subq.w #7,D0 */
    c->pc = RC_ADDR(0x0001b9a2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_W, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B9A4:
    /* 0001b9a4   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001b9a4u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B9A6:
    /* 0001b9a6   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001b9a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B9AA:
    /* 0001b9aa   2  subq.w #6,D0 */
    c->pc = RC_ADDR(0x0001b9aau);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000006u;
    rc_flags_sub(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B9AC:
    /* 0001b9ac   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001b9acu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B9AE:
    /* 0001b9ae   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001b9aeu);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001b9b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1B9B2:
    /* 0001b9b2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001b9b2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B9B4:
    /* 0001b9b4   4  bra 0001ba72 */
    c->pc = RC_ADDR(0x0001b9b4u);
    rc_step(c, m, 10);
    goto L_1BA72;

L_1B9B8:
    /* 0001b9b8   4  move.w (e86,A4),D0 */
    c->pc = RC_ADDR(0x0001b9b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe86u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B9BC:
    /* 0001b9bc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b9bcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B9BE:
    /* 0001b9be   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001b9beu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1B9C0:
    /* 0001b9c0   4  lea (29f2,A4),A0 */
    c->pc = RC_ADDR(0x0001b9c0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x29f2u);

L_1B9C4:
    /* 0001b9c4   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001b9c4u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B9C8:
    /* 0001b9c8   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001b9c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B9CC:
    /* 0001b9cc   2  subq.w #7,D0 */
    c->pc = RC_ADDR(0x0001b9ccu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_W, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B9CE:
    /* 0001b9ce   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001b9ceu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B9D0:
    /* 0001b9d0   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001b9d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B9D4:
    /* 0001b9d4   4  sub.w #a,D0 */
    c->pc = RC_ADDR(0x0001b9d4u);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B9D8:
    /* 0001b9d8   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001b9d8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B9DA:
    /* 0001b9da   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001b9dau);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001b9deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1B9DE:
    /* 0001b9de   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001b9deu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B9E0:
    /* 0001b9e0   4  tst.w (ffffb250,A4) */
    c->pc = RC_ADDR(0x0001b9e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_set_nzvc(c, t0, RC_W);

L_1B9E4:
    /* 0001b9e4   2  beq 0001ba1a */
    c->pc = RC_ADDR(0x0001b9e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1BA1A;

L_1B9E6:
    /* 0001b9e6   4  move.w (e88,A4),D0 */
    c->pc = RC_ADDR(0x0001b9e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe88u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B9EA:
    /* 0001b9ea   4  and.w #7,D0 */
    c->pc = RC_ADDR(0x0001b9eau);
    rc_step(c, m, 10);
    t0 = 0x00000007u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1B9EE:
    /* 0001b9ee   2  beq 0001ba1a */
    c->pc = RC_ADDR(0x0001b9eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1BA1A;

L_1B9F0:
    /* 0001b9f0   4  move.w (e86,A4),D0 */
    c->pc = RC_ADDR(0x0001b9f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe86u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B9F4:
    /* 0001b9f4   2  addq.w #8,D0 */
    c->pc = RC_ADDR(0x0001b9f4u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B9F6:
    /* 0001b9f6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b9f6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B9F8:
    /* 0001b9f8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001b9f8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1B9FA:
    /* 0001b9fa   4  lea (29f2,A4),A0 */
    c->pc = RC_ADDR(0x0001b9fau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x29f2u);

L_1B9FE:
    /* 0001b9fe   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001b9feu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BA02:
    /* 0001ba02   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001ba02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BA06:
    /* 0001ba06   2  subq.w #7,D0 */
    c->pc = RC_ADDR(0x0001ba06u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_W, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BA08:
    /* 0001ba08   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001ba08u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BA0A:
    /* 0001ba0a   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001ba0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BA0E:
    /* 0001ba0e   4  sub.w #a,D0 */
    c->pc = RC_ADDR(0x0001ba0eu);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BA12:
    /* 0001ba12   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001ba12u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BA14:
    /* 0001ba14   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001ba14u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001ba18u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1BA18:
    /* 0001ba18   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001ba18u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BA1A:
    /* 0001ba1a   4  addq.w #1,(e88,A4) */
    c->pc = RC_ADDR(0x0001ba1au);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe88u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1BA1E:
    /* 0001ba1e   2  bra 0001ba72 */
    c->pc = RC_ADDR(0x0001ba1eu);
    rc_step(c, m, 10);
    goto L_1BA72;

L_1BA20:
    /* 0001ba20   4  move.w (26e0,A4),D0 */
    c->pc = RC_ADDR(0x0001ba20u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26e0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BA24:
    /* 0001ba24   4  add.w (e7e,A4),D0 */
    c->pc = RC_ADDR(0x0001ba24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BA28:
    /* 0001ba28   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ba28u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1BA2A:
    /* 0001ba2a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001ba2au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1BA2C:
    /* 0001ba2c   4  lea (2996,A4),A0 */
    c->pc = RC_ADDR(0x0001ba2cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2996u);

L_1BA30:
    /* 0001ba30   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001ba30u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BA34:
    /* 0001ba34   4  move.w (26dc,A4),D0 */
    c->pc = RC_ADDR(0x0001ba34u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26dcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BA38:
    /* 0001ba38   4  sub.w (e6e,A4),D0 */
    c->pc = RC_ADDR(0x0001ba38u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BA3C:
    /* 0001ba3c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001ba3cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BA3E:
    /* 0001ba3e   4  move.w (26da,A4),D0 */
    c->pc = RC_ADDR(0x0001ba3eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26dau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BA42:
    /* 0001ba42   4  sub.w (e6c,A4),D0 */
    c->pc = RC_ADDR(0x0001ba42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1BA46:
    /* 0001ba46   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001ba46u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BA48:
    /* 0001ba48   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001ba48u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001ba4cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1BA4C:
    /* 0001ba4c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001ba4cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BA4E:
    /* 0001ba4e   2  bra 0001ba72 */
    c->pc = RC_ADDR(0x0001ba4eu);
    rc_step(c, m, 10);
    goto L_1BA72;

L_1BA60:
    /* 0001ba60   6  cmp.l #8,D0 */
    c->pc = RC_ADDR(0x0001ba60u);
    rc_step(c, m, 14);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1BA66:
    /* 0001ba66   2  bcc 0001ba72 */
    c->pc = RC_ADDR(0x0001ba66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1BA72;

L_1BA68:
    /* 0001ba68   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001ba68u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BA6A:
    /* 0001ba6a   4  move.w (0001ba50),D0 */
    c->pc = RC_ADDR(0x0001ba6au);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0001ba50u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BA6E:
    /* 0001ba6e   4  jmp (0001ba70) */
    c->pc = RC_ADDR(0x0001ba6eu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0001ba70u) + t4);
    c->pc = t3;
    return;

L_1BA72:
    /* 0001ba72   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001ba72u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1BA76:
    /* 0001ba76   8  cmpi.l #d,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001ba76u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x0000000du);

L_1BA7E:
    /* 0001ba7e   4  blt 0001b910 */
    c->pc = RC_ADDR(0x0001ba7eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1B910; }

L_1BA82:
    /* 0001ba82   2  unlk A5 */
    c->pc = RC_ADDR(0x0001ba82u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BA84:
    /* 0001ba84   2  rts */
    c->pc = RC_ADDR(0x0001ba84u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
