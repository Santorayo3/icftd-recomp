/* fn_000080e0 - 326 byte(s), 93 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000080e0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000080e0u): goto L_80E0;
    case RC_ADDR(0x000080e4u): goto L_80E4;
    case RC_ADDR(0x000080e8u): goto L_80E8;
    case RC_ADDR(0x000080eeu): goto L_80EE;
    case RC_ADDR(0x000080f2u): goto L_80F2;
    case RC_ADDR(0x000080f6u): goto L_80F6;
    case RC_ADDR(0x000080fau): goto L_80FA;
    case RC_ADDR(0x000080feu): goto L_80FE;
    case RC_ADDR(0x00008102u): goto L_8102;
    case RC_ADDR(0x00008106u): goto L_8106;
    case RC_ADDR(0x0000810au): goto L_810A;
    case RC_ADDR(0x0000810cu): goto L_810C;
    case RC_ADDR(0x00008110u): goto L_8110;
    case RC_ADDR(0x00008114u): goto L_8114;
    case RC_ADDR(0x00008116u): goto L_8116;
    case RC_ADDR(0x0000811au): goto L_811A;
    case RC_ADDR(0x0000811eu): goto L_811E;
    case RC_ADDR(0x00008120u): goto L_8120;
    case RC_ADDR(0x00008124u): goto L_8124;
    case RC_ADDR(0x00008128u): goto L_8128;
    case RC_ADDR(0x0000812au): goto L_812A;
    case RC_ADDR(0x0000812eu): goto L_812E;
    case RC_ADDR(0x00008132u): goto L_8132;
    case RC_ADDR(0x00008136u): goto L_8136;
    case RC_ADDR(0x0000813au): goto L_813A;
    case RC_ADDR(0x0000813eu): goto L_813E;
    case RC_ADDR(0x00008142u): goto L_8142;
    case RC_ADDR(0x00008146u): goto L_8146;
    case RC_ADDR(0x0000814au): goto L_814A;
    case RC_ADDR(0x0000814eu): goto L_814E;
    case RC_ADDR(0x00008152u): goto L_8152;
    case RC_ADDR(0x00008154u): goto L_8154;
    case RC_ADDR(0x00008158u): goto L_8158;
    case RC_ADDR(0x0000815cu): goto L_815C;
    case RC_ADDR(0x00008160u): goto L_8160;
    case RC_ADDR(0x00008164u): goto L_8164;
    case RC_ADDR(0x00008166u): goto L_8166;
    case RC_ADDR(0x00008168u): goto L_8168;
    case RC_ADDR(0x0000816cu): goto L_816C;
    case RC_ADDR(0x00008170u): goto L_8170;
    case RC_ADDR(0x00008172u): goto L_8172;
    case RC_ADDR(0x00008176u): goto L_8176;
    case RC_ADDR(0x0000817au): goto L_817A;
    case RC_ADDR(0x0000817cu): goto L_817C;
    case RC_ADDR(0x00008180u): goto L_8180;
    case RC_ADDR(0x00008182u): goto L_8182;
    case RC_ADDR(0x00008184u): goto L_8184;
    case RC_ADDR(0x00008186u): goto L_8186;
    case RC_ADDR(0x0000818au): goto L_818A;
    case RC_ADDR(0x0000818eu): goto L_818E;
    case RC_ADDR(0x00008190u): goto L_8190;
    case RC_ADDR(0x00008196u): goto L_8196;
    case RC_ADDR(0x0000819au): goto L_819A;
    case RC_ADDR(0x0000819eu): goto L_819E;
    case RC_ADDR(0x000081a2u): goto L_81A2;
    case RC_ADDR(0x000081a4u): goto L_81A4;
    case RC_ADDR(0x000081aau): goto L_81AA;
    case RC_ADDR(0x000081acu): goto L_81AC;
    case RC_ADDR(0x000081b2u): goto L_81B2;
    case RC_ADDR(0x000081b4u): goto L_81B4;
    case RC_ADDR(0x000081bau): goto L_81BA;
    case RC_ADDR(0x000081bcu): goto L_81BC;
    case RC_ADDR(0x000081c0u): goto L_81C0;
    case RC_ADDR(0x000081c4u): goto L_81C4;
    case RC_ADDR(0x000081c8u): goto L_81C8;
    case RC_ADDR(0x000081ccu): goto L_81CC;
    case RC_ADDR(0x000081ceu): goto L_81CE;
    case RC_ADDR(0x000081d2u): goto L_81D2;
    case RC_ADDR(0x000081d4u): goto L_81D4;
    case RC_ADDR(0x000081d8u): goto L_81D8;
    case RC_ADDR(0x000081dcu): goto L_81DC;
    case RC_ADDR(0x000081deu): goto L_81DE;
    case RC_ADDR(0x000081e0u): goto L_81E0;
    case RC_ADDR(0x000081e2u): goto L_81E2;
    case RC_ADDR(0x000081e8u): goto L_81E8;
    case RC_ADDR(0x000081ecu): goto L_81EC;
    case RC_ADDR(0x000081eeu): goto L_81EE;
    case RC_ADDR(0x000081f2u): goto L_81F2;
    case RC_ADDR(0x000081f6u): goto L_81F6;
    case RC_ADDR(0x000081f8u): goto L_81F8;
    case RC_ADDR(0x000081fau): goto L_81FA;
    case RC_ADDR(0x000081fcu): goto L_81FC;
    case RC_ADDR(0x00008202u): goto L_8202;
    case RC_ADDR(0x00008204u): goto L_8204;
    case RC_ADDR(0x0000820au): goto L_820A;
    case RC_ADDR(0x0000820cu): goto L_820C;
    case RC_ADDR(0x0000820eu): goto L_820E;
    case RC_ADDR(0x00008212u): goto L_8212;
    case RC_ADDR(0x00008218u): goto L_8218;
    case RC_ADDR(0x0000821au): goto L_821A;
    case RC_ADDR(0x0000821eu): goto L_821E;
    case RC_ADDR(0x00008222u): goto L_8222;
    case RC_ADDR(0x00008224u): goto L_8224;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_80E0:
    /* 000080e0   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x000080e0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_80E4:
    /* 000080e4   4  clr.w (ffffd6cc,A4) */
    c->pc = RC_ADDR(0x000080e4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2934u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_80E8:
    /* 000080e8   6  move.l (8,A5),(fffffff8,A5) */
    c->pc = RC_ADDR(0x000080e8u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_80EE:
    /* 000080ee   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000080eeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_80F2:
    /* 000080f2   4  cmpi.b #5e,(A0) */
    c->pc = RC_ADDR(0x000080f2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000005eu);

L_80F6:
    /* 000080f6   4  bne 0000821e */
    c->pc = RC_ADDR(0x000080f6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_821E;

L_80FA:
    /* 000080fa   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000080fau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_80FE:
    /* 000080fe   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x000080feu);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_8102:
    /* 00008102   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00008102u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_8106:
    /* 00008106   4  cmpi.b #20,(A0) */
    c->pc = RC_ADDR(0x00008106u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_810A:
    /* 0000810a   2  bne 00008116 */
    c->pc = RC_ADDR(0x0000810au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_8116;

L_810C:
    /* 0000810c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000810cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_8110:
    /* 00008110   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x00008110u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_8114:
    /* 00008114   2  bra 00008102 */
    c->pc = RC_ADDR(0x00008114u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_8102;

L_8116:
    /* 00008116   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00008116u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_811A:
    /* 0000811a   4  cmpi.b #2b,(A0) */
    c->pc = RC_ADDR(0x0000811au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002bu);

L_811E:
    /* 0000811e   2  beq 00008136 */
    c->pc = RC_ADDR(0x0000811eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_8136;

L_8120:
    /* 00008120   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00008120u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_8124:
    /* 00008124   4  cmpi.b #2d,(A0) */
    c->pc = RC_ADDR(0x00008124u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002du);

L_8128:
    /* 00008128   2  beq 00008136 */
    c->pc = RC_ADDR(0x00008128u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_8136;

L_812A:
    /* 0000812a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000812au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_812E:
    /* 0000812e   4  cmpi.b #3e,(A0) */
    c->pc = RC_ADDR(0x0000812eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000003eu);

L_8132:
    /* 00008132   4  bne 0000821e */
    c->pc = RC_ADDR(0x00008132u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_821E;

L_8136:
    /* 00008136   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00008136u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_813A:
    /* 0000813a   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000813au);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_813E:
    /* 0000813e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000813eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_8142:
    /* 00008142   4  move.b (A0),(fffffffd,A5) */
    c->pc = RC_ADDR(0x00008142u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_wr8(c, m, (c->a[5] - 0x3u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_8146:
    /* 00008146   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x00008146u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_814A:
    /* 0000814a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000814au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_814E:
    /* 0000814e   4  jsr (ffff82d8,A4) */
    c->pc = RC_ADDR(0x0000814eu);
    rc_step(c, m, 18);
    /* vector 121 */
    rc_push32(c, m, RC_ADDR(0x00008152u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dceu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228d4u);
    return;

L_8152:
    /* 00008152   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00008152u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_8154:
    /* 00008154   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00008154u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8158:
    /* 00008158   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00008158u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_815C:
    /* 0000815c   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x0000815cu);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_8160:
    /* 00008160   4  cmpi.b #20,(A0) */
    c->pc = RC_ADDR(0x00008160u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_8164:
    /* 00008164   2  beq 00008168 */
    c->pc = RC_ADDR(0x00008164u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_8168;

L_8166:
    /* 00008166   2  bra 00008158 */
    c->pc = RC_ADDR(0x00008166u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_8158;

L_8168:
    /* 00008168   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00008168u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_816C:
    /* 0000816c   4  cmpi.b #20,(A0) */
    c->pc = RC_ADDR(0x0000816cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_8170:
    /* 00008170   2  bne 0000817c */
    c->pc = RC_ADDR(0x00008170u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_817C;

L_8172:
    /* 00008172   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00008172u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_8176:
    /* 00008176   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x00008176u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_817A:
    /* 0000817a   2  bra 00008168 */
    c->pc = RC_ADDR(0x0000817au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_8168;

L_817C:
    /* 0000817c   4  move.b (fffffffd,A5),D0 */
    c->pc = RC_ADDR(0x0000817cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0x3u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_8180:
    /* 00008180   2  ext.w D0 */
    c->pc = RC_ADDR(0x00008180u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_8182:
    /* 00008182   2  ext.l D0 */
    c->pc = RC_ADDR(0x00008182u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_8184:
    /* 00008184   2  bra 00008204 */
    c->pc = RC_ADDR(0x00008184u);
    rc_step(c, m, 10);
    goto L_8204;

L_8186:
    /* 00008186   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x00008186u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_818A:
    /* 0000818a   4  jsr (00008054) */
    c->pc = RC_ADDR(0x0000818au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000818eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00008054u);
    return;

L_818E:
    /* 0000818e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000818eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_8190:
    /* 00008190   6  move.l (8,A5),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00008190u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_8196:
    /* 00008196   4  bra 0000821a */
    c->pc = RC_ADDR(0x00008196u);
    rc_step(c, m, 10);
    goto L_821A;

L_819A:
    /* 0000819a   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x0000819au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_819E:
    /* 0000819e   4  jsr (0000803e) */
    c->pc = RC_ADDR(0x0000819eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000081a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000803eu);
    return;

L_81A2:
    /* 000081a2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000081a2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_81A4:
    /* 000081a4   6  move.l (8,A5),(fffffff8,A5) */
    c->pc = RC_ADDR(0x000081a4u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_81AA:
    /* 000081aa   2  bra 0000821a */
    c->pc = RC_ADDR(0x000081aau);
    rc_step(c, m, 10);
    goto L_821A;

L_81AC:
    /* 000081ac   6  cmpi.w #ef,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000081acu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x000000efu);

L_81B2:
    /* 000081b2   2  ble 000081e8 */
    c->pc = RC_ADDR(0x000081b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_81E8;

L_81B4:
    /* 000081b4   6  cmpi.w #f4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000081b4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x000000f4u);

L_81BA:
    /* 000081ba   2  bge 000081e8 */
    c->pc = RC_ADDR(0x000081bau);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_81E8;

L_81BC:
    /* 000081bc   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x000081bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_81C0:
    /* 000081c0   4  muls.w #222,D0 */
    c->pc = RC_ADDR(0x000081c0u);
    rc_step(c, m, 42);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_81C4:
    /* 000081c4   4  move.w (fffff78c,A4),D1 */
    c->pc = RC_ADDR(0x000081c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_81C8:
    /* 000081c8   4  muls.w #e,D1 */
    c->pc = RC_ADDR(0x000081c8u);
    rc_step(c, m, 42);
    t0 = 0x0000000eu;
    rc_muls(c, 1, t0);

L_81CC:
    /* 000081cc   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x000081ccu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_81CE:
    /* 000081ce   4  lea (ffffd745,A4),A0 */
    c->pc = RC_ADDR(0x000081ceu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x28bbu);

L_81D2:
    /* 000081d2   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x000081d2u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_81D4:
    /* 000081d4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000081d4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_81D8:
    /* 000081d8   4  sub.w #f0,D0 */
    c->pc = RC_ADDR(0x000081d8u);
    rc_step(c, m, 10);
    t0 = 0x000000f0u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_81DC:
    /* 000081dc   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x000081dcu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_81DE:
    /* 000081de   2  asl.w D0,D1 */
    c->pc = RC_ADDR(0x000081deu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_W), RC_W));

L_81E0:
    /* 000081e0   2  or.b D1,(A0) */
    c->pc = RC_ADDR(0x000081e0u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd8(c, m, t3);
    t2 = t1 | rc_d_get(c, 1, RC_B);
    rc_wr8(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_B);

L_81E2:
    /* 000081e2   6  move.w (fffffffe,A5),(ffffd6cc,A4) */
    c->pc = RC_ADDR(0x000081e2u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_wr16(c, m, (c->a[4] - 0x2934u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_81E8:
    /* 000081e8   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000081e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_81EC:
    /* 000081ec   2  beq 00008202 */
    c->pc = RC_ADDR(0x000081ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_8202;

L_81EE:
    /* 000081ee   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x000081eeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_81F2:
    /* 000081f2   4  jsr (000080a0) */
    c->pc = RC_ADDR(0x000081f2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000081f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000080a0u);
    return;

L_81F6:
    /* 000081f6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000081f6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_81F8:
    /* 000081f8   2  tst.w D0 */
    c->pc = RC_ADDR(0x000081f8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_81FA:
    /* 000081fa   2  beq 00008202 */
    c->pc = RC_ADDR(0x000081fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_8202;

L_81FC:
    /* 000081fc   6  move.l (8,A5),(fffffff8,A5) */
    c->pc = RC_ADDR(0x000081fcu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_8202:
    /* 00008202   2  bra 0000821a */
    c->pc = RC_ADDR(0x00008202u);
    rc_step(c, m, 10);
    goto L_821A;

L_8204:
    /* 00008204   6  sub.l #2b,D0 */
    c->pc = RC_ADDR(0x00008204u);
    rc_step(c, m, 16);
    t0 = 0x0000002bu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_820A:
    /* 0000820a   2  beq 000081ac */
    c->pc = RC_ADDR(0x0000820au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_81AC; }

L_820C:
    /* 0000820c   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x0000820cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_820E:
    /* 0000820e   4  beq 00008186 */
    c->pc = RC_ADDR(0x0000820eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_8186; }

L_8212:
    /* 00008212   6  sub.l #11,D0 */
    c->pc = RC_ADDR(0x00008212u);
    rc_step(c, m, 16);
    t0 = 0x00000011u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_8218:
    /* 00008218   2  beq 0000819a */
    c->pc = RC_ADDR(0x00008218u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_819A; }

L_821A:
    /* 0000821a   4  bra 00008116 */
    c->pc = RC_ADDR(0x0000821au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_8116;

L_821E:
    /* 0000821e   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000821eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_8222:
    /* 00008222   2  unlk A5 */
    c->pc = RC_ADDR(0x00008222u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_8224:
    /* 00008224   2  rts */
    c->pc = RC_ADDR(0x00008224u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
