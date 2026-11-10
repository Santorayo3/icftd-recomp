/* fn_00010cca - 78 byte(s), 21 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00010cca(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x00010ccau: goto L_10CCA;
    case 0x00010cceu: goto L_10CCE;
    case 0x00010cd2u: goto L_10CD2;
    case 0x00010cd6u: goto L_10CD6;
    case 0x00010cdau: goto L_10CDA;
    case 0x00010cdeu: goto L_10CDE;
    case 0x00010ce2u: goto L_10CE2;
    case 0x00010ce6u: goto L_10CE6;
    case 0x00010ce8u: goto L_10CE8;
    case 0x00010cecu: goto L_10CEC;
    case 0x00010ceeu: goto L_10CEE;
    case 0x00010cf2u: goto L_10CF2;
    case 0x00010cf6u: goto L_10CF6;
    case 0x00010cfau: goto L_10CFA;
    case 0x00010cfcu: goto L_10CFC;
    case 0x00010d00u: goto L_10D00;
    case 0x00010d06u: goto L_10D06;
    case 0x00010d08u: goto L_10D08;
    case 0x00010d0eu: goto L_10D0E;
    case 0x00010d14u: goto L_10D14;
    case 0x00010d16u: goto L_10D16;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10CCA:
    /* 00010cca   4  link.w A5,#fffffffe */
    c->pc = 0x00010ccau;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_10CCE:
    /* 00010cce   4  movea.l (ffffcbbc,A4),A0 */
    c->pc = 0x00010cceu;
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[0] = t0;

L_10CD2:
    /* 00010cd2   4  move.w #2a,(A0) */
    c->pc = 0x00010cd2u;
    t0 = 0x0000002au;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10CD6:
    /* 00010cd6   4  movea.l (ffffcbb8,A4),A0 */
    c->pc = 0x00010cd6u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    c->a[0] = t0;

L_10CDA:
    /* 00010cda   4  move.w #2a,(A0) */
    c->pc = 0x00010cdau;
    t0 = 0x0000002au;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10CDE:
    /* 00010cde   4  clr.w (fffffffe,A5) */
    c->pc = 0x00010cdeu;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10CE2:
    /* 00010ce2   4  pea (00001f40).l */
    c->pc = 0x00010ce2u;
    rc_push32(c, m, 0x00001f40u);

L_10CE6:
    /* 00010ce6   2  moveq #0,D0 */
    c->pc = 0x00010ce6u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10CE8:
    /* 00010ce8   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00010ce8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10CEC:
    /* 00010cec   2  asl.l #2,D0 */
    c->pc = 0x00010cecu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_10CEE:
    /* 00010cee   4  lea (fffff362,A4),A0 */
    c->pc = 0x00010ceeu;
    c->a[0] = (c->a[4] - 0xc9eu);

L_10CF2:
    /* 00010cf2   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = 0x00010cf2u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10CF6:
    /* 00010cf6   4  jsr (ffff8344,A4) */
    c->pc = 0x00010cf6u;
    /* vector 139: exec.library -210 */
    c->pc = 0x00010cfau;
    rc_os_call(c, m, 0, -210);

L_10CFA:
    /* 00010cfa   2  addq.w #8,A7 */
    c->pc = 0x00010cfau;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_10CFC:
    /* 00010cfc   4  addq.w #1,(fffffffe,A5) */
    c->pc = 0x00010cfcu;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_10D00:
    /* 00010d00   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = 0x00010d00u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_10D06:
    /* 00010d06   2  bcs 00010ce2 */
    c->pc = 0x00010d06u;
    if (rc_cond(c, 5)) { rc_tick(); goto L_10CE2; }

L_10D08:
    /* 00010d08   6  move.l (b00,A4),(ffffcbbc,A4) */
    c->pc = 0x00010d08u;
    t0 = rc_rd32(c, m, (c->a[4] + 0xb00u));
    rc_wr32(c, m, (c->a[4] - 0x3444u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10D0E:
    /* 00010d0e   6  move.l (b04,A4),(ffffcbb8,A4) */
    c->pc = 0x00010d0eu;
    t0 = rc_rd32(c, m, (c->a[4] + 0xb04u));
    rc_wr32(c, m, (c->a[4] - 0x3448u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10D14:
    /* 00010d14   2  unlk A5 */
    c->pc = 0x00010d14u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_10D16:
    /* 00010d16   2  rts */
    c->pc = 0x00010d16u;
    rc_ret(c, m);
    return;

}
