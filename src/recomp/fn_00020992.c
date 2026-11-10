/* fn_00020992 - 310 byte(s), 87 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020992(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00020992u): goto L_20992;
    case RC_ADDR(0x00020996u): goto L_20996;
    case RC_ADDR(0x00020998u): goto L_20998;
    case RC_ADDR(0x0002099eu): goto L_2099E;
    case RC_ADDR(0x000209a2u): goto L_209A2;
    case RC_ADDR(0x000209a6u): goto L_209A6;
    case RC_ADDR(0x000209a8u): goto L_209A8;
    case RC_ADDR(0x000209acu): goto L_209AC;
    case RC_ADDR(0x000209b0u): goto L_209B0;
    case RC_ADDR(0x000209b2u): goto L_209B2;
    case RC_ADDR(0x000209b4u): goto L_209B4;
    case RC_ADDR(0x000209b6u): goto L_209B6;
    case RC_ADDR(0x000209bcu): goto L_209BC;
    case RC_ADDR(0x000209c0u): goto L_209C0;
    case RC_ADDR(0x000209c2u): goto L_209C2;
    case RC_ADDR(0x000209c6u): goto L_209C6;
    case RC_ADDR(0x000209c8u): goto L_209C8;
    case RC_ADDR(0x000209ccu): goto L_209CC;
    case RC_ADDR(0x000209d0u): goto L_209D0;
    case RC_ADDR(0x000209d4u): goto L_209D4;
    case RC_ADDR(0x000209dau): goto L_209DA;
    case RC_ADDR(0x000209deu): goto L_209DE;
    case RC_ADDR(0x000209e4u): goto L_209E4;
    case RC_ADDR(0x000209e8u): goto L_209E8;
    case RC_ADDR(0x000209ecu): goto L_209EC;
    case RC_ADDR(0x000209f0u): goto L_209F0;
    case RC_ADDR(0x000209f2u): goto L_209F2;
    case RC_ADDR(0x000209f6u): goto L_209F6;
    case RC_ADDR(0x000209fau): goto L_209FA;
    case RC_ADDR(0x00020a00u): goto L_20A00;
    case RC_ADDR(0x00020a02u): goto L_20A02;
    case RC_ADDR(0x00020a06u): goto L_20A06;
    case RC_ADDR(0x00020a08u): goto L_20A08;
    case RC_ADDR(0x00020a0cu): goto L_20A0C;
    case RC_ADDR(0x00020a0eu): goto L_20A0E;
    case RC_ADDR(0x00020a10u): goto L_20A10;
    case RC_ADDR(0x00020a14u): goto L_20A14;
    case RC_ADDR(0x00020a18u): goto L_20A18;
    case RC_ADDR(0x00020a1au): goto L_20A1A;
    case RC_ADDR(0x00020a1eu): goto L_20A1E;
    case RC_ADDR(0x00020a24u): goto L_20A24;
    case RC_ADDR(0x00020a28u): goto L_20A28;
    case RC_ADDR(0x00020a2eu): goto L_20A2E;
    case RC_ADDR(0x00020a32u): goto L_20A32;
    case RC_ADDR(0x00020a38u): goto L_20A38;
    case RC_ADDR(0x00020a3cu): goto L_20A3C;
    case RC_ADDR(0x00020a3eu): goto L_20A3E;
    case RC_ADDR(0x00020a42u): goto L_20A42;
    case RC_ADDR(0x00020a46u): goto L_20A46;
    case RC_ADDR(0x00020a4au): goto L_20A4A;
    case RC_ADDR(0x00020a4eu): goto L_20A4E;
    case RC_ADDR(0x00020a52u): goto L_20A52;
    case RC_ADDR(0x00020a56u): goto L_20A56;
    case RC_ADDR(0x00020a5au): goto L_20A5A;
    case RC_ADDR(0x00020a5cu): goto L_20A5C;
    case RC_ADDR(0x00020a5eu): goto L_20A5E;
    case RC_ADDR(0x00020a62u): goto L_20A62;
    case RC_ADDR(0x00020a66u): goto L_20A66;
    case RC_ADDR(0x00020a68u): goto L_20A68;
    case RC_ADDR(0x00020a6cu): goto L_20A6C;
    case RC_ADDR(0x00020a6eu): goto L_20A6E;
    case RC_ADDR(0x00020a72u): goto L_20A72;
    case RC_ADDR(0x00020a74u): goto L_20A74;
    case RC_ADDR(0x00020a78u): goto L_20A78;
    case RC_ADDR(0x00020a7eu): goto L_20A7E;
    case RC_ADDR(0x00020a80u): goto L_20A80;
    case RC_ADDR(0x00020a84u): goto L_20A84;
    case RC_ADDR(0x00020a88u): goto L_20A88;
    case RC_ADDR(0x00020a8au): goto L_20A8A;
    case RC_ADDR(0x00020a8eu): goto L_20A8E;
    case RC_ADDR(0x00020a92u): goto L_20A92;
    case RC_ADDR(0x00020a96u): goto L_20A96;
    case RC_ADDR(0x00020a98u): goto L_20A98;
    case RC_ADDR(0x00020a9cu): goto L_20A9C;
    case RC_ADDR(0x00020aa0u): goto L_20AA0;
    case RC_ADDR(0x00020aa4u): goto L_20AA4;
    case RC_ADDR(0x00020aa8u): goto L_20AA8;
    case RC_ADDR(0x00020aacu): goto L_20AAC;
    case RC_ADDR(0x00020aaeu): goto L_20AAE;
    case RC_ADDR(0x00020ab2u): goto L_20AB2;
    case RC_ADDR(0x00020ab6u): goto L_20AB6;
    case RC_ADDR(0x00020abau): goto L_20ABA;
    case RC_ADDR(0x00020abcu): goto L_20ABC;
    case RC_ADDR(0x00020ac0u): goto L_20AC0;
    case RC_ADDR(0x00020ac2u): goto L_20AC2;
    case RC_ADDR(0x00020ac4u): goto L_20AC4;
    case RC_ADDR(0x00020ac6u): goto L_20AC6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20992:
    /* 00020992   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00020992u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_20996:
    /* 00020996   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00020996u);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20998:
    /* 00020998   6  pea (00010000).l */
    c->pc = RC_ADDR(0x00020998u);
    rc_push32(c, m, RC_ADDR(0x00010000u));

L_2099E:
    /* 0002099e   4  move.w (ffffcdbe,A4),D0 */
    c->pc = RC_ADDR(0x0002099eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3242u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_209A2:
    /* 000209a2   4  muls.w #6,D0 */
    c->pc = RC_ADDR(0x000209a2u);
    t0 = 0x00000006u;
    rc_muls(c, 0, t0);

L_209A6:
    /* 000209a6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000209a6u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_209A8:
    /* 000209a8   4  jsr (00021690) */
    c->pc = RC_ADDR(0x000209a8u);
    /* exec.library -198 */
    c->pc = RC_ADDR(0x000209acu);
    rc_os_call(c, m, 0, -198);

L_209AC:
    /* 000209ac   4  move.l D0,(3afc,A4) */
    c->pc = RC_ADDR(0x000209acu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3afcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_209B0:
    /* 000209b0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000209b0u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_209B2:
    /* 000209b2   2  bne 000209c8 */
    c->pc = RC_ADDR(0x000209b2u);
    if (rc_cond(c, 6)) goto L_209C8;

L_209B4:
    /* 000209b4   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000209b4u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_209B6:
    /* 000209b6   6  pea (00010000).l */
    c->pc = RC_ADDR(0x000209b6u);
    rc_push32(c, m, RC_ADDR(0x00010000u));

L_209BC:
    /* 000209bc   4  jsr (000214c6) */
    c->pc = RC_ADDR(0x000209bcu);
    rc_push32(c, m, RC_ADDR(0x000209c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x000214c6u);
    return;

L_209C0:
    /* 000209c0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000209c0u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_209C2:
    /* 000209c2   4  movea.l (3af0,A4),A7 */
    c->pc = RC_ADDR(0x000209c2u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af0u));
    c->a[7] = t0;

L_209C6:
    /* 000209c6   2  rts */
    c->pc = RC_ADDR(0x000209c6u);
    rc_ret(c, m);
    return;

L_209C8:
    /* 000209c8   4  movea.l (3afc,A4),A0 */
    c->pc = RC_ADDR(0x000209c8u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3afcu));
    c->a[0] = t0;

L_209CC:
    /* 000209cc   4  clr.w (4,A0) */
    c->pc = RC_ADDR(0x000209ccu);
    rc_wr16(c, m, (c->a[0] + 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_209D0:
    /* 000209d0   4  movea.l (3afc,A4),A0 */
    c->pc = RC_ADDR(0x000209d0u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3afcu));
    c->a[0] = t0;

L_209D4:
    /* 000209d4   6  move.w #1,(10,A0) */
    c->pc = RC_ADDR(0x000209d4u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[0] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_209DA:
    /* 000209da   4  movea.l (3afc,A4),A0 */
    c->pc = RC_ADDR(0x000209dau);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3afcu));
    c->a[0] = t0;

L_209DE:
    /* 000209de   6  move.w #1,(a,A0) */
    c->pc = RC_ADDR(0x000209deu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[0] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_209E4:
    /* 000209e4   4  movea.l (3af0,A4),A0 */
    c->pc = RC_ADDR(0x000209e4u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af0u));
    c->a[0] = t0;

L_209E8:
    /* 000209e8   4  move.l (3af0,A4),D0 */
    c->pc = RC_ADDR(0x000209e8u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af0u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_209EC:
    /* 000209ec   4  sub.l (4,A0),D0 */
    c->pc = RC_ADDR(0x000209ecu);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_209F0:
    /* 000209f0   2  addq.l #8,D0 */
    c->pc = RC_ADDR(0x000209f0u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_L, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_209F2:
    /* 000209f2   4  move.l D0,(3b00,A4) */
    c->pc = RC_ADDR(0x000209f2u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3b00u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_209F6:
    /* 000209f6   4  movea.l (3b00,A4),A0 */
    c->pc = RC_ADDR(0x000209f6u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b00u));
    c->a[0] = t0;

L_209FA:
    /* 000209fa   6  move.l #4d414e58,(A0) */
    c->pc = RC_ADDR(0x000209fau);
    t0 = 0x4d414e58u;
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20A00:
    /* 00020a00   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00020a00u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20A02:
    /* 00020a02   4  jsr (000216b8) */
    c->pc = RC_ADDR(0x00020a02u);
    /* exec.library -294 */
    c->pc = RC_ADDR(0x00020a06u);
    rc_os_call(c, m, 0, -294);

L_20A06:
    /* 00020a06   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x00020a06u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_20A08:
    /* 00020a08   4  tst.l (ac,A2) */
    c->pc = RC_ADDR(0x00020a08u);
    t0 = rc_rd32(c, m, (c->a[2] + 0xacu));
    rc_set_nzvc(c, t0, RC_L);

L_20A0C:
    /* 00020a0c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020a0cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20A0E:
    /* 00020a0e   2  beq 00020a3e */
    c->pc = RC_ADDR(0x00020a0eu);
    if (rc_cond(c, 7)) goto L_20A3E;

L_20A10:
    /* 00020a10   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00020a10u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20A14:
    /* 00020a14   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00020a14u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20A18:
    /* 00020a18   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00020a18u);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20A1A:
    /* 00020a1a   4  jsr (00020aca) */
    c->pc = RC_ADDR(0x00020a1au);
    rc_push32(c, m, RC_ADDR(0x00020a1eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020acau);
    return;

L_20A1E:
    /* 00020a1e   6  move.w #1,(3b04,A4) */
    c->pc = RC_ADDR(0x00020a1eu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x3b04u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20A24:
    /* 00020a24   4  movea.l (3afc,A4),A0 */
    c->pc = RC_ADDR(0x00020a24u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3afcu));
    c->a[0] = t0;

L_20A28:
    /* 00020a28   6  ori.w #8000,(4,A0) */
    c->pc = RC_ADDR(0x00020a28u);
    t3 = (c->a[0] + 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00008000u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_20A2E:
    /* 00020a2e   4  movea.l (3afc,A4),A0 */
    c->pc = RC_ADDR(0x00020a2eu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3afcu));
    c->a[0] = t0;

L_20A32:
    /* 00020a32   6  ori.w #8000,(a,A0) */
    c->pc = RC_ADDR(0x00020a32u);
    t3 = (c->a[0] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00008000u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_20A38:
    /* 00020a38   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00020a38u);
    c->a[7] = (c->a[7] + 0xcu);

L_20A3C:
    /* 00020a3c   2  bra 00020a80 */
    c->pc = RC_ADDR(0x00020a3cu);
    goto L_20A80;

L_20A3E:
    /* 00020a3e   4  pea (5c,A2) */
    c->pc = RC_ADDR(0x00020a3eu);
    rc_push32(c, m, (c->a[2] + 0x5cu));

L_20A42:
    /* 00020a42   4  jsr (0002176a) */
    c->pc = RC_ADDR(0x00020a42u);
    /* exec.library -384 */
    c->pc = RC_ADDR(0x00020a46u);
    rc_os_call(c, m, 0, -384);

L_20A46:
    /* 00020a46   4  pea (5c,A2) */
    c->pc = RC_ADDR(0x00020a46u);
    rc_push32(c, m, (c->a[2] + 0x5cu));

L_20A4A:
    /* 00020a4a   4  jsr (000216ec) */
    c->pc = RC_ADDR(0x00020a4au);
    /* exec.library -372 */
    c->pc = RC_ADDR(0x00020a4eu);
    rc_os_call(c, m, 0, -372);

L_20A4E:
    /* 00020a4e   4  move.l D0,(3b06,A4) */
    c->pc = RC_ADDR(0x00020a4eu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3b06u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20A52:
    /* 00020a52   4  movea.l (3b06,A4),A0 */
    c->pc = RC_ADDR(0x00020a52u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b06u));
    c->a[0] = t0;

L_20A56:
    /* 00020a56   4  tst.l (24,A0) */
    c->pc = RC_ADDR(0x00020a56u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    rc_set_nzvc(c, t0, RC_L);

L_20A5A:
    /* 00020a5a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020a5au);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20A5C:
    /* 00020a5c   2  beq 00020a6e */
    c->pc = RC_ADDR(0x00020a5cu);
    if (rc_cond(c, 7)) goto L_20A6E;

L_20A5E:
    /* 00020a5e   4  movea.l (3b06,A4),A0 */
    c->pc = RC_ADDR(0x00020a5eu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b06u));
    c->a[0] = t0;

L_20A62:
    /* 00020a62   4  movea.l (24,A0),A1 */
    c->pc = RC_ADDR(0x00020a62u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[1] = t0;

L_20A66:
    /* 00020a66   2  move.l (A1),-(A7) */
    c->pc = RC_ADDR(0x00020a66u);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20A68:
    /* 00020a68   4  jsr (00021410) */
    c->pc = RC_ADDR(0x00020a68u);
    rc_push32(c, m, RC_ADDR(0x00020a6cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021410u);
    return;

L_20A6C:
    /* 00020a6c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020a6cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20A6E:
    /* 00020a6e   4  move.l (3b06,A4),-(A7) */
    c->pc = RC_ADDR(0x00020a6eu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b06u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20A72:
    /* 00020a72   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00020a72u);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20A74:
    /* 00020a74   4  jsr (00020d02) */
    c->pc = RC_ADDR(0x00020a74u);
    rc_push32(c, m, RC_ADDR(0x00020a78u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020d02u);
    return;

L_20A78:
    /* 00020a78   6  move.l (3b06,A4),(3b0a,A4) */
    c->pc = RC_ADDR(0x00020a78u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b06u));
    rc_wr32(c, m, (c->a[4] + 0x3b0au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20A7E:
    /* 00020a7e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020a7eu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20A80:
    /* 00020a80   4  jsr (00021442) */
    c->pc = RC_ADDR(0x00020a80u);
    rc_push32(c, m, RC_ADDR(0x00020a84u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021442u);
    return;

L_20A84:
    /* 00020a84   4  movea.l (3afc,A4),A0 */
    c->pc = RC_ADDR(0x00020a84u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3afcu));
    c->a[0] = t0;

L_20A88:
    /* 00020a88   2  move.l D0,(A0) */
    c->pc = RC_ADDR(0x00020a88u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20A8A:
    /* 00020a8a   4  jsr (0002146a) */
    c->pc = RC_ADDR(0x00020a8au);
    rc_push32(c, m, RC_ADDR(0x00020a8eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002146au);
    return;

L_20A8E:
    /* 00020a8e   4  movea.l (3afc,A4),A0 */
    c->pc = RC_ADDR(0x00020a8eu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3afcu));
    c->a[0] = t0;

L_20A92:
    /* 00020a92   4  move.l D0,(6,A0) */
    c->pc = RC_ADDR(0x00020a92u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20A96:
    /* 00020a96   2  beq 00020aae */
    c->pc = RC_ADDR(0x00020a96u);
    if (rc_cond(c, 7)) goto L_20AAE;

L_20A98:
    /* 00020a98   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x00020a98u);
    rc_push32(c, m, RC_ADDR(0x000003edu));

L_20A9C:
    /* 00020a9c   4  pea (00020ac8) */
    c->pc = RC_ADDR(0x00020a9cu);
    rc_push32(c, m, RC_ADDR(0x00020ac8u));

L_20AA0:
    /* 00020aa0   4  jsr (0002145c) */
    c->pc = RC_ADDR(0x00020aa0u);
    rc_push32(c, m, RC_ADDR(0x00020aa4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002145cu);
    return;

L_20AA4:
    /* 00020aa4   4  movea.l (3afc,A4),A0 */
    c->pc = RC_ADDR(0x00020aa4u);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3afcu));
    c->a[0] = t0;

L_20AA8:
    /* 00020aa8   4  move.l D0,(c,A0) */
    c->pc = RC_ADDR(0x00020aa8u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20AAC:
    /* 00020aac   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020aacu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20AAE:
    /* 00020aae   4  move.l (3b0a,A4),-(A7) */
    c->pc = RC_ADDR(0x00020aaeu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3b0au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20AB2:
    /* 00020ab2   4  move.w (3b0e,A4),-(A7) */
    c->pc = RC_ADDR(0x00020ab2u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3b0eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20AB6:
    /* 00020ab6   4  jsr (0001e7e0) */
    c->pc = RC_ADDR(0x00020ab6u);
    rc_push32(c, m, RC_ADDR(0x00020abau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e7e0u);
    return;

L_20ABA:
    /* 00020aba   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00020abau);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20ABC:
    /* 00020abc   4  jsr (00021254) */
    c->pc = RC_ADDR(0x00020abcu);
    rc_push32(c, m, RC_ADDR(0x00020ac0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021254u);
    return;

L_20AC0:
    /* 00020ac0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020ac0u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20AC2:
    /* 00020ac2   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x00020ac2u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_20AC4:
    /* 00020ac4   2  unlk A5 */
    c->pc = RC_ADDR(0x00020ac4u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_20AC6:
    /* 00020ac6   2  rts */
    c->pc = RC_ADDR(0x00020ac6u);
    rc_ret(c, m);
    return;

}
