/* fn_000207fc - 120 byte(s), 36 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000207fc(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000207fcu): goto L_207FC;
    case RC_ADDR(0x00020800u): goto L_20800;
    case RC_ADDR(0x00020804u): goto L_20804;
    case RC_ADDR(0x00020808u): goto L_20808;
    case RC_ADDR(0x0002080cu): goto L_2080C;
    case RC_ADDR(0x00020810u): goto L_20810;
    case RC_ADDR(0x00020814u): goto L_20814;
    case RC_ADDR(0x00020818u): goto L_20818;
    case RC_ADDR(0x0002081cu): goto L_2081C;
    case RC_ADDR(0x0002081eu): goto L_2081E;
    case RC_ADDR(0x00020822u): goto L_20822;
    case RC_ADDR(0x00020826u): goto L_20826;
    case RC_ADDR(0x00020828u): goto L_20828;
    case RC_ADDR(0x0002082cu): goto L_2082C;
    case RC_ADDR(0x0002082eu): goto L_2082E;
    case RC_ADDR(0x00020832u): goto L_20832;
    case RC_ADDR(0x00020836u): goto L_20836;
    case RC_ADDR(0x00020838u): goto L_20838;
    case RC_ADDR(0x0002083cu): goto L_2083C;
    case RC_ADDR(0x0002083eu): goto L_2083E;
    case RC_ADDR(0x00020842u): goto L_20842;
    case RC_ADDR(0x00020846u): goto L_20846;
    case RC_ADDR(0x00020848u): goto L_20848;
    case RC_ADDR(0x0002084cu): goto L_2084C;
    case RC_ADDR(0x00020850u): goto L_20850;
    case RC_ADDR(0x00020852u): goto L_20852;
    case RC_ADDR(0x00020854u): goto L_20854;
    case RC_ADDR(0x00020858u): goto L_20858;
    case RC_ADDR(0x0002085au): goto L_2085A;
    case RC_ADDR(0x0002085eu): goto L_2085E;
    case RC_ADDR(0x00020862u): goto L_20862;
    case RC_ADDR(0x00020866u): goto L_20866;
    case RC_ADDR(0x0002086au): goto L_2086A;
    case RC_ADDR(0x0002086eu): goto L_2086E;
    case RC_ADDR(0x00020870u): goto L_20870;
    case RC_ADDR(0x00020872u): goto L_20872;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_207FC:
    /* 000207fc   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000207fcu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_20800:
    /* 00020800   4  jsr (000203c0) */
    c->pc = RC_ADDR(0x00020800u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020804u));
    rc_depth++;
    c->pc = RC_ADDR(0x000203c0u);
    return;

L_20804:
    /* 00020804   4  jsr (000204da) */
    c->pc = RC_ADDR(0x00020804u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020808u));
    rc_depth++;
    c->pc = RC_ADDR(0x000204dau);
    return;

L_20808:
    /* 00020808   4  jsr (0001f2d6) */
    c->pc = RC_ADDR(0x00020808u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002080cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2d6u);
    return;

L_2080C:
    /* 0002080c   4  jsr (0002127a) */
    c->pc = RC_ADDR(0x0002080cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020810u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002127au);
    return;

L_20810:
    /* 00020810   4  jsr (ffff8284,A4) */
    c->pc = RC_ADDR(0x00020810u);
    rc_step(c, m, 18);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x00020814u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d7au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021320u);
    return;

L_20814:
    /* 00020814   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x00020814u);
    rc_step(c, m, 18);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x00020818u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d32u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f814u);
    return;

L_20818:
    /* 00020818   4  tst.l (ffffd32c,A4) */
    c->pc = RC_ADDR(0x00020818u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cd4u));
    rc_set_nzvc(c, t0, RC_L);

L_2081C:
    /* 0002081c   2  beq 00020828 */
    c->pc = RC_ADDR(0x0002081cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20828;

L_2081E:
    /* 0002081e   4  move.l (ffffd32c,A4),-(A7) */
    c->pc = RC_ADDR(0x0002081eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cd4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20822:
    /* 00020822   4  jsr (ffff8356,A4) */
    c->pc = RC_ADDR(0x00020822u);
    rc_step(c, m, 18);
    /* vector 142 */
    rc_push32(c, m, RC_ADDR(0x00020826u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e4cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002358cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023590u);
    return;

L_20826:
    /* 00020826   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020826u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20828:
    /* 00020828   4  tst.l (ffffd328,A4) */
    c->pc = RC_ADDR(0x00020828u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cd8u));
    rc_set_nzvc(c, t0, RC_L);

L_2082C:
    /* 0002082c   2  beq 00020838 */
    c->pc = RC_ADDR(0x0002082cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20838;

L_2082E:
    /* 0002082e   4  move.l (ffffd328,A4),-(A7) */
    c->pc = RC_ADDR(0x0002082eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cd8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20832:
    /* 00020832   4  jsr (ffff8356,A4) */
    c->pc = RC_ADDR(0x00020832u);
    rc_step(c, m, 18);
    /* vector 142 */
    rc_push32(c, m, RC_ADDR(0x00020836u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e4cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002358cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023590u);
    return;

L_20836:
    /* 00020836   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020836u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20838:
    /* 00020838   4  tst.l (ffffd324,A4) */
    c->pc = RC_ADDR(0x00020838u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    rc_set_nzvc(c, t0, RC_L);

L_2083C:
    /* 0002083c   2  beq 00020848 */
    c->pc = RC_ADDR(0x0002083cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20848;

L_2083E:
    /* 0002083e   4  move.l (ffffd324,A4),-(A7) */
    c->pc = RC_ADDR(0x0002083eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20842:
    /* 00020842   4  jsr (ffff8356,A4) */
    c->pc = RC_ADDR(0x00020842u);
    rc_step(c, m, 18);
    /* vector 142 */
    rc_push32(c, m, RC_ADDR(0x00020846u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e4cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002358cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023590u);
    return;

L_20846:
    /* 00020846   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020846u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20848:
    /* 00020848   4  move.l (3448,A4),-(A7) */
    c->pc = RC_ADDR(0x00020848u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3448u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2084C:
    /* 0002084c   4  jsr (ffff831a,A4) */
    c->pc = RC_ADDR(0x0002084cu);
    rc_step(c, m, 18);
    /* vector 132 */
    rc_push32(c, m, RC_ADDR(0x00020850u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e10u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234aeu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000234b2u);
    return;

L_20850:
    /* 00020850   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020850u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20852:
    /* 00020852   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00020852u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20854:
    /* 00020854   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00020854u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x00020858u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e3au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023538u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002353cu);
    return;

L_20858:
    /* 00020858   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020858u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2085A:
    /* 0002085a   4  jsr (00022578) */
    c->pc = RC_ADDR(0x0002085au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002085eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00022578u);
    return;

L_2085E:
    /* 0002085e   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x0002085eu);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x00020862u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022308u);
    return;

L_20862:
    /* 00020862   4  jsr (ffff8134,A4) */
    c->pc = RC_ADDR(0x00020862u);
    rc_step(c, m, 18);
    /* vector 51 */
    rc_push32(c, m, RC_ADDR(0x00020866u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c2au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00010596u);
    return;

L_20866:
    /* 00020866   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00020866u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2086A:
    /* 0002086a   4  jsr (000232f6) */
    c->pc = RC_ADDR(0x0002086au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002086eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000232f6u);
    return;

L_2086E:
    /* 0002086e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0002086eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_20870:
    /* 00020870   2  unlk A5 */
    c->pc = RC_ADDR(0x00020870u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_20872:
    /* 00020872   2  rts */
    c->pc = RC_ADDR(0x00020872u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
