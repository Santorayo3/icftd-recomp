/* fn_0000e7ce - 54 byte(s), 19 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000e7ce(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x0000e7ceu: goto L_E7CE;
    case 0x0000e7d2u: goto L_E7D2;
    case 0x0000e7d6u: goto L_E7D6;
    case 0x0000e7dau: goto L_E7DA;
    case 0x0000e7deu: goto L_E7DE;
    case 0x0000e7e2u: goto L_E7E2;
    case 0x0000e7e4u: goto L_E7E4;
    case 0x0000e7e6u: goto L_E7E6;
    case 0x0000e7e8u: goto L_E7E8;
    case 0x0000e7eau: goto L_E7EA;
    case 0x0000e7ecu: goto L_E7EC;
    case 0x0000e7f0u: goto L_E7F0;
    case 0x0000e7f4u: goto L_E7F4;
    case 0x0000e7f6u: goto L_E7F6;
    case 0x0000e7f8u: goto L_E7F8;
    case 0x0000e7fau: goto L_E7FA;
    case 0x0000e7fcu: goto L_E7FC;
    case 0x0000e800u: goto L_E800;
    case 0x0000e802u: goto L_E802;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_E7CE:
    /* 0000e7ce   4  link.w A5,#0 */
    c->pc = 0x0000e7ceu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_E7D2:
    /* 0000e7d2   4  movea.l (8,A5),A0 */
    c->pc = 0x0000e7d2u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_E7D6:
    /* 0000e7d6   4  movea.l (c,A5),A1 */
    c->pc = 0x0000e7d6u;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[1] = t0;

L_E7DA:
    /* 0000e7da   4  movea.l (10,A5),A2 */
    c->pc = 0x0000e7dau;
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[2] = t0;

L_E7DE:
    /* 0000e7de   4  move.l (14,A5),D0 */
    c->pc = 0x0000e7deu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E7E2:
    /* 0000e7e2   2  move.l D0,D1 */
    c->pc = 0x0000e7e2u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E7E4:
    /* 0000e7e4   2  lsr.l #1,D1 */
    c->pc = 0x0000e7e4u;
    c->d[1] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_E7E6:
    /* 0000e7e6   2  subq.l #1,D1 */
    c->pc = 0x0000e7e6u;
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_E7E8:
    /* 0000e7e8   2  move.b (A0),(A1)+ */
    c->pc = 0x0000e7e8u;
    t0 = rc_rd8(c, m, c->a[0]);
    t3 = c->a[1];
    c->a[1] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_E7EA:
    /* 0000e7ea   2  addq.l #2,A0 */
    c->pc = 0x0000e7eau;
    c->a[0] += 0x00000002u;

L_E7EC:
    /* 0000e7ec   4  dbf D1,0000e7e8 */
    c->pc = 0x0000e7ecu;
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_E7E8; }
    }

L_E7F0:
    /* 0000e7f0   4  movea.l (8,A5),A0 */
    c->pc = 0x0000e7f0u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_E7F4:
    /* 0000e7f4   2  move.l D0,D1 */
    c->pc = 0x0000e7f4u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E7F6:
    /* 0000e7f6   2  subq.l #1,D1 */
    c->pc = 0x0000e7f6u;
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_E7F8:
    /* 0000e7f8   2  move.b (A0),(A2)+ */
    c->pc = 0x0000e7f8u;
    t0 = rc_rd8(c, m, c->a[0]);
    t3 = c->a[2];
    c->a[2] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_E7FA:
    /* 0000e7fa   2  move.b (A0)+,(A2)+ */
    c->pc = 0x0000e7fau;
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    t3 = c->a[2];
    c->a[2] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_E7FC:
    /* 0000e7fc   4  dbf D1,0000e7f8 */
    c->pc = 0x0000e7fcu;
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_E7F8; }
    }

L_E800:
    /* 0000e800   2  unlk A5 */
    c->pc = 0x0000e800u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_E802:
    /* 0000e802   2  rts */
    c->pc = 0x0000e802u;
    rc_ret(c, m);
    return;

}
