/* fn_000117f8 - 220 byte(s), 57 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000117f8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x000117f8u: goto L_117F8;
    case 0x000117fcu: goto L_117FC;
    case 0x00011800u: goto L_11800;
    case 0x00011804u: goto L_11804;
    case 0x0001180au: goto L_1180A;
    case 0x0001180eu: goto L_1180E;
    case 0x00011812u: goto L_11812;
    case 0x00011816u: goto L_11816;
    case 0x0001181cu: goto L_1181C;
    case 0x00011820u: goto L_11820;
    case 0x00011824u: goto L_11824;
    case 0x00011828u: goto L_11828;
    case 0x0001182cu: goto L_1182C;
    case 0x0001182eu: goto L_1182E;
    case 0x00011830u: goto L_11830;
    case 0x00011836u: goto L_11836;
    case 0x0001183au: goto L_1183A;
    case 0x0001183cu: goto L_1183C;
    case 0x00011842u: goto L_11842;
    case 0x0001184au: goto L_1184A;
    case 0x00011850u: goto L_11850;
    case 0x00011858u: goto L_11858;
    case 0x00011860u: goto L_11860;
    case 0x00011864u: goto L_11864;
    case 0x00011866u: goto L_11866;
    case 0x0001186au: goto L_1186A;
    case 0x0001186cu: goto L_1186C;
    case 0x0001186eu: goto L_1186E;
    case 0x00011872u: goto L_11872;
    case 0x00011874u: goto L_11874;
    case 0x00011878u: goto L_11878;
    case 0x0001187cu: goto L_1187C;
    case 0x00011880u: goto L_11880;
    case 0x00011882u: goto L_11882;
    case 0x00011884u: goto L_11884;
    case 0x00011888u: goto L_11888;
    case 0x0001188au: goto L_1188A;
    case 0x0001188eu: goto L_1188E;
    case 0x00011890u: goto L_11890;
    case 0x00011892u: goto L_11892;
    case 0x00011896u: goto L_11896;
    case 0x00011898u: goto L_11898;
    case 0x0001189cu: goto L_1189C;
    case 0x000118a0u: goto L_118A0;
    case 0x000118a4u: goto L_118A4;
    case 0x000118a6u: goto L_118A6;
    case 0x000118acu: goto L_118AC;
    case 0x000118aeu: goto L_118AE;
    case 0x000118b4u: goto L_118B4;
    case 0x000118bau: goto L_118BA;
    case 0x000118c2u: goto L_118C2;
    case 0x000118c4u: goto L_118C4;
    case 0x000118c6u: goto L_118C6;
    case 0x000118c8u: goto L_118C8;
    case 0x000118ccu: goto L_118CC;
    case 0x000118d0u: goto L_118D0;
    case 0x000118d2u: goto L_118D2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_117F8:
    /* 000117f8   4  link.w A5,#0 */
    c->pc = 0x000117f8u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_117FC:
    /* 000117fc   4  tst.w (8,A5) */
    c->pc = 0x000117fcu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_11800:
    /* 00011800   4  bmi 000118d0 */
    c->pc = 0x00011800u;
    if (rc_cond(c, 11)) goto L_118D0;

L_11804:
    /* 00011804   6  cmpi.w #130,(8,A5) */
    c->pc = 0x00011804u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000130u);

L_1180A:
    /* 0001180a   4  bgt 000118d0 */
    c->pc = 0x0001180au;
    if (rc_cond(c, 14)) goto L_118D0;

L_1180E:
    /* 0001180e   4  tst.w (a,A5) */
    c->pc = 0x0001180eu;
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_11812:
    /* 00011812   4  bmi 000118d0 */
    c->pc = 0x00011812u;
    if (rc_cond(c, 11)) goto L_118D0;

L_11816:
    /* 00011816   6  cmpi.w #be,(a,A5) */
    c->pc = 0x00011816u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_1181C:
    /* 0001181c   4  bgt 000118d0 */
    c->pc = 0x0001181cu;
    if (rc_cond(c, 14)) goto L_118D0;

L_11820:
    /* 00011820   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = 0x00011820u;
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_11824:
    /* 00011824   4  move.w #28,D0 */
    c->pc = 0x00011824u;
    t0 = 0x00000028u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11828:
    /* 00011828   4  move.w (fffff2ec,A4),D1 */
    c->pc = 0x00011828u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1182C:
    /* 0001182c   2  lsl.w #1,D1 */
    c->pc = 0x0001182cu;
    c->d[1] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_1182E:
    /* 0001182e   2  sub.w D1,D0 */
    c->pc = 0x0001182eu;
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11830:
    /* 00011830   6  move.w D0,(00dff066).l */
    c->pc = 0x00011830u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11836:
    /* 00011836   4  move.w (fffff2f4,A4),D0 */
    c->pc = 0x00011836u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1183A:
    /* 0001183a   2  sub.w D1,D0 */
    c->pc = 0x0001183au;
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1183C:
    /* 0001183c   6  move.w D0,(00dff064).l */
    c->pc = 0x0001183cu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11842:
    /* 00011842   8  move.w #9f0,(00dff040).l */
    c->pc = 0x00011842u;
    t0 = 0x000009f0u;
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1184A:
    /* 0001184a   6  clr.w (00dff042).l */
    c->pc = 0x0001184au;
    rc_wr16(c, m, 0x00dff042u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11850:
    /* 00011850   8  move.w #ffff,(00dff044).l */
    c->pc = 0x00011850u;
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11858:
    /* 00011858   8  move.w #ffff,(00dff046).l */
    c->pc = 0x00011858u;
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11860:
    /* 00011860   4  lea (fffff300,A4),A3 */
    c->pc = 0x00011860u;
    c->a[3] = (c->a[4] - 0xd00u);

L_11864:
    /* 00011864   2  movea.l (A3)+,A1 */
    c->pc = 0x00011864u;
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_11866:
    /* 00011866   4  lea (fffff34e,A4),A6 */
    c->pc = 0x00011866u;
    c->a[6] = (c->a[4] - 0xcb2u);

L_1186A:
    /* 0001186a   2  movea.l (A6)+,A2 */
    c->pc = 0x0001186au;
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1186C:
    /* 0001186c   2  clr.l D1 */
    c->pc = 0x0001186cu;
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1186E:
    /* 0001186e   4  move.w (8,A5),D0 */
    c->pc = 0x0001186eu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11872:
    /* 00011872   2  lsr.w #3,D0 */
    c->pc = 0x00011872u;
    c->d[0] = rc_shift(c, 1, 0, 0x00000003u, rc_d_get(c, 0, RC_W), RC_W);

L_11874:
    /* 00011874   4  move.w (a,A5),D1 */
    c->pc = 0x00011874u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11878:
    /* 00011878   4  divu.w #a,D1 */
    c->pc = 0x00011878u;
    t0 = 0x0000000au;
    rc_divu(c, m, 1, t0);

L_1187C:
    /* 0001187c   4  mulu.w #190,D1 */
    c->pc = 0x0001187cu;
    t0 = 0x00000190u;
    rc_mulu(c, 1, t0);

L_11880:
    /* 00011880   2  add.w D0,D1 */
    c->pc = 0x00011880u;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_11882:
    /* 00011882   2  ext.l D1 */
    c->pc = 0x00011882u;
    rc_ext_l(c, 1);

L_11884:
    /* 00011884   4  move.w (de8,A4),D5 */
    c->pc = 0x00011884u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xde8u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11888:
    /* 00011888   2  clr.l D3 */
    c->pc = 0x00011888u;
    rc_d_set(c, 3, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1188A:
    /* 0001188a   4  move.w (fffff2ec,A4),D3 */
    c->pc = 0x0001188au;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd14u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1188E:
    /* 0001188e   2  lsl.w #1,D3 */
    c->pc = 0x0001188eu;
    c->d[3] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 3, RC_W), RC_W);

L_11890:
    /* 00011890   2  clr.l D0 */
    c->pc = 0x00011890u;
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11892:
    /* 00011892   4  move.w (c,A5),D0 */
    c->pc = 0x00011892u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11896:
    /* 00011896   2  lsl.w #1,D0 */
    c->pc = 0x00011896u;
    c->d[0] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_11898:
    /* 00011898   4  movea.l (fffff314,A4),A0 */
    c->pc = 0x00011898u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xcecu));
    c->a[0] = t0;

L_1189C:
    /* 0001189c   4  move.w (0,A0,D0.w),D0 */
    c->pc = 0x0001189cu;
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_118A0:
    /* 000118a0   4  move.w #4,D2 */
    c->pc = 0x000118a0u;
    t0 = 0x00000004u;
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_118A4:
    /* 000118a4   2  adda.l D1,A2 */
    c->pc = 0x000118a4u;
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_118A6:
    /* 000118a6   6  move.l A2,(00dff054).l */
    c->pc = 0x000118a6u;
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_118AC:
    /* 000118ac   2  adda.l D0,A1 */
    c->pc = 0x000118acu;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[1] += t0;

L_118AE:
    /* 000118ae   6  move.l A1,(00dff050).l */
    c->pc = 0x000118aeu;
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_118B4:
    /* 000118b4   6  move.w D5,(00dff058).l */
    c->pc = 0x000118b4u;
    t0 = rc_d_get(c, 5, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_118BA:
    /* 000118ba   8  btst #6,(00dff002).l */
    c->pc = 0x000118bau;
    t4 = 0x00000006u;
    t3 = 0x00dff002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_118C2:
    /* 000118c2   2  bne 000118ba */
    c->pc = 0x000118c2u;
    if (rc_cond(c, 6)) { rc_tick(); goto L_118BA; }

L_118C4:
    /* 000118c4   2  movea.l (A3)+,A1 */
    c->pc = 0x000118c4u;
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_118C6:
    /* 000118c6   2  movea.l (A6)+,A2 */
    c->pc = 0x000118c6u;
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_118C8:
    /* 000118c8   4  dbf D2,000118a4 */
    c->pc = 0x000118c8u;
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_118A4; }
    }

L_118CC:
    /* 000118cc   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = 0x000118ccu;
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
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
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_118D0:
    /* 000118d0   2  unlk A5 */
    c->pc = 0x000118d0u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_118D2:
    /* 000118d2   2  rts */
    c->pc = 0x000118d2u;
    rc_ret(c, m);
    return;

}
