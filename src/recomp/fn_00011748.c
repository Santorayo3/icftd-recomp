/* fn_00011748 - 176 byte(s), 45 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011748(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00011748u): goto L_11748;
    case RC_ADDR(0x0001174cu): goto L_1174C;
    case RC_ADDR(0x00011750u): goto L_11750;
    case RC_ADDR(0x00011754u): goto L_11754;
    case RC_ADDR(0x00011758u): goto L_11758;
    case RC_ADDR(0x0001175au): goto L_1175A;
    case RC_ADDR(0x0001175cu): goto L_1175C;
    case RC_ADDR(0x00011762u): goto L_11762;
    case RC_ADDR(0x00011766u): goto L_11766;
    case RC_ADDR(0x00011768u): goto L_11768;
    case RC_ADDR(0x0001176eu): goto L_1176E;
    case RC_ADDR(0x00011776u): goto L_11776;
    case RC_ADDR(0x0001177cu): goto L_1177C;
    case RC_ADDR(0x00011784u): goto L_11784;
    case RC_ADDR(0x0001178cu): goto L_1178C;
    case RC_ADDR(0x00011790u): goto L_11790;
    case RC_ADDR(0x00011792u): goto L_11792;
    case RC_ADDR(0x00011796u): goto L_11796;
    case RC_ADDR(0x00011798u): goto L_11798;
    case RC_ADDR(0x0001179cu): goto L_1179C;
    case RC_ADDR(0x0001179eu): goto L_1179E;
    case RC_ADDR(0x000117a2u): goto L_117A2;
    case RC_ADDR(0x000117a4u): goto L_117A4;
    case RC_ADDR(0x000117a8u): goto L_117A8;
    case RC_ADDR(0x000117acu): goto L_117AC;
    case RC_ADDR(0x000117b0u): goto L_117B0;
    case RC_ADDR(0x000117b4u): goto L_117B4;
    case RC_ADDR(0x000117b8u): goto L_117B8;
    case RC_ADDR(0x000117beu): goto L_117BE;
    case RC_ADDR(0x000117c0u): goto L_117C0;
    case RC_ADDR(0x000117c2u): goto L_117C2;
    case RC_ADDR(0x000117c6u): goto L_117C6;
    case RC_ADDR(0x000117c8u): goto L_117C8;
    case RC_ADDR(0x000117ceu): goto L_117CE;
    case RC_ADDR(0x000117d4u): goto L_117D4;
    case RC_ADDR(0x000117dcu): goto L_117DC;
    case RC_ADDR(0x000117deu): goto L_117DE;
    case RC_ADDR(0x000117e2u): goto L_117E2;
    case RC_ADDR(0x000117e4u): goto L_117E4;
    case RC_ADDR(0x000117e8u): goto L_117E8;
    case RC_ADDR(0x000117eau): goto L_117EA;
    case RC_ADDR(0x000117ecu): goto L_117EC;
    case RC_ADDR(0x000117f0u): goto L_117F0;
    case RC_ADDR(0x000117f4u): goto L_117F4;
    case RC_ADDR(0x000117f6u): goto L_117F6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11748:
    /* 00011748   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00011748u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1174C:
    /* 0001174c   4  movem.l { D1 D2 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0001174cu);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
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

L_11750:
    /* 00011750   4  move.w #28,D0 */
    c->pc = RC_ADDR(0x00011750u);
    t0 = 0x00000028u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11754:
    /* 00011754   4  move.w (fffff2ec,A4),D1 */
    c->pc = RC_ADDR(0x00011754u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11758:
    /* 00011758   2  lsl.w #1,D1 */
    c->pc = RC_ADDR(0x00011758u);
    c->d[1] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_1175A:
    /* 0001175a   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x0001175au);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1175C:
    /* 0001175c   6  move.w D0,(00dff066).l */
    c->pc = RC_ADDR(0x0001175cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, RC_ADDR(0x00dff066u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11762:
    /* 00011762   4  move.w (fffff2f4,A4),D0 */
    c->pc = RC_ADDR(0x00011762u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11766:
    /* 00011766   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00011766u);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11768:
    /* 00011768   6  move.w D0,(00dff064).l */
    c->pc = RC_ADDR(0x00011768u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, RC_ADDR(0x00dff064u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1176E:
    /* 0001176e   8  move.w #9f0,(00dff040).l */
    c->pc = RC_ADDR(0x0001176eu);
    t0 = 0x000009f0u;
    rc_wr16(c, m, RC_ADDR(0x00dff040u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11776:
    /* 00011776   6  clr.w (00dff042).l */
    c->pc = RC_ADDR(0x00011776u);
    rc_wr16(c, m, RC_ADDR(0x00dff042u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1177C:
    /* 0001177c   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x0001177cu);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, RC_ADDR(0x00dff044u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11784:
    /* 00011784   8  move.w #ffff,(00dff046).l */
    c->pc = RC_ADDR(0x00011784u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, RC_ADDR(0x00dff046u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1178C:
    /* 0001178c   4  lea (fffff300,A4),A3 */
    c->pc = RC_ADDR(0x0001178cu);
    c->a[3] = (c->a[4] - 0xd00u);

L_11790:
    /* 00011790   2  movea.l (A3)+,A1 */
    c->pc = RC_ADDR(0x00011790u);
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_11792:
    /* 00011792   4  lea (fffff34e,A4),A6 */
    c->pc = RC_ADDR(0x00011792u);
    c->a[6] = (c->a[4] - 0xcb2u);

L_11796:
    /* 00011796   2  movea.l (A6)+,A2 */
    c->pc = RC_ADDR(0x00011796u);
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_11798:
    /* 00011798   4  move.w (de8,A4),D5 */
    c->pc = RC_ADDR(0x00011798u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xde8u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1179C:
    /* 0001179c   2  clr.l D3 */
    c->pc = RC_ADDR(0x0001179cu);
    rc_d_set(c, 3, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1179E:
    /* 0001179e   4  move.w (fffff2ec,A4),D3 */
    c->pc = RC_ADDR(0x0001179eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd14u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_117A2:
    /* 000117a2   2  lsl.w #1,D3 */
    c->pc = RC_ADDR(0x000117a2u);
    c->d[3] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 3, RC_W), RC_W);

L_117A4:
    /* 000117a4   4  move.w #4,D2 */
    c->pc = RC_ADDR(0x000117a4u);
    t0 = 0x00000004u;
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_117A8:
    /* 000117a8   4  movea.l (fffff314,A4),A5 */
    c->pc = RC_ADDR(0x000117a8u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xcecu));
    c->a[5] = t0;

L_117AC:
    /* 000117ac   4  movea.l (fffff2f8,A4),A0 */
    c->pc = RC_ADDR(0x000117acu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_117B0:
    /* 000117b0   4  move.w (dec,A4),D7 */
    c->pc = RC_ADDR(0x000117b0u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdecu));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_117B4:
    /* 000117b4   4  move.w (dea,A4),D6 */
    c->pc = RC_ADDR(0x000117b4u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdeau));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_117B8:
    /* 000117b8   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x000117b8u);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, RC_ADDR(0x00dff054u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_117BE:
    /* 000117be   2  clr.l D0 */
    c->pc = RC_ADDR(0x000117beu);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_117C0:
    /* 000117c0   2  move.w (A0)+,D0 */
    c->pc = RC_ADDR(0x000117c0u);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_117C2:
    /* 000117c2   4  move.w (0,A5,D0.w),D0 */
    c->pc = RC_ADDR(0x000117c2u);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_117C6:
    /* 000117c6   2  add.l A1,D0 */
    c->pc = RC_ADDR(0x000117c6u);
    t0 = rc_a_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_117C8:
    /* 000117c8   6  move.l D0,(00dff050).l */
    c->pc = RC_ADDR(0x000117c8u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, RC_ADDR(0x00dff050u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_117CE:
    /* 000117ce   6  move.w D5,(00dff058).l */
    c->pc = RC_ADDR(0x000117ceu);
    t0 = rc_d_get(c, 5, RC_W);
    rc_wr16(c, m, RC_ADDR(0x00dff058u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_117D4:
    /* 000117d4   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x000117d4u);
    t4 = 0x00000006u;
    t3 = RC_ADDR(0x00dff002u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_117DC:
    /* 000117dc   2  bne 000117d4 */
    c->pc = RC_ADDR(0x000117dcu);
    if (rc_cond(c, 6)) { rc_tick(); goto L_117D4; }

L_117DE:
    /* 000117de   4  dbf D6,000117be */
    c->pc = RC_ADDR(0x000117deu);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 6, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 6, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_117BE; }
    }

L_117E2:
    /* 000117e2   2  adda.l D3,A2 */
    c->pc = RC_ADDR(0x000117e2u);
    t0 = rc_d_get(c, 3, RC_L);
    c->a[2] += t0;

L_117E4:
    /* 000117e4   4  dbf D7,000117b4 */
    c->pc = RC_ADDR(0x000117e4u);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 7, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 7, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_117B4; }
    }

L_117E8:
    /* 000117e8   2  movea.l (A3)+,A1 */
    c->pc = RC_ADDR(0x000117e8u);
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_117EA:
    /* 000117ea   2  movea.l (A6)+,A2 */
    c->pc = RC_ADDR(0x000117eau);
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_117EC:
    /* 000117ec   4  dbf D2,000117ac */
    c->pc = RC_ADDR(0x000117ecu);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_117AC; }
    }

L_117F0:
    /* 000117f0   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A5 A6 } */
    c->pc = RC_ADDR(0x000117f0u);
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
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_117F4:
    /* 000117f4   2  unlk A5 */
    c->pc = RC_ADDR(0x000117f4u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_117F6:
    /* 000117f6   2  rts */
    c->pc = RC_ADDR(0x000117f6u);
    rc_ret(c, m);
    return;

}
