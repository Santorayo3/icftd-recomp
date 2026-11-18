/* fn_00020c8e - 44 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00020c8e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00020c8eu): goto L_20C8E;
    case RC_ADDR(0x00020c92u): goto L_20C92;
    case RC_ADDR(0x00020c96u): goto L_20C96;
    case RC_ADDR(0x00020c98u): goto L_20C98;
    case RC_ADDR(0x00020c9au): goto L_20C9A;
    case RC_ADDR(0x00020c9eu): goto L_20C9E;
    case RC_ADDR(0x00020ca2u): goto L_20CA2;
    case RC_ADDR(0x00020ca6u): goto L_20CA6;
    case RC_ADDR(0x00020caau): goto L_20CAA;
    case RC_ADDR(0x00020cacu): goto L_20CAC;
    case RC_ADDR(0x00020cb0u): goto L_20CB0;
    case RC_ADDR(0x00020cb4u): goto L_20CB4;
    case RC_ADDR(0x00020cb8u): goto L_20CB8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20C8E:
    /* 00020c8e   4  lea (ffffd38a,A4),A0 */
    c->pc = RC_ADDR(0x00020c8eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2c76u);

L_20C92:
    /* 00020c92   4  move.w (ffffd388,A4),D1 */
    c->pc = RC_ADDR(0x00020c92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2c78u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20C96:
    /* 00020c96   2  subq.w #2,D1 */
    c->pc = RC_ADDR(0x00020c96u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_20C98:
    /* 00020c98   2  bpl 00020c9e */
    c->pc = RC_ADDR(0x00020c98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_20C9E;

L_20C9A:
    /* 00020c9a   4  move.w #70,D1 */
    c->pc = RC_ADDR(0x00020c9au);
    rc_step(c, m, 8);
    t0 = 0x00000070u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20C9E:
    /* 00020c9e   4  move.w D1,(ffffd388,A4) */
    c->pc = RC_ADDR(0x00020c9eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x2c78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20CA2:
    /* 00020ca2   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00020ca2u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20CA6:
    /* 00020ca6   4  sub.w #64,D1 */
    c->pc = RC_ADDR(0x00020ca6u);
    rc_step(c, m, 10);
    t0 = 0x00000064u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_20CAA:
    /* 00020caa   2  bpl 00020cb0 */
    c->pc = RC_ADDR(0x00020caau);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_20CB0;

L_20CAC:
    /* 00020cac   4  add.w #72,D1 */
    c->pc = RC_ADDR(0x00020cacu);
    rc_step(c, m, 10);
    t0 = 0x00000072u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_20CB0:
    /* 00020cb0   4  add.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00020cb0u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_20CB4:
    /* 00020cb4   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00020cb4u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20CB8:
    /* 00020cb8   2  rts */
    c->pc = RC_ADDR(0x00020cb8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
