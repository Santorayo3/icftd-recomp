/* fn_0001aa04 - 168 byte(s), 59 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001aa04(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0001aa04u: goto L_1AA04;
    case 0x0001aa08u: goto L_1AA08;
    case 0x0001aa0cu: goto L_1AA0C;
    case 0x0001aa10u: goto L_1AA10;
    case 0x0001aa12u: goto L_1AA12;
    case 0x0001aa18u: goto L_1AA18;
    case 0x0001aa1au: goto L_1AA1A;
    case 0x0001aa1cu: goto L_1AA1C;
    case 0x0001aa20u: goto L_1AA20;
    case 0x0001aa22u: goto L_1AA22;
    case 0x0001aa24u: goto L_1AA24;
    case 0x0001aa28u: goto L_1AA28;
    case 0x0001aa2au: goto L_1AA2A;
    case 0x0001aa30u: goto L_1AA30;
    case 0x0001aa32u: goto L_1AA32;
    case 0x0001aa34u: goto L_1AA34;
    case 0x0001aa36u: goto L_1AA36;
    case 0x0001aa3au: goto L_1AA3A;
    case 0x0001aa3eu: goto L_1AA3E;
    case 0x0001aa42u: goto L_1AA42;
    case 0x0001aa44u: goto L_1AA44;
    case 0x0001aa48u: goto L_1AA48;
    case 0x0001aa4au: goto L_1AA4A;
    case 0x0001aa4cu: goto L_1AA4C;
    case 0x0001aa4eu: goto L_1AA4E;
    case 0x0001aa52u: goto L_1AA52;
    case 0x0001aa54u: goto L_1AA54;
    case 0x0001aa58u: goto L_1AA58;
    case 0x0001aa5au: goto L_1AA5A;
    case 0x0001aa5eu: goto L_1AA5E;
    case 0x0001aa60u: goto L_1AA60;
    case 0x0001aa62u: goto L_1AA62;
    case 0x0001aa64u: goto L_1AA64;
    case 0x0001aa66u: goto L_1AA66;
    case 0x0001aa68u: goto L_1AA68;
    case 0x0001aa6au: goto L_1AA6A;
    case 0x0001aa6eu: goto L_1AA6E;
    case 0x0001aa72u: goto L_1AA72;
    case 0x0001aa74u: goto L_1AA74;
    case 0x0001aa76u: goto L_1AA76;
    case 0x0001aa7au: goto L_1AA7A;
    case 0x0001aa7cu: goto L_1AA7C;
    case 0x0001aa7eu: goto L_1AA7E;
    case 0x0001aa80u: goto L_1AA80;
    case 0x0001aa82u: goto L_1AA82;
    case 0x0001aa86u: goto L_1AA86;
    case 0x0001aa88u: goto L_1AA88;
    case 0x0001aa8au: goto L_1AA8A;
    case 0x0001aa90u: goto L_1AA90;
    case 0x0001aa92u: goto L_1AA92;
    case 0x0001aa94u: goto L_1AA94;
    case 0x0001aa96u: goto L_1AA96;
    case 0x0001aa98u: goto L_1AA98;
    case 0x0001aa9au: goto L_1AA9A;
    case 0x0001aa9eu: goto L_1AA9E;
    case 0x0001aaa0u: goto L_1AAA0;
    case 0x0001aaa2u: goto L_1AAA2;
    case 0x0001aaa6u: goto L_1AAA6;
    case 0x0001aaa8u: goto L_1AAA8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1AA04:
    /* 0001aa04   4  link.w A5,#0 */
    c->pc = 0x0001aa04u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1AA08:
    /* 0001aa08   4  movem.l { A0 A1 A2 A3 },-(SP) */
    c->pc = 0x0001aa08u;
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

L_1AA0C:
    /* 0001aa0c   4  tst.w (8,A5) */
    c->pc = 0x0001aa0cu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_1AA10:
    /* 0001aa10   2  blt 0001aa1a */
    c->pc = 0x0001aa10u;
    if (rc_cond(c, 13)) goto L_1AA1A;

L_1AA12:
    /* 0001aa12   6  cmpi.w #150,(8,A5) */
    c->pc = 0x0001aa12u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000150u);

L_1AA18:
    /* 0001aa18   2  blt 0001aa24 */
    c->pc = 0x0001aa18u;
    if (rc_cond(c, 13)) goto L_1AA24;

L_1AA1A:
    /* 0001aa1a   2  moveq #0,D0 */
    c->pc = 0x0001aa1au;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1AA1C:
    /* 0001aa1c   4  movem.l (SP)+,{ D4 D5 D6 D7 } */
    c->pc = 0x0001aa1cu;
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

L_1AA20:
    /* 0001aa20   2  unlk A5 */
    c->pc = 0x0001aa20u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1AA22:
    /* 0001aa22   2  rts */
    c->pc = 0x0001aa22u;
    rc_ret(c, m);
    return;

L_1AA24:
    /* 0001aa24   4  tst.w (a,A5) */
    c->pc = 0x0001aa24u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_1AA28:
    /* 0001aa28   2  blt 0001aa32 */
    c->pc = 0x0001aa28u;
    if (rc_cond(c, 13)) goto L_1AA32;

L_1AA2A:
    /* 0001aa2a   6  cmpi.w #c8,(a,A5) */
    c->pc = 0x0001aa2au;
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_cmp(c, RC_W, t0, 0x000000c8u);

L_1AA30:
    /* 0001aa30   2  blt 0001aa36 */
    c->pc = 0x0001aa30u;
    if (rc_cond(c, 13)) goto L_1AA36;

L_1AA32:
    /* 0001aa32   2  moveq #0,D0 */
    c->pc = 0x0001aa32u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1AA34:
    /* 0001aa34   2  bra 0001aa1c */
    c->pc = 0x0001aa34u;
    rc_tick();
    goto L_1AA1C;

L_1AA36:
    /* 0001aa36   4  move.w (fffff2ce,A4),D0 */
    c->pc = 0x0001aa36u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AA3A:
    /* 0001aa3a   4  muls.w (a,A5),D0 */
    c->pc = 0x0001aa3au;
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_muls(c, 0, t0);

L_1AA3E:
    /* 0001aa3e   4  move.w (8,A5),D1 */
    c->pc = 0x0001aa3eu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AA42:
    /* 0001aa42   2  ext.l D1 */
    c->pc = 0x0001aa42u;
    rc_ext_l(c, 1);

L_1AA44:
    /* 0001aa44   4  divs.w #8,D1 */
    c->pc = 0x0001aa44u;
    t0 = 0x00000008u;
    rc_divs(c, m, 1, t0);

L_1AA48:
    /* 0001aa48   2  add.w D1,D0 */
    c->pc = 0x0001aa48u;
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1AA4A:
    /* 0001aa4a   2  ext.l D0 */
    c->pc = 0x0001aa4au;
    rc_ext_l(c, 0);

L_1AA4C:
    /* 0001aa4c   2  move.l D0,D4 */
    c->pc = 0x0001aa4cu;
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AA4E:
    /* 0001aa4e   4  move.w (8,A5),D0 */
    c->pc = 0x0001aa4eu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AA52:
    /* 0001aa52   2  ext.l D0 */
    c->pc = 0x0001aa52u;
    rc_ext_l(c, 0);

L_1AA54:
    /* 0001aa54   4  divs.w #8,D0 */
    c->pc = 0x0001aa54u;
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_1AA58:
    /* 0001aa58   2  swap D0 */
    c->pc = 0x0001aa58u;
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1AA5A:
    /* 0001aa5a   4  move.w #80,D1 */
    c->pc = 0x0001aa5au;
    t0 = 0x00000080u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AA5E:
    /* 0001aa5e   2  asr.w D0,D1 */
    c->pc = 0x0001aa5eu;
    c->d[1] = rc_shift(c, 0, 0, (c->d[0] & 63u), rc_d_get(c, 1, RC_W), RC_W);

L_1AA60:
    /* 0001aa60   2  move.b D1,D7 */
    c->pc = 0x0001aa60u;
    t0 = rc_d_get(c, 1, RC_B);
    rc_d_set(c, 7, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1AA62:
    /* 0001aa62   2  moveq #0,D6 */
    c->pc = 0x0001aa62u;
    c->d[6] = 0x00000000u;
    rc_set_nzvc(c, c->d[6], RC_L);

L_1AA64:
    /* 0001aa64   2  moveq #0,D5 */
    c->pc = 0x0001aa64u;
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1AA66:
    /* 0001aa66   2  move.l D5,D0 */
    c->pc = 0x0001aa66u;
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AA68:
    /* 0001aa68   2  asl.l #2,D0 */
    c->pc = 0x0001aa68u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1AA6A:
    /* 0001aa6a   4  lea (fffff326,A4),A0 */
    c->pc = 0x0001aa6au;
    c->a[0] = (c->a[4] - 0xcdau);

L_1AA6E:
    /* 0001aa6e   4  move.l (0,A0,D0.w),D1 */
    c->pc = 0x0001aa6eu;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1AA72:
    /* 0001aa72   2  movea.l D4,A0 */
    c->pc = 0x0001aa72u;
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_1AA74:
    /* 0001aa74   2  moveq #0,D0 */
    c->pc = 0x0001aa74u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1AA76:
    /* 0001aa76   4  move.b (0,A0,D1.w),D0 */
    c->pc = 0x0001aa76u;
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1AA7A:
    /* 0001aa7a   2  move.b D7,D1 */
    c->pc = 0x0001aa7au;
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1AA7C:
    /* 0001aa7c   2  ext.w D1 */
    c->pc = 0x0001aa7cu;
    rc_ext_w(c, 1);

L_1AA7E:
    /* 0001aa7e   2  and.w D1,D0 */
    c->pc = 0x0001aa7eu;
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1AA80:
    /* 0001aa80   2  beq 0001aa86 */
    c->pc = 0x0001aa80u;
    if (rc_cond(c, 7)) goto L_1AA86;

L_1AA82:
    /* 0001aa82   4  bset #5,D6 */
    c->pc = 0x0001aa82u;
    t4 = 0x00000005u;
    t0 = rc_d_get(c, 6, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_B, t2);

L_1AA86:
    /* 0001aa86   2  asr.w #1,D6 */
    c->pc = 0x0001aa86u;
    c->d[6] = rc_shift(c, 0, 0, 0x00000001u, rc_d_get(c, 6, RC_W), RC_W);

L_1AA88:
    /* 0001aa88   2  addq.l #1,D5 */
    c->pc = 0x0001aa88u;
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_1AA8A:
    /* 0001aa8a   6  cmp.l #5,D5 */
    c->pc = 0x0001aa8au;
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1AA90:
    /* 0001aa90   2  blt 0001aa66 */
    c->pc = 0x0001aa90u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_1AA66; }

L_1AA92:
    /* 0001aa92   2  move.w D6,D0 */
    c->pc = 0x0001aa92u;
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1AA94:
    /* 0001aa94   2  ext.l D0 */
    c->pc = 0x0001aa94u;
    rc_ext_l(c, 0);

L_1AA96:
    /* 0001aa96   2  moveq #1,D1 */
    c->pc = 0x0001aa96u;
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1AA98:
    /* 0001aa98   2  asl.l D0,D1 */
    c->pc = 0x0001aa98u;
    c->d[1] = rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L);

L_1AA9A:
    /* 0001aa9a   4  and.l (c,A5),D1 */
    c->pc = 0x0001aa9au;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    t2 = t0 & rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_1AA9E:
    /* 0001aa9e   2  beq 0001aaa6 */
    c->pc = 0x0001aa9eu;
    if (rc_cond(c, 7)) goto L_1AAA6;

L_1AAA0:
    /* 0001aaa0   2  moveq #1,D0 */
    c->pc = 0x0001aaa0u;
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1AAA2:
    /* 0001aaa2   4  bra 0001aa1c */
    c->pc = 0x0001aaa2u;
    rc_tick();
    goto L_1AA1C;

L_1AAA6:
    /* 0001aaa6   2  moveq #0,D0 */
    c->pc = 0x0001aaa6u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1AAA8:
    /* 0001aaa8   4  bra 0001aa1c */
    c->pc = 0x0001aaa8u;
    rc_tick();
    goto L_1AA1C;

}
