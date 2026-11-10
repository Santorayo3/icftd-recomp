/* fn_000218ea - 16 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000218ea(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000218eau): goto L_218EA;
    case RC_ADDR(0x000218eeu): goto L_218EE;
    case RC_ADDR(0x000218f2u): goto L_218F2;
    case RC_ADDR(0x000218f6u): goto L_218F6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_218EA:
    /* 000218ea   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x000218eau);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_218EE:
    /* 000218ee   4  move.l (8,A7),D0 */
    c->pc = RC_ADDR(0x000218eeu);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_218F2:
    /* 000218f2   4  movea.l (ffffcba0,A4),A6 */
    c->pc = RC_ADDR(0x000218f2u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_218F6:
    /* 000218f6   4  jmp (fffffeaa,A6) */
    c->pc = RC_ADDR(0x000218f6u);
    rc_os_call_a6(c, m, -342);
    return;

}
