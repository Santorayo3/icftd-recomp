/* fn_00020874 - 18 byte(s), 6 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00020874(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00020874u): goto L_20874;
    case RC_ADDR(0x00020878u): goto L_20878;
    case RC_ADDR(0x0002087cu): goto L_2087C;
    case RC_ADDR(0x00020880u): goto L_20880;
    case RC_ADDR(0x00020882u): goto L_20882;
    case RC_ADDR(0x00020884u): goto L_20884;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20874:
    /* 00020874   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00020874u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_20878:
    /* 00020878   4  move.w #14,-(A7) */
    c->pc = RC_ADDR(0x00020878u);
    rc_step(c, m, 12);
    t0 = 0x00000014u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2087C:
    /* 0002087c   4  jsr (000207fc) */
    c->pc = RC_ADDR(0x0002087cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020880u));
    rc_depth++;
    c->pc = RC_ADDR(0x000207fcu);
    return;

L_20880:
    /* 00020880   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00020880u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_20882:
    /* 00020882   2  unlk A5 */
    c->pc = RC_ADDR(0x00020882u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_20884:
    /* 00020884   2  rts */
    c->pc = RC_ADDR(0x00020884u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
