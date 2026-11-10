/* fn_0002190a - 16 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002190a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002190au): goto L_2190A;
    case RC_ADDR(0x0002190eu): goto L_2190E;
    case RC_ADDR(0x00021912u): goto L_21912;
    case RC_ADDR(0x00021916u): goto L_21916;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2190A:
    /* 0002190a   4  movea.l (4,A7),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002190au);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_2190E:
    /* 0002190e   4  movea.l (8,A7),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002190eu);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    c->a[0] = t0;

L_21912:
    /* 00021912   4  movea.l (ffffcba0,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021912u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_21916:
    /* 00021916   4  jmp (ffffffbe,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021916u);
    rc_os_call_a6(c, m, -66);
    return;

}
