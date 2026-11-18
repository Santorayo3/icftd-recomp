/* fn_00022548 - 48 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022548(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00022548u): goto L_22548;
    case RC_ADDR(0x0002254cu): goto L_2254C;
    case RC_ADDR(0x00022552u): goto L_22552;
    case RC_ADDR(0x00022556u): goto L_22556;
    case RC_ADDR(0x0002255au): goto L_2255A;
    case RC_ADDR(0x0002255cu): goto L_2255C;
    case RC_ADDR(0x00022560u): goto L_22560;
    case RC_ADDR(0x00022566u): goto L_22566;
    case RC_ADDR(0x0002256au): goto L_2256A;
    case RC_ADDR(0x0002256eu): goto L_2256E;
    case RC_ADDR(0x00022570u): goto L_22570;
    case RC_ADDR(0x00022574u): goto L_22574;
    case RC_ADDR(0x00022576u): goto L_22576;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22548:
    /* 00022548   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00022548u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_2254C:
    /* 0002254c   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0002254cu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_22552:
    /* 00022552   4  pea (0000273a).l */
    c->pc = RC_ADDR(0x00022552u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000273au);

L_22556:
    /* 00022556   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00022556u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0002255au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_2255A:
    /* 0002255a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0002255au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2255C:
    /* 0002255c   4  move.l D0,(3556,A4) */
    c->pc = RC_ADDR(0x0002255cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3556u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22560:
    /* 00022560   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00022560u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_22566:
    /* 00022566   4  pea (0000139d).l */
    c->pc = RC_ADDR(0x00022566u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000139du);

L_2256A:
    /* 0002256a   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0002256au);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0002256eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_2256E:
    /* 0002256e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0002256eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22570:
    /* 00022570   4  move.l D0,(355e,A4) */
    c->pc = RC_ADDR(0x00022570u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x355eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22574:
    /* 00022574   2  unlk A5 */
    c->pc = RC_ADDR(0x00022574u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_22576:
    /* 00022576   2  rts */
    c->pc = RC_ADDR(0x00022576u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
