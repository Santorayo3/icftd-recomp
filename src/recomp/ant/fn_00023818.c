/* fn_00023818 - 18 byte(s), 4 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023818(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00023818u): goto L_23818;
    case RC_ADDR(0x0002381cu): goto L_2381C;
    case RC_ADDR(0x00023822u): goto L_23822;
    case RC_ADDR(0x00023826u): goto L_23826;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23818:
    /* 00023818   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x00023818u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_2381C:
    /* 0002381c   6  movem.l (SP)+,{ D0 D1 } */
    c->pc = RC_ADDR(0x0002381cu);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;

L_23822:
    /* 00023822   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x00023822u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_23826:
    /* 00023826   4  jmp (fffffefe,A6) */
    c->pc = RC_ADDR(0x00023826u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -258);
    return;

}
