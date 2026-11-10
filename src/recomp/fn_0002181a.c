/* fn_0002181a - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002181a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002181au): goto L_2181A;
    case RC_ADDR(0x0002181eu): goto L_2181E;
    case RC_ADDR(0x00021822u): goto L_21822;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2181A:
    /* 0002181a   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x0002181au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_2181E:
    /* 0002181e   4  movea.l (ffffcba0,A4),A6 */
    c->pc = RC_ADDR(0x0002181eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_21822:
    /* 00021822   4  jmp (fffffdcc,A6) */
    c->pc = RC_ADDR(0x00021822u);
    rc_step(c, m);
    rc_os_call_a6(c, m, -564);
    return;

}
