/* fn_00001c1e - 6 byte(s), 1 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001c1e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00001c1eu): goto L_1C1E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C1E:
    /* 00001c1e   6  cmpi.w #15,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00001c1eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000015u);

    /* falls through into 00001c24 */
    c->pc = RC_ADDR(0x00001c24u);
    return;
}
