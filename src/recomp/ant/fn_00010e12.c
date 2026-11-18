/* fn_00010e12 - 18 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010e12(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00010e12u): goto L_10E12;
    case RC_ADDR(0x00010e14u): goto L_10E14;
    case RC_ADDR(0x00010e18u): goto L_10E18;
    case RC_ADDR(0x00010e1au): goto L_10E1A;
    case RC_ADDR(0x00010e1cu): goto L_10E1C;
    case RC_ADDR(0x00010e20u): goto L_10E20;
    case RC_ADDR(0x00010e22u): goto L_10E22;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10E12:
    /* 00010e12   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00010e12u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10E14:
    /* 00010e14   4  clr.w (a,A6) */
    c->pc = RC_ADDR(0x00010e14u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[6] + 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10E18:
    /* 00010e18   2  moveq #3,D0 */
    c->pc = RC_ADDR(0x00010e18u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000003u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10E1A:
    /* 00010e1a   2  bsr 00010e24 */
    c->pc = RC_ADDR(0x00010e1au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010e1cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00010e24u);
    return;

L_10E1C:
    /* 00010e1c   4  dbf D0,00010e1a */
    c->pc = RC_ADDR(0x00010e1cu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_10E1A; }
    }

L_10E20:
    /* 00010e20   2  move.l (A7)+,D0 */
    c->pc = RC_ADDR(0x00010e20u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10E22:
    /* 00010e22   2  rts */
    c->pc = RC_ADDR(0x00010e22u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
