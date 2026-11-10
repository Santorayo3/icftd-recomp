/* fn_000116e6 - 98 byte(s), 19 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000116e6(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000116e6u): goto L_116E6;
    case RC_ADDR(0x000116eau): goto L_116EA;
    case RC_ADDR(0x000116f0u): goto L_116F0;
    case RC_ADDR(0x000116f6u): goto L_116F6;
    case RC_ADDR(0x000116feu): goto L_116FE;
    case RC_ADDR(0x00011704u): goto L_11704;
    case RC_ADDR(0x0001170cu): goto L_1170C;
    case RC_ADDR(0x00011714u): goto L_11714;
    case RC_ADDR(0x00011718u): goto L_11718;
    case RC_ADDR(0x0001171cu): goto L_1171C;
    case RC_ADDR(0x00011720u): goto L_11720;
    case RC_ADDR(0x00011724u): goto L_11724;
    case RC_ADDR(0x0001172au): goto L_1172A;
    case RC_ADDR(0x00011730u): goto L_11730;
    case RC_ADDR(0x00011736u): goto L_11736;
    case RC_ADDR(0x0001173eu): goto L_1173E;
    case RC_ADDR(0x00011740u): goto L_11740;
    case RC_ADDR(0x00011744u): goto L_11744;
    case RC_ADDR(0x00011746u): goto L_11746;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_116E6:
    /* 000116e6   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000116e6u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_116EA:
    /* 000116ea   6  clr.w (00dff066).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000116eau);
    rc_wr16(c, m, RC_ADDR(0x00dff066u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_116F0:
    /* 000116f0   6  clr.w (00dff064).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000116f0u);
    rc_wr16(c, m, RC_ADDR(0x00dff064u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_116F6:
    /* 000116f6   8  move.w #9f0,(00dff040).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000116f6u);
    t0 = 0x000009f0u;
    rc_wr16(c, m, RC_ADDR(0x00dff040u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_116FE:
    /* 000116fe   6  clr.w (00dff042).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000116feu);
    rc_wr16(c, m, RC_ADDR(0x00dff042u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11704:
    /* 00011704   8  move.w #ffff,(00dff044).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011704u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, RC_ADDR(0x00dff044u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1170C:
    /* 0001170c   8  move.w #ffff,(00dff046).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001170cu);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, RC_ADDR(0x00dff046u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11714:
    /* 00011714   4  lea (fffff34e,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011714u);
    c->a[0] = (c->a[4] - 0xcb2u);

L_11718:
    /* 00011718   4  lea (fffff326,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011718u);
    c->a[1] = (c->a[4] - 0xcdau);

L_1171C:
    /* 0001171c   4  move.w #3214,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001171cu);
    t0 = 0x00003214u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11720:
    /* 00011720   4  move.w #4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011720u);
    t0 = 0x00000004u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11724:
    /* 00011724   6  move.l (A0)+,(00dff050).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011724u);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_wr32(c, m, RC_ADDR(0x00dff050u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1172A:
    /* 0001172a   6  move.l (A1)+,(00dff054).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001172au);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_wr32(c, m, RC_ADDR(0x00dff054u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11730:
    /* 00011730   6  move.w D1,(00dff058).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011730u);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, RC_ADDR(0x00dff058u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11736:
    /* 00011736   8  btst #6,(00dff002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011736u);
    t4 = 0x00000006u;
    t3 = RC_ADDR(0x00dff002u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1173E:
    /* 0001173e   2  bne 00011736 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001173eu);
    if (rc_cond(c, 6)) { rc_tick(); goto L_11736; }

L_11740:
    /* 00011740   4  dbf D0,00011724 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011740u);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_11724; }
    }

L_11744:
    /* 00011744   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011744u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11746:
    /* 00011746   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011746u);
    rc_ret(c, m);
    return;

}
