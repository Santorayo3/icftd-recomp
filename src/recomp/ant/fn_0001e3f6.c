/* fn_0001e3f6 - 244 byte(s), 66 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001e3f6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e3f6u): goto L_1E3F6;
    case RC_ADDR(0x0001e3fau): goto L_1E3FA;
    case RC_ADDR(0x0001e400u): goto L_1E400;
    case RC_ADDR(0x0001e406u): goto L_1E406;
    case RC_ADDR(0x0001e40cu): goto L_1E40C;
    case RC_ADDR(0x0001e412u): goto L_1E412;
    case RC_ADDR(0x0001e418u): goto L_1E418;
    case RC_ADDR(0x0001e41cu): goto L_1E41C;
    case RC_ADDR(0x0001e41eu): goto L_1E41E;
    case RC_ADDR(0x0001e422u): goto L_1E422;
    case RC_ADDR(0x0001e424u): goto L_1E424;
    case RC_ADDR(0x0001e426u): goto L_1E426;
    case RC_ADDR(0x0001e42au): goto L_1E42A;
    case RC_ADDR(0x0001e42cu): goto L_1E42C;
    case RC_ADDR(0x0001e430u): goto L_1E430;
    case RC_ADDR(0x0001e432u): goto L_1E432;
    case RC_ADDR(0x0001e436u): goto L_1E436;
    case RC_ADDR(0x0001e43cu): goto L_1E43C;
    case RC_ADDR(0x0001e43eu): goto L_1E43E;
    case RC_ADDR(0x0001e442u): goto L_1E442;
    case RC_ADDR(0x0001e444u): goto L_1E444;
    case RC_ADDR(0x0001e446u): goto L_1E446;
    case RC_ADDR(0x0001e44au): goto L_1E44A;
    case RC_ADDR(0x0001e44cu): goto L_1E44C;
    case RC_ADDR(0x0001e450u): goto L_1E450;
    case RC_ADDR(0x0001e452u): goto L_1E452;
    case RC_ADDR(0x0001e456u): goto L_1E456;
    case RC_ADDR(0x0001e45cu): goto L_1E45C;
    case RC_ADDR(0x0001e45eu): goto L_1E45E;
    case RC_ADDR(0x0001e462u): goto L_1E462;
    case RC_ADDR(0x0001e464u): goto L_1E464;
    case RC_ADDR(0x0001e468u): goto L_1E468;
    case RC_ADDR(0x0001e46au): goto L_1E46A;
    case RC_ADDR(0x0001e46eu): goto L_1E46E;
    case RC_ADDR(0x0001e470u): goto L_1E470;
    case RC_ADDR(0x0001e474u): goto L_1E474;
    case RC_ADDR(0x0001e47au): goto L_1E47A;
    case RC_ADDR(0x0001e47eu): goto L_1E47E;
    case RC_ADDR(0x0001e484u): goto L_1E484;
    case RC_ADDR(0x0001e486u): goto L_1E486;
    case RC_ADDR(0x0001e48au): goto L_1E48A;
    case RC_ADDR(0x0001e48eu): goto L_1E48E;
    case RC_ADDR(0x0001e490u): goto L_1E490;
    case RC_ADDR(0x0001e494u): goto L_1E494;
    case RC_ADDR(0x0001e498u): goto L_1E498;
    case RC_ADDR(0x0001e49cu): goto L_1E49C;
    case RC_ADDR(0x0001e4a0u): goto L_1E4A0;
    case RC_ADDR(0x0001e4a4u): goto L_1E4A4;
    case RC_ADDR(0x0001e4a8u): goto L_1E4A8;
    case RC_ADDR(0x0001e4acu): goto L_1E4AC;
    case RC_ADDR(0x0001e4b0u): goto L_1E4B0;
    case RC_ADDR(0x0001e4b4u): goto L_1E4B4;
    case RC_ADDR(0x0001e4bau): goto L_1E4BA;
    case RC_ADDR(0x0001e4beu): goto L_1E4BE;
    case RC_ADDR(0x0001e4c2u): goto L_1E4C2;
    case RC_ADDR(0x0001e4c4u): goto L_1E4C4;
    case RC_ADDR(0x0001e4c8u): goto L_1E4C8;
    case RC_ADDR(0x0001e4ccu): goto L_1E4CC;
    case RC_ADDR(0x0001e4d0u): goto L_1E4D0;
    case RC_ADDR(0x0001e4d4u): goto L_1E4D4;
    case RC_ADDR(0x0001e4d8u): goto L_1E4D8;
    case RC_ADDR(0x0001e4dcu): goto L_1E4DC;
    case RC_ADDR(0x0001e4e0u): goto L_1E4E0;
    case RC_ADDR(0x0001e4e4u): goto L_1E4E4;
    case RC_ADDR(0x0001e4e6u): goto L_1E4E6;
    case RC_ADDR(0x0001e4e8u): goto L_1E4E8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E3F6:
    /* 0001e3f6   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001e3f6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1E3FA:
    /* 0001e3fa   6  move.w #2e,(fffffa76,A4) */
    c->pc = RC_ADDR(0x0001e3fau);
    rc_step(c, m, 16);
    t0 = 0x0000002eu;
    rc_wr16(c, m, (c->a[4] - 0x58au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E400:
    /* 0001e400   6  move.w #70,(fffffa78,A4) */
    c->pc = RC_ADDR(0x0001e400u);
    rc_step(c, m, 16);
    t0 = 0x00000070u;
    rc_wr16(c, m, (c->a[4] - 0x588u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E406:
    /* 0001e406   6  move.w (fffffa76,A4),(2cc8,A4) */
    c->pc = RC_ADDR(0x0001e406u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_wr16(c, m, (c->a[4] + 0x2cc8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E40C:
    /* 0001e40c   6  move.w (fffffa78,A4),(2cca,A4) */
    c->pc = RC_ADDR(0x0001e40cu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x588u));
    rc_wr16(c, m, (c->a[4] + 0x2ccau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E412:
    /* 0001e412   6  move.b #5,(2ccd,A4) */
    c->pc = RC_ADDR(0x0001e412u);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr8(c, m, (c->a[4] + 0x2ccdu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1E418:
    /* 0001e418   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001e418u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E41C:
    /* 0001e41c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001e41cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E41E:
    /* 0001e41e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001e41eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E422:
    /* 0001e422   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001e422u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1E424:
    /* 0001e424   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001e424u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1E426:
    /* 0001e426   4  adda.l (ffffd33c,A4),A0 */
    c->pc = RC_ADDR(0x0001e426u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    c->a[0] += t0;

L_1E42A:
    /* 0001e42a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001e42au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E42C:
    /* 0001e42c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001e42cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E430:
    /* 0001e430   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001e430u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1E432:
    /* 0001e432   4  lea (ffffface,A4),A1 */
    c->pc = RC_ADDR(0x0001e432u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x532u);

L_1E436:
    /* 0001e436   6  move.l (8,A0),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x0001e436u);
    rc_step(c, m, 30);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E43C:
    /* 0001e43c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001e43cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E43E:
    /* 0001e43e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001e43eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E442:
    /* 0001e442   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001e442u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1E444:
    /* 0001e444   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001e444u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1E446:
    /* 0001e446   4  adda.l (ffffd340,A4),A0 */
    c->pc = RC_ADDR(0x0001e446u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[0] += t0;

L_1E44A:
    /* 0001e44a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001e44au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E44C:
    /* 0001e44c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001e44cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E450:
    /* 0001e450   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001e450u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1E452:
    /* 0001e452   4  lea (fffffae2,A4),A1 */
    c->pc = RC_ADDR(0x0001e452u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x51eu);

L_1E456:
    /* 0001e456   6  move.l (8,A0),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x0001e456u);
    rc_step(c, m, 30);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E45C:
    /* 0001e45c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001e45cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E45E:
    /* 0001e45e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001e45eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E462:
    /* 0001e462   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001e462u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1E464:
    /* 0001e464   4  lea (ffffface,A4),A0 */
    c->pc = RC_ADDR(0x0001e464u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x532u);

L_1E468:
    /* 0001e468   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001e468u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1E46A:
    /* 0001e46a   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001e46au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E46E:
    /* 0001e46e   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0001e46eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_1E470:
    /* 0001e470   4  lea (2cd0,A4),A1 */
    c->pc = RC_ADDR(0x0001e470u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2cd0u);

L_1E474:
    /* 0001e474   6  move.l (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001e474u);
    rc_step(c, m, 32);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E47A:
    /* 0001e47a   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001e47au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1E47E:
    /* 0001e47e   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001e47eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1E484:
    /* 0001e484   2  bcs 0001e41c */
    c->pc = RC_ADDR(0x0001e484u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1E41C; }

L_1E486:
    /* 0001e486   4  pea (2de0,A4) */
    c->pc = RC_ADDR(0x0001e486u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2de0u));

L_1E48A:
    /* 0001e48a   4  jsr (ffff8392,A4) */
    c->pc = RC_ADDR(0x0001e48au);
    rc_step(c, m, 18);
    /* vector 152 */
    rc_push32(c, m, RC_ADDR(0x0001e48eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e88u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023904u);
    return;

L_1E48E:
    /* 0001e48e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001e48eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E490:
    /* 0001e490   4  lea (2cc8,A4),A0 */
    c->pc = RC_ADDR(0x0001e490u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2cc8u);

L_1E494:
    /* 0001e494   4  move.l A0,(2de4,A4) */
    c->pc = RC_ADDR(0x0001e494u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2de4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E498:
    /* 0001e498   4  pea (00000064).l */
    c->pc = RC_ADDR(0x0001e498u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000064u);

L_1E49C:
    /* 0001e49c   4  pea (2e64,A4) */
    c->pc = RC_ADDR(0x0001e49cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2e64u));

L_1E4A0:
    /* 0001e4a0   4  pea (2e44,A4) */
    c->pc = RC_ADDR(0x0001e4a0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2e44u));

L_1E4A4:
    /* 0001e4a4   4  jsr (000238e0) */
    c->pc = RC_ADDR(0x0001e4a4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e4a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000238e0u);
    return;

L_1E4A8:
    /* 0001e4a8   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001e4a8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1E4AC:
    /* 0001e4ac   4  lea (2e44,A4),A0 */
    c->pc = RC_ADDR(0x0001e4acu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2e44u);

L_1E4B0:
    /* 0001e4b0   4  move.l A0,(2df0,A4) */
    c->pc = RC_ADDR(0x0001e4b0u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2df0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E4B4:
    /* 0001e4b4   6  pea (00010002).l */
    c->pc = RC_ADDR(0x0001e4b4u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010002u);

L_1E4BA:
    /* 0001e4ba   4  pea (00001420).l */
    c->pc = RC_ADDR(0x0001e4bau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00001420u);

L_1E4BE:
    /* 0001e4be   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0001e4beu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0001e4c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1E4C2:
    /* 0001e4c2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001e4c2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E4C4:
    /* 0001e4c4   4  move.l D0,(3058,A4) */
    c->pc = RC_ADDR(0x0001e4c4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3058u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E4C8:
    /* 0001e4c8   4  pea (00001420).l */
    c->pc = RC_ADDR(0x0001e4c8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00001420u);

L_1E4CC:
    /* 0001e4cc   4  move.l (3058,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e4ccu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3058u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E4D0:
    /* 0001e4d0   4  pea (2e5c,A4) */
    c->pc = RC_ADDR(0x0001e4d0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2e5cu));

L_1E4D4:
    /* 0001e4d4   4  jsr (00023910) */
    c->pc = RC_ADDR(0x0001e4d4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e4d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023910u);
    return;

L_1E4D8:
    /* 0001e4d8   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001e4d8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1E4DC:
    /* 0001e4dc   4  lea (2e5c,A4),A0 */
    c->pc = RC_ADDR(0x0001e4dcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2e5cu);

L_1E4E0:
    /* 0001e4e0   4  move.l A0,(2dec,A4) */
    c->pc = RC_ADDR(0x0001e4e0u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2decu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E4E4:
    /* 0001e4e4   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001e4e4u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E4E6:
    /* 0001e4e6   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e4e6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E4E8:
    /* 0001e4e8   2  rts */
    c->pc = RC_ADDR(0x0001e4e8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
