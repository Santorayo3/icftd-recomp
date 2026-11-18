/* fn_00021480 - 134 byte(s), 42 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021480(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00021480u): goto L_21480;
    case RC_ADDR(0x00021482u): goto L_21482;
    case RC_ADDR(0x00021486u): goto L_21486;
    case RC_ADDR(0x00021488u): goto L_21488;
    case RC_ADDR(0x0002148cu): goto L_2148C;
    case RC_ADDR(0x00021490u): goto L_21490;
    case RC_ADDR(0x00021494u): goto L_21494;
    case RC_ADDR(0x00021498u): goto L_21498;
    case RC_ADDR(0x0002149cu): goto L_2149C;
    case RC_ADDR(0x0002149eu): goto L_2149E;
    case RC_ADDR(0x000214a0u): goto L_214A0;
    case RC_ADDR(0x000214a2u): goto L_214A2;
    case RC_ADDR(0x000214a6u): goto L_214A6;
    case RC_ADDR(0x000214aau): goto L_214AA;
    case RC_ADDR(0x000214aeu): goto L_214AE;
    case RC_ADDR(0x000214b2u): goto L_214B2;
    case RC_ADDR(0x000214b4u): goto L_214B4;
    case RC_ADDR(0x000214b6u): goto L_214B6;
    case RC_ADDR(0x000214b8u): goto L_214B8;
    case RC_ADDR(0x000214bau): goto L_214BA;
    case RC_ADDR(0x000214beu): goto L_214BE;
    case RC_ADDR(0x000214c0u): goto L_214C0;
    case RC_ADDR(0x000214c2u): goto L_214C2;
    case RC_ADDR(0x000214c6u): goto L_214C6;
    case RC_ADDR(0x000214cau): goto L_214CA;
    case RC_ADDR(0x000214ceu): goto L_214CE;
    case RC_ADDR(0x000214d2u): goto L_214D2;
    case RC_ADDR(0x000214d6u): goto L_214D6;
    case RC_ADDR(0x000214dau): goto L_214DA;
    case RC_ADDR(0x000214deu): goto L_214DE;
    case RC_ADDR(0x000214e0u): goto L_214E0;
    case RC_ADDR(0x000214e2u): goto L_214E2;
    case RC_ADDR(0x000214e4u): goto L_214E4;
    case RC_ADDR(0x000214e6u): goto L_214E6;
    case RC_ADDR(0x000214eau): goto L_214EA;
    case RC_ADDR(0x000214ecu): goto L_214EC;
    case RC_ADDR(0x000214eeu): goto L_214EE;
    case RC_ADDR(0x000214f2u): goto L_214F2;
    case RC_ADDR(0x000214f6u): goto L_214F6;
    case RC_ADDR(0x000214fau): goto L_214FA;
    case RC_ADDR(0x000214feu): goto L_214FE;
    case RC_ADDR(0x00021502u): goto L_21502;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21480:
    /* 00021480   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021480u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21482:
    /* 00021482   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x00021482u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_21486:
    /* 00021486   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00021486u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21488:
    /* 00021488   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x00021488u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2148C:
    /* 0002148c   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x0002148cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_21490:
    /* 00021490   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00021490u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21494:
    /* 00021494   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x00021494u);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x00021498u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fe0au);
    return;

L_21498:
    /* 00021498   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00021498u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_2149C:
    /* 0002149c   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x0002149cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_2149E:
    /* 0002149e   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0002149eu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_214A0:
    /* 000214a0   2  beq 00021502 */
    c->pc = RC_ADDR(0x000214a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21502;

L_214A2:
    /* 000214a2   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x000214a2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_214A6:
    /* 000214a6   4  sub.l (10,A2),D0 */
    c->pc = RC_ADDR(0x000214a6u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[2] + 0x10u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_214AA:
    /* 000214aa   4  jsr (00023a54) */
    c->pc = RC_ADDR(0x000214aau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000214aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023a54u);
    return;

L_214AE:
    /* 000214ae   4  move.l (18,A5),D1 */
    c->pc = RC_ADDR(0x000214aeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x18u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_214B2:
    /* 000214b2   2  moveq #10,D2 */
    c->pc = RC_ADDR(0x000214b2u);
    rc_step(c, m, 4);
    c->d[2] = 0x00000010u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_214B4:
    /* 000214b4   2  asr.l D2,D1 */
    c->pc = RC_ADDR(0x000214b4u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 0, (c->d[2] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_214B6:
    /* 000214b6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000214b6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_214B8:
    /* 000214b8   2  move.l D1,D0 */
    c->pc = RC_ADDR(0x000214b8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_214BA:
    /* 000214ba   4  jsr (00023a54) */
    c->pc = RC_ADDR(0x000214bau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000214beu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023a54u);
    return;

L_214BE:
    /* 000214be   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x000214beu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_214C0:
    /* 000214c0   2  move.l (A7)+,D0 */
    c->pc = RC_ADDR(0x000214c0u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_214C2:
    /* 000214c2   4  jsr (00023a4a) */
    c->pc = RC_ADDR(0x000214c2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000214c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023a4au);
    return;

L_214C6:
    /* 000214c6   4  jsr (00023a40) */
    c->pc = RC_ADDR(0x000214c6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000214cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023a40u);
    return;

L_214CA:
    /* 000214ca   4  move.l D0,(18,A2) */
    c->pc = RC_ADDR(0x000214cau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_214CE:
    /* 000214ce   4  move.l (14,A5),D0 */
    c->pc = RC_ADDR(0x000214ceu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_214D2:
    /* 000214d2   4  sub.l (14,A2),D0 */
    c->pc = RC_ADDR(0x000214d2u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[2] + 0x14u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_214D6:
    /* 000214d6   4  jsr (00023a54) */
    c->pc = RC_ADDR(0x000214d6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000214dau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023a54u);
    return;

L_214DA:
    /* 000214da   4  move.l (18,A5),D1 */
    c->pc = RC_ADDR(0x000214dau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x18u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_214DE:
    /* 000214de   2  moveq #10,D2 */
    c->pc = RC_ADDR(0x000214deu);
    rc_step(c, m, 4);
    c->d[2] = 0x00000010u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_214E0:
    /* 000214e0   2  asr.l D2,D1 */
    c->pc = RC_ADDR(0x000214e0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 0, (c->d[2] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_214E2:
    /* 000214e2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000214e2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_214E4:
    /* 000214e4   2  move.l D1,D0 */
    c->pc = RC_ADDR(0x000214e4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_214E6:
    /* 000214e6   4  jsr (00023a54) */
    c->pc = RC_ADDR(0x000214e6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000214eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023a54u);
    return;

L_214EA:
    /* 000214ea   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x000214eau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_214EC:
    /* 000214ec   2  move.l (A7)+,D0 */
    c->pc = RC_ADDR(0x000214ecu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_214EE:
    /* 000214ee   4  jsr (00023a4a) */
    c->pc = RC_ADDR(0x000214eeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000214f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023a4au);
    return;

L_214F2:
    /* 000214f2   4  jsr (00023a40) */
    c->pc = RC_ADDR(0x000214f2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000214f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023a40u);
    return;

L_214F6:
    /* 000214f6   4  move.l D0,(1c,A2) */
    c->pc = RC_ADDR(0x000214f6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_214FA:
    /* 000214fa   4  clr.l (24,A2) */
    c->pc = RC_ADDR(0x000214fau);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0x24u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_214FE:
    /* 000214fe   4  clr.l (20,A2) */
    c->pc = RC_ADDR(0x000214feu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0x20u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_21502:
    /* 00021502   4  bra 00021950 */
    c->pc = RC_ADDR(0x00021502u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
