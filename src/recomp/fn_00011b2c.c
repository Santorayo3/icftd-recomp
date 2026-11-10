/* fn_00011b2c - 92 byte(s), 23 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011b2c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x00011b2cu: goto L_11B2C;
    case 0x00011b30u: goto L_11B30;
    case 0x00011b34u: goto L_11B34;
    case 0x00011b38u: goto L_11B38;
    case 0x00011b3eu: goto L_11B3E;
    case 0x00011b42u: goto L_11B42;
    case 0x00011b48u: goto L_11B48;
    case 0x00011b4eu: goto L_11B4E;
    case 0x00011b50u: goto L_11B50;
    case 0x00011b52u: goto L_11B52;
    case 0x00011b58u: goto L_11B58;
    case 0x00011b5cu: goto L_11B5C;
    case 0x00011b5eu: goto L_11B5E;
    case 0x00011b64u: goto L_11B64;
    case 0x00011b6au: goto L_11B6A;
    case 0x00011b72u: goto L_11B72;
    case 0x00011b74u: goto L_11B74;
    case 0x00011b76u: goto L_11B76;
    case 0x00011b7au: goto L_11B7A;
    case 0x00011b7cu: goto L_11B7C;
    case 0x00011b7eu: goto L_11B7E;
    case 0x00011b82u: goto L_11B82;
    case 0x00011b86u: goto L_11B86;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11B2C:
    /* 00011b2c   4  movem.l { A4 A5 },-(SP) */
    c->pc = 0x00011b2cu;
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    c->a[7] = t3;

L_11B30:
    /* 00011b30   4  bsr 00011a02 */
    c->pc = 0x00011b30u;
    rc_push32(c, m, 0x00011b34u);
    rc_depth++;
    c->pc = 0x00011a02u;
    return;

L_11B34:
    /* 00011b34   4  movea.l (fffff2f8,A4),A0 */
    c->pc = 0x00011b34u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_11B38:
    /* 00011b38   6  adda.l #26,A0 */
    c->pc = 0x00011b38u;
    t0 = 0x00000026u;
    c->a[0] += t0;

L_11B3E:
    /* 00011b3e   4  move.w (dec,A4),D7 */
    c->pc = 0x00011b3eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0xdecu));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11B42:
    /* 00011b42   6  adda.l #1db0,A2 */
    c->pc = 0x00011b42u;
    t0 = 0x00001db0u;
    c->a[2] += t0;

L_11B48:
    /* 00011b48   6  move.l A2,(00dff054).l */
    c->pc = 0x00011b48u;
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11B4E:
    /* 00011b4e   2  clr.l D0 */
    c->pc = 0x00011b4eu;
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11B50:
    /* 00011b50   2  move.w (A0),D0 */
    c->pc = 0x00011b50u;
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11B52:
    /* 00011b52   6  adda.l #28,A0 */
    c->pc = 0x00011b52u;
    t0 = 0x00000028u;
    c->a[0] += t0;

L_11B58:
    /* 00011b58   4  move.w (0,A5,D0.w),D0 */
    c->pc = 0x00011b58u;
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11B5C:
    /* 00011b5c   2  add.l A1,D0 */
    c->pc = 0x00011b5cu;
    t0 = rc_a_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_11B5E:
    /* 00011b5e   6  move.l D0,(00dff050).l */
    c->pc = 0x00011b5eu;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11B64:
    /* 00011b64   6  move.w D5,(00dff058).l */
    c->pc = 0x00011b64u;
    t0 = rc_d_get(c, 5, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11B6A:
    /* 00011b6a   8  btst #6,(00dff002).l */
    c->pc = 0x00011b6au;
    t4 = 0x00000006u;
    t3 = 0x00dff002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11B72:
    /* 00011b72   2  bne 00011b6a */
    c->pc = 0x00011b72u;
    if (rc_cond(c, 6)) { rc_tick(); goto L_11B6A; }

L_11B74:
    /* 00011b74   2  adda.l D3,A2 */
    c->pc = 0x00011b74u;
    t0 = rc_d_get(c, 3, RC_L);
    c->a[2] += t0;

L_11B76:
    /* 00011b76   4  dbf D7,00011b48 */
    c->pc = 0x00011b76u;
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 7, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 7, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_11B48; }
    }

L_11B7A:
    /* 00011b7a   2  movea.l (A3)+,A1 */
    c->pc = 0x00011b7au;
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_11B7C:
    /* 00011b7c   2  movea.l (A6)+,A2 */
    c->pc = 0x00011b7cu;
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_11B7E:
    /* 00011b7e   4  dbf D2,00011b34 */
    c->pc = 0x00011b7eu;
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_11B34; }
    }

L_11B82:
    /* 00011b82   4  movem.l (SP)+,{ D2 D3 } */
    c->pc = 0x00011b82u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_11B86:
    /* 00011b86   2  rts */
    c->pc = 0x00011b86u;
    rc_ret(c, m);
    return;

}
