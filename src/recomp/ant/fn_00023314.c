/* fn_00023314 - 272 byte(s), 87 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023314(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00023314u): goto L_23314;
    case RC_ADDR(0x00023318u): goto L_23318;
    case RC_ADDR(0x0002331au): goto L_2331A;
    case RC_ADDR(0x0002331eu): goto L_2331E;
    case RC_ADDR(0x00023320u): goto L_23320;
    case RC_ADDR(0x00023324u): goto L_23324;
    case RC_ADDR(0x00023328u): goto L_23328;
    case RC_ADDR(0x0002332au): goto L_2332A;
    case RC_ADDR(0x0002332cu): goto L_2332C;
    case RC_ADDR(0x0002332eu): goto L_2332E;
    case RC_ADDR(0x00023330u): goto L_23330;
    case RC_ADDR(0x00023334u): goto L_23334;
    case RC_ADDR(0x00023336u): goto L_23336;
    case RC_ADDR(0x00023338u): goto L_23338;
    case RC_ADDR(0x0002333cu): goto L_2333C;
    case RC_ADDR(0x0002333eu): goto L_2333E;
    case RC_ADDR(0x00023342u): goto L_23342;
    case RC_ADDR(0x00023346u): goto L_23346;
    case RC_ADDR(0x00023348u): goto L_23348;
    case RC_ADDR(0x0002334cu): goto L_2334C;
    case RC_ADDR(0x00023350u): goto L_23350;
    case RC_ADDR(0x00023352u): goto L_23352;
    case RC_ADDR(0x00023356u): goto L_23356;
    case RC_ADDR(0x00023358u): goto L_23358;
    case RC_ADDR(0x0002335cu): goto L_2335C;
    case RC_ADDR(0x0002335eu): goto L_2335E;
    case RC_ADDR(0x00023362u): goto L_23362;
    case RC_ADDR(0x00023364u): goto L_23364;
    case RC_ADDR(0x00023368u): goto L_23368;
    case RC_ADDR(0x0002336cu): goto L_2336C;
    case RC_ADDR(0x0002336eu): goto L_2336E;
    case RC_ADDR(0x00023372u): goto L_23372;
    case RC_ADDR(0x00023374u): goto L_23374;
    case RC_ADDR(0x00023378u): goto L_23378;
    case RC_ADDR(0x0002337cu): goto L_2337C;
    case RC_ADDR(0x00023380u): goto L_23380;
    case RC_ADDR(0x00023382u): goto L_23382;
    case RC_ADDR(0x00023386u): goto L_23386;
    case RC_ADDR(0x0002338au): goto L_2338A;
    case RC_ADDR(0x0002338cu): goto L_2338C;
    case RC_ADDR(0x00023390u): goto L_23390;
    case RC_ADDR(0x00023392u): goto L_23392;
    case RC_ADDR(0x00023396u): goto L_23396;
    case RC_ADDR(0x0002339au): goto L_2339A;
    case RC_ADDR(0x0002339cu): goto L_2339C;
    case RC_ADDR(0x000233a0u): goto L_233A0;
    case RC_ADDR(0x000233a2u): goto L_233A2;
    case RC_ADDR(0x000233a6u): goto L_233A6;
    case RC_ADDR(0x000233aau): goto L_233AA;
    case RC_ADDR(0x000233acu): goto L_233AC;
    case RC_ADDR(0x000233b0u): goto L_233B0;
    case RC_ADDR(0x000233b2u): goto L_233B2;
    case RC_ADDR(0x000233b6u): goto L_233B6;
    case RC_ADDR(0x000233bau): goto L_233BA;
    case RC_ADDR(0x000233bcu): goto L_233BC;
    case RC_ADDR(0x000233c0u): goto L_233C0;
    case RC_ADDR(0x000233c6u): goto L_233C6;
    case RC_ADDR(0x000233c8u): goto L_233C8;
    case RC_ADDR(0x000233cau): goto L_233CA;
    case RC_ADDR(0x000233ceu): goto L_233CE;
    case RC_ADDR(0x000233d2u): goto L_233D2;
    case RC_ADDR(0x000233d4u): goto L_233D4;
    case RC_ADDR(0x000233dcu): goto L_233DC;
    case RC_ADDR(0x000233e0u): goto L_233E0;
    case RC_ADDR(0x000233e2u): goto L_233E2;
    case RC_ADDR(0x000233e6u): goto L_233E6;
    case RC_ADDR(0x000233e8u): goto L_233E8;
    case RC_ADDR(0x000233ecu): goto L_233EC;
    case RC_ADDR(0x000233eeu): goto L_233EE;
    case RC_ADDR(0x000233f0u): goto L_233F0;
    case RC_ADDR(0x000233f4u): goto L_233F4;
    case RC_ADDR(0x000233f8u): goto L_233F8;
    case RC_ADDR(0x000233fcu): goto L_233FC;
    case RC_ADDR(0x000233feu): goto L_233FE;
    case RC_ADDR(0x00023400u): goto L_23400;
    case RC_ADDR(0x00023402u): goto L_23402;
    case RC_ADDR(0x00023404u): goto L_23404;
    case RC_ADDR(0x00023408u): goto L_23408;
    case RC_ADDR(0x0002340cu): goto L_2340C;
    case RC_ADDR(0x00023410u): goto L_23410;
    case RC_ADDR(0x00023412u): goto L_23412;
    case RC_ADDR(0x00023416u): goto L_23416;
    case RC_ADDR(0x0002341au): goto L_2341A;
    case RC_ADDR(0x0002341eu): goto L_2341E;
    case RC_ADDR(0x00023420u): goto L_23420;
    case RC_ADDR(0x00023424u): goto L_23424;
    case RC_ADDR(0x00023428u): goto L_23428;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23314:
    /* 00023314   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00023314u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_23318:
    /* 00023318   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00023318u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2331A:
    /* 0002331a   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0002331au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2331E:
    /* 0002331e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0002331eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_23320:
    /* 00023320   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00023320u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_23324:
    /* 00023324   4  tst.l (452c,A4) */
    c->pc = RC_ADDR(0x00023324u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x452cu));
    rc_set_nzvc(c, t0, RC_L);

L_23328:
    /* 00023328   2  beq 00023352 */
    c->pc = RC_ADDR(0x00023328u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_23352;

L_2332A:
    /* 0002332a   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0002332au);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_2332C:
    /* 0002332c   2  bra 00023338 */
    c->pc = RC_ADDR(0x0002332cu);
    rc_step(c, m, 10);
    goto L_23338;

L_2332E:
    /* 0002332e   2  move.w D4,-(A7) */
    c->pc = RC_ADDR(0x0002332eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 4, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_23330:
    /* 00023330   4  jsr (00023430) */
    c->pc = RC_ADDR(0x00023330u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00023334u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023430u);
    return;

L_23334:
    /* 00023334   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00023334u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_23336:
    /* 00023336   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x00023336u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_23338:
    /* 00023338   4  cmp.w (ffffd542,A4),D4 */
    c->pc = RC_ADDR(0x00023338u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2abeu));
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2333C:
    /* 0002333c   2  blt 0002332e */
    c->pc = RC_ADDR(0x0002333cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_2332E; }

L_2333E:
    /* 0002333e   4  move.w (ffffd542,A4),D0 */
    c->pc = RC_ADDR(0x0002333eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2abeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_23342:
    /* 00023342   4  muls.w #6,D0 */
    c->pc = RC_ADDR(0x00023342u);
    rc_step(c, m, 42);
    t0 = 0x00000006u;
    rc_muls(c, 0, t0);

L_23346:
    /* 00023346   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00023346u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23348:
    /* 00023348   4  move.l (452c,A4),-(A7) */
    c->pc = RC_ADDR(0x00023348u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x452cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2334C:
    /* 0002334c   4  jsr (00023772) */
    c->pc = RC_ADDR(0x0002334cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00023350u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023772u);
    return;

L_23350:
    /* 00023350   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00023350u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_23352:
    /* 00023352   4  tst.l (454e,A4) */
    c->pc = RC_ADDR(0x00023352u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x454eu));
    rc_set_nzvc(c, t0, RC_L);

L_23356:
    /* 00023356   2  beq 0002335e */
    c->pc = RC_ADDR(0x00023356u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2335E;

L_23358:
    /* 00023358   4  movea.l (454e,A4),A0 */
    c->pc = RC_ADDR(0x00023358u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x454eu));
    c->a[0] = t0;

L_2335C:
    /* 0002335c   2  jsr (A0) */
    c->pc = RC_ADDR(0x0002335cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0002335eu));
    rc_depth++;
    t3 = c->a[0];
    c->pc = t3;
    return;

L_2335E:
    /* 0002335e   4  tst.l (ffffd548,A4) */
    c->pc = RC_ADDR(0x0002335eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2ab8u));
    rc_set_nzvc(c, t0, RC_L);

L_23362:
    /* 00023362   2  beq 0002336e */
    c->pc = RC_ADDR(0x00023362u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2336E;

L_23364:
    /* 00023364   4  move.l (ffffd548,A4),-(A7) */
    c->pc = RC_ADDR(0x00023364u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2ab8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23368:
    /* 00023368   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00023368u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0002336cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e3au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023538u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002353cu);
    return;

L_2336C:
    /* 0002336c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0002336cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2336E:
    /* 0002336e   4  tst.l (4552,A4) */
    c->pc = RC_ADDR(0x0002336eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4552u));
    rc_set_nzvc(c, t0, RC_L);

L_23372:
    /* 00023372   2  beq 0002337c */
    c->pc = RC_ADDR(0x00023372u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2337C;

L_23374:
    /* 00023374   4  movea.l (4552,A4),A0 */
    c->pc = RC_ADDR(0x00023374u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4552u));
    c->a[0] = t0;

L_23378:
    /* 00023378   4  move.l (4556,A4),(A0) */
    c->pc = RC_ADDR(0x00023378u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4556u));
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2337C:
    /* 0002337c   4  tst.l (455a,A4) */
    c->pc = RC_ADDR(0x0002337cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x455au));
    rc_set_nzvc(c, t0, RC_L);

L_23380:
    /* 00023380   2  beq 0002338c */
    c->pc = RC_ADDR(0x00023380u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2338C;

L_23382:
    /* 00023382   4  move.l (455a,A4),-(A7) */
    c->pc = RC_ADDR(0x00023382u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x455au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23386:
    /* 00023386   4  jsr (00023590) */
    c->pc = RC_ADDR(0x00023386u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002338au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023590u);
    return;

L_2338A:
    /* 0002338a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0002338au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2338C:
    /* 0002338c   4  tst.l (455e,A4) */
    c->pc = RC_ADDR(0x0002338cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x455eu));
    rc_set_nzvc(c, t0, RC_L);

L_23390:
    /* 00023390   2  beq 0002339c */
    c->pc = RC_ADDR(0x00023390u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2339C;

L_23392:
    /* 00023392   4  move.l (455e,A4),-(A7) */
    c->pc = RC_ADDR(0x00023392u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x455eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23396:
    /* 00023396   4  jsr (00023590) */
    c->pc = RC_ADDR(0x00023396u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002339au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023590u);
    return;

L_2339A:
    /* 0002339a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0002339au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2339C:
    /* 0002339c   4  tst.l (4562,A4) */
    c->pc = RC_ADDR(0x0002339cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4562u));
    rc_set_nzvc(c, t0, RC_L);

L_233A0:
    /* 000233a0   2  beq 000233ac */
    c->pc = RC_ADDR(0x000233a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_233AC;

L_233A2:
    /* 000233a2   4  move.l (4562,A4),-(A7) */
    c->pc = RC_ADDR(0x000233a2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4562u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_233A6:
    /* 000233a6   4  jsr (00023590) */
    c->pc = RC_ADDR(0x000233a6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000233aau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023590u);
    return;

L_233AA:
    /* 000233aa   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000233aau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_233AC:
    /* 000233ac   4  tst.l (4566,A4) */
    c->pc = RC_ADDR(0x000233acu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4566u));
    rc_set_nzvc(c, t0, RC_L);

L_233B0:
    /* 000233b0   2  beq 000233bc */
    c->pc = RC_ADDR(0x000233b0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_233BC;

L_233B2:
    /* 000233b2   4  move.l (4566,A4),-(A7) */
    c->pc = RC_ADDR(0x000233b2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4566u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_233B6:
    /* 000233b6   4  jsr (00023590) */
    c->pc = RC_ADDR(0x000233b6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000233bau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023590u);
    return;

L_233BA:
    /* 000233ba   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000233bau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_233BC:
    /* 000233bc   4  movea.l (00000004).l,A6 */
    c->pc = RC_ADDR(0x000233bcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, 0x00000004u);
    c->a[6] = t0;

L_233C0:
    /* 000233c0   6  btst #4,(129,A6) */
    c->pc = RC_ADDR(0x000233c0u);
    rc_step(c, m, 16);
    t3 = (c->a[6] + 0x129u);
    t4 = 0x00000004u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_233C6:
    /* 000233c6   2  beq 000233dc */
    c->pc = RC_ADDR(0x000233c6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_233DC;

L_233C8:
    /* 000233c8   2  move.l A5,-(A7) */
    c->pc = RC_ADDR(0x000233c8u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 5, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_233CA:
    /* 000233ca   4  lea (000233d6),A5 */
    c->pc = RC_ADDR(0x000233cau);
    rc_step(c, m, 8);
    c->a[5] = RC_ADDR(0x000233d6u);

L_233CE:
    /* 000233ce   4  jsr (ffffffe2,A6) */
    c->pc = RC_ADDR(0x000233ceu);
    rc_step(c, m, 18);
    c->pc = RC_ADDR(0x000233d2u);
    rc_push32(c, m, RC_ADDR(0x000233d2u));
    rc_depth++;
    rc_os_call_a6(c, m, -30);

L_233D2:
    /* 000233d2   2  movea.l (A7)+,A5 */
    c->pc = RC_ADDR(0x000233d2u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;

L_233D4:
    /* 000233d4   2  bra 000233dc */
    c->pc = RC_ADDR(0x000233d4u);
    rc_step(c, m, 10);
    goto L_233DC;

L_233DC:
    /* 000233dc   4  tst.l (4536,A4) */
    c->pc = RC_ADDR(0x000233dcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4536u));
    rc_set_nzvc(c, t0, RC_L);

L_233E0:
    /* 000233e0   2  bne 00023412 */
    c->pc = RC_ADDR(0x000233e0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_23412;

L_233E2:
    /* 000233e2   4  tst.l (4542,A4) */
    c->pc = RC_ADDR(0x000233e2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4542u));
    rc_set_nzvc(c, t0, RC_L);

L_233E6:
    /* 000233e6   2  beq 00023410 */
    c->pc = RC_ADDR(0x000233e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_23410;

L_233E8:
    /* 000233e8   4  move.w (4540,A4),D0 */
    c->pc = RC_ADDR(0x000233e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4540u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_233EC:
    /* 000233ec   2  ext.l D0 */
    c->pc = RC_ADDR(0x000233ecu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_233EE:
    /* 000233ee   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000233eeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_233F0:
    /* 000233f0   4  move.l (4542,A4),-(A7) */
    c->pc = RC_ADDR(0x000233f0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4542u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_233F4:
    /* 000233f4   4  jsr (00023772) */
    c->pc = RC_ADDR(0x000233f4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000233f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023772u);
    return;

L_233F8:
    /* 000233f8   4  move.w (453e,A4),D0 */
    c->pc = RC_ADDR(0x000233f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x453eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_233FC:
    /* 000233fc   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x000233fcu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_233FE:
    /* 000233fe   2  ext.l D0 */
    c->pc = RC_ADDR(0x000233feu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_23400:
    /* 00023400   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00023400u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_23402:
    /* 00023402   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00023402u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23404:
    /* 00023404   4  move.l (453a,A4),-(A7) */
    c->pc = RC_ADDR(0x00023404u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x453au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23408:
    /* 00023408   4  jsr (00023772) */
    c->pc = RC_ADDR(0x00023408u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002340cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023772u);
    return;

L_2340C:
    /* 0002340c   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x0002340cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x10u);

L_23410:
    /* 00023410   2  bra 00023420 */
    c->pc = RC_ADDR(0x00023410u);
    rc_step(c, m, 10);
    goto L_23420;

L_23412:
    /* 00023412   4  jsr (00023766) */
    c->pc = RC_ADDR(0x00023412u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00023416u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023766u);
    return;

L_23416:
    /* 00023416   4  move.l (4536,A4),-(A7) */
    c->pc = RC_ADDR(0x00023416u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4536u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2341A:
    /* 0002341a   4  jsr (00023800) */
    c->pc = RC_ADDR(0x0002341au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002341eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023800u);
    return;

L_2341E:
    /* 0002341e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0002341eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_23420:
    /* 00023420   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00023420u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_23424:
    /* 00023424   4  movea.l (4520,A4),A7 */
    c->pc = RC_ADDR(0x00023424u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4520u));
    c->a[7] = t0;

L_23428:
    /* 00023428   2  rts */
    c->pc = RC_ADDR(0x00023428u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
