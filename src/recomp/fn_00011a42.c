/* fn_00011a42 - 70 byte(s), 19 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011a42(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x00011a42u: goto L_11A42;
    case 0x00011a46u: goto L_11A46;
    case 0x00011a48u: goto L_11A48;
    case 0x00011a4cu: goto L_11A4C;
    case 0x00011a50u: goto L_11A50;
    case 0x00011a56u: goto L_11A56;
    case 0x00011a58u: goto L_11A58;
    case 0x00011a5au: goto L_11A5A;
    case 0x00011a5eu: goto L_11A5E;
    case 0x00011a60u: goto L_11A60;
    case 0x00011a66u: goto L_11A66;
    case 0x00011a6cu: goto L_11A6C;
    case 0x00011a74u: goto L_11A74;
    case 0x00011a76u: goto L_11A76;
    case 0x00011a7au: goto L_11A7A;
    case 0x00011a7cu: goto L_11A7C;
    case 0x00011a7eu: goto L_11A7E;
    case 0x00011a82u: goto L_11A82;
    case 0x00011a86u: goto L_11A86;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11A42:
    /* 00011a42   4  movem.l { A4 A5 },-(SP) */
    c->pc = 0x00011a42u;
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    c->a[7] = t3;

L_11A46:
    /* 00011a46   2  bsr 00011a02 */
    c->pc = 0x00011a46u;
    rc_push32(c, m, 0x00011a48u);
    rc_depth++;
    c->pc = 0x00011a02u;
    return;

L_11A48:
    /* 00011a48   4  movea.l (fffff2f8,A4),A0 */
    c->pc = 0x00011a48u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_11A4C:
    /* 00011a4c   4  move.w (dea,A4),D6 */
    c->pc = 0x00011a4cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0xdeau));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11A50:
    /* 00011a50   6  move.l A2,(00dff054).l */
    c->pc = 0x00011a50u;
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11A56:
    /* 00011a56   2  clr.l D0 */
    c->pc = 0x00011a56u;
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11A58:
    /* 00011a58   2  move.w (A0)+,D0 */
    c->pc = 0x00011a58u;
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11A5A:
    /* 00011a5a   4  move.w (0,A5,D0.w),D0 */
    c->pc = 0x00011a5au;
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11A5E:
    /* 00011a5e   2  add.l A1,D0 */
    c->pc = 0x00011a5eu;
    t0 = rc_a_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_11A60:
    /* 00011a60   6  move.l D0,(00dff050).l */
    c->pc = 0x00011a60u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11A66:
    /* 00011a66   6  move.w D5,(00dff058).l */
    c->pc = 0x00011a66u;
    t0 = rc_d_get(c, 5, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11A6C:
    /* 00011a6c   8  btst #6,(00dff002).l */
    c->pc = 0x00011a6cu;
    t4 = 0x00000006u;
    t3 = 0x00dff002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11A74:
    /* 00011a74   2  bne 00011a6c */
    c->pc = 0x00011a74u;
    if (rc_cond(c, 6)) { rc_tick(); goto L_11A6C; }

L_11A76:
    /* 00011a76   4  dbf D6,00011a56 */
    c->pc = 0x00011a76u;
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 6, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 6, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_11A56; }
    }

L_11A7A:
    /* 00011a7a   2  movea.l (A3)+,A1 */
    c->pc = 0x00011a7au;
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_11A7C:
    /* 00011a7c   2  movea.l (A6)+,A2 */
    c->pc = 0x00011a7cu;
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_11A7E:
    /* 00011a7e   4  dbf D2,00011a48 */
    c->pc = 0x00011a7eu;
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_11A48; }
    }

L_11A82:
    /* 00011a82   4  movem.l (SP)+,{ D2 D3 } */
    c->pc = 0x00011a82u;
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

L_11A86:
    /* 00011a86   2  rts */
    c->pc = 0x00011a86u;
    rc_ret(c, m);
    return;

}
