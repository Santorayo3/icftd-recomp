/* fn_0000ef02 - 38 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000ef02(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ef02u): goto L_EF02;
    case RC_ADDR(0x0000ef06u): goto L_EF06;
    case RC_ADDR(0x0000ef0au): goto L_EF0A;
    case RC_ADDR(0x0000ef0eu): goto L_EF0E;
    case RC_ADDR(0x0000ef12u): goto L_EF12;
    case RC_ADDR(0x0000ef16u): goto L_EF16;
    case RC_ADDR(0x0000ef1au): goto L_EF1A;
    case RC_ADDR(0x0000ef1eu): goto L_EF1E;
    case RC_ADDR(0x0000ef22u): goto L_EF22;
    case RC_ADDR(0x0000ef26u): goto L_EF26;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_EF02:
    /* 0000ef02   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000ef02u);
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

L_EF06:
    /* 0000ef06   4  movea.l (2c,A7),A0 */
    c->pc = RC_ADDR(0x0000ef06u);
    t0 = rc_rd32(c, m, (c->a[7] + 0x2cu));
    c->a[0] = t0;

L_EF0A:
    /* 0000ef0a   4  move.l (30,A7),D0 */
    c->pc = RC_ADDR(0x0000ef0au);
    t0 = rc_rd32(c, m, (c->a[7] + 0x30u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EF0E:
    /* 0000ef0e   4  move.l (34,A7),D1 */
    c->pc = RC_ADDR(0x0000ef0eu);
    t0 = rc_rd32(c, m, (c->a[7] + 0x34u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EF12:
    /* 0000ef12   4  move.l (38,A7),D2 */
    c->pc = RC_ADDR(0x0000ef12u);
    t0 = rc_rd32(c, m, (c->a[7] + 0x38u));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EF16:
    /* 0000ef16   4  movea.l (ae0,A4),A3 */
    c->pc = RC_ADDR(0x0000ef16u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xae0u));
    c->a[3] = t0;

L_EF1A:
    /* 0000ef1a   4  movea.l (ffffa208,A4),A6 */
    c->pc = RC_ADDR(0x0000ef1au);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[6] = t0;

L_EF1E:
    /* 0000ef1e   4  jsr (0000f03e) */
    c->pc = RC_ADDR(0x0000ef1eu);
    rc_push32(c, m, RC_ADDR(0x0000ef22u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f03eu);
    return;

L_EF22:
    /* 0000ef22   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0000ef22u);
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

L_EF26:
    /* 0000ef26   2  rts */
    c->pc = RC_ADDR(0x0000ef26u);
    rc_ret(c, m);
    return;

}
