/* fn_00011e92 - 24 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011e92(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00011e92u): goto L_11E92;
    case RC_ADDR(0x00011e96u): goto L_11E96;
    case RC_ADDR(0x00011e9au): goto L_11E9A;
    case RC_ADDR(0x00011e9cu): goto L_11E9C;
    case RC_ADDR(0x00011ea0u): goto L_11EA0;
    case RC_ADDR(0x00011ea4u): goto L_11EA4;
    case RC_ADDR(0x00011ea6u): goto L_11EA6;
    case RC_ADDR(0x00011ea8u): goto L_11EA8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11E92:
    /* 00011e92   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00011e92u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_11E96:
    /* 00011e96   4  movem.l { D3 D4 D5 D6 D7 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x00011e96u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_11E9A:
    /* 00011e9a   2  movea.l (A1),A4 */
    c->pc = RC_ADDR(0x00011e9au);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[4] = t0;

L_11E9C:
    /* 00011e9c   4  bsr 00011cdc */
    c->pc = RC_ADDR(0x00011e9cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00011ea0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011cdcu);
    return;

L_11EA0:
    /* 00011ea0   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 A0 A1 A2 A3 A4 } */
    c->pc = RC_ADDR(0x00011ea0u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
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
    c->a[7] = t3;

L_11EA4:
    /* 00011ea4   2  clr.l D0 */
    c->pc = RC_ADDR(0x00011ea4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11EA6:
    /* 00011ea6   2  unlk A5 */
    c->pc = RC_ADDR(0x00011ea6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11EA8:
    /* 00011ea8   2  rts */
    c->pc = RC_ADDR(0x00011ea8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
