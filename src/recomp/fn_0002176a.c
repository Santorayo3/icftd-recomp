/* fn_0002176a - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002176a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002176au): goto L_2176A;
    case RC_ADDR(0x0002176eu): goto L_2176E;
    case RC_ADDR(0x00021772u): goto L_21772;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2176A:
    /* 0002176a   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x0002176au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_2176E:
    /* 0002176e   4  movea.l (3af4,A4),A6 */
    c->pc = RC_ADDR(0x0002176eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_21772:
    /* 00021772   4  jmp (fffffe80,A6) */
    c->pc = RC_ADDR(0x00021772u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -384);
    return;

}
