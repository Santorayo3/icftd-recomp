/* fn_00012988 - 252 byte(s), 90 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00012988(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00012988u): goto L_12988;
    case RC_ADDR(0x0001298cu): goto L_1298C;
    case RC_ADDR(0x00012990u): goto L_12990;
    case RC_ADDR(0x00012992u): goto L_12992;
    case RC_ADDR(0x00012994u): goto L_12994;
    case RC_ADDR(0x00012998u): goto L_12998;
    case RC_ADDR(0x0001299cu): goto L_1299C;
    case RC_ADDR(0x000129a0u): goto L_129A0;
    case RC_ADDR(0x000129a4u): goto L_129A4;
    case RC_ADDR(0x000129a6u): goto L_129A6;
    case RC_ADDR(0x000129aau): goto L_129AA;
    case RC_ADDR(0x000129acu): goto L_129AC;
    case RC_ADDR(0x000129aeu): goto L_129AE;
    case RC_ADDR(0x000129b0u): goto L_129B0;
    case RC_ADDR(0x000129b2u): goto L_129B2;
    case RC_ADDR(0x000129b4u): goto L_129B4;
    case RC_ADDR(0x000129b6u): goto L_129B6;
    case RC_ADDR(0x000129b8u): goto L_129B8;
    case RC_ADDR(0x000129bau): goto L_129BA;
    case RC_ADDR(0x000129bcu): goto L_129BC;
    case RC_ADDR(0x000129beu): goto L_129BE;
    case RC_ADDR(0x000129c2u): goto L_129C2;
    case RC_ADDR(0x000129c4u): goto L_129C4;
    case RC_ADDR(0x000129c6u): goto L_129C6;
    case RC_ADDR(0x000129c8u): goto L_129C8;
    case RC_ADDR(0x000129cau): goto L_129CA;
    case RC_ADDR(0x000129ccu): goto L_129CC;
    case RC_ADDR(0x000129d0u): goto L_129D0;
    case RC_ADDR(0x000129d4u): goto L_129D4;
    case RC_ADDR(0x000129d6u): goto L_129D6;
    case RC_ADDR(0x000129dau): goto L_129DA;
    case RC_ADDR(0x000129deu): goto L_129DE;
    case RC_ADDR(0x000129e0u): goto L_129E0;
    case RC_ADDR(0x000129e2u): goto L_129E2;
    case RC_ADDR(0x000129e6u): goto L_129E6;
    case RC_ADDR(0x000129e8u): goto L_129E8;
    case RC_ADDR(0x000129ecu): goto L_129EC;
    case RC_ADDR(0x000129eeu): goto L_129EE;
    case RC_ADDR(0x000129f0u): goto L_129F0;
    case RC_ADDR(0x000129f4u): goto L_129F4;
    case RC_ADDR(0x000129f6u): goto L_129F6;
    case RC_ADDR(0x000129fau): goto L_129FA;
    case RC_ADDR(0x000129fcu): goto L_129FC;
    case RC_ADDR(0x000129feu): goto L_129FE;
    case RC_ADDR(0x00012a02u): goto L_12A02;
    case RC_ADDR(0x00012a04u): goto L_12A04;
    case RC_ADDR(0x00012a08u): goto L_12A08;
    case RC_ADDR(0x00012a0cu): goto L_12A0C;
    case RC_ADDR(0x00012a10u): goto L_12A10;
    case RC_ADDR(0x00012a14u): goto L_12A14;
    case RC_ADDR(0x00012a16u): goto L_12A16;
    case RC_ADDR(0x00012a18u): goto L_12A18;
    case RC_ADDR(0x00012a1au): goto L_12A1A;
    case RC_ADDR(0x00012a1cu): goto L_12A1C;
    case RC_ADDR(0x00012a1eu): goto L_12A1E;
    case RC_ADDR(0x00012a20u): goto L_12A20;
    case RC_ADDR(0x00012a22u): goto L_12A22;
    case RC_ADDR(0x00012a24u): goto L_12A24;
    case RC_ADDR(0x00012a26u): goto L_12A26;
    case RC_ADDR(0x00012a2au): goto L_12A2A;
    case RC_ADDR(0x00012a2cu): goto L_12A2C;
    case RC_ADDR(0x00012a32u): goto L_12A32;
    case RC_ADDR(0x00012a34u): goto L_12A34;
    case RC_ADDR(0x00012a36u): goto L_12A36;
    case RC_ADDR(0x00012a38u): goto L_12A38;
    case RC_ADDR(0x00012a3au): goto L_12A3A;
    case RC_ADDR(0x00012a3cu): goto L_12A3C;
    case RC_ADDR(0x00012a40u): goto L_12A40;
    case RC_ADDR(0x00012a42u): goto L_12A42;
    case RC_ADDR(0x00012a48u): goto L_12A48;
    case RC_ADDR(0x00012a4cu): goto L_12A4C;
    case RC_ADDR(0x00012a4eu): goto L_12A4E;
    case RC_ADDR(0x00012a50u): goto L_12A50;
    case RC_ADDR(0x00012a52u): goto L_12A52;
    case RC_ADDR(0x00012a54u): goto L_12A54;
    case RC_ADDR(0x00012a56u): goto L_12A56;
    case RC_ADDR(0x00012a5au): goto L_12A5A;
    case RC_ADDR(0x00012a5cu): goto L_12A5C;
    case RC_ADDR(0x00012a62u): goto L_12A62;
    case RC_ADDR(0x00012a64u): goto L_12A64;
    case RC_ADDR(0x00012a66u): goto L_12A66;
    case RC_ADDR(0x00012a68u): goto L_12A68;
    case RC_ADDR(0x00012a6au): goto L_12A6A;
    case RC_ADDR(0x00012a6cu): goto L_12A6C;
    case RC_ADDR(0x00012a70u): goto L_12A70;
    case RC_ADDR(0x00012a72u): goto L_12A72;
    case RC_ADDR(0x00012a78u): goto L_12A78;
    case RC_ADDR(0x00012a7cu): goto L_12A7C;
    case RC_ADDR(0x00012a80u): goto L_12A80;
    case RC_ADDR(0x00012a82u): goto L_12A82;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12988:
    /* 00012988   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00012988u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1298C:
    /* 0001298c   4  movem.l { D0 D1 D2 D3 A0 A1 A2 },-(SP) */
    c->pc = RC_ADDR(0x0001298cu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    c->a[7] = t3;

L_12990:
    /* 00012990   2  clr.l D0 */
    c->pc = RC_ADDR(0x00012990u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12992:
    /* 00012992   2  clr.l D1 */
    c->pc = RC_ADDR(0x00012992u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12994:
    /* 00012994   4  move.w (74e,A4),D0 */
    c->pc = RC_ADDR(0x00012994u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x74eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12998:
    /* 00012998   4  divu.w #14,D0 */
    c->pc = RC_ADDR(0x00012998u);
    rc_step(c, m, 144);
    t0 = 0x00000014u;
    rc_divu(c, m, 0, t0);

L_1299C:
    /* 0001299c   4  move.w (750,A4),D1 */
    c->pc = RC_ADDR(0x0001299cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x750u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_129A0:
    /* 000129a0   4  divu.w #14,D1 */
    c->pc = RC_ADDR(0x000129a0u);
    rc_step(c, m, 144);
    t0 = 0x00000014u;
    rc_divu(c, m, 1, t0);

L_129A4:
    /* 000129a4   2  move.l D1,D3 */
    c->pc = RC_ADDR(0x000129a4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 3, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_129A6:
    /* 000129a6   4  mulu.w #3c,D1 */
    c->pc = RC_ADDR(0x000129a6u);
    rc_step(c, m, 42);
    t0 = 0x0000003cu;
    rc_mulu(c, 1, t0);

L_129AA:
    /* 000129aa   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x000129aau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_129AC:
    /* 000129ac   2  swap D0 */
    c->pc = RC_ADDR(0x000129acu);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_129AE:
    /* 000129ae   2  swap D3 */
    c->pc = RC_ADDR(0x000129aeu);
    rc_step(c, m, 4);
    t0 = c->d[3];
    c->d[3] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[3], RC_L);

L_129B0:
    /* 000129b0   2  move.w D0,D2 */
    c->pc = RC_ADDR(0x000129b0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_129B2:
    /* 000129b2   2  clr.l D0 */
    c->pc = RC_ADDR(0x000129b2u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_129B4:
    /* 000129b4   2  clr.l D4 */
    c->pc = RC_ADDR(0x000129b4u);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_129B6:
    /* 000129b6   2  clr.l D5 */
    c->pc = RC_ADDR(0x000129b6u);
    rc_step(c, m, 6);
    rc_d_set(c, 5, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_129B8:
    /* 000129b8   2  clr.l D6 */
    c->pc = RC_ADDR(0x000129b8u);
    rc_step(c, m, 6);
    rc_d_set(c, 6, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_129BA:
    /* 000129ba   2  move.w D2,D4 */
    c->pc = RC_ADDR(0x000129bau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_129BC:
    /* 000129bc   2  move.w D3,D5 */
    c->pc = RC_ADDR(0x000129bcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_129BE:
    /* 000129be   4  mulu.w #14,D4 */
    c->pc = RC_ADDR(0x000129beu);
    rc_step(c, m, 42);
    t0 = 0x00000014u;
    rc_mulu(c, 4, t0);

L_129C2:
    /* 000129c2   2  move.w D4,D6 */
    c->pc = RC_ADDR(0x000129c2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_129C4:
    /* 000129c4   2  lsl.w #1,D6 */
    c->pc = RC_ADDR(0x000129c4u);
    rc_step(c, m, 6);
    rc_d_set(c, 6, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 6, RC_W), RC_W));

L_129C6:
    /* 000129c6   2  add.w D5,D4 */
    c->pc = RC_ADDR(0x000129c6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_129C8:
    /* 000129c8   2  lsl.w #1,D4 */
    c->pc = RC_ADDR(0x000129c8u);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 4, RC_W), RC_W));

L_129CA:
    /* 000129ca   2  lsl.w #1,D5 */
    c->pc = RC_ADDR(0x000129cau);
    rc_step(c, m, 6);
    rc_d_set(c, 5, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 5, RC_W), RC_W));

L_129CC:
    /* 000129cc   4  lea (ffffa21a,A4),A5 */
    c->pc = RC_ADDR(0x000129ccu);
    rc_step(c, m, 8);
    c->a[5] = (c->a[4] - 0x5de6u);

L_129D0:
    /* 000129d0   4  move.b (0,A5,D1.w),D0 */
    c->pc = RC_ADDR(0x000129d0u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd8(c, m, (c->a[5] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_129D4:
    /* 000129d4   2  lsl.w #2,D0 */
    c->pc = RC_ADDR(0x000129d4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_129D6:
    /* 000129d6   4  lea (b08,A4),A6 */
    c->pc = RC_ADDR(0x000129d6u);
    rc_step(c, m, 8);
    c->a[6] = (c->a[4] + 0xb08u);

L_129DA:
    /* 000129da   4  movea.l (0,A6,D0.w),A0 */
    c->pc = RC_ADDR(0x000129dau);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd32(c, m, (c->a[6] + 0x0u + t4));
    c->a[0] = t0;

L_129DE:
    /* 000129de   2  adda.l D4,A0 */
    c->pc = RC_ADDR(0x000129deu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] += t0;

L_129E0:
    /* 000129e0   2  clr.w D0 */
    c->pc = RC_ADDR(0x000129e0u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_129E2:
    /* 000129e2   4  move.b (1,A5,D1.w),D0 */
    c->pc = RC_ADDR(0x000129e2u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd8(c, m, (c->a[5] + 0x1u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_129E6:
    /* 000129e6   2  lsl.w #2,D0 */
    c->pc = RC_ADDR(0x000129e6u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_129E8:
    /* 000129e8   4  movea.l (0,A6,D0.w),A1 */
    c->pc = RC_ADDR(0x000129e8u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd32(c, m, (c->a[6] + 0x0u + t4));
    c->a[1] = t0;

L_129EC:
    /* 000129ec   2  adda.l D5,A1 */
    c->pc = RC_ADDR(0x000129ecu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 5, RC_L);
    c->a[1] += t0;

L_129EE:
    /* 000129ee   2  clr.w D0 */
    c->pc = RC_ADDR(0x000129eeu);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_129F0:
    /* 000129f0   4  move.b (3c,A5,D1.w),D0 */
    c->pc = RC_ADDR(0x000129f0u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd8(c, m, (c->a[5] + 0x3cu + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_129F4:
    /* 000129f4   2  lsl.w #2,D0 */
    c->pc = RC_ADDR(0x000129f4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_129F6:
    /* 000129f6   4  movea.l (0,A6,D0.w),A2 */
    c->pc = RC_ADDR(0x000129f6u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd32(c, m, (c->a[6] + 0x0u + t4));
    c->a[2] = t0;

L_129FA:
    /* 000129fa   2  adda.l D6,A2 */
    c->pc = RC_ADDR(0x000129fau);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 6, RC_L);
    c->a[2] += t0;

L_129FC:
    /* 000129fc   2  clr.w D0 */
    c->pc = RC_ADDR(0x000129fcu);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_129FE:
    /* 000129fe   4  move.b (3d,A5,D1.w),D0 */
    c->pc = RC_ADDR(0x000129feu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd8(c, m, (c->a[5] + 0x3du + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_12A02:
    /* 00012a02   2  lsl.w #2,D0 */
    c->pc = RC_ADDR(0x00012a02u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_12A04:
    /* 00012a04   4  movea.l (0,A6,D0.w),A3 */
    c->pc = RC_ADDR(0x00012a04u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd32(c, m, (c->a[6] + 0x0u + t4));
    c->a[3] = t0;

L_12A08:
    /* 00012a08   4  movea.l (fffff2f8,A4),A5 */
    c->pc = RC_ADDR(0x00012a08u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[5] = t0;

L_12A0C:
    /* 00012a0c   4  move.w #14,D0 */
    c->pc = RC_ADDR(0x00012a0cu);
    rc_step(c, m, 8);
    t0 = 0x00000014u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A10:
    /* 00012a10   4  move.w #14,D1 */
    c->pc = RC_ADDR(0x00012a10u);
    rc_step(c, m, 8);
    t0 = 0x00000014u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A14:
    /* 00012a14   2  sub.w D2,D0 */
    c->pc = RC_ADDR(0x00012a14u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12A16:
    /* 00012a16   2  sub.w D3,D1 */
    c->pc = RC_ADDR(0x00012a16u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12A18:
    /* 00012a18   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00012a18u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12A1A:
    /* 00012a1a   2  subq.w #1,D1 */
    c->pc = RC_ADDR(0x00012a1au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12A1C:
    /* 00012a1c   2  subq.w #1,D2 */
    c->pc = RC_ADDR(0x00012a1cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_12A1E:
    /* 00012a1e   2  subq.w #1,D3 */
    c->pc = RC_ADDR(0x00012a1eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_12A20:
    /* 00012a20   2  move.w D1,D4 */
    c->pc = RC_ADDR(0x00012a20u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A22:
    /* 00012a22   2  movea.l A0,A6 */
    c->pc = RC_ADDR(0x00012a22u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[6] = t0;

L_12A24:
    /* 00012a24   2  move.w (A0)+,(A5)+ */
    c->pc = RC_ADDR(0x00012a24u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    t3 = c->a[5];
    c->a[5] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A26:
    /* 00012a26   4  dbf D4,00012a24 */
    c->pc = RC_ADDR(0x00012a26u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 4, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 4, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_12A24; }
    }

L_12A2A:
    /* 00012a2a   2  movea.l A6,A0 */
    c->pc = RC_ADDR(0x00012a2au);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 6, RC_L);
    c->a[0] = t0;

L_12A2C:
    /* 00012a2c   6  adda.l #28,A0 */
    c->pc = RC_ADDR(0x00012a2cu);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    c->a[0] += t0;

L_12A32:
    /* 00012a32   2  tst.w D3 */
    c->pc = RC_ADDR(0x00012a32u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_12A34:
    /* 00012a34   2  bmi 00012a48 */
    c->pc = RC_ADDR(0x00012a34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_12A48;

L_12A36:
    /* 00012a36   2  move.w D3,D4 */
    c->pc = RC_ADDR(0x00012a36u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A38:
    /* 00012a38   2  movea.l A2,A6 */
    c->pc = RC_ADDR(0x00012a38u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[6] = t0;

L_12A3A:
    /* 00012a3a   2  move.w (A2)+,(A5)+ */
    c->pc = RC_ADDR(0x00012a3au);
    rc_step(c, m, 12);
    t3 = c->a[2];
    c->a[2] += 2u;
    t0 = rc_rd16(c, m, t3);
    t3 = c->a[5];
    c->a[5] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A3C:
    /* 00012a3c   4  dbf D4,00012a3a */
    c->pc = RC_ADDR(0x00012a3cu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 4, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 4, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_12A3A; }
    }

L_12A40:
    /* 00012a40   2  movea.l A6,A2 */
    c->pc = RC_ADDR(0x00012a40u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 6, RC_L);
    c->a[2] = t0;

L_12A42:
    /* 00012a42   6  adda.l #28,A2 */
    c->pc = RC_ADDR(0x00012a42u);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    c->a[2] += t0;

L_12A48:
    /* 00012a48   4  dbf D0,00012a20 */
    c->pc = RC_ADDR(0x00012a48u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_12A20; }
    }

L_12A4C:
    /* 00012a4c   2  tst.w D2 */
    c->pc = RC_ADDR(0x00012a4cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_12A4E:
    /* 00012a4e   2  bmi 00012a7c */
    c->pc = RC_ADDR(0x00012a4eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_12A7C;

L_12A50:
    /* 00012a50   2  move.w D1,D4 */
    c->pc = RC_ADDR(0x00012a50u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A52:
    /* 00012a52   2  movea.l A1,A6 */
    c->pc = RC_ADDR(0x00012a52u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 1, RC_L);
    c->a[6] = t0;

L_12A54:
    /* 00012a54   2  move.w (A1)+,(A5)+ */
    c->pc = RC_ADDR(0x00012a54u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    t3 = c->a[5];
    c->a[5] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A56:
    /* 00012a56   4  dbf D4,00012a54 */
    c->pc = RC_ADDR(0x00012a56u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 4, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 4, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_12A54; }
    }

L_12A5A:
    /* 00012a5a   2  movea.l A6,A1 */
    c->pc = RC_ADDR(0x00012a5au);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 6, RC_L);
    c->a[1] = t0;

L_12A5C:
    /* 00012a5c   6  adda.l #28,A1 */
    c->pc = RC_ADDR(0x00012a5cu);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    c->a[1] += t0;

L_12A62:
    /* 00012a62   2  tst.w D3 */
    c->pc = RC_ADDR(0x00012a62u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_12A64:
    /* 00012a64   2  bmi 00012a78 */
    c->pc = RC_ADDR(0x00012a64u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_12A78;

L_12A66:
    /* 00012a66   2  move.w D3,D4 */
    c->pc = RC_ADDR(0x00012a66u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A68:
    /* 00012a68   2  movea.l A3,A6 */
    c->pc = RC_ADDR(0x00012a68u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[6] = t0;

L_12A6A:
    /* 00012a6a   2  move.w (A3)+,(A5)+ */
    c->pc = RC_ADDR(0x00012a6au);
    rc_step(c, m, 12);
    t3 = c->a[3];
    c->a[3] += 2u;
    t0 = rc_rd16(c, m, t3);
    t3 = c->a[5];
    c->a[5] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12A6C:
    /* 00012a6c   4  dbf D4,00012a6a */
    c->pc = RC_ADDR(0x00012a6cu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 4, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 4, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_12A6A; }
    }

L_12A70:
    /* 00012a70   2  movea.l A6,A3 */
    c->pc = RC_ADDR(0x00012a70u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 6, RC_L);
    c->a[3] = t0;

L_12A72:
    /* 00012a72   6  adda.l #28,A3 */
    c->pc = RC_ADDR(0x00012a72u);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    c->a[3] += t0;

L_12A78:
    /* 00012a78   4  dbf D2,00012a50 */
    c->pc = RC_ADDR(0x00012a78u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_12A50; }
    }

L_12A7C:
    /* 00012a7c   4  movem.l (SP)+,{ D5 D6 D7 A4 A5 A6 A7 } */
    c->pc = RC_ADDR(0x00012a7cu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
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
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_12A80:
    /* 00012a80   2  unlk A5 */
    c->pc = RC_ADDR(0x00012a80u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_12A82:
    /* 00012a82   2  rts */
    c->pc = RC_ADDR(0x00012a82u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
