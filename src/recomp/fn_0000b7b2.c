/* fn_0000b7b2 - 458 byte(s), 143 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b7b2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0000b7b2u: goto L_B7B2;
    case 0x0000b7b6u: goto L_B7B6;
    case 0x0000b7bau: goto L_B7BA;
    case 0x0000b7beu: goto L_B7BE;
    case 0x0000b7c2u: goto L_B7C2;
    case 0x0000b7c4u: goto L_B7C4;
    case 0x0000b7c8u: goto L_B7C8;
    case 0x0000b7ccu: goto L_B7CC;
    case 0x0000b7d0u: goto L_B7D0;
    case 0x0000b7d2u: goto L_B7D2;
    case 0x0000b7d4u: goto L_B7D4;
    case 0x0000b7d8u: goto L_B7D8;
    case 0x0000b7dcu: goto L_B7DC;
    case 0x0000b7e0u: goto L_B7E0;
    case 0x0000b7e4u: goto L_B7E4;
    case 0x0000b7e8u: goto L_B7E8;
    case 0x0000b7eau: goto L_B7EA;
    case 0x0000b7ecu: goto L_B7EC;
    case 0x0000b7eeu: goto L_B7EE;
    case 0x0000b7f0u: goto L_B7F0;
    case 0x0000b7f4u: goto L_B7F4;
    case 0x0000b7f8u: goto L_B7F8;
    case 0x0000b7fau: goto L_B7FA;
    case 0x0000b7fcu: goto L_B7FC;
    case 0x0000b7feu: goto L_B7FE;
    case 0x0000b800u: goto L_B800;
    case 0x0000b802u: goto L_B802;
    case 0x0000b806u: goto L_B806;
    case 0x0000b80au: goto L_B80A;
    case 0x0000b80cu: goto L_B80C;
    case 0x0000b80eu: goto L_B80E;
    case 0x0000b810u: goto L_B810;
    case 0x0000b814u: goto L_B814;
    case 0x0000b81au: goto L_B81A;
    case 0x0000b81cu: goto L_B81C;
    case 0x0000b81eu: goto L_B81E;
    case 0x0000b822u: goto L_B822;
    case 0x0000b828u: goto L_B828;
    case 0x0000b82cu: goto L_B82C;
    case 0x0000b82eu: goto L_B82E;
    case 0x0000b830u: goto L_B830;
    case 0x0000b834u: goto L_B834;
    case 0x0000b838u: goto L_B838;
    case 0x0000b83au: goto L_B83A;
    case 0x0000b83cu: goto L_B83C;
    case 0x0000b840u: goto L_B840;
    case 0x0000b844u: goto L_B844;
    case 0x0000b846u: goto L_B846;
    case 0x0000b84au: goto L_B84A;
    case 0x0000b84eu: goto L_B84E;
    case 0x0000b852u: goto L_B852;
    case 0x0000b856u: goto L_B856;
    case 0x0000b858u: goto L_B858;
    case 0x0000b85au: goto L_B85A;
    case 0x0000b860u: goto L_B860;
    case 0x0000b862u: goto L_B862;
    case 0x0000b866u: goto L_B866;
    case 0x0000b86cu: goto L_B86C;
    case 0x0000b86eu: goto L_B86E;
    case 0x0000b870u: goto L_B870;
    case 0x0000b872u: goto L_B872;
    case 0x0000b876u: goto L_B876;
    case 0x0000b87au: goto L_B87A;
    case 0x0000b87eu: goto L_B87E;
    case 0x0000b880u: goto L_B880;
    case 0x0000b882u: goto L_B882;
    case 0x0000b886u: goto L_B886;
    case 0x0000b88au: goto L_B88A;
    case 0x0000b88eu: goto L_B88E;
    case 0x0000b892u: goto L_B892;
    case 0x0000b894u: goto L_B894;
    case 0x0000b896u: goto L_B896;
    case 0x0000b89au: goto L_B89A;
    case 0x0000b89eu: goto L_B89E;
    case 0x0000b8a2u: goto L_B8A2;
    case 0x0000b8a4u: goto L_B8A4;
    case 0x0000b8a8u: goto L_B8A8;
    case 0x0000b8aau: goto L_B8AA;
    case 0x0000b8acu: goto L_B8AC;
    case 0x0000b8aeu: goto L_B8AE;
    case 0x0000b8b2u: goto L_B8B2;
    case 0x0000b8b6u: goto L_B8B6;
    case 0x0000b8b8u: goto L_B8B8;
    case 0x0000b8bau: goto L_B8BA;
    case 0x0000b8beu: goto L_B8BE;
    case 0x0000b8c2u: goto L_B8C2;
    case 0x0000b8c6u: goto L_B8C6;
    case 0x0000b8cau: goto L_B8CA;
    case 0x0000b8ccu: goto L_B8CC;
    case 0x0000b8ceu: goto L_B8CE;
    case 0x0000b8d0u: goto L_B8D0;
    case 0x0000b8d4u: goto L_B8D4;
    case 0x0000b8d6u: goto L_B8D6;
    case 0x0000b8d8u: goto L_B8D8;
    case 0x0000b8dcu: goto L_B8DC;
    case 0x0000b8e0u: goto L_B8E0;
    case 0x0000b8e4u: goto L_B8E4;
    case 0x0000b8e6u: goto L_B8E6;
    case 0x0000b8e8u: goto L_B8E8;
    case 0x0000b8eau: goto L_B8EA;
    case 0x0000b8eeu: goto L_B8EE;
    case 0x0000b8f2u: goto L_B8F2;
    case 0x0000b8f6u: goto L_B8F6;
    case 0x0000b8f8u: goto L_B8F8;
    case 0x0000b8fau: goto L_B8FA;
    case 0x0000b8feu: goto L_B8FE;
    case 0x0000b902u: goto L_B902;
    case 0x0000b904u: goto L_B904;
    case 0x0000b906u: goto L_B906;
    case 0x0000b90au: goto L_B90A;
    case 0x0000b90eu: goto L_B90E;
    case 0x0000b910u: goto L_B910;
    case 0x0000b912u: goto L_B912;
    case 0x0000b914u: goto L_B914;
    case 0x0000b918u: goto L_B918;
    case 0x0000b91cu: goto L_B91C;
    case 0x0000b91eu: goto L_B91E;
    case 0x0000b920u: goto L_B920;
    case 0x0000b924u: goto L_B924;
    case 0x0000b928u: goto L_B928;
    case 0x0000b92cu: goto L_B92C;
    case 0x0000b930u: goto L_B930;
    case 0x0000b934u: goto L_B934;
    case 0x0000b936u: goto L_B936;
    case 0x0000b938u: goto L_B938;
    case 0x0000b93cu: goto L_B93C;
    case 0x0000b940u: goto L_B940;
    case 0x0000b942u: goto L_B942;
    case 0x0000b944u: goto L_B944;
    case 0x0000b948u: goto L_B948;
    case 0x0000b94au: goto L_B94A;
    case 0x0000b94cu: goto L_B94C;
    case 0x0000b950u: goto L_B950;
    case 0x0000b956u: goto L_B956;
    case 0x0000b958u: goto L_B958;
    case 0x0000b95eu: goto L_B95E;
    case 0x0000b962u: goto L_B962;
    case 0x0000b968u: goto L_B968;
    case 0x0000b96au: goto L_B96A;
    case 0x0000b970u: goto L_B970;
    case 0x0000b974u: goto L_B974;
    case 0x0000b978u: goto L_B978;
    case 0x0000b97au: goto L_B97A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B7B2:
    /* 0000b7b2   4  link.w A5,#0 */
    c->pc = 0x0000b7b2u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B7B6:
    /* 0000b7b6   4  movem.l { A2 A3 },-(SP) */
    c->pc = 0x0000b7b6u;
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_B7BA:
    /* 0000b7ba   4  move.w (462,A4),D0 */
    c->pc = 0x0000b7bau;
    t0 = rc_rd16(c, m, (c->a[4] + 0x462u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B7BE:
    /* 0000b7be   4  subq.w #1,(462,A4) */
    c->pc = 0x0000b7beu;
    t3 = (c->a[4] + 0x462u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_B7C2:
    /* 0000b7c2   2  tst.w D0 */
    c->pc = 0x0000b7c2u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_B7C4:
    /* 0000b7c4   4  bne 0000b862 */
    c->pc = 0x0000b7c4u;
    if (rc_cond(c, 6)) goto L_B862;

L_B7C8:
    /* 0000b7c8   4  move.w #10,-(A7) */
    c->pc = 0x0000b7c8u;
    t0 = 0x00000010u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B7CC:
    /* 0000b7cc   4  jsr (ffff8248,A4) */
    c->pc = 0x0000b7ccu;
    /* vector 97 */
    rc_push32(c, m, 0x0000b7d0u);
    rc_depth++;
    c->pc = 0x0001ec06u;
    return;

L_B7D0:
    /* 0000b7d0   2  addq.w #2,A7 */
    c->pc = 0x0000b7d0u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_B7D2:
    /* 0000b7d2   2  addq.w #4,D0 */
    c->pc = 0x0000b7d2u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_W, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_B7D4:
    /* 0000b7d4   4  move.w D0,(462,A4) */
    c->pc = 0x0000b7d4u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x462u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B7D8:
    /* 0000b7d8   4  tst.w (26a,A4) */
    c->pc = 0x0000b7d8u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x26au));
    rc_set_nzvc(c, t0, RC_W);

L_B7DC:
    /* 0000b7dc   4  bne 0000b862 */
    c->pc = 0x0000b7dcu;
    if (rc_cond(c, 6)) goto L_B862;

L_B7E0:
    /* 0000b7e0   4  move.w #4,-(A7) */
    c->pc = 0x0000b7e0u;
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B7E4:
    /* 0000b7e4   4  jsr (ffff8248,A4) */
    c->pc = 0x0000b7e4u;
    /* vector 97 */
    rc_push32(c, m, 0x0000b7e8u);
    rc_depth++;
    c->pc = 0x0001ec06u;
    return;

L_B7E8:
    /* 0000b7e8   2  addq.w #2,A7 */
    c->pc = 0x0000b7e8u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_B7EA:
    /* 0000b7ea   2  tst.w D0 */
    c->pc = 0x0000b7eau;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_B7EC:
    /* 0000b7ec   2  bne 0000b862 */
    c->pc = 0x0000b7ecu;
    if (rc_cond(c, 6)) goto L_B862;

L_B7EE:
    /* 0000b7ee   2  moveq #0,D5 */
    c->pc = 0x0000b7eeu;
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_B7F0:
    /* 0000b7f0   4  move.w #8,-(A7) */
    c->pc = 0x0000b7f0u;
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B7F4:
    /* 0000b7f4   4  jsr (ffff8248,A4) */
    c->pc = 0x0000b7f4u;
    /* vector 97 */
    rc_push32(c, m, 0x0000b7f8u);
    rc_depth++;
    c->pc = 0x0001ec06u;
    return;

L_B7F8:
    /* 0000b7f8   2  addq.w #2,A7 */
    c->pc = 0x0000b7f8u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_B7FA:
    /* 0000b7fa   2  ext.l D0 */
    c->pc = 0x0000b7fau;
    rc_ext_l(c, 0);

L_B7FC:
    /* 0000b7fc   2  move.l D0,D4 */
    c->pc = 0x0000b7fcu;
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B7FE:
    /* 0000b7fe   2  move.l D4,D0 */
    c->pc = 0x0000b7feu;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B800:
    /* 0000b800   2  asl.l #1,D0 */
    c->pc = 0x0000b800u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B802:
    /* 0000b802   4  lea (432,A4),A0 */
    c->pc = 0x0000b802u;
    c->a[0] = (c->a[4] + 0x432u);

L_B806:
    /* 0000b806   4  tst.w (0,A0,D0.w) */
    c->pc = 0x0000b806u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_B80A:
    /* 0000b80a   2  bne 0000b858 */
    c->pc = 0x0000b80au;
    if (rc_cond(c, 6)) goto L_B858;

L_B80C:
    /* 0000b80c   2  move.l D4,D0 */
    c->pc = 0x0000b80cu;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B80E:
    /* 0000b80e   2  asl.l #1,D0 */
    c->pc = 0x0000b80eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B810:
    /* 0000b810   4  lea (432,A4),A0 */
    c->pc = 0x0000b810u;
    c->a[0] = (c->a[4] + 0x432u);

L_B814:
    /* 0000b814   6  move.w #1,(0,A0,D0.w) */
    c->pc = 0x0000b814u;
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B81A:
    /* 0000b81a   2  move.l D4,D0 */
    c->pc = 0x0000b81au;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B81C:
    /* 0000b81c   2  asl.l #1,D0 */
    c->pc = 0x0000b81cu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B81E:
    /* 0000b81e   4  lea (442,A4),A0 */
    c->pc = 0x0000b81eu;
    c->a[0] = (c->a[4] + 0x442u);

L_B822:
    /* 0000b822   6  move.w #1,(0,A0,D0.w) */
    c->pc = 0x0000b822u;
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B828:
    /* 0000b828   4  move.w #a,-(A7) */
    c->pc = 0x0000b828u;
    t0 = 0x0000000au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B82C:
    /* 0000b82c   2  move.l D4,D0 */
    c->pc = 0x0000b82cu;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B82E:
    /* 0000b82e   2  asl.l #1,D0 */
    c->pc = 0x0000b82eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B830:
    /* 0000b830   4  lea (ffff96cc,A4),A0 */
    c->pc = 0x0000b830u;
    c->a[0] = (c->a[4] - 0x6934u);

L_B834:
    /* 0000b834   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = 0x0000b834u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B838:
    /* 0000b838   2  move.l D4,D0 */
    c->pc = 0x0000b838u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B83A:
    /* 0000b83a   2  asl.l #1,D0 */
    c->pc = 0x0000b83au;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B83C:
    /* 0000b83c   4  lea (ffff96bc,A4),A0 */
    c->pc = 0x0000b83cu;
    c->a[0] = (c->a[4] - 0x6944u);

L_B840:
    /* 0000b840   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = 0x0000b840u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B844:
    /* 0000b844   2  move.w D4,-(A7) */
    c->pc = 0x0000b844u;
    t0 = rc_d_get(c, 4, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B846:
    /* 0000b846   4  move.l (41c,A4),-(A7) */
    c->pc = 0x0000b846u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x41cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B84A:
    /* 0000b84a   4  move.w #1,-(A7) */
    c->pc = 0x0000b84au;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B84E:
    /* 0000b84e   4  jsr (ffff8272,A4) */
    c->pc = 0x0000b84eu;
    /* vector 104 */
    rc_push32(c, m, 0x0000b852u);
    rc_depth++;
    c->pc = 0x0001f914u;
    return;

L_B852:
    /* 0000b852   4  lea (e,A7),A7 */
    c->pc = 0x0000b852u;
    c->a[7] = (c->a[7] + 0xeu);

L_B856:
    /* 0000b856   2  bra 0000b862 */
    c->pc = 0x0000b856u;
    goto L_B862;

L_B858:
    /* 0000b858   2  addq.l #1,D5 */
    c->pc = 0x0000b858u;
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_B85A:
    /* 0000b85a   6  cmp.l #a,D5 */
    c->pc = 0x0000b85au;
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_B860:
    /* 0000b860   2  blt 0000b7f0 */
    c->pc = 0x0000b860u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_B7F0; }

L_B862:
    /* 0000b862   4  clr.w (430,A4) */
    c->pc = 0x0000b862u;
    rc_wr16(c, m, (c->a[4] + 0x430u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B866:
    /* 0000b866   6  move.w #1,(26a,A4) */
    c->pc = 0x0000b866u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x26au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B86C:
    /* 0000b86c   2  moveq #0,D4 */
    c->pc = 0x0000b86cu;
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_B86E:
    /* 0000b86e   2  move.l D4,D0 */
    c->pc = 0x0000b86eu;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B870:
    /* 0000b870   2  asl.l #1,D0 */
    c->pc = 0x0000b870u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B872:
    /* 0000b872   4  lea (432,A4),A0 */
    c->pc = 0x0000b872u;
    c->a[0] = (c->a[4] + 0x432u);

L_B876:
    /* 0000b876   4  tst.w (0,A0,D0.w) */
    c->pc = 0x0000b876u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_B87A:
    /* 0000b87a   4  beq 0000b956 */
    c->pc = 0x0000b87au;
    if (rc_cond(c, 7)) goto L_B956;

L_B87E:
    /* 0000b87e   2  move.l D4,D0 */
    c->pc = 0x0000b87eu;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B880:
    /* 0000b880   2  asl.l #1,D0 */
    c->pc = 0x0000b880u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B882:
    /* 0000b882   4  lea (442,A4),A0 */
    c->pc = 0x0000b882u;
    c->a[0] = (c->a[4] + 0x442u);

L_B886:
    /* 0000b886   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000b886u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B88A:
    /* 0000b88a   4  add.w D1,(430,A4) */
    c->pc = 0x0000b88au;
    t3 = (c->a[4] + 0x430u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_B88E:
    /* 0000b88e   4  clr.w (26a,A4) */
    c->pc = 0x0000b88eu;
    rc_wr16(c, m, (c->a[4] + 0x26au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B892:
    /* 0000b892   2  move.l D4,D0 */
    c->pc = 0x0000b892u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B894:
    /* 0000b894   2  asl.l #1,D0 */
    c->pc = 0x0000b894u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B896:
    /* 0000b896   4  lea (452,A4),A0 */
    c->pc = 0x0000b896u;
    c->a[0] = (c->a[4] + 0x452u);

L_B89A:
    /* 0000b89a   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000b89au;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B89E:
    /* 0000b89e   4  subq.w #1,(0,A0,D0.w) */
    c->pc = 0x0000b89eu;
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_B8A2:
    /* 0000b8a2   2  tst.w D1 */
    c->pc = 0x0000b8a2u;
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_B8A4:
    /* 0000b8a4   4  bne 0000b956 */
    c->pc = 0x0000b8a4u;
    if (rc_cond(c, 6)) goto L_B956;

L_B8A8:
    /* 0000b8a8   2  move.w D4,-(A7) */
    c->pc = 0x0000b8a8u;
    t0 = rc_d_get(c, 4, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B8AA:
    /* 0000b8aa   2  move.l D4,D0 */
    c->pc = 0x0000b8aau;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B8AC:
    /* 0000b8ac   2  asl.l #1,D0 */
    c->pc = 0x0000b8acu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B8AE:
    /* 0000b8ae   4  lea (442,A4),A0 */
    c->pc = 0x0000b8aeu;
    c->a[0] = (c->a[4] + 0x442u);

L_B8B2:
    /* 0000b8b2   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000b8b2u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B8B6:
    /* 0000b8b6   2  ext.l D1 */
    c->pc = 0x0000b8b6u;
    rc_ext_l(c, 1);

L_B8B8:
    /* 0000b8b8   2  asl.l #2,D1 */
    c->pc = 0x0000b8b8u;
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_B8BA:
    /* 0000b8ba   4  lea (418,A4),A0 */
    c->pc = 0x0000b8bau;
    c->a[0] = (c->a[4] + 0x418u);

L_B8BE:
    /* 0000b8be   4  move.l (0,A0,D1.w),-(A7) */
    c->pc = 0x0000b8beu;
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B8C2:
    /* 0000b8c2   4  move.w #2,-(A7) */
    c->pc = 0x0000b8c2u;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B8C6:
    /* 0000b8c6   4  jsr (ffff8266,A4) */
    c->pc = 0x0000b8c6u;
    /* vector 102 */
    rc_push32(c, m, 0x0000b8cau);
    rc_depth++;
    c->pc = 0x0001f2aeu;
    return;

L_B8CA:
    /* 0000b8ca   2  addq.w #8,A7 */
    c->pc = 0x0000b8cau;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B8CC:
    /* 0000b8cc   2  move.l D4,D0 */
    c->pc = 0x0000b8ccu;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B8CE:
    /* 0000b8ce   2  asl.l #1,D0 */
    c->pc = 0x0000b8ceu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B8D0:
    /* 0000b8d0   4  lea (442,A4),A0 */
    c->pc = 0x0000b8d0u;
    c->a[0] = (c->a[4] + 0x442u);

L_B8D4:
    /* 0000b8d4   2  move.l D4,D1 */
    c->pc = 0x0000b8d4u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B8D6:
    /* 0000b8d6   2  asl.l #1,D1 */
    c->pc = 0x0000b8d6u;
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_B8D8:
    /* 0000b8d8   4  lea (ffff96dc,A4),A1 */
    c->pc = 0x0000b8d8u;
    c->a[1] = (c->a[4] - 0x6924u);

L_B8DC:
    /* 0000b8dc   4  move.w (0,A0,D0.w),D2 */
    c->pc = 0x0000b8dcu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B8E0:
    /* 0000b8e0   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = 0x0000b8e0u;
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_B8E4:
    /* 0000b8e4   2  bge 0000b8f2 */
    c->pc = 0x0000b8e4u;
    if (rc_cond(c, 12)) goto L_B8F2;

L_B8E6:
    /* 0000b8e6   2  move.l D4,D0 */
    c->pc = 0x0000b8e6u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B8E8:
    /* 0000b8e8   2  asl.l #1,D0 */
    c->pc = 0x0000b8e8u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B8EA:
    /* 0000b8ea   4  lea (442,A4),A0 */
    c->pc = 0x0000b8eau;
    c->a[0] = (c->a[4] + 0x442u);

L_B8EE:
    /* 0000b8ee   4  addq.w #1,(0,A0,D0.w) */
    c->pc = 0x0000b8eeu;
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_B8F2:
    /* 0000b8f2   4  move.w #a,-(A7) */
    c->pc = 0x0000b8f2u;
    t0 = 0x0000000au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B8F6:
    /* 0000b8f6   2  move.l D4,D0 */
    c->pc = 0x0000b8f6u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B8F8:
    /* 0000b8f8   2  asl.l #1,D0 */
    c->pc = 0x0000b8f8u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B8FA:
    /* 0000b8fa   4  lea (ffff96cc,A4),A0 */
    c->pc = 0x0000b8fau;
    c->a[0] = (c->a[4] - 0x6934u);

L_B8FE:
    /* 0000b8fe   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = 0x0000b8feu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B902:
    /* 0000b902   2  move.l D4,D0 */
    c->pc = 0x0000b902u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B904:
    /* 0000b904   2  asl.l #1,D0 */
    c->pc = 0x0000b904u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B906:
    /* 0000b906   4  lea (ffff96bc,A4),A0 */
    c->pc = 0x0000b906u;
    c->a[0] = (c->a[4] - 0x6944u);

L_B90A:
    /* 0000b90a   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = 0x0000b90au;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B90E:
    /* 0000b90e   2  move.w D4,-(A7) */
    c->pc = 0x0000b90eu;
    t0 = rc_d_get(c, 4, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B910:
    /* 0000b910   2  move.l D4,D0 */
    c->pc = 0x0000b910u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B912:
    /* 0000b912   2  asl.l #1,D0 */
    c->pc = 0x0000b912u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B914:
    /* 0000b914   4  lea (442,A4),A0 */
    c->pc = 0x0000b914u;
    c->a[0] = (c->a[4] + 0x442u);

L_B918:
    /* 0000b918   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000b918u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B91C:
    /* 0000b91c   2  ext.l D1 */
    c->pc = 0x0000b91cu;
    rc_ext_l(c, 1);

L_B91E:
    /* 0000b91e   2  asl.l #2,D1 */
    c->pc = 0x0000b91eu;
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_B920:
    /* 0000b920   4  lea (418,A4),A0 */
    c->pc = 0x0000b920u;
    c->a[0] = (c->a[4] + 0x418u);

L_B924:
    /* 0000b924   4  move.l (0,A0,D1.w),-(A7) */
    c->pc = 0x0000b924u;
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B928:
    /* 0000b928   4  move.w #1,-(A7) */
    c->pc = 0x0000b928u;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B92C:
    /* 0000b92c   4  jsr (ffff8272,A4) */
    c->pc = 0x0000b92cu;
    /* vector 104 */
    rc_push32(c, m, 0x0000b930u);
    rc_depth++;
    c->pc = 0x0001f914u;
    return;

L_B930:
    /* 0000b930   4  lea (e,A7),A7 */
    c->pc = 0x0000b930u;
    c->a[7] = (c->a[7] + 0xeu);

L_B934:
    /* 0000b934   2  move.l D4,D0 */
    c->pc = 0x0000b934u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B936:
    /* 0000b936   2  asl.l #1,D0 */
    c->pc = 0x0000b936u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B938:
    /* 0000b938   4  lea (442,A4),A0 */
    c->pc = 0x0000b938u;
    c->a[0] = (c->a[4] + 0x442u);

L_B93C:
    /* 0000b93c   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000b93cu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B940:
    /* 0000b940   2  ext.l D1 */
    c->pc = 0x0000b940u;
    rc_ext_l(c, 1);

L_B942:
    /* 0000b942   2  asl.l #1,D1 */
    c->pc = 0x0000b942u;
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_B944:
    /* 0000b944   4  lea (ffff96ec,A4),A0 */
    c->pc = 0x0000b944u;
    c->a[0] = (c->a[4] - 0x6914u);

L_B948:
    /* 0000b948   2  move.l D4,D0 */
    c->pc = 0x0000b948u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_B94A:
    /* 0000b94a   2  asl.l #1,D0 */
    c->pc = 0x0000b94au;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B94C:
    /* 0000b94c   4  lea (452,A4),A1 */
    c->pc = 0x0000b94cu;
    c->a[1] = (c->a[4] + 0x452u);

L_B950:
    /* 0000b950   6  move.w (0,A0,D1.w),(0,A1,D0.w) */
    c->pc = 0x0000b950u;
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B956:
    /* 0000b956   2  addq.l #1,D4 */
    c->pc = 0x0000b956u;
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_B958:
    /* 0000b958   6  cmp.l #8,D4 */
    c->pc = 0x0000b958u;
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_B95E:
    /* 0000b95e   4  blt 0000b86e */
    c->pc = 0x0000b95eu;
    if (rc_cond(c, 13)) { rc_tick(); goto L_B86E; }

L_B962:
    /* 0000b962   6  cmpi.w #14,(430,A4) */
    c->pc = 0x0000b962u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x430u));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_B968:
    /* 0000b968   2  blt 0000b974 */
    c->pc = 0x0000b968u;
    if (rc_cond(c, 13)) goto L_B974;

L_B96A:
    /* 0000b96a   6  move.w #1,(26a,A4) */
    c->pc = 0x0000b96au;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x26au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B970:
    /* 0000b970   4  clr.w (fffffec8,A4) */
    c->pc = 0x0000b970u;
    rc_wr16(c, m, (c->a[4] - 0x138u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B974:
    /* 0000b974   4  movem.l (SP)+,{ D4 D5 } */
    c->pc = 0x0000b974u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_B978:
    /* 0000b978   2  unlk A5 */
    c->pc = 0x0000b978u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B97A:
    /* 0000b97a   2  rts */
    c->pc = 0x0000b97au;
    rc_ret(c, m);
    return;

}
