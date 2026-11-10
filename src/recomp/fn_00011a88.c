/* fn_00011a88 - 84 byte(s), 21 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011a88(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00011a88u): goto L_11A88;
    case RC_ADDR(0x00011a8cu): goto L_11A8C;
    case RC_ADDR(0x00011a90u): goto L_11A90;
    case RC_ADDR(0x00011a94u): goto L_11A94;
    case RC_ADDR(0x00011a9au): goto L_11A9A;
    case RC_ADDR(0x00011a9eu): goto L_11A9E;
    case RC_ADDR(0x00011aa4u): goto L_11AA4;
    case RC_ADDR(0x00011aaau): goto L_11AAA;
    case RC_ADDR(0x00011aacu): goto L_11AAC;
    case RC_ADDR(0x00011aaeu): goto L_11AAE;
    case RC_ADDR(0x00011ab2u): goto L_11AB2;
    case RC_ADDR(0x00011ab4u): goto L_11AB4;
    case RC_ADDR(0x00011abau): goto L_11ABA;
    case RC_ADDR(0x00011ac0u): goto L_11AC0;
    case RC_ADDR(0x00011ac8u): goto L_11AC8;
    case RC_ADDR(0x00011acau): goto L_11ACA;
    case RC_ADDR(0x00011aceu): goto L_11ACE;
    case RC_ADDR(0x00011ad0u): goto L_11AD0;
    case RC_ADDR(0x00011ad2u): goto L_11AD2;
    case RC_ADDR(0x00011ad6u): goto L_11AD6;
    case RC_ADDR(0x00011adau): goto L_11ADA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11A88:
    /* 00011a88   4  movem.l { A4 A5 },-(SP) */
    c->pc = RC_ADDR(0x00011a88u);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    c->a[7] = t3;

L_11A8C:
    /* 00011a8c   4  bsr 00011a02 */
    c->pc = RC_ADDR(0x00011a8cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00011a90u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011a02u);
    return;

L_11A90:
    /* 00011a90   4  movea.l (fffff2f8,A4),A0 */
    c->pc = RC_ADDR(0x00011a90u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_11A94:
    /* 00011a94   6  adda.l #2f8,A0 */
    c->pc = RC_ADDR(0x00011a94u);
    rc_step(c, m);
    t0 = 0x000002f8u;
    c->a[0] += t0;

L_11A9A:
    /* 00011a9a   4  move.w (dea,A4),D6 */
    c->pc = RC_ADDR(0x00011a9au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdeau));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11A9E:
    /* 00011a9e   6  adda.l #26,A2 */
    c->pc = RC_ADDR(0x00011a9eu);
    rc_step(c, m);
    t0 = 0x00000026u;
    c->a[2] += t0;

L_11AA4:
    /* 00011aa4   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x00011aa4u);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11AAA:
    /* 00011aaa   2  clr.l D0 */
    c->pc = RC_ADDR(0x00011aaau);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11AAC:
    /* 00011aac   2  move.w (A0)+,D0 */
    c->pc = RC_ADDR(0x00011aacu);
    rc_step(c, m);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11AAE:
    /* 00011aae   4  move.w (0,A5,D0.w),D0 */
    c->pc = RC_ADDR(0x00011aaeu);
    rc_step(c, m);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11AB2:
    /* 00011ab2   2  add.l A1,D0 */
    c->pc = RC_ADDR(0x00011ab2u);
    rc_step(c, m);
    t0 = rc_a_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_11AB4:
    /* 00011ab4   6  move.l D0,(00dff050).l */
    c->pc = RC_ADDR(0x00011ab4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11ABA:
    /* 00011aba   6  move.w D5,(00dff058).l */
    c->pc = RC_ADDR(0x00011abau);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11AC0:
    /* 00011ac0   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x00011ac0u);
    rc_step(c, m);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_11AC8:
    /* 00011ac8   2  bne 00011ac0 */
    c->pc = RC_ADDR(0x00011ac8u);
    rc_step(c, m);
    if (rc_cond(c, 6)) { rc_tick(); goto L_11AC0; }

L_11ACA:
    /* 00011aca   4  dbf D6,00011aaa */
    c->pc = RC_ADDR(0x00011acau);
    rc_step(c, m);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 6, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 6, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_11AAA; }
    }

L_11ACE:
    /* 00011ace   2  movea.l (A3)+,A1 */
    c->pc = RC_ADDR(0x00011aceu);
    rc_step(c, m);
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_11AD0:
    /* 00011ad0   2  movea.l (A6)+,A2 */
    c->pc = RC_ADDR(0x00011ad0u);
    rc_step(c, m);
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_11AD2:
    /* 00011ad2   4  dbf D2,00011a90 */
    c->pc = RC_ADDR(0x00011ad2u);
    rc_step(c, m);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_11A90; }
    }

L_11AD6:
    /* 00011ad6   4  movem.l (SP)+,{ D2 D3 } */
    c->pc = RC_ADDR(0x00011ad6u);
    rc_step(c, m);
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

L_11ADA:
    /* 00011ada   2  rts */
    c->pc = RC_ADDR(0x00011adau);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
