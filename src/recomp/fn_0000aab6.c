/* fn_0000aab6 - 378 byte(s), 115 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000aab6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000aab6u): goto L_AAB6;
    case RC_ADDR(0x0000aabau): goto L_AABA;
    case RC_ADDR(0x0000aabcu): goto L_AABC;
    case RC_ADDR(0x0000aabeu): goto L_AABE;
    case RC_ADDR(0x0000aac2u): goto L_AAC2;
    case RC_ADDR(0x0000aac4u): goto L_AAC4;
    case RC_ADDR(0x0000aac6u): goto L_AAC6;
    case RC_ADDR(0x0000aacau): goto L_AACA;
    case RC_ADDR(0x0000aaceu): goto L_AACE;
    case RC_ADDR(0x0000aad2u): goto L_AAD2;
    case RC_ADDR(0x0000aad6u): goto L_AAD6;
    case RC_ADDR(0x0000aadau): goto L_AADA;
    case RC_ADDR(0x0000aadeu): goto L_AADE;
    case RC_ADDR(0x0000aae2u): goto L_AAE2;
    case RC_ADDR(0x0000aae4u): goto L_AAE4;
    case RC_ADDR(0x0000aae8u): goto L_AAE8;
    case RC_ADDR(0x0000aaecu): goto L_AAEC;
    case RC_ADDR(0x0000aaeeu): goto L_AAEE;
    case RC_ADDR(0x0000aaf0u): goto L_AAF0;
    case RC_ADDR(0x0000aaf4u): goto L_AAF4;
    case RC_ADDR(0x0000aaf8u): goto L_AAF8;
    case RC_ADDR(0x0000aafcu): goto L_AAFC;
    case RC_ADDR(0x0000aafeu): goto L_AAFE;
    case RC_ADDR(0x0000ab02u): goto L_AB02;
    case RC_ADDR(0x0000ab04u): goto L_AB04;
    case RC_ADDR(0x0000ab06u): goto L_AB06;
    case RC_ADDR(0x0000ab0cu): goto L_AB0C;
    case RC_ADDR(0x0000ab0eu): goto L_AB0E;
    case RC_ADDR(0x0000ab14u): goto L_AB14;
    case RC_ADDR(0x0000ab16u): goto L_AB16;
    case RC_ADDR(0x0000ab18u): goto L_AB18;
    case RC_ADDR(0x0000ab1cu): goto L_AB1C;
    case RC_ADDR(0x0000ab1eu): goto L_AB1E;
    case RC_ADDR(0x0000ab20u): goto L_AB20;
    case RC_ADDR(0x0000ab24u): goto L_AB24;
    case RC_ADDR(0x0000ab28u): goto L_AB28;
    case RC_ADDR(0x0000ab2cu): goto L_AB2C;
    case RC_ADDR(0x0000ab30u): goto L_AB30;
    case RC_ADDR(0x0000ab32u): goto L_AB32;
    case RC_ADDR(0x0000ab36u): goto L_AB36;
    case RC_ADDR(0x0000ab3au): goto L_AB3A;
    case RC_ADDR(0x0000ab3eu): goto L_AB3E;
    case RC_ADDR(0x0000ab42u): goto L_AB42;
    case RC_ADDR(0x0000ab44u): goto L_AB44;
    case RC_ADDR(0x0000ab48u): goto L_AB48;
    case RC_ADDR(0x0000ab4cu): goto L_AB4C;
    case RC_ADDR(0x0000ab50u): goto L_AB50;
    case RC_ADDR(0x0000ab54u): goto L_AB54;
    case RC_ADDR(0x0000ab56u): goto L_AB56;
    case RC_ADDR(0x0000ab5au): goto L_AB5A;
    case RC_ADDR(0x0000ab5cu): goto L_AB5C;
    case RC_ADDR(0x0000ab60u): goto L_AB60;
    case RC_ADDR(0x0000ab62u): goto L_AB62;
    case RC_ADDR(0x0000ab68u): goto L_AB68;
    case RC_ADDR(0x0000ab6eu): goto L_AB6E;
    case RC_ADDR(0x0000ab70u): goto L_AB70;
    case RC_ADDR(0x0000ab72u): goto L_AB72;
    case RC_ADDR(0x0000ab78u): goto L_AB78;
    case RC_ADDR(0x0000ab7au): goto L_AB7A;
    case RC_ADDR(0x0000ab7cu): goto L_AB7C;
    case RC_ADDR(0x0000ab82u): goto L_AB82;
    case RC_ADDR(0x0000ab84u): goto L_AB84;
    case RC_ADDR(0x0000ab86u): goto L_AB86;
    case RC_ADDR(0x0000ab8cu): goto L_AB8C;
    case RC_ADDR(0x0000ab8eu): goto L_AB8E;
    case RC_ADDR(0x0000ab90u): goto L_AB90;
    case RC_ADDR(0x0000ab92u): goto L_AB92;
    case RC_ADDR(0x0000ab98u): goto L_AB98;
    case RC_ADDR(0x0000ab9au): goto L_AB9A;
    case RC_ADDR(0x0000ab9cu): goto L_AB9C;
    case RC_ADDR(0x0000aba2u): goto L_ABA2;
    case RC_ADDR(0x0000aba4u): goto L_ABA4;
    case RC_ADDR(0x0000aba6u): goto L_ABA6;
    case RC_ADDR(0x0000abacu): goto L_ABAC;
    case RC_ADDR(0x0000abaeu): goto L_ABAE;
    case RC_ADDR(0x0000abb0u): goto L_ABB0;
    case RC_ADDR(0x0000abb6u): goto L_ABB6;
    case RC_ADDR(0x0000abb8u): goto L_ABB8;
    case RC_ADDR(0x0000abbau): goto L_ABBA;
    case RC_ADDR(0x0000abbeu): goto L_ABBE;
    case RC_ADDR(0x0000abc0u): goto L_ABC0;
    case RC_ADDR(0x0000abc6u): goto L_ABC6;
    case RC_ADDR(0x0000abc8u): goto L_ABC8;
    case RC_ADDR(0x0000abcau): goto L_ABCA;
    case RC_ADDR(0x0000abceu): goto L_ABCE;
    case RC_ADDR(0x0000abd0u): goto L_ABD0;
    case RC_ADDR(0x0000abd2u): goto L_ABD2;
    case RC_ADDR(0x0000abd6u): goto L_ABD6;
    case RC_ADDR(0x0000abdau): goto L_ABDA;
    case RC_ADDR(0x0000abdeu): goto L_ABDE;
    case RC_ADDR(0x0000abe2u): goto L_ABE2;
    case RC_ADDR(0x0000abe4u): goto L_ABE4;
    case RC_ADDR(0x0000abe8u): goto L_ABE8;
    case RC_ADDR(0x0000abecu): goto L_ABEC;
    case RC_ADDR(0x0000abf0u): goto L_ABF0;
    case RC_ADDR(0x0000abf2u): goto L_ABF2;
    case RC_ADDR(0x0000abf4u): goto L_ABF4;
    case RC_ADDR(0x0000abf8u): goto L_ABF8;
    case RC_ADDR(0x0000abfcu): goto L_ABFC;
    case RC_ADDR(0x0000ac00u): goto L_AC00;
    case RC_ADDR(0x0000ac02u): goto L_AC02;
    case RC_ADDR(0x0000ac04u): goto L_AC04;
    case RC_ADDR(0x0000ac08u): goto L_AC08;
    case RC_ADDR(0x0000ac0cu): goto L_AC0C;
    case RC_ADDR(0x0000ac0eu): goto L_AC0E;
    case RC_ADDR(0x0000ac12u): goto L_AC12;
    case RC_ADDR(0x0000ac14u): goto L_AC14;
    case RC_ADDR(0x0000ac16u): goto L_AC16;
    case RC_ADDR(0x0000ac1au): goto L_AC1A;
    case RC_ADDR(0x0000ac1eu): goto L_AC1E;
    case RC_ADDR(0x0000ac22u): goto L_AC22;
    case RC_ADDR(0x0000ac26u): goto L_AC26;
    case RC_ADDR(0x0000ac2au): goto L_AC2A;
    case RC_ADDR(0x0000ac2cu): goto L_AC2C;
    case RC_ADDR(0x0000ac2eu): goto L_AC2E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_AAB6:
    /* 0000aab6   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000aab6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_AABA:
    /* 0000aaba   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x0000aabau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AABC:
    /* 0000aabc   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000aabcu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AABE:
    /* 0000aabe   4  move.w (3ce,A4),D0 */
    c->pc = RC_ADDR(0x0000aabeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AAC2:
    /* 0000aac2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000aac2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AAC4:
    /* 0000aac4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000aac4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_AAC6:
    /* 0000aac6   4  lea (30a,A4),A0 */
    c->pc = RC_ADDR(0x0000aac6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x30au);

L_AACA:
    /* 0000aaca   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000aacau);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AACE:
    /* 0000aace   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0000aaceu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_AAD2:
    /* 0000aad2   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000aad2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AAD6:
    /* 0000aad6   4  jsr (ffff822a,A4) */
    c->pc = RC_ADDR(0x0000aad6u);
    rc_step(c, m, 18);
    /* vector 92 */
    rc_push32(c, m, RC_ADDR(0x0000aadau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001dd6eu);
    return;

L_AADA:
    /* 0000aada   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000aadau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_AADE:
    /* 0000aade   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000aadeu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_AAE2:
    /* 0000aae2   2  beq 0000ab54 */
    c->pc = RC_ADDR(0x0000aae2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_AB54;

L_AAE4:
    /* 0000aae4   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0000aae4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_AAE8:
    /* 0000aae8   4  move.w (3ce,A4),D0 */
    c->pc = RC_ADDR(0x0000aae8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AAEC:
    /* 0000aaec   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000aaecu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AAEE:
    /* 0000aaee   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000aaeeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_AAF0:
    /* 0000aaf0   4  lea (30a,A4),A1 */
    c->pc = RC_ADDR(0x0000aaf0u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x30au);

L_AAF4:
    /* 0000aaf4   4  movea.l (0,A1,D0.w),A6 */
    c->pc = RC_ADDR(0x0000aaf4u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    c->a[6] = t0;

L_AAF8:
    /* 0000aaf8   4  move.w (c,A6),D0 */
    c->pc = RC_ADDR(0x0000aaf8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AAFC:
    /* 0000aafc   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000aafcu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_AAFE:
    /* 0000aafe   4  move.w (2a,A0),D1 */
    c->pc = RC_ADDR(0x0000aafeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB02:
    /* 0000ab02   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0000ab02u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_AB04:
    /* 0000ab04   2  blt 0000ab54 */
    c->pc = RC_ADDR(0x0000ab04u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_AB54;

L_AB06:
    /* 0000ab06   6  cmpi.w #8,(3ce,A4) */
    c->pc = RC_ADDR(0x0000ab06u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_AB0C:
    /* 0000ab0c   2  bne 0000ab16 */
    c->pc = RC_ADDR(0x0000ab0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AB16;

L_AB0E:
    /* 0000ab0e   6  move.w #1,(ffff96a0,A4) */
    c->pc = RC_ADDR(0x0000ab0eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x6960u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB14:
    /* 0000ab14   2  bra 0000ab54 */
    c->pc = RC_ADDR(0x0000ab14u);
    rc_step(c, m, 10);
    goto L_AB54;

L_AB16:
    /* 0000ab16   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000ab16u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AB18:
    /* 0000ab18   4  move.w (3ce,A4),D0 */
    c->pc = RC_ADDR(0x0000ab18u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB1C:
    /* 0000ab1c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ab1cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AB1E:
    /* 0000ab1e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000ab1eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_AB20:
    /* 0000ab20   4  lea (30a,A4),A0 */
    c->pc = RC_ADDR(0x0000ab20u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x30au);

L_AB24:
    /* 0000ab24   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000ab24u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AB28:
    /* 0000ab28   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000ab28u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB2C:
    /* 0000ab2c   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0000ab2cu);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000ab30u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_AB30:
    /* 0000ab30   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000ab30u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_AB32:
    /* 0000ab32   4  clr.w (3ce,A4) */
    c->pc = RC_ADDR(0x0000ab32u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x3ceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AB36:
    /* 0000ab36   4  move.w #14,-(A7) */
    c->pc = RC_ADDR(0x0000ab36u);
    rc_step(c, m, 12);
    t0 = 0x00000014u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB3A:
    /* 0000ab3a   4  move.w (ffff9462,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ab3au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6b9eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB3E:
    /* 0000ab3e   4  move.w (ffff9460,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ab3eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6ba0u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB42:
    /* 0000ab42   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000ab42u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AB44:
    /* 0000ab44   4  move.l (30a,A4),-(A7) */
    c->pc = RC_ADDR(0x0000ab44u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x30au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AB48:
    /* 0000ab48   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000ab48u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB4C:
    /* 0000ab4c   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x0000ab4cu);
    rc_step(c, m, 18);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x0000ab50u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f914u);
    return;

L_AB50:
    /* 0000ab50   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000ab50u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_AB54:
    /* 0000ab54   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000ab54u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_AB56:
    /* 0000ab56   4  tst.w (ffffb02e,A4) */
    c->pc = RC_ADDR(0x0000ab56u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_AB5A:
    /* 0000ab5a   2  beq 0000ab92 */
    c->pc = RC_ADDR(0x0000ab5au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_AB92;

L_AB5C:
    /* 0000ab5c   4  tst.w (3d6,A4) */
    c->pc = RC_ADDR(0x0000ab5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d6u));
    rc_set_nzvc(c, t0, RC_W);

L_AB60:
    /* 0000ab60   2  beq 0000ab68 */
    c->pc = RC_ADDR(0x0000ab60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_AB68;

L_AB62:
    /* 0000ab62   6  move.w #1,(3d6,A4) */
    c->pc = RC_ADDR(0x0000ab62u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x3d6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AB68:
    /* 0000ab68   6  cmpi.w #1,(ffffb02a,A4) */
    c->pc = RC_ADDR(0x0000ab68u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_AB6E:
    /* 0000ab6e   2  bne 0000ab72 */
    c->pc = RC_ADDR(0x0000ab6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AB72;

L_AB70:
    /* 0000ab70   2  moveq #5,D4 */
    c->pc = RC_ADDR(0x0000ab70u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000005u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_AB72:
    /* 0000ab72   6  cmpi.w #ffff,(ffffb02a,A4) */
    c->pc = RC_ADDR(0x0000ab72u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_AB78:
    /* 0000ab78   2  bne 0000ab7c */
    c->pc = RC_ADDR(0x0000ab78u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AB7C;

L_AB7A:
    /* 0000ab7a   2  moveq #6,D4 */
    c->pc = RC_ADDR(0x0000ab7au);
    rc_step(c, m, 4);
    c->d[4] = 0x00000006u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_AB7C:
    /* 0000ab7c   6  cmpi.w #1,(ffffb02c,A4) */
    c->pc = RC_ADDR(0x0000ab7cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_AB82:
    /* 0000ab82   2  bne 0000ab86 */
    c->pc = RC_ADDR(0x0000ab82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AB86;

L_AB84:
    /* 0000ab84   2  moveq #2,D4 */
    c->pc = RC_ADDR(0x0000ab84u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000002u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_AB86:
    /* 0000ab86   6  cmpi.w #ffff,(ffffb02c,A4) */
    c->pc = RC_ADDR(0x0000ab86u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_AB8C:
    /* 0000ab8c   2  bne 0000ab90 */
    c->pc = RC_ADDR(0x0000ab8cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AB90;

L_AB8E:
    /* 0000ab8e   2  moveq #4,D4 */
    c->pc = RC_ADDR(0x0000ab8eu);
    rc_step(c, m, 4);
    c->d[4] = 0x00000004u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_AB90:
    /* 0000ab90   2  bra 0000abba */
    c->pc = RC_ADDR(0x0000ab90u);
    rc_step(c, m, 10);
    goto L_ABBA;

L_AB92:
    /* 0000ab92   6  cmpi.w #1,(ffffb02a,A4) */
    c->pc = RC_ADDR(0x0000ab92u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_AB98:
    /* 0000ab98   2  bne 0000ab9c */
    c->pc = RC_ADDR(0x0000ab98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AB9C;

L_AB9A:
    /* 0000ab9a   2  moveq #1,D4 */
    c->pc = RC_ADDR(0x0000ab9au);
    rc_step(c, m, 4);
    c->d[4] = 0x00000001u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_AB9C:
    /* 0000ab9c   6  cmpi.w #ffff,(ffffb02a,A4) */
    c->pc = RC_ADDR(0x0000ab9cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_ABA2:
    /* 0000aba2   2  bne 0000aba6 */
    c->pc = RC_ADDR(0x0000aba2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_ABA6;

L_ABA4:
    /* 0000aba4   2  moveq #3,D4 */
    c->pc = RC_ADDR(0x0000aba4u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000003u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_ABA6:
    /* 0000aba6   6  cmpi.w #1,(ffffb02c,A4) */
    c->pc = RC_ADDR(0x0000aba6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_ABAC:
    /* 0000abac   2  bne 0000abb0 */
    c->pc = RC_ADDR(0x0000abacu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_ABB0;

L_ABAE:
    /* 0000abae   2  moveq #2,D4 */
    c->pc = RC_ADDR(0x0000abaeu);
    rc_step(c, m, 4);
    c->d[4] = 0x00000002u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_ABB0:
    /* 0000abb0   6  cmpi.w #ffff,(ffffb02c,A4) */
    c->pc = RC_ADDR(0x0000abb0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_ABB6:
    /* 0000abb6   2  bne 0000abba */
    c->pc = RC_ADDR(0x0000abb6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_ABBA;

L_ABB8:
    /* 0000abb8   2  moveq #4,D4 */
    c->pc = RC_ADDR(0x0000abb8u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000004u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_ABBA:
    /* 0000abba   4  cmp.w (3ce,A4),D4 */
    c->pc = RC_ADDR(0x0000abbau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_ABBE:
    /* 0000abbe   2  beq 0000ac2a */
    c->pc = RC_ADDR(0x0000abbeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_AC2A;

L_ABC0:
    /* 0000abc0   6  cmpi.w #7,(3ce,A4) */
    c->pc = RC_ADDR(0x0000abc0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_ABC6:
    /* 0000abc6   2  bge 0000ac2a */
    c->pc = RC_ADDR(0x0000abc6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_AC2A;

L_ABC8:
    /* 0000abc8   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000abc8u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_ABCA:
    /* 0000abca   4  move.w (3ce,A4),D0 */
    c->pc = RC_ADDR(0x0000abcau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ABCE:
    /* 0000abce   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000abceu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_ABD0:
    /* 0000abd0   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000abd0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_ABD2:
    /* 0000abd2   4  lea (30a,A4),A0 */
    c->pc = RC_ADDR(0x0000abd2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x30au);

L_ABD6:
    /* 0000abd6   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000abd6u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ABDA:
    /* 0000abda   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000abdau);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ABDE:
    /* 0000abde   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0000abdeu);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000abe2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_ABE2:
    /* 0000abe2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000abe2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_ABE4:
    /* 0000abe4   4  move.w D4,(3ce,A4) */
    c->pc = RC_ADDR(0x0000abe4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x3ceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_ABE8:
    /* 0000abe8   4  move.w #14,-(A7) */
    c->pc = RC_ADDR(0x0000abe8u);
    rc_step(c, m, 12);
    t0 = 0x00000014u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ABEC:
    /* 0000abec   4  move.w (3ce,A4),D0 */
    c->pc = RC_ADDR(0x0000abecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ABF0:
    /* 0000abf0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000abf0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_ABF2:
    /* 0000abf2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000abf2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_ABF4:
    /* 0000abf4   4  lea (ffff9462,A4),A0 */
    c->pc = RC_ADDR(0x0000abf4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6b9eu);

L_ABF8:
    /* 0000abf8   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000abf8u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ABFC:
    /* 0000abfc   4  move.w (3ce,A4),D0 */
    c->pc = RC_ADDR(0x0000abfcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AC00:
    /* 0000ac00   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ac00u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AC02:
    /* 0000ac02   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000ac02u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_AC04:
    /* 0000ac04   4  lea (ffff9460,A4),A0 */
    c->pc = RC_ADDR(0x0000ac04u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6ba0u);

L_AC08:
    /* 0000ac08   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000ac08u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AC0C:
    /* 0000ac0c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000ac0cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AC0E:
    /* 0000ac0e   4  move.w (3ce,A4),D0 */
    c->pc = RC_ADDR(0x0000ac0eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AC12:
    /* 0000ac12   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ac12u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AC14:
    /* 0000ac14   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000ac14u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_AC16:
    /* 0000ac16   4  lea (30a,A4),A0 */
    c->pc = RC_ADDR(0x0000ac16u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x30au);

L_AC1A:
    /* 0000ac1a   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000ac1au);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AC1E:
    /* 0000ac1e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000ac1eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AC22:
    /* 0000ac22   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x0000ac22u);
    rc_step(c, m, 18);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x0000ac26u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f914u);
    return;

L_AC26:
    /* 0000ac26   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000ac26u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_AC2A:
    /* 0000ac2a   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x0000ac2au);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_AC2C:
    /* 0000ac2c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000ac2cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_AC2E:
    /* 0000ac2e   2  rts */
    c->pc = RC_ADDR(0x0000ac2eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
