/* fn_00005db6 - 30 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00005db6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00005db6u): goto L_5DB6;
    case RC_ADDR(0x00005dbau): goto L_5DBA;
    case RC_ADDR(0x00005dc0u): goto L_5DC0;
    case RC_ADDR(0x00005dc4u): goto L_5DC4;
    case RC_ADDR(0x00005dc8u): goto L_5DC8;
    case RC_ADDR(0x00005dccu): goto L_5DCC;
    case RC_ADDR(0x00005dd0u): goto L_5DD0;
    case RC_ADDR(0x00005dd2u): goto L_5DD2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5DB6:
    /* 00005db6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00005db6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_5DBA:
    /* 00005dba   6  move.w #1,(ffff83ec,A4) */
    c->pc = RC_ADDR(0x00005dbau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5DC0:
    /* 00005dc0   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00005dc0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5DC4:
    /* 00005dc4   4  add.w D0,(ffff83e8,A4) */
    c->pc = RC_ADDR(0x00005dc4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x7c18u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_5DC8:
    /* 00005dc8   4  jsr (00005a40) */
    c->pc = RC_ADDR(0x00005dc8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005dccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005a40u);
    return;

L_5DCC:
    /* 00005dcc   4  clr.w (ffff83ec,A4) */
    c->pc = RC_ADDR(0x00005dccu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c14u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5DD0:
    /* 00005dd0   2  unlk A5 */
    c->pc = RC_ADDR(0x00005dd0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5DD2:
    /* 00005dd2   2  rts */
    c->pc = RC_ADDR(0x00005dd2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
