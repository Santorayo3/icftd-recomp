/* fn_0000ef88 - 30 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000ef88(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case 0x0000ef88u: goto L_EF88;
    case 0x0000ef8cu: goto L_EF8C;
    case 0x0000ef90u: goto L_EF90;
    case 0x0000ef94u: goto L_EF94;
    case 0x0000ef98u: goto L_EF98;
    case 0x0000ef9cu: goto L_EF9C;
    case 0x0000efa0u: goto L_EFA0;
    case 0x0000efa4u: goto L_EFA4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_EF88:
    /* 0000ef88   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    c->pc = 0x0000ef88u;
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

L_EF8C:
    /* 0000ef8c   4  move.l (2c,A7),D0 */
    c->pc = 0x0000ef8cu;
    t0 = rc_rd32(c, m, (c->a[7] + 0x2cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EF90:
    /* 0000ef90   4  move.l (30,A7),D1 */
    c->pc = 0x0000ef90u;
    t0 = rc_rd32(c, m, (c->a[7] + 0x30u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EF94:
    /* 0000ef94   4  movea.l (ae0,A4),A3 */
    c->pc = 0x0000ef94u;
    t0 = rc_rd32(c, m, (c->a[4] + 0xae0u));
    c->a[3] = t0;

L_EF98:
    /* 0000ef98   4  movea.l (ffffa208,A4),A6 */
    c->pc = 0x0000ef98u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[6] = t0;

L_EF9C:
    /* 0000ef9c   4  jsr (0000f052) */
    c->pc = 0x0000ef9cu;
    rc_push32(c, m, 0x0000efa0u);
    rc_depth++;
    c->pc = 0x0000f052u;
    return;

L_EFA0:
    /* 0000efa0   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    c->pc = 0x0000efa0u;
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

L_EFA4:
    /* 0000efa4   2  rts */
    c->pc = 0x0000efa4u;
    rc_ret(c, m);
    return;

}
