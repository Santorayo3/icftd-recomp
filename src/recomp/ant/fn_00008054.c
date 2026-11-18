/* fn_00008054 - 76 byte(s), 22 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00008054(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00008054u): goto L_8054;
    case RC_ADDR(0x00008058u): goto L_8058;
    case RC_ADDR(0x0000805cu): goto L_805C;
    case RC_ADDR(0x00008060u): goto L_8060;
    case RC_ADDR(0x00008064u): goto L_8064;
    case RC_ADDR(0x00008068u): goto L_8068;
    case RC_ADDR(0x0000806cu): goto L_806C;
    case RC_ADDR(0x0000806eu): goto L_806E;
    case RC_ADDR(0x00008070u): goto L_8070;
    case RC_ADDR(0x00008074u): goto L_8074;
    case RC_ADDR(0x00008078u): goto L_8078;
    case RC_ADDR(0x0000807cu): goto L_807C;
    case RC_ADDR(0x0000807eu): goto L_807E;
    case RC_ADDR(0x00008082u): goto L_8082;
    case RC_ADDR(0x00008084u): goto L_8084;
    case RC_ADDR(0x00008086u): goto L_8086;
    case RC_ADDR(0x0000808au): goto L_808A;
    case RC_ADDR(0x00008090u): goto L_8090;
    case RC_ADDR(0x00008094u): goto L_8094;
    case RC_ADDR(0x0000809au): goto L_809A;
    case RC_ADDR(0x0000809cu): goto L_809C;
    case RC_ADDR(0x0000809eu): goto L_809E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_8054:
    /* 00008054   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00008054u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_8058:
    /* 00008058   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00008058u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_805C:
    /* 0000805c   4  lea (ffffd5cc,A4),A0 */
    c->pc = RC_ADDR(0x0000805cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2a34u);

L_8060:
    /* 00008060   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00008060u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_8064:
    /* 00008064   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00008064u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8068:
    /* 00008068   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00008068u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_806C:
    /* 0000806c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000806cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_806E:
    /* 0000806e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000806eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_8070:
    /* 00008070   4  lea (ffff8440,A4),A0 */
    c->pc = RC_ADDR(0x00008070u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7bc0u);

L_8074:
    /* 00008074   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00008074u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8078:
    /* 00008078   4  cmp.w (8,A5),D1 */
    c->pc = RC_ADDR(0x00008078u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_807C:
    /* 0000807c   2  bne 00008090 */
    c->pc = RC_ADDR(0x0000807cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_8090;

L_807E:
    /* 0000807e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000807eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8082:
    /* 00008082   2  ext.l D0 */
    c->pc = RC_ADDR(0x00008082u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_8084:
    /* 00008084   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00008084u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_8086:
    /* 00008086   4  lea (ffffd6d0,A4),A0 */
    c->pc = RC_ADDR(0x00008086u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2930u);

L_808A:
    /* 0000808a   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000808au);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8090:
    /* 00008090   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00008090u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_8094:
    /* 00008094   6  cmpi.w #10,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00008094u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000010u);

L_809A:
    /* 0000809a   2  blt 00008068 */
    c->pc = RC_ADDR(0x0000809au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_8068; }

L_809C:
    /* 0000809c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000809cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_809E:
    /* 0000809e   2  rts */
    c->pc = RC_ADDR(0x0000809eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
