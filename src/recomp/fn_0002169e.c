/* fn_0002169e - 22 byte(s), 6 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002169e(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002169eu): goto L_2169E;
    case RC_ADDR(0x000216a2u): goto L_216A2;
    case RC_ADDR(0x000216a6u): goto L_216A6;
    case RC_ADDR(0x000216aau): goto L_216AA;
    case RC_ADDR(0x000216aeu): goto L_216AE;
    case RC_ADDR(0x000216b2u): goto L_216B2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2169E:
    /* 0002169e   4  movem.l { A0 A1 },-(SP) */
    c->pc = RC_ADDR(0x0002169eu);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    c->a[7] = t3;

L_216A2:
    /* 000216a2   4  movea.l (c,A7),A1 */
    c->pc = RC_ADDR(0x000216a2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0xcu));
    c->a[1] = t0;

L_216A6:
    /* 000216a6   4  movea.l (3af4,A4),A6 */
    c->pc = RC_ADDR(0x000216a6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_216AA:
    /* 000216aa   4  jsr (fffffe38,A6) */
    c->pc = RC_ADDR(0x000216aau);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000216aeu);
    rc_push32(c, m, RC_ADDR(0x000216aeu));
    rc_depth++;
    rc_os_call_a6(c, m, -456);

L_216AE:
    /* 000216ae   4  movem.l (SP)+,{ D6 D7 } */
    c->pc = RC_ADDR(0x000216aeu);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_216B2:
    /* 000216b2   2  rts */
    c->pc = RC_ADDR(0x000216b2u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
