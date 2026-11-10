/* fn_000217fc - 18 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000217fc(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000217fcu): goto L_217FC;
    case RC_ADDR(0x00021800u): goto L_21800;
    case RC_ADDR(0x00021806u): goto L_21806;
    case RC_ADDR(0x0002180au): goto L_2180A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_217FC:
    /* 000217fc   4  movea.l (4,A7),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000217fcu);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_21800:
    /* 00021800   6  movem.l (SP)+,{ D0 D1 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021800u);
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;

L_21806:
    /* 00021806   4  movea.l (ffffcba0,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021806u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_2180A:
    /* 0002180a   4  jmp (ffffff0a,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002180au);
    rc_os_call_a6(c, m, -246);
    return;

}
