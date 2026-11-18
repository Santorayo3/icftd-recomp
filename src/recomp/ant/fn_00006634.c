/* fn_00006634 - 272 byte(s), 79 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00006634(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00006634u): goto L_6634;
    case RC_ADDR(0x00006638u): goto L_6638;
    case RC_ADDR(0x00006640u): goto L_6640;
    case RC_ADDR(0x00006646u): goto L_6646;
    case RC_ADDR(0x0000664au): goto L_664A;
    case RC_ADDR(0x0000664eu): goto L_664E;
    case RC_ADDR(0x00006654u): goto L_6654;
    case RC_ADDR(0x0000665au): goto L_665A;
    case RC_ADDR(0x0000665eu): goto L_665E;
    case RC_ADDR(0x00006660u): goto L_6660;
    case RC_ADDR(0x00006662u): goto L_6662;
    case RC_ADDR(0x00006664u): goto L_6664;
    case RC_ADDR(0x00006668u): goto L_6668;
    case RC_ADDR(0x0000666au): goto L_666A;
    case RC_ADDR(0x0000666cu): goto L_666C;
    case RC_ADDR(0x0000666eu): goto L_666E;
    case RC_ADDR(0x00006672u): goto L_6672;
    case RC_ADDR(0x00006674u): goto L_6674;
    case RC_ADDR(0x00006676u): goto L_6676;
    case RC_ADDR(0x00006678u): goto L_6678;
    case RC_ADDR(0x0000667cu): goto L_667C;
    case RC_ADDR(0x00006680u): goto L_6680;
    case RC_ADDR(0x00006684u): goto L_6684;
    case RC_ADDR(0x00006688u): goto L_6688;
    case RC_ADDR(0x0000668cu): goto L_668C;
    case RC_ADDR(0x00006690u): goto L_6690;
    case RC_ADDR(0x00006692u): goto L_6692;
    case RC_ADDR(0x00006694u): goto L_6694;
    case RC_ADDR(0x00006698u): goto L_6698;
    case RC_ADDR(0x0000669cu): goto L_669C;
    case RC_ADDR(0x0000669eu): goto L_669E;
    case RC_ADDR(0x000066a2u): goto L_66A2;
    case RC_ADDR(0x000066a4u): goto L_66A4;
    case RC_ADDR(0x000066a8u): goto L_66A8;
    case RC_ADDR(0x000066acu): goto L_66AC;
    case RC_ADDR(0x000066b0u): goto L_66B0;
    case RC_ADDR(0x000066b4u): goto L_66B4;
    case RC_ADDR(0x000066b6u): goto L_66B6;
    case RC_ADDR(0x000066bau): goto L_66BA;
    case RC_ADDR(0x000066beu): goto L_66BE;
    case RC_ADDR(0x000066c0u): goto L_66C0;
    case RC_ADDR(0x000066c4u): goto L_66C4;
    case RC_ADDR(0x000066c6u): goto L_66C6;
    case RC_ADDR(0x000066cau): goto L_66CA;
    case RC_ADDR(0x000066ceu): goto L_66CE;
    case RC_ADDR(0x000066d0u): goto L_66D0;
    case RC_ADDR(0x000066d6u): goto L_66D6;
    case RC_ADDR(0x000066d8u): goto L_66D8;
    case RC_ADDR(0x000066dcu): goto L_66DC;
    case RC_ADDR(0x000066e0u): goto L_66E0;
    case RC_ADDR(0x000066e4u): goto L_66E4;
    case RC_ADDR(0x000066e6u): goto L_66E6;
    case RC_ADDR(0x000066eau): goto L_66EA;
    case RC_ADDR(0x000066ecu): goto L_66EC;
    case RC_ADDR(0x000066f0u): goto L_66F0;
    case RC_ADDR(0x000066f4u): goto L_66F4;
    case RC_ADDR(0x000066f8u): goto L_66F8;
    case RC_ADDR(0x000066fcu): goto L_66FC;
    case RC_ADDR(0x000066feu): goto L_66FE;
    case RC_ADDR(0x00006702u): goto L_6702;
    case RC_ADDR(0x00006706u): goto L_6706;
    case RC_ADDR(0x00006708u): goto L_6708;
    case RC_ADDR(0x0000670cu): goto L_670C;
    case RC_ADDR(0x0000670eu): goto L_670E;
    case RC_ADDR(0x00006712u): goto L_6712;
    case RC_ADDR(0x00006716u): goto L_6716;
    case RC_ADDR(0x00006718u): goto L_6718;
    case RC_ADDR(0x0000671eu): goto L_671E;
    case RC_ADDR(0x00006720u): goto L_6720;
    case RC_ADDR(0x00006724u): goto L_6724;
    case RC_ADDR(0x00006728u): goto L_6728;
    case RC_ADDR(0x0000672cu): goto L_672C;
    case RC_ADDR(0x00006730u): goto L_6730;
    case RC_ADDR(0x00006734u): goto L_6734;
    case RC_ADDR(0x00006736u): goto L_6736;
    case RC_ADDR(0x0000673au): goto L_673A;
    case RC_ADDR(0x0000673eu): goto L_673E;
    case RC_ADDR(0x00006740u): goto L_6740;
    case RC_ADDR(0x00006742u): goto L_6742;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6634:
    /* 00006634   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x00006634u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_6638:
    /* 00006638   8  move.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00006638u);
    rc_step(c, m, 24);
    t0 = 0x00000001u;
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6640:
    /* 00006640   6  move.w #2,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00006640u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6646:
    /* 00006646   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00006646u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_664A:
    /* 0000664a   4  beq 0000672c */
    c->pc = RC_ADDR(0x0000664au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_672C;

L_664E:
    /* 0000664e   6  move.w #2,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000664eu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6654:
    /* 00006654   6  move.l (22,A5),(838,A4) */
    c->pc = RC_ADDR(0x00006654u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x22u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_665A:
    /* 0000665a   4  move.l (1e,A5),D0 */
    c->pc = RC_ADDR(0x0000665au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x1eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_665E:
    /* 0000665e   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0000665eu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_6660:
    /* 00006660   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00006660u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_6662:
    /* 00006662   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00006662u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6664:
    /* 00006664   4  move.l (12,A5),D0 */
    c->pc = RC_ADDR(0x00006664u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6668:
    /* 00006668   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00006668u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_666A:
    /* 0000666a   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x0000666au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_666C:
    /* 0000666c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000666cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_666E:
    /* 0000666e   4  move.l (e,A5),D0 */
    c->pc = RC_ADDR(0x0000666eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6672:
    /* 00006672   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00006672u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_6674:
    /* 00006674   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00006674u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_6676:
    /* 00006676   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00006676u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6678:
    /* 00006678   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00006678u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_667C:
    /* 0000667c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000667cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6680:
    /* 00006680   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00006680u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6684:
    /* 00006684   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00006684u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00006688u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_6688:
    /* 00006688   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00006688u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_668C:
    /* 0000668c   4  move.l (22,A5),-(A7) */
    c->pc = RC_ADDR(0x0000668cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6690:
    /* 00006690   2  bsr 00006612 */
    c->pc = RC_ADDR(0x00006690u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006692u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006612u);
    return;

L_6692:
    /* 00006692   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006692u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6694:
    /* 00006694   4  move.l (e,A5),D0 */
    c->pc = RC_ADDR(0x00006694u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6698:
    /* 00006698   4  cmp.l (16,A5),D0 */
    c->pc = RC_ADDR(0x00006698u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x16u));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_669C:
    /* 0000669c   2  beq 000066d8 */
    c->pc = RC_ADDR(0x0000669cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_66D8;

L_669E:
    /* 0000669e   4  move.w (26,A5),D0 */
    c->pc = RC_ADDR(0x0000669eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x26u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_66A2:
    /* 000066a2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000066a2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_66A4:
    /* 000066a4   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x000066a4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_66A8:
    /* 000066a8   4  jsr (ffff82f0,A4) */
    c->pc = RC_ADDR(0x000066a8u);
    rc_step(c, m, 18);
    /* vector 125 */
    rc_push32(c, m, RC_ADDR(0x000066acu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023de6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022d80u);
    return;

L_66AC:
    /* 000066ac   4  add.l D0,(e,A5) */
    c->pc = RC_ADDR(0x000066acu);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0xeu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_66B0:
    /* 000066b0   4  tst.w (26,A5) */
    c->pc = RC_ADDR(0x000066b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x26u));
    rc_set_nzvc(c, t0, RC_W);

L_66B4:
    /* 000066b4   2  bge 000066c0 */
    c->pc = RC_ADDR(0x000066b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_66C0;

L_66B6:
    /* 000066b6   4  move.l (e,A5),D0 */
    c->pc = RC_ADDR(0x000066b6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_66BA:
    /* 000066ba   4  cmp.l (16,A5),D0 */
    c->pc = RC_ADDR(0x000066bau);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x16u));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_66BE:
    /* 000066be   2  blt 000066d0 */
    c->pc = RC_ADDR(0x000066beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_66D0;

L_66C0:
    /* 000066c0   4  tst.w (26,A5) */
    c->pc = RC_ADDR(0x000066c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x26u));
    rc_set_nzvc(c, t0, RC_W);

L_66C4:
    /* 000066c4   2  ble 000066d6 */
    c->pc = RC_ADDR(0x000066c4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_66D6;

L_66C6:
    /* 000066c6   4  move.l (e,A5),D0 */
    c->pc = RC_ADDR(0x000066c6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_66CA:
    /* 000066ca   4  cmp.l (16,A5),D0 */
    c->pc = RC_ADDR(0x000066cau);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x16u));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_66CE:
    /* 000066ce   2  ble 000066d6 */
    c->pc = RC_ADDR(0x000066ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_66D6;

L_66D0:
    /* 000066d0   6  move.l (16,A5),(e,A5) */
    c->pc = RC_ADDR(0x000066d0u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x16u));
    rc_wr32(c, m, (c->a[5] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_66D6:
    /* 000066d6   2  bra 000066dc */
    c->pc = RC_ADDR(0x000066d6u);
    rc_step(c, m, 10);
    goto L_66DC;

L_66D8:
    /* 000066d8   4  subq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000066d8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_66DC:
    /* 000066dc   4  move.l (12,A5),D0 */
    c->pc = RC_ADDR(0x000066dcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_66E0:
    /* 000066e0   4  cmp.l (1a,A5),D0 */
    c->pc = RC_ADDR(0x000066e0u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x1au));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_66E4:
    /* 000066e4   2  beq 00006720 */
    c->pc = RC_ADDR(0x000066e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6720;

L_66E6:
    /* 000066e6   4  move.w (26,A5),D0 */
    c->pc = RC_ADDR(0x000066e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x26u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_66EA:
    /* 000066ea   2  ext.l D0 */
    c->pc = RC_ADDR(0x000066eau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_66EC:
    /* 000066ec   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x000066ecu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_66F0:
    /* 000066f0   4  jsr (ffff82f0,A4) */
    c->pc = RC_ADDR(0x000066f0u);
    rc_step(c, m, 18);
    /* vector 125 */
    rc_push32(c, m, RC_ADDR(0x000066f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023de6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022d80u);
    return;

L_66F4:
    /* 000066f4   4  add.l D0,(12,A5) */
    c->pc = RC_ADDR(0x000066f4u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x12u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_66F8:
    /* 000066f8   4  tst.w (26,A5) */
    c->pc = RC_ADDR(0x000066f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x26u));
    rc_set_nzvc(c, t0, RC_W);

L_66FC:
    /* 000066fc   2  bge 00006708 */
    c->pc = RC_ADDR(0x000066fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_6708;

L_66FE:
    /* 000066fe   4  move.l (12,A5),D0 */
    c->pc = RC_ADDR(0x000066feu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6702:
    /* 00006702   4  cmp.l (1a,A5),D0 */
    c->pc = RC_ADDR(0x00006702u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x1au));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_6706:
    /* 00006706   2  blt 00006718 */
    c->pc = RC_ADDR(0x00006706u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_6718;

L_6708:
    /* 00006708   4  tst.w (26,A5) */
    c->pc = RC_ADDR(0x00006708u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x26u));
    rc_set_nzvc(c, t0, RC_W);

L_670C:
    /* 0000670c   2  ble 0000671e */
    c->pc = RC_ADDR(0x0000670cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_671E;

L_670E:
    /* 0000670e   4  move.l (12,A5),D0 */
    c->pc = RC_ADDR(0x0000670eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6712:
    /* 00006712   4  cmp.l (1a,A5),D0 */
    c->pc = RC_ADDR(0x00006712u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0x1au));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_6716:
    /* 00006716   2  ble 0000671e */
    c->pc = RC_ADDR(0x00006716u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_671E;

L_6718:
    /* 00006718   6  move.l (1a,A5),(12,A5) */
    c->pc = RC_ADDR(0x00006718u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x1au));
    rc_wr32(c, m, (c->a[5] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_671E:
    /* 0000671e   2  bra 00006724 */
    c->pc = RC_ADDR(0x0000671eu);
    rc_step(c, m, 10);
    goto L_6724;

L_6720:
    /* 00006720   4  subq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00006720u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6724:
    /* 00006724   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00006724u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_6728:
    /* 00006728   4  bra 00006646 */
    c->pc = RC_ADDR(0x00006728u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6646;

L_672C:
    /* 0000672c   4  move.l (22,A5),-(A7) */
    c->pc = RC_ADDR(0x0000672cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6730:
    /* 00006730   4  jsr (00006612) */
    c->pc = RC_ADDR(0x00006730u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006734u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006612u);
    return;

L_6734:
    /* 00006734   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006734u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6736:
    /* 00006736   4  move.l (22,A5),-(A7) */
    c->pc = RC_ADDR(0x00006736u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_673A:
    /* 0000673a   4  jsr (00006612) */
    c->pc = RC_ADDR(0x0000673au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000673eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00006612u);
    return;

L_673E:
    /* 0000673e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000673eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6740:
    /* 00006740   2  unlk A5 */
    c->pc = RC_ADDR(0x00006740u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6742:
    /* 00006742   2  rts */
    c->pc = RC_ADDR(0x00006742u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
