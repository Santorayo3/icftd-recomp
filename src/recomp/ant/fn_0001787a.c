/* fn_0001787a - 22 byte(s), 6 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001787a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0001787au): goto L_1787A;
    case RC_ADDR(0x0001787eu): goto L_1787E;
    case RC_ADDR(0x00017884u): goto L_17884;
    case RC_ADDR(0x0001788au): goto L_1788A;
    case RC_ADDR(0x0001788cu): goto L_1788C;
    case RC_ADDR(0x0001788eu): goto L_1788E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1787A:
    /* 0001787a   4  jsr (0001879c) */
    c->pc = RC_ADDR(0x0001787au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001787eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001879cu);
    return;

L_1787E:
    /* 0001787e   6  andi.l #ffff,D0 */
    c->pc = RC_ADDR(0x0001787eu);
    rc_step(c, m, 14);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 0, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_17884:
    /* 00017884   6  cmpi.l #2710,D0 */
    c->pc = RC_ADDR(0x00017884u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t0, 0x00002710u);

L_1788A:
    /* 0001788a   2  blt 00017890 */
    c->pc = RC_ADDR(0x0001788au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13))
    {
        c->pc = RC_ADDR(0x00017890u);
        return;
    }

L_1788C:
    /* 0001788c   2  clr.l D0 */
    c->pc = RC_ADDR(0x0001788cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1788E:
    /* 0001788e   2  rts */
    c->pc = RC_ADDR(0x0001788eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
