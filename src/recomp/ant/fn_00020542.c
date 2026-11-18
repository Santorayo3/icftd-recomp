/* fn_00020542 - 104 byte(s), 37 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00020542(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00020542u): goto L_20542;
    case RC_ADDR(0x00020546u): goto L_20546;
    case RC_ADDR(0x0002054au): goto L_2054A;
    case RC_ADDR(0x0002054eu): goto L_2054E;
    case RC_ADDR(0x00020552u): goto L_20552;
    case RC_ADDR(0x00020554u): goto L_20554;
    case RC_ADDR(0x00020556u): goto L_20556;
    case RC_ADDR(0x0002055au): goto L_2055A;
    case RC_ADDR(0x0002055cu): goto L_2055C;
    case RC_ADDR(0x00020560u): goto L_20560;
    case RC_ADDR(0x00020564u): goto L_20564;
    case RC_ADDR(0x00020568u): goto L_20568;
    case RC_ADDR(0x0002056au): goto L_2056A;
    case RC_ADDR(0x0002056cu): goto L_2056C;
    case RC_ADDR(0x0002056eu): goto L_2056E;
    case RC_ADDR(0x00020572u): goto L_20572;
    case RC_ADDR(0x00020574u): goto L_20574;
    case RC_ADDR(0x00020578u): goto L_20578;
    case RC_ADDR(0x0002057au): goto L_2057A;
    case RC_ADDR(0x0002057cu): goto L_2057C;
    case RC_ADDR(0x00020580u): goto L_20580;
    case RC_ADDR(0x00020582u): goto L_20582;
    case RC_ADDR(0x00020584u): goto L_20584;
    case RC_ADDR(0x00020586u): goto L_20586;
    case RC_ADDR(0x00020588u): goto L_20588;
    case RC_ADDR(0x0002058cu): goto L_2058C;
    case RC_ADDR(0x00020590u): goto L_20590;
    case RC_ADDR(0x00020594u): goto L_20594;
    case RC_ADDR(0x00020596u): goto L_20596;
    case RC_ADDR(0x00020598u): goto L_20598;
    case RC_ADDR(0x0002059au): goto L_2059A;
    case RC_ADDR(0x0002059cu): goto L_2059C;
    case RC_ADDR(0x0002059eu): goto L_2059E;
    case RC_ADDR(0x000205a0u): goto L_205A0;
    case RC_ADDR(0x000205a2u): goto L_205A2;
    case RC_ADDR(0x000205a6u): goto L_205A6;
    case RC_ADDR(0x000205a8u): goto L_205A8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20542:
    /* 00020542   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00020542u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_20546:
    /* 00020546   4  movem.l { D4 D5 A3 },-(SP) */
    c->pc = RC_ADDR(0x00020546u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_2054A:
    /* 0002054a   4  movea.l (c,A5),A2 */
    c->pc = RC_ADDR(0x0002054au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[2] = t0;

L_2054E:
    /* 0002054e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0002054eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20552:
    /* 00020552   2  tst.l (A0) */
    c->pc = RC_ADDR(0x00020552u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_L);

L_20554:
    /* 00020554   2  beq 0002056e */
    c->pc = RC_ADDR(0x00020554u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2056E;

L_20556:
    /* 00020556   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00020556u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_2055A:
    /* 0002055a   2  movea.l (A0),A1 */
    c->pc = RC_ADDR(0x0002055au);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_2055C:
    /* 0002055c   4  move.l (4,A1),-(A7) */
    c->pc = RC_ADDR(0x0002055cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20560:
    /* 00020560   4  move.l (4,A2),-(A7) */
    c->pc = RC_ADDR(0x00020560u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20564:
    /* 00020564   4  jsr (000210d0) */
    c->pc = RC_ADDR(0x00020564u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020568u));
    rc_depth++;
    c->pc = RC_ADDR(0x000210d0u);
    return;

L_20568:
    /* 00020568   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020568u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2056A:
    /* 0002056a   2  tst.w D0 */
    c->pc = RC_ADDR(0x0002056au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2056C:
    /* 0002056c   2  bge 0002057c */
    c->pc = RC_ADDR(0x0002056cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_2057C;

L_2056E:
    /* 0002056e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0002056eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20572:
    /* 00020572   2  move.l (A0),(A2) */
    c->pc = RC_ADDR(0x00020572u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, c->a[2], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20574:
    /* 00020574   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00020574u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20578:
    /* 00020578   2  move.l A2,(A0) */
    c->pc = RC_ADDR(0x00020578u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2057A:
    /* 0002057a   2  bra 000205a2 */
    c->pc = RC_ADDR(0x0002057au);
    rc_step(c, m, 10);
    goto L_205A2;

L_2057C:
    /* 0002057c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0002057cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20580:
    /* 00020580   2  movea.l (A0),A3 */
    c->pc = RC_ADDR(0x00020580u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[3] = t0;

L_20582:
    /* 00020582   2  tst.l (A3) */
    c->pc = RC_ADDR(0x00020582u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[3]);
    rc_set_nzvc(c, t0, RC_L);

L_20584:
    /* 00020584   2  beq 0002059e */
    c->pc = RC_ADDR(0x00020584u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2059E;

L_20586:
    /* 00020586   2  movea.l (A3),A0 */
    c->pc = RC_ADDR(0x00020586u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[0] = t0;

L_20588:
    /* 00020588   4  move.l (4,A0),-(A7) */
    c->pc = RC_ADDR(0x00020588u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2058C:
    /* 0002058c   4  move.l (4,A2),-(A7) */
    c->pc = RC_ADDR(0x0002058cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20590:
    /* 00020590   4  jsr (000210d0) */
    c->pc = RC_ADDR(0x00020590u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020594u));
    rc_depth++;
    c->pc = RC_ADDR(0x000210d0u);
    return;

L_20594:
    /* 00020594   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020594u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20596:
    /* 00020596   2  tst.w D0 */
    c->pc = RC_ADDR(0x00020596u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_20598:
    /* 00020598   2  blt 0002059e */
    c->pc = RC_ADDR(0x00020598u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_2059E;

L_2059A:
    /* 0002059a   2  movea.l (A3),A3 */
    c->pc = RC_ADDR(0x0002059au);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[3]);
    c->a[3] = t0;

L_2059C:
    /* 0002059c   2  bra 00020582 */
    c->pc = RC_ADDR(0x0002059cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_20582;

L_2059E:
    /* 0002059e   2  move.l (A3),(A2) */
    c->pc = RC_ADDR(0x0002059eu);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[3]);
    rc_wr32(c, m, c->a[2], t0);
    rc_set_nzvc(c, t0, RC_L);

L_205A0:
    /* 000205a0   2  move.l A2,(A3) */
    c->pc = RC_ADDR(0x000205a0u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, c->a[3], t0);
    rc_set_nzvc(c, t0, RC_L);

L_205A2:
    /* 000205a2   4  movem.l (SP)+,{ D4 A2 A3 } */
    c->pc = RC_ADDR(0x000205a2u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_205A6:
    /* 000205a6   2  unlk A5 */
    c->pc = RC_ADDR(0x000205a6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_205A8:
    /* 000205a8   2  rts */
    c->pc = RC_ADDR(0x000205a8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
