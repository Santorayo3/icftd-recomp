/* fn_0000eff6 - 24 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000eff6(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000eff6u): goto L_EFF6;
    case RC_ADDR(0x0000effau): goto L_EFFA;
    case RC_ADDR(0x0000effeu): goto L_EFFE;
    case RC_ADDR(0x0000f002u): goto L_F002;
    case RC_ADDR(0x0000f006u): goto L_F006;
    case RC_ADDR(0x0000f008u): goto L_F008;
    case RC_ADDR(0x0000f00cu): goto L_F00C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_EFF6:
    /* 0000eff6   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000eff6u);
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

L_EFFA:
    /* 0000effa   4  movea.l (2c,A7),A0 */
    c->pc = RC_ADDR(0x0000effau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x2cu));
    c->a[0] = t0;

L_EFFE:
    /* 0000effe   4  movea.l (ae0,A4),A3 */
    c->pc = RC_ADDR(0x0000effeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xae0u));
    c->a[3] = t0;

L_F002:
    /* 0000f002   4  movea.l (ffffa208,A4),A6 */
    c->pc = RC_ADDR(0x0000f002u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[6] = t0;

L_F006:
    /* 0000f006   2  bsr 0000f062 */
    c->pc = RC_ADDR(0x0000f006u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f008u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f062u);
    return;

L_F008:
    /* 0000f008   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0000f008u);
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

L_F00C:
    /* 0000f00c   2  rts */
    c->pc = RC_ADDR(0x0000f00cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
