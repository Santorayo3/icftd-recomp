/* fn_000000e4 - 412 byte(s), 110 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000000e4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000000e4u): goto L_E4;
    case RC_ADDR(0x000000e8u): goto L_E8;
    case RC_ADDR(0x000000eeu): goto L_EE;
    case RC_ADDR(0x000000f2u): goto L_F2;
    case RC_ADDR(0x000000f6u): goto L_F6;
    case RC_ADDR(0x000000fau): goto L_FA;
    case RC_ADDR(0x00000100u): goto L_100;
    case RC_ADDR(0x00000106u): goto L_106;
    case RC_ADDR(0x0000010cu): goto L_10C;
    case RC_ADDR(0x00000110u): goto L_110;
    case RC_ADDR(0x00000114u): goto L_114;
    case RC_ADDR(0x00000118u): goto L_118;
    case RC_ADDR(0x0000011cu): goto L_11C;
    case RC_ADDR(0x00000120u): goto L_120;
    case RC_ADDR(0x00000124u): goto L_124;
    case RC_ADDR(0x00000128u): goto L_128;
    case RC_ADDR(0x0000012cu): goto L_12C;
    case RC_ADDR(0x00000130u): goto L_130;
    case RC_ADDR(0x00000134u): goto L_134;
    case RC_ADDR(0x00000138u): goto L_138;
    case RC_ADDR(0x0000013cu): goto L_13C;
    case RC_ADDR(0x00000140u): goto L_140;
    case RC_ADDR(0x00000144u): goto L_144;
    case RC_ADDR(0x00000148u): goto L_148;
    case RC_ADDR(0x0000014cu): goto L_14C;
    case RC_ADDR(0x00000150u): goto L_150;
    case RC_ADDR(0x00000154u): goto L_154;
    case RC_ADDR(0x00000158u): goto L_158;
    case RC_ADDR(0x0000015cu): goto L_15C;
    case RC_ADDR(0x00000160u): goto L_160;
    case RC_ADDR(0x00000164u): goto L_164;
    case RC_ADDR(0x00000166u): goto L_166;
    case RC_ADDR(0x0000016au): goto L_16A;
    case RC_ADDR(0x00000170u): goto L_170;
    case RC_ADDR(0x00000174u): goto L_174;
    case RC_ADDR(0x00000176u): goto L_176;
    case RC_ADDR(0x0000017au): goto L_17A;
    case RC_ADDR(0x0000017eu): goto L_17E;
    case RC_ADDR(0x00000182u): goto L_182;
    case RC_ADDR(0x00000186u): goto L_186;
    case RC_ADDR(0x0000018au): goto L_18A;
    case RC_ADDR(0x0000018cu): goto L_18C;
    case RC_ADDR(0x0000018eu): goto L_18E;
    case RC_ADDR(0x00000190u): goto L_190;
    case RC_ADDR(0x00000194u): goto L_194;
    case RC_ADDR(0x00000198u): goto L_198;
    case RC_ADDR(0x0000019cu): goto L_19C;
    case RC_ADDR(0x000001a0u): goto L_1A0;
    case RC_ADDR(0x000001a4u): goto L_1A4;
    case RC_ADDR(0x000001a8u): goto L_1A8;
    case RC_ADDR(0x000001aau): goto L_1AA;
    case RC_ADDR(0x000001aeu): goto L_1AE;
    case RC_ADDR(0x000001b2u): goto L_1B2;
    case RC_ADDR(0x000001b4u): goto L_1B4;
    case RC_ADDR(0x000001b6u): goto L_1B6;
    case RC_ADDR(0x000001bau): goto L_1BA;
    case RC_ADDR(0x000001beu): goto L_1BE;
    case RC_ADDR(0x000001c0u): goto L_1C0;
    case RC_ADDR(0x000001c2u): goto L_1C2;
    case RC_ADDR(0x000001c4u): goto L_1C4;
    case RC_ADDR(0x000001c8u): goto L_1C8;
    case RC_ADDR(0x000001ccu): goto L_1CC;
    case RC_ADDR(0x000001d0u): goto L_1D0;
    case RC_ADDR(0x000001d2u): goto L_1D2;
    case RC_ADDR(0x000001d4u): goto L_1D4;
    case RC_ADDR(0x000001d8u): goto L_1D8;
    case RC_ADDR(0x000001dcu): goto L_1DC;
    case RC_ADDR(0x000001e0u): goto L_1E0;
    case RC_ADDR(0x000001e4u): goto L_1E4;
    case RC_ADDR(0x000001e6u): goto L_1E6;
    case RC_ADDR(0x000001eau): goto L_1EA;
    case RC_ADDR(0x000001eeu): goto L_1EE;
    case RC_ADDR(0x000001f2u): goto L_1F2;
    case RC_ADDR(0x000001f6u): goto L_1F6;
    case RC_ADDR(0x000001fau): goto L_1FA;
    case RC_ADDR(0x00000200u): goto L_200;
    case RC_ADDR(0x00000204u): goto L_204;
    case RC_ADDR(0x0000020au): goto L_20A;
    case RC_ADDR(0x0000020eu): goto L_20E;
    case RC_ADDR(0x00000212u): goto L_212;
    case RC_ADDR(0x00000216u): goto L_216;
    case RC_ADDR(0x0000021au): goto L_21A;
    case RC_ADDR(0x0000021eu): goto L_21E;
    case RC_ADDR(0x00000222u): goto L_222;
    case RC_ADDR(0x00000226u): goto L_226;
    case RC_ADDR(0x0000022au): goto L_22A;
    case RC_ADDR(0x0000022cu): goto L_22C;
    case RC_ADDR(0x00000230u): goto L_230;
    case RC_ADDR(0x00000234u): goto L_234;
    case RC_ADDR(0x00000236u): goto L_236;
    case RC_ADDR(0x0000023au): goto L_23A;
    case RC_ADDR(0x0000023cu): goto L_23C;
    case RC_ADDR(0x00000240u): goto L_240;
    case RC_ADDR(0x00000242u): goto L_242;
    case RC_ADDR(0x00000246u): goto L_246;
    case RC_ADDR(0x0000024au): goto L_24A;
    case RC_ADDR(0x0000024eu): goto L_24E;
    case RC_ADDR(0x00000252u): goto L_252;
    case RC_ADDR(0x00000254u): goto L_254;
    case RC_ADDR(0x00000258u): goto L_258;
    case RC_ADDR(0x0000025au): goto L_25A;
    case RC_ADDR(0x0000025eu): goto L_25E;
    case RC_ADDR(0x00000260u): goto L_260;
    case RC_ADDR(0x00000264u): goto L_264;
    case RC_ADDR(0x00000266u): goto L_266;
    case RC_ADDR(0x0000026au): goto L_26A;
    case RC_ADDR(0x0000026eu): goto L_26E;
    case RC_ADDR(0x00000272u): goto L_272;
    case RC_ADDR(0x00000278u): goto L_278;
    case RC_ADDR(0x0000027eu): goto L_27E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_E4:
    /* 000000e4   4  link.w A5,#ffffffb8 */
    c->pc = RC_ADDR(0x000000e4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x48u;

L_E8:
    /* 000000e8   6  move.w #1,(ffffce32,A4) */
    c->pc = RC_ADDR(0x000000e8u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x31ceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EE:
    /* 000000ee   4  clr.w (ffffffc2,A5) */
    c->pc = RC_ADDR(0x000000eeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x3eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F2:
    /* 000000f2   4  jsr (000002c8) */
    c->pc = RC_ADDR(0x000000f2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000000f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000002c8u);
    return;

L_F6:
    /* 000000f6   4  jsr (000070a2) */
    c->pc = RC_ADDR(0x000000f6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000000fau));
    rc_depth++;
    c->pc = RC_ADDR(0x000070a2u);
    return;

L_FA:
    /* 000000fa   6  move.w #17,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x000000fau);
    rc_step(c, m, 16);
    t0 = 0x00000017u;
    rc_wr16(c, m, (c->a[4] - 0x101cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_100:
    /* 00000100   6  move.w #e,(ffff83c8,A4) */
    c->pc = RC_ADDR(0x00000100u);
    rc_step(c, m, 16);
    t0 = 0x0000000eu;
    rc_wr16(c, m, (c->a[4] - 0x7c38u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_106:
    /* 00000106   6  move.w #9,(ffff83cc,A4) */
    c->pc = RC_ADDR(0x00000106u);
    rc_step(c, m, 16);
    t0 = 0x00000009u;
    rc_wr16(c, m, (c->a[4] - 0x7c34u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10C:
    /* 0000010c   4  clr.w (fffffd82,A4) */
    c->pc = RC_ADDR(0x0000010cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x27eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_110:
    /* 00000110   4  jsr (00006126) */
    c->pc = RC_ADDR(0x00000110u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000114u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006126u);
    return;

L_114:
    /* 00000114   4  jsr (000044b2) */
    c->pc = RC_ADDR(0x00000114u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000118u));
    rc_depth++;
    c->pc = RC_ADDR(0x000044b2u);
    return;

L_118:
    /* 00000118   4  jsr (ffff81d6,A4) */
    c->pc = RC_ADDR(0x00000118u);
    rc_step(c, m, 18);
    /* vector 78 */
    rc_push32(c, m, RC_ADDR(0x0000011cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c2cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001cbc8u);
    return;

L_11C:
    /* 0000011c   4  jsr (ffff8092,A4) */
    c->pc = RC_ADDR(0x0000011cu);
    rc_step(c, m, 18);
    /* vector 24 */
    rc_push32(c, m, RC_ADDR(0x00000120u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ae8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000090dcu);
    return;

L_120:
    /* 00000120   4  jsr (ffff8182,A4) */
    c->pc = RC_ADDR(0x00000120u);
    rc_step(c, m, 18);
    /* vector 64 */
    rc_push32(c, m, RC_ADDR(0x00000124u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bd8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016e56u);
    return;

L_124:
    /* 00000124   4  jsr (ffff8098,A4) */
    c->pc = RC_ADDR(0x00000124u);
    rc_step(c, m, 18);
    /* vector 25 */
    rc_push32(c, m, RC_ADDR(0x00000128u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021aeeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000091acu);
    return;

L_128:
    /* 00000128   4  jsr (ffff80a4,A4) */
    c->pc = RC_ADDR(0x00000128u);
    rc_step(c, m, 18);
    /* vector 27 */
    rc_push32(c, m, RC_ADDR(0x0000012cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021afau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000994eu);
    return;

L_12C:
    /* 0000012c   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0000012cu);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x00000130u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b36u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009caeu);
    return;

L_130:
    /* 00000130   4  jsr (000009f2) */
    c->pc = RC_ADDR(0x00000130u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000134u));
    rc_depth++;
    c->pc = RC_ADDR(0x000009f2u);
    return;

L_134:
    /* 00000134   4  jsr (00003692) */
    c->pc = RC_ADDR(0x00000134u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000138u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003692u);
    return;

L_138:
    /* 00000138   4  jsr (ffff8146,A4) */
    c->pc = RC_ADDR(0x00000138u);
    rc_step(c, m, 18);
    /* vector 54 */
    rc_push32(c, m, RC_ADDR(0x0000013cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00010dfau);
    return;

L_13C:
    /* 0000013c   4  jsr (ffff8104,A4) */
    c->pc = RC_ADDR(0x0000013cu);
    rc_step(c, m, 18);
    /* vector 43 */
    rc_push32(c, m, RC_ADDR(0x00000140u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b5au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000bf8eu);
    return;

L_140:
    /* 00000140   4  jsr (ffff808c,A4) */
    c->pc = RC_ADDR(0x00000140u);
    rc_step(c, m, 18);
    /* vector 23 */
    rc_push32(c, m, RC_ADDR(0x00000144u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ae2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00008e3au);
    return;

L_144:
    /* 00000144   4  clr.w (fffffdae,A4) */
    c->pc = RC_ADDR(0x00000144u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x252u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_148:
    /* 00000148   4  clr.w (fffffe3e,A4) */
    c->pc = RC_ADDR(0x00000148u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x1c2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14C:
    /* 0000014c   4  clr.w (ffffce42,A4) */
    c->pc = RC_ADDR(0x0000014cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x31beu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_150:
    /* 00000150   4  clr.w (ffffce3e,A4) */
    c->pc = RC_ADDR(0x00000150u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x31c2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_154:
    /* 00000154   4  clr.w (ffffce3c,A4) */
    c->pc = RC_ADDR(0x00000154u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x31c4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_158:
    /* 00000158   4  clr.w (ffffce40,A4) */
    c->pc = RC_ADDR(0x00000158u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x31c0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15C:
    /* 0000015c   4  movea.l (ffffcba0,A4),A0 */
    c->pc = RC_ADDR(0x0000015cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[0] = t0;

L_160:
    /* 00000160   4  movea.l (22,A0),A1 */
    c->pc = RC_ADDR(0x00000160u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x22u));
    c->a[1] = t0;

L_164:
    /* 00000164   2  movea.l (A1),A0 */
    c->pc = RC_ADDR(0x00000164u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[0] = t0;

L_166:
    /* 00000166   4  movea.l (24,A0),A1 */
    c->pc = RC_ADDR(0x00000166u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[1] = t0;

L_16A:
    /* 0000016a   6  move.l (4,A1),(ffffffbe,A5) */
    c->pc = RC_ADDR(0x0000016au);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0x42u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_170:
    /* 00000170   4  movea.l (ffffffbe,A5),A0 */
    c->pc = RC_ADDR(0x00000170u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    c->a[0] = t0;

L_174:
    /* 00000174   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000174u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_176:
    /* 00000176   4  move.b (5,A0),D0 */
    c->pc = RC_ADDR(0x00000176u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_17A:
    /* 0000017a   4  move.w D0,(ffffffbc,A5) */
    c->pc = RC_ADDR(0x0000017au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x44u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17E:
    /* 0000017e   4  movea.l (ffffffbe,A5),A0 */
    c->pc = RC_ADDR(0x0000017eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    c->a[0] = t0;

L_182:
    /* 00000182   4  movea.l (ffffffbe,A5),A1 */
    c->pc = RC_ADDR(0x00000182u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    c->a[1] = t0;

L_186:
    /* 00000186   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x00000186u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18A:
    /* 0000018a   2  mulu.w (A1),D0 */
    c->pc = RC_ADDR(0x0000018au);
    rc_step(c, m, 42);
    t0 = rc_rd16(c, m, c->a[1]);
    rc_mulu(c, 0, t0);

L_18C:
    /* 0000018c   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0000018cu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_18E:
    /* 0000018e   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0000018eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_190:
    /* 00000190   4  move.l D1,(ffffffb8,A5) */
    c->pc = RC_ADDR(0x00000190u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x48u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_194:
    /* 00000194   4  movea.l (ffffffbe,A5),A0 */
    c->pc = RC_ADDR(0x00000194u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    c->a[0] = t0;

L_198:
    /* 00000198   4  clr.b (5,A0) */
    c->pc = RC_ADDR(0x00000198u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[0] + 0x5u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_19C:
    /* 0000019c   4  movea.l (ffffcba0,A4),A0 */
    c->pc = RC_ADDR(0x0000019cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[0] = t0;

L_1A0:
    /* 000001a0   4  move.l (22,A0),-(A7) */
    c->pc = RC_ADDR(0x000001a0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A4:
    /* 000001a4   4  jsr (ffff8374,A4) */
    c->pc = RC_ADDR(0x000001a4u);
    rc_step(c, m, 18);
    /* vector 147 */
    rc_push32(c, m, RC_ADDR(0x000001a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021898u);
    return;

L_1A8:
    /* 000001a8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000001a8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1AA:
    /* 000001aa   4  move.w (ffffffbc,A5),D0 */
    c->pc = RC_ADDR(0x000001aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AE:
    /* 000001ae   4  subq.w #1,(ffffffbc,A5) */
    c->pc = RC_ADDR(0x000001aeu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x44u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B2:
    /* 000001b2   2  tst.w D0 */
    c->pc = RC_ADDR(0x000001b2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1B4:
    /* 000001b4   2  beq 000001d4 */
    c->pc = RC_ADDR(0x000001b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D4;

L_1B6:
    /* 000001b6   4  move.l (ffffffb8,A5),-(A7) */
    c->pc = RC_ADDR(0x000001b6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x48u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BA:
    /* 000001ba   4  move.w (ffffffbc,A5),D0 */
    c->pc = RC_ADDR(0x000001bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BE:
    /* 000001be   2  ext.l D0 */
    c->pc = RC_ADDR(0x000001beu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C0:
    /* 000001c0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000001c0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1C2:
    /* 000001c2   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x000001c2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1C4:
    /* 000001c4   4  adda.l (ffffffbe,A5),A0 */
    c->pc = RC_ADDR(0x000001c4u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    c->a[0] += t0;

L_1C8:
    /* 000001c8   4  move.l (8,A0),-(A7) */
    c->pc = RC_ADDR(0x000001c8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CC:
    /* 000001cc   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x000001ccu);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x000001d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_1D0:
    /* 000001d0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000001d0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D2:
    /* 000001d2   2  bra 000001aa */
    c->pc = RC_ADDR(0x000001d2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1AA;

L_1D4:
    /* 000001d4   4  jsr (ffff81e8,A4) */
    c->pc = RC_ADDR(0x000001d4u);
    rc_step(c, m, 18);
    /* vector 81 */
    rc_push32(c, m, RC_ADDR(0x000001d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d00au);
    return;

L_1D8:
    /* 000001d8   4  move.w #7,-(A7) */
    c->pc = RC_ADDR(0x000001d8u);
    rc_step(c, m, 12);
    t0 = 0x00000007u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DC:
    /* 000001dc   4  pea (0000029c) */
    c->pc = RC_ADDR(0x000001dcu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000029cu));

L_1E0:
    /* 000001e0   4  jsr (00004cb6) */
    c->pc = RC_ADDR(0x000001e0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000001e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004cb6u);
    return;

L_1E4:
    /* 000001e4   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000001e4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_1E6:
    /* 000001e6   4  jsr (ffff809e,A4) */
    c->pc = RC_ADDR(0x000001e6u);
    rc_step(c, m, 18);
    /* vector 26 */
    rc_push32(c, m, RC_ADDR(0x000001eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021af4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009870u);
    return;

L_1EA:
    /* 000001ea   4  jsr (ffff8128,A4) */
    c->pc = RC_ADDR(0x000001eau);
    rc_step(c, m, 18);
    /* vector 49 */
    rc_push32(c, m, RC_ADDR(0x000001eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001029eu);
    return;

L_1EE:
    /* 000001ee   4  move.w D0,(ffffffc2,A5) */
    c->pc = RC_ADDR(0x000001eeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x3eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F2:
    /* 000001f2   4  clr.w (fffffe40,A4) */
    c->pc = RC_ADDR(0x000001f2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x1c0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F6:
    /* 000001f6   4  clr.w (fffff0b6,A4) */
    c->pc = RC_ADDR(0x000001f6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xf4au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1FA:
    /* 000001fa   6  move.w #1,(ffffce30,A4) */
    c->pc = RC_ADDR(0x000001fau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x31d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_200:
    /* 00000200   4  jsr (0000551c) */
    c->pc = RC_ADDR(0x00000200u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000204u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000551cu);
    return;

L_204:
    /* 00000204   6  move.w #1,(ffffef98,A4) */
    c->pc = RC_ADDR(0x00000204u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x1068u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20A:
    /* 0000020a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000020au);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E:
    /* 0000020e   4  pea (000002b1) */
    c->pc = RC_ADDR(0x0000020eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000002b1u));

L_212:
    /* 00000212   4  pea (000002a8) */
    c->pc = RC_ADDR(0x00000212u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000002a8u));

L_216:
    /* 00000216   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x00000216u);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0000021au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a64u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000002f4u);
    return;

L_21A:
    /* 0000021a   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000021au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_21E:
    /* 0000021e   4  move.w #41,-(A7) */
    c->pc = RC_ADDR(0x0000021eu);
    rc_step(c, m, 12);
    t0 = 0x00000041u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_222:
    /* 00000222   4  pea (000002bc) */
    c->pc = RC_ADDR(0x00000222u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000002bcu));

L_226:
    /* 00000226   4  jsr (00000b62) */
    c->pc = RC_ADDR(0x00000226u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000022au));
    rc_depth++;
    c->pc = RC_ADDR(0x00000b62u);
    return;

L_22A:
    /* 0000022a   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000022au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_22C:
    /* 0000022c   4  clr.w (ffffef98,A4) */
    c->pc = RC_ADDR(0x0000022cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x1068u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_230:
    /* 00000230   4  tst.w (ffffce30,A4) */
    c->pc = RC_ADDR(0x00000230u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31d0u));
    rc_set_nzvc(c, t0, RC_W);

L_234:
    /* 00000234   2  beq 00000266 */
    c->pc = RC_ADDR(0x00000234u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_266;

L_236:
    /* 00000236   4  tst.w (ffffffc2,A5) */
    c->pc = RC_ADDR(0x00000236u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x3eu));
    rc_set_nzvc(c, t0, RC_W);

L_23A:
    /* 0000023a   2  bne 00000246 */
    c->pc = RC_ADDR(0x0000023au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_246;

L_23C:
    /* 0000023c   4  tst.w (ffff9312,A4) */
    c->pc = RC_ADDR(0x0000023cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6ceeu));
    rc_set_nzvc(c, t0, RC_W);

L_240:
    /* 00000240   2  bne 00000246 */
    c->pc = RC_ADDR(0x00000240u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_246;

L_242:
    /* 00000242   4  jsr (00005cce) */
    c->pc = RC_ADDR(0x00000242u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000246u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005cceu);
    return;

L_246:
    /* 00000246   4  clr.w (ffffffc2,A5) */
    c->pc = RC_ADDR(0x00000246u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x3eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_24A:
    /* 0000024a   4  jsr (ffff80f2,A4) */
    c->pc = RC_ADDR(0x0000024au);
    rc_step(c, m, 18);
    /* vector 40 */
    rc_push32(c, m, RC_ADDR(0x0000024eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b48u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000a4d6u);
    return;

L_24E:
    /* 0000024e   4  tst.w (ffffce30,A4) */
    c->pc = RC_ADDR(0x0000024eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31d0u));
    rc_set_nzvc(c, t0, RC_W);

L_252:
    /* 00000252   2  beq 00000264 */
    c->pc = RC_ADDR(0x00000252u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_264;

L_254:
    /* 00000254   4  tst.w (ffff83d6,A4) */
    c->pc = RC_ADDR(0x00000254u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c2au));
    rc_set_nzvc(c, t0, RC_W);

L_258:
    /* 00000258   2  beq 00000260 */
    c->pc = RC_ADDR(0x00000258u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_260;

L_25A:
    /* 0000025a   4  clr.w (ffff83d6,A4) */
    c->pc = RC_ADDR(0x0000025au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c2au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_25E:
    /* 0000025e   2  bra 00000264 */
    c->pc = RC_ADDR(0x0000025eu);
    rc_step(c, m, 10);
    goto L_264;

L_260:
    /* 00000260   4  jsr (0000448e) */
    c->pc = RC_ADDR(0x00000260u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000264u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000448eu);
    return;

L_264:
    /* 00000264   2  bra 00000230 */
    c->pc = RC_ADDR(0x00000264u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_230;

L_266:
    /* 00000266   4  jsr (ffff8110,A4) */
    c->pc = RC_ADDR(0x00000266u);
    rc_step(c, m, 18);
    /* vector 45 */
    rc_push32(c, m, RC_ADDR(0x0000026au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ec8au);
    return;

L_26A:
    /* 0000026a   4  jsr (00005596) */
    c->pc = RC_ADDR(0x0000026au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000026eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005596u);
    return;

L_26E:
    /* 0000026e   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x0000026eu);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x00000272u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b84u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001042au);
    return;

L_272:
    /* 00000272   6  move.w #1,(ffffffc2,A5) */
    c->pc = RC_ADDR(0x00000272u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x3eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_278:
    /* 00000278   6  move.w #1,(ffffce30,A4) */
    c->pc = RC_ADDR(0x00000278u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x31d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_27E:
    /* 0000027e   2  bra 00000200 */
    c->pc = RC_ADDR(0x0000027eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_200;

}
