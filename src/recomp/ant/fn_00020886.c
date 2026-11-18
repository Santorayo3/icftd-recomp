/* fn_00020886 - 150 byte(s), 49 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00020886(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00020886u): goto L_20886;
    case RC_ADDR(0x0002088au): goto L_2088A;
    case RC_ADDR(0x0002088cu): goto L_2088C;
    case RC_ADDR(0x00020890u): goto L_20890;
    case RC_ADDR(0x00020894u): goto L_20894;
    case RC_ADDR(0x00020898u): goto L_20898;
    case RC_ADDR(0x0002089cu): goto L_2089C;
    case RC_ADDR(0x000208a0u): goto L_208A0;
    case RC_ADDR(0x000208a2u): goto L_208A2;
    case RC_ADDR(0x000208a4u): goto L_208A4;
    case RC_ADDR(0x000208a8u): goto L_208A8;
    case RC_ADDR(0x000208aau): goto L_208AA;
    case RC_ADDR(0x000208aeu): goto L_208AE;
    case RC_ADDR(0x000208b2u): goto L_208B2;
    case RC_ADDR(0x000208b6u): goto L_208B6;
    case RC_ADDR(0x000208bau): goto L_208BA;
    case RC_ADDR(0x000208bcu): goto L_208BC;
    case RC_ADDR(0x000208c0u): goto L_208C0;
    case RC_ADDR(0x000208c4u): goto L_208C4;
    case RC_ADDR(0x000208c6u): goto L_208C6;
    case RC_ADDR(0x000208c8u): goto L_208C8;
    case RC_ADDR(0x000208ccu): goto L_208CC;
    case RC_ADDR(0x000208d0u): goto L_208D0;
    case RC_ADDR(0x000208d4u): goto L_208D4;
    case RC_ADDR(0x000208d6u): goto L_208D6;
    case RC_ADDR(0x000208dau): goto L_208DA;
    case RC_ADDR(0x000208deu): goto L_208DE;
    case RC_ADDR(0x000208e0u): goto L_208E0;
    case RC_ADDR(0x000208e2u): goto L_208E2;
    case RC_ADDR(0x000208e6u): goto L_208E6;
    case RC_ADDR(0x000208e8u): goto L_208E8;
    case RC_ADDR(0x000208eau): goto L_208EA;
    case RC_ADDR(0x000208ecu): goto L_208EC;
    case RC_ADDR(0x000208f0u): goto L_208F0;
    case RC_ADDR(0x000208f2u): goto L_208F2;
    case RC_ADDR(0x000208f4u): goto L_208F4;
    case RC_ADDR(0x000208f6u): goto L_208F6;
    case RC_ADDR(0x000208f8u): goto L_208F8;
    case RC_ADDR(0x000208fcu): goto L_208FC;
    case RC_ADDR(0x00020900u): goto L_20900;
    case RC_ADDR(0x00020902u): goto L_20902;
    case RC_ADDR(0x00020906u): goto L_20906;
    case RC_ADDR(0x00020908u): goto L_20908;
    case RC_ADDR(0x0002090cu): goto L_2090C;
    case RC_ADDR(0x00020910u): goto L_20910;
    case RC_ADDR(0x00020914u): goto L_20914;
    case RC_ADDR(0x00020916u): goto L_20916;
    case RC_ADDR(0x00020918u): goto L_20918;
    case RC_ADDR(0x0002091au): goto L_2091A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20886:
    /* 00020886   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00020886u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_2088A:
    /* 0002088a   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x0002088au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2088C:
    /* 0002088c   4  jsr (ffff813a,A4) */
    c->pc = RC_ADDR(0x0002088cu);
    rc_step(c, m, 18);
    /* vector 52 */
    rc_push32(c, m, RC_ADDR(0x00020890u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c30u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000105fcu);
    return;

L_20890:
    /* 00020890   4  jsr (000222e8) */
    c->pc = RC_ADDR(0x00020890u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020894u));
    rc_depth++;
    c->pc = RC_ADDR(0x000222e8u);
    return;

L_20894:
    /* 00020894   4  jsr (00022548) */
    c->pc = RC_ADDR(0x00020894u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020898u));
    rc_depth++;
    c->pc = RC_ADDR(0x00022548u);
    return;

L_20898:
    /* 00020898   4  pea (0002091c) */
    c->pc = RC_ADDR(0x00020898u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0002091cu));

L_2089C:
    /* 0002089c   4  jsr (ffff8332,A4) */
    c->pc = RC_ADDR(0x0002089cu);
    rc_step(c, m, 18);
    /* vector 136 */
    rc_push32(c, m, RC_ADDR(0x000208a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e28u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234ecu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000234f0u);
    return;

L_208A0:
    /* 000208a0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000208a0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_208A2:
    /* 000208a2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000208a2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_208A4:
    /* 000208a4   4  jsr (ffff831a,A4) */
    c->pc = RC_ADDR(0x000208a4u);
    rc_step(c, m, 18);
    /* vector 132 */
    rc_push32(c, m, RC_ADDR(0x000208a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e10u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234aeu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000234b2u);
    return;

L_208A8:
    /* 000208a8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000208a8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_208AA:
    /* 000208aa   4  move.l D0,(3448,A4) */
    c->pc = RC_ADDR(0x000208aau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3448u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_208AE:
    /* 000208ae   4  pea (00000021).l */
    c->pc = RC_ADDR(0x000208aeu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000021u);

L_208B2:
    /* 000208b2   4  pea (0002091d) */
    c->pc = RC_ADDR(0x000208b2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0002091du));

L_208B6:
    /* 000208b6   4  jsr (ffff836e,A4) */
    c->pc = RC_ADDR(0x000208b6u);
    rc_step(c, m, 18);
    /* vector 146 */
    rc_push32(c, m, RC_ADDR(0x000208bau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e64u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000237c2u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000237c6u);
    return;

L_208BA:
    /* 000208ba   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000208bau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_208BC:
    /* 000208bc   4  move.l D0,(ffffd324,A4) */
    c->pc = RC_ADDR(0x000208bcu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2cdcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_208C0:
    /* 000208c0   4  tst.l (ffffd324,A4) */
    c->pc = RC_ADDR(0x000208c0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    rc_set_nzvc(c, t0, RC_L);

L_208C4:
    /* 000208c4   2  bne 000208c8 */
    c->pc = RC_ADDR(0x000208c4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_208C8;

L_208C6:
    /* 000208c6   2  bsr 00020874 */
    c->pc = RC_ADDR(0x000208c6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000208c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020874u);
    return;

L_208C8:
    /* 000208c8   4  pea (00000021).l */
    c->pc = RC_ADDR(0x000208c8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000021u);

L_208CC:
    /* 000208cc   4  pea (0002092e) */
    c->pc = RC_ADDR(0x000208ccu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0002092eu));

L_208D0:
    /* 000208d0   4  jsr (ffff836e,A4) */
    c->pc = RC_ADDR(0x000208d0u);
    rc_step(c, m, 18);
    /* vector 146 */
    rc_push32(c, m, RC_ADDR(0x000208d4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e64u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000237c2u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000237c6u);
    return;

L_208D4:
    /* 000208d4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000208d4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_208D6:
    /* 000208d6   4  move.l D0,(ffffd32c,A4) */
    c->pc = RC_ADDR(0x000208d6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2cd4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_208DA:
    /* 000208da   4  tst.l (ffffd32c,A4) */
    c->pc = RC_ADDR(0x000208dau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cd4u));
    rc_set_nzvc(c, t0, RC_L);

L_208DE:
    /* 000208de   2  bne 000208e2 */
    c->pc = RC_ADDR(0x000208deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_208E2;

L_208E0:
    /* 000208e0   2  bsr 00020874 */
    c->pc = RC_ADDR(0x000208e0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000208e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020874u);
    return;

L_208E2:
    /* 000208e2   4  jsr (00020330) */
    c->pc = RC_ADDR(0x000208e2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000208e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020330u);
    return;

L_208E6:
    /* 000208e6   2  tst.w D0 */
    c->pc = RC_ADDR(0x000208e6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_208E8:
    /* 000208e8   2  bne 000208ec */
    c->pc = RC_ADDR(0x000208e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_208EC;

L_208EA:
    /* 000208ea   2  bsr 00020874 */
    c->pc = RC_ADDR(0x000208eau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000208ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020874u);
    return;

L_208EC:
    /* 000208ec   4  jsr (00020494) */
    c->pc = RC_ADDR(0x000208ecu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000208f0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020494u);
    return;

L_208F0:
    /* 000208f0   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x000208f0u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_208F2:
    /* 000208f2   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x000208f2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_208F4:
    /* 000208f4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000208f4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_208F6:
    /* 000208f6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000208f6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_208F8:
    /* 000208f8   4  lea (344c,A4),A0 */
    c->pc = RC_ADDR(0x000208f8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x344cu);

L_208FC:
    /* 000208fc   4  clr.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000208fcu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20900:
    /* 00020900   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x00020900u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_20902:
    /* 00020902   4  cmp.w #10,D4 */
    c->pc = RC_ADDR(0x00020902u);
    rc_step(c, m, 8);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20906:
    /* 00020906   2  blt 000208f2 */
    c->pc = RC_ADDR(0x00020906u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_208F2; }

L_20908:
    /* 00020908   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x00020908u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2090C:
    /* 0002090c   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0002090cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20910:
    /* 00020910   4  jsr (ffff8008,A4) */
    c->pc = RC_ADDR(0x00020910u);
    rc_step(c, m, 18);
    /* vector 1 */
    rc_push32(c, m, RC_ADDR(0x00020914u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023afeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000003f0u);
    return;

L_20914:
    /* 00020914   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00020914u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_20916:
    /* 00020916   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x00020916u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20918:
    /* 00020918   2  unlk A5 */
    c->pc = RC_ADDR(0x00020918u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2091A:
    /* 0002091a   2  rts */
    c->pc = RC_ADDR(0x0002091au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
