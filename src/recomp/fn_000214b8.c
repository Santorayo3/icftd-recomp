/* fn_000214b8 - 14 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000214b8(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000214b8u): goto L_214B8;
    case RC_ADDR(0x000214beu): goto L_214BE;
    case RC_ADDR(0x000214c2u): goto L_214C2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_214B8:
    /* 000214b8   6  movem.l (SP)+,{ D0 A1 } */
    c->pc = RC_ADDR(0x000214b8u);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;

L_214BE:
    /* 000214be   4  movea.l (3af4,A4),A6 */
    c->pc = RC_ADDR(0x000214beu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_214C2:
    /* 000214c2   4  jmp (ffffff58,A6) */
    c->pc = RC_ADDR(0x000214c2u);
    rc_os_call_a6(c, m, -168);
    return;

}
