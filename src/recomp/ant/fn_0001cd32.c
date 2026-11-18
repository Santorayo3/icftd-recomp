/* fn_0001cd32 - 54 byte(s), 17 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001cd32(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001cd32u): goto L_1CD32;
    case RC_ADDR(0x0001cd36u): goto L_1CD36;
    case RC_ADDR(0x0001cd3au): goto L_1CD3A;
    case RC_ADDR(0x0001cd3eu): goto L_1CD3E;
    case RC_ADDR(0x0001cd40u): goto L_1CD40;
    case RC_ADDR(0x0001cd42u): goto L_1CD42;
    case RC_ADDR(0x0001cd46u): goto L_1CD46;
    case RC_ADDR(0x0001cd4au): goto L_1CD4A;
    case RC_ADDR(0x0001cd4eu): goto L_1CD4E;
    case RC_ADDR(0x0001cd52u): goto L_1CD52;
    case RC_ADDR(0x0001cd54u): goto L_1CD54;
    case RC_ADDR(0x0001cd58u): goto L_1CD58;
    case RC_ADDR(0x0001cd5cu): goto L_1CD5C;
    case RC_ADDR(0x0001cd5eu): goto L_1CD5E;
    case RC_ADDR(0x0001cd62u): goto L_1CD62;
    case RC_ADDR(0x0001cd64u): goto L_1CD64;
    case RC_ADDR(0x0001cd66u): goto L_1CD66;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1CD32:
    /* 0001cd32   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001cd32u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1CD36:
    /* 0001cd36   4  move.w (2968,A4),D0 */
    c->pc = RC_ADDR(0x0001cd36u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD3A:
    /* 0001cd3a   4  add.w #10,D0 */
    c->pc = RC_ADDR(0x0001cd3au);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1CD3E:
    /* 0001cd3e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001cd3eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1CD40:
    /* 0001cd40   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001cd40u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1CD42:
    /* 0001cd42   4  lea (2c16,A4),A0 */
    c->pc = RC_ADDR(0x0001cd42u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2c16u);

L_1CD46:
    /* 0001cd46   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0001cd46u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CD4A:
    /* 0001cd4a   4  move.w #122,D0 */
    c->pc = RC_ADDR(0x0001cd4au);
    rc_step(c, m, 8);
    t0 = 0x00000122u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD4E:
    /* 0001cd4e   4  sub.w (e6e,A4),D0 */
    c->pc = RC_ADDR(0x0001cd4eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1CD52:
    /* 0001cd52   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001cd52u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD54:
    /* 0001cd54   4  move.w #162,D0 */
    c->pc = RC_ADDR(0x0001cd54u);
    rc_step(c, m, 8);
    t0 = 0x00000162u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD58:
    /* 0001cd58   4  sub.w (e6c,A4),D0 */
    c->pc = RC_ADDR(0x0001cd58u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1CD5C:
    /* 0001cd5c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001cd5cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CD5E:
    /* 0001cd5e   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0001cd5eu);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0001cd62u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_1CD62:
    /* 0001cd62   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001cd62u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1CD64:
    /* 0001cd64   2  unlk A5 */
    c->pc = RC_ADDR(0x0001cd64u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1CD66:
    /* 0001cd66   2  rts */
    c->pc = RC_ADDR(0x0001cd66u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
