/* fn_000218c4 - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000218c4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x000218c4u: goto L_218C4;
    case 0x000218c8u: goto L_218C8;
    case 0x000218ccu: goto L_218CC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_218C4:
    /* 000218c4   4  movea.l (4,A7),A1 */
    c->pc = 0x000218c4u;
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_218C8:
    /* 000218c8   4  movea.l (ffffcba0,A4),A6 */
    c->pc = 0x000218c8u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_218CC:
    /* 000218cc   4  jmp (ffffff2e,A6) */
    c->pc = 0x000218ccu;
    rc_os_call_a6(c, m, -210);
    return;

}
