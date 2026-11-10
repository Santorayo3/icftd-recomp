/* fn_00015008 - 44 byte(s), 14 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00015008(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x00015008u: goto L_15008;
    case 0x0001500cu: goto L_1500C;
    case 0x00015010u: goto L_15010;
    case 0x00015012u: goto L_15012;
    case 0x00015016u: goto L_15016;
    case 0x00015018u: goto L_15018;
    case 0x0001501au: goto L_1501A;
    case 0x0001501eu: goto L_1501E;
    case 0x00015022u: goto L_15022;
    case 0x00015026u: goto L_15026;
    case 0x0001502au: goto L_1502A;
    case 0x0001502eu: goto L_1502E;
    case 0x00015030u: goto L_15030;
    case 0x00015032u: goto L_15032;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15008:
    /* 00015008   4  link.w A5,#fffffffe */
    c->pc = 0x00015008u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1500C:
    /* 0001500c   4  clr.w (fffffffe,A5) */
    c->pc = 0x0001500cu;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15010:
    /* 00015010   2  bra 00015026 */
    c->pc = 0x00015010u;
    goto L_15026;

L_15012:
    /* 00015012   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00015012u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15016:
    /* 00015016   2  ext.l D0 */
    c->pc = 0x00015016u;
    rc_ext_l(c, 0);

L_15018:
    /* 00015018   2  asl.l #1,D0 */
    c->pc = 0x00015018u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1501A:
    /* 0001501a   4  lea (128a,A4),A0 */
    c->pc = 0x0001501au;
    c->a[0] = (c->a[4] + 0x128au);

L_1501E:
    /* 0001501e   4  clr.w (0,A0,D0.w) */
    c->pc = 0x0001501eu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15022:
    /* 00015022   4  addq.w #1,(fffffffe,A5) */
    c->pc = 0x00015022u;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15026:
    /* 00015026   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00015026u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1502A:
    /* 0001502a   4  cmp.w (12a6,A4),D0 */
    c->pc = 0x0001502au;
    t0 = rc_rd16(c, m, (c->a[4] + 0x12a6u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1502E:
    /* 0001502e   2  blt 00015012 */
    c->pc = 0x0001502eu;
    if (rc_cond(c, 13)) { rc_tick(); goto L_15012; }

L_15030:
    /* 00015030   2  unlk A5 */
    c->pc = 0x00015030u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_15032:
    /* 00015032   2  rts */
    c->pc = 0x00015032u;
    rc_ret(c, m);
    return;

}
