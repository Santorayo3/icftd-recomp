/* fn_0000eeec - 22 byte(s), 6 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000eeec(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000eeecu): goto L_EEEC;
    case RC_ADDR(0x0000eef0u): goto L_EEF0;
    case RC_ADDR(0x0000eef4u): goto L_EEF4;
    case RC_ADDR(0x0000eef8u): goto L_EEF8;
    case RC_ADDR(0x0000eefcu): goto L_EEFC;
    case RC_ADDR(0x0000ef00u): goto L_EF00;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_EEEC:
    /* 0000eeec   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000eeecu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_EEF0:
    /* 0000eef0   4  movea.l (ae0,A4),A3 */
    c->pc = RC_ADDR(0x0000eef0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xae0u));
    c->a[3] = t0;

L_EEF4:
    /* 0000eef4   4  movea.l (ffffa208,A4),A6 */
    c->pc = RC_ADDR(0x0000eef4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[6] = t0;

L_EEF8:
    /* 0000eef8   4  jsr (0000f03a) */
    c->pc = RC_ADDR(0x0000eef8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000eefcu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f03au);
    return;

L_EEFC:
    /* 0000eefc   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0000eefcu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_EF00:
    /* 0000ef00   2  rts */
    c->pc = RC_ADDR(0x0000ef00u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
