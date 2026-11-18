/* fn_00010dd8 - 18 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010dd8(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00010dd8u): goto L_10DD8;
    case RC_ADDR(0x00010ddau): goto L_10DDA;
    case RC_ADDR(0x00010ddeu): goto L_10DDE;
    case RC_ADDR(0x00010de0u): goto L_10DE0;
    case RC_ADDR(0x00010de2u): goto L_10DE2;
    case RC_ADDR(0x00010de6u): goto L_10DE6;
    case RC_ADDR(0x00010de8u): goto L_10DE8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10DD8:
    /* 00010dd8   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00010dd8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10DDA:
    /* 00010dda   4  clr.w (a,A6) */
    c->pc = RC_ADDR(0x00010ddau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[6] + 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10DDE:
    /* 00010dde   2  moveq #3,D0 */
    c->pc = RC_ADDR(0x00010ddeu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000003u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10DE0:
    /* 00010de0   2  bsr 00010dea */
    c->pc = RC_ADDR(0x00010de0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010de2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010deau);
    return;

L_10DE2:
    /* 00010de2   4  dbf D0,00010de0 */
    c->pc = RC_ADDR(0x00010de2u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_10DE0; }
    }

L_10DE6:
    /* 00010de6   2  move.l (A7)+,D0 */
    c->pc = RC_ADDR(0x00010de6u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10DE8:
    /* 00010de8   2  rts */
    c->pc = RC_ADDR(0x00010de8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
