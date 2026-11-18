/* fn_0001966e - 168 byte(s), 46 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001966e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001966eu): goto L_1966E;
    case RC_ADDR(0x00019672u): goto L_19672;
    case RC_ADDR(0x00019676u): goto L_19676;
    case RC_ADDR(0x0001967cu): goto L_1967C;
    case RC_ADDR(0x00019680u): goto L_19680;
    case RC_ADDR(0x00019684u): goto L_19684;
    case RC_ADDR(0x00019686u): goto L_19686;
    case RC_ADDR(0x0001968au): goto L_1968A;
    case RC_ADDR(0x0001968eu): goto L_1968E;
    case RC_ADDR(0x00019690u): goto L_19690;
    case RC_ADDR(0x00019692u): goto L_19692;
    case RC_ADDR(0x00019696u): goto L_19696;
    case RC_ADDR(0x0001969cu): goto L_1969C;
    case RC_ADDR(0x0001969eu): goto L_1969E;
    case RC_ADDR(0x000196a2u): goto L_196A2;
    case RC_ADDR(0x000196a4u): goto L_196A4;
    case RC_ADDR(0x000196a6u): goto L_196A6;
    case RC_ADDR(0x000196aau): goto L_196AA;
    case RC_ADDR(0x000196aeu): goto L_196AE;
    case RC_ADDR(0x000196b0u): goto L_196B0;
    case RC_ADDR(0x000196b2u): goto L_196B2;
    case RC_ADDR(0x000196b6u): goto L_196B6;
    case RC_ADDR(0x000196bcu): goto L_196BC;
    case RC_ADDR(0x000196c0u): goto L_196C0;
    case RC_ADDR(0x000196c2u): goto L_196C2;
    case RC_ADDR(0x000196c6u): goto L_196C6;
    case RC_ADDR(0x000196ccu): goto L_196CC;
    case RC_ADDR(0x000196d0u): goto L_196D0;
    case RC_ADDR(0x000196d2u): goto L_196D2;
    case RC_ADDR(0x000196d6u): goto L_196D6;
    case RC_ADDR(0x000196dcu): goto L_196DC;
    case RC_ADDR(0x000196e0u): goto L_196E0;
    case RC_ADDR(0x000196e6u): goto L_196E6;
    case RC_ADDR(0x000196eau): goto L_196EA;
    case RC_ADDR(0x000196f0u): goto L_196F0;
    case RC_ADDR(0x000196f4u): goto L_196F4;
    case RC_ADDR(0x000196f8u): goto L_196F8;
    case RC_ADDR(0x000196fau): goto L_196FA;
    case RC_ADDR(0x000196feu): goto L_196FE;
    case RC_ADDR(0x00019702u): goto L_19702;
    case RC_ADDR(0x00019704u): goto L_19704;
    case RC_ADDR(0x00019708u): goto L_19708;
    case RC_ADDR(0x0001970cu): goto L_1970C;
    case RC_ADDR(0x0001970eu): goto L_1970E;
    case RC_ADDR(0x00019712u): goto L_19712;
    case RC_ADDR(0x00019714u): goto L_19714;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1966E:
    /* 0001966e   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x0001966eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_19672:
    /* 00019672   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00019672u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_19676:
    /* 00019676   6  pea (00010002).l */
    c->pc = RC_ADDR(0x00019676u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010002u);

L_1967C:
    /* 0001967c   4  pea (00000190).l */
    c->pc = RC_ADDR(0x0001967cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000190u);

L_19680:
    /* 00019680   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00019680u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00019684u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_19684:
    /* 00019684   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00019684u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_19686:
    /* 00019686   4  move.l D0,(140c,A4) */
    c->pc = RC_ADDR(0x00019686u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x140cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1968A:
    /* 0001968a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001968au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1968E:
    /* 0001968e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001968eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_19690:
    /* 00019690   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00019690u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_19692:
    /* 00019692   4  lea (ffffb67c,A4),A0 */
    c->pc = RC_ADDR(0x00019692u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4984u);

L_19696:
    /* 00019696   6  cmpi.w #face,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019696u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000faceu);

L_1969C:
    /* 0001969c   2  beq 000196c2 */
    c->pc = RC_ADDR(0x0001969cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_196C2;

L_1969E:
    /* 0001969e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001969eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_196A2:
    /* 000196a2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000196a2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_196A4:
    /* 000196a4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000196a4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_196A6:
    /* 000196a6   4  lea (ffffb67c,A4),A0 */
    c->pc = RC_ADDR(0x000196a6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4984u);

L_196AA:
    /* 000196aa   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x000196aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_196AE:
    /* 000196ae   2  ext.l D1 */
    c->pc = RC_ADDR(0x000196aeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_196B0:
    /* 000196b0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000196b0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_196B2:
    /* 000196b2   4  movea.l (140c,A4),A1 */
    c->pc = RC_ADDR(0x000196b2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[1] = t0;

L_196B6:
    /* 000196b6   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000196b6u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_196BC:
    /* 000196bc   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000196bcu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_196C0:
    /* 000196c0   2  bra 0001968a */
    c->pc = RC_ADDR(0x000196c0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1968A;

L_196C2:
    /* 000196c2   4  movea.l (ffffd290,A4),A0 */
    c->pc = RC_ADDR(0x000196c2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d70u));
    c->a[0] = t0;

L_196C6:
    /* 000196c6   6  move.l (4,A0),(fffffffa,A5) */
    c->pc = RC_ADDR(0x000196c6u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_196CC:
    /* 000196cc   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x000196ccu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_196D0:
    /* 000196d0   2  clr.l (A0) */
    c->pc = RC_ADDR(0x000196d0u);
    rc_step(c, m, 20);
    rc_wr32(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_196D2:
    /* 000196d2   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x000196d2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_196D6:
    /* 000196d6   6  move.l (4,A0),(182c,A4) */
    c->pc = RC_ADDR(0x000196d6u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[4] + 0x182cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_196DC:
    /* 000196dc   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x000196dcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_196E0:
    /* 000196e0   6  move.w (8,A0),(1830,A4) */
    c->pc = RC_ADDR(0x000196e0u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0x1830u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_196E6:
    /* 000196e6   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x000196e6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_196EA:
    /* 000196ea   6  move.l (140c,A4),(4,A0) */
    c->pc = RC_ADDR(0x000196eau);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_196F0:
    /* 000196f0   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x000196f0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_196F4:
    /* 000196f4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000196f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_196F8:
    /* 000196f8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000196f8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_196FA:
    /* 000196fa   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x000196fau);
    rc_step(c, m, 162);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_196FE:
    /* 000196fe   4  move.w D0,(8,A0) */
    c->pc = RC_ADDR(0x000196feu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19702:
    /* 00019702   2  bsr 00019716 */
    c->pc = RC_ADDR(0x00019702u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019704u));
    rc_depth++;
    c->pc = RC_ADDR(0x00019716u);
    return;

L_19704:
    /* 00019704   4  move.l (ffffd290,A4),-(A7) */
    c->pc = RC_ADDR(0x00019704u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d70u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_19708:
    /* 00019708   4  jsr (ffff8398,A4) */
    c->pc = RC_ADDR(0x00019708u);
    rc_step(c, m, 18);
    /* vector 153 */
    rc_push32(c, m, RC_ADDR(0x0001970cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002393au);
    return;

L_1970C:
    /* 0001970c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001970cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1970E:
    /* 0001970e   4  jsr (00019842) */
    c->pc = RC_ADDR(0x0001970eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019712u));
    rc_depth++;
    c->pc = RC_ADDR(0x00019842u);
    return;

L_19712:
    /* 00019712   2  unlk A5 */
    c->pc = RC_ADDR(0x00019712u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_19714:
    /* 00019714   2  rts */
    c->pc = RC_ADDR(0x00019714u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
