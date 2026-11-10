/* fn_0001da20 - 254 byte(s), 78 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001da20(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0001da20u: goto L_1DA20;
    case 0x0001da24u: goto L_1DA24;
    case 0x0001da28u: goto L_1DA28;
    case 0x0001da2cu: goto L_1DA2C;
    case 0x0001da2eu: goto L_1DA2E;
    case 0x0001da32u: goto L_1DA32;
    case 0x0001da36u: goto L_1DA36;
    case 0x0001da38u: goto L_1DA38;
    case 0x0001da3au: goto L_1DA3A;
    case 0x0001da3eu: goto L_1DA3E;
    case 0x0001da40u: goto L_1DA40;
    case 0x0001da42u: goto L_1DA42;
    case 0x0001da46u: goto L_1DA46;
    case 0x0001da4au: goto L_1DA4A;
    case 0x0001da4eu: goto L_1DA4E;
    case 0x0001da54u: goto L_1DA54;
    case 0x0001da58u: goto L_1DA58;
    case 0x0001da5cu: goto L_1DA5C;
    case 0x0001da5eu: goto L_1DA5E;
    case 0x0001da62u: goto L_1DA62;
    case 0x0001da66u: goto L_1DA66;
    case 0x0001da6au: goto L_1DA6A;
    case 0x0001da70u: goto L_1DA70;
    case 0x0001da72u: goto L_1DA72;
    case 0x0001da74u: goto L_1DA74;
    case 0x0001da78u: goto L_1DA78;
    case 0x0001da7cu: goto L_1DA7C;
    case 0x0001da7eu: goto L_1DA7E;
    case 0x0001da82u: goto L_1DA82;
    case 0x0001da84u: goto L_1DA84;
    case 0x0001da88u: goto L_1DA88;
    case 0x0001da8au: goto L_1DA8A;
    case 0x0001da8cu: goto L_1DA8C;
    case 0x0001da8eu: goto L_1DA8E;
    case 0x0001da90u: goto L_1DA90;
    case 0x0001da96u: goto L_1DA96;
    case 0x0001da98u: goto L_1DA98;
    case 0x0001da9au: goto L_1DA9A;
    case 0x0001da9eu: goto L_1DA9E;
    case 0x0001daa0u: goto L_1DAA0;
    case 0x0001daa2u: goto L_1DAA2;
    case 0x0001daa4u: goto L_1DAA4;
    case 0x0001daa8u: goto L_1DAA8;
    case 0x0001daaeu: goto L_1DAAE;
    case 0x0001dab0u: goto L_1DAB0;
    case 0x0001dab2u: goto L_1DAB2;
    case 0x0001dab6u: goto L_1DAB6;
    case 0x0001dabau: goto L_1DABA;
    case 0x0001dabcu: goto L_1DABC;
    case 0x0001dac0u: goto L_1DAC0;
    case 0x0001dac2u: goto L_1DAC2;
    case 0x0001dac6u: goto L_1DAC6;
    case 0x0001dac8u: goto L_1DAC8;
    case 0x0001dacau: goto L_1DACA;
    case 0x0001daccu: goto L_1DACC;
    case 0x0001daceu: goto L_1DACE;
    case 0x0001dad4u: goto L_1DAD4;
    case 0x0001dad6u: goto L_1DAD6;
    case 0x0001dad8u: goto L_1DAD8;
    case 0x0001dadcu: goto L_1DADC;
    case 0x0001dadeu: goto L_1DADE;
    case 0x0001dae0u: goto L_1DAE0;
    case 0x0001dae2u: goto L_1DAE2;
    case 0x0001dae6u: goto L_1DAE6;
    case 0x0001daecu: goto L_1DAEC;
    case 0x0001daf0u: goto L_1DAF0;
    case 0x0001daf6u: goto L_1DAF6;
    case 0x0001dafau: goto L_1DAFA;
    case 0x0001dafeu: goto L_1DAFE;
    case 0x0001db02u: goto L_1DB02;
    case 0x0001db06u: goto L_1DB06;
    case 0x0001db08u: goto L_1DB08;
    case 0x0001db0cu: goto L_1DB0C;
    case 0x0001db0eu: goto L_1DB0E;
    case 0x0001db12u: goto L_1DB12;
    case 0x0001db16u: goto L_1DB16;
    case 0x0001db1au: goto L_1DB1A;
    case 0x0001db1cu: goto L_1DB1C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DA20:
    /* 0001da20   4  link.w A5,#fffffffc */
    c->pc = 0x0001da20u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1DA24:
    /* 0001da24   4  movem.l { D4 D5 A3 },-(SP) */
    c->pc = 0x0001da24u;
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1DA28:
    /* 0001da28   4  lea (28ca,A4),A0 */
    c->pc = 0x0001da28u;
    c->a[0] = (c->a[4] + 0x28cau);

L_1DA2C:
    /* 0001da2c   2  movea.l A0,A3 */
    c->pc = 0x0001da2cu;
    t0 = rc_a_get(c, 0, RC_L);
    c->a[3] = t0;

L_1DA2E:
    /* 0001da2e   4  clr.w (fffffffe,A5) */
    c->pc = 0x0001da2eu;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DA32:
    /* 0001da32   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x0001da32u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA36:
    /* 0001da36   2  ext.l D0 */
    c->pc = 0x0001da36u;
    rc_ext_l(c, 0);

L_1DA38:
    /* 0001da38   2  asl.l #3,D0 */
    c->pc = 0x0001da38u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L);

L_1DA3A:
    /* 0001da3a   4  lea (28ea,A4),A0 */
    c->pc = 0x0001da3au;
    c->a[0] = (c->a[4] + 0x28eau);

L_1DA3E:
    /* 0001da3e   2  movea.l D0,A2 */
    c->pc = 0x0001da3eu;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_1DA40:
    /* 0001da40   2  adda.l A0,A2 */
    c->pc = 0x0001da40u;
    t0 = rc_a_get(c, 0, RC_L);
    c->a[2] += t0;

L_1DA42:
    /* 0001da42   4  move.b (6,A2),D0 */
    c->pc = 0x0001da42u;
    t0 = rc_rd8(c, m, (c->a[2] + 0x6u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DA46:
    /* 0001da46   4  cmp.b (7,A2),D0 */
    c->pc = 0x0001da46u;
    t0 = rc_rd8(c, m, (c->a[2] + 0x7u));
    t1 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_1DA4A:
    /* 0001da4a   4  beq 0001daec */
    c->pc = 0x0001da4au;
    if (rc_cond(c, 7)) goto L_1DAEC;

L_1DA4E:
    /* 0001da4e   6  cmpi.w #24,(2,A2) */
    c->pc = 0x0001da4eu;
    t0 = rc_rd16(c, m, (c->a[2] + 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000024u);

L_1DA54:
    /* 0001da54   4  beq 0001daec */
    c->pc = 0x0001da54u;
    if (rc_cond(c, 7)) goto L_1DAEC;

L_1DA58:
    /* 0001da58   4  move.w (2,A2),D0 */
    c->pc = 0x0001da58u;
    t0 = rc_rd16(c, m, (c->a[2] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA5C:
    /* 0001da5c   2  add.w D0,(A2) */
    c->pc = 0x0001da5cu;
    t3 = c->a[2];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1DA5E:
    /* 0001da5e   4  cmpi.w #4000,(A2) */
    c->pc = 0x0001da5eu;
    t0 = rc_rd16(c, m, c->a[2]);
    rc_cmp(c, RC_W, t0, 0x00004000u);

L_1DA62:
    /* 0001da62   4  blt 0001daec */
    c->pc = 0x0001da62u;
    if (rc_cond(c, 13)) goto L_1DAEC;

L_1DA66:
    /* 0001da66   4  subi.w #4000,(A2) */
    c->pc = 0x0001da66u;
    t3 = c->a[2];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00004000u;
    rc_flags_sub(c, RC_W, t1, 0x00004000u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1DA6A:
    /* 0001da6a   6  btst #1,(5,A2) */
    c->pc = 0x0001da6au;
    t4 = 0x00000001u;
    t3 = (c->a[2] + 0x5u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1DA70:
    /* 0001da70   2  beq 0001dab0 */
    c->pc = 0x0001da70u;
    if (rc_cond(c, 7)) goto L_1DAB0;

L_1DA72:
    /* 0001da72   2  moveq #0,D0 */
    c->pc = 0x0001da72u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DA74:
    /* 0001da74   4  move.b (6,A2),D0 */
    c->pc = 0x0001da74u;
    t0 = rc_rd8(c, m, (c->a[2] + 0x6u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DA78:
    /* 0001da78   4  move.b (0,A3,D0.w),D1 */
    c->pc = 0x0001da78u;
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[3] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DA7C:
    /* 0001da7c   2  ext.w D1 */
    c->pc = 0x0001da7cu;
    rc_ext_w(c, 1);

L_1DA7E:
    /* 0001da7e   4  move.w D1,(fffffffc,A5) */
    c->pc = 0x0001da7eu;
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA82:
    /* 0001da82   2  moveq #0,D0 */
    c->pc = 0x0001da82u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DA84:
    /* 0001da84   4  move.b (6,A2),D0 */
    c->pc = 0x0001da84u;
    t0 = rc_rd8(c, m, (c->a[2] + 0x6u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DA88:
    /* 0001da88   2  move.w D0,D4 */
    c->pc = 0x0001da88u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA8A:
    /* 0001da8a   2  bra 0001da98 */
    c->pc = 0x0001da8au;
    goto L_1DA98;

L_1DA8C:
    /* 0001da8c   2  move.w D4,D0 */
    c->pc = 0x0001da8cu;
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DA8E:
    /* 0001da8e   2  addq.w #1,D0 */
    c->pc = 0x0001da8eu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1DA90:
    /* 0001da90   6  move.b (0,A3,D0.w),(0,A3,D4.w) */
    c->pc = 0x0001da90u;
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[3] + 0x0u + t4));
    t4 = rc_ext(c->d[4], RC_W);
    rc_wr8(c, m, (c->a[3] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DA96:
    /* 0001da96   2  addq.w #1,D4 */
    c->pc = 0x0001da96u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1DA98:
    /* 0001da98   2  moveq #0,D0 */
    c->pc = 0x0001da98u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DA9A:
    /* 0001da9a   4  move.b (7,A2),D0 */
    c->pc = 0x0001da9au;
    t0 = rc_rd8(c, m, (c->a[2] + 0x7u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DA9E:
    /* 0001da9e   2  cmp.w D0,D4 */
    c->pc = 0x0001da9eu;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1DAA0:
    /* 0001daa0   2  bcs 0001da8c */
    c->pc = 0x0001daa0u;
    if (rc_cond(c, 5)) { rc_tick(); goto L_1DA8C; }

L_1DAA2:
    /* 0001daa2   2  moveq #0,D0 */
    c->pc = 0x0001daa2u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DAA4:
    /* 0001daa4   4  move.b (7,A2),D0 */
    c->pc = 0x0001daa4u;
    t0 = rc_rd8(c, m, (c->a[2] + 0x7u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DAA8:
    /* 0001daa8   6  move.b (fffffffd,A5),(0,A3,D0.w) */
    c->pc = 0x0001daa8u;
    t0 = rc_rd8(c, m, (c->a[5] - 0x3u));
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[3] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DAAE:
    /* 0001daae   2  bra 0001daec */
    c->pc = 0x0001daaeu;
    goto L_1DAEC;

L_1DAB0:
    /* 0001dab0   2  moveq #0,D0 */
    c->pc = 0x0001dab0u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DAB2:
    /* 0001dab2   4  move.b (7,A2),D0 */
    c->pc = 0x0001dab2u;
    t0 = rc_rd8(c, m, (c->a[2] + 0x7u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DAB6:
    /* 0001dab6   4  move.b (0,A3,D0.w),D1 */
    c->pc = 0x0001dab6u;
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[3] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DABA:
    /* 0001daba   2  ext.w D1 */
    c->pc = 0x0001dabau;
    rc_ext_w(c, 1);

L_1DABC:
    /* 0001dabc   4  move.w D1,(fffffffc,A5) */
    c->pc = 0x0001dabcu;
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DAC0:
    /* 0001dac0   2  moveq #0,D0 */
    c->pc = 0x0001dac0u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DAC2:
    /* 0001dac2   4  move.b (7,A2),D0 */
    c->pc = 0x0001dac2u;
    t0 = rc_rd8(c, m, (c->a[2] + 0x7u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DAC6:
    /* 0001dac6   2  move.w D0,D4 */
    c->pc = 0x0001dac6u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DAC8:
    /* 0001dac8   2  bra 0001dad6 */
    c->pc = 0x0001dac8u;
    goto L_1DAD6;

L_1DACA:
    /* 0001daca   2  move.w D4,D0 */
    c->pc = 0x0001dacau;
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DACC:
    /* 0001dacc   2  subq.w #1,D0 */
    c->pc = 0x0001daccu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1DACE:
    /* 0001dace   6  move.b (0,A3,D0.w),(0,A3,D4.w) */
    c->pc = 0x0001daceu;
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[3] + 0x0u + t4));
    t4 = rc_ext(c->d[4], RC_W);
    rc_wr8(c, m, (c->a[3] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DAD4:
    /* 0001dad4   2  subq.w #1,D4 */
    c->pc = 0x0001dad4u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1DAD6:
    /* 0001dad6   2  moveq #0,D0 */
    c->pc = 0x0001dad6u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DAD8:
    /* 0001dad8   4  move.b (6,A2),D0 */
    c->pc = 0x0001dad8u;
    t0 = rc_rd8(c, m, (c->a[2] + 0x6u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DADC:
    /* 0001dadc   2  cmp.w D0,D4 */
    c->pc = 0x0001dadcu;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1DADE:
    /* 0001dade   2  bhi 0001daca */
    c->pc = 0x0001dadeu;
    if (rc_cond(c, 2)) { rc_tick(); goto L_1DACA; }

L_1DAE0:
    /* 0001dae0   2  moveq #0,D0 */
    c->pc = 0x0001dae0u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1DAE2:
    /* 0001dae2   4  move.b (6,A2),D0 */
    c->pc = 0x0001dae2u;
    t0 = rc_rd8(c, m, (c->a[2] + 0x6u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DAE6:
    /* 0001dae6   6  move.b (fffffffd,A5),(0,A3,D0.w) */
    c->pc = 0x0001dae6u;
    t0 = rc_rd8(c, m, (c->a[5] - 0x3u));
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[3] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DAEC:
    /* 0001daec   4  addq.w #1,(fffffffe,A5) */
    c->pc = 0x0001daecu;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1DAF0:
    /* 0001daf0   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = 0x0001daf0u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_1DAF6:
    /* 0001daf6   4  blt 0001da32 */
    c->pc = 0x0001daf6u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_1DA32; }

L_1DAFA:
    /* 0001dafa   4  lea (28ca,A4),A0 */
    c->pc = 0x0001dafau;
    c->a[0] = (c->a[4] + 0x28cau);

L_1DAFE:
    /* 0001dafe   4  lea (fffffe7c,A4),A1 */
    c->pc = 0x0001dafeu;
    c->a[1] = (c->a[4] - 0x184u);

L_1DB02:
    /* 0001db02   4  lea (2880,A4),A6 */
    c->pc = 0x0001db02u;
    c->a[6] = (c->a[4] + 0x2880u);

L_1DB06:
    /* 0001db06   2  clr.w D0 */
    c->pc = 0x0001db06u;
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DB08:
    /* 0001db08   4  move.w #1f,D3 */
    c->pc = 0x0001db08u;
    t0 = 0x0000001fu;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB0C:
    /* 0001db0c   2  move.b (A0)+,D0 */
    c->pc = 0x0001db0cu;
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DB0E:
    /* 0001db0e   4  move.w (0,A1,D0.w),(A6)+ */
    c->pc = 0x0001db0eu;
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t3 = c->a[6];
    c->a[6] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB12:
    /* 0001db12   4  dbf D3,0001db0c */
    c->pc = 0x0001db12u;
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 3, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 3, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1DB0C; }
    }

L_1DB16:
    /* 0001db16   4  movem.l (SP)+,{ D4 A2 A3 } */
    c->pc = 0x0001db16u;
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

L_1DB1A:
    /* 0001db1a   2  unlk A5 */
    c->pc = 0x0001db1au;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DB1C:
    /* 0001db1c   2  rts */
    c->pc = 0x0001db1cu;
    rc_ret(c, m);
    return;

}
