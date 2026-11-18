/* fn_0000f432 - 174 byte(s), 51 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000f432(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f432u): goto L_F432;
    case RC_ADDR(0x0000f436u): goto L_F436;
    case RC_ADDR(0x0000f43au): goto L_F43A;
    case RC_ADDR(0x0000f43eu): goto L_F43E;
    case RC_ADDR(0x0000f442u): goto L_F442;
    case RC_ADDR(0x0000f446u): goto L_F446;
    case RC_ADDR(0x0000f44au): goto L_F44A;
    case RC_ADDR(0x0000f44cu): goto L_F44C;
    case RC_ADDR(0x0000f44eu): goto L_F44E;
    case RC_ADDR(0x0000f450u): goto L_F450;
    case RC_ADDR(0x0000f454u): goto L_F454;
    case RC_ADDR(0x0000f458u): goto L_F458;
    case RC_ADDR(0x0000f45au): goto L_F45A;
    case RC_ADDR(0x0000f45cu): goto L_F45C;
    case RC_ADDR(0x0000f45eu): goto L_F45E;
    case RC_ADDR(0x0000f460u): goto L_F460;
    case RC_ADDR(0x0000f464u): goto L_F464;
    case RC_ADDR(0x0000f468u): goto L_F468;
    case RC_ADDR(0x0000f46au): goto L_F46A;
    case RC_ADDR(0x0000f46cu): goto L_F46C;
    case RC_ADDR(0x0000f470u): goto L_F470;
    case RC_ADDR(0x0000f472u): goto L_F472;
    case RC_ADDR(0x0000f474u): goto L_F474;
    case RC_ADDR(0x0000f476u): goto L_F476;
    case RC_ADDR(0x0000f478u): goto L_F478;
    case RC_ADDR(0x0000f47au): goto L_F47A;
    case RC_ADDR(0x0000f47eu): goto L_F47E;
    case RC_ADDR(0x0000f482u): goto L_F482;
    case RC_ADDR(0x0000f486u): goto L_F486;
    case RC_ADDR(0x0000f488u): goto L_F488;
    case RC_ADDR(0x0000f48au): goto L_F48A;
    case RC_ADDR(0x0000f48eu): goto L_F48E;
    case RC_ADDR(0x0000f492u): goto L_F492;
    case RC_ADDR(0x0000f496u): goto L_F496;
    case RC_ADDR(0x0000f498u): goto L_F498;
    case RC_ADDR(0x0000f49eu): goto L_F49E;
    case RC_ADDR(0x0000f4a0u): goto L_F4A0;
    case RC_ADDR(0x0000f4a6u): goto L_F4A6;
    case RC_ADDR(0x0000f4a8u): goto L_F4A8;
    case RC_ADDR(0x0000f4aeu): goto L_F4AE;
    case RC_ADDR(0x0000f4b4u): goto L_F4B4;
    case RC_ADDR(0x0000f4b6u): goto L_F4B6;
    case RC_ADDR(0x0000f4bcu): goto L_F4BC;
    case RC_ADDR(0x0000f4c2u): goto L_F4C2;
    case RC_ADDR(0x0000f4c4u): goto L_F4C4;
    case RC_ADDR(0x0000f4cau): goto L_F4CA;
    case RC_ADDR(0x0000f4d0u): goto L_F4D0;
    case RC_ADDR(0x0000f4d2u): goto L_F4D2;
    case RC_ADDR(0x0000f4d8u): goto L_F4D8;
    case RC_ADDR(0x0000f4dcu): goto L_F4DC;
    case RC_ADDR(0x0000f4deu): goto L_F4DE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F432:
    /* 0000f432   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000f432u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_F436:
    /* 0000f436   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000f436u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_F43A:
    /* 0000f43a   4  move.w (8,A5),D5 */
    c->pc = RC_ADDR(0x0000f43au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F43E:
    /* 0000f43e   4  move.w (a,A5),D6 */
    c->pc = RC_ADDR(0x0000f43eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F442:
    /* 0000f442   4  clr.w (1108,A4) */
    c->pc = RC_ADDR(0x0000f442u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1108u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F446:
    /* 0000f446   4  clr.w (110a,A4) */
    c->pc = RC_ADDR(0x0000f446u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x110au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F44A:
    /* 0000f44a   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000f44au);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_F44C:
    /* 0000f44c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000f44cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F44E:
    /* 0000f44e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f44eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F450:
    /* 0000f450   4  lea (ffff9c88,A4),A0 */
    c->pc = RC_ADDR(0x0000f450u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6378u);

L_F454:
    /* 0000f454   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f454u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F458:
    /* 0000f458   2  add.w D6,D1 */
    c->pc = RC_ADDR(0x0000f458u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F45A:
    /* 0000f45a   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000f45au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F45C:
    /* 0000f45c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000f45cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F45E:
    /* 0000f45e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f45eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F460:
    /* 0000f460   4  lea (ffff9c78,A4),A0 */
    c->pc = RC_ADDR(0x0000f460u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6388u);

L_F464:
    /* 0000f464   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f464u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F468:
    /* 0000f468   2  add.w D5,D1 */
    c->pc = RC_ADDR(0x0000f468u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_F46A:
    /* 0000f46a   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000f46au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F46C:
    /* 0000f46c   4  jsr (0000f65e) */
    c->pc = RC_ADDR(0x0000f46cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f470u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f65eu);
    return;

L_F470:
    /* 0000f470   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000f470u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_F472:
    /* 0000f472   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000f472u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_F474:
    /* 0000f474   2  beq 0000f496 */
    c->pc = RC_ADDR(0x0000f474u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F496;

L_F476:
    /* 0000f476   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000f476u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F478:
    /* 0000f478   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f478u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F47A:
    /* 0000f47a   4  lea (ffff9c98,A4),A0 */
    c->pc = RC_ADDR(0x0000f47au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6368u);

L_F47E:
    /* 0000f47e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f47eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F482:
    /* 0000f482   4  add.w D1,(1108,A4) */
    c->pc = RC_ADDR(0x0000f482u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1108u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_F486:
    /* 0000f486   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000f486u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F488:
    /* 0000f488   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f488u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F48A:
    /* 0000f48a   4  lea (ffff9ca8,A4),A0 */
    c->pc = RC_ADDR(0x0000f48au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6358u);

L_F48E:
    /* 0000f48e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f48eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F492:
    /* 0000f492   4  add.w D1,(110a,A4) */
    c->pc = RC_ADDR(0x0000f492u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x110au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_F496:
    /* 0000f496   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000f496u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_F498:
    /* 0000f498   6  cmp.l #8,D4 */
    c->pc = RC_ADDR(0x0000f498u);
    rc_step(c, m, 14);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_F49E:
    /* 0000f49e   2  blt 0000f44c */
    c->pc = RC_ADDR(0x0000f49eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_F44C; }

L_F4A0:
    /* 0000f4a0   6  cmpi.w #ffff,(1108,A4) */
    c->pc = RC_ADDR(0x0000f4a0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_F4A6:
    /* 0000f4a6   2  bge 0000f4ae */
    c->pc = RC_ADDR(0x0000f4a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_F4AE;

L_F4A8:
    /* 0000f4a8   6  move.w #ffff,(1108,A4) */
    c->pc = RC_ADDR(0x0000f4a8u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1108u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F4AE:
    /* 0000f4ae   6  cmpi.w #1,(1108,A4) */
    c->pc = RC_ADDR(0x0000f4aeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_F4B4:
    /* 0000f4b4   2  ble 0000f4bc */
    c->pc = RC_ADDR(0x0000f4b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_F4BC;

L_F4B6:
    /* 0000f4b6   6  move.w #1,(1108,A4) */
    c->pc = RC_ADDR(0x0000f4b6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1108u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F4BC:
    /* 0000f4bc   6  cmpi.w #ffff,(110a,A4) */
    c->pc = RC_ADDR(0x0000f4bcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_F4C2:
    /* 0000f4c2   2  bge 0000f4ca */
    c->pc = RC_ADDR(0x0000f4c2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_F4CA;

L_F4C4:
    /* 0000f4c4   6  move.w #ffff,(110a,A4) */
    c->pc = RC_ADDR(0x0000f4c4u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x110au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F4CA:
    /* 0000f4ca   6  cmpi.w #1,(110a,A4) */
    c->pc = RC_ADDR(0x0000f4cau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_F4D0:
    /* 0000f4d0   2  ble 0000f4d8 */
    c->pc = RC_ADDR(0x0000f4d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_F4D8;

L_F4D2:
    /* 0000f4d2   6  move.w #1,(110a,A4) */
    c->pc = RC_ADDR(0x0000f4d2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x110au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F4D8:
    /* 0000f4d8   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = RC_ADDR(0x0000f4d8u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_F4DC:
    /* 0000f4dc   2  unlk A5 */
    c->pc = RC_ADDR(0x0000f4dcu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_F4DE:
    /* 0000f4de   2  rts */
    c->pc = RC_ADDR(0x0000f4deu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
