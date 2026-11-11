/* fn_000214c6 - 24 byte(s), 6 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000214c6(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000214c6u): goto L_214C6;
    case RC_ADDR(0x000214cau): goto L_214CA;
    case RC_ADDR(0x000214d0u): goto L_214D0;
    case RC_ADDR(0x000214d4u): goto L_214D4;
    case RC_ADDR(0x000214d8u): goto L_214D8;
    case RC_ADDR(0x000214dcu): goto L_214DC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_214C6:
    /* 000214c6   4  movem.l { D2 A0 },-(SP) */
    c->pc = RC_ADDR(0x000214c6u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    c->a[7] = t3;

L_214CA:
    /* 000214ca   6  movem.l (SP)+,{ D7 A5 } */
    c->pc = RC_ADDR(0x000214cau);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0xcu);
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;

L_214D0:
    /* 000214d0   4  movea.l (3af4,A4),A6 */
    c->pc = RC_ADDR(0x000214d0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_214D4:
    /* 000214d4   4  jsr (ffffff94,A6) */
    c->pc = RC_ADDR(0x000214d4u);
    rc_step(c, m, 18);
    c->pc = RC_ADDR(0x000214d8u);
    rc_push32(c, m, RC_ADDR(0x000214d8u));
    rc_depth++;
    rc_os_call_a6(c, m, -108);

L_214D8:
    /* 000214d8   4  movem.l (SP)+,{ D7 A5 } */
    c->pc = RC_ADDR(0x000214d8u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_214DC:
    /* 000214dc   2  rts */
    c->pc = RC_ADDR(0x000214dcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
