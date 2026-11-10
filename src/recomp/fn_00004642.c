/* fn_00004642 - 278 byte(s), 75 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00004642(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00004642u): goto L_4642;
    case RC_ADDR(0x00004646u): goto L_4646;
    case RC_ADDR(0x0000464au): goto L_464A;
    case RC_ADDR(0x00004650u): goto L_4650;
    case RC_ADDR(0x00004654u): goto L_4654;
    case RC_ADDR(0x00004656u): goto L_4656;
    case RC_ADDR(0x00004658u): goto L_4658;
    case RC_ADDR(0x0000465cu): goto L_465C;
    case RC_ADDR(0x00004662u): goto L_4662;
    case RC_ADDR(0x00004668u): goto L_4668;
    case RC_ADDR(0x00004670u): goto L_4670;
    case RC_ADDR(0x00004678u): goto L_4678;
    case RC_ADDR(0x0000467eu): goto L_467E;
    case RC_ADDR(0x00004680u): goto L_4680;
    case RC_ADDR(0x00004684u): goto L_4684;
    case RC_ADDR(0x00004688u): goto L_4688;
    case RC_ADDR(0x0000468cu): goto L_468C;
    case RC_ADDR(0x0000468eu): goto L_468E;
    case RC_ADDR(0x00004694u): goto L_4694;
    case RC_ADDR(0x00004698u): goto L_4698;
    case RC_ADDR(0x0000469cu): goto L_469C;
    case RC_ADDR(0x000046a0u): goto L_46A0;
    case RC_ADDR(0x000046a4u): goto L_46A4;
    case RC_ADDR(0x000046a8u): goto L_46A8;
    case RC_ADDR(0x000046aau): goto L_46AA;
    case RC_ADDR(0x000046aeu): goto L_46AE;
    case RC_ADDR(0x000046b2u): goto L_46B2;
    case RC_ADDR(0x000046b6u): goto L_46B6;
    case RC_ADDR(0x000046b8u): goto L_46B8;
    case RC_ADDR(0x000046bau): goto L_46BA;
    case RC_ADDR(0x000046beu): goto L_46BE;
    case RC_ADDR(0x000046c2u): goto L_46C2;
    case RC_ADDR(0x000046c4u): goto L_46C4;
    case RC_ADDR(0x000046c6u): goto L_46C6;
    case RC_ADDR(0x000046cau): goto L_46CA;
    case RC_ADDR(0x000046ceu): goto L_46CE;
    case RC_ADDR(0x000046d2u): goto L_46D2;
    case RC_ADDR(0x000046d4u): goto L_46D4;
    case RC_ADDR(0x000046d8u): goto L_46D8;
    case RC_ADDR(0x000046dcu): goto L_46DC;
    case RC_ADDR(0x000046deu): goto L_46DE;
    case RC_ADDR(0x000046e2u): goto L_46E2;
    case RC_ADDR(0x000046e6u): goto L_46E6;
    case RC_ADDR(0x000046e8u): goto L_46E8;
    case RC_ADDR(0x000046eau): goto L_46EA;
    case RC_ADDR(0x000046eeu): goto L_46EE;
    case RC_ADDR(0x000046f2u): goto L_46F2;
    case RC_ADDR(0x000046f4u): goto L_46F4;
    case RC_ADDR(0x000046f8u): goto L_46F8;
    case RC_ADDR(0x000046fcu): goto L_46FC;
    case RC_ADDR(0x000046feu): goto L_46FE;
    case RC_ADDR(0x00004700u): goto L_4700;
    case RC_ADDR(0x00004704u): goto L_4704;
    case RC_ADDR(0x0000470au): goto L_470A;
    case RC_ADDR(0x0000470cu): goto L_470C;
    case RC_ADDR(0x00004710u): goto L_4710;
    case RC_ADDR(0x00004714u): goto L_4714;
    case RC_ADDR(0x00004716u): goto L_4716;
    case RC_ADDR(0x00004718u): goto L_4718;
    case RC_ADDR(0x0000471cu): goto L_471C;
    case RC_ADDR(0x00004720u): goto L_4720;
    case RC_ADDR(0x00004724u): goto L_4724;
    case RC_ADDR(0x00004728u): goto L_4728;
    case RC_ADDR(0x0000472cu): goto L_472C;
    case RC_ADDR(0x00004730u): goto L_4730;
    case RC_ADDR(0x00004734u): goto L_4734;
    case RC_ADDR(0x00004738u): goto L_4738;
    case RC_ADDR(0x0000473cu): goto L_473C;
    case RC_ADDR(0x00004740u): goto L_4740;
    case RC_ADDR(0x00004744u): goto L_4744;
    case RC_ADDR(0x00004748u): goto L_4748;
    case RC_ADDR(0x0000474cu): goto L_474C;
    case RC_ADDR(0x00004752u): goto L_4752;
    case RC_ADDR(0x00004754u): goto L_4754;
    case RC_ADDR(0x00004756u): goto L_4756;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4642:
    /* 00004642   4  link.w A5,#ffffffe8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004642u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x18u;

L_4646:
    /* 00004646   4  movea.l (ffffcb14,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004646u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[0] = t0;

L_464A:
    /* 0000464a   6  move.l (ffffcbbc,A4),(4,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000464au);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4650:
    /* 00004650   4  move.w (fffff1d0,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004650u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xe30u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4654:
    /* 00004654   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004654u);
    rc_ext_l(c, 0);

L_4656:
    /* 00004656   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004656u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_4658:
    /* 00004658   4  lea (ffff8540,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004658u);
    c->a[0] = (c->a[4] - 0x7ac0u);

L_465C:
    /* 0000465c   6  move.w (0,A0,D0.w),(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000465cu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4662:
    /* 00004662   6  move.w #e,(fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004662u);
    t0 = 0x0000000eu;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4668:
    /* 00004668   8  move.l #ba,(fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004668u);
    t0 = 0x000000bau;
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4670:
    /* 00004670   8  move.l #c3,(fffffff2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004670u);
    t0 = 0x000000c3u;
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4678:
    /* 00004678   6  cmpi.w #4,(fffff1d0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004678u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xe30u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_467E:
    /* 0000467e   2  bne 0000469c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000467eu);
    if (rc_cond(c, 6)) goto L_469C;

L_4680:
    /* 00004680   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004680u);
    rc_push32(c, m, 0x00000002u);

L_4684:
    /* 00004684   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004684u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4688:
    /* 00004688   4  jsr (ffff8392,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004688u);
    /* vector 152 */
    rc_push32(c, m, RC_ADDR(0x0000468cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000218fau);
    return;

L_468C:
    /* 0000468c   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000468cu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_468E:
    /* 0000468e   6  move.w #10,(fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000468eu);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4694:
    /* 00004694   4  addq.l #1,(fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004694u);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_4698:
    /* 00004698   4  subq.l #1,(fffffff2,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004698u);
    t3 = (c->a[5] - 0xeu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_469C:
    /* 0000469c   4  pea (0000000e).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000469cu);
    rc_push32(c, m, 0x0000000eu);

L_46A0:
    /* 000046a0   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046a0u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_46A4:
    /* 000046a4   4  jsr (ffff838c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046a4u);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x000046a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000218eau);
    return;

L_46A8:
    /* 000046a8   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046a8u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_46AA:
    /* 000046aa   4  move.l (fffffff2,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046aau);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_46AE:
    /* 000046ae   4  move.w (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046aeu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_46B2:
    /* 000046b2   4  add.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046b2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_46B6:
    /* 000046b6   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046b6u);
    rc_ext_l(c, 0);

L_46B8:
    /* 000046b8   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046b8u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_46BA:
    /* 000046ba   4  move.l (fffffff6,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046bau);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_46BE:
    /* 000046be   4  move.w (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046beu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_46C2:
    /* 000046c2   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046c2u);
    rc_ext_l(c, 0);

L_46C4:
    /* 000046c4   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046c4u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_46C6:
    /* 000046c6   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046c6u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_46CA:
    /* 000046ca   4  jsr (ffff8386,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046cau);
    /* vector 150 */
    rc_push32(c, m, RC_ADDR(0x000046ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x000218d8u);
    return;

L_46CE:
    /* 000046ce   4  lea (14,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046ceu);
    c->a[7] = (c->a[7] + 0x14u);

L_46D2:
    /* 000046d2   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046d2u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_46D4:
    /* 000046d4   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046d4u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_46D8:
    /* 000046d8   4  jsr (ffff8392,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046d8u);
    /* vector 152 */
    rc_push32(c, m, RC_ADDR(0x000046dcu));
    rc_depth++;
    c->pc = RC_ADDR(0x000218fau);
    return;

L_46DC:
    /* 000046dc   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046dcu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_46DE:
    /* 000046de   4  clr.w (fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046deu);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_46E2:
    /* 000046e2   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046e2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_46E6:
    /* 000046e6   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046e6u);
    rc_ext_l(c, 0);

L_46E8:
    /* 000046e8   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046e8u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_46EA:
    /* 000046ea   4  lea (ffff8540,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046eau);
    c->a[0] = (c->a[4] - 0x7ac0u);

L_46EE:
    /* 000046ee   4  move.w (0,A0,D0.w),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046eeu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_46F2:
    /* 000046f2   2  addq.w #7,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046f2u);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000007u;
    rc_flags_add(c, RC_W, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_46F4:
    /* 000046f4   4  move.w D1,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046f4u);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_46F8:
    /* 000046f8   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046f8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_46FC:
    /* 000046fc   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046fcu);
    rc_ext_l(c, 0);

L_46FE:
    /* 000046fe   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000046feu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_4700:
    /* 00004700   4  lea (fffff1c8,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004700u);
    c->a[0] = (c->a[4] - 0xe38u);

L_4704:
    /* 00004704   6  cmpi.w #9,(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004704u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000009u);

L_470A:
    /* 0000470a   2  ble 00004710 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000470au);
    if (rc_cond(c, 15)) goto L_4710;

L_470C:
    /* 0000470c   4  subq.w #5,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000470cu);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000005u;
    rc_flags_sub(c, RC_W, t1, 0x00000005u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4710:
    /* 00004710   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004710u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4714:
    /* 00004714   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004714u);
    rc_ext_l(c, 0);

L_4716:
    /* 00004716   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004716u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_4718:
    /* 00004718   4  lea (fffff1c8,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004718u);
    c->a[0] = (c->a[4] - 0xe38u);

L_471C:
    /* 0000471c   4  move.w (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000471cu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4720:
    /* 00004720   4  pea (00004758) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004720u);
    rc_push32(c, m, RC_ADDR(0x00004758u));

L_4724:
    /* 00004724   4  pea (ffffffe8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004724u);
    rc_push32(c, m, (c->a[5] - 0x18u));

L_4728:
    /* 00004728   4  jsr (ffff82d2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004728u);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x0000472cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020db6u);
    return;

L_472C:
    /* 0000472c   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000472cu);
    c->a[7] = (c->a[7] + 0xau);

L_4730:
    /* 00004730   4  move.w #1b,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004730u);
    t0 = 0x0000001bu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4734:
    /* 00004734   4  move.w #c2,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004734u);
    t0 = 0x000000c2u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4738:
    /* 00004738   4  move.w (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004738u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_473C:
    /* 0000473c   4  pea (ffffffe8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000473cu);
    rc_push32(c, m, (c->a[5] - 0x18u));

L_4740:
    /* 00004740   4  jsr (ffff8062,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004740u);
    /* vector 16 */
    rc_push32(c, m, RC_ADDR(0x00004744u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004dcau);
    return;

L_4744:
    /* 00004744   4  lea (a,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004744u);
    c->a[7] = (c->a[7] + 0xau);

L_4748:
    /* 00004748   4  addq.w #1,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004748u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_474C:
    /* 0000474c   6  cmpi.w #4,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000474cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_4752:
    /* 00004752   2  blt 000046e2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004752u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_46E2; }

L_4754:
    /* 00004754   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004754u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4756:
    /* 00004756   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004756u);
    rc_ret(c, m);
    return;

}
