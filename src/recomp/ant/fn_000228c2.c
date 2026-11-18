/* fn_000228c2 - 18 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000228c2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000228c2u): goto L_228C2;
    case RC_ADDR(0x000228c6u): goto L_228C6;
    case RC_ADDR(0x000228c8u): goto L_228C8;
    case RC_ADDR(0x000228cau): goto L_228CA;
    case RC_ADDR(0x000228ccu): goto L_228CC;
    case RC_ADDR(0x000228ceu): goto L_228CE;
    case RC_ADDR(0x000228d0u): goto L_228D0;
    case RC_ADDR(0x000228d2u): goto L_228D2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_228C2:
    /* 000228c2   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x000228c2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_228C6:
    /* 000228c6   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x000228c6u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_228C8:
    /* 000228c8   2  tst.b (A0)+ */
    c->pc = RC_ADDR(0x000228c8u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_set_nzvc(c, t0, RC_B);

L_228CA:
    /* 000228ca   2  bne 000228c8 */
    c->pc = RC_ADDR(0x000228cau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_228C8; }

L_228CC:
    /* 000228cc   2  suba.l D0,A0 */
    c->pc = RC_ADDR(0x000228ccu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] -= t0;

L_228CE:
    /* 000228ce   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x000228ceu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_228D0:
    /* 000228d0   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x000228d0u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_228D2:
    /* 000228d2   2  rts */
    c->pc = RC_ADDR(0x000228d2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
