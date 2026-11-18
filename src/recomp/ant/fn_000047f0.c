/* fn_000047f0 - 98 byte(s), 31 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000047f0(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000047f0u): goto L_47F0;
    case RC_ADDR(0x000047f4u): goto L_47F4;
    case RC_ADDR(0x000047fau): goto L_47FA;
    case RC_ADDR(0x000047fcu): goto L_47FC;
    case RC_ADDR(0x00004800u): goto L_4800;
    case RC_ADDR(0x00004802u): goto L_4802;
    case RC_ADDR(0x00004804u): goto L_4804;
    case RC_ADDR(0x00004806u): goto L_4806;
    case RC_ADDR(0x0000480au): goto L_480A;
    case RC_ADDR(0x0000480cu): goto L_480C;
    case RC_ADDR(0x0000480eu): goto L_480E;
    case RC_ADDR(0x00004810u): goto L_4810;
    case RC_ADDR(0x00004812u): goto L_4812;
    case RC_ADDR(0x00004816u): goto L_4816;
    case RC_ADDR(0x0000481au): goto L_481A;
    case RC_ADDR(0x0000481eu): goto L_481E;
    case RC_ADDR(0x00004822u): goto L_4822;
    case RC_ADDR(0x00004824u): goto L_4824;
    case RC_ADDR(0x00004826u): goto L_4826;
    case RC_ADDR(0x00004828u): goto L_4828;
    case RC_ADDR(0x0000482cu): goto L_482C;
    case RC_ADDR(0x00004830u): goto L_4830;
    case RC_ADDR(0x00004834u): goto L_4834;
    case RC_ADDR(0x00004838u): goto L_4838;
    case RC_ADDR(0x0000483eu): goto L_483E;
    case RC_ADDR(0x00004840u): goto L_4840;
    case RC_ADDR(0x00004844u): goto L_4844;
    case RC_ADDR(0x00004848u): goto L_4848;
    case RC_ADDR(0x0000484cu): goto L_484C;
    case RC_ADDR(0x0000484eu): goto L_484E;
    case RC_ADDR(0x00004850u): goto L_4850;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_47F0:
    /* 000047f0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000047f0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_47F4:
    /* 000047f4   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x000047f4u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_47FA:
    /* 000047fa   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000047fau);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_47FC:
    /* 000047fc   4  move.l (fffff7a2,A4),D0 */
    c->pc = RC_ADDR(0x000047fcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4800:
    /* 00004800   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00004800u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_4802:
    /* 00004802   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00004802u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_4804:
    /* 00004804   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00004804u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4806:
    /* 00004806   4  move.l (fffff79e,A4),D0 */
    c->pc = RC_ADDR(0x00004806u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x862u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_480A:
    /* 0000480a   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0000480au);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_480C:
    /* 0000480c   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x0000480cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_480E:
    /* 0000480e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000480eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4810:
    /* 00004810   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00004810u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4812:
    /* 00004812   4  move.l (fffff788,A4),-(A7) */
    c->pc = RC_ADDR(0x00004812u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x878u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4816:
    /* 00004816   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00004816u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_481A:
    /* 0000481a   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000481au);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000481eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_481E:
    /* 0000481e   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000481eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_4822:
    /* 00004822   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00004822u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4824:
    /* 00004824   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00004824u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4826:
    /* 00004826   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00004826u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4828:
    /* 00004828   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00004828u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_482C:
    /* 0000482c   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000482cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4830:
    /* 00004830   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x00004830u);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x00004834u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_4834:
    /* 00004834   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00004834u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_4838:
    /* 00004838   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00004838u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_483E:
    /* 0000483e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000483eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4840:
    /* 00004840   4  move.l (fffff788,A4),-(A7) */
    c->pc = RC_ADDR(0x00004840u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x878u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4844:
    /* 00004844   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00004844u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4848:
    /* 00004848   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00004848u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000484cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_484C:
    /* 0000484c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000484cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_484E:
    /* 0000484e   2  unlk A5 */
    c->pc = RC_ADDR(0x0000484eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4850:
    /* 00004850   2  rts */
    c->pc = RC_ADDR(0x00004850u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
