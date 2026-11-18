/* fn_0000d534 - 170 byte(s), 47 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000d534(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000d534u): goto L_D534;
    case RC_ADDR(0x0000d538u): goto L_D538;
    case RC_ADDR(0x0000d53cu): goto L_D53C;
    case RC_ADDR(0x0000d542u): goto L_D542;
    case RC_ADDR(0x0000d548u): goto L_D548;
    case RC_ADDR(0x0000d54cu): goto L_D54C;
    case RC_ADDR(0x0000d550u): goto L_D550;
    case RC_ADDR(0x0000d554u): goto L_D554;
    case RC_ADDR(0x0000d558u): goto L_D558;
    case RC_ADDR(0x0000d55cu): goto L_D55C;
    case RC_ADDR(0x0000d560u): goto L_D560;
    case RC_ADDR(0x0000d564u): goto L_D564;
    case RC_ADDR(0x0000d568u): goto L_D568;
    case RC_ADDR(0x0000d56cu): goto L_D56C;
    case RC_ADDR(0x0000d570u): goto L_D570;
    case RC_ADDR(0x0000d574u): goto L_D574;
    case RC_ADDR(0x0000d578u): goto L_D578;
    case RC_ADDR(0x0000d57au): goto L_D57A;
    case RC_ADDR(0x0000d57eu): goto L_D57E;
    case RC_ADDR(0x0000d580u): goto L_D580;
    case RC_ADDR(0x0000d584u): goto L_D584;
    case RC_ADDR(0x0000d588u): goto L_D588;
    case RC_ADDR(0x0000d58au): goto L_D58A;
    case RC_ADDR(0x0000d58eu): goto L_D58E;
    case RC_ADDR(0x0000d592u): goto L_D592;
    case RC_ADDR(0x0000d596u): goto L_D596;
    case RC_ADDR(0x0000d598u): goto L_D598;
    case RC_ADDR(0x0000d59cu): goto L_D59C;
    case RC_ADDR(0x0000d59eu): goto L_D59E;
    case RC_ADDR(0x0000d5a2u): goto L_D5A2;
    case RC_ADDR(0x0000d5a6u): goto L_D5A6;
    case RC_ADDR(0x0000d5aau): goto L_D5AA;
    case RC_ADDR(0x0000d5acu): goto L_D5AC;
    case RC_ADDR(0x0000d5b0u): goto L_D5B0;
    case RC_ADDR(0x0000d5b2u): goto L_D5B2;
    case RC_ADDR(0x0000d5b6u): goto L_D5B6;
    case RC_ADDR(0x0000d5bau): goto L_D5BA;
    case RC_ADDR(0x0000d5beu): goto L_D5BE;
    case RC_ADDR(0x0000d5c0u): goto L_D5C0;
    case RC_ADDR(0x0000d5c4u): goto L_D5C4;
    case RC_ADDR(0x0000d5c6u): goto L_D5C6;
    case RC_ADDR(0x0000d5ccu): goto L_D5CC;
    case RC_ADDR(0x0000d5d0u): goto L_D5D0;
    case RC_ADDR(0x0000d5d4u): goto L_D5D4;
    case RC_ADDR(0x0000d5d8u): goto L_D5D8;
    case RC_ADDR(0x0000d5dau): goto L_D5DA;
    case RC_ADDR(0x0000d5dcu): goto L_D5DC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_D534:
    /* 0000d534   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000d534u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_D538:
    /* 0000d538   4  clr.w (e36,A4) */
    c->pc = RC_ADDR(0x0000d538u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe36u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D53C:
    /* 0000d53c   6  move.l (8,A5),(e5c,A4) */
    c->pc = RC_ADDR(0x0000d53cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0xe5cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D542:
    /* 0000d542   6  move.w #2,(e16,A4) */
    c->pc = RC_ADDR(0x0000d542u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0xe16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D548:
    /* 0000d548   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000d548u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D54C:
    /* 0000d54c   4  pea (0000d5ea) */
    c->pc = RC_ADDR(0x0000d54cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d5eau));

L_D550:
    /* 0000d550   4  pea (0000d5de) */
    c->pc = RC_ADDR(0x0000d550u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d5deu));

L_D554:
    /* 0000d554   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0000d554u);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0000d558u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_D558:
    /* 0000d558   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000d558u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_D55C:
    /* 0000d55c   4  pea (cbe,A4) */
    c->pc = RC_ADDR(0x0000d55cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xcbeu));

L_D560:
    /* 0000d560   4  pea (cb8,A4) */
    c->pc = RC_ADDR(0x0000d560u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xcb8u));

L_D564:
    /* 0000d564   4  pea (0000d5f2) */
    c->pc = RC_ADDR(0x0000d564u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d5f2u));

L_D568:
    /* 0000d568   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000d568u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000d56cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_D56C:
    /* 0000d56c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000d56cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_D570:
    /* 0000d570   4  move.l D0,(cb2,A4) */
    c->pc = RC_ADDR(0x0000d570u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xcb2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D574:
    /* 0000d574   4  pea (0000ca1a) */
    c->pc = RC_ADDR(0x0000d574u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000ca1au));

L_D578:
    /* 0000d578   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000d578u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_D57A:
    /* 0000d57a   4  jsr (ffff8218,A4) */
    c->pc = RC_ADDR(0x0000d57au);
    rc_step(c, m, 18);
    /* vector 89 */
    rc_push32(c, m, RC_ADDR(0x0000d57eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d0eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f34cu);
    return;

L_D57E:
    /* 0000d57e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d57eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D580:
    /* 0000d580   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x0000d580u);
    rc_step(c, m, 18);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x0000d584u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afb8u);
    return;

L_D584:
    /* 0000d584   4  tst.l (cb2,A4) */
    c->pc = RC_ADDR(0x0000d584u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcb2u));
    rc_set_nzvc(c, t0, RC_L);

L_D588:
    /* 0000d588   2  beq 0000d598 */
    c->pc = RC_ADDR(0x0000d588u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D598;

L_D58A:
    /* 0000d58a   4  move.l (cbe,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d58au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcbeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D58E:
    /* 0000d58e   4  move.l (cb2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d58eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcb2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D592:
    /* 0000d592   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000d592u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000d596u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_D596:
    /* 0000d596   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d596u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D598:
    /* 0000d598   4  tst.l (e3c,A4) */
    c->pc = RC_ADDR(0x0000d598u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe3cu));
    rc_set_nzvc(c, t0, RC_L);

L_D59C:
    /* 0000d59c   2  beq 0000d5ac */
    c->pc = RC_ADDR(0x0000d59cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D5AC;

L_D59E:
    /* 0000d59e   4  move.l (e4e,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d59eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe4eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D5A2:
    /* 0000d5a2   4  move.l (e3c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d5a2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe3cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D5A6:
    /* 0000d5a6   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000d5a6u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000d5aau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_D5AA:
    /* 0000d5aa   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d5aau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D5AC:
    /* 0000d5ac   4  tst.l (e38,A4) */
    c->pc = RC_ADDR(0x0000d5acu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe38u));
    rc_set_nzvc(c, t0, RC_L);

L_D5B0:
    /* 0000d5b0   2  beq 0000d5c0 */
    c->pc = RC_ADDR(0x0000d5b0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D5C0;

L_D5B2:
    /* 0000d5b2   4  move.l (e4a,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d5b2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe4au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D5B6:
    /* 0000d5b6   4  move.l (e38,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d5b6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe38u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D5BA:
    /* 0000d5ba   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000d5bau);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000d5beu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_D5BE:
    /* 0000d5be   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d5beu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D5C0:
    /* 0000d5c0   4  tst.w (856,A4) */
    c->pc = RC_ADDR(0x0000d5c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x856u));
    rc_set_nzvc(c, t0, RC_W);

L_D5C4:
    /* 0000d5c4   2  beq 0000d5da */
    c->pc = RC_ADDR(0x0000d5c4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D5DA;

L_D5C6:
    /* 0000d5c6   6  move.w #1,(ffff9916,A4) */
    c->pc = RC_ADDR(0x0000d5c6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x66eau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D5CC:
    /* 0000d5cc   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d5ccu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D5D0:
    /* 0000d5d0   4  pea (e64,A4) */
    c->pc = RC_ADDR(0x0000d5d0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xe64u));

L_D5D4:
    /* 0000d5d4   4  jsr (ffff82cc,A4) */
    c->pc = RC_ADDR(0x0000d5d4u);
    rc_step(c, m, 18);
    /* vector 119 */
    rc_push32(c, m, RC_ADDR(0x0000d5d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228b2u);
    return;

L_D5D8:
    /* 0000d5d8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d5d8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D5DA:
    /* 0000d5da   2  unlk A5 */
    c->pc = RC_ADDR(0x0000d5dau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_D5DC:
    /* 0000d5dc   2  rts */
    c->pc = RC_ADDR(0x0000d5dcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
