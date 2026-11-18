/* fn_00012986 - 216 byte(s), 57 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00012986(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00012986u): goto L_12986;
    case RC_ADDR(0x0001298au): goto L_1298A;
    case RC_ADDR(0x0001298eu): goto L_1298E;
    case RC_ADDR(0x00012992u): goto L_12992;
    case RC_ADDR(0x00012994u): goto L_12994;
    case RC_ADDR(0x00012996u): goto L_12996;
    case RC_ADDR(0x00012998u): goto L_12998;
    case RC_ADDR(0x0001299eu): goto L_1299E;
    case RC_ADDR(0x000129a4u): goto L_129A4;
    case RC_ADDR(0x000129acu): goto L_129AC;
    case RC_ADDR(0x000129b4u): goto L_129B4;
    case RC_ADDR(0x000129b8u): goto L_129B8;
    case RC_ADDR(0x000129bau): goto L_129BA;
    case RC_ADDR(0x000129bcu): goto L_129BC;
    case RC_ADDR(0x000129beu): goto L_129BE;
    case RC_ADDR(0x000129c2u): goto L_129C2;
    case RC_ADDR(0x000129c6u): goto L_129C6;
    case RC_ADDR(0x000129c8u): goto L_129C8;
    case RC_ADDR(0x000129ccu): goto L_129CC;
    case RC_ADDR(0x000129ceu): goto L_129CE;
    case RC_ADDR(0x000129d0u): goto L_129D0;
    case RC_ADDR(0x000129d2u): goto L_129D2;
    case RC_ADDR(0x000129d6u): goto L_129D6;
    case RC_ADDR(0x000129dau): goto L_129DA;
    case RC_ADDR(0x000129dcu): goto L_129DC;
    case RC_ADDR(0x000129e4u): goto L_129E4;
    case RC_ADDR(0x000129ecu): goto L_129EC;
    case RC_ADDR(0x000129eeu): goto L_129EE;
    case RC_ADDR(0x000129f0u): goto L_129F0;
    case RC_ADDR(0x000129f6u): goto L_129F6;
    case RC_ADDR(0x000129fau): goto L_129FA;
    case RC_ADDR(0x000129fcu): goto L_129FC;
    case RC_ADDR(0x00012a00u): goto L_12A00;
    case RC_ADDR(0x00012a02u): goto L_12A02;
    case RC_ADDR(0x00012a04u): goto L_12A04;
    case RC_ADDR(0x00012a08u): goto L_12A08;
    case RC_ADDR(0x00012a0cu): goto L_12A0C;
    case RC_ADDR(0x00012a0eu): goto L_12A0E;
    case RC_ADDR(0x00012a10u): goto L_12A10;
    case RC_ADDR(0x00012a14u): goto L_12A14;
    case RC_ADDR(0x00012a18u): goto L_12A18;
    case RC_ADDR(0x00012a1au): goto L_12A1A;
    case RC_ADDR(0x00012a1eu): goto L_12A1E;
    case RC_ADDR(0x00012a20u): goto L_12A20;
    case RC_ADDR(0x00012a24u): goto L_12A24;
    case RC_ADDR(0x00012a2au): goto L_12A2A;
    case RC_ADDR(0x00012a30u): goto L_12A30;
    case RC_ADDR(0x00012a36u): goto L_12A36;
    case RC_ADDR(0x00012a38u): goto L_12A38;
    case RC_ADDR(0x00012a3au): goto L_12A3A;
    case RC_ADDR(0x00012a40u): goto L_12A40;
    case RC_ADDR(0x00012a46u): goto L_12A46;
    case RC_ADDR(0x00012a4cu): goto L_12A4C;
    case RC_ADDR(0x00012a54u): goto L_12A54;
    case RC_ADDR(0x00012a56u): goto L_12A56;
    case RC_ADDR(0x00012a5au): goto L_12A5A;
    case RC_ADDR(0x00012a5cu): goto L_12A5C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12986:
    /* 00012986   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00012986u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1298A:
    /* 0001298a   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0001298au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1298E:
    /* 0001298e   4  move.w (fffffa76,A4),D0 */
    c->pc = RC_ADDR(0x0001298eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12992:
    /* 00012992   2  move.w (A0),D1 */
    c->pc = RC_ADDR(0x00012992u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12994:
    /* 00012994   2  addq.w #2,D1 */
    c->pc = RC_ADDR(0x00012994u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12996:
    /* 00012996   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00012996u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12998:
    /* 00012998   6  move.w D0,(00dff066).l */
    c->pc = RC_ADDR(0x00012998u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1299E:
    /* 0001299e   6  move.w D0,(00dff060).l */
    c->pc = RC_ADDR(0x0001299eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff060u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_129A4:
    /* 000129a4   8  move.w #ffff,(00dff062).l */
    c->pc = RC_ADDR(0x000129a4u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_129AC:
    /* 000129ac   8  move.w #ffff,(00dff064).l */
    c->pc = RC_ADDR(0x000129acu);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_129B4:
    /* 000129b4   4  move.w (2,A0),D2 */
    c->pc = RC_ADDR(0x000129b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_129B8:
    /* 000129b8   2  lsl.w #6,D2 */
    c->pc = RC_ADDR(0x000129b8u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 2, RC_W), RC_W));

L_129BA:
    /* 000129ba   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x000129bau);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_129BC:
    /* 000129bc   2  or.w D1,D2 */
    c->pc = RC_ADDR(0x000129bcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 2, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 2, RC_W, t2);

L_129BE:
    /* 000129be   4  movea.l (24,A0),A3 */
    c->pc = RC_ADDR(0x000129beu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[3] = t0;

L_129C2:
    /* 000129c2   4  movea.l (10,A5),A1 */
    c->pc = RC_ADDR(0x000129c2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[1] = t0;

L_129C6:
    /* 000129c6   2  clr.l D1 */
    c->pc = RC_ADDR(0x000129c6u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_129C8:
    /* 000129c8   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000129c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_129CC:
    /* 000129cc   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x000129ccu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_129CE:
    /* 000129ce   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x000129ceu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_129D0:
    /* 000129d0   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x000129d0u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_129D2:
    /* 000129d2   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x000129d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_129D6:
    /* 000129d6   4  mulu.w (fffffa76,A4),D1 */
    c->pc = RC_ADDR(0x000129d6u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_mulu(c, 1, t0);

L_129DA:
    /* 000129da   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x000129dau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_129DC:
    /* 000129dc   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x000129dcu);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_129E4:
    /* 000129e4   8  move.w #0,(00dff046).l */
    c->pc = RC_ADDR(0x000129e4u);
    rc_step(c, m, 20);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_129EC:
    /* 000129ec   2  asl.w #6,D3 */
    c->pc = RC_ADDR(0x000129ecu);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_129EE:
    /* 000129ee   2  asl.w #6,D3 */
    c->pc = RC_ADDR(0x000129eeu);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_129F0:
    /* 000129f0   6  move.w D3,(00dff042).l */
    c->pc = RC_ADDR(0x000129f0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff042u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_129F6:
    /* 000129f6   4  ori.w #b0a,D3 */
    c->pc = RC_ADDR(0x000129f6u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 | 0x00000b0au;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_129FA:
    /* 000129fa   2  clr.l D0 */
    c->pc = RC_ADDR(0x000129fau);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_129FC:
    /* 000129fc   4  move.b (5,A0),D0 */
    c->pc = RC_ADDR(0x000129fcu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_12A00:
    /* 00012a00   2  subq.b #1,D0 */
    c->pc = RC_ADDR(0x00012a00u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_12A02:
    /* 00012a02   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x00012a02u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_12A04:
    /* 00012a04   4  move.l (18,A0),D4 */
    c->pc = RC_ADDR(0x00012a04u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x18u));
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12A08:
    /* 00012a08   4  and.w #fb0a,D3 */
    c->pc = RC_ADDR(0x00012a08u);
    rc_step(c, m, 10);
    t0 = 0x0000fb0au;
    t2 = t0 & rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 3, RC_W, t2);

L_12A0C:
    /* 00012a0c   2  move.b D4,D5 */
    c->pc = RC_ADDR(0x00012a0cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_B);
    rc_d_set(c, 5, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_12A0E:
    /* 00012a0e   2  lsr.l #4,D4 */
    c->pc = RC_ADDR(0x00012a0eu);
    rc_step(c, m, 8);
    rc_d_set(c, 4, RC_L, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 4, RC_L), RC_L));

L_12A10:
    /* 00012a10   4  andi.b #f,D5 */
    c->pc = RC_ADDR(0x00012a10u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 5, RC_B);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 5, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_12A14:
    /* 00012a14   4  cmpi.b #8,D5 */
    c->pc = RC_ADDR(0x00012a14u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 5, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000008u);

L_12A18:
    /* 00012a18   2  blt 00012a20 */
    c->pc = RC_ADDR(0x00012a18u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_12A20;

L_12A1A:
    /* 00012a1a   4  btst #0,D5 */
    c->pc = RC_ADDR(0x00012a1au);
    rc_step(c, m, 10);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 5, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_12A1E:
    /* 00012a1e   2  beq 00012a24 */
    c->pc = RC_ADDR(0x00012a1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_12A24;

L_12A20:
    /* 00012a20   4  ori.w #fca,D3 */
    c->pc = RC_ADDR(0x00012a20u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 | 0x00000fcau;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_12A24:
    /* 00012a24   6  move.w D3,(00dff040).l */
    c->pc = RC_ADDR(0x00012a24u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A2A:
    /* 00012a2a   6  move.l A3,(00dff050).l */
    c->pc = RC_ADDR(0x00012a2au);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12A30:
    /* 00012a30   6  move.l (A0)+,(00dff04c).l */
    c->pc = RC_ADDR(0x00012a30u);
    rc_step(c, m, 28);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12A36:
    /* 00012a36   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x00012a36u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_12A38:
    /* 00012a38   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x00012a38u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_12A3A:
    /* 00012a3a   6  move.l A2,(00dff048).l */
    c->pc = RC_ADDR(0x00012a3au);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12A40:
    /* 00012a40   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x00012a40u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12A46:
    /* 00012a46   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x00012a46u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A4C:
    /* 00012a4c   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x00012a4cu);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_12A54:
    /* 00012a54   2  bne 00012a4c */
    c->pc = RC_ADDR(0x00012a54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_12A4C; }

L_12A56:
    /* 00012a56   4  dbf D0,00012a08 */
    c->pc = RC_ADDR(0x00012a56u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_12A08; }
    }

L_12A5A:
    /* 00012a5a   2  unlk A5 */
    c->pc = RC_ADDR(0x00012a5au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_12A5C:
    /* 00012a5c   2  rts */
    c->pc = RC_ADDR(0x00012a5cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
