/* fn_0000ec2e - 218 byte(s), 65 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000ec2e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ec2eu): goto L_EC2E;
    case RC_ADDR(0x0000ec32u): goto L_EC32;
    case RC_ADDR(0x0000ec36u): goto L_EC36;
    case RC_ADDR(0x0000ec38u): goto L_EC38;
    case RC_ADDR(0x0000ec3au): goto L_EC3A;
    case RC_ADDR(0x0000ec3eu): goto L_EC3E;
    case RC_ADDR(0x0000ec42u): goto L_EC42;
    case RC_ADDR(0x0000ec44u): goto L_EC44;
    case RC_ADDR(0x0000ec48u): goto L_EC48;
    case RC_ADDR(0x0000ec4cu): goto L_EC4C;
    case RC_ADDR(0x0000ec50u): goto L_EC50;
    case RC_ADDR(0x0000ec52u): goto L_EC52;
    case RC_ADDR(0x0000ec56u): goto L_EC56;
    case RC_ADDR(0x0000ec5au): goto L_EC5A;
    case RC_ADDR(0x0000ec5eu): goto L_EC5E;
    case RC_ADDR(0x0000ec62u): goto L_EC62;
    case RC_ADDR(0x0000ec64u): goto L_EC64;
    case RC_ADDR(0x0000ec68u): goto L_EC68;
    case RC_ADDR(0x0000ec6cu): goto L_EC6C;
    case RC_ADDR(0x0000ec70u): goto L_EC70;
    case RC_ADDR(0x0000ec74u): goto L_EC74;
    case RC_ADDR(0x0000ec78u): goto L_EC78;
    case RC_ADDR(0x0000ec7cu): goto L_EC7C;
    case RC_ADDR(0x0000ec80u): goto L_EC80;
    case RC_ADDR(0x0000ec82u): goto L_EC82;
    case RC_ADDR(0x0000ec86u): goto L_EC86;
    case RC_ADDR(0x0000ec8au): goto L_EC8A;
    case RC_ADDR(0x0000ec8cu): goto L_EC8C;
    case RC_ADDR(0x0000ec8eu): goto L_EC8E;
    case RC_ADDR(0x0000ec94u): goto L_EC94;
    case RC_ADDR(0x0000ec98u): goto L_EC98;
    case RC_ADDR(0x0000ec9au): goto L_EC9A;
    case RC_ADDR(0x0000ec9cu): goto L_EC9C;
    case RC_ADDR(0x0000eca0u): goto L_ECA0;
    case RC_ADDR(0x0000eca4u): goto L_ECA4;
    case RC_ADDR(0x0000eca6u): goto L_ECA6;
    case RC_ADDR(0x0000eca8u): goto L_ECA8;
    case RC_ADDR(0x0000ecaau): goto L_ECAA;
    case RC_ADDR(0x0000ecaeu): goto L_ECAE;
    case RC_ADDR(0x0000ecb2u): goto L_ECB2;
    case RC_ADDR(0x0000ecb4u): goto L_ECB4;
    case RC_ADDR(0x0000ecb8u): goto L_ECB8;
    case RC_ADDR(0x0000ecbau): goto L_ECBA;
    case RC_ADDR(0x0000ecc0u): goto L_ECC0;
    case RC_ADDR(0x0000ecc4u): goto L_ECC4;
    case RC_ADDR(0x0000ecc8u): goto L_ECC8;
    case RC_ADDR(0x0000eccau): goto L_ECCA;
    case RC_ADDR(0x0000ecd0u): goto L_ECD0;
    case RC_ADDR(0x0000ecd4u): goto L_ECD4;
    case RC_ADDR(0x0000ecd8u): goto L_ECD8;
    case RC_ADDR(0x0000ecdau): goto L_ECDA;
    case RC_ADDR(0x0000ecdeu): goto L_ECDE;
    case RC_ADDR(0x0000ece2u): goto L_ECE2;
    case RC_ADDR(0x0000ece4u): goto L_ECE4;
    case RC_ADDR(0x0000ece8u): goto L_ECE8;
    case RC_ADDR(0x0000eceau): goto L_ECEA;
    case RC_ADDR(0x0000eceeu): goto L_ECEE;
    case RC_ADDR(0x0000ecf2u): goto L_ECF2;
    case RC_ADDR(0x0000ecf4u): goto L_ECF4;
    case RC_ADDR(0x0000ecf8u): goto L_ECF8;
    case RC_ADDR(0x0000ecfau): goto L_ECFA;
    case RC_ADDR(0x0000ecfcu): goto L_ECFC;
    case RC_ADDR(0x0000ed00u): goto L_ED00;
    case RC_ADDR(0x0000ed04u): goto L_ED04;
    case RC_ADDR(0x0000ed06u): goto L_ED06;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_EC2E:
    /* 0000ec2e   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x0000ec2eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_EC32:
    /* 0000ec32   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000ec32u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EC36:
    /* 0000ec36   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ec36u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_EC38:
    /* 0000ec38   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ec38u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EC3A:
    /* 0000ec3a   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x0000ec3au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_EC3E:
    /* 0000ec3e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000ec3eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EC42:
    /* 0000ec42   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000ec42u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_EC44:
    /* 0000ec44   4  move.w D1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000ec44u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EC48:
    /* 0000ec48   4  clr.l (fffffffa,A5) */
    c->pc = RC_ADDR(0x0000ec48u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_EC4C:
    /* 0000ec4c   4  move.l (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0000ec4cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EC50:
    /* 0000ec50   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ec50u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EC52:
    /* 0000ec52   4  lea (ffff9b24,A4),A0 */
    c->pc = RC_ADDR(0x0000ec52u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x64dcu);

L_EC56:
    /* 0000ec56   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ec56u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_EC5A:
    /* 0000ec5a   4  beq 0000ed04 */
    c->pc = RC_ADDR(0x0000ec5au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_ED04;

L_EC5E:
    /* 0000ec5e   4  move.l (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0000ec5eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_EC62:
    /* 0000ec62   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ec62u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_EC64:
    /* 0000ec64   4  lea (ffff9b24,A4),A0 */
    c->pc = RC_ADDR(0x0000ec64u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x64dcu);

L_EC68:
    /* 0000ec68   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000ec68u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EC6C:
    /* 0000ec6c   4  cmp.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0000ec6cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_EC70:
    /* 0000ec70   4  bne 0000ecfc */
    c->pc = RC_ADDR(0x0000ec70u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_ECFC;

L_EC74:
    /* 0000ec74   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ec74u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_EC78:
    /* 0000ec78   4  move.w (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ec78u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_EC7C:
    /* 0000ec7c   4  jsr (0000ed08) */
    c->pc = RC_ADDR(0x0000ec7cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ec80u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ed08u);
    return;

L_EC80:
    /* 0000ec80   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000ec80u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_EC82:
    /* 0000ec82   4  subq.w #1,(8,A5) */
    c->pc = RC_ADDR(0x0000ec82u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_EC86:
    /* 0000ec86   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ec86u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_EC8A:
    /* 0000ec8a   2  bsr 0000ec2e */
    c->pc = RC_ADDR(0x0000ec8au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ec8cu));
    rc_depth++;
    goto L_EC2E;

L_EC8C:
    /* 0000ec8c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000ec8cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_EC8E:
    /* 0000ec8e   6  addi.w #27,(8,A5) */
    c->pc = RC_ADDR(0x0000ec8eu);
    rc_step(c, m, 20);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000027u;
    rc_flags_add(c, RC_W, t1, 0x00000027u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_EC94:
    /* 0000ec94   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ec94u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_EC98:
    /* 0000ec98   2  bsr 0000ec2e */
    c->pc = RC_ADDR(0x0000ec98u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ec9au));
    rc_depth++;
    goto L_EC2E;

L_EC9A:
    /* 0000ec9a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000ec9au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_EC9C:
    /* 0000ec9c   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000ec9cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ECA0:
    /* 0000eca0   4  addq.w #1,(8,A5) */
    c->pc = RC_ADDR(0x0000eca0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_ECA4:
    /* 0000eca4   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000eca4u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ECA6:
    /* 0000eca6   2  bsr 0000ec2e */
    c->pc = RC_ADDR(0x0000eca6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000eca8u));
    rc_depth++;
    goto L_EC2E;

L_ECA8:
    /* 0000eca8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000eca8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_ECAA:
    /* 0000ecaa   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000ecaau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ECAE:
    /* 0000ecae   4  addq.w #1,(8,A5) */
    c->pc = RC_ADDR(0x0000ecaeu);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_ECB2:
    /* 0000ecb2   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000ecb2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ECB4:
    /* 0000ecb4   4  jsr (0000ec2e) */
    c->pc = RC_ADDR(0x0000ecb4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ecb8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ec2eu);
    return;

L_ECB8:
    /* 0000ecb8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000ecb8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_ECBA:
    /* 0000ecba   6  subi.w #27,(8,A5) */
    c->pc = RC_ADDR(0x0000ecbau);
    rc_step(c, m, 20);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000027u;
    rc_flags_sub(c, RC_W, t1, 0x00000027u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_ECC0:
    /* 0000ecc0   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ecc0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ECC4:
    /* 0000ecc4   4  jsr (0000ec2e) */
    c->pc = RC_ADDR(0x0000ecc4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ecc8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ec2eu);
    return;

L_ECC8:
    /* 0000ecc8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000ecc8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_ECCA:
    /* 0000ecca   6  subi.w #27,(8,A5) */
    c->pc = RC_ADDR(0x0000eccau);
    rc_step(c, m, 20);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000027u;
    rc_flags_sub(c, RC_W, t1, 0x00000027u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_ECD0:
    /* 0000ecd0   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000ecd0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ECD4:
    /* 0000ecd4   4  jsr (0000ec2e) */
    c->pc = RC_ADDR(0x0000ecd4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ecd8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ec2eu);
    return;

L_ECD8:
    /* 0000ecd8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000ecd8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_ECDA:
    /* 0000ecda   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000ecdau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ECDE:
    /* 0000ecde   4  subq.w #1,(8,A5) */
    c->pc = RC_ADDR(0x0000ecdeu);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_ECE2:
    /* 0000ece2   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000ece2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ECE4:
    /* 0000ece4   4  jsr (0000ec2e) */
    c->pc = RC_ADDR(0x0000ece4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ece8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ec2eu);
    return;

L_ECE8:
    /* 0000ece8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000ece8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_ECEA:
    /* 0000ecea   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000eceau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ECEE:
    /* 0000ecee   4  subq.w #1,(8,A5) */
    c->pc = RC_ADDR(0x0000eceeu);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_ECF2:
    /* 0000ecf2   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000ecf2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_ECF4:
    /* 0000ecf4   4  jsr (0000ec2e) */
    c->pc = RC_ADDR(0x0000ecf4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ecf8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ec2eu);
    return;

L_ECF8:
    /* 0000ecf8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000ecf8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_ECFA:
    /* 0000ecfa   2  bra 0000ed04 */
    c->pc = RC_ADDR(0x0000ecfau);
    rc_step(c, m, 10);
    goto L_ED04;

L_ECFC:
    /* 0000ecfc   4  addq.l #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000ecfcu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_ED00:
    /* 0000ed00   4  bra 0000ec4c */
    c->pc = RC_ADDR(0x0000ed00u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_EC4C;

L_ED04:
    /* 0000ed04   2  unlk A5 */
    c->pc = RC_ADDR(0x0000ed04u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_ED06:
    /* 0000ed06   2  rts */
    c->pc = RC_ADDR(0x0000ed06u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
