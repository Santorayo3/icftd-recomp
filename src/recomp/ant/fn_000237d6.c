/* fn_000237d6 - 16 byte(s), 4 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000237d6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000237d6u): goto L_237D6;
    case RC_ADDR(0x000237dau): goto L_237DA;
    case RC_ADDR(0x000237deu): goto L_237DE;
    case RC_ADDR(0x000237e2u): goto L_237E2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_237D6:
    /* 000237d6   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x000237d6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_237DA:
    /* 000237da   4  move.l (8,A7),D0 */
    c->pc = RC_ADDR(0x000237dau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_237DE:
    /* 000237de   4  movea.l (4524,A4),A6 */
    c->pc = RC_ADDR(0x000237deu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4524u));
    c->a[6] = t0;

L_237E2:
    /* 000237e2   4  jmp (fffffe0e,A6) */
    c->pc = RC_ADDR(0x000237e2u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -498);
    return;

}
