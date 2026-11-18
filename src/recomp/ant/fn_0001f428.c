/* fn_0001f428 - 22 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f428(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f428u): goto L_1F428;
    case RC_ADDR(0x0001f42cu): goto L_1F42C;
    case RC_ADDR(0x0001f430u): goto L_1F430;
    case RC_ADDR(0x0001f434u): goto L_1F434;
    case RC_ADDR(0x0001f438u): goto L_1F438;
    case RC_ADDR(0x0001f43au): goto L_1F43A;
    case RC_ADDR(0x0001f43cu): goto L_1F43C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F428:
    /* 0001f428   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001f428u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F42C:
    /* 0001f42c   4  pea (ffff829c,A4) */
    c->pc = RC_ADDR(0x0001f42cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x7d64u));

L_1F430:
    /* 0001f430   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f430u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F434:
    /* 0001f434   4  jsr (0001f34c) */
    c->pc = RC_ADDR(0x0001f434u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f438u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f34cu);
    return;

L_1F438:
    /* 0001f438   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f438u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F43A:
    /* 0001f43a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f43au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F43C:
    /* 0001f43c   2  rts */
    c->pc = RC_ADDR(0x0001f43cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
