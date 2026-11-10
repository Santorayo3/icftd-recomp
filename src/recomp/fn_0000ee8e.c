/* fn_0000ee8e - 26 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000ee8e(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ee8eu): goto L_EE8E;
    case RC_ADDR(0x0000ee92u): goto L_EE92;
    case RC_ADDR(0x0000ee96u): goto L_EE96;
    case RC_ADDR(0x0000ee9au): goto L_EE9A;
    case RC_ADDR(0x0000ee9eu): goto L_EE9E;
    case RC_ADDR(0x0000eea2u): goto L_EEA2;
    case RC_ADDR(0x0000eea6u): goto L_EEA6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_EE8E:
    /* 0000ee8e   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ee8eu);
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

L_EE92:
    /* 0000ee92   4  movea.l (ae0,A4),A3 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ee92u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xae0u));
    c->a[3] = t0;

L_EE96:
    /* 0000ee96   4  movea.l (ffffa208,A4),A6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ee96u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[6] = t0;

L_EE9A:
    /* 0000ee9a   4  movea.l (adc,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ee9au);
    t0 = rc_rd32(c, m, (c->a[4] + 0xadcu));
    c->a[0] = t0;

L_EE9E:
    /* 0000ee9e   4  jsr (0000f02a) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ee9eu);
    rc_push32(c, m, RC_ADDR(0x0000eea2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f02au);
    return;

L_EEA2:
    /* 0000eea2   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eea2u);
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

L_EEA6:
    /* 0000eea6   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000eea6u);
    rc_ret(c, m);
    return;

}
