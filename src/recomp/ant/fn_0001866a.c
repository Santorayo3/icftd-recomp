/* fn_0001866a - 156 byte(s), 46 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001866a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001866au): goto L_1866A;
    case RC_ADDR(0x0001866eu): goto L_1866E;
    case RC_ADDR(0x00018672u): goto L_18672;
    case RC_ADDR(0x00018676u): goto L_18676;
    case RC_ADDR(0x00018678u): goto L_18678;
    case RC_ADDR(0x0001867cu): goto L_1867C;
    case RC_ADDR(0x00018680u): goto L_18680;
    case RC_ADDR(0x00018684u): goto L_18684;
    case RC_ADDR(0x00018686u): goto L_18686;
    case RC_ADDR(0x0001868au): goto L_1868A;
    case RC_ADDR(0x0001868eu): goto L_1868E;
    case RC_ADDR(0x00018690u): goto L_18690;
    case RC_ADDR(0x00018694u): goto L_18694;
    case RC_ADDR(0x00018698u): goto L_18698;
    case RC_ADDR(0x0001869cu): goto L_1869C;
    case RC_ADDR(0x0001869eu): goto L_1869E;
    case RC_ADDR(0x000186a2u): goto L_186A2;
    case RC_ADDR(0x000186a6u): goto L_186A6;
    case RC_ADDR(0x000186a8u): goto L_186A8;
    case RC_ADDR(0x000186acu): goto L_186AC;
    case RC_ADDR(0x000186b0u): goto L_186B0;
    case RC_ADDR(0x000186b4u): goto L_186B4;
    case RC_ADDR(0x000186b6u): goto L_186B6;
    case RC_ADDR(0x000186bau): goto L_186BA;
    case RC_ADDR(0x000186beu): goto L_186BE;
    case RC_ADDR(0x000186c0u): goto L_186C0;
    case RC_ADDR(0x000186c4u): goto L_186C4;
    case RC_ADDR(0x000186c8u): goto L_186C8;
    case RC_ADDR(0x000186ccu): goto L_186CC;
    case RC_ADDR(0x000186ceu): goto L_186CE;
    case RC_ADDR(0x000186d2u): goto L_186D2;
    case RC_ADDR(0x000186d6u): goto L_186D6;
    case RC_ADDR(0x000186d8u): goto L_186D8;
    case RC_ADDR(0x000186dcu): goto L_186DC;
    case RC_ADDR(0x000186e0u): goto L_186E0;
    case RC_ADDR(0x000186e4u): goto L_186E4;
    case RC_ADDR(0x000186e6u): goto L_186E6;
    case RC_ADDR(0x000186eau): goto L_186EA;
    case RC_ADDR(0x000186eeu): goto L_186EE;
    case RC_ADDR(0x000186f0u): goto L_186F0;
    case RC_ADDR(0x000186f4u): goto L_186F4;
    case RC_ADDR(0x000186f8u): goto L_186F8;
    case RC_ADDR(0x000186fcu): goto L_186FC;
    case RC_ADDR(0x000186feu): goto L_186FE;
    case RC_ADDR(0x00018702u): goto L_18702;
    case RC_ADDR(0x00018704u): goto L_18704;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1866A:
    /* 0001866a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001866au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1866E:
    /* 0001866e   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x0001866eu);
    rc_step(c, m, 18);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x00018672u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afb8u);
    return;

L_18672:
    /* 00018672   4  tst.l (ffffb370,A4) */
    c->pc = RC_ADDR(0x00018672u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c90u));
    rc_set_nzvc(c, t0, RC_L);

L_18676:
    /* 00018676   2  beq 0001868a */
    c->pc = RC_ADDR(0x00018676u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1868A;

L_18678:
    /* 00018678   4  move.l (cde,A4),-(A7) */
    c->pc = RC_ADDR(0x00018678u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcdeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1867C:
    /* 0001867c   4  move.l (ffffb370,A4),-(A7) */
    c->pc = RC_ADDR(0x0001867cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c90u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18680:
    /* 00018680   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00018680u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00018684u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_18684:
    /* 00018684   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018684u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18686:
    /* 00018686   4  clr.l (ffffb370,A4) */
    c->pc = RC_ADDR(0x00018686u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x4c90u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1868A:
    /* 0001868a   4  tst.l (ffffb3f4,A4) */
    c->pc = RC_ADDR(0x0001868au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c0cu));
    rc_set_nzvc(c, t0, RC_L);

L_1868E:
    /* 0001868e   2  beq 000186a2 */
    c->pc = RC_ADDR(0x0001868eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_186A2;

L_18690:
    /* 00018690   4  move.l (1b92,A4),-(A7) */
    c->pc = RC_ADDR(0x00018690u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1b92u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18694:
    /* 00018694   4  move.l (ffffb3f4,A4),-(A7) */
    c->pc = RC_ADDR(0x00018694u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c0cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18698:
    /* 00018698   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00018698u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001869cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1869C:
    /* 0001869c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001869cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1869E:
    /* 0001869e   4  clr.l (ffffb3f4,A4) */
    c->pc = RC_ADDR(0x0001869eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x4c0cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_186A2:
    /* 000186a2   4  tst.l (1c8c,A4) */
    c->pc = RC_ADDR(0x000186a2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1c8cu));
    rc_set_nzvc(c, t0, RC_L);

L_186A6:
    /* 000186a6   2  beq 000186ba */
    c->pc = RC_ADDR(0x000186a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_186BA;

L_186A8:
    /* 000186a8   4  move.l (1c98,A4),-(A7) */
    c->pc = RC_ADDR(0x000186a8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1c98u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_186AC:
    /* 000186ac   4  move.l (1c8c,A4),-(A7) */
    c->pc = RC_ADDR(0x000186acu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1c8cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_186B0:
    /* 000186b0   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000186b0u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000186b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_186B4:
    /* 000186b4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000186b4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_186B6:
    /* 000186b6   4  clr.l (1c8c,A4) */
    c->pc = RC_ADDR(0x000186b6u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x1c8cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_186BA:
    /* 000186ba   4  tst.l (1c90,A4) */
    c->pc = RC_ADDR(0x000186bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1c90u));
    rc_set_nzvc(c, t0, RC_L);

L_186BE:
    /* 000186be   2  beq 000186d2 */
    c->pc = RC_ADDR(0x000186beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_186D2;

L_186C0:
    /* 000186c0   4  move.l (1c9c,A4),-(A7) */
    c->pc = RC_ADDR(0x000186c0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1c9cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_186C4:
    /* 000186c4   4  move.l (1c90,A4),-(A7) */
    c->pc = RC_ADDR(0x000186c4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1c90u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_186C8:
    /* 000186c8   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000186c8u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000186ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_186CC:
    /* 000186cc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000186ccu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_186CE:
    /* 000186ce   4  clr.l (1c90,A4) */
    c->pc = RC_ADDR(0x000186ceu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x1c90u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_186D2:
    /* 000186d2   4  tst.l (6ae,A4) */
    c->pc = RC_ADDR(0x000186d2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x6aeu));
    rc_set_nzvc(c, t0, RC_L);

L_186D6:
    /* 000186d6   2  beq 000186ea */
    c->pc = RC_ADDR(0x000186d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_186EA;

L_186D8:
    /* 000186d8   4  move.l (6b4,A4),-(A7) */
    c->pc = RC_ADDR(0x000186d8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x6b4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_186DC:
    /* 000186dc   4  move.l (6ae,A4),-(A7) */
    c->pc = RC_ADDR(0x000186dcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x6aeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_186E0:
    /* 000186e0   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000186e0u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000186e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_186E4:
    /* 000186e4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000186e4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_186E6:
    /* 000186e6   4  clr.l (6ae,A4) */
    c->pc = RC_ADDR(0x000186e6u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x6aeu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_186EA:
    /* 000186ea   4  tst.l (ffffb386,A4) */
    c->pc = RC_ADDR(0x000186eau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c7au));
    rc_set_nzvc(c, t0, RC_L);

L_186EE:
    /* 000186ee   2  beq 00018702 */
    c->pc = RC_ADDR(0x000186eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18702;

L_186F0:
    /* 000186f0   4  move.l (1b34,A4),-(A7) */
    c->pc = RC_ADDR(0x000186f0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1b34u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_186F4:
    /* 000186f4   4  move.l (ffffb386,A4),-(A7) */
    c->pc = RC_ADDR(0x000186f4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4c7au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_186F8:
    /* 000186f8   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000186f8u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000186fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_186FC:
    /* 000186fc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000186fcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_186FE:
    /* 000186fe   4  clr.l (ffffb386,A4) */
    c->pc = RC_ADDR(0x000186feu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x4c7au), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18702:
    /* 00018702   2  unlk A5 */
    c->pc = RC_ADDR(0x00018702u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18704:
    /* 00018704   2  rts */
    c->pc = RC_ADDR(0x00018704u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
