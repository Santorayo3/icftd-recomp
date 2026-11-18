/* fn_0001f090 - 370 byte(s), 111 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f090(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f090u): goto L_1F090;
    case RC_ADDR(0x0001f094u): goto L_1F094;
    case RC_ADDR(0x0001f098u): goto L_1F098;
    case RC_ADDR(0x0001f09au): goto L_1F09A;
    case RC_ADDR(0x0001f09eu): goto L_1F09E;
    case RC_ADDR(0x0001f0a0u): goto L_1F0A0;
    case RC_ADDR(0x0001f0a4u): goto L_1F0A4;
    case RC_ADDR(0x0001f0a6u): goto L_1F0A6;
    case RC_ADDR(0x0001f0aau): goto L_1F0AA;
    case RC_ADDR(0x0001f0aeu): goto L_1F0AE;
    case RC_ADDR(0x0001f0b0u): goto L_1F0B0;
    case RC_ADDR(0x0001f0b4u): goto L_1F0B4;
    case RC_ADDR(0x0001f0b6u): goto L_1F0B6;
    case RC_ADDR(0x0001f0b8u): goto L_1F0B8;
    case RC_ADDR(0x0001f0bau): goto L_1F0BA;
    case RC_ADDR(0x0001f0beu): goto L_1F0BE;
    case RC_ADDR(0x0001f0c2u): goto L_1F0C2;
    case RC_ADDR(0x0001f0c6u): goto L_1F0C6;
    case RC_ADDR(0x0001f0cau): goto L_1F0CA;
    case RC_ADDR(0x0001f0ceu): goto L_1F0CE;
    case RC_ADDR(0x0001f0d2u): goto L_1F0D2;
    case RC_ADDR(0x0001f0d6u): goto L_1F0D6;
    case RC_ADDR(0x0001f0d8u): goto L_1F0D8;
    case RC_ADDR(0x0001f0dcu): goto L_1F0DC;
    case RC_ADDR(0x0001f0deu): goto L_1F0DE;
    case RC_ADDR(0x0001f0e0u): goto L_1F0E0;
    case RC_ADDR(0x0001f0e2u): goto L_1F0E2;
    case RC_ADDR(0x0001f0e4u): goto L_1F0E4;
    case RC_ADDR(0x0001f0e8u): goto L_1F0E8;
    case RC_ADDR(0x0001f0eau): goto L_1F0EA;
    case RC_ADDR(0x0001f0ecu): goto L_1F0EC;
    case RC_ADDR(0x0001f0f0u): goto L_1F0F0;
    case RC_ADDR(0x0001f0f2u): goto L_1F0F2;
    case RC_ADDR(0x0001f0f4u): goto L_1F0F4;
    case RC_ADDR(0x0001f0f8u): goto L_1F0F8;
    case RC_ADDR(0x0001f0fau): goto L_1F0FA;
    case RC_ADDR(0x0001f0feu): goto L_1F0FE;
    case RC_ADDR(0x0001f102u): goto L_1F102;
    case RC_ADDR(0x0001f106u): goto L_1F106;
    case RC_ADDR(0x0001f108u): goto L_1F108;
    case RC_ADDR(0x0001f10cu): goto L_1F10C;
    case RC_ADDR(0x0001f10eu): goto L_1F10E;
    case RC_ADDR(0x0001f110u): goto L_1F110;
    case RC_ADDR(0x0001f114u): goto L_1F114;
    case RC_ADDR(0x0001f116u): goto L_1F116;
    case RC_ADDR(0x0001f118u): goto L_1F118;
    case RC_ADDR(0x0001f11cu): goto L_1F11C;
    case RC_ADDR(0x0001f11eu): goto L_1F11E;
    case RC_ADDR(0x0001f122u): goto L_1F122;
    case RC_ADDR(0x0001f126u): goto L_1F126;
    case RC_ADDR(0x0001f12au): goto L_1F12A;
    case RC_ADDR(0x0001f12eu): goto L_1F12E;
    case RC_ADDR(0x0001f130u): goto L_1F130;
    case RC_ADDR(0x0001f134u): goto L_1F134;
    case RC_ADDR(0x0001f136u): goto L_1F136;
    case RC_ADDR(0x0001f13au): goto L_1F13A;
    case RC_ADDR(0x0001f13eu): goto L_1F13E;
    case RC_ADDR(0x0001f142u): goto L_1F142;
    case RC_ADDR(0x0001f144u): goto L_1F144;
    case RC_ADDR(0x0001f146u): goto L_1F146;
    case RC_ADDR(0x0001f148u): goto L_1F148;
    case RC_ADDR(0x0001f14eu): goto L_1F14E;
    case RC_ADDR(0x0001f154u): goto L_1F154;
    case RC_ADDR(0x0001f158u): goto L_1F158;
    case RC_ADDR(0x0001f15cu): goto L_1F15C;
    case RC_ADDR(0x0001f160u): goto L_1F160;
    case RC_ADDR(0x0001f164u): goto L_1F164;
    case RC_ADDR(0x0001f168u): goto L_1F168;
    case RC_ADDR(0x0001f16cu): goto L_1F16C;
    case RC_ADDR(0x0001f170u): goto L_1F170;
    case RC_ADDR(0x0001f174u): goto L_1F174;
    case RC_ADDR(0x0001f178u): goto L_1F178;
    case RC_ADDR(0x0001f17cu): goto L_1F17C;
    case RC_ADDR(0x0001f180u): goto L_1F180;
    case RC_ADDR(0x0001f184u): goto L_1F184;
    case RC_ADDR(0x0001f188u): goto L_1F188;
    case RC_ADDR(0x0001f18cu): goto L_1F18C;
    case RC_ADDR(0x0001f190u): goto L_1F190;
    case RC_ADDR(0x0001f192u): goto L_1F192;
    case RC_ADDR(0x0001f196u): goto L_1F196;
    case RC_ADDR(0x0001f198u): goto L_1F198;
    case RC_ADDR(0x0001f19cu): goto L_1F19C;
    case RC_ADDR(0x0001f1a0u): goto L_1F1A0;
    case RC_ADDR(0x0001f1a4u): goto L_1F1A4;
    case RC_ADDR(0x0001f1a6u): goto L_1F1A6;
    case RC_ADDR(0x0001f1a8u): goto L_1F1A8;
    case RC_ADDR(0x0001f1acu): goto L_1F1AC;
    case RC_ADDR(0x0001f1aeu): goto L_1F1AE;
    case RC_ADDR(0x0001f1b2u): goto L_1F1B2;
    case RC_ADDR(0x0001f1b6u): goto L_1F1B6;
    case RC_ADDR(0x0001f1b8u): goto L_1F1B8;
    case RC_ADDR(0x0001f1bcu): goto L_1F1BC;
    case RC_ADDR(0x0001f1c0u): goto L_1F1C0;
    case RC_ADDR(0x0001f1c2u): goto L_1F1C2;
    case RC_ADDR(0x0001f1c6u): goto L_1F1C6;
    case RC_ADDR(0x0001f1cau): goto L_1F1CA;
    case RC_ADDR(0x0001f1ceu): goto L_1F1CE;
    case RC_ADDR(0x0001f1d0u): goto L_1F1D0;
    case RC_ADDR(0x0001f1d2u): goto L_1F1D2;
    case RC_ADDR(0x0001f1d6u): goto L_1F1D6;
    case RC_ADDR(0x0001f1dau): goto L_1F1DA;
    case RC_ADDR(0x0001f1deu): goto L_1F1DE;
    case RC_ADDR(0x0001f1e0u): goto L_1F1E0;
    case RC_ADDR(0x0001f1e6u): goto L_1F1E6;
    case RC_ADDR(0x0001f1eau): goto L_1F1EA;
    case RC_ADDR(0x0001f1eeu): goto L_1F1EE;
    case RC_ADDR(0x0001f1f2u): goto L_1F1F2;
    case RC_ADDR(0x0001f1f4u): goto L_1F1F4;
    case RC_ADDR(0x0001f1f8u): goto L_1F1F8;
    case RC_ADDR(0x0001f1fcu): goto L_1F1FC;
    case RC_ADDR(0x0001f1feu): goto L_1F1FE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F090:
    /* 0001f090   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001f090u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1F094:
    /* 0001f094   4  tst.w (ffffd284,A4) */
    c->pc = RC_ADDR(0x0001f094u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d7cu));
    rc_set_nzvc(c, t0, RC_W);

L_1F098:
    /* 0001f098   2  beq 0001f0e2 */
    c->pc = RC_ADDR(0x0001f098u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F0E2;

L_1F09A:
    /* 0001f09a   4  tst.w (ffffd28e,A4) */
    c->pc = RC_ADDR(0x0001f09au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d72u));
    rc_set_nzvc(c, t0, RC_W);

L_1F09E:
    /* 0001f09e   2  bne 0001f0d8 */
    c->pc = RC_ADDR(0x0001f09eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F0D8;

L_1F0A0:
    /* 0001f0a0   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001f0a0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F0A4:
    /* 0001f0a4   2  bra 0001f0ce */
    c->pc = RC_ADDR(0x0001f0a4u);
    rc_step(c, m, 10);
    goto L_1F0CE;

L_1F0A6:
    /* 0001f0a6   4  pea (00000003).l */
    c->pc = RC_ADDR(0x0001f0a6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000003u);

L_1F0AA:
    /* 0001f0aa   4  movea.l (ffffd340,A4),A0 */
    c->pc = RC_ADDR(0x0001f0aau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[0] = t0;

L_1F0AE:
    /* 0001f0ae   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x0001f0aeu);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F0B0:
    /* 0001f0b0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001f0b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F0B4:
    /* 0001f0b4   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001f0b4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1F0B6:
    /* 0001f0b6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001f0b6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1F0B8:
    /* 0001f0b8   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001f0b8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1F0BA:
    /* 0001f0ba   4  adda.l (ffffd340,A4),A0 */
    c->pc = RC_ADDR(0x0001f0bau);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[0] += t0;

L_1F0BE:
    /* 0001f0be   4  move.l (8,A0),-(A7) */
    c->pc = RC_ADDR(0x0001f0beu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F0C2:
    /* 0001f0c2   4  jsr (00023848) */
    c->pc = RC_ADDR(0x0001f0c2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f0c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023848u);
    return;

L_1F0C6:
    /* 0001f0c6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001f0c6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1F0CA:
    /* 0001f0ca   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001f0cau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1F0CE:
    /* 0001f0ce   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001f0ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F0D2:
    /* 0001f0d2   4  cmp.w (ffffd28a,A4),D0 */
    c->pc = RC_ADDR(0x0001f0d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d76u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1F0D6:
    /* 0001f0d6   2  bcs 0001f0a6 */
    c->pc = RC_ADDR(0x0001f0d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1F0A6; }

L_1F0D8:
    /* 0001f0d8   4  addq.w #1,(ffffd284,A4) */
    c->pc = RC_ADDR(0x0001f0d8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x2d7cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1F0DC:
    /* 0001f0dc   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001f0dcu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F0DE:
    /* 0001f0de   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f0deu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F0E0:
    /* 0001f0e0   2  rts */
    c->pc = RC_ADDR(0x0001f0e0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1F0E2:
    /* 0001f0e2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f0e2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F0E4:
    /* 0001f0e4   4  move.w (ffffd288,A4),D0 */
    c->pc = RC_ADDR(0x0001f0e4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d78u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F0E8:
    /* 0001f0e8   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f0e8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F0EA:
    /* 0001f0ea   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f0eau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F0EC:
    /* 0001f0ec   4  move.w (ffffd286,A4),D0 */
    c->pc = RC_ADDR(0x0001f0ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d7au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F0F0:
    /* 0001f0f0   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f0f0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F0F2:
    /* 0001f0f2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f0f2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F0F4:
    /* 0001f0f4   4  move.w (ffffd28a,A4),D0 */
    c->pc = RC_ADDR(0x0001f0f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d76u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F0F8:
    /* 0001f0f8   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f0f8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F0FA:
    /* 0001f0fa   4  jsr (0001f43e) */
    c->pc = RC_ADDR(0x0001f0fau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f0feu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f43eu);
    return;

L_1F0FE:
    /* 0001f0fe   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001f0feu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1F102:
    /* 0001f102   4  move.l D0,(ffffd33c,A4) */
    c->pc = RC_ADDR(0x0001f102u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2cc4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F106:
    /* 0001f106   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f106u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F108:
    /* 0001f108   4  move.w (ffffd288,A4),D0 */
    c->pc = RC_ADDR(0x0001f108u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d78u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F10C:
    /* 0001f10c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f10cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F10E:
    /* 0001f10e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f10eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F110:
    /* 0001f110   4  move.w (ffffd286,A4),D0 */
    c->pc = RC_ADDR(0x0001f110u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d7au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F114:
    /* 0001f114   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f114u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F116:
    /* 0001f116   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f116u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F118:
    /* 0001f118   4  move.w (ffffd28a,A4),D0 */
    c->pc = RC_ADDR(0x0001f118u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d76u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F11C:
    /* 0001f11c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f11cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F11E:
    /* 0001f11e   4  jsr (0001f43e) */
    c->pc = RC_ADDR(0x0001f11eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f122u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f43eu);
    return;

L_1F122:
    /* 0001f122   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001f122u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1F126:
    /* 0001f126   4  move.l D0,(ffffd340,A4) */
    c->pc = RC_ADDR(0x0001f126u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2cc0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F12A:
    /* 0001f12a   4  tst.l (ffffd33c,A4) */
    c->pc = RC_ADDR(0x0001f12au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    rc_set_nzvc(c, t0, RC_L);

L_1F12E:
    /* 0001f12e   2  beq 0001f136 */
    c->pc = RC_ADDR(0x0001f12eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F136;

L_1F130:
    /* 0001f130   4  tst.l (ffffd340,A4) */
    c->pc = RC_ADDR(0x0001f130u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    rc_set_nzvc(c, t0, RC_L);

L_1F134:
    /* 0001f134   2  bne 0001f148 */
    c->pc = RC_ADDR(0x0001f134u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F148;

L_1F136:
    /* 0001f136   4  jsr (0001f2d6) */
    c->pc = RC_ADDR(0x0001f136u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f13au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2d6u);
    return;

L_1F13A:
    /* 0001f13a   4  pea (0001f202) */
    c->pc = RC_ADDR(0x0001f13au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001f202u));

L_1F13E:
    /* 0001f13e   4  jsr (00022276) */
    c->pc = RC_ADDR(0x0001f13eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f142u));
    rc_depth++;
    c->pc = RC_ADDR(0x00022276u);
    return;

L_1F142:
    /* 0001f142   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f142u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F144:
    /* 0001f144   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f144u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F146:
    /* 0001f146   2  bra 0001f0de */
    c->pc = RC_ADDR(0x0001f146u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F0DE;

L_1F148:
    /* 0001f148   6  move.w #140,(ffffd286,A4) */
    c->pc = RC_ADDR(0x0001f148u);
    rc_step(c, m, 16);
    t0 = 0x00000140u;
    rc_wr16(c, m, (c->a[4] - 0x2d7au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F14E:
    /* 0001f14e   6  move.w #c8,(ffffd288,A4) */
    c->pc = RC_ADDR(0x0001f14eu);
    rc_step(c, m, 16);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0x2d78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F154:
    /* 0001f154   4  move.w (ffffd28c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001f154u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d74u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F158:
    /* 0001f158   4  move.w (ffffd288,A4),-(A7) */
    c->pc = RC_ADDR(0x0001f158u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d78u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F15C:
    /* 0001f15c   4  move.w (ffffd286,A4),-(A7) */
    c->pc = RC_ADDR(0x0001f15cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d7au));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F160:
    /* 0001f160   4  move.l (ffffd33c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001f160u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F164:
    /* 0001f164   4  jsr (00021b8e) */
    c->pc = RC_ADDR(0x0001f164u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f168u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b8eu);
    return;

L_1F168:
    /* 0001f168   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001f168u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1F16C:
    /* 0001f16c   4  move.l D0,(ffffd290,A4) */
    c->pc = RC_ADDR(0x0001f16cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2d70u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F170:
    /* 0001f170   4  move.w (ffffd28c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001f170u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d74u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F174:
    /* 0001f174   4  move.w (ffffd288,A4),-(A7) */
    c->pc = RC_ADDR(0x0001f174u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d78u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F178:
    /* 0001f178   4  move.w (ffffd286,A4),-(A7) */
    c->pc = RC_ADDR(0x0001f178u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d7au));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F17C:
    /* 0001f17c   4  move.l (ffffd340,A4),-(A7) */
    c->pc = RC_ADDR(0x0001f17cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F180:
    /* 0001f180   4  jsr (00021b8e) */
    c->pc = RC_ADDR(0x0001f180u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f184u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b8eu);
    return;

L_1F184:
    /* 0001f184   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001f184u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1F188:
    /* 0001f188   4  move.l D0,(ffffd294,A4) */
    c->pc = RC_ADDR(0x0001f188u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2d6cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F18C:
    /* 0001f18c   4  tst.l (ffffd290,A4) */
    c->pc = RC_ADDR(0x0001f18cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d70u));
    rc_set_nzvc(c, t0, RC_L);

L_1F190:
    /* 0001f190   2  beq 0001f198 */
    c->pc = RC_ADDR(0x0001f190u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F198;

L_1F192:
    /* 0001f192   4  tst.l (ffffd294,A4) */
    c->pc = RC_ADDR(0x0001f192u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d6cu));
    rc_set_nzvc(c, t0, RC_L);

L_1F196:
    /* 0001f196   2  bne 0001f1ac */
    c->pc = RC_ADDR(0x0001f196u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F1AC;

L_1F198:
    /* 0001f198   4  jsr (0001f2d6) */
    c->pc = RC_ADDR(0x0001f198u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f19cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2d6u);
    return;

L_1F19C:
    /* 0001f19c   4  pea (0001f224) */
    c->pc = RC_ADDR(0x0001f19cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001f224u));

L_1F1A0:
    /* 0001f1a0   4  jsr (00022276) */
    c->pc = RC_ADDR(0x0001f1a0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f1a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00022276u);
    return;

L_1F1A4:
    /* 0001f1a4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f1a4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F1A6:
    /* 0001f1a6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f1a6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F1A8:
    /* 0001f1a8   4  bra 0001f0de */
    c->pc = RC_ADDR(0x0001f1a8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F0DE;

L_1F1AC:
    /* 0001f1ac   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001f1acu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F1AE:
    /* 0001f1ae   4  pea (00000064).l */
    c->pc = RC_ADDR(0x0001f1aeu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000064u);

L_1F1B2:
    /* 0001f1b2   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0001f1b2u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0001f1b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1F1B6:
    /* 0001f1b6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f1b6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F1B8:
    /* 0001f1b8   4  move.l D0,(ffffd298,A4) */
    c->pc = RC_ADDR(0x0001f1b8u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2d68u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F1BC:
    /* 0001f1bc   4  tst.l (ffffd298,A4) */
    c->pc = RC_ADDR(0x0001f1bcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    rc_set_nzvc(c, t0, RC_L);

L_1F1C0:
    /* 0001f1c0   2  bne 0001f1d6 */
    c->pc = RC_ADDR(0x0001f1c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F1D6;

L_1F1C2:
    /* 0001f1c2   4  jsr (0001f2d6) */
    c->pc = RC_ADDR(0x0001f1c2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f1c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2d6u);
    return;

L_1F1C6:
    /* 0001f1c6   4  pea (0001f240) */
    c->pc = RC_ADDR(0x0001f1c6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001f240u));

L_1F1CA:
    /* 0001f1ca   4  jsr (00022276) */
    c->pc = RC_ADDR(0x0001f1cau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f1ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00022276u);
    return;

L_1F1CE:
    /* 0001f1ce   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f1ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F1D0:
    /* 0001f1d0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f1d0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F1D2:
    /* 0001f1d2   4  bra 0001f0de */
    c->pc = RC_ADDR(0x0001f1d2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F0DE;

L_1F1D6:
    /* 0001f1d6   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x0001f1d6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F1DA:
    /* 0001f1da   4  jsr (ffff8392,A4) */
    c->pc = RC_ADDR(0x0001f1dau);
    rc_step(c, m, 18);
    /* vector 152 */
    rc_push32(c, m, RC_ADDR(0x0001f1deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e88u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023904u);
    return;

L_1F1DE:
    /* 0001f1de   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f1deu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F1E0:
    /* 0001f1e0   6  move.w #1,(ffffd2ae,A4) */
    c->pc = RC_ADDR(0x0001f1e0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2d52u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F1E6:
    /* 0001f1e6   4  clr.w (ffffd2b0,A4) */
    c->pc = RC_ADDR(0x0001f1e6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2d50u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F1EA:
    /* 0001f1ea   4  move.l (ffffd290,A4),-(A7) */
    c->pc = RC_ADDR(0x0001f1eau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d70u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F1EE:
    /* 0001f1ee   4  jsr (ffff8398,A4) */
    c->pc = RC_ADDR(0x0001f1eeu);
    rc_step(c, m, 18);
    /* vector 153 */
    rc_push32(c, m, RC_ADDR(0x0001f1f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002393au);
    return;

L_1F1F2:
    /* 0001f1f2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f1f2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F1F4:
    /* 0001f1f4   4  jsr (0001f83c) */
    c->pc = RC_ADDR(0x0001f1f4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f1f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f83cu);
    return;

L_1F1F8:
    /* 0001f1f8   4  addq.w #1,(ffffd284,A4) */
    c->pc = RC_ADDR(0x0001f1f8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x2d7cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1F1FC:
    /* 0001f1fc   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001f1fcu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F1FE:
    /* 0001f1fe   4  bra 0001f0de */
    c->pc = RC_ADDR(0x0001f1feu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F0DE;

}
