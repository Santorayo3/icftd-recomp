/* fn_0000ddf2 - 210 byte(s), 76 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000ddf2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0000ddf2u: goto L_DDF2;
    case 0x0000ddf6u: goto L_DDF6;
    case 0x0000ddfau: goto L_DDFA;
    case 0x0000ddfeu: goto L_DDFE;
    case 0x0000de00u: goto L_DE00;
    case 0x0000de04u: goto L_DE04;
    case 0x0000de08u: goto L_DE08;
    case 0x0000de0cu: goto L_DE0C;
    case 0x0000de0eu: goto L_DE0E;
    case 0x0000de12u: goto L_DE12;
    case 0x0000de14u: goto L_DE14;
    case 0x0000de18u: goto L_DE18;
    case 0x0000de1au: goto L_DE1A;
    case 0x0000de1cu: goto L_DE1C;
    case 0x0000de1eu: goto L_DE1E;
    case 0x0000de20u: goto L_DE20;
    case 0x0000de24u: goto L_DE24;
    case 0x0000de28u: goto L_DE28;
    case 0x0000de2au: goto L_DE2A;
    case 0x0000de2cu: goto L_DE2C;
    case 0x0000de2eu: goto L_DE2E;
    case 0x0000de30u: goto L_DE30;
    case 0x0000de34u: goto L_DE34;
    case 0x0000de36u: goto L_DE36;
    case 0x0000de3au: goto L_DE3A;
    case 0x0000de3cu: goto L_DE3C;
    case 0x0000de40u: goto L_DE40;
    case 0x0000de42u: goto L_DE42;
    case 0x0000de46u: goto L_DE46;
    case 0x0000de48u: goto L_DE48;
    case 0x0000de4au: goto L_DE4A;
    case 0x0000de4eu: goto L_DE4E;
    case 0x0000de52u: goto L_DE52;
    case 0x0000de54u: goto L_DE54;
    case 0x0000de58u: goto L_DE58;
    case 0x0000de5au: goto L_DE5A;
    case 0x0000de5eu: goto L_DE5E;
    case 0x0000de60u: goto L_DE60;
    case 0x0000de62u: goto L_DE62;
    case 0x0000de64u: goto L_DE64;
    case 0x0000de68u: goto L_DE68;
    case 0x0000de6au: goto L_DE6A;
    case 0x0000de6eu: goto L_DE6E;
    case 0x0000de70u: goto L_DE70;
    case 0x0000de74u: goto L_DE74;
    case 0x0000de76u: goto L_DE76;
    case 0x0000de78u: goto L_DE78;
    case 0x0000de7au: goto L_DE7A;
    case 0x0000de7cu: goto L_DE7C;
    case 0x0000de7eu: goto L_DE7E;
    case 0x0000de80u: goto L_DE80;
    case 0x0000de84u: goto L_DE84;
    case 0x0000de88u: goto L_DE88;
    case 0x0000de8au: goto L_DE8A;
    case 0x0000de8cu: goto L_DE8C;
    case 0x0000de90u: goto L_DE90;
    case 0x0000de92u: goto L_DE92;
    case 0x0000de94u: goto L_DE94;
    case 0x0000de96u: goto L_DE96;
    case 0x0000de98u: goto L_DE98;
    case 0x0000de9cu: goto L_DE9C;
    case 0x0000de9eu: goto L_DE9E;
    case 0x0000dea0u: goto L_DEA0;
    case 0x0000dea6u: goto L_DEA6;
    case 0x0000dea8u: goto L_DEA8;
    case 0x0000deaau: goto L_DEAA;
    case 0x0000deacu: goto L_DEAC;
    case 0x0000deaeu: goto L_DEAE;
    case 0x0000deb0u: goto L_DEB0;
    case 0x0000deb4u: goto L_DEB4;
    case 0x0000deb6u: goto L_DEB6;
    case 0x0000deb8u: goto L_DEB8;
    case 0x0000debcu: goto L_DEBC;
    case 0x0000debeu: goto L_DEBE;
    case 0x0000dec0u: goto L_DEC0;
    case 0x0000dec2u: goto L_DEC2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_DDF2:
    /* 0000ddf2   4  link.w A5,#0 */
    c->pc = 0x0000ddf2u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_DDF6:
    /* 0000ddf6   4  movem.l { A0 A1 A2 A3 },-(SP) */
    c->pc = 0x0000ddf6u;
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

L_DDFA:
    /* 0000ddfa   4  move.w (8,A5),D0 */
    c->pc = 0x0000ddfau;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DDFE:
    /* 0000ddfe   2  ext.l D0 */
    c->pc = 0x0000ddfeu;
    rc_ext_l(c, 0);

L_DE00:
    /* 0000de00   4  divs.w #20,D0 */
    c->pc = 0x0000de00u;
    t0 = 0x00000020u;
    rc_divs(c, m, 0, t0);

L_DE04:
    /* 0000de04   4  muls.w #27,D0 */
    c->pc = 0x0000de04u;
    t0 = 0x00000027u;
    rc_muls(c, 0, t0);

L_DE08:
    /* 0000de08   4  move.w (a,A5),D1 */
    c->pc = 0x0000de08u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE0C:
    /* 0000de0c   2  ext.l D1 */
    c->pc = 0x0000de0cu;
    rc_ext_l(c, 1);

L_DE0E:
    /* 0000de0e   4  divs.w #1b,D1 */
    c->pc = 0x0000de0eu;
    t0 = 0x0000001bu;
    rc_divs(c, m, 1, t0);

L_DE12:
    /* 0000de12   2  add.w D1,D0 */
    c->pc = 0x0000de12u;
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DE14:
    /* 0000de14   4  add.w #28,D0 */
    c->pc = 0x0000de14u;
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DE18:
    /* 0000de18   2  ext.l D0 */
    c->pc = 0x0000de18u;
    rc_ext_l(c, 0);

L_DE1A:
    /* 0000de1a   2  move.l D0,D5 */
    c->pc = 0x0000de1au;
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DE1C:
    /* 0000de1c   2  move.l D5,D0 */
    c->pc = 0x0000de1cu;
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DE1E:
    /* 0000de1e   2  asl.l #1,D0 */
    c->pc = 0x0000de1eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_DE20:
    /* 0000de20   4  movea.l (fffff2f8,A4),A0 */
    c->pc = 0x0000de20u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_DE24:
    /* 0000de24   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000de24u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE28:
    /* 0000de28   2  lsr.w #1,D1 */
    c->pc = 0x0000de28u;
    c->d[1] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_DE2A:
    /* 0000de2a   2  moveq #0,D0 */
    c->pc = 0x0000de2au;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_DE2C:
    /* 0000de2c   2  move.w D1,D0 */
    c->pc = 0x0000de2cu;
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE2E:
    /* 0000de2e   2  asl.l #1,D0 */
    c->pc = 0x0000de2eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_DE30:
    /* 0000de30   4  movea.l (fffff314,A4),A0 */
    c->pc = 0x0000de30u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xcecu));
    c->a[0] = t0;

L_DE34:
    /* 0000de34   2  moveq #0,D1 */
    c->pc = 0x0000de34u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_DE36:
    /* 0000de36   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000de36u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE3A:
    /* 0000de3a   2  move.l D1,D4 */
    c->pc = 0x0000de3au;
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DE3C:
    /* 0000de3c   4  move.w (8,A5),D0 */
    c->pc = 0x0000de3cu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE40:
    /* 0000de40   2  ext.l D0 */
    c->pc = 0x0000de40u;
    rc_ext_l(c, 0);

L_DE42:
    /* 0000de42   4  divs.w #20,D0 */
    c->pc = 0x0000de42u;
    t0 = 0x00000020u;
    rc_divs(c, m, 0, t0);

L_DE46:
    /* 0000de46   2  swap D0 */
    c->pc = 0x0000de46u;
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_DE48:
    /* 0000de48   2  ext.l D0 */
    c->pc = 0x0000de48u;
    rc_ext_l(c, 0);

L_DE4A:
    /* 0000de4a   4  divs.w #8,D0 */
    c->pc = 0x0000de4au;
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_DE4E:
    /* 0000de4e   4  move.w (a,A5),D1 */
    c->pc = 0x0000de4eu;
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE52:
    /* 0000de52   2  ext.l D1 */
    c->pc = 0x0000de52u;
    rc_ext_l(c, 1);

L_DE54:
    /* 0000de54   4  divs.w #1b,D1 */
    c->pc = 0x0000de54u;
    t0 = 0x0000001bu;
    rc_divs(c, m, 1, t0);

L_DE58:
    /* 0000de58   2  swap D1 */
    c->pc = 0x0000de58u;
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_DE5A:
    /* 0000de5a   4  muls.w (fffff2f4,A4),D1 */
    c->pc = 0x0000de5au;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0cu));
    rc_muls(c, 1, t0);

L_DE5E:
    /* 0000de5e   2  add.w D1,D0 */
    c->pc = 0x0000de5eu;
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DE60:
    /* 0000de60   2  ext.l D0 */
    c->pc = 0x0000de60u;
    rc_ext_l(c, 0);

L_DE62:
    /* 0000de62   2  add.l D0,D4 */
    c->pc = 0x0000de62u;
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_DE64:
    /* 0000de64   4  move.w (8,A5),D0 */
    c->pc = 0x0000de64u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE68:
    /* 0000de68   2  ext.l D0 */
    c->pc = 0x0000de68u;
    rc_ext_l(c, 0);

L_DE6A:
    /* 0000de6a   4  divs.w #8,D0 */
    c->pc = 0x0000de6au;
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_DE6E:
    /* 0000de6e   2  swap D0 */
    c->pc = 0x0000de6eu;
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_DE70:
    /* 0000de70   4  move.w #80,D1 */
    c->pc = 0x0000de70u;
    t0 = 0x00000080u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE74:
    /* 0000de74   2  asr.w D0,D1 */
    c->pc = 0x0000de74u;
    c->d[1] = rc_shift(c, 0, 0, (c->d[0] & 63u), rc_d_get(c, 1, RC_W), RC_W);

L_DE76:
    /* 0000de76   2  move.b D1,D7 */
    c->pc = 0x0000de76u;
    t0 = rc_d_get(c, 1, RC_B);
    rc_d_set(c, 7, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_DE78:
    /* 0000de78   2  moveq #0,D6 */
    c->pc = 0x0000de78u;
    c->d[6] = 0x00000000u;
    rc_set_nzvc(c, c->d[6], RC_L);

L_DE7A:
    /* 0000de7a   2  moveq #0,D5 */
    c->pc = 0x0000de7au;
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_DE7C:
    /* 0000de7c   2  move.l D5,D0 */
    c->pc = 0x0000de7cu;
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DE7E:
    /* 0000de7e   2  asl.l #2,D0 */
    c->pc = 0x0000de7eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_DE80:
    /* 0000de80   4  lea (fffff300,A4),A0 */
    c->pc = 0x0000de80u;
    c->a[0] = (c->a[4] - 0xd00u);

L_DE84:
    /* 0000de84   4  move.l (0,A0,D0.w),D1 */
    c->pc = 0x0000de84u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DE88:
    /* 0000de88   2  movea.l D4,A0 */
    c->pc = 0x0000de88u;
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_DE8A:
    /* 0000de8a   2  moveq #0,D0 */
    c->pc = 0x0000de8au;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_DE8C:
    /* 0000de8c   4  move.b (0,A0,D1.w),D0 */
    c->pc = 0x0000de8cu;
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_DE90:
    /* 0000de90   2  move.b D7,D1 */
    c->pc = 0x0000de90u;
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_DE92:
    /* 0000de92   2  ext.w D1 */
    c->pc = 0x0000de92u;
    rc_ext_w(c, 1);

L_DE94:
    /* 0000de94   2  and.w D1,D0 */
    c->pc = 0x0000de94u;
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_DE96:
    /* 0000de96   2  beq 0000de9c */
    c->pc = 0x0000de96u;
    if (rc_cond(c, 7)) goto L_DE9C;

L_DE98:
    /* 0000de98   4  bset #5,D6 */
    c->pc = 0x0000de98u;
    t4 = 0x00000005u;
    t0 = rc_d_get(c, 6, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_B, t2);

L_DE9C:
    /* 0000de9c   2  asr.w #1,D6 */
    c->pc = 0x0000de9cu;
    c->d[6] = rc_shift(c, 0, 0, 0x00000001u, rc_d_get(c, 6, RC_W), RC_W);

L_DE9E:
    /* 0000de9e   2  addq.l #1,D5 */
    c->pc = 0x0000de9eu;
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_DEA0:
    /* 0000dea0   6  cmp.l #5,D5 */
    c->pc = 0x0000dea0u;
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_DEA6:
    /* 0000dea6   2  blt 0000de7c */
    c->pc = 0x0000dea6u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_DE7C; }

L_DEA8:
    /* 0000dea8   2  move.w D6,D0 */
    c->pc = 0x0000dea8u;
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DEAA:
    /* 0000deaa   2  ext.l D0 */
    c->pc = 0x0000deaau;
    rc_ext_l(c, 0);

L_DEAC:
    /* 0000deac   2  moveq #1,D1 */
    c->pc = 0x0000deacu;
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_DEAE:
    /* 0000deae   2  asl.l D0,D1 */
    c->pc = 0x0000deaeu;
    c->d[1] = rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L);

L_DEB0:
    /* 0000deb0   4  and.l (ffff9adc,A4),D1 */
    c->pc = 0x0000deb0u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x6524u));
    t2 = t0 & rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_DEB4:
    /* 0000deb4   2  beq 0000dec0 */
    c->pc = 0x0000deb4u;
    if (rc_cond(c, 7)) goto L_DEC0;

L_DEB6:
    /* 0000deb6   2  moveq #1,D0 */
    c->pc = 0x0000deb6u;
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_DEB8:
    /* 0000deb8   4  movem.l (SP)+,{ D4 D5 D6 D7 } */
    c->pc = 0x0000deb8u;
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

L_DEBC:
    /* 0000debc   2  unlk A5 */
    c->pc = 0x0000debcu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_DEBE:
    /* 0000debe   2  rts */
    c->pc = 0x0000debeu;
    rc_ret(c, m);
    return;

L_DEC0:
    /* 0000dec0   2  moveq #0,D0 */
    c->pc = 0x0000dec0u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_DEC2:
    /* 0000dec2   2  bra 0000deb8 */
    c->pc = 0x0000dec2u;
    rc_tick();
    goto L_DEB8;

}
