/* fn_0001f6cc - 138 byte(s), 45 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f6cc(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f6ccu): goto L_1F6CC;
    case RC_ADDR(0x0001f6d0u): goto L_1F6D0;
    case RC_ADDR(0x0001f6d2u): goto L_1F6D2;
    case RC_ADDR(0x0001f6d6u): goto L_1F6D6;
    case RC_ADDR(0x0001f6dau): goto L_1F6DA;
    case RC_ADDR(0x0001f6deu): goto L_1F6DE;
    case RC_ADDR(0x0001f6e0u): goto L_1F6E0;
    case RC_ADDR(0x0001f6e2u): goto L_1F6E2;
    case RC_ADDR(0x0001f6e4u): goto L_1F6E4;
    case RC_ADDR(0x0001f6e6u): goto L_1F6E6;
    case RC_ADDR(0x0001f6e8u): goto L_1F6E8;
    case RC_ADDR(0x0001f6eau): goto L_1F6EA;
    case RC_ADDR(0x0001f6eeu): goto L_1F6EE;
    case RC_ADDR(0x0001f6f0u): goto L_1F6F0;
    case RC_ADDR(0x0001f6f2u): goto L_1F6F2;
    case RC_ADDR(0x0001f6f4u): goto L_1F6F4;
    case RC_ADDR(0x0001f6fau): goto L_1F6FA;
    case RC_ADDR(0x0001f6feu): goto L_1F6FE;
    case RC_ADDR(0x0001f702u): goto L_1F702;
    case RC_ADDR(0x0001f704u): goto L_1F704;
    case RC_ADDR(0x0001f708u): goto L_1F708;
    case RC_ADDR(0x0001f70cu): goto L_1F70C;
    case RC_ADDR(0x0001f70eu): goto L_1F70E;
    case RC_ADDR(0x0001f710u): goto L_1F710;
    case RC_ADDR(0x0001f712u): goto L_1F712;
    case RC_ADDR(0x0001f716u): goto L_1F716;
    case RC_ADDR(0x0001f71au): goto L_1F71A;
    case RC_ADDR(0x0001f71eu): goto L_1F71E;
    case RC_ADDR(0x0001f720u): goto L_1F720;
    case RC_ADDR(0x0001f724u): goto L_1F724;
    case RC_ADDR(0x0001f728u): goto L_1F728;
    case RC_ADDR(0x0001f72au): goto L_1F72A;
    case RC_ADDR(0x0001f72eu): goto L_1F72E;
    case RC_ADDR(0x0001f730u): goto L_1F730;
    case RC_ADDR(0x0001f732u): goto L_1F732;
    case RC_ADDR(0x0001f734u): goto L_1F734;
    case RC_ADDR(0x0001f736u): goto L_1F736;
    case RC_ADDR(0x0001f73cu): goto L_1F73C;
    case RC_ADDR(0x0001f742u): goto L_1F742;
    case RC_ADDR(0x0001f744u): goto L_1F744;
    case RC_ADDR(0x0001f746u): goto L_1F746;
    case RC_ADDR(0x0001f74au): goto L_1F74A;
    case RC_ADDR(0x0001f74cu): goto L_1F74C;
    case RC_ADDR(0x0001f752u): goto L_1F752;
    case RC_ADDR(0x0001f754u): goto L_1F754;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F6CC:
    /* 0001f6cc   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x0001f6ccu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_1F6D0:
    /* 0001f6d0   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001f6d0u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F6D2:
    /* 0001f6d2   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001f6d2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1F6D6:
    /* 0001f6d6   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0001f6d6u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F6DA:
    /* 0001f6da   4  clr.w (ffffd2a0,A4) */
    c->pc = RC_ADDR(0x0001f6dau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2d60u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F6DE:
    /* 0001f6de   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001f6deu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F6E0:
    /* 0001f6e0   2  bne 0001f6ea */
    c->pc = RC_ADDR(0x0001f6e0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F6EA;

L_1F6E2:
    /* 0001f6e2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f6e2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F6E4:
    /* 0001f6e4   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x0001f6e4u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1F6E6:
    /* 0001f6e6   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f6e6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F6E8:
    /* 0001f6e8   2  rts */
    c->pc = RC_ADDR(0x0001f6e8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1F6EA:
    /* 0001f6ea   4  tst.l (c,A2) */
    c->pc = RC_ADDR(0x0001f6eau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_1F6EE:
    /* 0001f6ee   2  beq 0001f6f4 */
    c->pc = RC_ADDR(0x0001f6eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F6F4;

L_1F6F0:
    /* 0001f6f0   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001f6f0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F6F2:
    /* 0001f6f2   2  bra 0001f6e4 */
    c->pc = RC_ADDR(0x0001f6f2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F6E4;

L_1F6F4:
    /* 0001f6f4   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0001f6f4u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_1F6FA:
    /* 0001f6fa   4  pea (0000003c).l */
    c->pc = RC_ADDR(0x0001f6fau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000003cu);

L_1F6FE:
    /* 0001f6fe   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0001f6feu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0001f702u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1F702:
    /* 0001f702   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f702u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F704:
    /* 0001f704   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001f704u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F708:
    /* 0001f708   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001f708u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_1F70C:
    /* 0001f70c   2  bne 0001f712 */
    c->pc = RC_ADDR(0x0001f70cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F712;

L_1F70E:
    /* 0001f70e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f70eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F710:
    /* 0001f710   2  bra 0001f6e4 */
    c->pc = RC_ADDR(0x0001f710u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F6E4;

L_1F712:
    /* 0001f712   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f712u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F716:
    /* 0001f716   4  move.l (4,A2),-(A7) */
    c->pc = RC_ADDR(0x0001f716u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F71A:
    /* 0001f71a   4  jsr (00022106) */
    c->pc = RC_ADDR(0x0001f71au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f71eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00022106u);
    return;

L_1F71E:
    /* 0001f71e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f71eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F720:
    /* 0001f720   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001f720u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F724:
    /* 0001f724   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x0001f724u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_1F728:
    /* 0001f728   2  bne 0001f736 */
    c->pc = RC_ADDR(0x0001f728u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F736;

L_1F72A:
    /* 0001f72a   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f72au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F72E:
    /* 0001f72e   2  bsr 0001f756 */
    c->pc = RC_ADDR(0x0001f72eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f730u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f756u);
    return;

L_1F730:
    /* 0001f730   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f730u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F732:
    /* 0001f732   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f732u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F734:
    /* 0001f734   2  bra 0001f6e4 */
    c->pc = RC_ADDR(0x0001f734u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F6E4;

L_1F736:
    /* 0001f736   6  move.l (fffffffc,A5),(c,A2) */
    c->pc = RC_ADDR(0x0001f736u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_wr32(c, m, (c->a[2] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F73C:
    /* 0001f73c   6  btst #2,(b,A2) */
    c->pc = RC_ADDR(0x0001f73cu);
    rc_step(c, m, 16);
    t3 = (c->a[2] + 0xbu);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1F742:
    /* 0001f742   2  bne 0001f74c */
    c->pc = RC_ADDR(0x0001f742u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F74C;

L_1F744:
    /* 0001f744   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001f744u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F746:
    /* 0001f746   4  jsr (0001f658) */
    c->pc = RC_ADDR(0x0001f746u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f74au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f658u);
    return;

L_1F74A:
    /* 0001f74a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f74au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F74C:
    /* 0001f74c   6  move.w #1,(ffffd2a0,A4) */
    c->pc = RC_ADDR(0x0001f74cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2d60u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F752:
    /* 0001f752   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001f752u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F754:
    /* 0001f754   2  bra 0001f6e4 */
    c->pc = RC_ADDR(0x0001f754u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F6E4;

}
