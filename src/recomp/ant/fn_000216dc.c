/* fn_000216dc - 58 byte(s), 18 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000216dc(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000216dcu): goto L_216DC;
    case RC_ADDR(0x000216deu): goto L_216DE;
    case RC_ADDR(0x000216e2u): goto L_216E2;
    case RC_ADDR(0x000216e4u): goto L_216E4;
    case RC_ADDR(0x000216e8u): goto L_216E8;
    case RC_ADDR(0x000216ecu): goto L_216EC;
    case RC_ADDR(0x000216f0u): goto L_216F0;
    case RC_ADDR(0x000216f4u): goto L_216F4;
    case RC_ADDR(0x000216f8u): goto L_216F8;
    case RC_ADDR(0x000216fau): goto L_216FA;
    case RC_ADDR(0x000216feu): goto L_216FE;
    case RC_ADDR(0x00021700u): goto L_21700;
    case RC_ADDR(0x00021702u): goto L_21702;
    case RC_ADDR(0x00021706u): goto L_21706;
    case RC_ADDR(0x0002170au): goto L_2170A;
    case RC_ADDR(0x0002170cu): goto L_2170C;
    case RC_ADDR(0x0002170eu): goto L_2170E;
    case RC_ADDR(0x00021712u): goto L_21712;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_216DC:
    /* 000216dc   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000216dcu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_216DE:
    /* 000216de   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x000216deu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_216E2:
    /* 000216e2   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000216e2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_216E4:
    /* 000216e4   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x000216e4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_216E8:
    /* 000216e8   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x000216e8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_216EC:
    /* 000216ec   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x000216ecu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_216F0:
    /* 000216f0   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x000216f0u);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x000216f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fe0au);
    return;

L_216F4:
    /* 000216f4   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000216f4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_216F8:
    /* 000216f8   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x000216f8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_216FA:
    /* 000216fa   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x000216fau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_216FE:
    /* 000216fe   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x000216feu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_21700:
    /* 00021700   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x00021700u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_21702:
    /* 00021702   4  move.w D0,(30,A2) */
    c->pc = RC_ADDR(0x00021702u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x30u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21706:
    /* 00021706   4  move.l (14,A5),D0 */
    c->pc = RC_ADDR(0x00021706u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2170A:
    /* 0002170a   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0002170au);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_2170C:
    /* 0002170c   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0002170cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_2170E:
    /* 0002170e   4  move.w D0,(32,A2) */
    c->pc = RC_ADDR(0x0002170eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x32u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21712:
    /* 00021712   4  bra 00021950 */
    c->pc = RC_ADDR(0x00021712u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
