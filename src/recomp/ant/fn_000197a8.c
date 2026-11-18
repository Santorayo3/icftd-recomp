/* fn_000197a8 - 64 byte(s), 18 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000197a8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000197a8u): goto L_197A8;
    case RC_ADDR(0x000197acu): goto L_197AC;
    case RC_ADDR(0x000197b2u): goto L_197B2;
    case RC_ADDR(0x000197b6u): goto L_197B6;
    case RC_ADDR(0x000197bau): goto L_197BA;
    case RC_ADDR(0x000197bcu): goto L_197BC;
    case RC_ADDR(0x000197beu): goto L_197BE;
    case RC_ADDR(0x000197c2u): goto L_197C2;
    case RC_ADDR(0x000197c6u): goto L_197C6;
    case RC_ADDR(0x000197c8u): goto L_197C8;
    case RC_ADDR(0x000197cau): goto L_197CA;
    case RC_ADDR(0x000197ceu): goto L_197CE;
    case RC_ADDR(0x000197d4u): goto L_197D4;
    case RC_ADDR(0x000197d8u): goto L_197D8;
    case RC_ADDR(0x000197dcu): goto L_197DC;
    case RC_ADDR(0x000197e2u): goto L_197E2;
    case RC_ADDR(0x000197e4u): goto L_197E4;
    case RC_ADDR(0x000197e6u): goto L_197E6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_197A8:
    /* 000197a8   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000197a8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_197AC:
    /* 000197ac   6  move.w #29,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000197acu);
    rc_step(c, m, 16);
    t0 = 0x00000029u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_197B2:
    /* 000197b2   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000197b2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_197B6:
    /* 000197b6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000197b6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_197BA:
    /* 000197ba   2  ext.l D0 */
    c->pc = RC_ADDR(0x000197bau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_197BC:
    /* 000197bc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000197bcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_197BE:
    /* 000197be   4  lea (8dc,A4),A0 */
    c->pc = RC_ADDR(0x000197beu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x8dcu);

L_197C2:
    /* 000197c2   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x000197c2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_197C6:
    /* 000197c6   2  ext.l D1 */
    c->pc = RC_ADDR(0x000197c6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_197C8:
    /* 000197c8   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000197c8u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_197CA:
    /* 000197ca   4  movea.l (140c,A4),A1 */
    c->pc = RC_ADDR(0x000197cau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[1] = t0;

L_197CE:
    /* 000197ce   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000197ceu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_197D4:
    /* 000197d4   4  addq.w #2,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000197d4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_197D8:
    /* 000197d8   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000197d8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_197DC:
    /* 000197dc   6  cmpi.w #20,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000197dcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_197E2:
    /* 000197e2   2  blt 000197b6 */
    c->pc = RC_ADDR(0x000197e2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_197B6; }

L_197E4:
    /* 000197e4   2  unlk A5 */
    c->pc = RC_ADDR(0x000197e4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_197E6:
    /* 000197e6   2  rts */
    c->pc = RC_ADDR(0x000197e6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
