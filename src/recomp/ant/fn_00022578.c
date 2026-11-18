/* fn_00022578 - 36 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022578(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00022578u): goto L_22578;
    case RC_ADDR(0x0002257cu): goto L_2257C;
    case RC_ADDR(0x00022580u): goto L_22580;
    case RC_ADDR(0x00022584u): goto L_22584;
    case RC_ADDR(0x00022588u): goto L_22588;
    case RC_ADDR(0x0002258au): goto L_2258A;
    case RC_ADDR(0x0002258eu): goto L_2258E;
    case RC_ADDR(0x00022592u): goto L_22592;
    case RC_ADDR(0x00022596u): goto L_22596;
    case RC_ADDR(0x00022598u): goto L_22598;
    case RC_ADDR(0x0002259au): goto L_2259A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22578:
    /* 00022578   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00022578u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_2257C:
    /* 0002257c   4  pea (0000273a).l */
    c->pc = RC_ADDR(0x0002257cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000273au);

L_22580:
    /* 00022580   4  move.l (3556,A4),-(A7) */
    c->pc = RC_ADDR(0x00022580u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3556u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22584:
    /* 00022584   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00022584u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00022588u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_22588:
    /* 00022588   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022588u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2258A:
    /* 0002258a   4  pea (0000139d).l */
    c->pc = RC_ADDR(0x0002258au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000139du);

L_2258E:
    /* 0002258e   4  move.l (355e,A4),-(A7) */
    c->pc = RC_ADDR(0x0002258eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x355eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22592:
    /* 00022592   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00022592u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00022596u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_22596:
    /* 00022596   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022596u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22598:
    /* 00022598   2  unlk A5 */
    c->pc = RC_ADDR(0x00022598u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2259A:
    /* 0002259a   2  rts */
    c->pc = RC_ADDR(0x0002259au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
