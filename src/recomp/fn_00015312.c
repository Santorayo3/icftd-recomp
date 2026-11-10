/* fn_00015312 - 248 byte(s), 76 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00015312(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00015312u): goto L_15312;
    case RC_ADDR(0x00015316u): goto L_15316;
    case RC_ADDR(0x0001531au): goto L_1531A;
    case RC_ADDR(0x0001531cu): goto L_1531C;
    case RC_ADDR(0x0001531eu): goto L_1531E;
    case RC_ADDR(0x00015322u): goto L_15322;
    case RC_ADDR(0x00015326u): goto L_15326;
    case RC_ADDR(0x0001532au): goto L_1532A;
    case RC_ADDR(0x0001532eu): goto L_1532E;
    case RC_ADDR(0x00015330u): goto L_15330;
    case RC_ADDR(0x00015332u): goto L_15332;
    case RC_ADDR(0x00015336u): goto L_15336;
    case RC_ADDR(0x0001533cu): goto L_1533C;
    case RC_ADDR(0x00015340u): goto L_15340;
    case RC_ADDR(0x00015342u): goto L_15342;
    case RC_ADDR(0x00015344u): goto L_15344;
    case RC_ADDR(0x00015348u): goto L_15348;
    case RC_ADDR(0x0001534eu): goto L_1534E;
    case RC_ADDR(0x00015352u): goto L_15352;
    case RC_ADDR(0x00015356u): goto L_15356;
    case RC_ADDR(0x0001535au): goto L_1535A;
    case RC_ADDR(0x0001535cu): goto L_1535C;
    case RC_ADDR(0x0001535eu): goto L_1535E;
    case RC_ADDR(0x00015362u): goto L_15362;
    case RC_ADDR(0x00015364u): goto L_15364;
    case RC_ADDR(0x00015368u): goto L_15368;
    case RC_ADDR(0x0001536au): goto L_1536A;
    case RC_ADDR(0x0001536eu): goto L_1536E;
    case RC_ADDR(0x00015370u): goto L_15370;
    case RC_ADDR(0x00015372u): goto L_15372;
    case RC_ADDR(0x00015376u): goto L_15376;
    case RC_ADDR(0x0001537cu): goto L_1537C;
    case RC_ADDR(0x0001537eu): goto L_1537E;
    case RC_ADDR(0x00015382u): goto L_15382;
    case RC_ADDR(0x00015384u): goto L_15384;
    case RC_ADDR(0x00015386u): goto L_15386;
    case RC_ADDR(0x0001538au): goto L_1538A;
    case RC_ADDR(0x00015390u): goto L_15390;
    case RC_ADDR(0x00015392u): goto L_15392;
    case RC_ADDR(0x00015396u): goto L_15396;
    case RC_ADDR(0x00015398u): goto L_15398;
    case RC_ADDR(0x0001539au): goto L_1539A;
    case RC_ADDR(0x0001539eu): goto L_1539E;
    case RC_ADDR(0x000153a0u): goto L_153A0;
    case RC_ADDR(0x000153a4u): goto L_153A4;
    case RC_ADDR(0x000153a6u): goto L_153A6;
    case RC_ADDR(0x000153a8u): goto L_153A8;
    case RC_ADDR(0x000153aau): goto L_153AA;
    case RC_ADDR(0x000153acu): goto L_153AC;
    case RC_ADDR(0x000153b0u): goto L_153B0;
    case RC_ADDR(0x000153b2u): goto L_153B2;
    case RC_ADDR(0x000153b8u): goto L_153B8;
    case RC_ADDR(0x000153beu): goto L_153BE;
    case RC_ADDR(0x000153c0u): goto L_153C0;
    case RC_ADDR(0x000153c4u): goto L_153C4;
    case RC_ADDR(0x000153c8u): goto L_153C8;
    case RC_ADDR(0x000153cau): goto L_153CA;
    case RC_ADDR(0x000153ccu): goto L_153CC;
    case RC_ADDR(0x000153d0u): goto L_153D0;
    case RC_ADDR(0x000153d6u): goto L_153D6;
    case RC_ADDR(0x000153dau): goto L_153DA;
    case RC_ADDR(0x000153dcu): goto L_153DC;
    case RC_ADDR(0x000153deu): goto L_153DE;
    case RC_ADDR(0x000153e2u): goto L_153E2;
    case RC_ADDR(0x000153e6u): goto L_153E6;
    case RC_ADDR(0x000153e8u): goto L_153E8;
    case RC_ADDR(0x000153eau): goto L_153EA;
    case RC_ADDR(0x000153eeu): goto L_153EE;
    case RC_ADDR(0x000153f4u): goto L_153F4;
    case RC_ADDR(0x000153f6u): goto L_153F6;
    case RC_ADDR(0x000153f8u): goto L_153F8;
    case RC_ADDR(0x000153fcu): goto L_153FC;
    case RC_ADDR(0x000153feu): goto L_153FE;
    case RC_ADDR(0x00015400u): goto L_15400;
    case RC_ADDR(0x00015404u): goto L_15404;
    case RC_ADDR(0x00015408u): goto L_15408;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15312:
    /* 00015312   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00015312u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_15316:
    /* 00015316   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015316u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1531A:
    /* 0001531a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001531au);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1531C:
    /* 0001531c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001531cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1531E:
    /* 0001531e   4  lea (1248,A4),A0 */
    c->pc = RC_ADDR(0x0001531eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1248u);

L_15322:
    /* 00015322   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015322u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_15326:
    /* 00015326   4  bne 000153f8 */
    c->pc = RC_ADDR(0x00015326u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_153F8;

L_1532A:
    /* 0001532a   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001532au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1532E:
    /* 0001532e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001532eu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_15330:
    /* 00015330   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015330u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15332:
    /* 00015332   4  lea (1248,A4),A0 */
    c->pc = RC_ADDR(0x00015332u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1248u);

L_15336:
    /* 00015336   6  move.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015336u);
    rc_step(c, m);
    t0 = 0x00000002u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1533C:
    /* 0001533c   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001533cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15340:
    /* 00015340   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015340u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_15342:
    /* 00015342   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015342u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15344:
    /* 00015344   4  lea (123c,A4),A0 */
    c->pc = RC_ADDR(0x00015344u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x123cu);

L_15348:
    /* 00015348   6  move.w (0,A0,D0.w),(fffffffe,A5) */
    c->pc = RC_ADDR(0x00015348u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1534E:
    /* 0001534e   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0001534eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15352:
    /* 00015352   4  add.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00015352u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_15356:
    /* 00015356   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015356u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1535A:
    /* 0001535a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001535au);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1535C:
    /* 0001535c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001535cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1535E:
    /* 0001535e   4  lea (127a,A4),A0 */
    c->pc = RC_ADDR(0x0001535eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x127au);

L_15362:
    /* 00015362   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00015362u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_15364:
    /* 00015364   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x00015364u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15368:
    /* 00015368   2  add.w D0,(A0) */
    c->pc = RC_ADDR(0x00015368u);
    rc_step(c, m);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1536A:
    /* 0001536a   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001536au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1536E:
    /* 0001536e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001536eu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_15370:
    /* 00015370   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015370u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15372:
    /* 00015372   4  lea (127a,A4),A0 */
    c->pc = RC_ADDR(0x00015372u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x127au);

L_15376:
    /* 00015376   6  cmpi.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015376u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1537C:
    /* 0001537c   2  bgt 00015392 */
    c->pc = RC_ADDR(0x0001537cu);
    rc_step(c, m);
    if (rc_cond(c, 14)) goto L_15392;

L_1537E:
    /* 0001537e   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001537eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15382:
    /* 00015382   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015382u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_15384:
    /* 00015384   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015384u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15386:
    /* 00015386   4  lea (127a,A4),A0 */
    c->pc = RC_ADDR(0x00015386u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x127au);

L_1538A:
    /* 0001538a   6  cmpi.w #fffe,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001538au);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000fffeu);

L_15390:
    /* 00015390   2  bge 000153ac */
    c->pc = RC_ADDR(0x00015390u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_153AC;

L_15392:
    /* 00015392   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00015392u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15396:
    /* 00015396   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015396u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_15398:
    /* 00015398   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015398u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1539A:
    /* 0001539a   4  lea (127a,A4),A0 */
    c->pc = RC_ADDR(0x0001539au);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x127au);

L_1539E:
    /* 0001539e   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0001539eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_153A0:
    /* 000153a0   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x000153a0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_153A4:
    /* 000153a4   2  sub.w D0,(A0) */
    c->pc = RC_ADDR(0x000153a4u);
    rc_step(c, m);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_153A6:
    /* 000153a6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000153a6u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_153A8:
    /* 000153a8   2  unlk A5 */
    c->pc = RC_ADDR(0x000153a8u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_153AA:
    /* 000153aa   2  rts */
    c->pc = RC_ADDR(0x000153aau);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_153AC:
    /* 000153ac   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000153acu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_153B0:
    /* 000153b0   2  bge 000153b8 */
    c->pc = RC_ADDR(0x000153b0u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_153B8;

L_153B2:
    /* 000153b2   6  move.w #7,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000153b2u);
    rc_step(c, m);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_153B8:
    /* 000153b8   6  cmpi.w #7,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000153b8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_153BE:
    /* 000153be   2  ble 000153c4 */
    c->pc = RC_ADDR(0x000153beu);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_153C4;

L_153C0:
    /* 000153c0   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000153c0u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_153C4:
    /* 000153c4   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000153c4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_153C8:
    /* 000153c8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000153c8u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_153CA:
    /* 000153ca   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000153cau);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_153CC:
    /* 000153cc   4  lea (123c,A4),A0 */
    c->pc = RC_ADDR(0x000153ccu);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x123cu);

L_153D0:
    /* 000153d0   6  move.w (fffffffe,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000153d0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_153D6:
    /* 000153d6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000153d6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_153DA:
    /* 000153da   2  ext.l D0 */
    c->pc = RC_ADDR(0x000153dau);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_153DC:
    /* 000153dc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000153dcu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_153DE:
    /* 000153de   4  lea (ffffb21a,A4),A0 */
    c->pc = RC_ADDR(0x000153deu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4de6u);

L_153E2:
    /* 000153e2   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x000153e2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_153E6:
    /* 000153e6   2  ext.l D1 */
    c->pc = RC_ADDR(0x000153e6u);
    rc_step(c, m);
    rc_ext_l(c, 1);

L_153E8:
    /* 000153e8   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000153e8u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_153EA:
    /* 000153ea   4  lea (1234,A4),A1 */
    c->pc = RC_ADDR(0x000153eau);
    rc_step(c, m);
    c->a[1] = (c->a[4] + 0x1234u);

L_153EE:
    /* 000153ee   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000153eeu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_153F4:
    /* 000153f4   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000153f4u);
    rc_step(c, m);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_153F6:
    /* 000153f6   2  bra 000153a8 */
    c->pc = RC_ADDR(0x000153f6u);
    rc_step(c, m);
    rc_tick();
    goto L_153A8;

L_153F8:
    /* 000153f8   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000153f8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_153FC:
    /* 000153fc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000153fcu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_153FE:
    /* 000153fe   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000153feu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15400:
    /* 00015400   4  lea (1248,A4),A0 */
    c->pc = RC_ADDR(0x00015400u);
    rc_step(c, m);
    c->a[0] = (c->a[4] + 0x1248u);

L_15404:
    /* 00015404   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00015404u);
    rc_step(c, m);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15408:
    /* 00015408   2  bra 000153a8 */
    c->pc = RC_ADDR(0x00015408u);
    rc_step(c, m);
    rc_tick();
    goto L_153A8;

}
