/* fn_0001db1e - 34 byte(s), 13 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001db1e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0001db1eu: goto L_1DB1E;
    case 0x0001db22u: goto L_1DB22;
    case 0x0001db24u: goto L_1DB24;
    case 0x0001db26u: goto L_1DB26;
    case 0x0001db28u: goto L_1DB28;
    case 0x0001db2au: goto L_1DB2A;
    case 0x0001db2eu: goto L_1DB2E;
    case 0x0001db32u: goto L_1DB32;
    case 0x0001db34u: goto L_1DB34;
    case 0x0001db38u: goto L_1DB38;
    case 0x0001db3au: goto L_1DB3A;
    case 0x0001db3cu: goto L_1DB3C;
    case 0x0001db3eu: goto L_1DB3E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DB1E:
    /* 0001db1e   4  link.w A5,#0 */
    c->pc = 0x0001db1eu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1DB22:
    /* 0001db22   2  move.l D4,-(A7) */
    c->pc = 0x0001db22u;
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DB24:
    /* 0001db24   2  moveq #0,D4 */
    c->pc = 0x0001db24u;
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1DB26:
    /* 0001db26   2  move.w D4,D0 */
    c->pc = 0x0001db26u;
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB28:
    /* 0001db28   2  asl.w #1,D0 */
    c->pc = 0x0001db28u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_1DB2A:
    /* 0001db2a   4  lea (28ca,A4),A0 */
    c->pc = 0x0001db2au;
    c->a[0] = (c->a[4] + 0x28cau);

L_1DB2E:
    /* 0001db2e   4  move.b D0,(0,A0,D4.w) */
    c->pc = 0x0001db2eu;
    t0 = rc_d_get(c, 0, RC_B);
    t4 = rc_ext(c->d[4], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DB32:
    /* 0001db32   2  addq.w #1,D4 */
    c->pc = 0x0001db32u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1DB34:
    /* 0001db34   4  cmp.w #20,D4 */
    c->pc = 0x0001db34u;
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1DB38:
    /* 0001db38   2  blt 0001db26 */
    c->pc = 0x0001db38u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_1DB26; }

L_1DB3A:
    /* 0001db3a   2  move.l (A7)+,D4 */
    c->pc = 0x0001db3au;
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DB3C:
    /* 0001db3c   2  unlk A5 */
    c->pc = 0x0001db3cu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DB3E:
    /* 0001db3e   2  rts */
    c->pc = 0x0001db3eu;
    rc_ret(c, m);
    return;

}
