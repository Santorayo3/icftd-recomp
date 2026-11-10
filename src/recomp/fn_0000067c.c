/* fn_0000067c - 222 byte(s), 66 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000067c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000067cu): goto L_67C;
    case RC_ADDR(0x00000680u): goto L_680;
    case RC_ADDR(0x00000684u): goto L_684;
    case RC_ADDR(0x00000688u): goto L_688;
    case RC_ADDR(0x0000068cu): goto L_68C;
    case RC_ADDR(0x0000068eu): goto L_68E;
    case RC_ADDR(0x00000692u): goto L_692;
    case RC_ADDR(0x00000694u): goto L_694;
    case RC_ADDR(0x00000698u): goto L_698;
    case RC_ADDR(0x0000069cu): goto L_69C;
    case RC_ADDR(0x0000069eu): goto L_69E;
    case RC_ADDR(0x000006a0u): goto L_6A0;
    case RC_ADDR(0x000006a2u): goto L_6A2;
    case RC_ADDR(0x000006a4u): goto L_6A4;
    case RC_ADDR(0x000006a8u): goto L_6A8;
    case RC_ADDR(0x000006acu): goto L_6AC;
    case RC_ADDR(0x000006b0u): goto L_6B0;
    case RC_ADDR(0x000006b2u): goto L_6B2;
    case RC_ADDR(0x000006b6u): goto L_6B6;
    case RC_ADDR(0x000006b8u): goto L_6B8;
    case RC_ADDR(0x000006bcu): goto L_6BC;
    case RC_ADDR(0x000006c0u): goto L_6C0;
    case RC_ADDR(0x000006c2u): goto L_6C2;
    case RC_ADDR(0x000006c4u): goto L_6C4;
    case RC_ADDR(0x000006c6u): goto L_6C6;
    case RC_ADDR(0x000006cau): goto L_6CA;
    case RC_ADDR(0x000006ceu): goto L_6CE;
    case RC_ADDR(0x000006d2u): goto L_6D2;
    case RC_ADDR(0x000006d4u): goto L_6D4;
    case RC_ADDR(0x000006d8u): goto L_6D8;
    case RC_ADDR(0x000006dau): goto L_6DA;
    case RC_ADDR(0x000006deu): goto L_6DE;
    case RC_ADDR(0x000006e2u): goto L_6E2;
    case RC_ADDR(0x000006e6u): goto L_6E6;
    case RC_ADDR(0x000006eau): goto L_6EA;
    case RC_ADDR(0x000006eeu): goto L_6EE;
    case RC_ADDR(0x000006f2u): goto L_6F2;
    case RC_ADDR(0x000006f6u): goto L_6F6;
    case RC_ADDR(0x000006f8u): goto L_6F8;
    case RC_ADDR(0x000006fau): goto L_6FA;
    case RC_ADDR(0x000006fcu): goto L_6FC;
    case RC_ADDR(0x00000700u): goto L_700;
    case RC_ADDR(0x00000704u): goto L_704;
    case RC_ADDR(0x00000708u): goto L_708;
    case RC_ADDR(0x0000070cu): goto L_70C;
    case RC_ADDR(0x00000710u): goto L_710;
    case RC_ADDR(0x00000714u): goto L_714;
    case RC_ADDR(0x00000718u): goto L_718;
    case RC_ADDR(0x0000071au): goto L_71A;
    case RC_ADDR(0x0000071eu): goto L_71E;
    case RC_ADDR(0x00000722u): goto L_722;
    case RC_ADDR(0x00000726u): goto L_726;
    case RC_ADDR(0x0000072au): goto L_72A;
    case RC_ADDR(0x0000072eu): goto L_72E;
    case RC_ADDR(0x00000730u): goto L_730;
    case RC_ADDR(0x00000734u): goto L_734;
    case RC_ADDR(0x00000738u): goto L_738;
    case RC_ADDR(0x0000073cu): goto L_73C;
    case RC_ADDR(0x00000740u): goto L_740;
    case RC_ADDR(0x00000744u): goto L_744;
    case RC_ADDR(0x00000748u): goto L_748;
    case RC_ADDR(0x0000074au): goto L_74A;
    case RC_ADDR(0x0000074eu): goto L_74E;
    case RC_ADDR(0x00000750u): goto L_750;
    case RC_ADDR(0x00000754u): goto L_754;
    case RC_ADDR(0x00000756u): goto L_756;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_67C:
    /* 0000067c   4  link.w A5,#fffffff8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000067cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_680:
    /* 00000680   4  pea (fffffffe).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000680u);
    rc_push32(c, m, 0xfffffffeu);

L_684:
    /* 00000684   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000684u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_688:
    /* 00000688   4  jsr (ffff830e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000688u);
    /* vector 130 */
    rc_push32(c, m, RC_ADDR(0x0000068cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002144eu);
    return;

L_68C:
    /* 0000068c   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000068cu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_68E:
    /* 0000068e   4  move.l D0,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000068eu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_692:
    /* 00000692   2  beq 000006a4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000692u);
    if (rc_cond(c, 7)) goto L_6A4;

L_694:
    /* 00000694   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000694u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_698:
    /* 00000698   4  jsr (ffff8320,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000698u);
    /* vector 133 */
    rc_push32(c, m, RC_ADDR(0x0000069cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002149au);
    return;

L_69C:
    /* 0000069c   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000069cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_69E:
    /* 0000069e   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000069eu);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6A0:
    /* 000006a0   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006a0u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6A2:
    /* 000006a2   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006a2u);
    rc_ret(c, m);
    return;

L_6A4:
    /* 000006a4   4  pea (fffffffe).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006a4u);
    rc_push32(c, m, 0xfffffffeu);

L_6A8:
    /* 000006a8   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006a8u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6AC:
    /* 000006ac   4  jsr (ffff830e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006acu);
    /* vector 130 */
    rc_push32(c, m, RC_ADDR(0x000006b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002144eu);
    return;

L_6B0:
    /* 000006b0   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006b0u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6B2:
    /* 000006b2   4  move.l D0,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006b2u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6B6:
    /* 000006b6   2  beq 000006c6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006b6u);
    if (rc_cond(c, 7)) goto L_6C6;

L_6B8:
    /* 000006b8   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006b8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6BC:
    /* 000006bc   4  jsr (ffff8320,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006bcu);
    /* vector 133 */
    rc_push32(c, m, RC_ADDR(0x000006c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002149au);
    return;

L_6C0:
    /* 000006c0   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006c0u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6C2:
    /* 000006c2   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006c2u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6C4:
    /* 000006c4   2  bra 000006a0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006c4u);
    rc_tick();
    goto L_6A0;

L_6C6:
    /* 000006c6   4  pea (000003ee).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006c6u);
    rc_push32(c, m, 0x000003eeu);

L_6CA:
    /* 000006ca   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006cau);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6CE:
    /* 000006ce   4  jsr (ffff8290,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006ceu);
    /* vector 109 */
    rc_push32(c, m, RC_ADDR(0x000006d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020476u);
    return;

L_6D2:
    /* 000006d2   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006d2u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6D4:
    /* 000006d4   4  move.l D0,(fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006d4u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6D8:
    /* 000006d8   2  beq 000006fc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006d8u);
    if (rc_cond(c, 7)) goto L_6FC;

L_6DA:
    /* 000006da   4  pea (00000001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006dau);
    rc_push32(c, m, 0x00000001u);

L_6DE:
    /* 000006de   4  pea (0000075a) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006deu);
    rc_push32(c, m, RC_ADDR(0x0000075au));

L_6E2:
    /* 000006e2   4  move.l (fffffff8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006e2u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6E6:
    /* 000006e6   4  jsr (ffff8326,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006e6u);
    /* vector 134 */
    rc_push32(c, m, RC_ADDR(0x000006eau));
    rc_depth++;
    c->pc = RC_ADDR(0x000214aau);
    return;

L_6EA:
    /* 000006ea   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006eau);
    c->a[7] = (c->a[7] + 0xcu);

L_6EE:
    /* 000006ee   4  move.l (fffffff8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006eeu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F2:
    /* 000006f2   4  jsr (ffff8296,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006f2u);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x000006f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020490u);
    return;

L_6F6:
    /* 000006f6   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006f6u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6F8:
    /* 000006f8   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006f8u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6FA:
    /* 000006fa   2  bra 000006a0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006fau);
    rc_tick();
    goto L_6A0;

L_6FC:
    /* 000006fc   4  jsr (000007f4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000006fcu);
    rc_push32(c, m, RC_ADDR(0x00000700u));
    rc_depth++;
    c->pc = RC_ADDR(0x000007f4u);
    return;

L_700:
    /* 00000700   4  move.w #4,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000700u);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_704:
    /* 00000704   4  pea (0000005f).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000704u);
    rc_push32(c, m, 0x0000005fu);

L_708:
    /* 00000708   4  pea (0000075b) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000708u);
    rc_push32(c, m, RC_ADDR(0x0000075bu));

L_70C:
    /* 0000070c   4  jsr (0000093a) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000070cu);
    rc_push32(c, m, RC_ADDR(0x00000710u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000093au);
    return;

L_710:
    /* 00000710   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000710u);
    c->a[7] = (c->a[7] + 0xau);

L_714:
    /* 00000714   4  tst.w (c,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000714u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_718:
    /* 00000718   2  beq 00000730 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000718u);
    if (rc_cond(c, 7)) goto L_730;

L_71A:
    /* 0000071a   4  move.w #4,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000071au);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_71E:
    /* 0000071e   4  pea (00000069).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000071eu);
    rc_push32(c, m, 0x00000069u);

L_722:
    /* 00000722   4  pea (0000077f) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000722u);
    rc_push32(c, m, RC_ADDR(0x0000077fu));

L_726:
    /* 00000726   4  jsr (0000093a) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000726u);
    rc_push32(c, m, RC_ADDR(0x0000072au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000093au);
    return;

L_72A:
    /* 0000072a   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000072au);
    c->a[7] = (c->a[7] + 0xau);

L_72E:
    /* 0000072e   2  bra 0000072e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000072eu);
    goto L_72E;

L_730:
    /* 00000730   4  move.w #4,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000730u);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_734:
    /* 00000734   4  pea (00000069).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000734u);
    rc_push32(c, m, 0x00000069u);

L_738:
    /* 00000738   4  pea (00000797) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000738u);
    rc_push32(c, m, RC_ADDR(0x00000797u));

L_73C:
    /* 0000073c   4  jsr (0000093a) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000073cu);
    rc_push32(c, m, RC_ADDR(0x00000740u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000093au);
    return;

L_740:
    /* 00000740   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000740u);
    c->a[7] = (c->a[7] + 0xau);

L_744:
    /* 00000744   4  tst.w (ffffb02e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000744u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_748:
    /* 00000748   2  bne 00000750 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000748u);
    if (rc_cond(c, 6)) goto L_750;

L_74A:
    /* 0000074a   4  jsr (ffff816a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000074au);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x0000074eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_74E:
    /* 0000074e   2  bra 00000744 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000074eu);
    rc_tick();
    goto L_744;

L_750:
    /* 00000750   4  jsr (000008d6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000750u);
    rc_push32(c, m, RC_ADDR(0x00000754u));
    rc_depth++;
    c->pc = RC_ADDR(0x000008d6u);
    return;

L_754:
    /* 00000754   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000754u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_756:
    /* 00000756   4  bra 000006a0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000756u);
    rc_tick();
    goto L_6A0;

}
