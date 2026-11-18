/* fn_00022532 - 22 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022532(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x00022532u): goto L_22532;
    case RC_ADDR(0x00022536u): goto L_22536;
    case RC_ADDR(0x00022538u): goto L_22538;
    case RC_ADDR(0x0002253cu): goto L_2253C;
    case RC_ADDR(0x00022540u): goto L_22540;
    case RC_ADDR(0x00022542u): goto L_22542;
    case RC_ADDR(0x00022544u): goto L_22544;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22532:
    /* 00022532   4  tst.w (3508,A4) */
    c->pc = RC_ADDR(0x00022532u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3508u));
    rc_set_nzvc(c, t0, RC_W);

L_22536:
    /* 00022536   2  beq 00022544 */
    c->pc = RC_ADDR(0x00022536u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22544;

L_22538:
    /* 00022538   4  move.l (350a,A4),D0 */
    c->pc = RC_ADDR(0x00022538u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x350au));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2253C:
    /* 0002253c   4  cmp.l (4,A7),D0 */
    c->pc = RC_ADDR(0x0002253cu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_22540:
    /* 00022540   2  bne 00022544 */
    c->pc = RC_ADDR(0x00022540u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22544;

L_22542:
    /* 00022542   2  rts */
    c->pc = RC_ADDR(0x00022542u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_22544:
    /* 00022544   4  jmp (000234a2) */
    c->pc = RC_ADDR(0x00022544u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000234a2u);
    return;

}
