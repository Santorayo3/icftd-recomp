/* fn_0000f00e - 24 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f00e(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f00eu): goto L_F00E;
    case RC_ADDR(0x0000f012u): goto L_F012;
    case RC_ADDR(0x0000f016u): goto L_F016;
    case RC_ADDR(0x0000f01au): goto L_F01A;
    case RC_ADDR(0x0000f01eu): goto L_F01E;
    case RC_ADDR(0x0000f020u): goto L_F020;
    case RC_ADDR(0x0000f024u): goto L_F024;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F00E:
    /* 0000f00e   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000f00eu);
    rc_step(c, m);
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

L_F012:
    /* 0000f012   4  movea.l (2c,A7),A0 */
    c->pc = RC_ADDR(0x0000f012u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x2cu));
    c->a[0] = t0;

L_F016:
    /* 0000f016   4  movea.l (ae0,A4),A3 */
    c->pc = RC_ADDR(0x0000f016u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xae0u));
    c->a[3] = t0;

L_F01A:
    /* 0000f01a   4  movea.l (ffffa208,A4),A6 */
    c->pc = RC_ADDR(0x0000f01au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[6] = t0;

L_F01E:
    /* 0000f01e   2  bsr 0000f066 */
    c->pc = RC_ADDR(0x0000f01eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000f020u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f066u);
    return;

L_F020:
    /* 0000f020   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0000f020u);
    rc_step(c, m);
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

L_F024:
    /* 0000f024   2  rts */
    c->pc = RC_ADDR(0x0000f024u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
