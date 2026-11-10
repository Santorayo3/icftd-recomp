/* fn_0000895e - 276 byte(s), 85 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000895e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000895eu): goto L_895E;
    case RC_ADDR(0x00008962u): goto L_8962;
    case RC_ADDR(0x00008966u): goto L_8966;
    case RC_ADDR(0x0000896au): goto L_896A;
    case RC_ADDR(0x0000896cu): goto L_896C;
    case RC_ADDR(0x0000896eu): goto L_896E;
    case RC_ADDR(0x00008972u): goto L_8972;
    case RC_ADDR(0x00008974u): goto L_8974;
    case RC_ADDR(0x00008978u): goto L_8978;
    case RC_ADDR(0x0000897cu): goto L_897C;
    case RC_ADDR(0x0000897eu): goto L_897E;
    case RC_ADDR(0x00008980u): goto L_8980;
    case RC_ADDR(0x00008984u): goto L_8984;
    case RC_ADDR(0x00008988u): goto L_8988;
    case RC_ADDR(0x0000898eu): goto L_898E;
    case RC_ADDR(0x00008990u): goto L_8990;
    case RC_ADDR(0x00008994u): goto L_8994;
    case RC_ADDR(0x00008998u): goto L_8998;
    case RC_ADDR(0x0000899cu): goto L_899C;
    case RC_ADDR(0x0000899eu): goto L_899E;
    case RC_ADDR(0x000089a2u): goto L_89A2;
    case RC_ADDR(0x000089a6u): goto L_89A6;
    case RC_ADDR(0x000089a8u): goto L_89A8;
    case RC_ADDR(0x000089aau): goto L_89AA;
    case RC_ADDR(0x000089aeu): goto L_89AE;
    case RC_ADDR(0x000089b2u): goto L_89B2;
    case RC_ADDR(0x000089b4u): goto L_89B4;
    case RC_ADDR(0x000089b6u): goto L_89B6;
    case RC_ADDR(0x000089bau): goto L_89BA;
    case RC_ADDR(0x000089beu): goto L_89BE;
    case RC_ADDR(0x000089c2u): goto L_89C2;
    case RC_ADDR(0x000089c6u): goto L_89C6;
    case RC_ADDR(0x000089c8u): goto L_89C8;
    case RC_ADDR(0x000089ccu): goto L_89CC;
    case RC_ADDR(0x000089d0u): goto L_89D0;
    case RC_ADDR(0x000089d4u): goto L_89D4;
    case RC_ADDR(0x000089d6u): goto L_89D6;
    case RC_ADDR(0x000089dau): goto L_89DA;
    case RC_ADDR(0x000089deu): goto L_89DE;
    case RC_ADDR(0x000089e0u): goto L_89E0;
    case RC_ADDR(0x000089e2u): goto L_89E2;
    case RC_ADDR(0x000089e4u): goto L_89E4;
    case RC_ADDR(0x000089e6u): goto L_89E6;
    case RC_ADDR(0x000089e8u): goto L_89E8;
    case RC_ADDR(0x000089eau): goto L_89EA;
    case RC_ADDR(0x000089f0u): goto L_89F0;
    case RC_ADDR(0x000089f4u): goto L_89F4;
    case RC_ADDR(0x000089f8u): goto L_89F8;
    case RC_ADDR(0x000089fcu): goto L_89FC;
    case RC_ADDR(0x00008a00u): goto L_8A00;
    case RC_ADDR(0x00008a02u): goto L_8A02;
    case RC_ADDR(0x00008a04u): goto L_8A04;
    case RC_ADDR(0x00008a06u): goto L_8A06;
    case RC_ADDR(0x00008a0au): goto L_8A0A;
    case RC_ADDR(0x00008a0eu): goto L_8A0E;
    case RC_ADDR(0x00008a10u): goto L_8A10;
    case RC_ADDR(0x00008a12u): goto L_8A12;
    case RC_ADDR(0x00008a16u): goto L_8A16;
    case RC_ADDR(0x00008a1au): goto L_8A1A;
    case RC_ADDR(0x00008a1cu): goto L_8A1C;
    case RC_ADDR(0x00008a1eu): goto L_8A1E;
    case RC_ADDR(0x00008a22u): goto L_8A22;
    case RC_ADDR(0x00008a26u): goto L_8A26;
    case RC_ADDR(0x00008a28u): goto L_8A28;
    case RC_ADDR(0x00008a2eu): goto L_8A2E;
    case RC_ADDR(0x00008a30u): goto L_8A30;
    case RC_ADDR(0x00008a34u): goto L_8A34;
    case RC_ADDR(0x00008a38u): goto L_8A38;
    case RC_ADDR(0x00008a3cu): goto L_8A3C;
    case RC_ADDR(0x00008a40u): goto L_8A40;
    case RC_ADDR(0x00008a44u): goto L_8A44;
    case RC_ADDR(0x00008a48u): goto L_8A48;
    case RC_ADDR(0x00008a4au): goto L_8A4A;
    case RC_ADDR(0x00008a4eu): goto L_8A4E;
    case RC_ADDR(0x00008a52u): goto L_8A52;
    case RC_ADDR(0x00008a56u): goto L_8A56;
    case RC_ADDR(0x00008a5au): goto L_8A5A;
    case RC_ADDR(0x00008a5eu): goto L_8A5E;
    case RC_ADDR(0x00008a62u): goto L_8A62;
    case RC_ADDR(0x00008a64u): goto L_8A64;
    case RC_ADDR(0x00008a66u): goto L_8A66;
    case RC_ADDR(0x00008a6au): goto L_8A6A;
    case RC_ADDR(0x00008a6cu): goto L_8A6C;
    case RC_ADDR(0x00008a6eu): goto L_8A6E;
    case RC_ADDR(0x00008a70u): goto L_8A70;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_895E:
    /* 0000895e   4  link.w A5,#ffffffec */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000895eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x14u;

L_8962:
    /* 00008962   4  movem.l { A2 A3 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008962u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_8966:
    /* 00008966   4  move.b (fffff0ba,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008966u);
    t0 = rc_rd8(c, m, (c->a[4] - 0xf46u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_896A:
    /* 0000896a   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000896au);
    rc_ext_w(c, 0);

L_896C:
    /* 0000896c   2  move.w D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000896cu);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_896E:
    /* 0000896e   4  jsr (000057ba) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000896eu);
    rc_push32(c, m, RC_ADDR(0x00008972u));
    rc_depth++;
    c->pc = RC_ADDR(0x000057bau);
    return;

L_8972:
    /* 00008972   2  addq.w #2,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008972u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_8974:
    /* 00008974   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008974u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8978:
    /* 00008978   4  jsr (ffff8230,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008978u);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x0000897cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001de7au);
    return;

L_897C:
    /* 0000897c   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000897cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_897E:
    /* 0000897e   2  tst.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000897eu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_8980:
    /* 00008980   4  beq 00008a6e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008980u);
    if (rc_cond(c, 7)) goto L_8A6E;

L_8984:
    /* 00008984   4  jsr (ffff8050,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008984u);
    /* vector 13 */
    rc_push32(c, m, RC_ADDR(0x00008988u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003532u);
    return;

L_8988:
    /* 00008988   6  cmpi.w #2,(fffff100,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008988u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf00u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_898E:
    /* 0000898e   2  bne 00008994 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000898eu);
    if (rc_cond(c, 6)) goto L_8994;

L_8990:
    /* 00008990   4  jsr (00005e6c) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008990u);
    rc_push32(c, m, RC_ADDR(0x00008994u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005e6cu);
    return;

L_8994:
    /* 00008994   4  pea (00008a72) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008994u);
    rc_push32(c, m, RC_ADDR(0x00008a72u));

L_8998:
    /* 00008998   4  jsr (ffff828a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008998u);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000899cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000202c4u);
    return;

L_899C:
    /* 0000899c   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000899cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_899E:
    /* 0000899e   4  pea (00008a81) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000899eu);
    rc_push32(c, m, RC_ADDR(0x00008a81u));

L_89A2:
    /* 000089a2   4  jsr (ffff8230,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089a2u);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x000089a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001de7au);
    return;

L_89A6:
    /* 000089a6   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089a6u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_89A8:
    /* 000089a8   2  tst.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089a8u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_89AA:
    /* 000089aa   4  beq 00008a6e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089aau);
    if (rc_cond(c, 7)) goto L_8A6E;

L_89AE:
    /* 000089ae   4  move.w (22,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089aeu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x22u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_89B2:
    /* 000089b2   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089b2u);
    rc_ext_l(c, 0);

L_89B4:
    /* 000089b4   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089b4u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_89B6:
    /* 000089b6   4  lea (ffff92a0,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089b6u);
    c->a[0] = (c->a[4] - 0x6d60u);

L_89BA:
    /* 000089ba   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089bau);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_89BE:
    /* 000089be   4  pea (ffffffec,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089beu);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_89C2:
    /* 000089c2   4  jsr (ffff82a8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089c2u);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x000089c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020810u);
    return;

L_89C6:
    /* 000089c6   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089c6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_89C8:
    /* 000089c8   4  pea (00008a86) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089c8u);
    rc_push32(c, m, RC_ADDR(0x00008a86u));

L_89CC:
    /* 000089cc   4  pea (ffffffec,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089ccu);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_89D0:
    /* 000089d0   4  jsr (ffff82c6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089d0u);
    /* vector 118 */
    rc_push32(c, m, RC_ADDR(0x000089d4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020c92u);
    return;

L_89D4:
    /* 000089d4   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089d4u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_89D6:
    /* 000089d6   4  pea (ffffffec,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089d6u);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_89DA:
    /* 000089da   4  jsr (ffff82ae,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089dau);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x000089deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020820u);
    return;

L_89DE:
    /* 000089de   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089deu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_89E0:
    /* 000089e0   2  subq.w #5,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089e0u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000005u;
    rc_flags_sub(c, RC_W, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_89E2:
    /* 000089e2   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089e2u);
    rc_ext_l(c, 0);

L_89E4:
    /* 000089e4   2  move.l D0,D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089e4u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_89E6:
    /* 000089e6   2  moveq #0,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089e6u);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_89E8:
    /* 000089e8   2  move.l D4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089e8u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_89EA:
    /* 000089ea   6  add.l #31,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089eau);
    t0 = 0x00000031u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_89F0:
    /* 000089f0   4  lea (ffffffec,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089f0u);
    c->a[0] = (c->a[5] - 0x14u);

L_89F4:
    /* 000089f4   4  move.b D0,(0,A0,D5.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089f4u);
    t0 = rc_d_get(c, 0, RC_B);
    t4 = c->d[5];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_89F8:
    /* 000089f8   4  pea (ffffffec,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089f8u);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_89FC:
    /* 000089fc   4  jsr (ffff8206,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000089fcu);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x00008a00u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_8A00:
    /* 00008a00   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a00u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_8A02:
    /* 00008a02   2  move.l D4,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a02u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_8A04:
    /* 00008a04   2  asl.l #2,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a04u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_8A06:
    /* 00008a06   4  lea (24,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a06u);
    c->a[0] = (c->a[4] + 0x24u);

L_8A0A:
    /* 00008a0a   4  move.l D0,(0,A0,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a0au);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_8A0E:
    /* 00008a0e   2  move.l D4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a0eu);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_8A10:
    /* 00008a10   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a10u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_8A12:
    /* 00008a12   4  lea (5c,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a12u);
    c->a[0] = (c->a[4] + 0x5cu);

L_8A16:
    /* 00008a16   4  clr.l (0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a16u);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_8A1A:
    /* 00008a1a   2  move.l D4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a1au);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_8A1C:
    /* 00008a1c   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a1cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_8A1E:
    /* 00008a1e   4  lea (40,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a1eu);
    c->a[0] = (c->a[4] + 0x40u);

L_8A22:
    /* 00008a22   4  clr.l (0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a22u);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_8A26:
    /* 00008a26   2  addq.l #1,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a26u);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_8A28:
    /* 00008a28   6  cmp.l #7,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a28u);
    t0 = 0x00000007u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_8A2E:
    /* 00008a2e   2  blt 000089e8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a2eu);
    if (rc_cond(c, 13)) { rc_tick(); goto L_89E8; }

L_8A30:
    /* 00008a30   4  pea (27a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a30u);
    rc_push32(c, m, (c->a[4] + 0x27au));

L_8A34:
    /* 00008a34   4  pea (276,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a34u);
    rc_push32(c, m, (c->a[4] + 0x276u));

L_8A38:
    /* 00008a38   4  pea (00008a8e) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a38u);
    rc_push32(c, m, RC_ADDR(0x00008a8eu));

L_8A3C:
    /* 00008a3c   4  jsr (ffff80b0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a3cu);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x00008a40u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009984u);
    return;

L_8A40:
    /* 00008a40   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a40u);
    c->a[7] = (c->a[7] + 0xcu);

L_8A44:
    /* 00008a44   4  move.l D0,(26e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a44u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x26eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_8A48:
    /* 00008a48   2  beq 00008a6e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a48u);
    if (rc_cond(c, 7)) goto L_8A6E;

L_8A4A:
    /* 00008a4a   4  pea (27e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a4au);
    rc_push32(c, m, (c->a[4] + 0x27eu));

L_8A4E:
    /* 00008a4e   4  pea (278,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a4eu);
    rc_push32(c, m, (c->a[4] + 0x278u));

L_8A52:
    /* 00008a52   4  pea (00008a9f) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a52u);
    rc_push32(c, m, RC_ADDR(0x00008a9fu));

L_8A56:
    /* 00008a56   4  jsr (ffff80b0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a56u);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x00008a5au));
    rc_depth++;
    c->pc = RC_ADDR(0x00009984u);
    return;

L_8A5A:
    /* 00008a5a   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a5au);
    c->a[7] = (c->a[7] + 0xcu);

L_8A5E:
    /* 00008a5e   4  move.l D0,(272,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a5eu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x272u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_8A62:
    /* 00008a62   2  beq 00008a6e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a62u);
    if (rc_cond(c, 7)) goto L_8A6E;

L_8A64:
    /* 00008a64   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a64u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_8A66:
    /* 00008a66   4  movem.l (SP)+,{ D4 D5 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a66u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_8A6A:
    /* 00008a6a   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a6au);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_8A6C:
    /* 00008a6c   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a6cu);
    rc_ret(c, m);
    return;

L_8A6E:
    /* 00008a6e   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a6eu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_8A70:
    /* 00008a70   2  bra 00008a66 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00008a70u);
    rc_tick();
    goto L_8A66;

}
