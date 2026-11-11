/* fn_00002b7c - 278 byte(s), 76 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00002b7c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00002b7cu): goto L_2B7C;
    case RC_ADDR(0x00002b80u): goto L_2B80;
    case RC_ADDR(0x00002b84u): goto L_2B84;
    case RC_ADDR(0x00002b88u): goto L_2B88;
    case RC_ADDR(0x00002b8eu): goto L_2B8E;
    case RC_ADDR(0x00002b92u): goto L_2B92;
    case RC_ADDR(0x00002b96u): goto L_2B96;
    case RC_ADDR(0x00002b9au): goto L_2B9A;
    case RC_ADDR(0x00002b9eu): goto L_2B9E;
    case RC_ADDR(0x00002ba0u): goto L_2BA0;
    case RC_ADDR(0x00002ba4u): goto L_2BA4;
    case RC_ADDR(0x00002ba8u): goto L_2BA8;
    case RC_ADDR(0x00002bacu): goto L_2BAC;
    case RC_ADDR(0x00002bb0u): goto L_2BB0;
    case RC_ADDR(0x00002bb4u): goto L_2BB4;
    case RC_ADDR(0x00002bbau): goto L_2BBA;
    case RC_ADDR(0x00002bbeu): goto L_2BBE;
    case RC_ADDR(0x00002bc2u): goto L_2BC2;
    case RC_ADDR(0x00002bc6u): goto L_2BC6;
    case RC_ADDR(0x00002bc8u): goto L_2BC8;
    case RC_ADDR(0x00002bccu): goto L_2BCC;
    case RC_ADDR(0x00002bd2u): goto L_2BD2;
    case RC_ADDR(0x00002bd4u): goto L_2BD4;
    case RC_ADDR(0x00002bdau): goto L_2BDA;
    case RC_ADDR(0x00002bdeu): goto L_2BDE;
    case RC_ADDR(0x00002be2u): goto L_2BE2;
    case RC_ADDR(0x00002be4u): goto L_2BE4;
    case RC_ADDR(0x00002be8u): goto L_2BE8;
    case RC_ADDR(0x00002beau): goto L_2BEA;
    case RC_ADDR(0x00002beeu): goto L_2BEE;
    case RC_ADDR(0x00002bf0u): goto L_2BF0;
    case RC_ADDR(0x00002bf4u): goto L_2BF4;
    case RC_ADDR(0x00002bf8u): goto L_2BF8;
    case RC_ADDR(0x00002bfeu): goto L_2BFE;
    case RC_ADDR(0x00002c00u): goto L_2C00;
    case RC_ADDR(0x00002c02u): goto L_2C02;
    case RC_ADDR(0x00002c04u): goto L_2C04;
    case RC_ADDR(0x00002c08u): goto L_2C08;
    case RC_ADDR(0x00002c0cu): goto L_2C0C;
    case RC_ADDR(0x00002c10u): goto L_2C10;
    case RC_ADDR(0x00002c14u): goto L_2C14;
    case RC_ADDR(0x00002c18u): goto L_2C18;
    case RC_ADDR(0x00002c1cu): goto L_2C1C;
    case RC_ADDR(0x00002c20u): goto L_2C20;
    case RC_ADDR(0x00002c22u): goto L_2C22;
    case RC_ADDR(0x00002c28u): goto L_2C28;
    case RC_ADDR(0x00002c2au): goto L_2C2A;
    case RC_ADDR(0x00002c2eu): goto L_2C2E;
    case RC_ADDR(0x00002c32u): goto L_2C32;
    case RC_ADDR(0x00002c36u): goto L_2C36;
    case RC_ADDR(0x00002c38u): goto L_2C38;
    case RC_ADDR(0x00002c3cu): goto L_2C3C;
    case RC_ADDR(0x00002c40u): goto L_2C40;
    case RC_ADDR(0x00002c42u): goto L_2C42;
    case RC_ADDR(0x00002c44u): goto L_2C44;
    case RC_ADDR(0x00002c48u): goto L_2C48;
    case RC_ADDR(0x00002c4cu): goto L_2C4C;
    case RC_ADDR(0x00002c50u): goto L_2C50;
    case RC_ADDR(0x00002c52u): goto L_2C52;
    case RC_ADDR(0x00002c56u): goto L_2C56;
    case RC_ADDR(0x00002c5cu): goto L_2C5C;
    case RC_ADDR(0x00002c5eu): goto L_2C5E;
    case RC_ADDR(0x00002c62u): goto L_2C62;
    case RC_ADDR(0x00002c66u): goto L_2C66;
    case RC_ADDR(0x00002c68u): goto L_2C68;
    case RC_ADDR(0x00002c6cu): goto L_2C6C;
    case RC_ADDR(0x00002c72u): goto L_2C72;
    case RC_ADDR(0x00002c74u): goto L_2C74;
    case RC_ADDR(0x00002c7au): goto L_2C7A;
    case RC_ADDR(0x00002c7eu): goto L_2C7E;
    case RC_ADDR(0x00002c82u): goto L_2C82;
    case RC_ADDR(0x00002c86u): goto L_2C86;
    case RC_ADDR(0x00002c88u): goto L_2C88;
    case RC_ADDR(0x00002c8au): goto L_2C8A;
    case RC_ADDR(0x00002c8cu): goto L_2C8C;
    case RC_ADDR(0x00002c90u): goto L_2C90;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2B7C:
    /* 00002b7c   4  link.w A5,#fffffff4 */
    c->pc = RC_ADDR(0x00002b7cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xcu;

L_2B80:
    /* 00002b80   4  clr.w (ffff83d6,A4) */
    c->pc = RC_ADDR(0x00002b80u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c2au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2B84:
    /* 00002b84   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00002b84u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2B88:
    /* 00002b88   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00002b88u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B8E:
    /* 00002b8e   4  jsr (0000334a) */
    c->pc = RC_ADDR(0x00002b8eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002b92u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000334au);
    return;

L_2B92:
    /* 00002b92   4  move.w #ffff,-(A7) */
    c->pc = RC_ADDR(0x00002b92u);
    rc_step(c, m, 12);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2B96:
    /* 00002b96   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00002b96u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2B9A:
    /* 00002b9a   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x00002b9au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002b9eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_2B9E:
    /* 00002b9e   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002b9eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2BA0:
    /* 00002ba0   4  move.w (ffffefe4,A4),D0 */
    c->pc = RC_ADDR(0x00002ba0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2BA4:
    /* 00002ba4   4  sub.w #22,D0 */
    c->pc = RC_ADDR(0x00002ba4u);
    rc_step(c, m, 10);
    t0 = 0x00000022u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2BA8:
    /* 00002ba8   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00002ba8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2BAC:
    /* 00002bac   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00002bacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_2BB0:
    /* 00002bb0   4  beq 00002c90 */
    c->pc = RC_ADDR(0x00002bb0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2C90;

L_2BB4:
    /* 00002bb4   6  move.w (ffffce3e,A4),(fffffff4,A5) */
    c->pc = RC_ADDR(0x00002bb4u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c2u));
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2BBA:
    /* 00002bba   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00002bbau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2BBE:
    /* 00002bbe   4  add.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002bbeu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_2BC2:
    /* 00002bc2   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00002bc2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_2BC6:
    /* 00002bc6   2  bge 00002bcc */
    c->pc = RC_ADDR(0x00002bc6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_2BCC;

L_2BC8:
    /* 00002bc8   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00002bc8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2BCC:
    /* 00002bcc   6  cmpi.w #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002bccu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_2BD2:
    /* 00002bd2   2  ble 00002bda */
    c->pc = RC_ADDR(0x00002bd2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_2BDA;

L_2BD4:
    /* 00002bd4   6  move.w #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002bd4u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2BDA:
    /* 00002bda   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00002bdau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2BDE:
    /* 00002bde   4  cmp.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00002bdeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2BE2:
    /* 00002be2   2  bne 00002bf8 */
    c->pc = RC_ADDR(0x00002be2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2BF8;

L_2BE4:
    /* 00002be4   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00002be4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_2BE8:
    /* 00002be8   2  bne 00002bf0 */
    c->pc = RC_ADDR(0x00002be8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2BF0;

L_2BEA:
    /* 00002bea   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002beau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2BEE:
    /* 00002bee   2  bra 00002bf8 */
    c->pc = RC_ADDR(0x00002beeu);
    rc_step(c, m, 10);
    goto L_2BF8;

L_2BF0:
    /* 00002bf0   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00002bf0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2BF4:
    /* 00002bf4   4  add.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002bf4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_2BF8:
    /* 00002bf8   6  move.w #96,(fffff272,A4) */
    c->pc = RC_ADDR(0x00002bf8u);
    rc_step(c, m, 16);
    t0 = 0x00000096u;
    rc_wr16(c, m, (c->a[4] - 0xd8eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2BFE:
    /* 00002bfe   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00002bfeu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2C00:
    /* 00002c00   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00002c00u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2C02:
    /* 00002c02   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00002c02u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2C04:
    /* 00002c04   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00002c04u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_2C08:
    /* 00002c08   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00002c08u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2C0C:
    /* 00002c0c   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x00002c0cu);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x00002c10u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cceu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_2C10:
    /* 00002c10   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00002c10u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_2C14:
    /* 00002c14   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00002c14u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2C18:
    /* 00002c18   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00002c18u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C1C:
    /* 00002c1c   4  cmp.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00002c1cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2C20:
    /* 00002c20   2  bne 00002c2a */
    c->pc = RC_ADDR(0x00002c20u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2C2A;

L_2C22:
    /* 00002c22   6  move.w #8,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00002c22u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C28:
    /* 00002c28   2  bra 00002c2e */
    c->pc = RC_ADDR(0x00002c28u);
    rc_step(c, m, 10);
    goto L_2C2E;

L_2C2A:
    /* 00002c2a   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00002c2au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2C2E:
    /* 00002c2e   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00002c2eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C32:
    /* 00002c32   4  cmp.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00002c32u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2C36:
    /* 00002c36   2  beq 00002c52 */
    c->pc = RC_ADDR(0x00002c36u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2C52;

L_2C38:
    /* 00002c38   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00002c38u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C3C:
    /* 00002c3c   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00002c3cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C40:
    /* 00002c40   2  ext.l D0 */
    c->pc = RC_ADDR(0x00002c40u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2C42:
    /* 00002c42   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00002c42u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_2C44:
    /* 00002c44   4  lea (ffff851e,A4),A0 */
    c->pc = RC_ADDR(0x00002c44u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7ae2u);

L_2C48:
    /* 00002c48   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00002c48u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2C4C:
    /* 00002c4c   4  jsr (00004f0a) */
    c->pc = RC_ADDR(0x00002c4cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002c50u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004f0au);
    return;

L_2C50:
    /* 00002c50   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00002c50u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_2C52:
    /* 00002c52   4  addq.w #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00002c52u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2C56:
    /* 00002c56   6  cmpi.w #5,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00002c56u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_2C5C:
    /* 00002c5c   2  blt 00002c18 */
    c->pc = RC_ADDR(0x00002c5cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_2C18; }

L_2C5E:
    /* 00002c5e   4  jsr (ffff81ee,A4) */
    c->pc = RC_ADDR(0x00002c5eu);
    rc_step(c, m, 18);
    /* vector 82 */
    rc_push32(c, m, RC_ADDR(0x00002c62u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c44u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d1dau);
    return;

L_2C62:
    /* 00002c62   4  tst.w (ffffce40,A4) */
    c->pc = RC_ADDR(0x00002c62u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_2C66:
    /* 00002c66   2  beq 00002c8c */
    c->pc = RC_ADDR(0x00002c66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2C8C;

L_2C68:
    /* 00002c68   4  jsr (0000334a) */
    c->pc = RC_ADDR(0x00002c68u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002c6cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000334au);
    return;

L_2C6C:
    /* 00002c6c   6  cmpi.w #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00002c6cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_2C72:
    /* 00002c72   2  beq 00002c86 */
    c->pc = RC_ADDR(0x00002c72u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2C86;

L_2C74:
    /* 00002c74   6  move.w #1,(ffff83d6,A4) */
    c->pc = RC_ADDR(0x00002c74u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C7A:
    /* 00002c7a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00002c7au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C7E:
    /* 00002c7e   4  add.w #22,D0 */
    c->pc = RC_ADDR(0x00002c7eu);
    rc_step(c, m, 10);
    t0 = 0x00000022u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2C82:
    /* 00002c82   4  move.w D0,(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00002c82u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x101cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2C86:
    /* 00002c86   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00002c86u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2C88:
    /* 00002c88   2  unlk A5 */
    c->pc = RC_ADDR(0x00002c88u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2C8A:
    /* 00002c8a   2  rts */
    c->pc = RC_ADDR(0x00002c8au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_2C8C:
    /* 00002c8c   4  bra 00002bac */
    c->pc = RC_ADDR(0x00002c8cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2BAC;

L_2C90:
    /* 00002c90   2  bra 00002c88 */
    c->pc = RC_ADDR(0x00002c90u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2C88;

}
