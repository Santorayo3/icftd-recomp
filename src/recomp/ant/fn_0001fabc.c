/* fn_0001fabc - 254 byte(s), 78 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001fabc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fabcu): goto L_1FABC;
    case RC_ADDR(0x0001fac0u): goto L_1FAC0;
    case RC_ADDR(0x0001fac4u): goto L_1FAC4;
    case RC_ADDR(0x0001fac8u): goto L_1FAC8;
    case RC_ADDR(0x0001facau): goto L_1FACA;
    case RC_ADDR(0x0001faceu): goto L_1FACE;
    case RC_ADDR(0x0001fad2u): goto L_1FAD2;
    case RC_ADDR(0x0001fad4u): goto L_1FAD4;
    case RC_ADDR(0x0001fad6u): goto L_1FAD6;
    case RC_ADDR(0x0001fadau): goto L_1FADA;
    case RC_ADDR(0x0001fadcu): goto L_1FADC;
    case RC_ADDR(0x0001fadeu): goto L_1FADE;
    case RC_ADDR(0x0001fae2u): goto L_1FAE2;
    case RC_ADDR(0x0001fae6u): goto L_1FAE6;
    case RC_ADDR(0x0001faeau): goto L_1FAEA;
    case RC_ADDR(0x0001faf0u): goto L_1FAF0;
    case RC_ADDR(0x0001faf4u): goto L_1FAF4;
    case RC_ADDR(0x0001faf8u): goto L_1FAF8;
    case RC_ADDR(0x0001fafau): goto L_1FAFA;
    case RC_ADDR(0x0001fafeu): goto L_1FAFE;
    case RC_ADDR(0x0001fb02u): goto L_1FB02;
    case RC_ADDR(0x0001fb06u): goto L_1FB06;
    case RC_ADDR(0x0001fb0cu): goto L_1FB0C;
    case RC_ADDR(0x0001fb0eu): goto L_1FB0E;
    case RC_ADDR(0x0001fb10u): goto L_1FB10;
    case RC_ADDR(0x0001fb14u): goto L_1FB14;
    case RC_ADDR(0x0001fb18u): goto L_1FB18;
    case RC_ADDR(0x0001fb1au): goto L_1FB1A;
    case RC_ADDR(0x0001fb1eu): goto L_1FB1E;
    case RC_ADDR(0x0001fb20u): goto L_1FB20;
    case RC_ADDR(0x0001fb24u): goto L_1FB24;
    case RC_ADDR(0x0001fb26u): goto L_1FB26;
    case RC_ADDR(0x0001fb28u): goto L_1FB28;
    case RC_ADDR(0x0001fb2au): goto L_1FB2A;
    case RC_ADDR(0x0001fb2cu): goto L_1FB2C;
    case RC_ADDR(0x0001fb32u): goto L_1FB32;
    case RC_ADDR(0x0001fb34u): goto L_1FB34;
    case RC_ADDR(0x0001fb36u): goto L_1FB36;
    case RC_ADDR(0x0001fb3au): goto L_1FB3A;
    case RC_ADDR(0x0001fb3cu): goto L_1FB3C;
    case RC_ADDR(0x0001fb3eu): goto L_1FB3E;
    case RC_ADDR(0x0001fb40u): goto L_1FB40;
    case RC_ADDR(0x0001fb44u): goto L_1FB44;
    case RC_ADDR(0x0001fb4au): goto L_1FB4A;
    case RC_ADDR(0x0001fb4cu): goto L_1FB4C;
    case RC_ADDR(0x0001fb4eu): goto L_1FB4E;
    case RC_ADDR(0x0001fb52u): goto L_1FB52;
    case RC_ADDR(0x0001fb56u): goto L_1FB56;
    case RC_ADDR(0x0001fb58u): goto L_1FB58;
    case RC_ADDR(0x0001fb5cu): goto L_1FB5C;
    case RC_ADDR(0x0001fb5eu): goto L_1FB5E;
    case RC_ADDR(0x0001fb62u): goto L_1FB62;
    case RC_ADDR(0x0001fb64u): goto L_1FB64;
    case RC_ADDR(0x0001fb66u): goto L_1FB66;
    case RC_ADDR(0x0001fb68u): goto L_1FB68;
    case RC_ADDR(0x0001fb6au): goto L_1FB6A;
    case RC_ADDR(0x0001fb70u): goto L_1FB70;
    case RC_ADDR(0x0001fb72u): goto L_1FB72;
    case RC_ADDR(0x0001fb74u): goto L_1FB74;
    case RC_ADDR(0x0001fb78u): goto L_1FB78;
    case RC_ADDR(0x0001fb7au): goto L_1FB7A;
    case RC_ADDR(0x0001fb7cu): goto L_1FB7C;
    case RC_ADDR(0x0001fb7eu): goto L_1FB7E;
    case RC_ADDR(0x0001fb82u): goto L_1FB82;
    case RC_ADDR(0x0001fb88u): goto L_1FB88;
    case RC_ADDR(0x0001fb8cu): goto L_1FB8C;
    case RC_ADDR(0x0001fb92u): goto L_1FB92;
    case RC_ADDR(0x0001fb96u): goto L_1FB96;
    case RC_ADDR(0x0001fb9au): goto L_1FB9A;
    case RC_ADDR(0x0001fb9eu): goto L_1FB9E;
    case RC_ADDR(0x0001fba2u): goto L_1FBA2;
    case RC_ADDR(0x0001fba4u): goto L_1FBA4;
    case RC_ADDR(0x0001fba8u): goto L_1FBA8;
    case RC_ADDR(0x0001fbaau): goto L_1FBAA;
    case RC_ADDR(0x0001fbaeu): goto L_1FBAE;
    case RC_ADDR(0x0001fbb2u): goto L_1FBB2;
    case RC_ADDR(0x0001fbb6u): goto L_1FBB6;
    case RC_ADDR(0x0001fbb8u): goto L_1FBB8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FABC:
    /* 0001fabc   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001fabcu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1FAC0:
    /* 0001fac0   4  movem.l { D4 D5 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001fac0u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1FAC4:
    /* 0001fac4   4  lea (32fa,A4),A0 */
    c->pc = RC_ADDR(0x0001fac4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x32fau);

L_1FAC8:
    /* 0001fac8   2  movea.l A0,A3 */
    c->pc = RC_ADDR(0x0001fac8u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[3] = t0;

L_1FACA:
    /* 0001faca   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001facau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1FACE:
    /* 0001face   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001faceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FAD2:
    /* 0001fad2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001fad2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1FAD4:
    /* 0001fad4   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x0001fad4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_1FAD6:
    /* 0001fad6   4  lea (331a,A4),A0 */
    c->pc = RC_ADDR(0x0001fad6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x331au);

L_1FADA:
    /* 0001fada   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x0001fadau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_1FADC:
    /* 0001fadc   2  adda.l A0,A2 */
    c->pc = RC_ADDR(0x0001fadcu);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[2] += t0;

L_1FADE:
    /* 0001fade   4  move.b (6,A2),D0 */
    c->pc = RC_ADDR(0x0001fadeu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[2] + 0x6u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FAE2:
    /* 0001fae2   4  cmp.b (7,A2),D0 */
    c->pc = RC_ADDR(0x0001fae2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[2] + 0x7u));
    t1 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_1FAE6:
    /* 0001fae6   4  beq 0001fb88 */
    c->pc = RC_ADDR(0x0001fae6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FB88;

L_1FAEA:
    /* 0001faea   6  cmpi.w #24,(2,A2) */
    c->pc = RC_ADDR(0x0001faeau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[2] + 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000024u);

L_1FAF0:
    /* 0001faf0   4  beq 0001fb88 */
    c->pc = RC_ADDR(0x0001faf0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FB88;

L_1FAF4:
    /* 0001faf4   4  move.w (2,A2),D0 */
    c->pc = RC_ADDR(0x0001faf4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FAF8:
    /* 0001faf8   2  add.w D0,(A2) */
    c->pc = RC_ADDR(0x0001faf8u);
    rc_step(c, m, 12);
    t3 = c->a[2];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1FAFA:
    /* 0001fafa   4  cmpi.w #4000,(A2) */
    c->pc = RC_ADDR(0x0001fafau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, c->a[2]);
    rc_cmp(c, RC_W, t0, 0x00004000u);

L_1FAFE:
    /* 0001fafe   4  blt 0001fb88 */
    c->pc = RC_ADDR(0x0001fafeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1FB88;

L_1FB02:
    /* 0001fb02   4  subi.w #4000,(A2) */
    c->pc = RC_ADDR(0x0001fb02u);
    rc_step(c, m, 16);
    t3 = c->a[2];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00004000u;
    rc_flags_sub(c, RC_W, t1, 0x00004000u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1FB06:
    /* 0001fb06   6  btst #1,(5,A2) */
    c->pc = RC_ADDR(0x0001fb06u);
    rc_step(c, m, 16);
    t3 = (c->a[2] + 0x5u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1FB0C:
    /* 0001fb0c   2  beq 0001fb4c */
    c->pc = RC_ADDR(0x0001fb0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FB4C;

L_1FB0E:
    /* 0001fb0e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fb0eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FB10:
    /* 0001fb10   4  move.b (6,A2),D0 */
    c->pc = RC_ADDR(0x0001fb10u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[2] + 0x6u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FB14:
    /* 0001fb14   4  move.b (0,A3,D0.w),D1 */
    c->pc = RC_ADDR(0x0001fb14u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[3] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FB18:
    /* 0001fb18   2  ext.w D1 */
    c->pc = RC_ADDR(0x0001fb18u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_1FB1A:
    /* 0001fb1a   4  move.w D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001fb1au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FB1E:
    /* 0001fb1e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fb1eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FB20:
    /* 0001fb20   4  move.b (6,A2),D0 */
    c->pc = RC_ADDR(0x0001fb20u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[2] + 0x6u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FB24:
    /* 0001fb24   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x0001fb24u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FB26:
    /* 0001fb26   2  bra 0001fb34 */
    c->pc = RC_ADDR(0x0001fb26u);
    rc_step(c, m, 10);
    goto L_1FB34;

L_1FB28:
    /* 0001fb28   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0001fb28u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FB2A:
    /* 0001fb2a   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0001fb2au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1FB2C:
    /* 0001fb2c   6  move.b (0,A3,D0.w),(0,A3,D4.w) */
    c->pc = RC_ADDR(0x0001fb2cu);
    rc_step(c, m, 24);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[3] + 0x0u + t4));
    t4 = rc_ext(c->d[4], RC_W);
    rc_wr8(c, m, (c->a[3] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FB32:
    /* 0001fb32   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x0001fb32u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1FB34:
    /* 0001fb34   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fb34u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FB36:
    /* 0001fb36   4  move.b (7,A2),D0 */
    c->pc = RC_ADDR(0x0001fb36u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[2] + 0x7u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FB3A:
    /* 0001fb3a   2  cmp.w D0,D4 */
    c->pc = RC_ADDR(0x0001fb3au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1FB3C:
    /* 0001fb3c   2  bcs 0001fb28 */
    c->pc = RC_ADDR(0x0001fb3cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1FB28; }

L_1FB3E:
    /* 0001fb3e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fb3eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FB40:
    /* 0001fb40   4  move.b (7,A2),D0 */
    c->pc = RC_ADDR(0x0001fb40u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[2] + 0x7u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FB44:
    /* 0001fb44   6  move.b (fffffffd,A5),(0,A3,D0.w) */
    c->pc = RC_ADDR(0x0001fb44u);
    rc_step(c, m, 22);
    t0 = rc_rd8(c, m, (c->a[5] - 0x3u));
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[3] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FB4A:
    /* 0001fb4a   2  bra 0001fb88 */
    c->pc = RC_ADDR(0x0001fb4au);
    rc_step(c, m, 10);
    goto L_1FB88;

L_1FB4C:
    /* 0001fb4c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fb4cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FB4E:
    /* 0001fb4e   4  move.b (7,A2),D0 */
    c->pc = RC_ADDR(0x0001fb4eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[2] + 0x7u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FB52:
    /* 0001fb52   4  move.b (0,A3,D0.w),D1 */
    c->pc = RC_ADDR(0x0001fb52u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[3] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FB56:
    /* 0001fb56   2  ext.w D1 */
    c->pc = RC_ADDR(0x0001fb56u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_1FB58:
    /* 0001fb58   4  move.w D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001fb58u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FB5C:
    /* 0001fb5c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fb5cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FB5E:
    /* 0001fb5e   4  move.b (7,A2),D0 */
    c->pc = RC_ADDR(0x0001fb5eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[2] + 0x7u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FB62:
    /* 0001fb62   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x0001fb62u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FB64:
    /* 0001fb64   2  bra 0001fb72 */
    c->pc = RC_ADDR(0x0001fb64u);
    rc_step(c, m, 10);
    goto L_1FB72;

L_1FB66:
    /* 0001fb66   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x0001fb66u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FB68:
    /* 0001fb68   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0001fb68u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1FB6A:
    /* 0001fb6a   6  move.b (0,A3,D0.w),(0,A3,D4.w) */
    c->pc = RC_ADDR(0x0001fb6au);
    rc_step(c, m, 24);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[3] + 0x0u + t4));
    t4 = rc_ext(c->d[4], RC_W);
    rc_wr8(c, m, (c->a[3] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FB70:
    /* 0001fb70   2  subq.w #1,D4 */
    c->pc = RC_ADDR(0x0001fb70u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1FB72:
    /* 0001fb72   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fb72u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FB74:
    /* 0001fb74   4  move.b (6,A2),D0 */
    c->pc = RC_ADDR(0x0001fb74u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[2] + 0x6u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FB78:
    /* 0001fb78   2  cmp.w D0,D4 */
    c->pc = RC_ADDR(0x0001fb78u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1FB7A:
    /* 0001fb7a   2  bhi 0001fb66 */
    c->pc = RC_ADDR(0x0001fb7au);
    rc_step(c, m, 10);
    if (rc_cond(c, 2)) { rc_tick(); goto L_1FB66; }

L_1FB7C:
    /* 0001fb7c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fb7cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FB7E:
    /* 0001fb7e   4  move.b (6,A2),D0 */
    c->pc = RC_ADDR(0x0001fb7eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[2] + 0x6u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FB82:
    /* 0001fb82   6  move.b (fffffffd,A5),(0,A3,D0.w) */
    c->pc = RC_ADDR(0x0001fb82u);
    rc_step(c, m, 22);
    t0 = rc_rd8(c, m, (c->a[5] - 0x3u));
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[3] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FB88:
    /* 0001fb88   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001fb88u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1FB8C:
    /* 0001fb8c   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001fb8cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_1FB92:
    /* 0001fb92   4  blt 0001face */
    c->pc = RC_ADDR(0x0001fb92u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1FACE; }

L_1FB96:
    /* 0001fb96   4  lea (32fa,A4),A0 */
    c->pc = RC_ADDR(0x0001fb96u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x32fau);

L_1FB9A:
    /* 0001fb9a   4  lea (7f6,A4),A1 */
    c->pc = RC_ADDR(0x0001fb9au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x7f6u);

L_1FB9E:
    /* 0001fb9e   4  lea (32b0,A4),A6 */
    c->pc = RC_ADDR(0x0001fb9eu);
    rc_step(c, m, 8);
    c->a[6] = (c->a[4] + 0x32b0u);

L_1FBA2:
    /* 0001fba2   2  clr.w D0 */
    c->pc = RC_ADDR(0x0001fba2u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1FBA4:
    /* 0001fba4   4  move.w #1f,D3 */
    c->pc = RC_ADDR(0x0001fba4u);
    rc_step(c, m, 8);
    t0 = 0x0000001fu;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FBA8:
    /* 0001fba8   2  move.b (A0)+,D0 */
    c->pc = RC_ADDR(0x0001fba8u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FBAA:
    /* 0001fbaa   4  move.w (0,A1,D0.w),(A6)+ */
    c->pc = RC_ADDR(0x0001fbaau);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t3 = c->a[6];
    c->a[6] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FBAE:
    /* 0001fbae   4  dbf D3,0001fba8 */
    c->pc = RC_ADDR(0x0001fbaeu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 3, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 3, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1FBA8; }
    }

L_1FBB2:
    /* 0001fbb2   4  movem.l (SP)+,{ D4 A2 A3 } */
    c->pc = RC_ADDR(0x0001fbb2u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1FBB6:
    /* 0001fbb6   2  unlk A5 */
    c->pc = RC_ADDR(0x0001fbb6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FBB8:
    /* 0001fbb8   2  rts */
    c->pc = RC_ADDR(0x0001fbb8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
