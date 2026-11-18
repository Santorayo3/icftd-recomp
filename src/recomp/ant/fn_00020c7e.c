/* fn_00020c7e - 16 byte(s), 5 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00020c7e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00020c7eu): goto L_20C7E;
    case RC_ADDR(0x00020c80u): goto L_20C80;
    case RC_ADDR(0x00020c86u): goto L_20C86;
    case RC_ADDR(0x00020c8au): goto L_20C8A;
    case RC_ADDR(0x00020c8cu): goto L_20C8C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20C7E:
    /* 00020c7e   2  bsr 00020c8e */
    c->pc = RC_ADDR(0x00020c7eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020c80u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020c8eu);
    return;

L_20C80:
    /* 00020c80   6  andi.l #ffff,D0 */
    c->pc = RC_ADDR(0x00020c80u);
    rc_step(c, m, 14);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 0, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_20C86:
    /* 00020c86   4  divu.w (4,A7),D0 */
    c->pc = RC_ADDR(0x00020c86u);
    rc_step(c, m, 148);
    t0 = rc_rd16(c, m, (c->a[7] + 0x4u));
    rc_divu(c, m, 0, t0);

L_20C8A:
    /* 00020c8a   2  swap D0 */
    c->pc = RC_ADDR(0x00020c8au);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_20C8C:
    /* 00020c8c   2  rts */
    c->pc = RC_ADDR(0x00020c8cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
