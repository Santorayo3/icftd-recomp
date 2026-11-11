/* fn_0000f0fe - 98 byte(s), 29 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f0fe(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f0feu): goto L_F0FE;
    case RC_ADDR(0x0000f102u): goto L_F102;
    case RC_ADDR(0x0000f106u): goto L_F106;
    case RC_ADDR(0x0000f108u): goto L_F108;
    case RC_ADDR(0x0000f10au): goto L_F10A;
    case RC_ADDR(0x0000f10cu): goto L_F10C;
    case RC_ADDR(0x0000f10eu): goto L_F10E;
    case RC_ADDR(0x0000f110u): goto L_F110;
    case RC_ADDR(0x0000f112u): goto L_F112;
    case RC_ADDR(0x0000f116u): goto L_F116;
    case RC_ADDR(0x0000f11au): goto L_F11A;
    case RC_ADDR(0x0000f11eu): goto L_F11E;
    case RC_ADDR(0x0000f122u): goto L_F122;
    case RC_ADDR(0x0000f124u): goto L_F124;
    case RC_ADDR(0x0000f126u): goto L_F126;
    case RC_ADDR(0x0000f12au): goto L_F12A;
    case RC_ADDR(0x0000f12cu): goto L_F12C;
    case RC_ADDR(0x0000f130u): goto L_F130;
    case RC_ADDR(0x0000f134u): goto L_F134;
    case RC_ADDR(0x0000f138u): goto L_F138;
    case RC_ADDR(0x0000f13cu): goto L_F13C;
    case RC_ADDR(0x0000f140u): goto L_F140;
    case RC_ADDR(0x0000f146u): goto L_F146;
    case RC_ADDR(0x0000f14cu): goto L_F14C;
    case RC_ADDR(0x0000f150u): goto L_F150;
    case RC_ADDR(0x0000f152u): goto L_F152;
    case RC_ADDR(0x0000f156u): goto L_F156;
    case RC_ADDR(0x0000f15au): goto L_F15A;
    case RC_ADDR(0x0000f15eu): goto L_F15E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F0FE:
    /* 0000f0fe   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0000f0feu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_F102:
    /* 0000f102   4  bsr 0000f160 */
    c->pc = RC_ADDR(0x0000f102u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f106u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f160u);
    return;

L_F106:
    /* 0000f106   2  move.l A0,D4 */
    c->pc = RC_ADDR(0x0000f106u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F108:
    /* 0000f108   2  beq 0000f15a */
    c->pc = RC_ADDR(0x0000f108u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F15A;

L_F10A:
    /* 0000f10a   2  movea.l D4,A5 */
    c->pc = RC_ADDR(0x0000f10au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[5] = t0;

L_F10C:
    /* 0000f10c   2  cmp.l D0,D1 */
    c->pc = RC_ADDR(0x0000f10cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_F10E:
    /* 0000f10e   2  beq 0000f15a */
    c->pc = RC_ADDR(0x0000f10eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F15A;

L_F110:
    /* 0000f110   2  bcs 0000f15a */
    c->pc = RC_ADDR(0x0000f110u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_F15A;

L_F112:
    /* 0000f112   4  move.l D0,(c,A6) */
    c->pc = RC_ADDR(0x0000f112u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[6] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F116:
    /* 0000f116   4  move.l D1,(14,A6) */
    c->pc = RC_ADDR(0x0000f116u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[6] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F11A:
    /* 0000f11a   4  lea (20,A5),A0 */
    c->pc = RC_ADDR(0x0000f11au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] + 0x20u);

L_F11E:
    /* 0000f11e   4  lea (26,A6),A1 */
    c->pc = RC_ADDR(0x0000f11eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[6] + 0x26u);

L_F122:
    /* 0000f122   2  moveq #3,D7 */
    c->pc = RC_ADDR(0x0000f122u);
    rc_step(c, m, 4);
    c->d[7] = 0x00000003u;
    rc_set_nzvc(c, c->d[7], RC_L);

L_F124:
    /* 0000f124   2  move.l (A0)+,(A1)+ */
    c->pc = RC_ADDR(0x0000f124u);
    rc_step(c, m, 20);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    t3 = c->a[1];
    c->a[1] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F126:
    /* 0000f126   4  dbf D7,0000f124 */
    c->pc = RC_ADDR(0x0000f126u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 7, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 7, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_F124; }
    }

L_F12A:
    /* 0000f12a   2  movea.l A5,A0 */
    c->pc = RC_ADDR(0x0000f12au);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 5, RC_L);
    c->a[0] = t0;

L_F12C:
    /* 0000f12c   4  bsr 0000f190 */
    c->pc = RC_ADDR(0x0000f12cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f130u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f190u);
    return;

L_F130:
    /* 0000f130   4  bsr 0000f202 */
    c->pc = RC_ADDR(0x0000f130u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f134u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f202u);
    return;

L_F134:
    /* 0000f134   4  clr.w (1e,A6) */
    c->pc = RC_ADDR(0x0000f134u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[6] + 0x1eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F138:
    /* 0000f138   4  move.l A5,(6,A6) */
    c->pc = RC_ADDR(0x0000f138u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 5, RC_L);
    rc_wr32(c, m, (c->a[6] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F13C:
    /* 0000f13c   4  clr.w (0,A6) */
    c->pc = RC_ADDR(0x0000f13cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[6] + 0x0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F140:
    /* 0000f140   6  move.w (2,A5),(2,A6) */
    c->pc = RC_ADDR(0x0000f140u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0x2u));
    rc_wr16(c, m, (c->a[6] + 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F146:
    /* 0000f146   6  move.w (6,A5),(4,A6) */
    c->pc = RC_ADDR(0x0000f146u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0x6u));
    rc_wr16(c, m, (c->a[6] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F14C:
    /* 0000f14c   4  move.w (0,A5),D1 */
    c->pc = RC_ADDR(0x0000f14cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F150:
    /* 0000f150   2  move.w D3,D0 */
    c->pc = RC_ADDR(0x0000f150u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F152:
    /* 0000f152   4  bsr 0000f608 */
    c->pc = RC_ADDR(0x0000f152u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f156u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f608u);
    return;

L_F156:
    /* 0000f156   4  move.w D2,(a,A6) */
    c->pc = RC_ADDR(0x0000f156u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[6] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F15A:
    /* 0000f15a   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0000f15au);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_F15E:
    /* 0000f15e   2  rts */
    c->pc = RC_ADDR(0x0000f15eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
