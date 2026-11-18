/* fn_0002398c - 16 byte(s), 4 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002398c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002398cu): goto L_2398C;
    case RC_ADDR(0x00023990u): goto L_23990;
    case RC_ADDR(0x00023994u): goto L_23994;
    case RC_ADDR(0x00023998u): goto L_23998;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2398C:
    /* 0002398c   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x0002398cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_23990:
    /* 00023990   4  move.l (8,A7),D0 */
    c->pc = RC_ADDR(0x00023990u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_23994:
    /* 00023994   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x00023994u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_23998:
    /* 00023998   4  jmp (fffffeaa,A6) */
    c->pc = RC_ADDR(0x00023998u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -342);
    return;

}
