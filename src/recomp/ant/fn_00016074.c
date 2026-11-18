/* fn_00016074 - 180 byte(s), 50 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00016074(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00016074u): goto L_16074;
    case RC_ADDR(0x00016078u): goto L_16078;
    case RC_ADDR(0x0001607cu): goto L_1607C;
    case RC_ADDR(0x00016080u): goto L_16080;
    case RC_ADDR(0x00016082u): goto L_16082;
    case RC_ADDR(0x00016086u): goto L_16086;
    case RC_ADDR(0x0001608au): goto L_1608A;
    case RC_ADDR(0x0001608eu): goto L_1608E;
    case RC_ADDR(0x00016092u): goto L_16092;
    case RC_ADDR(0x00016096u): goto L_16096;
    case RC_ADDR(0x0001609au): goto L_1609A;
    case RC_ADDR(0x0001609eu): goto L_1609E;
    case RC_ADDR(0x000160a2u): goto L_160A2;
    case RC_ADDR(0x000160a4u): goto L_160A4;
    case RC_ADDR(0x000160a6u): goto L_160A6;
    case RC_ADDR(0x000160aau): goto L_160AA;
    case RC_ADDR(0x000160aeu): goto L_160AE;
    case RC_ADDR(0x000160b2u): goto L_160B2;
    case RC_ADDR(0x000160b6u): goto L_160B6;
    case RC_ADDR(0x000160bau): goto L_160BA;
    case RC_ADDR(0x000160bcu): goto L_160BC;
    case RC_ADDR(0x000160c0u): goto L_160C0;
    case RC_ADDR(0x000160c2u): goto L_160C2;
    case RC_ADDR(0x000160c6u): goto L_160C6;
    case RC_ADDR(0x000160c8u): goto L_160C8;
    case RC_ADDR(0x000160ccu): goto L_160CC;
    case RC_ADDR(0x000160d0u): goto L_160D0;
    case RC_ADDR(0x000160d2u): goto L_160D2;
    case RC_ADDR(0x000160d6u): goto L_160D6;
    case RC_ADDR(0x000160dau): goto L_160DA;
    case RC_ADDR(0x000160deu): goto L_160DE;
    case RC_ADDR(0x000160e0u): goto L_160E0;
    case RC_ADDR(0x000160e2u): goto L_160E2;
    case RC_ADDR(0x000160e6u): goto L_160E6;
    case RC_ADDR(0x000160eau): goto L_160EA;
    case RC_ADDR(0x000160ecu): goto L_160EC;
    case RC_ADDR(0x000160f0u): goto L_160F0;
    case RC_ADDR(0x000160f4u): goto L_160F4;
    case RC_ADDR(0x000160f8u): goto L_160F8;
    case RC_ADDR(0x000160fau): goto L_160FA;
    case RC_ADDR(0x000160fcu): goto L_160FC;
    case RC_ADDR(0x00016102u): goto L_16102;
    case RC_ADDR(0x00016108u): goto L_16108;
    case RC_ADDR(0x0001610cu): goto L_1610C;
    case RC_ADDR(0x00016112u): goto L_16112;
    case RC_ADDR(0x00016116u): goto L_16116;
    case RC_ADDR(0x0001611au): goto L_1611A;
    case RC_ADDR(0x00016120u): goto L_16120;
    case RC_ADDR(0x00016124u): goto L_16124;
    case RC_ADDR(0x00016126u): goto L_16126;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16074:
    /* 00016074   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00016074u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_16078:
    /* 00016078   4  move.w (1ad0,A4),D0 */
    c->pc = RC_ADDR(0x00016078u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ad0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1607C:
    /* 0001607c   4  sub.w (1148,A4),D0 */
    c->pc = RC_ADDR(0x0001607cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1148u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16080:
    /* 00016080   2  asl.w #4,D0 */
    c->pc = RC_ADDR(0x00016080u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_16082:
    /* 00016082   4  add.w (1ad4,A4),D0 */
    c->pc = RC_ADDR(0x00016082u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ad4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16086:
    /* 00016086   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016086u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1608A:
    /* 0001608a   4  move.w (1ad2,A4),D0 */
    c->pc = RC_ADDR(0x0001608au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ad2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1608E:
    /* 0001608e   4  sub.w (114a,A4),D0 */
    c->pc = RC_ADDR(0x0001608eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x114au));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16092:
    /* 00016092   4  mulu.w #a,D0 */
    c->pc = RC_ADDR(0x00016092u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_mulu(c, 0, t0);

L_16096:
    /* 00016096   4  add.w (1ad6,A4),D0 */
    c->pc = RC_ADDR(0x00016096u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ad6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1609A:
    /* 0001609a   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001609au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1609E:
    /* 0001609e   4  move.w (1ac4,A4),D0 */
    c->pc = RC_ADDR(0x0001609eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_160A2:
    /* 000160a2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000160a2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_160A4:
    /* 000160a4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000160a4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_160A6:
    /* 000160a6   4  lea (1ade,A4),A0 */
    c->pc = RC_ADDR(0x000160a6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1adeu);

L_160AA:
    /* 000160aa   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000160aau);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_160AE:
    /* 000160ae   4  move.w (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000160aeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_160B2:
    /* 000160b2   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x000160b2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_160B6:
    /* 000160b6   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x000160b6u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x000160bau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_160BA:
    /* 000160ba   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000160bau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_160BC:
    /* 000160bc   4  tst.w (6e8,A4) */
    c->pc = RC_ADDR(0x000160bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6e8u));
    rc_set_nzvc(c, t0, RC_W);

L_160C0:
    /* 000160c0   2  beq 00016124 */
    c->pc = RC_ADDR(0x000160c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16124;

L_160C2:
    /* 000160c2   4  tst.w (1adc,A4) */
    c->pc = RC_ADDR(0x000160c2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1adcu));
    rc_set_nzvc(c, t0, RC_W);

L_160C6:
    /* 000160c6   2  bne 00016124 */
    c->pc = RC_ADDR(0x000160c6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16124;

L_160C8:
    /* 000160c8   4  move.w (6fc,A4),D0 */
    c->pc = RC_ADDR(0x000160c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_160CC:
    /* 000160cc   4  cmp.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000160ccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_160D0:
    /* 000160d0   2  bls 00016124 */
    c->pc = RC_ADDR(0x000160d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_16124;

L_160D2:
    /* 000160d2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000160d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_160D6:
    /* 000160d6   4  add.w #16,D0 */
    c->pc = RC_ADDR(0x000160d6u);
    rc_step(c, m, 10);
    t0 = 0x00000016u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_160DA:
    /* 000160da   4  move.w (6fc,A4),D1 */
    c->pc = RC_ADDR(0x000160dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_160DE:
    /* 000160de   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000160deu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_160E0:
    /* 000160e0   2  bcc 00016124 */
    c->pc = RC_ADDR(0x000160e0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_16124;

L_160E2:
    /* 000160e2   4  move.w (6fe,A4),D0 */
    c->pc = RC_ADDR(0x000160e2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_160E6:
    /* 000160e6   4  cmp.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000160e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_160EA:
    /* 000160ea   2  bls 00016124 */
    c->pc = RC_ADDR(0x000160eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_16124;

L_160EC:
    /* 000160ec   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000160ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_160F0:
    /* 000160f0   4  add.w #16,D0 */
    c->pc = RC_ADDR(0x000160f0u);
    rc_step(c, m, 10);
    t0 = 0x00000016u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_160F4:
    /* 000160f4   4  move.w (6fe,A4),D1 */
    c->pc = RC_ADDR(0x000160f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_160F8:
    /* 000160f8   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000160f8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_160FA:
    /* 000160fa   2  bcc 00016124 */
    c->pc = RC_ADDR(0x000160fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_16124;

L_160FC:
    /* 000160fc   6  move.w (fffffffe,A5),(6fc,A4) */
    c->pc = RC_ADDR(0x000160fcu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[4] + 0x6fcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16102:
    /* 00016102   6  move.w (fffffffc,A5),(6fe,A4) */
    c->pc = RC_ADDR(0x00016102u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_wr16(c, m, (c->a[4] + 0x6feu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16108:
    /* 00016108   4  clr.w (6e8,A4) */
    c->pc = RC_ADDR(0x00016108u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6e8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1610C:
    /* 0001610c   6  move.w #3e8,(fffffa34,A4) */
    c->pc = RC_ADDR(0x0001610cu);
    rc_step(c, m, 16);
    t0 = 0x000003e8u;
    rc_wr16(c, m, (c->a[4] - 0x5ccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16112:
    /* 00016112   4  clr.w (fffffa30,A4) */
    c->pc = RC_ADDR(0x00016112u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16116:
    /* 00016116   4  clr.w (fffffa2e,A4) */
    c->pc = RC_ADDR(0x00016116u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1611A:
    /* 0001611a   6  move.w #1,(14f0,A4) */
    c->pc = RC_ADDR(0x0001611au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14f0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16120:
    /* 00016120   4  jsr (0001826a) */
    c->pc = RC_ADDR(0x00016120u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016124u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001826au);
    return;

L_16124:
    /* 00016124   2  unlk A5 */
    c->pc = RC_ADDR(0x00016124u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16126:
    /* 00016126   2  rts */
    c->pc = RC_ADDR(0x00016126u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
