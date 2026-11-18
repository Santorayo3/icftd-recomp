/* fn_0001bd70 - 22 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001bd70(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001bd70u): goto L_1BD70;
    case RC_ADDR(0x0001bd74u): goto L_1BD74;
    case RC_ADDR(0x0001bd78u): goto L_1BD78;
    case RC_ADDR(0x0001bd7au): goto L_1BD7A;
    case RC_ADDR(0x0001bd7eu): goto L_1BD7E;
    case RC_ADDR(0x0001bd82u): goto L_1BD82;
    case RC_ADDR(0x0001bd84u): goto L_1BD84;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BD70:
    /* 0001bd70   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001bd70u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1BD74:
    /* 0001bd74   4  tst.w (8,A5) */
    c->pc = RC_ADDR(0x0001bd74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_1BD78:
    /* 0001bd78   2  bge 0001bd7e */
    c->pc = RC_ADDR(0x0001bd78u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1BD7E;

L_1BD7A:
    /* 0001bd7a   4  neg.w (8,A5) */
    c->pc = RC_ADDR(0x0001bd7au);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1BD7E:
    /* 0001bd7e   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001bd7eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BD82:
    /* 0001bd82   2  unlk A5 */
    c->pc = RC_ADDR(0x0001bd82u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BD84:
    /* 0001bd84   2  rts */
    c->pc = RC_ADDR(0x0001bd84u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
