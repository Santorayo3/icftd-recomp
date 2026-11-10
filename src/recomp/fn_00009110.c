/* fn_00009110 - 44 byte(s), 14 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009110(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x00009110u: goto L_9110;
    case 0x00009114u: goto L_9114;
    case 0x00009118u: goto L_9118;
    case 0x0000911au: goto L_911A;
    case 0x0000911eu: goto L_911E;
    case 0x00009122u: goto L_9122;
    case 0x00009124u: goto L_9124;
    case 0x00009128u: goto L_9128;
    case 0x0000912au: goto L_912A;
    case 0x0000912eu: goto L_912E;
    case 0x00009132u: goto L_9132;
    case 0x00009136u: goto L_9136;
    case 0x00009138u: goto L_9138;
    case 0x0000913au: goto L_913A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9110:
    /* 00009110   4  link.w A5,#fffffffe */
    c->pc = 0x00009110u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_9114:
    /* 00009114   4  clr.w (fffffffe,A5) */
    c->pc = 0x00009114u;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9118:
    /* 00009118   2  bra 0000912e */
    c->pc = 0x00009118u;
    goto L_912E;

L_911A:
    /* 0000911a   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x0000911au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_911E:
    /* 0000911e   4  add.w #f0,D0 */
    c->pc = 0x0000911eu;
    t0 = 0x000000f0u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_9122:
    /* 00009122   2  move.w D0,-(A7) */
    c->pc = 0x00009122u;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9124:
    /* 00009124   4  jsr (00007108) */
    c->pc = 0x00009124u;
    rc_push32(c, m, 0x00009128u);
    rc_depth++;
    c->pc = 0x00007108u;
    return;

L_9128:
    /* 00009128   2  addq.w #2,A7 */
    c->pc = 0x00009128u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_912A:
    /* 0000912a   4  addq.w #1,(fffffffe,A5) */
    c->pc = 0x0000912au;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_912E:
    /* 0000912e   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x0000912eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9132:
    /* 00009132   4  cmp.w (fffff0b4,A4),D0 */
    c->pc = 0x00009132u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xf4cu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_9136:
    /* 00009136   2  blt 0000911a */
    c->pc = 0x00009136u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_911A; }

L_9138:
    /* 00009138   2  unlk A5 */
    c->pc = 0x00009138u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_913A:
    /* 0000913a   2  rts */
    c->pc = 0x0000913au;
    rc_ret(c, m);
    return;

}
