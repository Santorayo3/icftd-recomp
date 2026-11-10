/* fn_0000f6b0 - 24 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f6b0(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case 0x0000f6b0u: goto L_F6B0;
    case 0x0000f6b4u: goto L_F6B4;
    case 0x0000f6b6u: goto L_F6B6;
    case 0x0000f6b8u: goto L_F6B8;
    case 0x0000f6bcu: goto L_F6BC;
    case 0x0000f6c2u: goto L_F6C2;
    case 0x0000f6c6u: goto L_F6C6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F6B0:
    /* 0000f6b0   4  movem.l { D7 A7 },-(SP) */
    c->pc = 0x0000f6b0u;
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_F6B4:
    /* 0000f6b4   2  ext.w D0 */
    c->pc = 0x0000f6b4u;
    rc_ext_w(c, 0);

L_F6B6:
    /* 0000f6b6   2  asl.w #2,D0 */
    c->pc = 0x0000f6b6u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W);

L_F6B8:
    /* 0000f6b8   4  movea.l (6,A6),A0 */
    c->pc = 0x0000f6b8u;
    t0 = rc_rd32(c, m, (c->a[6] + 0x6u));
    c->a[0] = t0;

L_F6BC:
    /* 0000f6bc   6  move.w (22,A0,D0.w),(28,A6,D0.w) */
    c->pc = 0x0000f6bcu;
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x22u + t4));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[6] + 0x28u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F6C2:
    /* 0000f6c2   4  movem.l (SP)+,{ D0 A0 } */
    c->pc = 0x0000f6c2u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_F6C6:
    /* 0000f6c6   2  rts */
    c->pc = 0x0000f6c6u;
    rc_ret(c, m);
    return;

}
