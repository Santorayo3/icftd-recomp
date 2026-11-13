/* fn_0001f5be - 14 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f5be(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f5beu): goto L_1F5BE;
    case RC_ADDR(0x0001f5c2u): goto L_1F5C2;
    case RC_ADDR(0x0001f5c8u): goto L_1F5C8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F5BE:
    /* 0001f5be   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0001f5beu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_1F5C2:
    /* 0001f5c2   6  move.w #ffff,(2a,A0) */
    c->pc = RC_ADDR(0x0001f5c2u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[0] + 0x2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F5C8:
    /* 0001f5c8   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f5c8u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
