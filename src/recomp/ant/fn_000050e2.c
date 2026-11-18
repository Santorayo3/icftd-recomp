/* fn_000050e2 - 298 byte(s), 84 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000050e2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000050e2u): goto L_50E2;
    case RC_ADDR(0x000050e6u): goto L_50E6;
    case RC_ADDR(0x000050eau): goto L_50EA;
    case RC_ADDR(0x000050ecu): goto L_50EC;
    case RC_ADDR(0x000050f2u): goto L_50F2;
    case RC_ADDR(0x000050f4u): goto L_50F4;
    case RC_ADDR(0x000050fau): goto L_50FA;
    case RC_ADDR(0x000050feu): goto L_50FE;
    case RC_ADDR(0x00005100u): goto L_5100;
    case RC_ADDR(0x00005102u): goto L_5102;
    case RC_ADDR(0x00005106u): goto L_5106;
    case RC_ADDR(0x0000510cu): goto L_510C;
    case RC_ADDR(0x00005110u): goto L_5110;
    case RC_ADDR(0x00005112u): goto L_5112;
    case RC_ADDR(0x00005114u): goto L_5114;
    case RC_ADDR(0x00005118u): goto L_5118;
    case RC_ADDR(0x0000511eu): goto L_511E;
    case RC_ADDR(0x00005122u): goto L_5122;
    case RC_ADDR(0x00005126u): goto L_5126;
    case RC_ADDR(0x0000512au): goto L_512A;
    case RC_ADDR(0x0000512eu): goto L_512E;
    case RC_ADDR(0x00005132u): goto L_5132;
    case RC_ADDR(0x00005136u): goto L_5136;
    case RC_ADDR(0x0000513au): goto L_513A;
    case RC_ADDR(0x0000513eu): goto L_513E;
    case RC_ADDR(0x00005140u): goto L_5140;
    case RC_ADDR(0x00005142u): goto L_5142;
    case RC_ADDR(0x00005146u): goto L_5146;
    case RC_ADDR(0x0000514cu): goto L_514C;
    case RC_ADDR(0x00005150u): goto L_5150;
    case RC_ADDR(0x00005154u): goto L_5154;
    case RC_ADDR(0x00005158u): goto L_5158;
    case RC_ADDR(0x0000515cu): goto L_515C;
    case RC_ADDR(0x00005160u): goto L_5160;
    case RC_ADDR(0x00005164u): goto L_5164;
    case RC_ADDR(0x00005168u): goto L_5168;
    case RC_ADDR(0x0000516au): goto L_516A;
    case RC_ADDR(0x0000516cu): goto L_516C;
    case RC_ADDR(0x00005170u): goto L_5170;
    case RC_ADDR(0x00005172u): goto L_5172;
    case RC_ADDR(0x00005174u): goto L_5174;
    case RC_ADDR(0x00005178u): goto L_5178;
    case RC_ADDR(0x0000517cu): goto L_517C;
    case RC_ADDR(0x0000517eu): goto L_517E;
    case RC_ADDR(0x00005182u): goto L_5182;
    case RC_ADDR(0x00005186u): goto L_5186;
    case RC_ADDR(0x00005188u): goto L_5188;
    case RC_ADDR(0x0000518cu): goto L_518C;
    case RC_ADDR(0x00005190u): goto L_5190;
    case RC_ADDR(0x00005194u): goto L_5194;
    case RC_ADDR(0x00005196u): goto L_5196;
    case RC_ADDR(0x0000519au): goto L_519A;
    case RC_ADDR(0x0000519eu): goto L_519E;
    case RC_ADDR(0x000051a2u): goto L_51A2;
    case RC_ADDR(0x000051a4u): goto L_51A4;
    case RC_ADDR(0x000051a8u): goto L_51A8;
    case RC_ADDR(0x000051acu): goto L_51AC;
    case RC_ADDR(0x000051aeu): goto L_51AE;
    case RC_ADDR(0x000051b2u): goto L_51B2;
    case RC_ADDR(0x000051b4u): goto L_51B4;
    case RC_ADDR(0x000051b8u): goto L_51B8;
    case RC_ADDR(0x000051bcu): goto L_51BC;
    case RC_ADDR(0x000051c0u): goto L_51C0;
    case RC_ADDR(0x000051c2u): goto L_51C2;
    case RC_ADDR(0x000051c6u): goto L_51C6;
    case RC_ADDR(0x000051c8u): goto L_51C8;
    case RC_ADDR(0x000051ccu): goto L_51CC;
    case RC_ADDR(0x000051d0u): goto L_51D0;
    case RC_ADDR(0x000051d4u): goto L_51D4;
    case RC_ADDR(0x000051d8u): goto L_51D8;
    case RC_ADDR(0x000051dcu): goto L_51DC;
    case RC_ADDR(0x000051deu): goto L_51DE;
    case RC_ADDR(0x000051e0u): goto L_51E0;
    case RC_ADDR(0x000051e4u): goto L_51E4;
    case RC_ADDR(0x000051e6u): goto L_51E6;
    case RC_ADDR(0x000051e8u): goto L_51E8;
    case RC_ADDR(0x000051ecu): goto L_51EC;
    case RC_ADDR(0x000051f2u): goto L_51F2;
    case RC_ADDR(0x000051f6u): goto L_51F6;
    case RC_ADDR(0x000051fcu): goto L_51FC;
    case RC_ADDR(0x00005200u): goto L_5200;
    case RC_ADDR(0x00005204u): goto L_5204;
    case RC_ADDR(0x00005208u): goto L_5208;
    case RC_ADDR(0x0000520au): goto L_520A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_50E2:
    /* 000050e2   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x000050e2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_50E6:
    /* 000050e6   4  tst.w (ffff83e2,A4) */
    c->pc = RC_ADDR(0x000050e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_set_nzvc(c, t0, RC_W);

L_50EA:
    /* 000050ea   2  bne 000050f4 */
    c->pc = RC_ADDR(0x000050eau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_50F4;

L_50EC:
    /* 000050ec   6  move.w #1e,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000050ecu);
    rc_step(c, m, 16);
    t0 = 0x0000001eu;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_50F2:
    /* 000050f2   2  bra 000050fa */
    c->pc = RC_ADDR(0x000050f2u);
    rc_step(c, m, 10);
    goto L_50FA;

L_50F4:
    /* 000050f4   6  move.w #5,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000050f4u);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_50FA:
    /* 000050fa   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x000050fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_50FE:
    /* 000050fe   2  ext.l D0 */
    c->pc = RC_ADDR(0x000050feu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_5100:
    /* 00005100   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00005100u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_5102:
    /* 00005102   4  lea (ffff84de,A4),A0 */
    c->pc = RC_ADDR(0x00005102u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b22u);

L_5106:
    /* 00005106   6  move.l (0,A0,D0.w),(fffffff2,A5) */
    c->pc = RC_ADDR(0x00005106u);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_510C:
    /* 0000510c   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x0000510cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5110:
    /* 00005110   2  ext.l D0 */
    c->pc = RC_ADDR(0x00005110u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_5112:
    /* 00005112   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00005112u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_5114:
    /* 00005114   4  lea (ffff84a2,A4),A0 */
    c->pc = RC_ADDR(0x00005114u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b5eu);

L_5118:
    /* 00005118   6  move.l (0,A0,D0.w),(ffffffee,A5) */
    c->pc = RC_ADDR(0x00005118u);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_511E:
    /* 0000511e   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000511eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5122:
    /* 00005122   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00005122u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5126:
    /* 00005126   4  movea.l (ffffffee,A5),A0 */
    c->pc = RC_ADDR(0x00005126u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x12u));
    c->a[0] = t0;

L_512A:
    /* 0000512a   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000512au);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_512E:
    /* 0000512e   4  beq 00005208 */
    c->pc = RC_ADDR(0x0000512eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5208;

L_5132:
    /* 00005132   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00005132u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5136:
    /* 00005136   4  movea.l (ffffffee,A5),A0 */
    c->pc = RC_ADDR(0x00005136u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x12u));
    c->a[0] = t0;

L_513A:
    /* 0000513a   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000513au);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_513E:
    /* 0000513e   2  ext.w D1 */
    c->pc = RC_ADDR(0x0000513eu);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_5140:
    /* 00005140   2  subq.w #1,D1 */
    c->pc = RC_ADDR(0x00005140u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_5142:
    /* 00005142   4  move.w D1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00005142u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5146:
    /* 00005146   6  cmpi.w #27,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00005146u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_514C:
    /* 0000514c   4  bge 00005200 */
    c->pc = RC_ADDR(0x0000514cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_5200;

L_5150:
    /* 00005150   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00005150u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5154:
    /* 00005154   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00005154u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_5158:
    /* 00005158   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00005158u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_515C:
    /* 0000515c   4  beq 00005200 */
    c->pc = RC_ADDR(0x0000515cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5200;

L_5160:
    /* 00005160   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00005160u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5164:
    /* 00005164   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00005164u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5168:
    /* 00005168   2  ext.l D0 */
    c->pc = RC_ADDR(0x00005168u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_516A:
    /* 0000516a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000516au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_516C:
    /* 0000516c   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0000516cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5170:
    /* 00005170   2  ext.l D1 */
    c->pc = RC_ADDR(0x00005170u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_5172:
    /* 00005172   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00005172u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_5174:
    /* 00005174   4  lea (fffff8aa,A4),A0 */
    c->pc = RC_ADDR(0x00005174u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x756u);

L_5178:
    /* 00005178   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00005178u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_517C:
    /* 0000517c   2  ext.w D1 */
    c->pc = RC_ADDR(0x0000517cu);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_517E:
    /* 0000517e   4  move.w D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000517eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5182:
    /* 00005182   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00005182u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_5186:
    /* 00005186   2  beq 000051f2 */
    c->pc = RC_ADDR(0x00005186u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_51F2;

L_5188:
    /* 00005188   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00005188u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_518C:
    /* 0000518c   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x0000518cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_5190:
    /* 00005190   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00005190u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_5194:
    /* 00005194   2  beq 000051f2 */
    c->pc = RC_ADDR(0x00005194u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_51F2;

L_5196:
    /* 00005196   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00005196u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_519A:
    /* 0000519a   4  lea (ffff85c8,A4),A0 */
    c->pc = RC_ADDR(0x0000519au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a38u);

L_519E:
    /* 0000519e   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000519eu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_51A2:
    /* 000051a2   2  ext.w D1 */
    c->pc = RC_ADDR(0x000051a2u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_51A4:
    /* 000051a4   4  sub.w D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000051a4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 1, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_51A8:
    /* 000051a8   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x000051a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_51AC:
    /* 000051ac   2  bge 000051b4 */
    c->pc = RC_ADDR(0x000051acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_51B4;

L_51AE:
    /* 000051ae   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x000051aeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_51B2:
    /* 000051b2   2  bra 000051d8 */
    c->pc = RC_ADDR(0x000051b2u);
    rc_step(c, m, 10);
    goto L_51D8;

L_51B4:
    /* 000051b4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000051b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_51B8:
    /* 000051b8   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x000051b8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_51BC:
    /* 000051bc   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000051bcu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_51C0:
    /* 000051c0   2  ext.w D1 */
    c->pc = RC_ADDR(0x000051c0u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_51C2:
    /* 000051c2   4  cmp.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x000051c2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_51C6:
    /* 000051c6   2  ble 000051d4 */
    c->pc = RC_ADDR(0x000051c6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_51D4;

L_51C8:
    /* 000051c8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000051c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_51CC:
    /* 000051cc   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x000051ccu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_51D0:
    /* 000051d0   4  subq.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000051d0u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_51D4:
    /* 000051d4   4  addq.w #1,(6e6,A4) */
    c->pc = RC_ADDR(0x000051d4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6e6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_51D8:
    /* 000051d8   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x000051d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_51DC:
    /* 000051dc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000051dcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_51DE:
    /* 000051de   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000051deu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_51E0:
    /* 000051e0   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x000051e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_51E4:
    /* 000051e4   2  ext.l D1 */
    c->pc = RC_ADDR(0x000051e4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_51E6:
    /* 000051e6   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x000051e6u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_51E8:
    /* 000051e8   4  lea (fffff8aa,A4),A0 */
    c->pc = RC_ADDR(0x000051e8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x756u);

L_51EC:
    /* 000051ec   6  move.b (fffffff9,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000051ecu);
    rc_step(c, m, 22);
    t0 = rc_rd8(c, m, (c->a[5] - 0x7u));
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_51F2:
    /* 000051f2   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000051f2u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_51F6:
    /* 000051f6   6  cmpi.w #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000051f6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_51FC:
    /* 000051fc   4  blt 00005164 */
    c->pc = RC_ADDR(0x000051fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_5164; }

L_5200:
    /* 00005200   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00005200u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_5204:
    /* 00005204   4  bra 00005122 */
    c->pc = RC_ADDR(0x00005204u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_5122;

L_5208:
    /* 00005208   2  unlk A5 */
    c->pc = RC_ADDR(0x00005208u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_520A:
    /* 0000520a   2  rts */
    c->pc = RC_ADDR(0x0000520au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
