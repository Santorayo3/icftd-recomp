/* fn_00010e48 - 468 byte(s), 130 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00010e48(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x00010e48u: goto L_10E48;
    case 0x00010e4cu: goto L_10E4C;
    case 0x00010e50u: goto L_10E50;
    case 0x00010e54u: goto L_10E54;
    case 0x00010e58u: goto L_10E58;
    case 0x00010e5au: goto L_10E5A;
    case 0x00010e5eu: goto L_10E5E;
    case 0x00010e62u: goto L_10E62;
    case 0x00010e66u: goto L_10E66;
    case 0x00010e6cu: goto L_10E6C;
    case 0x00010e6eu: goto L_10E6E;
    case 0x00010e74u: goto L_10E74;
    case 0x00010e76u: goto L_10E76;
    case 0x00010e7cu: goto L_10E7C;
    case 0x00010e7eu: goto L_10E7E;
    case 0x00010e84u: goto L_10E84;
    case 0x00010e86u: goto L_10E86;
    case 0x00010e8cu: goto L_10E8C;
    case 0x00010e8eu: goto L_10E8E;
    case 0x00010e94u: goto L_10E94;
    case 0x00010e98u: goto L_10E98;
    case 0x00010e9eu: goto L_10E9E;
    case 0x00010ea2u: goto L_10EA2;
    case 0x00010ea8u: goto L_10EA8;
    case 0x00010eacu: goto L_10EAC;
    case 0x00010eb0u: goto L_10EB0;
    case 0x00010eb2u: goto L_10EB2;
    case 0x00010eb4u: goto L_10EB4;
    case 0x00010eb8u: goto L_10EB8;
    case 0x00010ebau: goto L_10EBA;
    case 0x00010ebeu: goto L_10EBE;
    case 0x00010ec2u: goto L_10EC2;
    case 0x00010ec6u: goto L_10EC6;
    case 0x00010ec8u: goto L_10EC8;
    case 0x00010eccu: goto L_10ECC;
    case 0x00010eceu: goto L_10ECE;
    case 0x00010ed2u: goto L_10ED2;
    case 0x00010ed6u: goto L_10ED6;
    case 0x00010edau: goto L_10EDA;
    case 0x00010edeu: goto L_10EDE;
    case 0x00010ee2u: goto L_10EE2;
    case 0x00010ee6u: goto L_10EE6;
    case 0x00010ee8u: goto L_10EE8;
    case 0x00010eecu: goto L_10EEC;
    case 0x00010eeeu: goto L_10EEE;
    case 0x00010ef2u: goto L_10EF2;
    case 0x00010ef6u: goto L_10EF6;
    case 0x00010ef8u: goto L_10EF8;
    case 0x00010efcu: goto L_10EFC;
    case 0x00010efeu: goto L_10EFE;
    case 0x00010f00u: goto L_10F00;
    case 0x00010f02u: goto L_10F02;
    case 0x00010f06u: goto L_10F06;
    case 0x00010f08u: goto L_10F08;
    case 0x00010f0cu: goto L_10F0C;
    case 0x00010f10u: goto L_10F10;
    case 0x00010f12u: goto L_10F12;
    case 0x00010f16u: goto L_10F16;
    case 0x00010f18u: goto L_10F18;
    case 0x00010f1au: goto L_10F1A;
    case 0x00010f1eu: goto L_10F1E;
    case 0x00010f20u: goto L_10F20;
    case 0x00010f22u: goto L_10F22;
    case 0x00010f26u: goto L_10F26;
    case 0x00010f2au: goto L_10F2A;
    case 0x00010f30u: goto L_10F30;
    case 0x00010f32u: goto L_10F32;
    case 0x00010f34u: goto L_10F34;
    case 0x00010f36u: goto L_10F36;
    case 0x00010f3au: goto L_10F3A;
    case 0x00010f3cu: goto L_10F3C;
    case 0x00010f40u: goto L_10F40;
    case 0x00010f44u: goto L_10F44;
    case 0x00010f48u: goto L_10F48;
    case 0x00010f4eu: goto L_10F4E;
    case 0x00010f52u: goto L_10F52;
    case 0x00010f56u: goto L_10F56;
    case 0x00010f5au: goto L_10F5A;
    case 0x00010f5cu: goto L_10F5C;
    case 0x00010f62u: goto L_10F62;
    case 0x00010f68u: goto L_10F68;
    case 0x00010f6eu: goto L_10F6E;
    case 0x00010f74u: goto L_10F74;
    case 0x00010f78u: goto L_10F78;
    case 0x00010f7au: goto L_10F7A;
    case 0x00010f7eu: goto L_10F7E;
    case 0x00010f80u: goto L_10F80;
    case 0x00010f84u: goto L_10F84;
    case 0x00010f88u: goto L_10F88;
    case 0x00010f8cu: goto L_10F8C;
    case 0x00010f8eu: goto L_10F8E;
    case 0x00010f90u: goto L_10F90;
    case 0x00010f92u: goto L_10F92;
    case 0x00010f96u: goto L_10F96;
    case 0x00010f9au: goto L_10F9A;
    case 0x00010f9eu: goto L_10F9E;
    case 0x00010fa2u: goto L_10FA2;
    case 0x00010fa6u: goto L_10FA6;
    case 0x00010fa8u: goto L_10FA8;
    case 0x00010facu: goto L_10FAC;
    case 0x00010faeu: goto L_10FAE;
    case 0x00010fb2u: goto L_10FB2;
    case 0x00010fb6u: goto L_10FB6;
    case 0x00010fbau: goto L_10FBA;
    case 0x00010fbeu: goto L_10FBE;
    case 0x00010fc0u: goto L_10FC0;
    case 0x00010fc4u: goto L_10FC4;
    case 0x00010fc8u: goto L_10FC8;
    case 0x00010fcau: goto L_10FCA;
    case 0x00010fceu: goto L_10FCE;
    case 0x00010fd0u: goto L_10FD0;
    case 0x00010fd2u: goto L_10FD2;
    case 0x00010fd6u: goto L_10FD6;
    case 0x00010fdau: goto L_10FDA;
    case 0x00010fdeu: goto L_10FDE;
    case 0x00010fe0u: goto L_10FE0;
    case 0x00010fe2u: goto L_10FE2;
    case 0x00010fe6u: goto L_10FE6;
    case 0x00010fe8u: goto L_10FE8;
    case 0x00010feeu: goto L_10FEE;
    case 0x00010ff2u: goto L_10FF2;
    case 0x00010ff6u: goto L_10FF6;
    case 0x00010ff8u: goto L_10FF8;
    case 0x00010ffcu: goto L_10FFC;
    case 0x00011002u: goto L_11002;
    case 0x00011008u: goto L_11008;
    case 0x0001100eu: goto L_1100E;
    case 0x00011014u: goto L_11014;
    case 0x00011018u: goto L_11018;
    case 0x0001101au: goto L_1101A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10E48:
    /* 00010e48   4  link.w A5,#ffffffc6 */
    c->pc = 0x00010e48u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x3au;

L_10E4C:
    /* 00010e4c   4  pea (000003ed).l */
    c->pc = 0x00010e4cu;
    rc_push32(c, m, 0x000003edu);

L_10E50:
    /* 00010e50   4  pea (0001101c) */
    c->pc = 0x00010e50u;
    rc_push32(c, m, 0x0001101cu);

L_10E54:
    /* 00010e54   4  jsr (ffff8290,A4) */
    c->pc = 0x00010e54u;
    /* vector 109 */
    rc_push32(c, m, 0x00010e58u);
    rc_depth++;
    c->pc = 0x00020476u;
    return;

L_10E58:
    /* 00010e58   2  addq.w #8,A7 */
    c->pc = 0x00010e58u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_10E5A:
    /* 00010e5a   4  move.l D0,(ffffffca,A5) */
    c->pc = 0x00010e5au;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x36u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10E5E:
    /* 00010e5e   4  beq 00010f5c */
    c->pc = 0x00010e5eu;
    if (rc_cond(c, 7)) goto L_10F5C;

L_10E62:
    /* 00010e62   4  clr.w (ffffffc8,A5) */
    c->pc = 0x00010e62u;
    rc_wr16(c, m, (c->a[5] - 0x38u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10E66:
    /* 00010e66   6  cmpi.w #36,(ffffffc8,A5) */
    c->pc = 0x00010e66u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_cmp(c, RC_W, t0, 0x00000036u);

L_10E6C:
    /* 00010e6c   2  bcs 00010ea2 */
    c->pc = 0x00010e6cu;
    if (rc_cond(c, 5)) goto L_10EA2;

L_10E6E:
    /* 00010e6e   6  cmpi.w #7e,(ffffffc8,A5) */
    c->pc = 0x00010e6eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_cmp(c, RC_W, t0, 0x0000007eu);

L_10E74:
    /* 00010e74   2  bls 00010e7e */
    c->pc = 0x00010e74u;
    if (rc_cond(c, 3)) goto L_10E7E;

L_10E76:
    /* 00010e76   6  cmpi.w #8e,(ffffffc8,A5) */
    c->pc = 0x00010e76u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_cmp(c, RC_W, t0, 0x0000008eu);

L_10E7C:
    /* 00010e7c   2  bcs 00010ea2 */
    c->pc = 0x00010e7cu;
    if (rc_cond(c, 5)) goto L_10EA2;

L_10E7E:
    /* 00010e7e   6  cmpi.w #94,(ffffffc8,A5) */
    c->pc = 0x00010e7eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_cmp(c, RC_W, t0, 0x00000094u);

L_10E84:
    /* 00010e84   2  bls 00010e8e */
    c->pc = 0x00010e84u;
    if (rc_cond(c, 3)) goto L_10E8E;

L_10E86:
    /* 00010e86   6  cmpi.w #9a,(ffffffc8,A5) */
    c->pc = 0x00010e86u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_cmp(c, RC_W, t0, 0x0000009au);

L_10E8C:
    /* 00010e8c   2  bcs 00010ea2 */
    c->pc = 0x00010e8cu;
    if (rc_cond(c, 5)) goto L_10EA2;

L_10E8E:
    /* 00010e8e   6  cmpi.w #9e,(ffffffc8,A5) */
    c->pc = 0x00010e8eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_cmp(c, RC_W, t0, 0x0000009eu);

L_10E94:
    /* 00010e94   4  bls 00010f34 */
    c->pc = 0x00010e94u;
    if (rc_cond(c, 3)) goto L_10F34;

L_10E98:
    /* 00010e98   6  cmpi.w #b8,(ffffffc8,A5) */
    c->pc = 0x00010e98u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_cmp(c, RC_W, t0, 0x000000b8u);

L_10E9E:
    /* 00010e9e   4  bcc 00010f34 */
    c->pc = 0x00010e9eu;
    if (rc_cond(c, 4)) goto L_10F34;

L_10EA2:
    /* 00010ea2   6  pea (00010001).l */
    c->pc = 0x00010ea2u;
    rc_push32(c, m, 0x00010001u);

L_10EA8:
    /* 00010ea8   4  pea (00000320).l */
    c->pc = 0x00010ea8u;
    rc_push32(c, m, 0x00000320u);

L_10EAC:
    /* 00010eac   4  jsr (ffff8338,A4) */
    c->pc = 0x00010eacu;
    /* vector 137: exec.library -198 */
    c->pc = 0x00010eb0u;
    rc_os_call(c, m, 0, -198);

L_10EB0:
    /* 00010eb0   2  addq.w #8,A7 */
    c->pc = 0x00010eb0u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_10EB2:
    /* 00010eb2   2  moveq #0,D1 */
    c->pc = 0x00010eb2u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_10EB4:
    /* 00010eb4   4  move.w (ffffffc8,A5),D1 */
    c->pc = 0x00010eb4u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10EB8:
    /* 00010eb8   2  asl.l #2,D1 */
    c->pc = 0x00010eb8u;
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_10EBA:
    /* 00010eba   4  lea (b08,A4),A0 */
    c->pc = 0x00010ebau;
    c->a[0] = (c->a[4] + 0xb08u);

L_10EBE:
    /* 00010ebe   4  move.l D0,(0,A0,D1.w) */
    c->pc = 0x00010ebeu;
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10EC2:
    /* 00010ec2   4  pea (00000320).l */
    c->pc = 0x00010ec2u;
    rc_push32(c, m, 0x00000320u);

L_10EC6:
    /* 00010ec6   2  moveq #0,D0 */
    c->pc = 0x00010ec6u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10EC8:
    /* 00010ec8   4  move.w (ffffffc8,A5),D0 */
    c->pc = 0x00010ec8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10ECC:
    /* 00010ecc   2  asl.l #2,D0 */
    c->pc = 0x00010eccu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_10ECE:
    /* 00010ece   4  lea (b08,A4),A0 */
    c->pc = 0x00010eceu;
    c->a[0] = (c->a[4] + 0xb08u);

L_10ED2:
    /* 00010ed2   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = 0x00010ed2u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10ED6:
    /* 00010ed6   4  move.l (ffffffca,A5),-(A7) */
    c->pc = 0x00010ed6u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x36u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10EDA:
    /* 00010eda   4  jsr (ffff8314,A4) */
    c->pc = 0x00010edau;
    /* vector 131 */
    rc_push32(c, m, 0x00010edeu);
    rc_depth++;
    c->pc = 0x00021476u;
    return;

L_10EDE:
    /* 00010ede   4  lea (c,A7),A7 */
    c->pc = 0x00010edeu;
    c->a[7] = (c->a[7] + 0xcu);

L_10EE2:
    /* 00010ee2   4  clr.w (ffffffc6,A5) */
    c->pc = 0x00010ee2u;
    rc_wr16(c, m, (c->a[5] - 0x3au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10EE6:
    /* 00010ee6   2  moveq #0,D0 */
    c->pc = 0x00010ee6u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10EE8:
    /* 00010ee8   4  move.w (ffffffc8,A5),D0 */
    c->pc = 0x00010ee8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10EEC:
    /* 00010eec   2  asl.l #2,D0 */
    c->pc = 0x00010eecu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_10EEE:
    /* 00010eee   4  lea (b08,A4),A0 */
    c->pc = 0x00010eeeu;
    c->a[0] = (c->a[4] + 0xb08u);

L_10EF2:
    /* 00010ef2   4  move.l (0,A0,D0.w),D1 */
    c->pc = 0x00010ef2u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10EF6:
    /* 00010ef6   2  moveq #0,D0 */
    c->pc = 0x00010ef6u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10EF8:
    /* 00010ef8   4  move.w (ffffffc6,A5),D0 */
    c->pc = 0x00010ef8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x3au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10EFC:
    /* 00010efc   2  asl.l #1,D0 */
    c->pc = 0x00010efcu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_10EFE:
    /* 00010efe   2  movea.l D0,A0 */
    c->pc = 0x00010efeu;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_10F00:
    /* 00010f00   2  moveq #0,D0 */
    c->pc = 0x00010f00u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10F02:
    /* 00010f02   4  move.w (ffffffc8,A5),D0 */
    c->pc = 0x00010f02u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10F06:
    /* 00010f06   2  asl.l #2,D0 */
    c->pc = 0x00010f06u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_10F08:
    /* 00010f08   4  lea (b08,A4),A1 */
    c->pc = 0x00010f08u;
    c->a[1] = (c->a[4] + 0xb08u);

L_10F0C:
    /* 00010f0c   4  move.l (0,A1,D0.w),D2 */
    c->pc = 0x00010f0cu;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10F10:
    /* 00010f10   2  moveq #0,D0 */
    c->pc = 0x00010f10u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10F12:
    /* 00010f12   4  move.w (ffffffc6,A5),D0 */
    c->pc = 0x00010f12u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x3au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10F16:
    /* 00010f16   2  asl.l #1,D0 */
    c->pc = 0x00010f16u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_10F18:
    /* 00010f18   2  movea.l D0,A1 */
    c->pc = 0x00010f18u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[1] = t0;

L_10F1A:
    /* 00010f1a   4  move.w (0,A1,D2.w),D0 */
    c->pc = 0x00010f1au;
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10F1E:
    /* 00010f1e   2  subq.w #1,D0 */
    c->pc = 0x00010f1eu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_10F20:
    /* 00010f20   2  asl.w #1,D0 */
    c->pc = 0x00010f20u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_10F22:
    /* 00010f22   4  move.w D0,(0,A0,D1.w) */
    c->pc = 0x00010f22u;
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10F26:
    /* 00010f26   4  addq.w #1,(ffffffc6,A5) */
    c->pc = 0x00010f26u;
    t3 = (c->a[5] - 0x3au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_10F2A:
    /* 00010f2a   6  cmpi.w #190,(ffffffc6,A5) */
    c->pc = 0x00010f2au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x3au));
    rc_cmp(c, RC_W, t0, 0x00000190u);

L_10F30:
    /* 00010f30   2  bcs 00010ee6 */
    c->pc = 0x00010f30u;
    if (rc_cond(c, 5)) { rc_tick(); goto L_10EE6; }

L_10F32:
    /* 00010f32   2  bra 00010f44 */
    c->pc = 0x00010f32u;
    goto L_10F44;

L_10F34:
    /* 00010f34   2  moveq #0,D0 */
    c->pc = 0x00010f34u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10F36:
    /* 00010f36   4  move.w (ffffffc8,A5),D0 */
    c->pc = 0x00010f36u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10F3A:
    /* 00010f3a   2  asl.l #2,D0 */
    c->pc = 0x00010f3au;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_10F3C:
    /* 00010f3c   4  lea (b08,A4),A0 */
    c->pc = 0x00010f3cu;
    c->a[0] = (c->a[4] + 0xb08u);

L_10F40:
    /* 00010f40   4  clr.l (0,A0,D0.w) */
    c->pc = 0x00010f40u;
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_10F44:
    /* 00010f44   4  addq.w #1,(ffffffc8,A5) */
    c->pc = 0x00010f44u;
    t3 = (c->a[5] - 0x38u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_10F48:
    /* 00010f48   6  cmpi.w #b8,(ffffffc8,A5) */
    c->pc = 0x00010f48u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_cmp(c, RC_W, t0, 0x000000b8u);

L_10F4E:
    /* 00010f4e   4  bcs 00010e66 */
    c->pc = 0x00010f4eu;
    if (rc_cond(c, 5)) { rc_tick(); goto L_10E66; }

L_10F52:
    /* 00010f52   4  move.l (ffffffca,A5),-(A7) */
    c->pc = 0x00010f52u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x36u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10F56:
    /* 00010f56   4  jsr (ffff8296,A4) */
    c->pc = 0x00010f56u;
    /* vector 110 */
    rc_push32(c, m, 0x00010f5au);
    rc_depth++;
    c->pc = 0x00020490u;
    return;

L_10F5A:
    /* 00010f5a   2  addq.w #4,A7 */
    c->pc = 0x00010f5au;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_10F5C:
    /* 00010f5c   6  move.w #4b0,(fffff2f0,A4) */
    c->pc = 0x00010f5cu;
    t0 = 0x000004b0u;
    rc_wr16(c, m, (c->a[4] - 0xd10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10F62:
    /* 00010f62   6  move.w #4b0,(fffff2f2,A4) */
    c->pc = 0x00010f62u;
    t0 = 0x000004b0u;
    rc_wr16(c, m, (c->a[4] - 0xd0eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10F68:
    /* 00010f68   6  move.w #1,(fffff2ec,A4) */
    c->pc = 0x00010f68u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10F6E:
    /* 00010f6e   6  move.w #a,(fffff2ee,A4) */
    c->pc = 0x00010f6eu;
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[4] - 0xd12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10F74:
    /* 00010f74   4  clr.w (ffffffc8,A5) */
    c->pc = 0x00010f74u;
    rc_wr16(c, m, (c->a[5] - 0x38u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10F78:
    /* 00010f78   2  bra 00010fc4 */
    c->pc = 0x00010f78u;
    goto L_10FC4;

L_10F7A:
    /* 00010f7a   4  clr.w (ffffffc6,A5) */
    c->pc = 0x00010f7au;
    rc_wr16(c, m, (c->a[5] - 0x3au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10F7E:
    /* 00010f7e   2  bra 00010fb6 */
    c->pc = 0x00010f7eu;
    goto L_10FB6;

L_10F80:
    /* 00010f80   4  move.w (ffffffc8,A5),D0 */
    c->pc = 0x00010f80u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10F84:
    /* 00010f84   4  mulu.w (fffff2f6,A4),D0 */
    c->pc = 0x00010f84u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0au));
    rc_mulu(c, 0, t0);

L_10F88:
    /* 00010f88   4  add.w (ffffffc6,A5),D0 */
    c->pc = 0x00010f88u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x3au));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_10F8C:
    /* 00010f8c   2  moveq #0,D1 */
    c->pc = 0x00010f8cu;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_10F8E:
    /* 00010f8e   2  move.w D0,D1 */
    c->pc = 0x00010f8eu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10F90:
    /* 00010f90   2  asl.l #1,D1 */
    c->pc = 0x00010f90u;
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_10F92:
    /* 00010f92   4  movea.l (fffff314,A4),A0 */
    c->pc = 0x00010f92u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xcecu));
    c->a[0] = t0;

L_10F96:
    /* 00010f96   4  move.w (ffffffc6,A5),D0 */
    c->pc = 0x00010f96u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x3au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10F9A:
    /* 00010f9a   4  mulu.w (fffff2ee,A4),D0 */
    c->pc = 0x00010f9au;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd12u));
    rc_mulu(c, 0, t0);

L_10F9E:
    /* 00010f9e   4  mulu.w (fffff2f4,A4),D0 */
    c->pc = 0x00010f9eu;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0cu));
    rc_mulu(c, 0, t0);

L_10FA2:
    /* 00010fa2   4  move.w (fffff2ec,A4),D2 */
    c->pc = 0x00010fa2u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd14u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10FA6:
    /* 00010fa6   2  asl.w #1,D2 */
    c->pc = 0x00010fa6u;
    c->d[2] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W);

L_10FA8:
    /* 00010fa8   4  mulu.w (ffffffc8,A5),D2 */
    c->pc = 0x00010fa8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_mulu(c, 2, t0);

L_10FAC:
    /* 00010fac   2  add.w D2,D0 */
    c->pc = 0x00010facu;
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_10FAE:
    /* 00010fae   4  move.w D0,(0,A0,D1.w) */
    c->pc = 0x00010faeu;
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10FB2:
    /* 00010fb2   4  addq.w #1,(ffffffc6,A5) */
    c->pc = 0x00010fb2u;
    t3 = (c->a[5] - 0x3au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_10FB6:
    /* 00010fb6   4  move.w (ffffffc6,A5),D0 */
    c->pc = 0x00010fb6u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x3au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10FBA:
    /* 00010fba   4  cmp.w (fffff2f6,A4),D0 */
    c->pc = 0x00010fbau;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0au));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_10FBE:
    /* 00010fbe   2  bcs 00010f80 */
    c->pc = 0x00010fbeu;
    if (rc_cond(c, 5)) { rc_tick(); goto L_10F80; }

L_10FC0:
    /* 00010fc0   4  addq.w #1,(ffffffc8,A5) */
    c->pc = 0x00010fc0u;
    t3 = (c->a[5] - 0x38u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_10FC4:
    /* 00010fc4   4  move.w (fffff2f4,A4),D0 */
    c->pc = 0x00010fc4u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10FC8:
    /* 00010fc8   2  lsr.w #1,D0 */
    c->pc = 0x00010fc8u;
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_10FCA:
    /* 00010fca   4  move.w (ffffffc8,A5),D1 */
    c->pc = 0x00010fcau;
    t0 = rc_rd16(c, m, (c->a[5] - 0x38u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10FCE:
    /* 00010fce   2  cmp.w D0,D1 */
    c->pc = 0x00010fceu;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_10FD0:
    /* 00010fd0   2  bcs 00010f7a */
    c->pc = 0x00010fd0u;
    if (rc_cond(c, 5)) { rc_tick(); goto L_10F7A; }

L_10FD2:
    /* 00010fd2   4  move.w (fffff2f4,A4),-(A7) */
    c->pc = 0x00010fd2u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0cu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10FD6:
    /* 00010fd6   4  move.w (fffff2ee,A4),-(A7) */
    c->pc = 0x00010fd6u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10FDA:
    /* 00010fda   4  move.w (fffff2ec,A4),D0 */
    c->pc = 0x00010fdau;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10FDE:
    /* 00010fde   2  asl.w #1,D0 */
    c->pc = 0x00010fdeu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_10FE0:
    /* 00010fe0   2  move.w D0,-(A7) */
    c->pc = 0x00010fe0u;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10FE2:
    /* 00010fe2   4  jsr (ffff814c,A4) */
    c->pc = 0x00010fe2u;
    /* vector 55 */
    rc_push32(c, m, 0x00010fe6u);
    rc_depth++;
    c->pc = 0x00011094u;
    return;

L_10FE6:
    /* 00010fe6   2  addq.w #6,A7 */
    c->pc = 0x00010fe6u;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_10FE8:
    /* 00010fe8   6  pea (00010001).l */
    c->pc = 0x00010fe8u;
    rc_push32(c, m, 0x00010001u);

L_10FEE:
    /* 00010fee   4  pea (00001c20).l */
    c->pc = 0x00010feeu;
    rc_push32(c, m, 0x00001c20u);

L_10FF2:
    /* 00010ff2   4  jsr (ffff8338,A4) */
    c->pc = 0x00010ff2u;
    /* vector 137: exec.library -198 */
    c->pc = 0x00010ff6u;
    rc_os_call(c, m, 0, -198);

L_10FF6:
    /* 00010ff6   2  addq.w #8,A7 */
    c->pc = 0x00010ff6u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_10FF8:
    /* 00010ff8   4  move.l D0,(fffff2f8,A4) */
    c->pc = 0x00010ff8u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd08u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10FFC:
    /* 00010ffc   6  move.w (fffff2fe,A4),(a16,A4) */
    c->pc = 0x00010ffcu;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd02u));
    rc_wr16(c, m, (c->a[4] + 0xa16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11002:
    /* 00011002   6  move.w (fffff2fe,A4),(74e,A4) */
    c->pc = 0x00011002u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd02u));
    rc_wr16(c, m, (c->a[4] + 0x74eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11008:
    /* 00011008   6  move.w (fffff2fc,A4),(a18,A4) */
    c->pc = 0x00011008u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd04u));
    rc_wr16(c, m, (c->a[4] + 0xa18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1100E:
    /* 0001100e   6  move.w (fffff2fc,A4),(750,A4) */
    c->pc = 0x0001100eu;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd04u));
    rc_wr16(c, m, (c->a[4] + 0x750u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11014:
    /* 00011014   4  jsr (00012988) */
    c->pc = 0x00011014u;
    rc_push32(c, m, 0x00011018u);
    rc_depth++;
    c->pc = 0x00012988u;
    return;

L_11018:
    /* 00011018   2  unlk A5 */
    c->pc = 0x00011018u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1101A:
    /* 0001101a   2  rts */
    c->pc = 0x0001101au;
    rc_ret(c, m);
    return;

}
