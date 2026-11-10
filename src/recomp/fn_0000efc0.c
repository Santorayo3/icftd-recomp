/* fn_0000efc0 - 26 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000efc0(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000efc0u): goto L_EFC0;
    case RC_ADDR(0x0000efc4u): goto L_EFC4;
    case RC_ADDR(0x0000efc8u): goto L_EFC8;
    case RC_ADDR(0x0000efccu): goto L_EFCC;
    case RC_ADDR(0x0000efd0u): goto L_EFD0;
    case RC_ADDR(0x0000efd4u): goto L_EFD4;
    case RC_ADDR(0x0000efd8u): goto L_EFD8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_EFC0:
    /* 0000efc0   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000efc0u);
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

L_EFC4:
    /* 0000efc4   4  move.l (2c,A7),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000efc4u);
    t0 = rc_rd32(c, m, (c->a[7] + 0x2cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EFC8:
    /* 0000efc8   4  movea.l (ae0,A4),A3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000efc8u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xae0u));
    c->a[3] = t0;

L_EFCC:
    /* 0000efcc   4  movea.l (ffffa208,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000efccu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[6] = t0;

L_EFD0:
    /* 0000efd0   4  jsr (0000f05a) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000efd0u);
    rc_push32(c, m, RC_ADDR(0x0000efd4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f05au);
    return;

L_EFD4:
    /* 0000efd4   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000efd4u);
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

L_EFD8:
    /* 0000efd8   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000efd8u);
    rc_ret(c, m);
    return;

}
