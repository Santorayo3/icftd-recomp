/* fn_000062ea - 268 byte(s), 74 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000062ea(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000062eau): goto L_62EA;
    case RC_ADDR(0x000062eeu): goto L_62EE;
    case RC_ADDR(0x000062f2u): goto L_62F2;
    case RC_ADDR(0x000062f6u): goto L_62F6;
    case RC_ADDR(0x000062fau): goto L_62FA;
    case RC_ADDR(0x000062feu): goto L_62FE;
    case RC_ADDR(0x00006302u): goto L_6302;
    case RC_ADDR(0x00006306u): goto L_6306;
    case RC_ADDR(0x00006308u): goto L_6308;
    case RC_ADDR(0x0000630cu): goto L_630C;
    case RC_ADDR(0x0000630eu): goto L_630E;
    case RC_ADDR(0x00006314u): goto L_6314;
    case RC_ADDR(0x00006316u): goto L_6316;
    case RC_ADDR(0x0000631au): goto L_631A;
    case RC_ADDR(0x0000631eu): goto L_631E;
    case RC_ADDR(0x00006320u): goto L_6320;
    case RC_ADDR(0x00006324u): goto L_6324;
    case RC_ADDR(0x0000632au): goto L_632A;
    case RC_ADDR(0x0000632cu): goto L_632C;
    case RC_ADDR(0x00006330u): goto L_6330;
    case RC_ADDR(0x00006334u): goto L_6334;
    case RC_ADDR(0x00006336u): goto L_6336;
    case RC_ADDR(0x0000633au): goto L_633A;
    case RC_ADDR(0x0000633eu): goto L_633E;
    case RC_ADDR(0x00006342u): goto L_6342;
    case RC_ADDR(0x00006346u): goto L_6346;
    case RC_ADDR(0x0000634au): goto L_634A;
    case RC_ADDR(0x0000634eu): goto L_634E;
    case RC_ADDR(0x00006352u): goto L_6352;
    case RC_ADDR(0x00006354u): goto L_6354;
    case RC_ADDR(0x00006358u): goto L_6358;
    case RC_ADDR(0x0000635cu): goto L_635C;
    case RC_ADDR(0x0000635eu): goto L_635E;
    case RC_ADDR(0x00006362u): goto L_6362;
    case RC_ADDR(0x00006366u): goto L_6366;
    case RC_ADDR(0x0000636au): goto L_636A;
    case RC_ADDR(0x0000636eu): goto L_636E;
    case RC_ADDR(0x00006372u): goto L_6372;
    case RC_ADDR(0x00006374u): goto L_6374;
    case RC_ADDR(0x00006376u): goto L_6376;
    case RC_ADDR(0x0000637au): goto L_637A;
    case RC_ADDR(0x0000637eu): goto L_637E;
    case RC_ADDR(0x00006382u): goto L_6382;
    case RC_ADDR(0x00006386u): goto L_6386;
    case RC_ADDR(0x00006388u): goto L_6388;
    case RC_ADDR(0x0000638cu): goto L_638C;
    case RC_ADDR(0x00006390u): goto L_6390;
    case RC_ADDR(0x00006394u): goto L_6394;
    case RC_ADDR(0x00006398u): goto L_6398;
    case RC_ADDR(0x0000639au): goto L_639A;
    case RC_ADDR(0x000063a0u): goto L_63A0;
    case RC_ADDR(0x000063a4u): goto L_63A4;
    case RC_ADDR(0x000063a8u): goto L_63A8;
    case RC_ADDR(0x000063aau): goto L_63AA;
    case RC_ADDR(0x000063aeu): goto L_63AE;
    case RC_ADDR(0x000063b2u): goto L_63B2;
    case RC_ADDR(0x000063b4u): goto L_63B4;
    case RC_ADDR(0x000063b8u): goto L_63B8;
    case RC_ADDR(0x000063bcu): goto L_63BC;
    case RC_ADDR(0x000063c0u): goto L_63C0;
    case RC_ADDR(0x000063c4u): goto L_63C4;
    case RC_ADDR(0x000063c6u): goto L_63C6;
    case RC_ADDR(0x000063cau): goto L_63CA;
    case RC_ADDR(0x000063ceu): goto L_63CE;
    case RC_ADDR(0x000063d2u): goto L_63D2;
    case RC_ADDR(0x000063d6u): goto L_63D6;
    case RC_ADDR(0x000063dau): goto L_63DA;
    case RC_ADDR(0x000063dcu): goto L_63DC;
    case RC_ADDR(0x000063e0u): goto L_63E0;
    case RC_ADDR(0x000063e6u): goto L_63E6;
    case RC_ADDR(0x000063eau): goto L_63EA;
    case RC_ADDR(0x000063eeu): goto L_63EE;
    case RC_ADDR(0x000063f2u): goto L_63F2;
    case RC_ADDR(0x000063f4u): goto L_63F4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_62EA:
    /* 000062ea   4  link.w A5,#fffffff4 */
    c->pc = RC_ADDR(0x000062eau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xcu;

L_62EE:
    /* 000062ee   4  clr.w (fffff86a,A4) */
    c->pc = RC_ADDR(0x000062eeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x796u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_62F2:
    /* 000062f2   4  clr.w (ffffd5b4,A4) */
    c->pc = RC_ADDR(0x000062f2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2a4cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_62F6:
    /* 000062f6   4  clr.w (fffff868,A4) */
    c->pc = RC_ADDR(0x000062f6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x798u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_62FA:
    /* 000062fa   4  jsr (0000370e) */
    c->pc = RC_ADDR(0x000062fau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000062feu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000370eu);
    return;

L_62FE:
    /* 000062fe   4  jsr (00007700) */
    c->pc = RC_ADDR(0x000062feu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006302u));
    rc_depth++;
    c->pc = RC_ADDR(0x00007700u);
    return;

L_6302:
    /* 00006302   4  clr.b (fffff862,A4) */
    c->pc = RC_ADDR(0x00006302u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[4] - 0x79eu), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_6306:
    /* 00006306   2  bsr 000062ce */
    c->pc = RC_ADDR(0x00006306u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006308u));
    rc_depth++;
    c->pc = RC_ADDR(0x000062ceu);
    return;

L_6308:
    /* 00006308   4  tst.w (fffff8a4,A4) */
    c->pc = RC_ADDR(0x00006308u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x75cu));
    rc_set_nzvc(c, t0, RC_W);

L_630C:
    /* 0000630c   2  beq 00006320 */
    c->pc = RC_ADDR(0x0000630cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6320;

L_630E:
    /* 0000630e   6  cmpi.w #1d,(fffff78c,A4) */
    c->pc = RC_ADDR(0x0000630eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x0000001du);

L_6314:
    /* 00006314   2  beq 00006320 */
    c->pc = RC_ADDR(0x00006314u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6320;

L_6316:
    /* 00006316   4  move.w #fc,-(A7) */
    c->pc = RC_ADDR(0x00006316u);
    rc_step(c, m, 12);
    t0 = 0x000000fcu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_631A:
    /* 0000631a   4  jsr (ffff8044,A4) */
    c->pc = RC_ADDR(0x0000631au);
    rc_step(c, m, 18);
    /* vector 11 */
    rc_push32(c, m, RC_ADDR(0x0000631eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b3au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000302cu);
    return;

L_631E:
    /* 0000631e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000631eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_6320:
    /* 00006320   4  jsr (0000a982) */
    c->pc = RC_ADDR(0x00006320u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006324u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a982u);
    return;

L_6324:
    /* 00006324   6  cmpi.w #5,(ffff83e2,A4) */
    c->pc = RC_ADDR(0x00006324u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_632A:
    /* 0000632a   2  bne 00006336 */
    c->pc = RC_ADDR(0x0000632au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6336;

L_632C:
    /* 0000632c   4  move.w #c5,-(A7) */
    c->pc = RC_ADDR(0x0000632cu);
    rc_step(c, m, 12);
    t0 = 0x000000c5u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6330:
    /* 00006330   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x00006330u);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x00006334u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000803eu);
    return;

L_6334:
    /* 00006334   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00006334u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_6336:
    /* 00006336   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x00006336u);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x0000633au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022308u);
    return;

L_633A:
    /* 0000633a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000633au);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_633E:
    /* 0000633e   4  pea (000063ff) */
    c->pc = RC_ADDR(0x0000633eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000063ffu));

L_6342:
    /* 00006342   4  pea (000063f6) */
    c->pc = RC_ADDR(0x00006342u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000063f6u));

L_6346:
    /* 00006346   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x00006346u);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0000634au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_634A:
    /* 0000634a   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000634au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_634E:
    /* 0000634e   4  tst.w (ffff8d96,A4) */
    c->pc = RC_ADDR(0x0000634eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x726au));
    rc_set_nzvc(c, t0, RC_W);

L_6352:
    /* 00006352   2  beq 00006376 */
    c->pc = RC_ADDR(0x00006352u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6376;

L_6354:
    /* 00006354   4  move.w (ffff8d98,A4),-(A7) */
    c->pc = RC_ADDR(0x00006354u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7268u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6358:
    /* 00006358   4  jsr (00008314) */
    c->pc = RC_ADDR(0x00006358u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000635cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00008314u);
    return;

L_635C:
    /* 0000635c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000635cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_635E:
    /* 0000635e   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000635eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6362:
    /* 00006362   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00006362u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_6366:
    /* 00006366   4  move.l (4,A0),-(A7) */
    c->pc = RC_ADDR(0x00006366u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_636A:
    /* 0000636a   4  pea (0000640b) */
    c->pc = RC_ADDR(0x0000636au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000640bu));

L_636E:
    /* 0000636e   4  jsr (00001468) */
    c->pc = RC_ADDR(0x0000636eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006372u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001468u);
    return;

L_6372:
    /* 00006372   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00006372u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6374:
    /* 00006374   2  bra 0000639a */
    c->pc = RC_ADDR(0x00006374u);
    rc_step(c, m, 10);
    goto L_639A;

L_6376:
    /* 00006376   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00006376u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_637A:
    /* 0000637a   4  mulu.w #222,D0 */
    c->pc = RC_ADDR(0x0000637au);
    rc_step(c, m, 42);
    t0 = 0x00000222u;
    rc_mulu(c, 0, t0);

L_637E:
    /* 0000637e   4  move.w (fffff78c,A4),D1 */
    c->pc = RC_ADDR(0x0000637eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6382:
    /* 00006382   4  mulu.w #e,D1 */
    c->pc = RC_ADDR(0x00006382u);
    rc_step(c, m, 42);
    t0 = 0x0000000eu;
    rc_mulu(c, 1, t0);

L_6386:
    /* 00006386   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00006386u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_6388:
    /* 00006388   4  lea (ffffd738,A4),A0 */
    c->pc = RC_ADDR(0x00006388u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x28c8u);

L_638C:
    /* 0000638c   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000638cu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6390:
    /* 00006390   4  pea (00006417) */
    c->pc = RC_ADDR(0x00006390u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00006417u));

L_6394:
    /* 00006394   4  jsr (00001468) */
    c->pc = RC_ADDR(0x00006394u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006398u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001468u);
    return;

L_6398:
    /* 00006398   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00006398u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_639A:
    /* 0000639a   6  move.w #1,(fffff866,A4) */
    c->pc = RC_ADDR(0x0000639au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x79au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_63A0:
    /* 000063a0   4  pea (00006423) */
    c->pc = RC_ADDR(0x000063a0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00006423u));

L_63A4:
    /* 000063a4   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x000063a4u);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x000063a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_63A8:
    /* 000063a8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000063a8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_63AA:
    /* 000063aa   4  pea (00006431) */
    c->pc = RC_ADDR(0x000063aau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00006431u));

L_63AE:
    /* 000063ae   4  jsr (ffff824e,A4) */
    c->pc = RC_ADDR(0x000063aeu);
    rc_step(c, m, 18);
    /* vector 98 */
    rc_push32(c, m, RC_ADDR(0x000063b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d44u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ff16u);
    return;

L_63B2:
    /* 000063b2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000063b2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_63B4:
    /* 000063b4   4  move.l D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000063b4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_63B8:
    /* 000063b8   4  pea (000062ba) */
    c->pc = RC_ADDR(0x000063b8u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000062bau));

L_63BC:
    /* 000063bc   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x000063bcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_63C0:
    /* 000063c0   4  jsr (ffff8218,A4) */
    c->pc = RC_ADDR(0x000063c0u);
    rc_step(c, m, 18);
    /* vector 89 */
    rc_push32(c, m, RC_ADDR(0x000063c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d0eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f34cu);
    return;

L_63C4:
    /* 000063c4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000063c4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_63C6:
    /* 000063c6   4  jsr (ffff8284,A4) */
    c->pc = RC_ADDR(0x000063c6u);
    rc_step(c, m, 18);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x000063cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d7au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021320u);
    return;

L_63CA:
    /* 000063ca   4  clr.w (ffffd2a4,A4) */
    c->pc = RC_ADDR(0x000063cau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2d5cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_63CE:
    /* 000063ce   4  jsr (000018d0) */
    c->pc = RC_ADDR(0x000063ceu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000063d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x000018d0u);
    return;

L_63D2:
    /* 000063d2   4  clr.w (fffff866,A4) */
    c->pc = RC_ADDR(0x000063d2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x79au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_63D6:
    /* 000063d6   4  tst.w (ffff8460,A4) */
    c->pc = RC_ADDR(0x000063d6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7ba0u));
    rc_set_nzvc(c, t0, RC_W);

L_63DA:
    /* 000063da   2  bne 000063ea */
    c->pc = RC_ADDR(0x000063dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_63EA;

L_63DC:
    /* 000063dc   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x000063dcu);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x000063e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_63E0:
    /* 000063e0   6  move.w #1,(fffff7b4,A4) */
    c->pc = RC_ADDR(0x000063e0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x84cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_63E6:
    /* 000063e6   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x000063e6u);
    rc_step(c, m, 18);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x000063eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d32u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f814u);
    return;

L_63EA:
    /* 000063ea   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x000063eau);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x000063eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022308u);
    return;

L_63EE:
    /* 000063ee   4  clr.w (ffff9916,A4) */
    c->pc = RC_ADDR(0x000063eeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x66eau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_63F2:
    /* 000063f2   2  unlk A5 */
    c->pc = RC_ADDR(0x000063f2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_63F4:
    /* 000063f4   2  rts */
    c->pc = RC_ADDR(0x000063f4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
