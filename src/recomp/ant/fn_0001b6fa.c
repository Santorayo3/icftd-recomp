/* fn_0001b6fa - 108 byte(s), 38 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001b6fa(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001b6fau): goto L_1B6FA;
    case RC_ADDR(0x0001b6feu): goto L_1B6FE;
    case RC_ADDR(0x0001b702u): goto L_1B702;
    case RC_ADDR(0x0001b704u): goto L_1B704;
    case RC_ADDR(0x0001b706u): goto L_1B706;
    case RC_ADDR(0x0001b70au): goto L_1B70A;
    case RC_ADDR(0x0001b70cu): goto L_1B70C;
    case RC_ADDR(0x0001b70eu): goto L_1B70E;
    case RC_ADDR(0x0001b710u): goto L_1B710;
    case RC_ADDR(0x0001b714u): goto L_1B714;
    case RC_ADDR(0x0001b718u): goto L_1B718;
    case RC_ADDR(0x0001b71au): goto L_1B71A;
    case RC_ADDR(0x0001b71eu): goto L_1B71E;
    case RC_ADDR(0x0001b720u): goto L_1B720;
    case RC_ADDR(0x0001b722u): goto L_1B722;
    case RC_ADDR(0x0001b724u): goto L_1B724;
    case RC_ADDR(0x0001b726u): goto L_1B726;
    case RC_ADDR(0x0001b72au): goto L_1B72A;
    case RC_ADDR(0x0001b72cu): goto L_1B72C;
    case RC_ADDR(0x0001b730u): goto L_1B730;
    case RC_ADDR(0x0001b732u): goto L_1B732;
    case RC_ADDR(0x0001b734u): goto L_1B734;
    case RC_ADDR(0x0001b738u): goto L_1B738;
    case RC_ADDR(0x0001b73au): goto L_1B73A;
    case RC_ADDR(0x0001b73eu): goto L_1B73E;
    case RC_ADDR(0x0001b740u): goto L_1B740;
    case RC_ADDR(0x0001b744u): goto L_1B744;
    case RC_ADDR(0x0001b746u): goto L_1B746;
    case RC_ADDR(0x0001b748u): goto L_1B748;
    case RC_ADDR(0x0001b74au): goto L_1B74A;
    case RC_ADDR(0x0001b74eu): goto L_1B74E;
    case RC_ADDR(0x0001b752u): goto L_1B752;
    case RC_ADDR(0x0001b754u): goto L_1B754;
    case RC_ADDR(0x0001b75au): goto L_1B75A;
    case RC_ADDR(0x0001b75cu): goto L_1B75C;
    case RC_ADDR(0x0001b75eu): goto L_1B75E;
    case RC_ADDR(0x0001b762u): goto L_1B762;
    case RC_ADDR(0x0001b764u): goto L_1B764;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B6FA:
    /* 0001b6fa   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001b6fau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1B6FE:
    /* 0001b6fe   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001b6feu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1B702:
    /* 0001b702   2  moveq #1,D5 */
    c->pc = RC_ADDR(0x0001b702u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000001u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1B704:
    /* 0001b704   2  moveq #0,D6 */
    c->pc = RC_ADDR(0x0001b704u);
    rc_step(c, m, 4);
    c->d[6] = 0x00000000u;
    rc_set_nzvc(c, c->d[6], RC_L);

L_1B706:
    /* 0001b706   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x0001b706u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B70A:
    /* 0001b70a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b70au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B70C:
    /* 0001b70c   2  add.l D6,D0 */
    c->pc = RC_ADDR(0x0001b70cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 6, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1B70E:
    /* 0001b70e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b70eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B710:
    /* 0001b710   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001b710u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1B714:
    /* 0001b714   4  move.w (0,A0,D0.w),D4 */
    c->pc = RC_ADDR(0x0001b714u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B718:
    /* 0001b718   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0001b718u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B71A:
    /* 0001b71a   4  and.w #f,D0 */
    c->pc = RC_ADDR(0x0001b71au);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1B71E:
    /* 0001b71e   2  beq 0001b724 */
    c->pc = RC_ADDR(0x0001b71eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B724;

L_1B720:
    /* 0001b720   2  subq.w #1,D4 */
    c->pc = RC_ADDR(0x0001b720u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1B722:
    /* 0001b722   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x0001b722u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1B724:
    /* 0001b724   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0001b724u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B726:
    /* 0001b726   4  and.w #f0,D0 */
    c->pc = RC_ADDR(0x0001b726u);
    rc_step(c, m, 10);
    t0 = 0x000000f0u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1B72A:
    /* 0001b72a   2  beq 0001b732 */
    c->pc = RC_ADDR(0x0001b72au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B732;

L_1B72C:
    /* 0001b72c   4  sub.w #10,D4 */
    c->pc = RC_ADDR(0x0001b72cu);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1B730:
    /* 0001b730   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x0001b730u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1B732:
    /* 0001b732   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0001b732u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B734:
    /* 0001b734   4  and.w #f00,D0 */
    c->pc = RC_ADDR(0x0001b734u);
    rc_step(c, m, 10);
    t0 = 0x00000f00u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1B738:
    /* 0001b738   2  beq 0001b740 */
    c->pc = RC_ADDR(0x0001b738u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1B740;

L_1B73A:
    /* 0001b73a   4  sub.w #100,D4 */
    c->pc = RC_ADDR(0x0001b73au);
    rc_step(c, m, 10);
    t0 = 0x00000100u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1B73E:
    /* 0001b73e   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x0001b73eu);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1B740:
    /* 0001b740   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x0001b740u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B744:
    /* 0001b744   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001b744u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B746:
    /* 0001b746   2  add.l D6,D0 */
    c->pc = RC_ADDR(0x0001b746u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 6, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1B748:
    /* 0001b748   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b748u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B74A:
    /* 0001b74a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001b74au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1B74E:
    /* 0001b74e   4  move.w D4,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b74eu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 4, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B752:
    /* 0001b752   2  addq.l #2,D6 */
    c->pc = RC_ADDR(0x0001b752u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 6, RC_L);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 6, RC_L, t2);

L_1B754:
    /* 0001b754   6  cmp.l #40,D6 */
    c->pc = RC_ADDR(0x0001b754u);
    rc_step(c, m, 14);
    t0 = 0x00000040u;
    t1 = rc_d_get(c, 6, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1B75A:
    /* 0001b75a   2  blt 0001b706 */
    c->pc = RC_ADDR(0x0001b75au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1B706; }

L_1B75C:
    /* 0001b75c   2  move.w D5,D0 */
    c->pc = RC_ADDR(0x0001b75cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B75E:
    /* 0001b75e   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = RC_ADDR(0x0001b75eu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1B762:
    /* 0001b762   2  unlk A5 */
    c->pc = RC_ADDR(0x0001b762u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B764:
    /* 0001b764   2  rts */
    c->pc = RC_ADDR(0x0001b764u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
