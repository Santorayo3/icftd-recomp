/* fn_0002380c - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002380c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002380cu): goto L_2380C;
    case RC_ADDR(0x00023810u): goto L_23810;
    case RC_ADDR(0x00023814u): goto L_23814;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2380C:
    /* 0002380c   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x0002380cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_23810:
    /* 00023810   4  movea.l (4524,A4),A6 */
    c->pc = RC_ADDR(0x00023810u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4524u));
    c->a[6] = t0;

L_23814:
    /* 00023814   4  jmp (fffffe80,A6) */
    c->pc = RC_ADDR(0x00023814u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -384);
    return;

}
