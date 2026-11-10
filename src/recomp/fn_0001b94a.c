/* fn_0001b94a - 90 byte(s), 22 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001b94a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case 0x0001b94au: goto L_1B94A;
    case 0x0001b94eu: goto L_1B94E;
    case 0x0001b952u: goto L_1B952;
    case 0x0001b958u: goto L_1B958;
    case 0x0001b95cu: goto L_1B95C;
    case 0x0001b960u: goto L_1B960;
    case 0x0001b964u: goto L_1B964;
    case 0x0001b96au: goto L_1B96A;
    case 0x0001b96eu: goto L_1B96E;
    case 0x0001b972u: goto L_1B972;
    case 0x0001b974u: goto L_1B974;
    case 0x0001b978u: goto L_1B978;
    case 0x0001b97cu: goto L_1B97C;
    case 0x0001b982u: goto L_1B982;
    case 0x0001b986u: goto L_1B986;
    case 0x0001b98au: goto L_1B98A;
    case 0x0001b98cu: goto L_1B98C;
    case 0x0001b990u: goto L_1B990;
    case 0x0001b994u: goto L_1B994;
    case 0x0001b99au: goto L_1B99A;
    case 0x0001b9a0u: goto L_1B9A0;
    case 0x0001b9a2u: goto L_1B9A2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B94A:
    /* 0001b94a   4  link.w A5,#fffffffe */
    c->pc = 0x0001b94au;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1B94E:
    /* 0001b94e   4  clr.w (fffff324,A4) */
    c->pc = 0x0001b94eu;
    rc_wr16(c, m, (c->a[4] - 0xcdcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B952:
    /* 0001b952   6  move.w #f,(fffff27e,A4) */
    c->pc = 0x0001b952u;
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] - 0xd82u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B958:
    /* 0001b958   4  clr.w (fffff280,A4) */
    c->pc = 0x0001b958u;
    rc_wr16(c, m, (c->a[4] - 0xd80u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B95C:
    /* 0001b95c   4  clr.l (fffff282,A4) */
    c->pc = 0x0001b95cu;
    rc_wr32(c, m, (c->a[4] - 0xd7eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1B960:
    /* 0001b960   4  clr.w (fffff28a,A4) */
    c->pc = 0x0001b960u;
    rc_wr16(c, m, (c->a[4] - 0xd76u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B964:
    /* 0001b964   6  move.w #1,(fffff28c,A4) */
    c->pc = 0x0001b964u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B96A:
    /* 0001b96a   4  clr.l (ffff84f4,A4) */
    c->pc = 0x0001b96au;
    rc_wr32(c, m, (c->a[4] - 0x7b0cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1B96E:
    /* 0001b96e   4  move.w (740,A4),D0 */
    c->pc = 0x0001b96eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x740u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B972:
    /* 0001b972   2  ext.l D0 */
    c->pc = 0x0001b972u;
    rc_ext_l(c, 0);

L_1B974:
    /* 0001b974   4  divs.w #8,D0 */
    c->pc = 0x0001b974u;
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_1B978:
    /* 0001b978   4  move.w D0,(fffff2ce,A4) */
    c->pc = 0x0001b978u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd32u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B97C:
    /* 0001b97c   6  move.w (742,A4),(fffff2d0,A4) */
    c->pc = 0x0001b97cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x742u));
    rc_wr16(c, m, (c->a[4] - 0xd30u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B982:
    /* 0001b982   4  move.w (740,A4),D0 */
    c->pc = 0x0001b982u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x740u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B986:
    /* 0001b986   4  sub.w #130,D0 */
    c->pc = 0x0001b986u;
    t0 = 0x00000130u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B98A:
    /* 0001b98a   2  ext.l D0 */
    c->pc = 0x0001b98au;
    rc_ext_l(c, 0);

L_1B98C:
    /* 0001b98c   4  divs.w #8,D0 */
    c->pc = 0x0001b98cu;
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_1B990:
    /* 0001b990   4  move.w D0,(fffffffe,A5) */
    c->pc = 0x0001b990u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B994:
    /* 0001b994   6  move.w (fffffffe,A5),(ffffb47e,A4) */
    c->pc = 0x0001b994u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[4] - 0x4b82u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B99A:
    /* 0001b99a   6  move.w (fffffffe,A5),(ffffb482,A4) */
    c->pc = 0x0001b99au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[4] - 0x4b7eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B9A0:
    /* 0001b9a0   2  unlk A5 */
    c->pc = 0x0001b9a0u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B9A2:
    /* 0001b9a2   2  rts */
    c->pc = 0x0001b9a2u;
    rc_ret(c, m);
    return;

}
