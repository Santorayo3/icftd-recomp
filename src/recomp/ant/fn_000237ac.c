/* fn_000237ac - 22 byte(s), 5 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000237ac(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000237acu): goto L_237AC;
    case RC_ADDR(0x000237b0u): goto L_237B0;
    case RC_ADDR(0x000237b6u): goto L_237B6;
    case RC_ADDR(0x000237bau): goto L_237BA;
    case RC_ADDR(0x000237beu): goto L_237BE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_237AC:
    /* 000237ac   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x000237acu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_237B0:
    /* 000237b0   6  movem.l (SP)+,{ D0 A1 } */
    c->pc = RC_ADDR(0x000237b0u);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;

L_237B6:
    /* 000237b6   4  move.l (10,A7),D1 */
    c->pc = RC_ADDR(0x000237b6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x10u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_237BA:
    /* 000237ba   4  movea.l (4524,A4),A6 */
    c->pc = RC_ADDR(0x000237bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4524u));
    c->a[6] = t0;

L_237BE:
    /* 000237be   4  jmp (fffffe44,A6) */
    c->pc = RC_ADDR(0x000237beu);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -444);
    return;

}
