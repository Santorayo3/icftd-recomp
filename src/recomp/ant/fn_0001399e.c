/* fn_0001399e - 116 byte(s), 27 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001399e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0001399eu): goto L_1399E;
    case RC_ADDR(0x000139a2u): goto L_139A2;
    case RC_ADDR(0x000139a6u): goto L_139A6;
    case RC_ADDR(0x000139aau): goto L_139AA;
    case RC_ADDR(0x000139aeu): goto L_139AE;
    case RC_ADDR(0x000139b2u): goto L_139B2;
    case RC_ADDR(0x000139b6u): goto L_139B6;
    case RC_ADDR(0x000139bau): goto L_139BA;
    case RC_ADDR(0x000139c0u): goto L_139C0;
    case RC_ADDR(0x000139c4u): goto L_139C4;
    case RC_ADDR(0x000139c8u): goto L_139C8;
    case RC_ADDR(0x000139ceu): goto L_139CE;
    case RC_ADDR(0x000139d4u): goto L_139D4;
    case RC_ADDR(0x000139dau): goto L_139DA;
    case RC_ADDR(0x000139e0u): goto L_139E0;
    case RC_ADDR(0x000139e6u): goto L_139E6;
    case RC_ADDR(0x000139eau): goto L_139EA;
    case RC_ADDR(0x000139eeu): goto L_139EE;
    case RC_ADDR(0x000139f0u): goto L_139F0;
    case RC_ADDR(0x000139f4u): goto L_139F4;
    case RC_ADDR(0x000139f8u): goto L_139F8;
    case RC_ADDR(0x000139fcu): goto L_139FC;
    case RC_ADDR(0x00013a00u): goto L_13A00;
    case RC_ADDR(0x00013a04u): goto L_13A04;
    case RC_ADDR(0x00013a08u): goto L_13A08;
    case RC_ADDR(0x00013a0eu): goto L_13A0E;
    case RC_ADDR(0x00013a10u): goto L_13A10;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1399E:
    /* 0001399e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001399eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_139A2:
    /* 000139a2   4  pea (71a,A4) */
    c->pc = RC_ADDR(0x000139a2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x71au));

L_139A6:
    /* 000139a6   4  move.w #20,-(A7) */
    c->pc = RC_ADDR(0x000139a6u);
    rc_step(c, m, 12);
    t0 = 0x00000020u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_139AA:
    /* 000139aa   4  pea (00013a12) */
    c->pc = RC_ADDR(0x000139aau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00013a12u));

L_139AE:
    /* 000139ae   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x000139aeu);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x000139b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_139B2:
    /* 000139b2   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000139b2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_139B6:
    /* 000139b6   4  clr.w (70e,A4) */
    c->pc = RC_ADDR(0x000139b6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x70eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_139BA:
    /* 000139ba   6  move.w #1,(710,A4) */
    c->pc = RC_ADDR(0x000139bau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x710u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_139C0:
    /* 000139c0   4  clr.w (6f6,A4) */
    c->pc = RC_ADDR(0x000139c0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6f6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_139C4:
    /* 000139c4   4  clr.w (6f8,A4) */
    c->pc = RC_ADDR(0x000139c4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6f8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_139C8:
    /* 000139c8   6  move.w #1,(6fa,A4) */
    c->pc = RC_ADDR(0x000139c8u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x6fau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_139CE:
    /* 000139ce   6  move.w #a0,(6fc,A4) */
    c->pc = RC_ADDR(0x000139ceu);
    rc_step(c, m, 16);
    t0 = 0x000000a0u;
    rc_wr16(c, m, (c->a[4] + 0x6fcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_139D4:
    /* 000139d4   6  move.w #5a,(6fe,A4) */
    c->pc = RC_ADDR(0x000139d4u);
    rc_step(c, m, 16);
    t0 = 0x0000005au;
    rc_wr16(c, m, (c->a[4] + 0x6feu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_139DA:
    /* 000139da   6  move.w #1,(704,A4) */
    c->pc = RC_ADDR(0x000139dau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x704u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_139E0:
    /* 000139e0   6  move.w #1,(6e8,A4) */
    c->pc = RC_ADDR(0x000139e0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x6e8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_139E6:
    /* 000139e6   4  clr.w (6ec,A4) */
    c->pc = RC_ADDR(0x000139e6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6ecu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_139EA:
    /* 000139ea   4  move.w (fffffaa6,A4),D0 */
    c->pc = RC_ADDR(0x000139eau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x55au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_139EE:
    /* 000139ee   2  asl.w #4,D0 */
    c->pc = RC_ADDR(0x000139eeu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_139F0:
    /* 000139f0   4  add.w (6fc,A4),D0 */
    c->pc = RC_ADDR(0x000139f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6fcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_139F4:
    /* 000139f4   4  move.w D0,(6f2,A4) */
    c->pc = RC_ADDR(0x000139f4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x6f2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_139F8:
    /* 000139f8   4  move.w (fffffaa4,A4),D0 */
    c->pc = RC_ADDR(0x000139f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x55cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_139FC:
    /* 000139fc   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x000139fcu);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_13A00:
    /* 00013a00   4  add.w (6fe,A4),D0 */
    c->pc = RC_ADDR(0x00013a00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6feu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13A04:
    /* 00013a04   4  move.w D0,(6f4,A4) */
    c->pc = RC_ADDR(0x00013a04u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x6f4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A08:
    /* 00013a08   6  move.w #1,(1846,A4) */
    c->pc = RC_ADDR(0x00013a08u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1846u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13A0E:
    /* 00013a0e   2  unlk A5 */
    c->pc = RC_ADDR(0x00013a0eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13A10:
    /* 00013a10   2  rts */
    c->pc = RC_ADDR(0x00013a10u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
