/* fn_00021744 - 14 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021744(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00021744u): goto L_21744;
    case RC_ADDR(0x0002174au): goto L_2174A;
    case RC_ADDR(0x0002174eu): goto L_2174E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21744:
    /* 00021744   6  movem.l (SP)+,{ D0 A1 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021744u);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;

L_2174A:
    /* 0002174a   4  movea.l (3af4,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002174au);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_2174E:
    /* 0002174e   4  jmp (ffffff52,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002174eu);
    rc_os_call_a6(c, m, -174);
    return;

}
