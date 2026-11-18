/* fn_00013988 - 22 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013988(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00013988u): goto L_13988;
    case RC_ADDR(0x0001398cu): goto L_1398C;
    case RC_ADDR(0x00013990u): goto L_13990;
    case RC_ADDR(0x00013992u): goto L_13992;
    case RC_ADDR(0x00013996u): goto L_13996;
    case RC_ADDR(0x0001399au): goto L_1399A;
    case RC_ADDR(0x0001399cu): goto L_1399C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13988:
    /* 00013988   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00013988u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1398C:
    /* 0001398c   4  tst.w (8,A5) */
    c->pc = RC_ADDR(0x0001398cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_13990:
    /* 00013990   2  bge 00013996 */
    c->pc = RC_ADDR(0x00013990u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_13996;

L_13992:
    /* 00013992   4  neg.w (8,A5) */
    c->pc = RC_ADDR(0x00013992u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13996:
    /* 00013996   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00013996u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1399A:
    /* 0001399a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001399au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1399C:
    /* 0001399c   2  rts */
    c->pc = RC_ADDR(0x0001399cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
