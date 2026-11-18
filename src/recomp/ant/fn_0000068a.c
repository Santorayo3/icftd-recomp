/* fn_0000068a - 468 byte(s), 131 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000068a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000068au): goto L_68A;
    case RC_ADDR(0x0000068eu): goto L_68E;
    case RC_ADDR(0x00000694u): goto L_694;
    case RC_ADDR(0x00000698u): goto L_698;
    case RC_ADDR(0x0000069au): goto L_69A;
    case RC_ADDR(0x0000069eu): goto L_69E;
    case RC_ADDR(0x000006a2u): goto L_6A2;
    case RC_ADDR(0x000006a8u): goto L_6A8;
    case RC_ADDR(0x000006aau): goto L_6AA;
    case RC_ADDR(0x000006acu): goto L_6AC;
    case RC_ADDR(0x000006b0u): goto L_6B0;
    case RC_ADDR(0x000006b4u): goto L_6B4;
    case RC_ADDR(0x000006b8u): goto L_6B8;
    case RC_ADDR(0x000006bau): goto L_6BA;
    case RC_ADDR(0x000006bcu): goto L_6BC;
    case RC_ADDR(0x000006c0u): goto L_6C0;
    case RC_ADDR(0x000006c4u): goto L_6C4;
    case RC_ADDR(0x000006c6u): goto L_6C6;
    case RC_ADDR(0x000006cau): goto L_6CA;
    case RC_ADDR(0x000006ceu): goto L_6CE;
    case RC_ADDR(0x000006d4u): goto L_6D4;
    case RC_ADDR(0x000006d8u): goto L_6D8;
    case RC_ADDR(0x000006dau): goto L_6DA;
    case RC_ADDR(0x000006dcu): goto L_6DC;
    case RC_ADDR(0x000006e0u): goto L_6E0;
    case RC_ADDR(0x000006e4u): goto L_6E4;
    case RC_ADDR(0x000006e8u): goto L_6E8;
    case RC_ADDR(0x000006ecu): goto L_6EC;
    case RC_ADDR(0x000006f0u): goto L_6F0;
    case RC_ADDR(0x000006f4u): goto L_6F4;
    case RC_ADDR(0x000006f8u): goto L_6F8;
    case RC_ADDR(0x000006fau): goto L_6FA;
    case RC_ADDR(0x000006feu): goto L_6FE;
    case RC_ADDR(0x00000700u): goto L_700;
    case RC_ADDR(0x00000704u): goto L_704;
    case RC_ADDR(0x00000708u): goto L_708;
    case RC_ADDR(0x0000070au): goto L_70A;
    case RC_ADDR(0x0000070cu): goto L_70C;
    case RC_ADDR(0x00000710u): goto L_710;
    case RC_ADDR(0x00000712u): goto L_712;
    case RC_ADDR(0x00000716u): goto L_716;
    case RC_ADDR(0x0000071au): goto L_71A;
    case RC_ADDR(0x0000071eu): goto L_71E;
    case RC_ADDR(0x00000720u): goto L_720;
    case RC_ADDR(0x00000724u): goto L_724;
    case RC_ADDR(0x00000728u): goto L_728;
    case RC_ADDR(0x0000072cu): goto L_72C;
    case RC_ADDR(0x0000072eu): goto L_72E;
    case RC_ADDR(0x00000730u): goto L_730;
    case RC_ADDR(0x00000738u): goto L_738;
    case RC_ADDR(0x0000073cu): goto L_73C;
    case RC_ADDR(0x00000740u): goto L_740;
    case RC_ADDR(0x00000744u): goto L_744;
    case RC_ADDR(0x00000748u): goto L_748;
    case RC_ADDR(0x0000074cu): goto L_74C;
    case RC_ADDR(0x00000750u): goto L_750;
    case RC_ADDR(0x00000756u): goto L_756;
    case RC_ADDR(0x0000075cu): goto L_75C;
    case RC_ADDR(0x0000075eu): goto L_75E;
    case RC_ADDR(0x00000764u): goto L_764;
    case RC_ADDR(0x00000766u): goto L_766;
    case RC_ADDR(0x0000076au): goto L_76A;
    case RC_ADDR(0x0000076eu): goto L_76E;
    case RC_ADDR(0x00000770u): goto L_770;
    case RC_ADDR(0x00000774u): goto L_774;
    case RC_ADDR(0x00000776u): goto L_776;
    case RC_ADDR(0x0000077au): goto L_77A;
    case RC_ADDR(0x0000077cu): goto L_77C;
    case RC_ADDR(0x00000780u): goto L_780;
    case RC_ADDR(0x00000782u): goto L_782;
    case RC_ADDR(0x00000786u): goto L_786;
    case RC_ADDR(0x0000078au): goto L_78A;
    case RC_ADDR(0x0000078eu): goto L_78E;
    case RC_ADDR(0x00000792u): goto L_792;
    case RC_ADDR(0x00000796u): goto L_796;
    case RC_ADDR(0x0000079au): goto L_79A;
    case RC_ADDR(0x0000079eu): goto L_79E;
    case RC_ADDR(0x000007a2u): goto L_7A2;
    case RC_ADDR(0x000007a6u): goto L_7A6;
    case RC_ADDR(0x000007a8u): goto L_7A8;
    case RC_ADDR(0x000007acu): goto L_7AC;
    case RC_ADDR(0x000007b0u): goto L_7B0;
    case RC_ADDR(0x000007b4u): goto L_7B4;
    case RC_ADDR(0x000007b8u): goto L_7B8;
    case RC_ADDR(0x000007bcu): goto L_7BC;
    case RC_ADDR(0x000007c0u): goto L_7C0;
    case RC_ADDR(0x000007c2u): goto L_7C2;
    case RC_ADDR(0x000007c6u): goto L_7C6;
    case RC_ADDR(0x000007cau): goto L_7CA;
    case RC_ADDR(0x000007ceu): goto L_7CE;
    case RC_ADDR(0x000007d2u): goto L_7D2;
    case RC_ADDR(0x000007d6u): goto L_7D6;
    case RC_ADDR(0x000007dcu): goto L_7DC;
    case RC_ADDR(0x000007e0u): goto L_7E0;
    case RC_ADDR(0x000007e2u): goto L_7E2;
    case RC_ADDR(0x000007e6u): goto L_7E6;
    case RC_ADDR(0x000007eau): goto L_7EA;
    case RC_ADDR(0x000007eeu): goto L_7EE;
    case RC_ADDR(0x000007f0u): goto L_7F0;
    case RC_ADDR(0x000007f4u): goto L_7F4;
    case RC_ADDR(0x000007f6u): goto L_7F6;
    case RC_ADDR(0x000007fau): goto L_7FA;
    case RC_ADDR(0x000007feu): goto L_7FE;
    case RC_ADDR(0x00000800u): goto L_800;
    case RC_ADDR(0x00000802u): goto L_802;
    case RC_ADDR(0x00000806u): goto L_806;
    case RC_ADDR(0x00000808u): goto L_808;
    case RC_ADDR(0x0000080cu): goto L_80C;
    case RC_ADDR(0x00000810u): goto L_810;
    case RC_ADDR(0x00000814u): goto L_814;
    case RC_ADDR(0x00000816u): goto L_816;
    case RC_ADDR(0x0000081au): goto L_81A;
    case RC_ADDR(0x0000081eu): goto L_81E;
    case RC_ADDR(0x00000822u): goto L_822;
    case RC_ADDR(0x00000826u): goto L_826;
    case RC_ADDR(0x0000082au): goto L_82A;
    case RC_ADDR(0x0000082eu): goto L_82E;
    case RC_ADDR(0x00000832u): goto L_832;
    case RC_ADDR(0x00000834u): goto L_834;
    case RC_ADDR(0x00000838u): goto L_838;
    case RC_ADDR(0x0000083au): goto L_83A;
    case RC_ADDR(0x0000083eu): goto L_83E;
    case RC_ADDR(0x00000840u): goto L_840;
    case RC_ADDR(0x00000844u): goto L_844;
    case RC_ADDR(0x00000846u): goto L_846;
    case RC_ADDR(0x0000084au): goto L_84A;
    case RC_ADDR(0x0000084cu): goto L_84C;
    case RC_ADDR(0x00000850u): goto L_850;
    case RC_ADDR(0x00000854u): goto L_854;
    case RC_ADDR(0x00000858u): goto L_858;
    case RC_ADDR(0x0000085au): goto L_85A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_68A:
    /* 0000068a   4  link.w A5,#fffffff0 */
    c->pc = RC_ADDR(0x0000068au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x10u;

L_68E:
    /* 0000068e   6  move.w #1,(ffff83ea,A4) */
    c->pc = RC_ADDR(0x0000068eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_694:
    /* 00000694   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00000694u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_698:
    /* 00000698   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000698u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_69A:
    /* 0000069a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000069au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_69E:
    /* 0000069e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000069eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6A2:
    /* 000006a2   6  cmpi.b #3a,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000006a2u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_B, t0, 0x0000003au);

L_6A8:
    /* 000006a8   2  beq 000006da */
    c->pc = RC_ADDR(0x000006a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6DA;

L_6AA:
    /* 000006aa   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000006aau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6AC:
    /* 000006ac   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000006acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6B0:
    /* 000006b0   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000006b0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6B4:
    /* 000006b4   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000006b4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_6B8:
    /* 000006b8   2  beq 000006da */
    c->pc = RC_ADDR(0x000006b8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6DA;

L_6BA:
    /* 000006ba   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000006bau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6BC:
    /* 000006bc   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000006bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6C0:
    /* 000006c0   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000006c0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6C4:
    /* 000006c4   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x000006c4u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_6C6:
    /* 000006c6   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x000006c6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6CA:
    /* 000006ca   4  lea (7ca,A4),A1 */
    c->pc = RC_ADDR(0x000006cau);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x7cau);

L_6CE:
    /* 000006ce   6  move.b (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x000006ceu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr8(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_6D4:
    /* 000006d4   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000006d4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6D8:
    /* 000006d8   2  bra 00000698 */
    c->pc = RC_ADDR(0x000006d8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_698;

L_6DA:
    /* 000006da   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000006dau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6DC:
    /* 000006dc   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000006dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6E0:
    /* 000006e0   4  lea (7ca,A4),A0 */
    c->pc = RC_ADDR(0x000006e0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x7cau);

L_6E4:
    /* 000006e4   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000006e4u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_6E8:
    /* 000006e8   4  clr.l (7c6,A4) */
    c->pc = RC_ADDR(0x000006e8u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x7c6u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6EC:
    /* 000006ec   4  pea (fffffffe).l */
    c->pc = RC_ADDR(0x000006ecu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xfffffffeu);

L_6F0:
    /* 000006f0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000006f0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F4:
    /* 000006f4   4  jsr (ffff8332,A4) */
    c->pc = RC_ADDR(0x000006f4u);
    rc_step(c, m, 18);
    /* vector 136 */
    rc_push32(c, m, RC_ADDR(0x000006f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e28u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234ecu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000234f0u);
    return;

L_6F8:
    /* 000006f8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000006f8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6FA:
    /* 000006fa   4  move.l D0,(7c6,A4) */
    c->pc = RC_ADDR(0x000006fau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x7c6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6FE:
    /* 000006fe   2  beq 00000730 */
    c->pc = RC_ADDR(0x000006feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_730;

L_700:
    /* 00000700   4  move.l (7c6,A4),-(A7) */
    c->pc = RC_ADDR(0x00000700u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x7c6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_704:
    /* 00000704   4  jsr (ffff831a,A4) */
    c->pc = RC_ADDR(0x00000704u);
    rc_step(c, m, 18);
    /* vector 132 */
    rc_push32(c, m, RC_ADDR(0x00000708u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e10u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234aeu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000234b2u);
    return;

L_708:
    /* 00000708   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000708u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_70A:
    /* 0000070a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000070au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_70C:
    /* 0000070c   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0000070cu);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x00000710u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e3au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023538u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002353cu);
    return;

L_710:
    /* 00000710   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000710u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_712:
    /* 00000712   4  move.w (10,A5),-(A7) */
    c->pc = RC_ADDR(0x00000712u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_716:
    /* 00000716   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00000716u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_71A:
    /* 0000071a   4  jsr (00000a24) */
    c->pc = RC_ADDR(0x0000071au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000071eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000a24u);
    return;

L_71E:
    /* 0000071e   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000071eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_720:
    /* 00000720   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00000720u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_724:
    /* 00000724   4  clr.w (ffff83ea,A4) */
    c->pc = RC_ADDR(0x00000724u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_728:
    /* 00000728   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00000728u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_72C:
    /* 0000072c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000072cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_72E:
    /* 0000072e   2  rts */
    c->pc = RC_ADDR(0x0000072eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_730:
    /* 00000730   8  move.l #12d687,(7f2,A4) */
    c->pc = RC_ADDR(0x00000730u);
    rc_step(c, m, 24);
    t0 = 0x0012d687u;
    rc_wr32(c, m, (c->a[4] + 0x7f2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_738:
    /* 00000738   4  jsr (00000b9e) */
    c->pc = RC_ADDR(0x00000738u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000073cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000b9eu);
    return;

L_73C:
    /* 0000073c   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x0000073cu);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_740:
    /* 00000740   4  pea (0000004b).l */
    c->pc = RC_ADDR(0x00000740u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000004bu);

L_744:
    /* 00000744   4  pea (00000862) */
    c->pc = RC_ADDR(0x00000744u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00000862u));

L_748:
    /* 00000748   4  jsr (00000ce4) */
    c->pc = RC_ADDR(0x00000748u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000074cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_74C:
    /* 0000074c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000074cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_750:
    /* 00000750   6  move.b (7d0,A4),(fffffffb,A5) */
    c->pc = RC_ADDR(0x00000750u);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[4] + 0x7d0u));
    rc_wr8(c, m, (c->a[5] - 0x5u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_756:
    /* 00000756   6  cmpi.b #30,(fffffffb,A5) */
    c->pc = RC_ADDR(0x00000756u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_cmp(c, RC_B, t0, 0x00000030u);

L_75C:
    /* 0000075c   2  ble 000007a8 */
    c->pc = RC_ADDR(0x0000075cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_7A8;

L_75E:
    /* 0000075e   6  cmpi.b #34,(fffffffb,A5) */
    c->pc = RC_ADDR(0x0000075eu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_cmp(c, RC_B, t0, 0x00000034u);

L_764:
    /* 00000764   2  bge 000007a8 */
    c->pc = RC_ADDR(0x00000764u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_7A8;

L_766:
    /* 00000766   4  pea (7ca,A4) */
    c->pc = RC_ADDR(0x00000766u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x7cau));

L_76A:
    /* 0000076a   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x0000076au);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x0000076eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_76E:
    /* 0000076e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000076eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_770:
    /* 00000770   4  cmp.w #6,D0 */
    c->pc = RC_ADDR(0x00000770u);
    rc_step(c, m, 8);
    t0 = 0x00000006u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_774:
    /* 00000774   2  ble 000007a8 */
    c->pc = RC_ADDR(0x00000774u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_7A8;

L_776:
    /* 00000776   4  move.b (fffffffb,A5),D0 */
    c->pc = RC_ADDR(0x00000776u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_77A:
    /* 0000077a   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000077au);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_77C:
    /* 0000077c   4  sub.w #30,D0 */
    c->pc = RC_ADDR(0x0000077cu);
    rc_step(c, m, 10);
    t0 = 0x00000030u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_780:
    /* 00000780   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00000780u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_782:
    /* 00000782   4  pea (00000876) */
    c->pc = RC_ADDR(0x00000782u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00000876u));

L_786:
    /* 00000786   4  pea (fffffff1,A5) */
    c->pc = RC_ADDR(0x00000786u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0xfu));

L_78A:
    /* 0000078a   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x0000078au);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x0000078eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_78E:
    /* 0000078e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000078eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_792:
    /* 00000792   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00000792u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_796:
    /* 00000796   4  pea (0000005f).l */
    c->pc = RC_ADDR(0x00000796u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000005fu);

L_79A:
    /* 0000079a   4  pea (fffffff1,A5) */
    c->pc = RC_ADDR(0x0000079au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0xfu));

L_79E:
    /* 0000079e   4  jsr (00000ce4) */
    c->pc = RC_ADDR(0x0000079eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000007a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_7A2:
    /* 000007a2   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000007a2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_7A6:
    /* 000007a6   2  bra 000007bc */
    c->pc = RC_ADDR(0x000007a6u);
    rc_step(c, m, 10);
    goto L_7BC;

L_7A8:
    /* 000007a8   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x000007a8u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7AC:
    /* 000007ac   4  pea (0000005f).l */
    c->pc = RC_ADDR(0x000007acu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000005fu);

L_7B0:
    /* 000007b0   4  pea (7ca,A4) */
    c->pc = RC_ADDR(0x000007b0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x7cau));

L_7B4:
    /* 000007b4   4  jsr (00000ce4) */
    c->pc = RC_ADDR(0x000007b4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000007b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_7B8:
    /* 000007b8   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000007b8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_7BC:
    /* 000007bc   4  tst.w (10,A5) */
    c->pc = RC_ADDR(0x000007bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_set_nzvc(c, t0, RC_W);

L_7C0:
    /* 000007c0   2  bne 000007d6 */
    c->pc = RC_ADDR(0x000007c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7D6;

L_7C2:
    /* 000007c2   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x000007c2u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7C6:
    /* 000007c6   4  pea (00000073).l */
    c->pc = RC_ADDR(0x000007c6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000073u);

L_7CA:
    /* 000007ca   4  pea (0000087e) */
    c->pc = RC_ADDR(0x000007cau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000087eu));

L_7CE:
    /* 000007ce   4  jsr (00000ce4) */
    c->pc = RC_ADDR(0x000007ceu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000007d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_7D2:
    /* 000007d2   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000007d2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_7D6:
    /* 000007d6   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000007d6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7DC:
    /* 000007dc   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x000007dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_7E0:
    /* 000007e0   2  beq 00000840 */
    c->pc = RC_ADDR(0x000007e0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_840;

L_7E2:
    /* 000007e2   4  pea (fffffffe).l */
    c->pc = RC_ADDR(0x000007e2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xfffffffeu);

L_7E6:
    /* 000007e6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000007e6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7EA:
    /* 000007ea   4  jsr (ffff8332,A4) */
    c->pc = RC_ADDR(0x000007eau);
    rc_step(c, m, 18);
    /* vector 136 */
    rc_push32(c, m, RC_ADDR(0x000007eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e28u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234ecu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000234f0u);
    return;

L_7EE:
    /* 000007ee   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000007eeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7F0:
    /* 000007f0   4  move.l D0,(7c6,A4) */
    c->pc = RC_ADDR(0x000007f0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x7c6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7F4:
    /* 000007f4   2  beq 0000082a */
    c->pc = RC_ADDR(0x000007f4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_82A;

L_7F6:
    /* 000007f6   4  move.l (7c6,A4),-(A7) */
    c->pc = RC_ADDR(0x000007f6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x7c6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7FA:
    /* 000007fa   4  jsr (ffff831a,A4) */
    c->pc = RC_ADDR(0x000007fau);
    rc_step(c, m, 18);
    /* vector 132 */
    rc_push32(c, m, RC_ADDR(0x000007feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e10u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234aeu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000234b2u);
    return;

L_7FE:
    /* 000007fe   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000007feu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_800:
    /* 00000800   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00000800u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_802:
    /* 00000802   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00000802u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x00000806u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e3au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023538u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002353cu);
    return;

L_806:
    /* 00000806   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000806u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_808:
    /* 00000808   4  move.w (10,A5),-(A7) */
    c->pc = RC_ADDR(0x00000808u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_80C:
    /* 0000080c   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000080cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_810:
    /* 00000810   4  jsr (00000a24) */
    c->pc = RC_ADDR(0x00000810u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000814u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000a24u);
    return;

L_814:
    /* 00000814   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00000814u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_816:
    /* 00000816   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00000816u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_81A:
    /* 0000081a   4  jsr (00000c80) */
    c->pc = RC_ADDR(0x0000081au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000081eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000c80u);
    return;

L_81E:
    /* 0000081e   4  clr.w (ffff83ea,A4) */
    c->pc = RC_ADDR(0x0000081eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_822:
    /* 00000822   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00000822u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_826:
    /* 00000826   4  bra 0000072c */
    c->pc = RC_ADDR(0x00000826u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_72C;

L_82A:
    /* 0000082a   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0000082au);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000082eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_82E:
    /* 0000082e   4  tst.w (ffffb252,A4) */
    c->pc = RC_ADDR(0x0000082eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4daeu));
    rc_set_nzvc(c, t0, RC_W);

L_832:
    /* 00000832   2  beq 0000083e */
    c->pc = RC_ADDR(0x00000832u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_83E;

L_834:
    /* 00000834   4  tst.w (10,A5) */
    c->pc = RC_ADDR(0x00000834u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_set_nzvc(c, t0, RC_W);

L_838:
    /* 00000838   2  bne 0000083e */
    c->pc = RC_ADDR(0x00000838u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_83E;

L_83A:
    /* 0000083a   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000083au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_83E:
    /* 0000083e   2  bra 000007dc */
    c->pc = RC_ADDR(0x0000083eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_7DC;

L_840:
    /* 00000840   4  tst.w (ffffb252,A4) */
    c->pc = RC_ADDR(0x00000840u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4daeu));
    rc_set_nzvc(c, t0, RC_W);

L_844:
    /* 00000844   2  beq 0000084c */
    c->pc = RC_ADDR(0x00000844u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_84C;

L_846:
    /* 00000846   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00000846u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000084au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_84A:
    /* 0000084a   2  bra 00000840 */
    c->pc = RC_ADDR(0x0000084au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_840;

L_84C:
    /* 0000084c   4  jsr (00000c80) */
    c->pc = RC_ADDR(0x0000084cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000850u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000c80u);
    return;

L_850:
    /* 00000850   4  clr.w (ffff83ea,A4) */
    c->pc = RC_ADDR(0x00000850u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_854:
    /* 00000854   4  clr.w (ffff83ec,A4) */
    c->pc = RC_ADDR(0x00000854u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c14u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_858:
    /* 00000858   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000858u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_85A:
    /* 0000085a   4  bra 0000072c */
    c->pc = RC_ADDR(0x0000085au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_72C;

}
