/* fn_000121c2 - 64 byte(s), 19 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000121c2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case 0x000121c2u: goto L_121C2;
    case 0x000121c6u: goto L_121C6;
    case 0x000121cau: goto L_121CA;
    case 0x000121ceu: goto L_121CE;
    case 0x000121d0u: goto L_121D0;
    case 0x000121d4u: goto L_121D4;
    case 0x000121d6u: goto L_121D6;
    case 0x000121dau: goto L_121DA;
    case 0x000121dcu: goto L_121DC;
    case 0x000121e0u: goto L_121E0;
    case 0x000121e4u: goto L_121E4;
    case 0x000121e6u: goto L_121E6;
    case 0x000121eau: goto L_121EA;
    case 0x000121ecu: goto L_121EC;
    case 0x000121f0u: goto L_121F0;
    case 0x000121f2u: goto L_121F2;
    case 0x000121f8u: goto L_121F8;
    case 0x000121feu: goto L_121FE;
    case 0x00012200u: goto L_12200;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_121C2:
    /* 000121c2   4  link.w A5,#0 */
    c->pc = 0x000121c2u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_121C6:
    /* 000121c6   4  move.w (fffffd8e,A4),D0 */
    c->pc = 0x000121c6u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x272u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_121CA:
    /* 000121ca   4  sub.w (fffffd8a,A4),D0 */
    c->pc = 0x000121cau;
    t0 = rc_rd16(c, m, (c->a[4] - 0x276u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_121CE:
    /* 000121ce   2  move.w D0,-(A7) */
    c->pc = 0x000121ceu;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_121D0:
    /* 000121d0   4  jsr (00012132) */
    c->pc = 0x000121d0u;
    rc_push32(c, m, 0x000121d4u);
    rc_depth++;
    c->pc = 0x00012132u;
    return;

L_121D4:
    /* 000121d4   2  addq.w #2,A7 */
    c->pc = 0x000121d4u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_121D6:
    /* 000121d6   4  cmp.w #3c0,D0 */
    c->pc = 0x000121d6u;
    t0 = 0x000003c0u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_121DA:
    /* 000121da   2  bgt 000121f2 */
    c->pc = 0x000121dau;
    if (rc_cond(c, 14)) goto L_121F2;

L_121DC:
    /* 000121dc   4  move.w (fffffd90,A4),D0 */
    c->pc = 0x000121dcu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x270u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_121E0:
    /* 000121e0   4  sub.w (fffffd8c,A4),D0 */
    c->pc = 0x000121e0u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x274u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_121E4:
    /* 000121e4   2  move.w D0,-(A7) */
    c->pc = 0x000121e4u;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_121E6:
    /* 000121e6   4  jsr (00012132) */
    c->pc = 0x000121e6u;
    rc_push32(c, m, 0x000121eau);
    rc_depth++;
    c->pc = 0x00012132u;
    return;

L_121EA:
    /* 000121ea   2  addq.w #2,A7 */
    c->pc = 0x000121eau;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_121EC:
    /* 000121ec   4  cmp.w #258,D0 */
    c->pc = 0x000121ecu;
    t0 = 0x00000258u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_121F0:
    /* 000121f0   2  ble 000121fe */
    c->pc = 0x000121f0u;
    if (rc_cond(c, 15)) goto L_121FE;

L_121F2:
    /* 000121f2   6  move.w #1,(aee,A4) */
    c->pc = 0x000121f2u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xaeeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_121F8:
    /* 000121f8   6  move.w #1,(fffffd88,A4) */
    c->pc = 0x000121f8u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x278u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_121FE:
    /* 000121fe   2  unlk A5 */
    c->pc = 0x000121feu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_12200:
    /* 00012200   2  rts */
    c->pc = 0x00012200u;
    rc_ret(c, m);
    return;

}
