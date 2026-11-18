/* fn_000163c8 - 88 byte(s), 26 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000163c8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000163c8u): goto L_163C8;
    case RC_ADDR(0x000163ccu): goto L_163CC;
    case RC_ADDR(0x000163d0u): goto L_163D0;
    case RC_ADDR(0x000163d2u): goto L_163D2;
    case RC_ADDR(0x000163d6u): goto L_163D6;
    case RC_ADDR(0x000163dau): goto L_163DA;
    case RC_ADDR(0x000163deu): goto L_163DE;
    case RC_ADDR(0x000163e2u): goto L_163E2;
    case RC_ADDR(0x000163e6u): goto L_163E6;
    case RC_ADDR(0x000163eau): goto L_163EA;
    case RC_ADDR(0x000163ecu): goto L_163EC;
    case RC_ADDR(0x000163eeu): goto L_163EE;
    case RC_ADDR(0x000163f2u): goto L_163F2;
    case RC_ADDR(0x000163f6u): goto L_163F6;
    case RC_ADDR(0x000163fau): goto L_163FA;
    case RC_ADDR(0x000163fcu): goto L_163FC;
    case RC_ADDR(0x000163feu): goto L_163FE;
    case RC_ADDR(0x00016402u): goto L_16402;
    case RC_ADDR(0x00016406u): goto L_16406;
    case RC_ADDR(0x0001640au): goto L_1640A;
    case RC_ADDR(0x0001640eu): goto L_1640E;
    case RC_ADDR(0x00016412u): goto L_16412;
    case RC_ADDR(0x00016416u): goto L_16416;
    case RC_ADDR(0x0001641au): goto L_1641A;
    case RC_ADDR(0x0001641cu): goto L_1641C;
    case RC_ADDR(0x0001641eu): goto L_1641E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_163C8:
    /* 000163c8   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x000163c8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_163CC:
    /* 000163cc   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000163ccu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_163D0:
    /* 000163d0   2  bra 00016412 */
    c->pc = RC_ADDR(0x000163d0u);
    rc_step(c, m, 10);
    goto L_16412;

L_163D2:
    /* 000163d2   4  move.w #fff6,-(A7) */
    c->pc = RC_ADDR(0x000163d2u);
    rc_step(c, m, 12);
    t0 = 0x0000fff6u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_163D6:
    /* 000163d6   4  move.w #fff0,-(A7) */
    c->pc = RC_ADDR(0x000163d6u);
    rc_step(c, m, 12);
    t0 = 0x0000fff0u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_163DA:
    /* 000163da   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000163dau);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_163DE:
    /* 000163de   4  move.w #5,-(A7) */
    c->pc = RC_ADDR(0x000163deu);
    rc_step(c, m, 12);
    t0 = 0x00000005u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_163E2:
    /* 000163e2   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x000163e2u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_163E6:
    /* 000163e6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000163e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_163EA:
    /* 000163ea   2  ext.l D0 */
    c->pc = RC_ADDR(0x000163eau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_163EC:
    /* 000163ec   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000163ecu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_163EE:
    /* 000163ee   4  lea (1b58,A4),A0 */
    c->pc = RC_ADDR(0x000163eeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1b58u);

L_163F2:
    /* 000163f2   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000163f2u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_163F6:
    /* 000163f6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000163f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_163FA:
    /* 000163fa   2  ext.l D0 */
    c->pc = RC_ADDR(0x000163fau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_163FC:
    /* 000163fc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000163fcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_163FE:
    /* 000163fe   4  lea (1b52,A4),A0 */
    c->pc = RC_ADDR(0x000163feu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1b52u);

L_16402:
    /* 00016402   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00016402u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16406:
    /* 00016406   4  jsr (00013d4a) */
    c->pc = RC_ADDR(0x00016406u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001640au));
    rc_depth++;
    c->pc = RC_ADDR(0x00013d4au);
    return;

L_1640A:
    /* 0001640a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001640au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1640E:
    /* 0001640e   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001640eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16412:
    /* 00016412   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00016412u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16416:
    /* 00016416   4  cmp.w (1b5e,A4),D0 */
    c->pc = RC_ADDR(0x00016416u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b5eu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1641A:
    /* 0001641a   2  blt 000163d2 */
    c->pc = RC_ADDR(0x0001641au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_163D2; }

L_1641C:
    /* 0001641c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001641cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1641E:
    /* 0001641e   2  rts */
    c->pc = RC_ADDR(0x0001641eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
