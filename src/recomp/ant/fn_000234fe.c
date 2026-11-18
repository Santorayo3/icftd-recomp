/* fn_000234fe - 14 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000234fe(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000234feu): goto L_234FE;
    case RC_ADDR(0x00023504u): goto L_23504;
    case RC_ADDR(0x00023508u): goto L_23508;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_234FE:
    /* 000234fe   6  movem.l (SP)+,{ D1 D2 } */
    c->pc = RC_ADDR(0x000234feu);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;

L_23504:
    /* 00023504   4  movea.l (4528,A4),A6 */
    c->pc = RC_ADDR(0x00023504u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4528u));
    c->a[6] = t0;

L_23508:
    /* 00023508   4  jmp (ffffffe2,A6) */
    c->pc = RC_ADDR(0x00023508u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -30);
    return;

}
