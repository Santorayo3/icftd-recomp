/* fn_0001e1a4 - 66 byte(s), 21 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001e1a4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e1a4u): goto L_1E1A4;
    case RC_ADDR(0x0001e1a8u): goto L_1E1A8;
    case RC_ADDR(0x0001e1acu): goto L_1E1AC;
    case RC_ADDR(0x0001e1b0u): goto L_1E1B0;
    case RC_ADDR(0x0001e1b4u): goto L_1E1B4;
    case RC_ADDR(0x0001e1b8u): goto L_1E1B8;
    case RC_ADDR(0x0001e1bau): goto L_1E1BA;
    case RC_ADDR(0x0001e1bcu): goto L_1E1BC;
    case RC_ADDR(0x0001e1beu): goto L_1E1BE;
    case RC_ADDR(0x0001e1c2u): goto L_1E1C2;
    case RC_ADDR(0x0001e1c4u): goto L_1E1C4;
    case RC_ADDR(0x0001e1c8u): goto L_1E1C8;
    case RC_ADDR(0x0001e1ccu): goto L_1E1CC;
    case RC_ADDR(0x0001e1d0u): goto L_1E1D0;
    case RC_ADDR(0x0001e1d4u): goto L_1E1D4;
    case RC_ADDR(0x0001e1d6u): goto L_1E1D6;
    case RC_ADDR(0x0001e1d8u): goto L_1E1D8;
    case RC_ADDR(0x0001e1dcu): goto L_1E1DC;
    case RC_ADDR(0x0001e1e0u): goto L_1E1E0;
    case RC_ADDR(0x0001e1e2u): goto L_1E1E2;
    case RC_ADDR(0x0001e1e4u): goto L_1E1E4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E1A4:
    /* 0001e1a4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e1a4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E1A8:
    /* 0001e1a8   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001e1a8u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E1AC:
    /* 0001e1ac   4  move.w (2cb6,A4),D0 */
    c->pc = RC_ADDR(0x0001e1acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cb6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E1B0:
    /* 0001e1b0   4  muls.w #14,D0 */
    c->pc = RC_ADDR(0x0001e1b0u);
    rc_step(c, m, 42);
    t0 = 0x00000014u;
    rc_muls(c, 0, t0);

L_1E1B4:
    /* 0001e1b4   4  move.w (2dd0,A4),D1 */
    c->pc = RC_ADDR(0x0001e1b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2dd0u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E1B8:
    /* 0001e1b8   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x0001e1b8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1E1BA:
    /* 0001e1ba   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001e1bau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E1BC:
    /* 0001e1bc   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001e1bcu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1E1BE:
    /* 0001e1be   4  jsr (ffff80da,A4) */
    c->pc = RC_ADDR(0x0001e1beu);
    rc_step(c, m, 18);
    /* vector 36 */
    rc_push32(c, m, RC_ADDR(0x0001e1c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afe6u);
    return;

L_1E1C2:
    /* 0001e1c2   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0001e1c2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1E1C4:
    /* 0001e1c4   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001e1c4u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E1C8:
    /* 0001e1c8   4  move.w (2cb6,A4),D0 */
    c->pc = RC_ADDR(0x0001e1c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cb6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E1CC:
    /* 0001e1cc   4  muls.w #14,D0 */
    c->pc = RC_ADDR(0x0001e1ccu);
    rc_step(c, m, 42);
    t0 = 0x00000014u;
    rc_muls(c, 0, t0);

L_1E1D0:
    /* 0001e1d0   4  move.w (2dd0,A4),D1 */
    c->pc = RC_ADDR(0x0001e1d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2dd0u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E1D4:
    /* 0001e1d4   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x0001e1d4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1E1D6:
    /* 0001e1d6   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001e1d6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E1D8:
    /* 0001e1d8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001e1d8u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E1DC:
    /* 0001e1dc   4  jsr (ffff80da,A4) */
    c->pc = RC_ADDR(0x0001e1dcu);
    rc_step(c, m, 18);
    /* vector 36 */
    rc_push32(c, m, RC_ADDR(0x0001e1e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afe6u);
    return;

L_1E1E0:
    /* 0001e1e0   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0001e1e0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1E1E2:
    /* 0001e1e2   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e1e2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E1E4:
    /* 0001e1e4   2  rts */
    c->pc = RC_ADDR(0x0001e1e4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
