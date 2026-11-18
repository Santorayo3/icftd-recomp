/* fn_000025ac - 312 byte(s), 91 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000025ac(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000025acu): goto L_25AC;
    case RC_ADDR(0x000025b0u): goto L_25B0;
    case RC_ADDR(0x000025b4u): goto L_25B4;
    case RC_ADDR(0x000025b8u): goto L_25B8;
    case RC_ADDR(0x000025bcu): goto L_25BC;
    case RC_ADDR(0x000025beu): goto L_25BE;
    case RC_ADDR(0x000025c2u): goto L_25C2;
    case RC_ADDR(0x000025c6u): goto L_25C6;
    case RC_ADDR(0x000025c8u): goto L_25C8;
    case RC_ADDR(0x000025ccu): goto L_25CC;
    case RC_ADDR(0x000025d0u): goto L_25D0;
    case RC_ADDR(0x000025d2u): goto L_25D2;
    case RC_ADDR(0x000025d6u): goto L_25D6;
    case RC_ADDR(0x000025dau): goto L_25DA;
    case RC_ADDR(0x000025dcu): goto L_25DC;
    case RC_ADDR(0x000025e0u): goto L_25E0;
    case RC_ADDR(0x000025e4u): goto L_25E4;
    case RC_ADDR(0x000025e8u): goto L_25E8;
    case RC_ADDR(0x000025ecu): goto L_25EC;
    case RC_ADDR(0x000025eeu): goto L_25EE;
    case RC_ADDR(0x000025f2u): goto L_25F2;
    case RC_ADDR(0x000025f6u): goto L_25F6;
    case RC_ADDR(0x000025fau): goto L_25FA;
    case RC_ADDR(0x000025fcu): goto L_25FC;
    case RC_ADDR(0x00002600u): goto L_2600;
    case RC_ADDR(0x00002604u): goto L_2604;
    case RC_ADDR(0x00002606u): goto L_2606;
    case RC_ADDR(0x0000260au): goto L_260A;
    case RC_ADDR(0x00002610u): goto L_2610;
    case RC_ADDR(0x00002612u): goto L_2612;
    case RC_ADDR(0x00002616u): goto L_2616;
    case RC_ADDR(0x00002618u): goto L_2618;
    case RC_ADDR(0x0000261eu): goto L_261E;
    case RC_ADDR(0x00002622u): goto L_2622;
    case RC_ADDR(0x00002626u): goto L_2626;
    case RC_ADDR(0x00002628u): goto L_2628;
    case RC_ADDR(0x0000262cu): goto L_262C;
    case RC_ADDR(0x00002630u): goto L_2630;
    case RC_ADDR(0x00002634u): goto L_2634;
    case RC_ADDR(0x0000263au): goto L_263A;
    case RC_ADDR(0x0000263cu): goto L_263C;
    case RC_ADDR(0x00002640u): goto L_2640;
    case RC_ADDR(0x00002644u): goto L_2644;
    case RC_ADDR(0x00002648u): goto L_2648;
    case RC_ADDR(0x0000264cu): goto L_264C;
    case RC_ADDR(0x00002650u): goto L_2650;
    case RC_ADDR(0x00002652u): goto L_2652;
    case RC_ADDR(0x00002656u): goto L_2656;
    case RC_ADDR(0x00002658u): goto L_2658;
    case RC_ADDR(0x0000265cu): goto L_265C;
    case RC_ADDR(0x00002660u): goto L_2660;
    case RC_ADDR(0x00002664u): goto L_2664;
    case RC_ADDR(0x00002666u): goto L_2666;
    case RC_ADDR(0x00002668u): goto L_2668;
    case RC_ADDR(0x0000266cu): goto L_266C;
    case RC_ADDR(0x00002670u): goto L_2670;
    case RC_ADDR(0x00002674u): goto L_2674;
    case RC_ADDR(0x00002678u): goto L_2678;
    case RC_ADDR(0x0000267eu): goto L_267E;
    case RC_ADDR(0x00002682u): goto L_2682;
    case RC_ADDR(0x00002684u): goto L_2684;
    case RC_ADDR(0x00002688u): goto L_2688;
    case RC_ADDR(0x0000268cu): goto L_268C;
    case RC_ADDR(0x00002690u): goto L_2690;
    case RC_ADDR(0x00002692u): goto L_2692;
    case RC_ADDR(0x00002696u): goto L_2696;
    case RC_ADDR(0x00002698u): goto L_2698;
    case RC_ADDR(0x0000269cu): goto L_269C;
    case RC_ADDR(0x0000269eu): goto L_269E;
    case RC_ADDR(0x000026a2u): goto L_26A2;
    case RC_ADDR(0x000026a6u): goto L_26A6;
    case RC_ADDR(0x000026aau): goto L_26AA;
    case RC_ADDR(0x000026acu): goto L_26AC;
    case RC_ADDR(0x000026b0u): goto L_26B0;
    case RC_ADDR(0x000026b2u): goto L_26B2;
    case RC_ADDR(0x000026b6u): goto L_26B6;
    case RC_ADDR(0x000026bau): goto L_26BA;
    case RC_ADDR(0x000026beu): goto L_26BE;
    case RC_ADDR(0x000026c0u): goto L_26C0;
    case RC_ADDR(0x000026c4u): goto L_26C4;
    case RC_ADDR(0x000026c8u): goto L_26C8;
    case RC_ADDR(0x000026cau): goto L_26CA;
    case RC_ADDR(0x000026ceu): goto L_26CE;
    case RC_ADDR(0x000026d2u): goto L_26D2;
    case RC_ADDR(0x000026d4u): goto L_26D4;
    case RC_ADDR(0x000026d6u): goto L_26D6;
    case RC_ADDR(0x000026dau): goto L_26DA;
    case RC_ADDR(0x000026dcu): goto L_26DC;
    case RC_ADDR(0x000026deu): goto L_26DE;
    case RC_ADDR(0x000026e0u): goto L_26E0;
    case RC_ADDR(0x000026e2u): goto L_26E2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_25AC:
    /* 000025ac   4  link.w A5,#ffffffe8 */
    c->pc = RC_ADDR(0x000025acu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x18u;

L_25B0:
    /* 000025b0   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000025b0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_25B4:
    /* 000025b4   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x000025b4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_25B8:
    /* 000025b8   4  jsr (00007d32) */
    c->pc = RC_ADDR(0x000025b8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000025bcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00007d32u);
    return;

L_25BC:
    /* 000025bc   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000025bcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_25BE:
    /* 000025be   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x000025beu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_25C2:
    /* 000025c2   4  jsr (ffff8098,A4) */
    c->pc = RC_ADDR(0x000025c2u);
    rc_step(c, m, 18);
    /* vector 25 */
    rc_push32(c, m, RC_ADDR(0x000025c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000a80cu);
    return;

L_25C6:
    /* 000025c6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000025c6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_25C8:
    /* 000025c8   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x000025c8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_25CC:
    /* 000025cc   4  jsr (00006436) */
    c->pc = RC_ADDR(0x000025ccu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000025d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006436u);
    return;

L_25D0:
    /* 000025d0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000025d0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_25D2:
    /* 000025d2   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000025d2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_25D6:
    /* 000025d6   4  jsr (0000226a) */
    c->pc = RC_ADDR(0x000025d6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000025dau));
    rc_depth++;
    c->pc = RC_ADDR(0x0000226au);
    return;

L_25DA:
    /* 000025da   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000025dau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_25DC:
    /* 000025dc   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000025dcu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_25E0:
    /* 000025e0   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x000025e0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_25E4:
    /* 000025e4   4  beq 000026e0 */
    c->pc = RC_ADDR(0x000025e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_26E0;

L_25E8:
    /* 000025e8   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000025e8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_25EC:
    /* 000025ec   2  addq.l #2,A0 */
    c->pc = RC_ADDR(0x000025ecu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000002u;

L_25EE:
    /* 000025ee   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000025eeu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_25F2:
    /* 000025f2   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000025f2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_25F6:
    /* 000025f6   4  move.b (1,A0),D0 */
    c->pc = RC_ADDR(0x000025f6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_25FA:
    /* 000025fa   2  ext.w D0 */
    c->pc = RC_ADDR(0x000025fau);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_25FC:
    /* 000025fc   4  move.w D0,(ffffffec,A5) */
    c->pc = RC_ADDR(0x000025fcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2600:
    /* 00002600   4  tst.w (fffff8a6,A4) */
    c->pc = RC_ADDR(0x00002600u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x75au));
    rc_set_nzvc(c, t0, RC_W);

L_2604:
    /* 00002604   2  beq 0000261e */
    c->pc = RC_ADDR(0x00002604u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_261E;

L_2606:
    /* 00002606   4  clr.w (fffff8a6,A4) */
    c->pc = RC_ADDR(0x00002606u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x75au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_260A:
    /* 0000260a   6  cmpi.w #17,(fffff78c,A4) */
    c->pc = RC_ADDR(0x0000260au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x00000017u);

L_2610:
    /* 00002610   2  bne 0000261e */
    c->pc = RC_ADDR(0x00002610u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_261E;

L_2612:
    /* 00002612   4  tst.w (ffffd6f6,A4) */
    c->pc = RC_ADDR(0x00002612u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x290au));
    rc_set_nzvc(c, t0, RC_W);

L_2616:
    /* 00002616   2  beq 0000261e */
    c->pc = RC_ADDR(0x00002616u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_261E;

L_2618:
    /* 00002618   6  move.w #1,(ffff83fe,A4) */
    c->pc = RC_ADDR(0x00002618u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_261E:
    /* 0000261e   4  move.w (ffffffec,A5),D0 */
    c->pc = RC_ADDR(0x0000261eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2622:
    /* 00002622   4  subq.w #1,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00002622u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x14u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2626:
    /* 00002626   2  tst.w D0 */
    c->pc = RC_ADDR(0x00002626u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2628:
    /* 00002628   4  beq 000026ba */
    c->pc = RC_ADDR(0x00002628u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_26BA;

L_262C:
    /* 0000262c   4  jsr (0000370e) */
    c->pc = RC_ADDR(0x0000262cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002630u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000370eu);
    return;

L_2630:
    /* 00002630   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00002630u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_2634:
    /* 00002634   6  cmpi.b #64,(4,A0) */
    c->pc = RC_ADDR(0x00002634u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_cmp(c, RC_B, t0, 0x00000064u);

L_263A:
    /* 0000263a   2  bne 00002684 */
    c->pc = RC_ADDR(0x0000263au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2684;

L_263C:
    /* 0000263c   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x0000263cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_2640:
    /* 00002640   4  move.l (A0),(fffffff4,A5) */
    c->pc = RC_ADDR(0x00002640u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2644:
    /* 00002644   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00002644u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_2648:
    /* 00002648   4  move.l (c,A0),-(A7) */
    c->pc = RC_ADDR(0x00002648u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_264C:
    /* 0000264c   4  jsr (000080e0) */
    c->pc = RC_ADDR(0x0000264cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002650u));
    rc_depth++;
    c->pc = RC_ADDR(0x000080e0u);
    return;

L_2650:
    /* 00002650   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002650u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2652:
    /* 00002652   4  move.l D0,(ffffffe8,A5) */
    c->pc = RC_ADDR(0x00002652u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2656:
    /* 00002656   2  beq 00002674 */
    c->pc = RC_ADDR(0x00002656u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2674;

L_2658:
    /* 00002658   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00002658u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_265C:
    /* 0000265c   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000265cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2660:
    /* 00002660   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00002660u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_2664:
    /* 00002664   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x00002664u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_2666:
    /* 00002666   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00002666u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2668:
    /* 00002668   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x00002668u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_266C:
    /* 0000266c   4  jsr (000022d0) */
    c->pc = RC_ADDR(0x0000266cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002670u));
    rc_depth++;
    c->pc = RC_ADDR(0x000022d0u);
    return;

L_2670:
    /* 00002670   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x00002670u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x10u);

L_2674:
    /* 00002674   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00002674u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_2678:
    /* 00002678   6  adda.l #10,A0 */
    c->pc = RC_ADDR(0x00002678u);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    c->a[0] += t0;

L_267E:
    /* 0000267e   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000267eu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2682:
    /* 00002682   2  bra 000026b6 */
    c->pc = RC_ADDR(0x00002682u);
    rc_step(c, m, 10);
    goto L_26B6;

L_2684:
    /* 00002684   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00002684u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_2688:
    /* 00002688   4  move.l (A0),(fffffff0,A5) */
    c->pc = RC_ADDR(0x00002688u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_268C:
    /* 0000268c   4  movea.l (fffffff0,A5),A0 */
    c->pc = RC_ADDR(0x0000268cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_2690:
    /* 00002690   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x00002690u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2692:
    /* 00002692   4  jsr (000080e0) */
    c->pc = RC_ADDR(0x00002692u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002696u));
    rc_depth++;
    c->pc = RC_ADDR(0x000080e0u);
    return;

L_2696:
    /* 00002696   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002696u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2698:
    /* 00002698   4  move.l D0,(ffffffe8,A5) */
    c->pc = RC_ADDR(0x00002698u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_269C:
    /* 0000269c   2  beq 000026ac */
    c->pc = RC_ADDR(0x0000269cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_26AC;

L_269E:
    /* 0000269e   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000269eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_26A2:
    /* 000026a2   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x000026a2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_26A6:
    /* 000026a6   4  jsr (000024ac) */
    c->pc = RC_ADDR(0x000026a6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000026aau));
    rc_depth++;
    c->pc = RC_ADDR(0x000024acu);
    return;

L_26AA:
    /* 000026aa   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000026aau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_26AC:
    /* 000026ac   4  movea.l (fffffff0,A5),A0 */
    c->pc = RC_ADDR(0x000026acu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_26B0:
    /* 000026b0   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x000026b0u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_26B2:
    /* 000026b2   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000026b2u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_26B6:
    /* 000026b6   4  bra 0000261e */
    c->pc = RC_ADDR(0x000026b6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_261E;

L_26BA:
    /* 000026ba   4  tst.w (ffff9916,A4) */
    c->pc = RC_ADDR(0x000026bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x66eau));
    rc_set_nzvc(c, t0, RC_W);

L_26BE:
    /* 000026be   2  beq 000026ca */
    c->pc = RC_ADDR(0x000026beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_26CA;

L_26C0:
    /* 000026c0   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x000026c0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_26C4:
    /* 000026c4   4  jsr (ffff811c,A4) */
    c->pc = RC_ADDR(0x000026c4u);
    rc_step(c, m, 18);
    /* vector 47 */
    rc_push32(c, m, RC_ADDR(0x000026c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c12u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000d606u);
    return;

L_26C8:
    /* 000026c8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000026c8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_26CA:
    /* 000026ca   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x000026cau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_26CE:
    /* 000026ce   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000026ceu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_26D2:
    /* 000026d2   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x000026d2u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_26D4:
    /* 000026d4   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x000026d4u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_26D6:
    /* 000026d6   4  jsr (000027d8) */
    c->pc = RC_ADDR(0x000026d6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000026dau));
    rc_depth++;
    c->pc = RC_ADDR(0x000027d8u);
    return;

L_26DA:
    /* 000026da   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000026dau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_26DC:
    /* 000026dc   2  unlk A5 */
    c->pc = RC_ADDR(0x000026dcu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_26DE:
    /* 000026de   2  rts */
    c->pc = RC_ADDR(0x000026deu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_26E0:
    /* 000026e0   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x000026e0u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_26E2:
    /* 000026e2   2  bra 000026dc */
    c->pc = RC_ADDR(0x000026e2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_26DC;

}
