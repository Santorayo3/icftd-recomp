/* fn_00012442 - 222 byte(s), 59 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00012442(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00012442u): goto L_12442;
    case RC_ADDR(0x00012446u): goto L_12446;
    case RC_ADDR(0x0001244au): goto L_1244A;
    case RC_ADDR(0x00012450u): goto L_12450;
    case RC_ADDR(0x00012454u): goto L_12454;
    case RC_ADDR(0x00012458u): goto L_12458;
    case RC_ADDR(0x0001245eu): goto L_1245E;
    case RC_ADDR(0x00012464u): goto L_12464;
    case RC_ADDR(0x00012468u): goto L_12468;
    case RC_ADDR(0x0001246eu): goto L_1246E;
    case RC_ADDR(0x00012472u): goto L_12472;
    case RC_ADDR(0x00012478u): goto L_12478;
    case RC_ADDR(0x0001247eu): goto L_1247E;
    case RC_ADDR(0x00012484u): goto L_12484;
    case RC_ADDR(0x0001248au): goto L_1248A;
    case RC_ADDR(0x0001248eu): goto L_1248E;
    case RC_ADDR(0x00012490u): goto L_12490;
    case RC_ADDR(0x00012494u): goto L_12494;
    case RC_ADDR(0x00012496u): goto L_12496;
    case RC_ADDR(0x00012498u): goto L_12498;
    case RC_ADDR(0x0001249cu): goto L_1249C;
    case RC_ADDR(0x0001249eu): goto L_1249E;
    case RC_ADDR(0x000124a2u): goto L_124A2;
    case RC_ADDR(0x000124a4u): goto L_124A4;
    case RC_ADDR(0x000124a8u): goto L_124A8;
    case RC_ADDR(0x000124aeu): goto L_124AE;
    case RC_ADDR(0x000124b0u): goto L_124B0;
    case RC_ADDR(0x000124b4u): goto L_124B4;
    case RC_ADDR(0x000124b6u): goto L_124B6;
    case RC_ADDR(0x000124b8u): goto L_124B8;
    case RC_ADDR(0x000124bcu): goto L_124BC;
    case RC_ADDR(0x000124beu): goto L_124BE;
    case RC_ADDR(0x000124c2u): goto L_124C2;
    case RC_ADDR(0x000124c4u): goto L_124C4;
    case RC_ADDR(0x000124c8u): goto L_124C8;
    case RC_ADDR(0x000124ceu): goto L_124CE;
    case RC_ADDR(0x000124d4u): goto L_124D4;
    case RC_ADDR(0x000124d8u): goto L_124D8;
    case RC_ADDR(0x000124dcu): goto L_124DC;
    case RC_ADDR(0x000124deu): goto L_124DE;
    case RC_ADDR(0x000124e0u): goto L_124E0;
    case RC_ADDR(0x000124e4u): goto L_124E4;
    case RC_ADDR(0x000124e6u): goto L_124E6;
    case RC_ADDR(0x000124eau): goto L_124EA;
    case RC_ADDR(0x000124eeu): goto L_124EE;
    case RC_ADDR(0x000124f0u): goto L_124F0;
    case RC_ADDR(0x000124f4u): goto L_124F4;
    case RC_ADDR(0x000124f6u): goto L_124F6;
    case RC_ADDR(0x000124fau): goto L_124FA;
    case RC_ADDR(0x000124feu): goto L_124FE;
    case RC_ADDR(0x00012502u): goto L_12502;
    case RC_ADDR(0x00012508u): goto L_12508;
    case RC_ADDR(0x0001250au): goto L_1250A;
    case RC_ADDR(0x0001250eu): goto L_1250E;
    case RC_ADDR(0x00012512u): goto L_12512;
    case RC_ADDR(0x00012516u): goto L_12516;
    case RC_ADDR(0x0001251au): goto L_1251A;
    case RC_ADDR(0x0001251cu): goto L_1251C;
    case RC_ADDR(0x0001251eu): goto L_1251E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12442:
    /* 00012442   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00012442u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_12446:
    /* 00012446   4  clr.w (fffffacc,A4) */
    c->pc = RC_ADDR(0x00012446u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x534u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1244A:
    /* 0001244a   6  move.w #f,(fffffa26,A4) */
    c->pc = RC_ADDR(0x0001244au);
    rc_step(c, m, 16);
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] - 0x5dau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12450:
    /* 00012450   4  clr.w (fffffa28,A4) */
    c->pc = RC_ADDR(0x00012450u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12454:
    /* 00012454   4  clr.l (fffffa2a,A4) */
    c->pc = RC_ADDR(0x00012454u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x5d6u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12458:
    /* 00012458   6  move.w #3,(fffffa2e,A4) */
    c->pc = RC_ADDR(0x00012458u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] - 0x5d2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1245E:
    /* 0001245e   6  move.w #2,(fffffa30,A4) */
    c->pc = RC_ADDR(0x0001245eu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] - 0x5d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12464:
    /* 00012464   4  clr.w (fffffa32,A4) */
    c->pc = RC_ADDR(0x00012464u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5ceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12468:
    /* 00012468   6  move.w #1,(fffffa34,A4) */
    c->pc = RC_ADDR(0x00012468u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x5ccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1246E:
    /* 0001246e   4  clr.l (ffff8556,A4) */
    c->pc = RC_ADDR(0x0001246eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x7aaau), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12472:
    /* 00012472   6  move.w #28,(fffffa76,A4) */
    c->pc = RC_ADDR(0x00012472u);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    rc_wr16(c, m, (c->a[4] - 0x58au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12478:
    /* 00012478   6  move.w #c8,(fffffa78,A4) */
    c->pc = RC_ADDR(0x00012478u);
    rc_step(c, m, 16);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0x588u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1247E:
    /* 0001247e   6  move.l (ffffd340,A4),(14fa,A4) */
    c->pc = RC_ADDR(0x0001247eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    rc_wr32(c, m, (c->a[4] + 0x14fau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_12484:
    /* 00012484   6  move.l (ffffd33c,A4),(14fe,A4) */
    c->pc = RC_ADDR(0x00012484u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    rc_wr32(c, m, (c->a[4] + 0x14feu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1248A:
    /* 0001248a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001248au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1248E:
    /* 0001248e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001248eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_12490:
    /* 00012490   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012490u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12494:
    /* 00012494   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00012494u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_12496:
    /* 00012496   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00012496u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_12498:
    /* 00012498   4  adda.l (ffffd340,A4),A0 */
    c->pc = RC_ADDR(0x00012498u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[0] += t0;

L_1249C:
    /* 0001249c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001249cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1249E:
    /* 0001249e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001249eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_124A2:
    /* 000124a2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000124a2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_124A4:
    /* 000124a4   4  lea (ffffface,A4),A1 */
    c->pc = RC_ADDR(0x000124a4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x532u);

L_124A8:
    /* 000124a8   6  move.l (8,A0),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x000124a8u);
    rc_step(c, m, 30);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_124AE:
    /* 000124ae   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000124aeu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_124B0:
    /* 000124b0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000124b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_124B4:
    /* 000124b4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000124b4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_124B6:
    /* 000124b6   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x000124b6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_124B8:
    /* 000124b8   4  adda.l (ffffd33c,A4),A0 */
    c->pc = RC_ADDR(0x000124b8u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    c->a[0] += t0;

L_124BC:
    /* 000124bc   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000124bcu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_124BE:
    /* 000124be   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000124beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_124C2:
    /* 000124c2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000124c2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_124C4:
    /* 000124c4   4  lea (fffffae2,A4),A1 */
    c->pc = RC_ADDR(0x000124c4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x51eu);

L_124C8:
    /* 000124c8   6  move.l (8,A0),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x000124c8u);
    rc_step(c, m, 30);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_124CE:
    /* 000124ce   6  pea (00010002).l */
    c->pc = RC_ADDR(0x000124ceu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010002u);

L_124D4:
    /* 000124d4   4  pea (00001f40).l */
    c->pc = RC_ADDR(0x000124d4u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00001f40u);

L_124D8:
    /* 000124d8   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x000124d8u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x000124dcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_124DC:
    /* 000124dc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000124dcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_124DE:
    /* 000124de   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x000124deu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_124E0:
    /* 000124e0   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x000124e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_124E4:
    /* 000124e4   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000124e4u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_124E6:
    /* 000124e6   4  lea (fffffb0a,A4),A0 */
    c->pc = RC_ADDR(0x000124e6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4f6u);

L_124EA:
    /* 000124ea   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000124eau);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_124EE:
    /* 000124ee   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x000124eeu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_124F0:
    /* 000124f0   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x000124f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_124F4:
    /* 000124f4   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000124f4u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_124F6:
    /* 000124f6   4  lea (fffffaf6,A4),A0 */
    c->pc = RC_ADDR(0x000124f6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x50au);

L_124FA:
    /* 000124fa   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000124fau);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_124FE:
    /* 000124fe   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000124feu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_12502:
    /* 00012502   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00012502u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_12508:
    /* 00012508   2  bcs 0001248e */
    c->pc = RC_ADDR(0x00012508u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1248E; }

L_1250A:
    /* 0001250a   4  movea.l (ffffd340,A4),A0 */
    c->pc = RC_ADDR(0x0001250au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[0] = t0;

L_1250E:
    /* 0001250e   4  move.w #28,(A0) */
    c->pc = RC_ADDR(0x0001250eu);
    rc_step(c, m, 12);
    t0 = 0x00000028u;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12512:
    /* 00012512   4  movea.l (ffffd33c,A4),A0 */
    c->pc = RC_ADDR(0x00012512u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    c->a[0] = t0;

L_12516:
    /* 00012516   4  move.w #28,(A0) */
    c->pc = RC_ADDR(0x00012516u);
    rc_step(c, m, 12);
    t0 = 0x00000028u;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1251A:
    /* 0001251a   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001251au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1251C:
    /* 0001251c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001251cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1251E:
    /* 0001251e   2  rts */
    c->pc = RC_ADDR(0x0001251eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
