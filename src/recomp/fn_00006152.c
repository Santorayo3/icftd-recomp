/* fn_00006152 - 48 byte(s), 14 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00006152(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x00006152u: goto L_6152;
    case 0x00006156u: goto L_6156;
    case 0x0000615au: goto L_615A;
    case 0x0000615eu: goto L_615E;
    case 0x00006162u: goto L_6162;
    case 0x00006164u: goto L_6164;
    case 0x00006166u: goto L_6166;
    case 0x0000616au: goto L_616A;
    case 0x0000616eu: goto L_616E;
    case 0x00006172u: goto L_6172;
    case 0x00006178u: goto L_6178;
    case 0x0000617au: goto L_617A;
    case 0x0000617eu: goto L_617E;
    case 0x00006180u: goto L_6180;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6152:
    /* 00006152   4  link.w A5,#0 */
    c->pc = 0x00006152u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_6156:
    /* 00006156   4  movea.l (8,A5),A0 */
    c->pc = 0x00006156u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_615A:
    /* 0000615a   4  suba.l (fffff06a,A4),A0 */
    c->pc = 0x0000615au;
    t0 = rc_rd32(c, m, (c->a[4] - 0xf96u));
    c->a[0] -= t0;

L_615E:
    /* 0000615e   4  move.w (fffff072,A4),D0 */
    c->pc = 0x0000615eu;
    t0 = rc_rd16(c, m, (c->a[4] - 0xf8eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6162:
    /* 00006162   2  ext.l D0 */
    c->pc = 0x00006162u;
    rc_ext_l(c, 0);

L_6164:
    /* 00006164   2  asl.l #1,D0 */
    c->pc = 0x00006164u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_6166:
    /* 00006166   4  lea (fffff074,A4),A1 */
    c->pc = 0x00006166u;
    c->a[1] = (c->a[4] - 0xf8cu);

L_616A:
    /* 0000616a   4  move.w A0,(0,A1,D0.w) */
    c->pc = 0x0000616au;
    t0 = rc_a_get(c, 0, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_616E:
    /* 0000616e   4  addq.w #1,(fffff072,A4) */
    c->pc = 0x0000616eu;
    t3 = (c->a[4] - 0xf8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6172:
    /* 00006172   6  cmpi.w #13,(fffff072,A4) */
    c->pc = 0x00006172u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xf8eu));
    rc_cmp(c, RC_W, t0, 0x00000013u);

L_6178:
    /* 00006178   2  ble 0000617e */
    c->pc = 0x00006178u;
    if (rc_cond(c, 15)) goto L_617E;

L_617A:
    /* 0000617a   4  clr.w (fffff072,A4) */
    c->pc = 0x0000617au;
    rc_wr16(c, m, (c->a[4] - 0xf8eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_617E:
    /* 0000617e   2  unlk A5 */
    c->pc = 0x0000617eu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6180:
    /* 00006180   2  rts */
    c->pc = 0x00006180u;
    rc_ret(c, m);
    return;

}
