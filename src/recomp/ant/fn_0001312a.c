/* fn_0001312a - 302 byte(s), 71 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001312a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001312au): goto L_1312A;
    case RC_ADDR(0x0001312eu): goto L_1312E;
    case RC_ADDR(0x00013132u): goto L_13132;
    case RC_ADDR(0x00013138u): goto L_13138;
    case RC_ADDR(0x0001313eu): goto L_1313E;
    case RC_ADDR(0x00013142u): goto L_13142;
    case RC_ADDR(0x00013144u): goto L_13144;
    case RC_ADDR(0x00013146u): goto L_13146;
    case RC_ADDR(0x0001314au): goto L_1314A;
    case RC_ADDR(0x0001314eu): goto L_1314E;
    case RC_ADDR(0x00013150u): goto L_13150;
    case RC_ADDR(0x00013152u): goto L_13152;
    case RC_ADDR(0x00013156u): goto L_13156;
    case RC_ADDR(0x00013158u): goto L_13158;
    case RC_ADDR(0x0001315cu): goto L_1315C;
    case RC_ADDR(0x00013164u): goto L_13164;
    case RC_ADDR(0x0001316cu): goto L_1316C;
    case RC_ADDR(0x00013170u): goto L_13170;
    case RC_ADDR(0x00013174u): goto L_13174;
    case RC_ADDR(0x00013178u): goto L_13178;
    case RC_ADDR(0x0001317cu): goto L_1317C;
    case RC_ADDR(0x0001317eu): goto L_1317E;
    case RC_ADDR(0x00013180u): goto L_13180;
    case RC_ADDR(0x00013184u): goto L_13184;
    case RC_ADDR(0x00013186u): goto L_13186;
    case RC_ADDR(0x0001318au): goto L_1318A;
    case RC_ADDR(0x0001318eu): goto L_1318E;
    case RC_ADDR(0x00013192u): goto L_13192;
    case RC_ADDR(0x0001319au): goto L_1319A;
    case RC_ADDR(0x000131a0u): goto L_131A0;
    case RC_ADDR(0x000131a8u): goto L_131A8;
    case RC_ADDR(0x000131b0u): goto L_131B0;
    case RC_ADDR(0x000131b4u): goto L_131B4;
    case RC_ADDR(0x000131b8u): goto L_131B8;
    case RC_ADDR(0x000131bcu): goto L_131BC;
    case RC_ADDR(0x000131beu): goto L_131BE;
    case RC_ADDR(0x000131c0u): goto L_131C0;
    case RC_ADDR(0x000131c6u): goto L_131C6;
    case RC_ADDR(0x000131c8u): goto L_131C8;
    case RC_ADDR(0x000131cau): goto L_131CA;
    case RC_ADDR(0x000131d0u): goto L_131D0;
    case RC_ADDR(0x000131d6u): goto L_131D6;
    case RC_ADDR(0x000131deu): goto L_131DE;
    case RC_ADDR(0x000131e0u): goto L_131E0;
    case RC_ADDR(0x000131e4u): goto L_131E4;
    case RC_ADDR(0x000131e8u): goto L_131E8;
    case RC_ADDR(0x000131eau): goto L_131EA;
    case RC_ADDR(0x000131eeu): goto L_131EE;
    case RC_ADDR(0x000131f2u): goto L_131F2;
    case RC_ADDR(0x000131f4u): goto L_131F4;
    case RC_ADDR(0x000131f8u): goto L_131F8;
    case RC_ADDR(0x000131fcu): goto L_131FC;
    case RC_ADDR(0x000131feu): goto L_131FE;
    case RC_ADDR(0x00013202u): goto L_13202;
    case RC_ADDR(0x00013206u): goto L_13206;
    case RC_ADDR(0x00013208u): goto L_13208;
    case RC_ADDR(0x0001320cu): goto L_1320C;
    case RC_ADDR(0x00013212u): goto L_13212;
    case RC_ADDR(0x00013218u): goto L_13218;
    case RC_ADDR(0x0001321eu): goto L_1321E;
    case RC_ADDR(0x00013224u): goto L_13224;
    case RC_ADDR(0x00013228u): goto L_13228;
    case RC_ADDR(0x0001322cu): goto L_1322C;
    case RC_ADDR(0x00013230u): goto L_13230;
    case RC_ADDR(0x00013234u): goto L_13234;
    case RC_ADDR(0x0001323au): goto L_1323A;
    case RC_ADDR(0x00013240u): goto L_13240;
    case RC_ADDR(0x00013246u): goto L_13246;
    case RC_ADDR(0x0001324eu): goto L_1324E;
    case RC_ADDR(0x00013250u): goto L_13250;
    case RC_ADDR(0x00013254u): goto L_13254;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1312A:
    /* 0001312a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001312au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1312E:
    /* 0001312e   4  movem.l { D1 D2 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0001312eu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
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

L_13132:
    /* 00013132   6  clr.w (00dff066).l */
    c->pc = RC_ADDR(0x00013132u);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff066u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13138:
    /* 00013138   6  clr.w (00dff064).l */
    c->pc = RC_ADDR(0x00013138u);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff064u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1313E:
    /* 0001313e   4  move.w #3214,D1 */
    c->pc = RC_ADDR(0x0001313eu);
    rc_step(c, m, 8);
    t0 = 0x00003214u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13142:
    /* 00013142   2  clr.l D2 */
    c->pc = RC_ADDR(0x00013142u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_13144:
    /* 00013144   2  clr.l D3 */
    c->pc = RC_ADDR(0x00013144u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_13146:
    /* 00013146   4  move.w (1410,A4),D0 */
    c->pc = RC_ADDR(0x00013146u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1410u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1314A:
    /* 0001314a   4  cmp.w (1148,A4),D0 */
    c->pc = RC_ADDR(0x0001314au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1148u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1314E:
    /* 0001314e   2  beq 00013174 */
    c->pc = RC_ADDR(0x0001314eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13174;

L_13150:
    /* 00013150   2  blt 00013158 */
    c->pc = RC_ADDR(0x00013150u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_13158;

L_13152:
    /* 00013152   4  move.b #2,D3 */
    c->pc = RC_ADDR(0x00013152u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    rc_d_set(c, 3, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13156:
    /* 00013156   2  bra 0001315c */
    c->pc = RC_ADDR(0x00013156u);
    rc_step(c, m, 10);
    goto L_1315C;

L_13158:
    /* 00013158   4  move.b #2,D2 */
    c->pc = RC_ADDR(0x00013158u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1315C:
    /* 0001315c   8  move.w #2,(00dff066).l */
    c->pc = RC_ADDR(0x0001315cu);
    rc_step(c, m, 20);
    t0 = 0x00000002u;
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13164:
    /* 00013164   8  move.w #2,(00dff064).l */
    c->pc = RC_ADDR(0x00013164u);
    rc_step(c, m, 20);
    t0 = 0x00000002u;
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1316C:
    /* 0001316c   4  andi.w #ffc0,D1 */
    c->pc = RC_ADDR(0x0001316cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 & 0x0000ffc0u;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_13170:
    /* 00013170   4  ori.w #13,D1 */
    c->pc = RC_ADDR(0x00013170u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 | 0x00000013u;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_13174:
    /* 00013174   4  move.w (1412,A4),D0 */
    c->pc = RC_ADDR(0x00013174u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1412u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13178:
    /* 00013178   4  cmp.w (114a,A4),D0 */
    c->pc = RC_ADDR(0x00013178u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x114au));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1317C:
    /* 0001317c   2  beq 00013192 */
    c->pc = RC_ADDR(0x0001317cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_13192;

L_1317E:
    /* 0001317e   2  blt 00013186 */
    c->pc = RC_ADDR(0x0001317eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_13186;

L_13180:
    /* 00013180   4  addi.w #190,D3 */
    c->pc = RC_ADDR(0x00013180u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + 0x00000190u;
    rc_flags_add(c, RC_W, t1, 0x00000190u, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_13184:
    /* 00013184   2  bra 0001318a */
    c->pc = RC_ADDR(0x00013184u);
    rc_step(c, m, 10);
    goto L_1318A;

L_13186:
    /* 00013186   4  addi.w #190,D2 */
    c->pc = RC_ADDR(0x00013186u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + 0x00000190u;
    rc_flags_add(c, RC_W, t1, 0x00000190u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1318A:
    /* 0001318a   4  andi.w #3f,D1 */
    c->pc = RC_ADDR(0x0001318au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 & 0x0000003fu;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1318E:
    /* 0001318e   4  ori.w #2f80,D1 */
    c->pc = RC_ADDR(0x0001318eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 | 0x00002f80u;
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_13192:
    /* 00013192   8  move.w #9f0,(00dff040).l */
    c->pc = RC_ADDR(0x00013192u);
    rc_step(c, m, 20);
    t0 = 0x000009f0u;
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1319A:
    /* 0001319a   6  clr.w (00dff042).l */
    c->pc = RC_ADDR(0x0001319au);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff042u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_131A0:
    /* 000131a0   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x000131a0u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_131A8:
    /* 000131a8   8  move.w #ffff,(00dff046).l */
    c->pc = RC_ADDR(0x000131a8u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_131B0:
    /* 000131b0   4  lea (fffffaf6,A4),A0 */
    c->pc = RC_ADDR(0x000131b0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x50au);

L_131B4:
    /* 000131b4   4  lea (ffffface,A4),A1 */
    c->pc = RC_ADDR(0x000131b4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x532u);

L_131B8:
    /* 000131b8   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x000131b8u);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_131BC:
    /* 000131bc   2  move.l (A0)+,D4 */
    c->pc = RC_ADDR(0x000131bcu);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_131BE:
    /* 000131be   2  add.l D2,D4 */
    c->pc = RC_ADDR(0x000131beu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_131C0:
    /* 000131c0   6  move.l D4,(00dff050).l */
    c->pc = RC_ADDR(0x000131c0u);
    rc_step(c, m, 20);
    t0 = rc_d_get(c, 4, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_131C6:
    /* 000131c6   2  move.l (A1)+,D4 */
    c->pc = RC_ADDR(0x000131c6u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_131C8:
    /* 000131c8   2  add.l D3,D4 */
    c->pc = RC_ADDR(0x000131c8u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_131CA:
    /* 000131ca   6  move.l D4,(00dff054).l */
    c->pc = RC_ADDR(0x000131cau);
    rc_step(c, m, 20);
    t0 = rc_d_get(c, 4, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_131D0:
    /* 000131d0   6  move.w D1,(00dff058).l */
    c->pc = RC_ADDR(0x000131d0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_131D6:
    /* 000131d6   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x000131d6u);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_131DE:
    /* 000131de   2  bne 000131d6 */
    c->pc = RC_ADDR(0x000131deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_131D6; }

L_131E0:
    /* 000131e0   4  dbf D0,000131bc */
    c->pc = RC_ADDR(0x000131e0u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_131BC; }
    }

L_131E4:
    /* 000131e4   4  btst #1,D2 */
    c->pc = RC_ADDR(0x000131e4u);
    rc_step(c, m, 10);
    t4 = 0x00000001u;
    t0 = rc_d_get(c, 2, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_131E8:
    /* 000131e8   2  beq 000131ee */
    c->pc = RC_ADDR(0x000131e8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_131EE;

L_131EA:
    /* 000131ea   4  bsr 000132de */
    c->pc = RC_ADDR(0x000131eau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000131eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x000132deu);
    return;

L_131EE:
    /* 000131ee   4  btst #1,D3 */
    c->pc = RC_ADDR(0x000131eeu);
    rc_step(c, m, 10);
    t4 = 0x00000001u;
    t0 = rc_d_get(c, 3, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_131F2:
    /* 000131f2   2  beq 000131f8 */
    c->pc = RC_ADDR(0x000131f2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_131F8;

L_131F4:
    /* 000131f4   4  bsr 00013298 */
    c->pc = RC_ADDR(0x000131f4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000131f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013298u);
    return;

L_131F8:
    /* 000131f8   4  cmpi.w #190,D2 */
    c->pc = RC_ADDR(0x000131f8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000190u);

L_131FC:
    /* 000131fc   2  blt 00013202 */
    c->pc = RC_ADDR(0x000131fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_13202;

L_131FE:
    /* 000131fe   4  bsr 00013382 */
    c->pc = RC_ADDR(0x000131feu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00013202u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013382u);
    return;

L_13202:
    /* 00013202   4  cmpi.w #190,D3 */
    c->pc = RC_ADDR(0x00013202u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 3, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000190u);

L_13206:
    /* 00013206   2  blt 0001320c */
    c->pc = RC_ADDR(0x00013206u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1320C;

L_13208:
    /* 00013208   4  bsr 00013332 */
    c->pc = RC_ADDR(0x00013208u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001320cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00013332u);
    return;

L_1320C:
    /* 0001320c   6  move.w (1148,A4),(1410,A4) */
    c->pc = RC_ADDR(0x0001320cu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1148u));
    rc_wr16(c, m, (c->a[4] + 0x1410u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13212:
    /* 00013212   6  move.w (114a,A4),(1412,A4) */
    c->pc = RC_ADDR(0x00013212u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x114au));
    rc_wr16(c, m, (c->a[4] + 0x1412u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13218:
    /* 00013218   6  clr.w (00dff066).l */
    c->pc = RC_ADDR(0x00013218u);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff066u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1321E:
    /* 0001321e   6  clr.w (00dff064).l */
    c->pc = RC_ADDR(0x0001321eu);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff064u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13224:
    /* 00013224   4  lea (ffffface,A4),A0 */
    c->pc = RC_ADDR(0x00013224u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x532u);

L_13228:
    /* 00013228   4  lea (fffffaf6,A4),A1 */
    c->pc = RC_ADDR(0x00013228u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x50au);

L_1322C:
    /* 0001322c   4  move.w #3214,D1 */
    c->pc = RC_ADDR(0x0001322cu);
    rc_step(c, m, 8);
    t0 = 0x00003214u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13230:
    /* 00013230   4  move.w #4,D0 */
    c->pc = RC_ADDR(0x00013230u);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13234:
    /* 00013234   6  move.l (A0)+,(00dff050).l */
    c->pc = RC_ADDR(0x00013234u);
    rc_step(c, m, 28);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1323A:
    /* 0001323a   6  move.l (A1)+,(00dff054).l */
    c->pc = RC_ADDR(0x0001323au);
    rc_step(c, m, 28);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13240:
    /* 00013240   6  move.w D1,(00dff058).l */
    c->pc = RC_ADDR(0x00013240u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13246:
    /* 00013246   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x00013246u);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1324E:
    /* 0001324e   2  bne 00013246 */
    c->pc = RC_ADDR(0x0001324eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_13246; }

L_13250:
    /* 00013250   4  dbf D0,00013234 */
    c->pc = RC_ADDR(0x00013250u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_13234; }
    }

L_13254:
    /* 00013254   4  bra 000133de */
    c->pc = RC_ADDR(0x00013254u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000133deu);
    return;

}
