/* fn_00001742 - 42 byte(s), 12 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001742(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x00001742u: goto L_1742;
    case 0x00001746u: goto L_1746;
    case 0x0000174au: goto L_174A;
    case 0x0000174eu: goto L_174E;
    case 0x00001750u: goto L_1750;
    case 0x00001752u: goto L_1752;
    case 0x00001756u: goto L_1756;
    case 0x0000175cu: goto L_175C;
    case 0x00001760u: goto L_1760;
    case 0x00001766u: goto L_1766;
    case 0x00001768u: goto L_1768;
    case 0x0000176au: goto L_176A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1742:
    /* 00001742   4  link.w A5,#fffffffe */
    c->pc = 0x00001742u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1746:
    /* 00001746   4  clr.w (fffffffe,A5) */
    c->pc = 0x00001746u;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_174A:
    /* 0000174a   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x0000174au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_174E:
    /* 0000174e   2  ext.l D0 */
    c->pc = 0x0000174eu;
    rc_ext_l(c, 0);

L_1750:
    /* 00001750   2  asl.l #1,D0 */
    c->pc = 0x00001750u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1752:
    /* 00001752   4  lea (ffffcf54,A4),A0 */
    c->pc = 0x00001752u;
    c->a[0] = (c->a[4] - 0x30acu);

L_1756:
    /* 00001756   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = 0x00001756u;
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_175C:
    /* 0000175c   4  addq.w #1,(fffffffe,A5) */
    c->pc = 0x0000175cu;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1760:
    /* 00001760   6  cmpi.w #14,(fffffffe,A5) */
    c->pc = 0x00001760u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_1766:
    /* 00001766   2  blt 0000174a */
    c->pc = 0x00001766u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_174A; }

L_1768:
    /* 00001768   2  unlk A5 */
    c->pc = 0x00001768u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_176A:
    /* 0000176a   2  rts */
    c->pc = 0x0000176au;
    rc_ret(c, m);
    return;

}
