/* fn_0000a8d8 - 26 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000a8d8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a8d8u): goto L_A8D8;
    case RC_ADDR(0x0000a8dcu): goto L_A8DC;
    case RC_ADDR(0x0000a8e0u): goto L_A8E0;
    case RC_ADDR(0x0000a8e6u): goto L_A8E6;
    case RC_ADDR(0x0000a8e8u): goto L_A8E8;
    case RC_ADDR(0x0000a8eeu): goto L_A8EE;
    case RC_ADDR(0x0000a8f0u): goto L_A8F0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A8D8:
    /* 0000a8d8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000a8d8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_A8DC:
    /* 0000a8dc   4  addq.w #1,(fffff8a0,A4) */
    c->pc = RC_ADDR(0x0000a8dcu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x760u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_A8E0:
    /* 0000a8e0   6  cmpi.w #18,(fffff8a0,A4) */
    c->pc = RC_ADDR(0x0000a8e0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x760u));
    rc_cmp(c, RC_W, t0, 0x00000018u);

L_A8E6:
    /* 0000a8e6   2  ble 0000a8ee */
    c->pc = RC_ADDR(0x0000a8e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_A8EE;

L_A8E8:
    /* 0000a8e8   6  move.w #1,(fffff8a4,A4) */
    c->pc = RC_ADDR(0x0000a8e8u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x75cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A8EE:
    /* 0000a8ee   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a8eeu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A8F0:
    /* 0000a8f0   2  rts */
    c->pc = RC_ADDR(0x0000a8f0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
