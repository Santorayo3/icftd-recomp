/* fn_00018832 - 74 byte(s), 20 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00018832(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x00018832u: goto L_18832;
    case 0x00018836u: goto L_18836;
    case 0x0001883au: goto L_1883A;
    case 0x0001883cu: goto L_1883C;
    case 0x00018842u: goto L_18842;
    case 0x00018844u: goto L_18844;
    case 0x00018848u: goto L_18848;
    case 0x0001884au: goto L_1884A;
    case 0x0001884eu: goto L_1884E;
    case 0x00018854u: goto L_18854;
    case 0x00018856u: goto L_18856;
    case 0x0001885au: goto L_1885A;
    case 0x00018860u: goto L_18860;
    case 0x00018862u: goto L_18862;
    case 0x00018866u: goto L_18866;
    case 0x0001886cu: goto L_1886C;
    case 0x0001886eu: goto L_1886E;
    case 0x00018874u: goto L_18874;
    case 0x00018878u: goto L_18878;
    case 0x0001887au: goto L_1887A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18832:
    /* 00018832   4  link.w A5,#0 */
    c->pc = 0x00018832u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_18836:
    /* 00018836   4  tst.w (1cc0,A4) */
    c->pc = 0x00018836u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cc0u));
    rc_set_nzvc(c, t0, RC_W);

L_1883A:
    /* 0001883a   2  bne 00018844 */
    c->pc = 0x0001883au;
    if (rc_cond(c, 6)) goto L_18844;

L_1883C:
    /* 0001883c   6  cmpi.w #2,(1cc2,A4) */
    c->pc = 0x0001883cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cc2u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_18842:
    /* 00018842   2  blt 00018862 */
    c->pc = 0x00018842u;
    if (rc_cond(c, 13)) goto L_18862;

L_18844:
    /* 00018844   4  tst.w (ffffc6bc,A4) */
    c->pc = 0x00018844u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x3944u));
    rc_set_nzvc(c, t0, RC_W);

L_18848:
    /* 00018848   2  bne 0001884e */
    c->pc = 0x00018848u;
    if (rc_cond(c, 6)) goto L_1884E;

L_1884A:
    /* 0001884a   4  addq.w #1,(1cc4,A4) */
    c->pc = 0x0001884au;
    t3 = (c->a[4] + 0x1cc4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1884E:
    /* 0001884e   6  cmpi.w #20,(1cc4,A4) */
    c->pc = 0x0001884eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1cc4u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_18854:
    /* 00018854   2  ble 00018860 */
    c->pc = 0x00018854u;
    if (rc_cond(c, 15)) goto L_18860;

L_18856:
    /* 00018856   4  clr.w (fffffec8,A4) */
    c->pc = 0x00018856u;
    rc_wr16(c, m, (c->a[4] - 0x138u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1885A:
    /* 0001885a   6  move.w #64,(71a,A4) */
    c->pc = 0x0001885au;
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[4] + 0x71au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18860:
    /* 00018860   2  bra 00018866 */
    c->pc = 0x00018860u;
    goto L_18866;

L_18862:
    /* 00018862   4  clr.w (1cc4,A4) */
    c->pc = 0x00018862u;
    rc_wr16(c, m, (c->a[4] + 0x1cc4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18866:
    /* 00018866   6  cmpi.w #1b8,(47c,A4) */
    c->pc = 0x00018866u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_cmp(c, RC_W, t0, 0x000001b8u);

L_1886C:
    /* 0001886c   2  ble 00018878 */
    c->pc = 0x0001886cu;
    if (rc_cond(c, 15)) goto L_18878;

L_1886E:
    /* 0001886e   6  move.w #1,(fffffec8,A4) */
    c->pc = 0x0001886eu;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x138u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18874:
    /* 00018874   4  addq.w #1,(71a,A4) */
    c->pc = 0x00018874u;
    t3 = (c->a[4] + 0x71au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18878:
    /* 00018878   2  unlk A5 */
    c->pc = 0x00018878u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1887A:
    /* 0001887a   2  rts */
    c->pc = 0x0001887au;
    rc_ret(c, m);
    return;

}
