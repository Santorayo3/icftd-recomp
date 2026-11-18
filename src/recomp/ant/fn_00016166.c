/* fn_00016166 - 58 byte(s), 15 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00016166(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00016166u): goto L_16166;
    case RC_ADDR(0x0001616au): goto L_1616A;
    case RC_ADDR(0x0001616eu): goto L_1616E;
    case RC_ADDR(0x00016172u): goto L_16172;
    case RC_ADDR(0x00016176u): goto L_16176;
    case RC_ADDR(0x0001617au): goto L_1617A;
    case RC_ADDR(0x0001617eu): goto L_1617E;
    case RC_ADDR(0x00016182u): goto L_16182;
    case RC_ADDR(0x00016186u): goto L_16186;
    case RC_ADDR(0x00016188u): goto L_16188;
    case RC_ADDR(0x0001618cu): goto L_1618C;
    case RC_ADDR(0x00016192u): goto L_16192;
    case RC_ADDR(0x00016196u): goto L_16196;
    case RC_ADDR(0x0001619cu): goto L_1619C;
    case RC_ADDR(0x0001619eu): goto L_1619E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16166:
    /* 00016166   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00016166u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1616A:
    /* 0001616a   4  pea (1b68,A4) */
    c->pc = RC_ADDR(0x0001616au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1b68u));

L_1616E:
    /* 0001616e   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x0001616eu);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16172:
    /* 00016172   4  pea (000161a0) */
    c->pc = RC_ADDR(0x00016172u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000161a0u));

L_16176:
    /* 00016176   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x00016176u);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0001617au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_1617A:
    /* 0001617a   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001617au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1617E:
    /* 0001617e   4  pea (000161a5) */
    c->pc = RC_ADDR(0x0001617eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000161a5u));

L_16182:
    /* 00016182   4  jsr (00018400) */
    c->pc = RC_ADDR(0x00016182u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016186u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018400u);
    return;

L_16186:
    /* 00016186   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00016186u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_16188:
    /* 00016188   4  move.l D0,(1b88,A4) */
    c->pc = RC_ADDR(0x00016188u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1b88u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1618C:
    /* 0001618c   6  move.w #3,(1b5e,A4) */
    c->pc = RC_ADDR(0x0001618cu);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x1b5eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16192:
    /* 00016192   4  clr.w (14f4,A4) */
    c->pc = RC_ADDR(0x00016192u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14f4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16196:
    /* 00016196   6  move.w #4,(1b60,A4) */
    c->pc = RC_ADDR(0x00016196u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x1b60u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1619C:
    /* 0001619c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001619cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1619E:
    /* 0001619e   2  rts */
    c->pc = RC_ADDR(0x0001619eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
