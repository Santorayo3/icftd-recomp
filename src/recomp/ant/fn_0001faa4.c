/* fn_0001faa4 - 24 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001faa4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001faa4u): goto L_1FAA4;
    case RC_ADDR(0x0001faa8u): goto L_1FAA8;
    case RC_ADDR(0x0001faacu): goto L_1FAAC;
    case RC_ADDR(0x0001fab0u): goto L_1FAB0;
    case RC_ADDR(0x0001fab2u): goto L_1FAB2;
    case RC_ADDR(0x0001fab4u): goto L_1FAB4;
    case RC_ADDR(0x0001fab6u): goto L_1FAB6;
    case RC_ADDR(0x0001fabau): goto L_1FABA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FAA4:
    /* 0001faa4   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x0001faa4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_1FAA8:
    /* 0001faa8   4  movea.l (8,A7),A1 */
    c->pc = RC_ADDR(0x0001faa8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    c->a[1] = t0;

L_1FAAC:
    /* 0001faac   4  move.w (c,A7),D0 */
    c->pc = RC_ADDR(0x0001faacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[7] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FAB0:
    /* 0001fab0   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0001fab0u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1FAB2:
    /* 0001fab2   2  movea.l (A0)+,A6 */
    c->pc = RC_ADDR(0x0001fab2u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;

L_1FAB4:
    /* 0001fab4   2  move.w (A1)+,(A6) */
    c->pc = RC_ADDR(0x0001fab4u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, c->a[6], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FAB6:
    /* 0001fab6   4  dbf D0,0001fab2 */
    c->pc = RC_ADDR(0x0001fab6u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1FAB2; }
    }

L_1FABA:
    /* 0001faba   2  rts */
    c->pc = RC_ADDR(0x0001fabau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
