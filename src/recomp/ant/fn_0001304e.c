/* fn_0001304e - 220 byte(s), 57 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001304e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001304eu): goto L_1304E;
    case RC_ADDR(0x00013052u): goto L_13052;
    case RC_ADDR(0x00013056u): goto L_13056;
    case RC_ADDR(0x0001305au): goto L_1305A;
    case RC_ADDR(0x00013060u): goto L_13060;
    case RC_ADDR(0x00013064u): goto L_13064;
    case RC_ADDR(0x00013068u): goto L_13068;
    case RC_ADDR(0x0001306cu): goto L_1306C;
    case RC_ADDR(0x00013072u): goto L_13072;
    case RC_ADDR(0x00013076u): goto L_13076;
    case RC_ADDR(0x0001307au): goto L_1307A;
    case RC_ADDR(0x0001307eu): goto L_1307E;
    case RC_ADDR(0x00013082u): goto L_13082;
    case RC_ADDR(0x00013084u): goto L_13084;
    case RC_ADDR(0x00013086u): goto L_13086;
    case RC_ADDR(0x0001308cu): goto L_1308C;
    case RC_ADDR(0x00013090u): goto L_13090;
    case RC_ADDR(0x00013092u): goto L_13092;
    case RC_ADDR(0x00013098u): goto L_13098;
    case RC_ADDR(0x000130a0u): goto L_130A0;
    case RC_ADDR(0x000130a6u): goto L_130A6;
    case RC_ADDR(0x000130aeu): goto L_130AE;
    case RC_ADDR(0x000130b6u): goto L_130B6;
    case RC_ADDR(0x000130bau): goto L_130BA;
    case RC_ADDR(0x000130bcu): goto L_130BC;
    case RC_ADDR(0x000130c0u): goto L_130C0;
    case RC_ADDR(0x000130c2u): goto L_130C2;
    case RC_ADDR(0x000130c4u): goto L_130C4;
    case RC_ADDR(0x000130c8u): goto L_130C8;
    case RC_ADDR(0x000130cau): goto L_130CA;
    case RC_ADDR(0x000130ceu): goto L_130CE;
    case RC_ADDR(0x000130d2u): goto L_130D2;
    case RC_ADDR(0x000130d6u): goto L_130D6;
    case RC_ADDR(0x000130d8u): goto L_130D8;
    case RC_ADDR(0x000130dau): goto L_130DA;
    case RC_ADDR(0x000130deu): goto L_130DE;
    case RC_ADDR(0x000130e0u): goto L_130E0;
    case RC_ADDR(0x000130e4u): goto L_130E4;
    case RC_ADDR(0x000130e6u): goto L_130E6;
    case RC_ADDR(0x000130e8u): goto L_130E8;
    case RC_ADDR(0x000130ecu): goto L_130EC;
    case RC_ADDR(0x000130eeu): goto L_130EE;
    case RC_ADDR(0x000130f2u): goto L_130F2;
    case RC_ADDR(0x000130f6u): goto L_130F6;
    case RC_ADDR(0x000130fau): goto L_130FA;
    case RC_ADDR(0x000130fcu): goto L_130FC;
    case RC_ADDR(0x00013102u): goto L_13102;
    case RC_ADDR(0x00013104u): goto L_13104;
    case RC_ADDR(0x0001310au): goto L_1310A;
    case RC_ADDR(0x00013110u): goto L_13110;
    case RC_ADDR(0x00013118u): goto L_13118;
    case RC_ADDR(0x0001311au): goto L_1311A;
    case RC_ADDR(0x0001311cu): goto L_1311C;
    case RC_ADDR(0x0001311eu): goto L_1311E;
    case RC_ADDR(0x00013122u): goto L_13122;
    case RC_ADDR(0x00013126u): goto L_13126;
    case RC_ADDR(0x00013128u): goto L_13128;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1304E:
    /* 0001304e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001304eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_13052:
    /* 00013052   4  tst.w (8,A5) */
    c->pc = RC_ADDR(0x00013052u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_13056:
    /* 00013056   4  bmi 00013126 */
    c->pc = RC_ADDR(0x00013056u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_13126;

L_1305A:
    /* 0001305a   6  cmpi.w #130,(8,A5) */
    c->pc = RC_ADDR(0x0001305au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000130u);

L_13060:
    /* 00013060   4  bgt 00013126 */
    c->pc = RC_ADDR(0x00013060u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_13126;

L_13064:
    /* 00013064   4  tst.w (a,A5) */
    c->pc = RC_ADDR(0x00013064u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_13068:
    /* 00013068   4  bmi 00013126 */
    c->pc = RC_ADDR(0x00013068u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_13126;

L_1306C:
    /* 0001306c   6  cmpi.w #be,(a,A5) */
    c->pc = RC_ADDR(0x0001306cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_13072:
    /* 00013072   4  bgt 00013126 */
    c->pc = RC_ADDR(0x00013072u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_13126;

L_13076:
    /* 00013076   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x00013076u);
    rc_step(c, m, 8);
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

L_1307A:
    /* 0001307a   4  move.w #28,D0 */
    c->pc = RC_ADDR(0x0001307au);
    rc_step(c, m, 8);
    t0 = 0x00000028u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1307E:
    /* 0001307e   4  move.w (fffffa94,A4),D1 */
    c->pc = RC_ADDR(0x0001307eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13082:
    /* 00013082   2  lsl.w #1,D1 */
    c->pc = RC_ADDR(0x00013082u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_13084:
    /* 00013084   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00013084u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13086:
    /* 00013086   6  move.w D0,(00dff066).l */
    c->pc = RC_ADDR(0x00013086u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1308C:
    /* 0001308c   4  move.w (fffffa9c,A4),D0 */
    c->pc = RC_ADDR(0x0001308cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x564u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13090:
    /* 00013090   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00013090u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13092:
    /* 00013092   6  move.w D0,(00dff064).l */
    c->pc = RC_ADDR(0x00013092u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13098:
    /* 00013098   8  move.w #9f0,(00dff040).l */
    c->pc = RC_ADDR(0x00013098u);
    rc_step(c, m, 20);
    t0 = 0x000009f0u;
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_130A0:
    /* 000130a0   6  clr.w (00dff042).l */
    c->pc = RC_ADDR(0x000130a0u);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff042u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_130A6:
    /* 000130a6   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x000130a6u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_130AE:
    /* 000130ae   8  move.w #ffff,(00dff046).l */
    c->pc = RC_ADDR(0x000130aeu);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_130B6:
    /* 000130b6   4  lea (fffffaa8,A4),A3 */
    c->pc = RC_ADDR(0x000130b6u);
    rc_step(c, m, 8);
    c->a[3] = (c->a[4] - 0x558u);

L_130BA:
    /* 000130ba   2  movea.l (A3)+,A1 */
    c->pc = RC_ADDR(0x000130bau);
    rc_step(c, m, 12);
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_130BC:
    /* 000130bc   4  lea (fffffaf6,A4),A6 */
    c->pc = RC_ADDR(0x000130bcu);
    rc_step(c, m, 8);
    c->a[6] = (c->a[4] - 0x50au);

L_130C0:
    /* 000130c0   2  movea.l (A6)+,A2 */
    c->pc = RC_ADDR(0x000130c0u);
    rc_step(c, m, 12);
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_130C2:
    /* 000130c2   2  clr.l D1 */
    c->pc = RC_ADDR(0x000130c2u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_130C4:
    /* 000130c4   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000130c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_130C8:
    /* 000130c8   2  lsr.w #3,D0 */
    c->pc = RC_ADDR(0x000130c8u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000003u, rc_d_get(c, 0, RC_W), RC_W));

L_130CA:
    /* 000130ca   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x000130cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_130CE:
    /* 000130ce   4  divu.w #a,D1 */
    c->pc = RC_ADDR(0x000130ceu);
    rc_step(c, m, 144);
    t0 = 0x0000000au;
    rc_divu(c, m, 1, t0);

L_130D2:
    /* 000130d2   4  mulu.w #190,D1 */
    c->pc = RC_ADDR(0x000130d2u);
    rc_step(c, m, 42);
    t0 = 0x00000190u;
    rc_mulu(c, 1, t0);

L_130D6:
    /* 000130d6   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x000130d6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_130D8:
    /* 000130d8   2  ext.l D1 */
    c->pc = RC_ADDR(0x000130d8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_130DA:
    /* 000130da   4  move.w (17e2,A4),D5 */
    c->pc = RC_ADDR(0x000130dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17e2u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_130DE:
    /* 000130de   2  clr.l D3 */
    c->pc = RC_ADDR(0x000130deu);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_130E0:
    /* 000130e0   4  move.w (fffffa94,A4),D3 */
    c->pc = RC_ADDR(0x000130e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56cu));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_130E4:
    /* 000130e4   2  lsl.w #1,D3 */
    c->pc = RC_ADDR(0x000130e4u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 3, RC_W), RC_W));

L_130E6:
    /* 000130e6   2  clr.l D0 */
    c->pc = RC_ADDR(0x000130e6u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_130E8:
    /* 000130e8   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x000130e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_130EC:
    /* 000130ec   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x000130ecu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_130EE:
    /* 000130ee   4  movea.l (fffffabc,A4),A0 */
    c->pc = RC_ADDR(0x000130eeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x544u));
    c->a[0] = t0;

L_130F2:
    /* 000130f2   4  move.w (0,A0,D0.w),D0 */
    c->pc = RC_ADDR(0x000130f2u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_130F6:
    /* 000130f6   4  move.w #4,D2 */
    c->pc = RC_ADDR(0x000130f6u);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_130FA:
    /* 000130fa   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x000130fau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_130FC:
    /* 000130fc   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x000130fcu);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13102:
    /* 00013102   2  adda.l D0,A1 */
    c->pc = RC_ADDR(0x00013102u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[1] += t0;

L_13104:
    /* 00013104   6  move.l A1,(00dff050).l */
    c->pc = RC_ADDR(0x00013104u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1310A:
    /* 0001310a   6  move.w D5,(00dff058).l */
    c->pc = RC_ADDR(0x0001310au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 5, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13110:
    /* 00013110   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x00013110u);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_13118:
    /* 00013118   2  bne 00013110 */
    c->pc = RC_ADDR(0x00013118u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_13110; }

L_1311A:
    /* 0001311a   2  movea.l (A3)+,A1 */
    c->pc = RC_ADDR(0x0001311au);
    rc_step(c, m, 12);
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_1311C:
    /* 0001311c   2  movea.l (A6)+,A2 */
    c->pc = RC_ADDR(0x0001311cu);
    rc_step(c, m, 12);
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1311E:
    /* 0001311e   4  dbf D2,000130fa */
    c->pc = RC_ADDR(0x0001311eu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_130FA; }
    }

L_13122:
    /* 00013122   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x00013122u);
    rc_step(c, m, 12);
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

L_13126:
    /* 00013126   2  unlk A5 */
    c->pc = RC_ADDR(0x00013126u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13128:
    /* 00013128   2  rts */
    c->pc = RC_ADDR(0x00013128u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
