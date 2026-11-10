/* fn_0001aaac - 274 byte(s), 96 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001aaac(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001aaacu): goto L_1AAAC;
    case RC_ADDR(0x0001aab0u): goto L_1AAB0;
    case RC_ADDR(0x0001aab4u): goto L_1AAB4;
    case RC_ADDR(0x0001aab6u): goto L_1AAB6;
    case RC_ADDR(0x0001aab8u): goto L_1AAB8;
    case RC_ADDR(0x0001aabcu): goto L_1AABC;
    case RC_ADDR(0x0001aac0u): goto L_1AAC0;
    case RC_ADDR(0x0001aac4u): goto L_1AAC4;
    case RC_ADDR(0x0001aac8u): goto L_1AAC8;
    case RC_ADDR(0x0001aacau): goto L_1AACA;
    case RC_ADDR(0x0001aaccu): goto L_1AACC;
    case RC_ADDR(0x0001aad0u): goto L_1AAD0;
    case RC_ADDR(0x0001aad2u): goto L_1AAD2;
    case RC_ADDR(0x0001aad6u): goto L_1AAD6;
    case RC_ADDR(0x0001aadcu): goto L_1AADC;
    case RC_ADDR(0x0001aadeu): goto L_1AADE;
    case RC_ADDR(0x0001aae0u): goto L_1AAE0;
    case RC_ADDR(0x0001aae4u): goto L_1AAE4;
    case RC_ADDR(0x0001aae6u): goto L_1AAE6;
    case RC_ADDR(0x0001aaeau): goto L_1AAEA;
    case RC_ADDR(0x0001aaf0u): goto L_1AAF0;
    case RC_ADDR(0x0001aaf2u): goto L_1AAF2;
    case RC_ADDR(0x0001aaf4u): goto L_1AAF4;
    case RC_ADDR(0x0001aafau): goto L_1AAFA;
    case RC_ADDR(0x0001aafcu): goto L_1AAFC;
    case RC_ADDR(0x0001aafeu): goto L_1AAFE;
    case RC_ADDR(0x0001ab02u): goto L_1AB02;
    case RC_ADDR(0x0001ab06u): goto L_1AB06;
    case RC_ADDR(0x0001ab08u): goto L_1AB08;
    case RC_ADDR(0x0001ab0au): goto L_1AB0A;
    case RC_ADDR(0x0001ab0cu): goto L_1AB0C;
    case RC_ADDR(0x0001ab0eu): goto L_1AB0E;
    case RC_ADDR(0x0001ab10u): goto L_1AB10;
    case RC_ADDR(0x0001ab14u): goto L_1AB14;
    case RC_ADDR(0x0001ab18u): goto L_1AB18;
    case RC_ADDR(0x0001ab1au): goto L_1AB1A;
    case RC_ADDR(0x0001ab1cu): goto L_1AB1C;
    case RC_ADDR(0x0001ab20u): goto L_1AB20;
    case RC_ADDR(0x0001ab22u): goto L_1AB22;
    case RC_ADDR(0x0001ab24u): goto L_1AB24;
    case RC_ADDR(0x0001ab26u): goto L_1AB26;
    case RC_ADDR(0x0001ab2au): goto L_1AB2A;
    case RC_ADDR(0x0001ab2cu): goto L_1AB2C;
    case RC_ADDR(0x0001ab30u): goto L_1AB30;
    case RC_ADDR(0x0001ab32u): goto L_1AB32;
    case RC_ADDR(0x0001ab34u): goto L_1AB34;
    case RC_ADDR(0x0001ab36u): goto L_1AB36;
    case RC_ADDR(0x0001ab38u): goto L_1AB38;
    case RC_ADDR(0x0001ab3au): goto L_1AB3A;
    case RC_ADDR(0x0001ab3cu): goto L_1AB3C;
    case RC_ADDR(0x0001ab42u): goto L_1AB42;
    case RC_ADDR(0x0001ab44u): goto L_1AB44;
    case RC_ADDR(0x0001ab46u): goto L_1AB46;
    case RC_ADDR(0x0001ab48u): goto L_1AB48;
    case RC_ADDR(0x0001ab4au): goto L_1AB4A;
    case RC_ADDR(0x0001ab4cu): goto L_1AB4C;
    case RC_ADDR(0x0001ab50u): goto L_1AB50;
    case RC_ADDR(0x0001ab54u): goto L_1AB54;
    case RC_ADDR(0x0001ab56u): goto L_1AB56;
    case RC_ADDR(0x0001ab58u): goto L_1AB58;
    case RC_ADDR(0x0001ab5au): goto L_1AB5A;
    case RC_ADDR(0x0001ab5cu): goto L_1AB5C;
    case RC_ADDR(0x0001ab60u): goto L_1AB60;
    case RC_ADDR(0x0001ab62u): goto L_1AB62;
    case RC_ADDR(0x0001ab64u): goto L_1AB64;
    case RC_ADDR(0x0001ab66u): goto L_1AB66;
    case RC_ADDR(0x0001ab68u): goto L_1AB68;
    case RC_ADDR(0x0001ab6cu): goto L_1AB6C;
    case RC_ADDR(0x0001ab70u): goto L_1AB70;
    case RC_ADDR(0x0001ab72u): goto L_1AB72;
    case RC_ADDR(0x0001ab74u): goto L_1AB74;
    case RC_ADDR(0x0001ab78u): goto L_1AB78;
    case RC_ADDR(0x0001ab7au): goto L_1AB7A;
    case RC_ADDR(0x0001ab7eu): goto L_1AB7E;
    case RC_ADDR(0x0001ab80u): goto L_1AB80;
    case RC_ADDR(0x0001ab82u): goto L_1AB82;
    case RC_ADDR(0x0001ab84u): goto L_1AB84;
    case RC_ADDR(0x0001ab86u): goto L_1AB86;
    case RC_ADDR(0x0001ab88u): goto L_1AB88;
    case RC_ADDR(0x0001ab8eu): goto L_1AB8E;
    case RC_ADDR(0x0001ab90u): goto L_1AB90;
    case RC_ADDR(0x0001ab92u): goto L_1AB92;
    case RC_ADDR(0x0001ab94u): goto L_1AB94;
    case RC_ADDR(0x0001ab98u): goto L_1AB98;
    case RC_ADDR(0x0001ab9cu): goto L_1AB9C;
    case RC_ADDR(0x0001ab9eu): goto L_1AB9E;
    case RC_ADDR(0x0001aba2u): goto L_1ABA2;
    case RC_ADDR(0x0001aba6u): goto L_1ABA6;
    case RC_ADDR(0x0001abaau): goto L_1ABAA;
    case RC_ADDR(0x0001abacu): goto L_1ABAC;
    case RC_ADDR(0x0001abaeu): goto L_1ABAE;
    case RC_ADDR(0x0001abb0u): goto L_1ABB0;
    case RC_ADDR(0x0001abb2u): goto L_1ABB2;
    case RC_ADDR(0x0001abb6u): goto L_1ABB6;
    case RC_ADDR(0x0001abbau): goto L_1ABBA;
    case RC_ADDR(0x0001abbcu): goto L_1ABBC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1AAAC:
    /* 0001aaac   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x0001aaacu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_1AAB0:
    /* 0001aab0   4  movem.l { A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001aab0u);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1AAB4:
    /* 0001aab4   2  moveq #1,D7 */
    c->pc = RC_ADDR(0x0001aab4u);
    rc_step(c, m);
    c->d[7] = 0x00000001u;
    rc_set_nzvc(c, c->d[7], RC_L);

L_1AAB6:
    /* 0001aab6   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x0001aab6u);
    rc_step(c, m);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1AAB8:
    /* 0001aab8   4  lea (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x0001aab8u);
    rc_step(c, m);
    c->a[0] = (c->a[5] - 0xau);

L_1AABC:
    /* 0001aabc   4  clr.b (0,A0,D5.w) */
    c->pc = RC_ADDR(0x0001aabcu);
    rc_step(c, m);
    t4 = c->d[5];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_1AAC0:
    /* 0001aac0   4  lea (fffffffb,A5),A0 */
    c->pc = RC_ADDR(0x0001aac0u);
    rc_step(c, m);
    c->a[0] = (c->a[5] - 0x5u);

L_1AAC4:
    /* 0001aac4   4  clr.b (0,A0,D5.w) */
    c->pc = RC_ADDR(0x0001aac4u);
    rc_step(c, m);
    t4 = c->d[5];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_1AAC8:
    /* 0001aac8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001aac8u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1AACA:
    /* 0001aaca   2  move.b D7,D0 */
    c->pc = RC_ADDR(0x0001aacau);
    rc_step(c, m);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1AACC:
    /* 0001aacc   4  and.w (c,A5),D0 */
    c->pc = RC_ADDR(0x0001aaccu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1AAD0:
    /* 0001aad0   2  beq 0001aadc */
    c->pc = RC_ADDR(0x0001aad0u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1AADC;

L_1AAD2:
    /* 0001aad2   4  lea (fffffffb,A5),A0 */
    c->pc = RC_ADDR(0x0001aad2u);
    rc_step(c, m);
    c->a[0] = (c->a[5] - 0x5u);

L_1AAD6:
    /* 0001aad6   6  move.b #ff,(0,A0,D5.w) */
    c->pc = RC_ADDR(0x0001aad6u);
    rc_step(c, m);
    t0 = 0x000000ffu;
    t4 = c->d[5];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1AADC:
    /* 0001aadc   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001aadcu);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1AADE:
    /* 0001aade   2  move.b D7,D0 */
    c->pc = RC_ADDR(0x0001aadeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1AAE0:
    /* 0001aae0   4  and.w (e,A5),D0 */
    c->pc = RC_ADDR(0x0001aae0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1AAE4:
    /* 0001aae4   2  beq 0001aaf0 */
    c->pc = RC_ADDR(0x0001aae4u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1AAF0;

L_1AAE6:
    /* 0001aae6   4  lea (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x0001aae6u);
    rc_step(c, m);
    c->a[0] = (c->a[5] - 0xau);

L_1AAEA:
    /* 0001aaea   6  move.b #ff,(0,A0,D5.w) */
    c->pc = RC_ADDR(0x0001aaeau);
    rc_step(c, m);
    t0 = 0x000000ffu;
    t4 = c->d[5];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1AAF0:
    /* 0001aaf0   2  asl.b #1,D7 */
    c->pc = RC_ADDR(0x0001aaf0u);
    rc_step(c, m);
    rc_d_set(c, 7, RC_B, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 7, RC_B), RC_B));

L_1AAF2:
    /* 0001aaf2   2  addq.l #1,D5 */
    c->pc = RC_ADDR(0x0001aaf2u);
    rc_step(c, m);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_1AAF4:
    /* 0001aaf4   6  cmp.l #5,D5 */
    c->pc = RC_ADDR(0x0001aaf4u);
    rc_step(c, m);
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1AAFA:
    /* 0001aafa   2  blt 0001aab8 */
    c->pc = RC_ADDR(0x0001aafau);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1AAB8; }

L_1AAFC:
    /* 0001aafc   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0001aafcu);
    rc_step(c, m);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_1AAFE:
    /* 0001aafe   4  bra 0001ab9e */
    c->pc = RC_ADDR(0x0001aafeu);
    rc_step(c, m);
    goto L_1AB9E;

L_1AB02:
    /* 0001ab02   4  move.b #80,D7 */
    c->pc = RC_ADDR(0x0001ab02u);
    rc_step(c, m);
    t0 = 0x00000080u;
    rc_d_set(c, 7, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1AB06:
    /* 0001ab06   2  moveq #0,D6 */
    c->pc = RC_ADDR(0x0001ab06u);
    rc_step(c, m);
    c->d[6] = 0x00000000u;
    rc_set_nzvc(c, c->d[6], RC_L);

L_1AB08:
    /* 0001ab08   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x0001ab08u);
    rc_step(c, m);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1AB0A:
    /* 0001ab0a   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0001ab0au);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AB0C:
    /* 0001ab0c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001ab0cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1AB0E:
    /* 0001ab0e   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001ab0eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1AB10:
    /* 0001ab10   4  adda.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001ab10u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_1AB14:
    /* 0001ab14   4  move.l (8,A0),D0 */
    c->pc = RC_ADDR(0x0001ab14u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AB18:
    /* 0001ab18   2  movea.l D4,A0 */
    c->pc = RC_ADDR(0x0001ab18u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_1AB1A:
    /* 0001ab1a   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001ab1au);
    rc_step(c, m);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1AB1C:
    /* 0001ab1c   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001ab1cu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1AB20:
    /* 0001ab20   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001ab20u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1AB22:
    /* 0001ab22   2  move.b D7,D0 */
    c->pc = RC_ADDR(0x0001ab22u);
    rc_step(c, m);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1AB24:
    /* 0001ab24   2  and.w D0,D1 */
    c->pc = RC_ADDR(0x0001ab24u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    t2 = t0 & rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_1AB26:
    /* 0001ab26   4  lea (fffffffb,A5),A0 */
    c->pc = RC_ADDR(0x0001ab26u);
    rc_step(c, m);
    c->a[0] = (c->a[5] - 0x5u);

L_1AB2A:
    /* 0001ab2a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001ab2au);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1AB2C:
    /* 0001ab2c   4  move.b (0,A0,D5.w),D0 */
    c->pc = RC_ADDR(0x0001ab2cu);
    rc_step(c, m);
    t4 = c->d[5];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1AB30:
    /* 0001ab30   2  moveq #0,D2 */
    c->pc = RC_ADDR(0x0001ab30u);
    rc_step(c, m);
    c->d[2] = 0x00000000u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_1AB32:
    /* 0001ab32   2  move.b D7,D2 */
    c->pc = RC_ADDR(0x0001ab32u);
    rc_step(c, m);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1AB34:
    /* 0001ab34   2  and.w D2,D0 */
    c->pc = RC_ADDR(0x0001ab34u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1AB36:
    /* 0001ab36   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001ab36u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AB38:
    /* 0001ab38   2  bne 0001ab90 */
    c->pc = RC_ADDR(0x0001ab38u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1AB90;

L_1AB3A:
    /* 0001ab3a   2  addq.l #1,D5 */
    c->pc = RC_ADDR(0x0001ab3au);
    rc_step(c, m);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_1AB3C:
    /* 0001ab3c   6  cmp.l #5,D5 */
    c->pc = RC_ADDR(0x0001ab3cu);
    rc_step(c, m);
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1AB42:
    /* 0001ab42   2  blt 0001ab0a */
    c->pc = RC_ADDR(0x0001ab42u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1AB0A; }

L_1AB44:
    /* 0001ab44   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x0001ab44u);
    rc_step(c, m);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1AB46:
    /* 0001ab46   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0001ab46u);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AB48:
    /* 0001ab48   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001ab48u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1AB4A:
    /* 0001ab4a   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001ab4au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1AB4C:
    /* 0001ab4c   4  adda.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001ab4cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_1AB50:
    /* 0001ab50   4  move.l (8,A0),D0 */
    c->pc = RC_ADDR(0x0001ab50u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AB54:
    /* 0001ab54   2  movea.l D4,A0 */
    c->pc = RC_ADDR(0x0001ab54u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_1AB56:
    /* 0001ab56   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0001ab56u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1AB58:
    /* 0001ab58   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001ab58u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1AB5A:
    /* 0001ab5a   2  move.b D7,D0 */
    c->pc = RC_ADDR(0x0001ab5au);
    rc_step(c, m);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1AB5C:
    /* 0001ab5c   4  eori.w #ff,D0 */
    c->pc = RC_ADDR(0x0001ab5cu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ 0x000000ffu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1AB60:
    /* 0001ab60   2  abcd D0,D0 */
    c->pc = RC_ADDR(0x0001ab60u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_B);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = rc_bcd_add(c, t1, t0);
    rc_d_set(c, 0, RC_B, t2);

L_1AB62:
    /* 0001ab62   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0001ab62u);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AB64:
    /* 0001ab64   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001ab64u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1AB66:
    /* 0001ab66   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001ab66u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1AB68:
    /* 0001ab68   4  adda.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001ab68u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] += t0;

L_1AB6C:
    /* 0001ab6c   4  move.l (8,A0),D0 */
    c->pc = RC_ADDR(0x0001ab6cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AB70:
    /* 0001ab70   2  movea.l D4,A0 */
    c->pc = RC_ADDR(0x0001ab70u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_1AB72:
    /* 0001ab72   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0001ab72u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_1AB74:
    /* 0001ab74   4  lea (fffffff6,A5),A1 */
    c->pc = RC_ADDR(0x0001ab74u);
    rc_step(c, m);
    c->a[1] = (c->a[5] - 0xau);

L_1AB78:
    /* 0001ab78   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001ab78u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1AB7A:
    /* 0001ab7a   4  move.b (0,A1,D5.w),D0 */
    c->pc = RC_ADDR(0x0001ab7au);
    rc_step(c, m);
    t4 = c->d[5];
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1AB7E:
    /* 0001ab7e   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001ab7eu);
    rc_step(c, m);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1AB80:
    /* 0001ab80   2  move.b D7,D1 */
    c->pc = RC_ADDR(0x0001ab80u);
    rc_step(c, m);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1AB82:
    /* 0001ab82   2  and.w D1,D0 */
    c->pc = RC_ADDR(0x0001ab82u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1AB84:
    /* 0001ab84   2  sbcd D0,D0 */
    c->pc = RC_ADDR(0x0001ab84u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_B);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = rc_bcd_sub(c, t1, t0);
    rc_d_set(c, 0, RC_B, t2);

L_1AB86:
    /* 0001ab86   2  addq.l #1,D5 */
    c->pc = RC_ADDR(0x0001ab86u);
    rc_step(c, m);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_1AB88:
    /* 0001ab88   6  cmp.l #5,D5 */
    c->pc = RC_ADDR(0x0001ab88u);
    rc_step(c, m);
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1AB8E:
    /* 0001ab8e   2  blt 0001ab46 */
    c->pc = RC_ADDR(0x0001ab8eu);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1AB46; }

L_1AB90:
    /* 0001ab90   2  lsr.b #1,D7 */
    c->pc = RC_ADDR(0x0001ab90u);
    rc_step(c, m);
    rc_d_set(c, 7, RC_B, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 7, RC_B), RC_B));

L_1AB92:
    /* 0001ab92   2  addq.w #1,D6 */
    c->pc = RC_ADDR(0x0001ab92u);
    rc_step(c, m);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_1AB94:
    /* 0001ab94   4  cmp.w #8,D6 */
    c->pc = RC_ADDR(0x0001ab94u);
    rc_step(c, m);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1AB98:
    /* 0001ab98   4  blt 0001ab08 */
    c->pc = RC_ADDR(0x0001ab98u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1AB08; }

L_1AB9C:
    /* 0001ab9c   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0001ab9cu);
    rc_step(c, m);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_1AB9E:
    /* 0001ab9e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001ab9eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1ABA2:
    /* 0001aba2   4  movea.l (8,A5),A1 */
    c->pc = RC_ADDR(0x0001aba2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[1] = t0;

L_1ABA6:
    /* 0001aba6   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x0001aba6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ABAA:
    /* 0001abaa   2  mulu.w (A1),D0 */
    c->pc = RC_ADDR(0x0001abaau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, c->a[1]);
    rc_mulu(c, 0, t0);

L_1ABAC:
    /* 0001abac   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001abacu);
    rc_step(c, m);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1ABAE:
    /* 0001abae   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0001abaeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ABB0:
    /* 0001abb0   2  cmp.l D1,D4 */
    c->pc = RC_ADDR(0x0001abb0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1ABB2:
    /* 0001abb2   4  bcs 0001ab02 */
    c->pc = RC_ADDR(0x0001abb2u);
    rc_step(c, m);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1AB02; }

L_1ABB6:
    /* 0001abb6   4  movem.l (SP)+,{ D4 D5 D6 D7 } */
    c->pc = RC_ADDR(0x0001abb6u);
    rc_step(c, m);
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
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1ABBA:
    /* 0001abba   2  unlk A5 */
    c->pc = RC_ADDR(0x0001abbau);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1ABBC:
    /* 0001abbc   2  rts */
    c->pc = RC_ADDR(0x0001abbcu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
