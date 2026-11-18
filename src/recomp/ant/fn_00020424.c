/* fn_00020424 - 112 byte(s), 33 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00020424(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00020424u): goto L_20424;
    case RC_ADDR(0x00020428u): goto L_20428;
    case RC_ADDR(0x0002042cu): goto L_2042C;
    case RC_ADDR(0x00020432u): goto L_20432;
    case RC_ADDR(0x00020436u): goto L_20436;
    case RC_ADDR(0x0002043au): goto L_2043A;
    case RC_ADDR(0x0002043cu): goto L_2043C;
    case RC_ADDR(0x00020440u): goto L_20440;
    case RC_ADDR(0x00020442u): goto L_20442;
    case RC_ADDR(0x00020446u): goto L_20446;
    case RC_ADDR(0x0002044au): goto L_2044A;
    case RC_ADDR(0x0002044cu): goto L_2044C;
    case RC_ADDR(0x00020450u): goto L_20450;
    case RC_ADDR(0x00020454u): goto L_20454;
    case RC_ADDR(0x00020458u): goto L_20458;
    case RC_ADDR(0x0002045cu): goto L_2045C;
    case RC_ADDR(0x0002045eu): goto L_2045E;
    case RC_ADDR(0x00020462u): goto L_20462;
    case RC_ADDR(0x00020466u): goto L_20466;
    case RC_ADDR(0x0002046au): goto L_2046A;
    case RC_ADDR(0x0002046cu): goto L_2046C;
    case RC_ADDR(0x0002046eu): goto L_2046E;
    case RC_ADDR(0x00020472u): goto L_20472;
    case RC_ADDR(0x00020476u): goto L_20476;
    case RC_ADDR(0x0002047au): goto L_2047A;
    case RC_ADDR(0x0002047cu): goto L_2047C;
    case RC_ADDR(0x00020480u): goto L_20480;
    case RC_ADDR(0x00020484u): goto L_20484;
    case RC_ADDR(0x00020488u): goto L_20488;
    case RC_ADDR(0x0002048au): goto L_2048A;
    case RC_ADDR(0x0002048eu): goto L_2048E;
    case RC_ADDR(0x00020490u): goto L_20490;
    case RC_ADDR(0x00020492u): goto L_20492;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20424:
    /* 00020424   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00020424u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_20428:
    /* 00020428   4  movem.l { D3 D4 D5 A0 A1 A2 A3 A4 A5 },-(SP) */
    c->pc = RC_ADDR(0x00020428u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
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
    c->a[7] = t3;

L_2042C:
    /* 0002042c   6  jsr (00022a2c).l */
    c->pc = RC_ADDR(0x0002042cu);
    rc_step(c, m, 20);
    rc_push32(c, m, RC_ADDR(0x00020432u));
    rc_depth++;
    c->pc = RC_ADDR(0x00022a2cu);
    return;

L_20432:
    /* 00020432   4  addq.l #1,(ffffd2e4,A4) */
    c->pc = RC_ADDR(0x00020432u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x2d1cu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_20436:
    /* 00020436   4  tst.w (ffffd284,A4) */
    c->pc = RC_ADDR(0x00020436u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d7cu));
    rc_set_nzvc(c, t0, RC_W);

L_2043A:
    /* 0002043a   2  beq 0002048a */
    c->pc = RC_ADDR(0x0002043au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2048A;

L_2043C:
    /* 0002043c   4  tst.w (924,A4) */
    c->pc = RC_ADDR(0x0002043cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x924u));
    rc_set_nzvc(c, t0, RC_W);

L_20440:
    /* 00020440   2  beq 00020446 */
    c->pc = RC_ADDR(0x00020440u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20446;

L_20442:
    /* 00020442   4  jsr (0001fa0a) */
    c->pc = RC_ADDR(0x00020442u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020446u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fa0au);
    return;

L_20446:
    /* 00020446   4  tst.w (32f0,A4) */
    c->pc = RC_ADDR(0x00020446u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x32f0u));
    rc_set_nzvc(c, t0, RC_W);

L_2044A:
    /* 0002044a   2  beq 0002046e */
    c->pc = RC_ADDR(0x0002044au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2046E;

L_2044C:
    /* 0002044c   4  jsr (0001fabc) */
    c->pc = RC_ADDR(0x0002044cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020450u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fabcu);
    return;

L_20450:
    /* 00020450   4  pea (32b0,A4) */
    c->pc = RC_ADDR(0x00020450u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x32b0u));

L_20454:
    /* 00020454   4  move.l (ffffd290,A4),-(A7) */
    c->pc = RC_ADDR(0x00020454u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d70u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20458:
    /* 00020458   4  jsr (0001fa64) */
    c->pc = RC_ADDR(0x00020458u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002045cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fa64u);
    return;

L_2045C:
    /* 0002045c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0002045cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2045E:
    /* 0002045e   4  pea (32b0,A4) */
    c->pc = RC_ADDR(0x0002045eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x32b0u));

L_20462:
    /* 00020462   4  move.l (ffffd294,A4),-(A7) */
    c->pc = RC_ADDR(0x00020462u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d6cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20466:
    /* 00020466   4  jsr (0001fa64) */
    c->pc = RC_ADDR(0x00020466u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002046au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fa64u);
    return;

L_2046A:
    /* 0002046a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0002046au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2046C:
    /* 0002046c   2  bra 0002048a */
    c->pc = RC_ADDR(0x0002046cu);
    rc_step(c, m, 10);
    goto L_2048A;

L_2046E:
    /* 0002046e   4  pea (7f6,A4) */
    c->pc = RC_ADDR(0x0002046eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x7f6u));

L_20472:
    /* 00020472   4  move.l (ffffd290,A4),-(A7) */
    c->pc = RC_ADDR(0x00020472u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d70u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20476:
    /* 00020476   4  jsr (0001fa64) */
    c->pc = RC_ADDR(0x00020476u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002047au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fa64u);
    return;

L_2047A:
    /* 0002047a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0002047au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2047C:
    /* 0002047c   4  pea (7f6,A4) */
    c->pc = RC_ADDR(0x0002047cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x7f6u));

L_20480:
    /* 00020480   4  move.l (ffffd294,A4),-(A7) */
    c->pc = RC_ADDR(0x00020480u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d6cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20484:
    /* 00020484   4  jsr (0001fa64) */
    c->pc = RC_ADDR(0x00020484u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020488u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fa64u);
    return;

L_20488:
    /* 00020488   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020488u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2048A:
    /* 0002048a   4  movem.l (SP)+,{ D2 D3 D4 D5 D6 D7 A2 A3 A4 } */
    c->pc = RC_ADDR(0x0002048au);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
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
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_2048E:
    /* 0002048e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0002048eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20490:
    /* 00020490   2  unlk A5 */
    c->pc = RC_ADDR(0x00020490u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_20492:
    /* 00020492   2  rts */
    c->pc = RC_ADDR(0x00020492u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
