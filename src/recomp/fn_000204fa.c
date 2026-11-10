/* fn_000204fa - 30 byte(s), 10 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000204fa(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x000204fau: goto L_204FA;
    case 0x000204feu: goto L_204FE;
    case 0x00020502u: goto L_20502;
    case 0x00020506u: goto L_20506;
    case 0x0002050au: goto L_2050A;
    case 0x0002050cu: goto L_2050C;
    case 0x0002050eu: goto L_2050E;
    case 0x00020510u: goto L_20510;
    case 0x00020514u: goto L_20514;
    case 0x00020516u: goto L_20516;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_204FA:
    /* 000204fa   4  link.w A5,#0 */
    c->pc = 0x000204fau;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_204FE:
    /* 000204fe   4  movea.l (8,A5),A0 */
    c->pc = 0x000204feu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20502:
    /* 00020502   4  move.l (c,A5),D0 */
    c->pc = 0x00020502u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20506:
    /* 00020506   4  movea.l (2a82,A4),A1 */
    c->pc = 0x00020506u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2a82u));
    c->a[1] = t0;

L_2050A:
    /* 0002050a   2  move.b (A1)+,(A0)+ */
    c->pc = 0x0002050au;
    t3 = c->a[1];
    c->a[1] += 1u;
    t0 = rc_rd8(c, m, t3);
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2050C:
    /* 0002050c   2  subq.l #1,D0 */
    c->pc = 0x0002050cu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2050E:
    /* 0002050e   2  bne 0002050a */
    c->pc = 0x0002050eu;
    if (rc_cond(c, 6)) { rc_tick(); goto L_2050A; }

L_20510:
    /* 00020510   4  move.l A1,(2a82,A4) */
    c->pc = 0x00020510u;
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2a82u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20514:
    /* 00020514   2  unlk A5 */
    c->pc = 0x00020514u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_20516:
    /* 00020516   2  rts */
    c->pc = 0x00020516u;
    rc_ret(c, m);
    return;

}
