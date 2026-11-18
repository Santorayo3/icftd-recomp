/* fn_0001180a - 298 byte(s), 96 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001180a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001180au): goto L_1180A;
    case RC_ADDR(0x0001180eu): goto L_1180E;
    case RC_ADDR(0x00011810u): goto L_11810;
    case RC_ADDR(0x00011812u): goto L_11812;
    case RC_ADDR(0x00011814u): goto L_11814;
    case RC_ADDR(0x00011818u): goto L_11818;
    case RC_ADDR(0x0001181cu): goto L_1181C;
    case RC_ADDR(0x0001181eu): goto L_1181E;
    case RC_ADDR(0x00011822u): goto L_11822;
    case RC_ADDR(0x00011824u): goto L_11824;
    case RC_ADDR(0x00011828u): goto L_11828;
    case RC_ADDR(0x0001182cu): goto L_1182C;
    case RC_ADDR(0x00011830u): goto L_11830;
    case RC_ADDR(0x00011834u): goto L_11834;
    case RC_ADDR(0x00011838u): goto L_11838;
    case RC_ADDR(0x0001183au): goto L_1183A;
    case RC_ADDR(0x0001183eu): goto L_1183E;
    case RC_ADDR(0x00011842u): goto L_11842;
    case RC_ADDR(0x00011844u): goto L_11844;
    case RC_ADDR(0x00011846u): goto L_11846;
    case RC_ADDR(0x00011848u): goto L_11848;
    case RC_ADDR(0x0001184cu): goto L_1184C;
    case RC_ADDR(0x00011850u): goto L_11850;
    case RC_ADDR(0x00011854u): goto L_11854;
    case RC_ADDR(0x00011856u): goto L_11856;
    case RC_ADDR(0x00011858u): goto L_11858;
    case RC_ADDR(0x0001185cu): goto L_1185C;
    case RC_ADDR(0x00011860u): goto L_11860;
    case RC_ADDR(0x00011862u): goto L_11862;
    case RC_ADDR(0x00011866u): goto L_11866;
    case RC_ADDR(0x00011868u): goto L_11868;
    case RC_ADDR(0x0001186cu): goto L_1186C;
    case RC_ADDR(0x00011872u): goto L_11872;
    case RC_ADDR(0x00011876u): goto L_11876;
    case RC_ADDR(0x0001187au): goto L_1187A;
    case RC_ADDR(0x0001187eu): goto L_1187E;
    case RC_ADDR(0x00011880u): goto L_11880;
    case RC_ADDR(0x00011884u): goto L_11884;
    case RC_ADDR(0x00011888u): goto L_11888;
    case RC_ADDR(0x0001188au): goto L_1188A;
    case RC_ADDR(0x0001188cu): goto L_1188C;
    case RC_ADDR(0x0001188eu): goto L_1188E;
    case RC_ADDR(0x00011890u): goto L_11890;
    case RC_ADDR(0x00011892u): goto L_11892;
    case RC_ADDR(0x00011896u): goto L_11896;
    case RC_ADDR(0x00011898u): goto L_11898;
    case RC_ADDR(0x0001189au): goto L_1189A;
    case RC_ADDR(0x0001189cu): goto L_1189C;
    case RC_ADDR(0x0001189eu): goto L_1189E;
    case RC_ADDR(0x000118a0u): goto L_118A0;
    case RC_ADDR(0x000118a4u): goto L_118A4;
    case RC_ADDR(0x000118a6u): goto L_118A6;
    case RC_ADDR(0x000118aau): goto L_118AA;
    case RC_ADDR(0x000118acu): goto L_118AC;
    case RC_ADDR(0x000118aeu): goto L_118AE;
    case RC_ADDR(0x000118b0u): goto L_118B0;
    case RC_ADDR(0x000118b4u): goto L_118B4;
    case RC_ADDR(0x000118b8u): goto L_118B8;
    case RC_ADDR(0x000118bau): goto L_118BA;
    case RC_ADDR(0x000118beu): goto L_118BE;
    case RC_ADDR(0x000118c0u): goto L_118C0;
    case RC_ADDR(0x000118c4u): goto L_118C4;
    case RC_ADDR(0x000118cau): goto L_118CA;
    case RC_ADDR(0x000118ceu): goto L_118CE;
    case RC_ADDR(0x000118d4u): goto L_118D4;
    case RC_ADDR(0x000118d6u): goto L_118D6;
    case RC_ADDR(0x000118dau): goto L_118DA;
    case RC_ADDR(0x000118dcu): goto L_118DC;
    case RC_ADDR(0x000118e0u): goto L_118E0;
    case RC_ADDR(0x000118e2u): goto L_118E2;
    case RC_ADDR(0x000118e6u): goto L_118E6;
    case RC_ADDR(0x000118e8u): goto L_118E8;
    case RC_ADDR(0x000118ecu): goto L_118EC;
    case RC_ADDR(0x000118f0u): goto L_118F0;
    case RC_ADDR(0x000118f4u): goto L_118F4;
    case RC_ADDR(0x000118f8u): goto L_118F8;
    case RC_ADDR(0x000118fcu): goto L_118FC;
    case RC_ADDR(0x000118feu): goto L_118FE;
    case RC_ADDR(0x00011900u): goto L_11900;
    case RC_ADDR(0x00011904u): goto L_11904;
    case RC_ADDR(0x00011908u): goto L_11908;
    case RC_ADDR(0x0001190au): goto L_1190A;
    case RC_ADDR(0x0001190eu): goto L_1190E;
    case RC_ADDR(0x00011910u): goto L_11910;
    case RC_ADDR(0x00011912u): goto L_11912;
    case RC_ADDR(0x00011916u): goto L_11916;
    case RC_ADDR(0x00011918u): goto L_11918;
    case RC_ADDR(0x0001191au): goto L_1191A;
    case RC_ADDR(0x0001191cu): goto L_1191C;
    case RC_ADDR(0x0001191eu): goto L_1191E;
    case RC_ADDR(0x00011922u): goto L_11922;
    case RC_ADDR(0x00011926u): goto L_11926;
    case RC_ADDR(0x00011928u): goto L_11928;
    case RC_ADDR(0x0001192eu): goto L_1192E;
    case RC_ADDR(0x00011930u): goto L_11930;
    case RC_ADDR(0x00011932u): goto L_11932;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1180A:
    /* 0001180a   4  cmpi.w #4,D7 */
    c->pc = RC_ADDR(0x0001180au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_1180E:
    /* 0001180e   2  blt 00011814 */
    c->pc = RC_ADDR(0x0001180eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_11814;

L_11810:
    /* 00011810   2  clr.l D0 */
    c->pc = RC_ADDR(0x00011810u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11812:
    /* 00011812   2  rts */
    c->pc = RC_ADDR(0x00011812u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_11814:
    /* 00011814   4  movea.l (4,A1),A3 */
    c->pc = RC_ADDR(0x00011814u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    c->a[3] = t0;

L_11818:
    /* 00011818   4  lea (1c2,A6),A2 */
    c->pc = RC_ADDR(0x00011818u);
    rc_step(c, m, 8);
    c->a[2] = (c->a[6] + 0x1c2u);

L_1181C:
    /* 0001181c   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x0001181cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1181E:
    /* 0001181e   4  mulu.w #a,D0 */
    c->pc = RC_ADDR(0x0001181eu);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_mulu(c, 0, t0);

L_11822:
    /* 00011822   2  adda.w D0,A2 */
    c->pc = RC_ADDR(0x00011822u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[2] += rc_ext(t0, RC_W);

L_11824:
    /* 00011824   4  move.b (0,A1),D0 */
    c->pc = RC_ADDR(0x00011824u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_11828:
    /* 00011828   4  beq 000118f0 */
    c->pc = RC_ADDR(0x00011828u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_118F0;

L_1182C:
    /* 0001182c   4  cmpi.b #1,D0 */
    c->pc = RC_ADDR(0x0001182cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_11830:
    /* 00011830   4  bne 000118d6 */
    c->pc = RC_ADDR(0x00011830u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_118D6;

L_11834:
    /* 00011834   4  lea (1a,A3),A5 */
    c->pc = RC_ADDR(0x00011834u);
    rc_step(c, m, 8);
    c->a[5] = (c->a[3] + 0x1au);

L_11838:
    /* 00011838   2  clr.l D1 */
    c->pc = RC_ADDR(0x00011838u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1183A:
    /* 0001183a   4  move.b (3,A1),D1 */
    c->pc = RC_ADDR(0x0001183au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x3u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1183E:
    /* 0001183e   4  divu.w #c,D1 */
    c->pc = RC_ADDR(0x0001183eu);
    rc_step(c, m, 144);
    t0 = 0x0000000cu;
    rc_divu(c, m, 1, t0);

L_11842:
    /* 00011842   2  move.w D1,D2 */
    c->pc = RC_ADDR(0x00011842u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11844:
    /* 00011844   2  swap D1 */
    c->pc = RC_ADDR(0x00011844u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_11846:
    /* 00011846   2  asl.w #1,D1 */
    c->pc = RC_ADDR(0x00011846u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_11848:
    /* 00011848   4  lea (00010f34),A0 */
    c->pc = RC_ADDR(0x00011848u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00010f34u);

L_1184C:
    /* 0001184c   4  move.w #d5c8,D0 */
    c->pc = RC_ADDR(0x0001184cu);
    rc_step(c, m, 8);
    t0 = 0x0000d5c8u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11850:
    /* 00011850   4  mulu.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00011850u);
    rc_step(c, m, 48);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_mulu(c, 0, t0);

L_11854:
    /* 00011854   2  moveq #f,D1 */
    c->pc = RC_ADDR(0x00011854u);
    rc_step(c, m, 4);
    c->d[1] = 0x0000000fu;
    rc_set_nzvc(c, c->d[1], RC_L);

L_11856:
    /* 00011856   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x00011856u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_11858:
    /* 00011858   4  move.w D0,(6,A2) */
    c->pc = RC_ADDR(0x00011858u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1185C:
    /* 0001185c   4  subi.w #a,D2 */
    c->pc = RC_ADDR(0x0001185cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11860:
    /* 00011860   2  neg.w D2 */
    c->pc = RC_ADDR(0x00011860u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11862:
    /* 00011862   4  sub.w (18,A3),D2 */
    c->pc = RC_ADDR(0x00011862u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x18u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_11866:
    /* 00011866   2  bpl 0001187a */
    c->pc = RC_ADDR(0x00011866u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_1187A;

L_11868:
    /* 00011868   4  clr.b (0,A1) */
    c->pc = RC_ADDR(0x00011868u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[1] + 0x0u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_1186C:
    /* 0001186c   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x0001186cu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_11872:
    /* 00011872   4  beq 00011926 */
    c->pc = RC_ADDR(0x00011872u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11926;

L_11876:
    /* 00011876   4  bra 000118f0 */
    c->pc = RC_ADDR(0x00011876u);
    rc_step(c, m, 10);
    goto L_118F0;

L_1187A:
    /* 0001187a   4  cmp.b (12,A3),D2 */
    c->pc = RC_ADDR(0x0001187au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[3] + 0x12u));
    t1 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_1187E:
    /* 0001187e   2  bge 00011868 */
    c->pc = RC_ADDR(0x0001187eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) { rc_tick(); goto L_11868; }

L_11880:
    /* 00011880   4  move.l (4,A3),D4 */
    c->pc = RC_ADDR(0x00011880u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0x4u));
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11884:
    /* 00011884   4  move.l (8,A3),D5 */
    c->pc = RC_ADDR(0x00011884u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0x8u));
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11888:
    /* 00011888   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x00011888u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1188A:
    /* 0001188a   2  add.l D5,D0 */
    c->pc = RC_ADDR(0x0001188au);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 5, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1188C:
    /* 0001188c   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x0001188cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1188E:
    /* 0001188e   2  asl.l D2,D1 */
    c->pc = RC_ADDR(0x0001188eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[2] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_11890:
    /* 00011890   2  sub.l D0,D1 */
    c->pc = RC_ADDR(0x00011890u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_11892:
    /* 00011892   4  lea (0,A5,D1.w),A0 */
    c->pc = RC_ADDR(0x00011892u);
    rc_step(c, m, 12);
    t4 = c->d[1];
    c->a[0] = (c->a[5] + 0x0u + t4);

L_11896:
    /* 00011896   2  asl.l D2,D4 */
    c->pc = RC_ADDR(0x00011896u);
    rc_step(c, m, 8);
    rc_d_set(c, 4, RC_L, rc_shift(c, 0, 1, (c->d[2] & 63u), rc_d_get(c, 4, RC_L), RC_L));

L_11898:
    /* 00011898   2  asl.l D2,D5 */
    c->pc = RC_ADDR(0x00011898u);
    rc_step(c, m, 8);
    rc_d_set(c, 5, RC_L, rc_shift(c, 0, 1, (c->d[2] & 63u), rc_d_get(c, 5, RC_L), RC_L));

L_1189A:
    /* 0001189a   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0001189au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1189C:
    /* 0001189c   2  bne 000118a0 */
    c->pc = RC_ADDR(0x0001189cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_118A0;

L_1189E:
    /* 0001189e   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x0001189eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_118A0:
    /* 000118a0   4  move.l A0,(c,A1) */
    c->pc = RC_ADDR(0x000118a0u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_118A4:
    /* 000118a4   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x000118a4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_118A6:
    /* 000118a6   4  move.w D0,(10,A1) */
    c->pc = RC_ADDR(0x000118a6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_118AA:
    /* 000118aa   2  adda.w D4,A0 */
    c->pc = RC_ADDR(0x000118aau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    c->a[0] += rc_ext(t0, RC_W);

L_118AC:
    /* 000118ac   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x000118acu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_118AE:
    /* 000118ae   2  bne 000118ba */
    c->pc = RC_ADDR(0x000118aeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_118BA;

L_118B0:
    /* 000118b0   4  movea.l (106,A6),A0 */
    c->pc = RC_ADDR(0x000118b0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[6] + 0x106u));
    c->a[0] = t0;

L_118B4:
    /* 000118b4   4  adda.w #400,A0 */
    c->pc = RC_ADDR(0x000118b4u);
    rc_step(c, m, 14);
    t0 = 0x00000400u;
    c->a[0] += rc_ext(t0, RC_W);

L_118B8:
    /* 000118b8   2  moveq #8,D0 */
    c->pc = RC_ADDR(0x000118b8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000008u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_118BA:
    /* 000118ba   4  move.l A0,(0,A2) */
    c->pc = RC_ADDR(0x000118bau);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_118BE:
    /* 000118be   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x000118beu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_118C0:
    /* 000118c0   4  move.w D0,(4,A2) */
    c->pc = RC_ADDR(0x000118c0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_118C4:
    /* 000118c4   6  move.w #2,(a,A1) */
    c->pc = RC_ADDR(0x000118c4u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[1] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_118CA:
    /* 000118ca   4  bsr 00010d10 */
    c->pc = RC_ADDR(0x000118cau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000118ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00010d10u);
    return;

L_118CE:
    /* 000118ce   6  move.w #1,(8,A2) */
    c->pc = RC_ADDR(0x000118ceu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[2] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_118D4:
    /* 000118d4   2  bra 000118f0 */
    c->pc = RC_ADDR(0x000118d4u);
    rc_step(c, m, 10);
    goto L_118F0;

L_118D6:
    /* 000118d6   4  cmpi.b #2,D0 */
    c->pc = RC_ADDR(0x000118d6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000002u);

L_118DA:
    /* 000118da   2  bne 000118e2 */
    c->pc = RC_ADDR(0x000118dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_118E2;

L_118DC:
    /* 000118dc   4  clr.w (8,A2) */
    c->pc = RC_ADDR(0x000118dcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[2] + 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_118E0:
    /* 000118e0   2  bra 000118f0 */
    c->pc = RC_ADDR(0x000118e0u);
    rc_step(c, m, 10);
    goto L_118F0;

L_118E2:
    /* 000118e2   4  cmpi.b #3,D0 */
    c->pc = RC_ADDR(0x000118e2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000003u);

L_118E6:
    /* 000118e6   2  bne 000118f0 */
    c->pc = RC_ADDR(0x000118e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_118F0;

L_118E8:
    /* 000118e8   4  bsr 00010d10 */
    c->pc = RC_ADDR(0x000118e8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000118ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00010d10u);
    return;

L_118EC:
    /* 000118ec   4  bra 00011926 */
    c->pc = RC_ADDR(0x000118ecu);
    rc_step(c, m, 10);
    goto L_11926;

L_118F0:
    /* 000118f0   4  move.w #1080,D0 */
    c->pc = RC_ADDR(0x000118f0u);
    rc_step(c, m, 8);
    t0 = 0x00001080u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_118F4:
    /* 000118f4   4  sub.w (4,A6),D0 */
    c->pc = RC_ADDR(0x000118f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_118F8:
    /* 000118f8   4  mulu.w (6,A2),D0 */
    c->pc = RC_ADDR(0x000118f8u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[2] + 0x6u));
    rc_mulu(c, 0, t0);

L_118FC:
    /* 000118fc   2  moveq #13,D1 */
    c->pc = RC_ADDR(0x000118fcu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000013u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_118FE:
    /* 000118fe   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x000118feu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_11900:
    /* 00011900   4  move.w D0,(12,A1) */
    c->pc = RC_ADDR(0x00011900u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11904:
    /* 00011904   4  move.w (0,A6),D0 */
    c->pc = RC_ADDR(0x00011904u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11908:
    /* 00011908   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00011908u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1190A:
    /* 0001190a   4  mulu.w (8,A1),D0 */
    c->pc = RC_ADDR(0x0001190au);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[1] + 0x8u));
    rc_mulu(c, 0, t0);

L_1190E:
    /* 0001190e   2  lsr.w #8,D0 */
    c->pc = RC_ADDR(0x0001190eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 0, RC_W), RC_W));

L_11910:
    /* 00011910   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00011910u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11912:
    /* 00011912   4  move.l (14,A3),D1 */
    c->pc = RC_ADDR(0x00011912u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0x14u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11916:
    /* 00011916   2  lsr.l #1,D1 */
    c->pc = RC_ADDR(0x00011916u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_11918:
    /* 00011918   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x00011918u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_1191A:
    /* 0001191a   2  moveq #11,D1 */
    c->pc = RC_ADDR(0x0001191au);
    rc_step(c, m, 4);
    c->d[1] = 0x00000011u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1191C:
    /* 0001191c   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x0001191cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1191E:
    /* 0001191e   4  mulu.w (8,A2),D0 */
    c->pc = RC_ADDR(0x0001191eu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[2] + 0x8u));
    rc_mulu(c, 0, t0);

L_11922:
    /* 00011922   4  move.w D0,(14,A1) */
    c->pc = RC_ADDR(0x00011922u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11926:
    /* 00011926   2  clr.l D0 */
    c->pc = RC_ADDR(0x00011926u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11928:
    /* 00011928   6  cmpi.w #2,(a,A1) */
    c->pc = RC_ADDR(0x00011928u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[1] + 0xau));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1192E:
    /* 0001192e   2  bne 00011932 */
    c->pc = RC_ADDR(0x0001192eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_11932;

L_11930:
    /* 00011930   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00011930u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_11932:
    /* 00011932   2  rts */
    c->pc = RC_ADDR(0x00011932u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
