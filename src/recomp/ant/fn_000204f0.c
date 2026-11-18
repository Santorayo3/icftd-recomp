/* fn_000204f0 - 82 byte(s), 33 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000204f0(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000204f0u): goto L_204F0;
    case RC_ADDR(0x000204f4u): goto L_204F4;
    case RC_ADDR(0x000204f8u): goto L_204F8;
    case RC_ADDR(0x000204fcu): goto L_204FC;
    case RC_ADDR(0x00020500u): goto L_20500;
    case RC_ADDR(0x00020502u): goto L_20502;
    case RC_ADDR(0x00020504u): goto L_20504;
    case RC_ADDR(0x00020506u): goto L_20506;
    case RC_ADDR(0x0002050au): goto L_2050A;
    case RC_ADDR(0x0002050cu): goto L_2050C;
    case RC_ADDR(0x0002050eu): goto L_2050E;
    case RC_ADDR(0x00020512u): goto L_20512;
    case RC_ADDR(0x00020514u): goto L_20514;
    case RC_ADDR(0x00020518u): goto L_20518;
    case RC_ADDR(0x0002051au): goto L_2051A;
    case RC_ADDR(0x0002051cu): goto L_2051C;
    case RC_ADDR(0x0002051eu): goto L_2051E;
    case RC_ADDR(0x00020522u): goto L_20522;
    case RC_ADDR(0x00020524u): goto L_20524;
    case RC_ADDR(0x00020526u): goto L_20526;
    case RC_ADDR(0x00020528u): goto L_20528;
    case RC_ADDR(0x0002052au): goto L_2052A;
    case RC_ADDR(0x0002052cu): goto L_2052C;
    case RC_ADDR(0x0002052eu): goto L_2052E;
    case RC_ADDR(0x00020530u): goto L_20530;
    case RC_ADDR(0x00020532u): goto L_20532;
    case RC_ADDR(0x00020534u): goto L_20534;
    case RC_ADDR(0x00020536u): goto L_20536;
    case RC_ADDR(0x00020538u): goto L_20538;
    case RC_ADDR(0x0002053au): goto L_2053A;
    case RC_ADDR(0x0002053cu): goto L_2053C;
    case RC_ADDR(0x0002053eu): goto L_2053E;
    case RC_ADDR(0x00020540u): goto L_20540;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_204F0:
    /* 000204f0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000204f0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_204F4:
    /* 000204f4   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x000204f4u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_204F8:
    /* 000204f8   4  movea.l (c,A5),A2 */
    c->pc = RC_ADDR(0x000204f8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[2] = t0;

L_204FC:
    /* 000204fc   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000204fcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20500:
    /* 00020500   2  tst.l (A0) */
    c->pc = RC_ADDR(0x00020500u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_L);

L_20502:
    /* 00020502   2  bne 0002050e */
    c->pc = RC_ADDR(0x00020502u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2050E;

L_20504:
    /* 00020504   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00020504u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20506:
    /* 00020506   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x00020506u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_2050A:
    /* 0002050a   2  unlk A5 */
    c->pc = RC_ADDR(0x0002050au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2050C:
    /* 0002050c   2  rts */
    c->pc = RC_ADDR(0x0002050cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_2050E:
    /* 0002050e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0002050eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20512:
    /* 00020512   2  movea.l (A0),A3 */
    c->pc = RC_ADDR(0x00020512u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[3] = t0;

L_20514:
    /* 00020514   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00020514u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20518:
    /* 00020518   2  movea.l (A0),A1 */
    c->pc = RC_ADDR(0x00020518u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_2051A:
    /* 0002051a   2  cmpa.l A2,A1 */
    c->pc = RC_ADDR(0x0002051au);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 2, RC_L);
    rc_cmp(c, RC_L, c->a[1], t0);

L_2051C:
    /* 0002051c   2  bne 00020528 */
    c->pc = RC_ADDR(0x0002051cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_20528;

L_2051E:
    /* 0002051e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0002051eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20522:
    /* 00020522   2  move.l (A3),(A0) */
    c->pc = RC_ADDR(0x00020522u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[3]);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20524:
    /* 00020524   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00020524u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20526:
    /* 00020526   2  bra 00020506 */
    c->pc = RC_ADDR(0x00020526u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_20506;

L_20528:
    /* 00020528   2  tst.l (A3) */
    c->pc = RC_ADDR(0x00020528u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[3]);
    rc_set_nzvc(c, t0, RC_L);

L_2052A:
    /* 0002052a   2  beq 0002053e */
    c->pc = RC_ADDR(0x0002052au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2053E;

L_2052C:
    /* 0002052c   2  movea.l (A3),A0 */
    c->pc = RC_ADDR(0x0002052cu);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[0] = t0;

L_2052E:
    /* 0002052e   2  cmpa.l A2,A0 */
    c->pc = RC_ADDR(0x0002052eu);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 2, RC_L);
    rc_cmp(c, RC_L, c->a[0], t0);

L_20530:
    /* 00020530   2  bne 0002053a */
    c->pc = RC_ADDR(0x00020530u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2053A;

L_20532:
    /* 00020532   2  movea.l (A3),A0 */
    c->pc = RC_ADDR(0x00020532u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[0] = t0;

L_20534:
    /* 00020534   2  move.l (A0),(A3) */
    c->pc = RC_ADDR(0x00020534u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, c->a[3], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20536:
    /* 00020536   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00020536u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20538:
    /* 00020538   2  bra 00020506 */
    c->pc = RC_ADDR(0x00020538u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_20506;

L_2053A:
    /* 0002053a   2  movea.l (A3),A3 */
    c->pc = RC_ADDR(0x0002053au);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[3] = t0;

L_2053C:
    /* 0002053c   2  bra 00020528 */
    c->pc = RC_ADDR(0x0002053cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_20528;

L_2053E:
    /* 0002053e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0002053eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20540:
    /* 00020540   2  bra 00020506 */
    c->pc = RC_ADDR(0x00020540u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_20506;

}
