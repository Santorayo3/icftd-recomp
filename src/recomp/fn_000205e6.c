/* fn_000205e6 - 178 byte(s), 47 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000205e6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000205e6u): goto L_205E6;
    case RC_ADDR(0x000205eau): goto L_205EA;
    case RC_ADDR(0x000205eeu): goto L_205EE;
    case RC_ADDR(0x000205f0u): goto L_205F0;
    case RC_ADDR(0x000205f6u): goto L_205F6;
    case RC_ADDR(0x000205f8u): goto L_205F8;
    case RC_ADDR(0x000205fcu): goto L_205FC;
    case RC_ADDR(0x000205feu): goto L_205FE;
    case RC_ADDR(0x00020602u): goto L_20602;
    case RC_ADDR(0x00020606u): goto L_20606;
    case RC_ADDR(0x0002060au): goto L_2060A;
    case RC_ADDR(0x0002060eu): goto L_2060E;
    case RC_ADDR(0x00020610u): goto L_20610;
    case RC_ADDR(0x00020614u): goto L_20614;
    case RC_ADDR(0x00020618u): goto L_20618;
    case RC_ADDR(0x0002061cu): goto L_2061C;
    case RC_ADDR(0x00020620u): goto L_20620;
    case RC_ADDR(0x00020624u): goto L_20624;
    case RC_ADDR(0x00020628u): goto L_20628;
    case RC_ADDR(0x0002062cu): goto L_2062C;
    case RC_ADDR(0x0002062eu): goto L_2062E;
    case RC_ADDR(0x00020632u): goto L_20632;
    case RC_ADDR(0x00020636u): goto L_20636;
    case RC_ADDR(0x0002063au): goto L_2063A;
    case RC_ADDR(0x0002063eu): goto L_2063E;
    case RC_ADDR(0x00020642u): goto L_20642;
    case RC_ADDR(0x00020646u): goto L_20646;
    case RC_ADDR(0x0002064au): goto L_2064A;
    case RC_ADDR(0x0002064eu): goto L_2064E;
    case RC_ADDR(0x00020652u): goto L_20652;
    case RC_ADDR(0x00020656u): goto L_20656;
    case RC_ADDR(0x0002065au): goto L_2065A;
    case RC_ADDR(0x0002065cu): goto L_2065C;
    case RC_ADDR(0x0002065eu): goto L_2065E;
    case RC_ADDR(0x00020660u): goto L_20660;
    case RC_ADDR(0x00020666u): goto L_20666;
    case RC_ADDR(0x0002066cu): goto L_2066C;
    case RC_ADDR(0x00020672u): goto L_20672;
    case RC_ADDR(0x00020674u): goto L_20674;
    case RC_ADDR(0x00020678u): goto L_20678;
    case RC_ADDR(0x0002067cu): goto L_2067C;
    case RC_ADDR(0x00020680u): goto L_20680;
    case RC_ADDR(0x00020684u): goto L_20684;
    case RC_ADDR(0x00020688u): goto L_20688;
    case RC_ADDR(0x0002068cu): goto L_2068C;
    case RC_ADDR(0x00020690u): goto L_20690;
    case RC_ADDR(0x00020694u): goto L_20694;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_205E6:
    /* 000205e6   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000205e6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_205EA:
    /* 000205ea   4  tst.l (ac2,A4) */
    c->pc = RC_ADDR(0x000205eau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xac2u));
    rc_set_nzvc(c, t0, RC_L);

L_205EE:
    /* 000205ee   2  beq 000205f8 */
    c->pc = RC_ADDR(0x000205eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_205F8;

L_205F0:
    /* 000205f0   6  move.l (ac2,A4),(3adc,A4) */
    c->pc = RC_ADDR(0x000205f0u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0xac2u));
    rc_wr32(c, m, (c->a[4] + 0x3adcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_205F6:
    /* 000205f6   2  bra 00020620 */
    c->pc = RC_ADDR(0x000205f6u);
    rc_step(c, m, 10);
    goto L_20620;

L_205F8:
    /* 000205f8   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000205f8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_205FC:
    /* 000205fc   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000205fcu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_205FE:
    /* 000205fe   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000205feu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20602:
    /* 00020602   4  jsr (ffff831a,A4) */
    c->pc = RC_ADDR(0x00020602u);
    rc_step(c, m, 18);
    /* vector 132 */
    rc_push32(c, m, RC_ADDR(0x00020606u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d70u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021484u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021488u);
    return;

L_20606:
    /* 00020606   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00020606u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_2060A:
    /* 0002060a   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x0002060au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_2060E:
    /* 0002060e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0002060eu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20610:
    /* 00020610   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00020610u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20614:
    /* 00020614   4  jsr (ffff831a,A4) */
    c->pc = RC_ADDR(0x00020614u);
    rc_step(c, m, 18);
    /* vector 132 */
    rc_push32(c, m, RC_ADDR(0x00020618u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d70u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021484u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021488u);
    return;

L_20618:
    /* 00020618   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00020618u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_2061C:
    /* 0002061c   4  move.l D0,(3adc,A4) */
    c->pc = RC_ADDR(0x0002061cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3adcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20620:
    /* 00020620   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00020620u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_20624:
    /* 00020624   4  move.l (3adc,A4),-(A7) */
    c->pc = RC_ADDR(0x00020624u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3adcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20628:
    /* 00020628   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00020628u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0002062cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_2062C:
    /* 0002062c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0002062cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2062E:
    /* 0002062e   4  move.l D0,(3ae8,A4) */
    c->pc = RC_ADDR(0x0002062eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3ae8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20632:
    /* 00020632   4  move.l D0,(3ae4,A4) */
    c->pc = RC_ADDR(0x00020632u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3ae4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20636:
    /* 00020636   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00020636u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_2063A:
    /* 0002063a   4  pea (fffffffd,A5) */
    c->pc = RC_ADDR(0x0002063au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x3u));

L_2063E:
    /* 0002063e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0002063eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20642:
    /* 00020642   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x00020642u);
    rc_step(c, m, 18);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00020646u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021472u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021476u);
    return;

L_20646:
    /* 00020646   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00020646u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_2064A:
    /* 0002064a   4  clr.b (ffffffff,A5) */
    c->pc = RC_ADDR(0x0002064au);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[5] - 0x1u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_2064E:
    /* 0002064e   4  pea (fffffffd,A5) */
    c->pc = RC_ADDR(0x0002064eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x3u));

L_20652:
    /* 00020652   4  pea (000207ec) */
    c->pc = RC_ADDR(0x00020652u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000207ecu));

L_20656:
    /* 00020656   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x00020656u);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x0002065au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d10u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000208e8u);
    return;

L_2065A:
    /* 0002065a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0002065au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2065C:
    /* 0002065c   2  tst.w D0 */
    c->pc = RC_ADDR(0x0002065cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2065E:
    /* 0002065e   2  beq 0002069c */
    c->pc = RC_ADDR(0x0002065eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x0002069cu);
        return;
    }

L_20660:
    /* 00020660   6  move.l (3ae4,A4),(ffffcd26,A4) */
    c->pc = RC_ADDR(0x00020660u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3ae4u));
    rc_wr32(c, m, (c->a[4] - 0x32dau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20666:
    /* 00020666   6  move.l (3ae4,A4),(2a82,A4) */
    c->pc = RC_ADDR(0x00020666u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3ae4u));
    rc_wr32(c, m, (c->a[4] + 0x2a82u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2066C:
    /* 0002066c   6  move.l (3adc,A4),(3ae0,A4) */
    c->pc = RC_ADDR(0x0002066cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3adcu));
    rc_wr32(c, m, (c->a[4] + 0x3ae0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20672:
    /* 00020672   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00020672u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20674:
    /* 00020674   4  pea (fffffffe).l */
    c->pc = RC_ADDR(0x00020674u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xfffffffeu);

L_20678:
    /* 00020678   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00020678u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2067C:
    /* 0002067c   4  jsr (ffff831a,A4) */
    c->pc = RC_ADDR(0x0002067cu);
    rc_step(c, m, 18);
    /* vector 132 */
    rc_push32(c, m, RC_ADDR(0x00020680u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d70u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021484u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021488u);
    return;

L_20680:
    /* 00020680   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00020680u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_20684:
    /* 00020684   4  move.l (3adc,A4),-(A7) */
    c->pc = RC_ADDR(0x00020684u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3adcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20688:
    /* 00020688   4  move.l (3ae4,A4),-(A7) */
    c->pc = RC_ADDR(0x00020688u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3ae4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2068C:
    /* 0002068c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0002068cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20690:
    /* 00020690   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x00020690u);
    rc_step(c, m, 18);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00020694u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021472u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021476u);
    return;

L_20694:
    /* 00020694   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00020694u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

    /* falls through into 00020698 */
    c->pc = RC_ADDR(0x00020698u);
    return;
}
