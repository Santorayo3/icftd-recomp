/* fn_0001bf98 - 196 byte(s), 57 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001bf98(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001bf98u): goto L_1BF98;
    case RC_ADDR(0x0001bf9cu): goto L_1BF9C;
    case RC_ADDR(0x0001bfa0u): goto L_1BFA0;
    case RC_ADDR(0x0001bfa4u): goto L_1BFA4;
    case RC_ADDR(0x0001bfa8u): goto L_1BFA8;
    case RC_ADDR(0x0001bfacu): goto L_1BFAC;
    case RC_ADDR(0x0001bfb0u): goto L_1BFB0;
    case RC_ADDR(0x0001bfb4u): goto L_1BFB4;
    case RC_ADDR(0x0001bfb8u): goto L_1BFB8;
    case RC_ADDR(0x0001bfbau): goto L_1BFBA;
    case RC_ADDR(0x0001bfbeu): goto L_1BFBE;
    case RC_ADDR(0x0001bfc0u): goto L_1BFC0;
    case RC_ADDR(0x0001bfc2u): goto L_1BFC2;
    case RC_ADDR(0x0001bfc6u): goto L_1BFC6;
    case RC_ADDR(0x0001bfcau): goto L_1BFCA;
    case RC_ADDR(0x0001bfceu): goto L_1BFCE;
    case RC_ADDR(0x0001bfd0u): goto L_1BFD0;
    case RC_ADDR(0x0001bfd2u): goto L_1BFD2;
    case RC_ADDR(0x0001bfd4u): goto L_1BFD4;
    case RC_ADDR(0x0001bfd6u): goto L_1BFD6;
    case RC_ADDR(0x0001bfdau): goto L_1BFDA;
    case RC_ADDR(0x0001bfdeu): goto L_1BFDE;
    case RC_ADDR(0x0001bfe0u): goto L_1BFE0;
    case RC_ADDR(0x0001bfe4u): goto L_1BFE4;
    case RC_ADDR(0x0001bfe6u): goto L_1BFE6;
    case RC_ADDR(0x0001bfe8u): goto L_1BFE8;
    case RC_ADDR(0x0001bfecu): goto L_1BFEC;
    case RC_ADDR(0x0001bfeeu): goto L_1BFEE;
    case RC_ADDR(0x0001bff0u): goto L_1BFF0;
    case RC_ADDR(0x0001bff2u): goto L_1BFF2;
    case RC_ADDR(0x0001bff4u): goto L_1BFF4;
    case RC_ADDR(0x0001bff6u): goto L_1BFF6;
    case RC_ADDR(0x0001bffau): goto L_1BFFA;
    case RC_ADDR(0x0001bffeu): goto L_1BFFE;
    case RC_ADDR(0x0001c002u): goto L_1C002;
    case RC_ADDR(0x0001c004u): goto L_1C004;
    case RC_ADDR(0x0001c006u): goto L_1C006;
    case RC_ADDR(0x0001c00au): goto L_1C00A;
    case RC_ADDR(0x0001c00eu): goto L_1C00E;
    case RC_ADDR(0x0001c012u): goto L_1C012;
    case RC_ADDR(0x0001c014u): goto L_1C014;
    case RC_ADDR(0x0001c01au): goto L_1C01A;
    case RC_ADDR(0x0001c01cu): goto L_1C01C;
    case RC_ADDR(0x0001c022u): goto L_1C022;
    case RC_ADDR(0x0001c024u): goto L_1C024;
    case RC_ADDR(0x0001c02au): goto L_1C02A;
    case RC_ADDR(0x0001c030u): goto L_1C030;
    case RC_ADDR(0x0001c032u): goto L_1C032;
    case RC_ADDR(0x0001c038u): goto L_1C038;
    case RC_ADDR(0x0001c03eu): goto L_1C03E;
    case RC_ADDR(0x0001c040u): goto L_1C040;
    case RC_ADDR(0x0001c046u): goto L_1C046;
    case RC_ADDR(0x0001c04cu): goto L_1C04C;
    case RC_ADDR(0x0001c04eu): goto L_1C04E;
    case RC_ADDR(0x0001c054u): goto L_1C054;
    case RC_ADDR(0x0001c058u): goto L_1C058;
    case RC_ADDR(0x0001c05au): goto L_1C05A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BF98:
    /* 0001bf98   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001bf98u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1BF9C:
    /* 0001bf9c   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001bf9cu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1BFA0:
    /* 0001bfa0   4  move.w (8,A5),D5 */
    c->pc = RC_ADDR(0x0001bfa0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BFA4:
    /* 0001bfa4   4  sub.w (e6c,A4),D5 */
    c->pc = RC_ADDR(0x0001bfa4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_1BFA8:
    /* 0001bfa8   4  move.w (a,A5),D6 */
    c->pc = RC_ADDR(0x0001bfa8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BFAC:
    /* 0001bfac   4  sub.w (e6e,A4),D6 */
    c->pc = RC_ADDR(0x0001bfacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_1BFB0:
    /* 0001bfb0   4  clr.w (110a,A4) */
    c->pc = RC_ADDR(0x0001bfb0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x110au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BFB4:
    /* 0001bfb4   4  clr.w (1108,A4) */
    c->pc = RC_ADDR(0x0001bfb4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1108u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BFB8:
    /* 0001bfb8   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001bfb8u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1BFBA:
    /* 0001bfba   4  pea (ffff83ff).l */
    c->pc = RC_ADDR(0x0001bfbau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffff83ffu);

L_1BFBE:
    /* 0001bfbe   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001bfbeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BFC0:
    /* 0001bfc0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bfc0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BFC2:
    /* 0001bfc2   4  lea (ffffcea4,A4),A0 */
    c->pc = RC_ADDR(0x0001bfc2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x315cu);

L_1BFC6:
    /* 0001bfc6   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001bfc6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BFCA:
    /* 0001bfca   4  muls.w (c,A5),D1 */
    c->pc = RC_ADDR(0x0001bfcau);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_muls(c, 1, t0);

L_1BFCE:
    /* 0001bfce   2  add.w D6,D1 */
    c->pc = RC_ADDR(0x0001bfceu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BFD0:
    /* 0001bfd0   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001bfd0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BFD2:
    /* 0001bfd2   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001bfd2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BFD4:
    /* 0001bfd4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bfd4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BFD6:
    /* 0001bfd6   4  lea (ffffce94,A4),A0 */
    c->pc = RC_ADDR(0x0001bfd6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x316cu);

L_1BFDA:
    /* 0001bfda   4  move.w (c,A5),D1 */
    c->pc = RC_ADDR(0x0001bfdau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BFDE:
    /* 0001bfde   2  addq.w #1,D1 */
    c->pc = RC_ADDR(0x0001bfdeu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BFE0:
    /* 0001bfe0   4  muls.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001bfe0u);
    rc_step(c, m, 48);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_muls(c, 1, t0);

L_1BFE4:
    /* 0001bfe4   2  add.w D5,D1 */
    c->pc = RC_ADDR(0x0001bfe4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BFE6:
    /* 0001bfe6   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001bfe6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BFE8:
    /* 0001bfe8   4  jsr (0001c2a2) */
    c->pc = RC_ADDR(0x0001bfe8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001bfecu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c2a2u);
    return;

L_1BFEC:
    /* 0001bfec   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001bfecu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BFEE:
    /* 0001bfee   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001bfeeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1BFF0:
    /* 0001bff0   2  beq 0001c012 */
    c->pc = RC_ADDR(0x0001bff0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1C012;

L_1BFF2:
    /* 0001bff2   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001bff2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BFF4:
    /* 0001bff4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bff4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BFF6:
    /* 0001bff6   4  lea (ffffceb4,A4),A0 */
    c->pc = RC_ADDR(0x0001bff6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x314cu);

L_1BFFA:
    /* 0001bffa   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001bffau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BFFE:
    /* 0001bffe   4  add.w D1,(1108,A4) */
    c->pc = RC_ADDR(0x0001bffeu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1108u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C002:
    /* 0001c002   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0001c002u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C004:
    /* 0001c004   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001c004u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1C006:
    /* 0001c006   4  lea (ffffcec4,A4),A0 */
    c->pc = RC_ADDR(0x0001c006u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x313cu);

L_1C00A:
    /* 0001c00a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001c00au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C00E:
    /* 0001c00e   4  add.w D1,(110a,A4) */
    c->pc = RC_ADDR(0x0001c00eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x110au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C012:
    /* 0001c012   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001c012u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1C014:
    /* 0001c014   6  cmp.l #8,D4 */
    c->pc = RC_ADDR(0x0001c014u);
    rc_step(c, m, 14);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1C01A:
    /* 0001c01a   2  blt 0001bfba */
    c->pc = RC_ADDR(0x0001c01au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1BFBA; }

L_1C01C:
    /* 0001c01c   6  cmpi.w #ffff,(1108,A4) */
    c->pc = RC_ADDR(0x0001c01cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1C022:
    /* 0001c022   2  bge 0001c02a */
    c->pc = RC_ADDR(0x0001c022u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1C02A;

L_1C024:
    /* 0001c024   6  move.w #ffff,(1108,A4) */
    c->pc = RC_ADDR(0x0001c024u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1108u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C02A:
    /* 0001c02a   6  cmpi.w #1,(1108,A4) */
    c->pc = RC_ADDR(0x0001c02au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1C030:
    /* 0001c030   2  ble 0001c038 */
    c->pc = RC_ADDR(0x0001c030u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1C038;

L_1C032:
    /* 0001c032   6  move.w #1,(1108,A4) */
    c->pc = RC_ADDR(0x0001c032u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1108u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C038:
    /* 0001c038   6  cmpi.w #ffff,(110a,A4) */
    c->pc = RC_ADDR(0x0001c038u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1C03E:
    /* 0001c03e   2  bge 0001c046 */
    c->pc = RC_ADDR(0x0001c03eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1C046;

L_1C040:
    /* 0001c040   6  move.w #ffff,(110a,A4) */
    c->pc = RC_ADDR(0x0001c040u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x110au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C046:
    /* 0001c046   6  cmpi.w #1,(110a,A4) */
    c->pc = RC_ADDR(0x0001c046u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1C04C:
    /* 0001c04c   2  ble 0001c054 */
    c->pc = RC_ADDR(0x0001c04cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1C054;

L_1C04E:
    /* 0001c04e   6  move.w #1,(110a,A4) */
    c->pc = RC_ADDR(0x0001c04eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x110au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C054:
    /* 0001c054   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = RC_ADDR(0x0001c054u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1C058:
    /* 0001c058   2  unlk A5 */
    c->pc = RC_ADDR(0x0001c058u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C05A:
    /* 0001c05a   2  rts */
    c->pc = RC_ADDR(0x0001c05au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
