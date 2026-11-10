/* fn_000023d8 - 56 byte(s), 17 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000023d8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case 0x000023d8u: goto L_23D8;
    case 0x000023dcu: goto L_23DC;
    case 0x000023e0u: goto L_23E0;
    case 0x000023e2u: goto L_23E2;
    case 0x000023e4u: goto L_23E4;
    case 0x000023e8u: goto L_23E8;
    case 0x000023ecu: goto L_23EC;
    case 0x000023f0u: goto L_23F0;
    case 0x000023f4u: goto L_23F4;
    case 0x000023f8u: goto L_23F8;
    case 0x000023fcu: goto L_23FC;
    case 0x000023feu: goto L_23FE;
    case 0x00002402u: goto L_2402;
    case 0x00002404u: goto L_2404;
    case 0x00002406u: goto L_2406;
    case 0x0000240cu: goto L_240C;
    case 0x0000240eu: goto L_240E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23D8:
    /* 000023d8   4  link.w A5,#fffffffa */
    c->pc = 0x000023d8u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_23DC:
    /* 000023dc   4  move.w (ffffefe4,A4),D0 */
    c->pc = 0x000023dcu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_23E0:
    /* 000023e0   2  addq.w #1,D0 */
    c->pc = 0x000023e0u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_23E2:
    /* 000023e2   2  move.w D0,-(A7) */
    c->pc = 0x000023e2u;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_23E4:
    /* 000023e4   4  pea (00002410) */
    c->pc = 0x000023e4u;
    rc_push32(c, m, 0x00002410u);

L_23E8:
    /* 000023e8   4  pea (fffffffa,A5) */
    c->pc = 0x000023e8u;
    rc_push32(c, m, (c->a[5] - 0x6u));

L_23EC:
    /* 000023ec   4  jsr (ffff82d2,A4) */
    c->pc = 0x000023ecu;
    /* vector 120 */
    rc_push32(c, m, 0x000023f0u);
    rc_depth++;
    c->pc = 0x00020db6u;
    return;

L_23F0:
    /* 000023f0   4  lea (a,A7),A7 */
    c->pc = 0x000023f0u;
    c->a[7] = (c->a[7] + 0xau);

L_23F4:
    /* 000023f4   4  pea (fffffffa,A5) */
    c->pc = 0x000023f4u;
    rc_push32(c, m, (c->a[5] - 0x6u));

L_23F8:
    /* 000023f8   4  jsr (00007338) */
    c->pc = 0x000023f8u;
    rc_push32(c, m, 0x000023fcu);
    rc_depth++;
    c->pc = 0x00007338u;
    return;

L_23FC:
    /* 000023fc   2  addq.w #4,A7 */
    c->pc = 0x000023fcu;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_23FE:
    /* 000023fe   4  move.w D0,(ffff8b56,A4) */
    c->pc = 0x000023feu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x74aau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2402:
    /* 00002402   2  tst.w D0 */
    c->pc = 0x00002402u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2404:
    /* 00002404   2  blt 0000240c */
    c->pc = 0x00002404u;
    if (rc_cond(c, 13)) goto L_240C;

L_2406:
    /* 00002406   6  move.w #1,(ffff8b54,A4) */
    c->pc = 0x00002406u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x74acu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_240C:
    /* 0000240c   2  unlk A5 */
    c->pc = 0x0000240cu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_240E:
    /* 0000240e   2  rts */
    c->pc = 0x0000240eu;
    rc_ret(c, m);
    return;

}
