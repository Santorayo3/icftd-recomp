/* fn_00006e60 - 248 byte(s), 71 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00006e60(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00006e60u): goto L_6E60;
    case RC_ADDR(0x00006e64u): goto L_6E64;
    case RC_ADDR(0x00006e68u): goto L_6E68;
    case RC_ADDR(0x00006e6cu): goto L_6E6C;
    case RC_ADDR(0x00006e70u): goto L_6E70;
    case RC_ADDR(0x00006e76u): goto L_6E76;
    case RC_ADDR(0x00006e7au): goto L_6E7A;
    case RC_ADDR(0x00006e7eu): goto L_6E7E;
    case RC_ADDR(0x00006e80u): goto L_6E80;
    case RC_ADDR(0x00006e84u): goto L_6E84;
    case RC_ADDR(0x00006e8au): goto L_6E8A;
    case RC_ADDR(0x00006e8eu): goto L_6E8E;
    case RC_ADDR(0x00006e92u): goto L_6E92;
    case RC_ADDR(0x00006e94u): goto L_6E94;
    case RC_ADDR(0x00006e98u): goto L_6E98;
    case RC_ADDR(0x00006e9cu): goto L_6E9C;
    case RC_ADDR(0x00006e9eu): goto L_6E9E;
    case RC_ADDR(0x00006ea2u): goto L_6EA2;
    case RC_ADDR(0x00006ea6u): goto L_6EA6;
    case RC_ADDR(0x00006eaau): goto L_6EAA;
    case RC_ADDR(0x00006eacu): goto L_6EAC;
    case RC_ADDR(0x00006eb0u): goto L_6EB0;
    case RC_ADDR(0x00006eb4u): goto L_6EB4;
    case RC_ADDR(0x00006eb8u): goto L_6EB8;
    case RC_ADDR(0x00006ebau): goto L_6EBA;
    case RC_ADDR(0x00006ebcu): goto L_6EBC;
    case RC_ADDR(0x00006ec0u): goto L_6EC0;
    case RC_ADDR(0x00006ec6u): goto L_6EC6;
    case RC_ADDR(0x00006ec8u): goto L_6EC8;
    case RC_ADDR(0x00006eccu): goto L_6ECC;
    case RC_ADDR(0x00006ed0u): goto L_6ED0;
    case RC_ADDR(0x00006ed4u): goto L_6ED4;
    case RC_ADDR(0x00006ed6u): goto L_6ED6;
    case RC_ADDR(0x00006ed8u): goto L_6ED8;
    case RC_ADDR(0x00006edcu): goto L_6EDC;
    case RC_ADDR(0x00006edeu): goto L_6EDE;
    case RC_ADDR(0x00006ee2u): goto L_6EE2;
    case RC_ADDR(0x00006ee4u): goto L_6EE4;
    case RC_ADDR(0x00006ee8u): goto L_6EE8;
    case RC_ADDR(0x00006eecu): goto L_6EEC;
    case RC_ADDR(0x00006eeeu): goto L_6EEE;
    case RC_ADDR(0x00006ef2u): goto L_6EF2;
    case RC_ADDR(0x00006ef8u): goto L_6EF8;
    case RC_ADDR(0x00006efcu): goto L_6EFC;
    case RC_ADDR(0x00006f02u): goto L_6F02;
    case RC_ADDR(0x00006f06u): goto L_6F06;
    case RC_ADDR(0x00006f08u): goto L_6F08;
    case RC_ADDR(0x00006f0cu): goto L_6F0C;
    case RC_ADDR(0x00006f10u): goto L_6F10;
    case RC_ADDR(0x00006f14u): goto L_6F14;
    case RC_ADDR(0x00006f16u): goto L_6F16;
    case RC_ADDR(0x00006f1au): goto L_6F1A;
    case RC_ADDR(0x00006f1cu): goto L_6F1C;
    case RC_ADDR(0x00006f20u): goto L_6F20;
    case RC_ADDR(0x00006f22u): goto L_6F22;
    case RC_ADDR(0x00006f26u): goto L_6F26;
    case RC_ADDR(0x00006f28u): goto L_6F28;
    case RC_ADDR(0x00006f2cu): goto L_6F2C;
    case RC_ADDR(0x00006f30u): goto L_6F30;
    case RC_ADDR(0x00006f32u): goto L_6F32;
    case RC_ADDR(0x00006f36u): goto L_6F36;
    case RC_ADDR(0x00006f38u): goto L_6F38;
    case RC_ADDR(0x00006f3cu): goto L_6F3C;
    case RC_ADDR(0x00006f40u): goto L_6F40;
    case RC_ADDR(0x00006f44u): goto L_6F44;
    case RC_ADDR(0x00006f46u): goto L_6F46;
    case RC_ADDR(0x00006f4au): goto L_6F4A;
    case RC_ADDR(0x00006f4eu): goto L_6F4E;
    case RC_ADDR(0x00006f52u): goto L_6F52;
    case RC_ADDR(0x00006f54u): goto L_6F54;
    case RC_ADDR(0x00006f56u): goto L_6F56;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6E60:
    /* 00006e60   4  link.w A5,#ffffffe6 */
    c->pc = RC_ADDR(0x00006e60u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x1au;

L_6E64:
    /* 00006e64   4  clr.w (fffff268,A4) */
    c->pc = RC_ADDR(0x00006e64u);
    rc_wr16(c, m, (c->a[4] - 0xd98u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6E68:
    /* 00006e68   4  clr.w (fffff270,A4) */
    c->pc = RC_ADDR(0x00006e68u);
    rc_wr16(c, m, (c->a[4] - 0xd90u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6E6C:
    /* 00006e6c   4  clr.w (fffff26c,A4) */
    c->pc = RC_ADDR(0x00006e6cu);
    rc_wr16(c, m, (c->a[4] - 0xd94u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6E70:
    /* 00006e70   6  move.w #1,(ffffffe6,A5) */
    c->pc = RC_ADDR(0x00006e70u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x1au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6E76:
    /* 00006e76   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00006e76u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6E7A:
    /* 00006e7a   4  jsr (00001f44) */
    c->pc = RC_ADDR(0x00006e7au);
    rc_push32(c, m, RC_ADDR(0x00006e7eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00001f44u);
    return;

L_6E7E:
    /* 00006e7e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00006e7eu);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_6E80:
    /* 00006e80   4  move.l D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00006e80u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6E84:
    /* 00006e84   6  move.w #ffff,(fffff262,A4) */
    c->pc = RC_ADDR(0x00006e84u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] - 0xd9eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6E8A:
    /* 00006e8a   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00006e8au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_6E8E:
    /* 00006e8e   4  move.b (1,A0),D0 */
    c->pc = RC_ADDR(0x00006e8eu);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_6E92:
    /* 00006e92   2  ext.w D0 */
    c->pc = RC_ADDR(0x00006e92u);
    rc_ext_w(c, 0);

L_6E94:
    /* 00006e94   4  move.w D0,(ffffffe8,A5) */
    c->pc = RC_ADDR(0x00006e94u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6E98:
    /* 00006e98   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00006e98u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_6E9C:
    /* 00006e9c   2  addq.l #2,A0 */
    c->pc = RC_ADDR(0x00006e9cu);
    c->a[0] += 0x00000002u;

L_6E9E:
    /* 00006e9e   4  move.l A0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00006e9eu);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6EA2:
    /* 00006ea2   4  move.l (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00006ea2u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6EA6:
    /* 00006ea6   4  jsr (00006d9c) */
    c->pc = RC_ADDR(0x00006ea6u);
    rc_push32(c, m, RC_ADDR(0x00006eaau));
    rc_depth++;
    c->pc = RC_ADDR(0x00006d9cu);
    return;

L_6EAA:
    /* 00006eaa   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006eaau);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6EAC:
    /* 00006eac   4  clr.l (ffffffea,A5) */
    c->pc = RC_ADDR(0x00006eacu);
    rc_wr32(c, m, (c->a[5] - 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6EB0:
    /* 00006eb0   4  move.w (ffffffe8,A5),D0 */
    c->pc = RC_ADDR(0x00006eb0u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x18u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6EB4:
    /* 00006eb4   4  subq.w #1,(ffffffe8,A5) */
    c->pc = RC_ADDR(0x00006eb4u);
    t3 = (c->a[5] - 0x18u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6EB8:
    /* 00006eb8   2  tst.w D0 */
    c->pc = RC_ADDR(0x00006eb8u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_6EBA:
    /* 00006eba   2  beq 00006f1c */
    c->pc = RC_ADDR(0x00006ebau);
    if (rc_cond(c, 7)) goto L_6F1C;

L_6EBC:
    /* 00006ebc   4  movea.l (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x00006ebcu);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[0] = t0;

L_6EC0:
    /* 00006ec0   6  cmpi.b #64,(4,A0) */
    c->pc = RC_ADDR(0x00006ec0u);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_cmp(c, RC_B, t0, 0x00000064u);

L_6EC6:
    /* 00006ec6   2  bne 00006f08 */
    c->pc = RC_ADDR(0x00006ec6u);
    if (rc_cond(c, 6)) goto L_6F08;

L_6EC8:
    /* 00006ec8   4  movea.l (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x00006ec8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[0] = t0;

L_6ECC:
    /* 00006ecc   4  move.l (A0),(fffffff2,A5) */
    c->pc = RC_ADDR(0x00006eccu);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6ED0:
    /* 00006ed0   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00006ed0u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_6ED4:
    /* 00006ed4   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x00006ed4u);
    c->a[0] += 0x00000004u;

L_6ED6:
    /* 00006ed6   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00006ed6u);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6ED8:
    /* 00006ed8   4  jsr (00006a60) */
    c->pc = RC_ADDR(0x00006ed8u);
    rc_push32(c, m, RC_ADDR(0x00006edcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00006a60u);
    return;

L_6EDC:
    /* 00006edc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006edcu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6EDE:
    /* 00006ede   4  tst.w (ffffffe6,A5) */
    c->pc = RC_ADDR(0x00006edeu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1au));
    rc_set_nzvc(c, t0, RC_W);

L_6EE2:
    /* 00006ee2   2  beq 00006ef8 */
    c->pc = RC_ADDR(0x00006ee2u);
    if (rc_cond(c, 7)) goto L_6EF8;

L_6EE4:
    /* 00006ee4   4  clr.w (ffffffe6,A5) */
    c->pc = RC_ADDR(0x00006ee4u);
    rc_wr16(c, m, (c->a[5] - 0x1au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6EE8:
    /* 00006ee8   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00006ee8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_6EEC:
    /* 00006eec   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x00006eecu);
    c->a[0] += 0x00000004u;

L_6EEE:
    /* 00006eee   4  move.l A0,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00006eeeu);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6EF2:
    /* 00006ef2   6  move.w #1,(fffff270,A4) */
    c->pc = RC_ADDR(0x00006ef2u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd90u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6EF8:
    /* 00006ef8   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00006ef8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_6EFC:
    /* 00006efc   6  adda.l #10,A0 */
    c->pc = RC_ADDR(0x00006efcu);
    t0 = 0x00000010u;
    c->a[0] += t0;

L_6F02:
    /* 00006f02   4  move.l A0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00006f02u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F06:
    /* 00006f06   2  bra 00006f1a */
    c->pc = RC_ADDR(0x00006f06u);
    goto L_6F1A;

L_6F08:
    /* 00006f08   4  movea.l (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x00006f08u);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[0] = t0;

L_6F0C:
    /* 00006f0c   4  move.l (A0),(ffffffee,A5) */
    c->pc = RC_ADDR(0x00006f0cu);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F10:
    /* 00006f10   4  movea.l (ffffffee,A5),A0 */
    c->pc = RC_ADDR(0x00006f10u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x12u));
    c->a[0] = t0;

L_6F14:
    /* 00006f14   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x00006f14u);
    c->a[0] += 0x00000004u;

L_6F16:
    /* 00006f16   4  move.l A0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00006f16u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F1A:
    /* 00006f1a   2  bra 00006eb0 */
    c->pc = RC_ADDR(0x00006f1au);
    rc_tick();
    goto L_6EB0;

L_6F1C:
    /* 00006f1c   4  tst.w (fffff268,A4) */
    c->pc = RC_ADDR(0x00006f1cu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd98u));
    rc_set_nzvc(c, t0, RC_W);

L_6F20:
    /* 00006f20   2  bne 00006f28 */
    c->pc = RC_ADDR(0x00006f20u);
    if (rc_cond(c, 6)) goto L_6F28;

L_6F22:
    /* 00006f22   4  tst.w (fffff0bc,A4) */
    c->pc = RC_ADDR(0x00006f22u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf44u));
    rc_set_nzvc(c, t0, RC_W);

L_6F26:
    /* 00006f26   2  beq 00006f32 */
    c->pc = RC_ADDR(0x00006f26u);
    if (rc_cond(c, 7)) goto L_6F32;

L_6F28:
    /* 00006f28   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006f28u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F2C:
    /* 00006f2c   4  jsr (00006c76) */
    c->pc = RC_ADDR(0x00006f2cu);
    rc_push32(c, m, RC_ADDR(0x00006f30u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006c76u);
    return;

L_6F30:
    /* 00006f30   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006f30u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6F32:
    /* 00006f32   4  tst.l (ffffffea,A5) */
    c->pc = RC_ADDR(0x00006f32u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    rc_set_nzvc(c, t0, RC_L);

L_6F36:
    /* 00006f36   2  beq 00006f46 */
    c->pc = RC_ADDR(0x00006f36u);
    if (rc_cond(c, 7)) goto L_6F46;

L_6F38:
    /* 00006f38   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006f38u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F3C:
    /* 00006f3c   4  move.l (ffffffea,A5),-(A7) */
    c->pc = RC_ADDR(0x00006f3cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F40:
    /* 00006f40   4  jsr (00006b18) */
    c->pc = RC_ADDR(0x00006f40u);
    rc_push32(c, m, RC_ADDR(0x00006f44u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006b18u);
    return;

L_6F44:
    /* 00006f44   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00006f44u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6F46:
    /* 00006f46   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006f46u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F4A:
    /* 00006f4a   4  move.l (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00006f4au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F4E:
    /* 00006f4e   4  jsr (00006cd4) */
    c->pc = RC_ADDR(0x00006f4eu);
    rc_push32(c, m, RC_ADDR(0x00006f52u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006cd4u);
    return;

L_6F52:
    /* 00006f52   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00006f52u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6F54:
    /* 00006f54   2  unlk A5 */
    c->pc = RC_ADDR(0x00006f54u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6F56:
    /* 00006f56   2  rts */
    c->pc = RC_ADDR(0x00006f56u);
    rc_ret(c, m);
    return;

}
