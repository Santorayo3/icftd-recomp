/* fn_00014cb0 - 92 byte(s), 25 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00014cb0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00014cb0u): goto L_14CB0;
    case RC_ADDR(0x00014cb4u): goto L_14CB4;
    case RC_ADDR(0x00014cb8u): goto L_14CB8;
    case RC_ADDR(0x00014cbcu): goto L_14CBC;
    case RC_ADDR(0x00014cbeu): goto L_14CBE;
    case RC_ADDR(0x00014cc2u): goto L_14CC2;
    case RC_ADDR(0x00014cc4u): goto L_14CC4;
    case RC_ADDR(0x00014cc8u): goto L_14CC8;
    case RC_ADDR(0x00014cccu): goto L_14CCC;
    case RC_ADDR(0x00014cd0u): goto L_14CD0;
    case RC_ADDR(0x00014cd4u): goto L_14CD4;
    case RC_ADDR(0x00014cd8u): goto L_14CD8;
    case RC_ADDR(0x00014cdcu): goto L_14CDC;
    case RC_ADDR(0x00014cdeu): goto L_14CDE;
    case RC_ADDR(0x00014ce2u): goto L_14CE2;
    case RC_ADDR(0x00014ce6u): goto L_14CE6;
    case RC_ADDR(0x00014ceau): goto L_14CEA;
    case RC_ADDR(0x00014ceeu): goto L_14CEE;
    case RC_ADDR(0x00014cf2u): goto L_14CF2;
    case RC_ADDR(0x00014cf6u): goto L_14CF6;
    case RC_ADDR(0x00014cfau): goto L_14CFA;
    case RC_ADDR(0x00014cfeu): goto L_14CFE;
    case RC_ADDR(0x00014d02u): goto L_14D02;
    case RC_ADDR(0x00014d08u): goto L_14D08;
    case RC_ADDR(0x00014d0au): goto L_14D0A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14CB0:
    /* 00014cb0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00014cb0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_14CB4:
    /* 00014cb4   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x00014cb4u);
    rc_step(c, m, 12);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CB8:
    /* 00014cb8   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x00014cb8u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x00014cbcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_14CBC:
    /* 00014cbc   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00014cbcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_14CBE:
    /* 00014cbe   4  cmp.w #1f4,D0 */
    c->pc = RC_ADDR(0x00014cbeu);
    rc_step(c, m, 8);
    t0 = 0x000001f4u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14CC2:
    /* 00014cc2   2  bge 00014cde */
    c->pc = RC_ADDR(0x00014cc2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_14CDE;

L_14CC4:
    /* 00014cc4   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014cc4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CC8:
    /* 00014cc8   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014cc8u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14CCC:
    /* 00014ccc   4  lea (fffffb2c,A4),A0 */
    c->pc = RC_ADDR(0x00014cccu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d4u);

L_14CD0:
    /* 00014cd0   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00014cd0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CD4:
    /* 00014cd4   4  add.w #32,D1 */
    c->pc = RC_ADDR(0x00014cd4u);
    rc_step(c, m, 10);
    t0 = 0x00000032u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14CD8:
    /* 00014cd8   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014cd8u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CDC:
    /* 00014cdc   2  bra 00014cf6 */
    c->pc = RC_ADDR(0x00014cdcu);
    rc_step(c, m, 10);
    goto L_14CF6;

L_14CDE:
    /* 00014cde   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014cdeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CE2:
    /* 00014ce2   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014ce2u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14CE6:
    /* 00014ce6   4  lea (fffffb2c,A4),A0 */
    c->pc = RC_ADDR(0x00014ce6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d4u);

L_14CEA:
    /* 00014cea   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00014ceau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CEE:
    /* 00014cee   4  sub.w #32,D1 */
    c->pc = RC_ADDR(0x00014ceeu);
    rc_step(c, m, 10);
    t0 = 0x00000032u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14CF2:
    /* 00014cf2   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014cf2u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CF6:
    /* 00014cf6   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014cf6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14CFA:
    /* 00014cfa   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014cfau);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14CFE:
    /* 00014cfe   4  lea (fffffb38,A4),A0 */
    c->pc = RC_ADDR(0x00014cfeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4c8u);

L_14D02:
    /* 00014d02   6  move.b #14,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014d02u);
    rc_step(c, m, 18);
    t0 = 0x00000014u;
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_14D08:
    /* 00014d08   2  unlk A5 */
    c->pc = RC_ADDR(0x00014d08u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14D0A:
    /* 00014d0a   2  rts */
    c->pc = RC_ADDR(0x00014d0au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
