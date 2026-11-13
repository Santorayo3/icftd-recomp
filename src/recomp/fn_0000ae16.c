/* fn_0000ae16 - 392 byte(s), 121 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000ae16(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ae16u): goto L_AE16;
    case RC_ADDR(0x0000ae1au): goto L_AE1A;
    case RC_ADDR(0x0000ae1cu): goto L_AE1C;
    case RC_ADDR(0x0000ae20u): goto L_AE20;
    case RC_ADDR(0x0000ae22u): goto L_AE22;
    case RC_ADDR(0x0000ae24u): goto L_AE24;
    case RC_ADDR(0x0000ae28u): goto L_AE28;
    case RC_ADDR(0x0000ae2cu): goto L_AE2C;
    case RC_ADDR(0x0000ae30u): goto L_AE30;
    case RC_ADDR(0x0000ae34u): goto L_AE34;
    case RC_ADDR(0x0000ae38u): goto L_AE38;
    case RC_ADDR(0x0000ae3cu): goto L_AE3C;
    case RC_ADDR(0x0000ae40u): goto L_AE40;
    case RC_ADDR(0x0000ae42u): goto L_AE42;
    case RC_ADDR(0x0000ae46u): goto L_AE46;
    case RC_ADDR(0x0000ae48u): goto L_AE48;
    case RC_ADDR(0x0000ae4au): goto L_AE4A;
    case RC_ADDR(0x0000ae4eu): goto L_AE4E;
    case RC_ADDR(0x0000ae52u): goto L_AE52;
    case RC_ADDR(0x0000ae56u): goto L_AE56;
    case RC_ADDR(0x0000ae5au): goto L_AE5A;
    case RC_ADDR(0x0000ae5eu): goto L_AE5E;
    case RC_ADDR(0x0000ae62u): goto L_AE62;
    case RC_ADDR(0x0000ae66u): goto L_AE66;
    case RC_ADDR(0x0000ae6au): goto L_AE6A;
    case RC_ADDR(0x0000ae6cu): goto L_AE6C;
    case RC_ADDR(0x0000ae6eu): goto L_AE6E;
    case RC_ADDR(0x0000ae72u): goto L_AE72;
    case RC_ADDR(0x0000ae76u): goto L_AE76;
    case RC_ADDR(0x0000ae7au): goto L_AE7A;
    case RC_ADDR(0x0000ae7eu): goto L_AE7E;
    case RC_ADDR(0x0000ae80u): goto L_AE80;
    case RC_ADDR(0x0000ae82u): goto L_AE82;
    case RC_ADDR(0x0000ae86u): goto L_AE86;
    case RC_ADDR(0x0000ae8au): goto L_AE8A;
    case RC_ADDR(0x0000ae8eu): goto L_AE8E;
    case RC_ADDR(0x0000ae92u): goto L_AE92;
    case RC_ADDR(0x0000ae94u): goto L_AE94;
    case RC_ADDR(0x0000ae98u): goto L_AE98;
    case RC_ADDR(0x0000ae9au): goto L_AE9A;
    case RC_ADDR(0x0000ae9cu): goto L_AE9C;
    case RC_ADDR(0x0000aea0u): goto L_AEA0;
    case RC_ADDR(0x0000aea2u): goto L_AEA2;
    case RC_ADDR(0x0000aea4u): goto L_AEA4;
    case RC_ADDR(0x0000aeaau): goto L_AEAA;
    case RC_ADDR(0x0000aeacu): goto L_AEAC;
    case RC_ADDR(0x0000aeb2u): goto L_AEB2;
    case RC_ADDR(0x0000aeb4u): goto L_AEB4;
    case RC_ADDR(0x0000aeb8u): goto L_AEB8;
    case RC_ADDR(0x0000aebau): goto L_AEBA;
    case RC_ADDR(0x0000aebeu): goto L_AEBE;
    case RC_ADDR(0x0000aec2u): goto L_AEC2;
    case RC_ADDR(0x0000aec6u): goto L_AEC6;
    case RC_ADDR(0x0000aec8u): goto L_AEC8;
    case RC_ADDR(0x0000aeceu): goto L_AECE;
    case RC_ADDR(0x0000aed0u): goto L_AED0;
    case RC_ADDR(0x0000aed4u): goto L_AED4;
    case RC_ADDR(0x0000aed6u): goto L_AED6;
    case RC_ADDR(0x0000aedau): goto L_AEDA;
    case RC_ADDR(0x0000aedeu): goto L_AEDE;
    case RC_ADDR(0x0000aee2u): goto L_AEE2;
    case RC_ADDR(0x0000aee4u): goto L_AEE4;
    case RC_ADDR(0x0000aee6u): goto L_AEE6;
    case RC_ADDR(0x0000aee8u): goto L_AEE8;
    case RC_ADDR(0x0000aeeau): goto L_AEEA;
    case RC_ADDR(0x0000aeecu): goto L_AEEC;
    case RC_ADDR(0x0000aefcu): goto L_AEFC;
    case RC_ADDR(0x0000af02u): goto L_AF02;
    case RC_ADDR(0x0000af04u): goto L_AF04;
    case RC_ADDR(0x0000af06u): goto L_AF06;
    case RC_ADDR(0x0000af0au): goto L_AF0A;
    case RC_ADDR(0x0000af0eu): goto L_AF0E;
    case RC_ADDR(0x0000af12u): goto L_AF12;
    case RC_ADDR(0x0000af14u): goto L_AF14;
    case RC_ADDR(0x0000af16u): goto L_AF16;
    case RC_ADDR(0x0000af1au): goto L_AF1A;
    case RC_ADDR(0x0000af1eu): goto L_AF1E;
    case RC_ADDR(0x0000af22u): goto L_AF22;
    case RC_ADDR(0x0000af26u): goto L_AF26;
    case RC_ADDR(0x0000af28u): goto L_AF28;
    case RC_ADDR(0x0000af2au): goto L_AF2A;
    case RC_ADDR(0x0000af2eu): goto L_AF2E;
    case RC_ADDR(0x0000af32u): goto L_AF32;
    case RC_ADDR(0x0000af36u): goto L_AF36;
    case RC_ADDR(0x0000af3au): goto L_AF3A;
    case RC_ADDR(0x0000af3cu): goto L_AF3C;
    case RC_ADDR(0x0000af40u): goto L_AF40;
    case RC_ADDR(0x0000af42u): goto L_AF42;
    case RC_ADDR(0x0000af44u): goto L_AF44;
    case RC_ADDR(0x0000af48u): goto L_AF48;
    case RC_ADDR(0x0000af4au): goto L_AF4A;
    case RC_ADDR(0x0000af4cu): goto L_AF4C;
    case RC_ADDR(0x0000af52u): goto L_AF52;
    case RC_ADDR(0x0000af54u): goto L_AF54;
    case RC_ADDR(0x0000af5au): goto L_AF5A;
    case RC_ADDR(0x0000af5cu): goto L_AF5C;
    case RC_ADDR(0x0000af60u): goto L_AF60;
    case RC_ADDR(0x0000af62u): goto L_AF62;
    case RC_ADDR(0x0000af66u): goto L_AF66;
    case RC_ADDR(0x0000af6au): goto L_AF6A;
    case RC_ADDR(0x0000af6eu): goto L_AF6E;
    case RC_ADDR(0x0000af70u): goto L_AF70;
    case RC_ADDR(0x0000af76u): goto L_AF76;
    case RC_ADDR(0x0000af78u): goto L_AF78;
    case RC_ADDR(0x0000af7cu): goto L_AF7C;
    case RC_ADDR(0x0000af7eu): goto L_AF7E;
    case RC_ADDR(0x0000af82u): goto L_AF82;
    case RC_ADDR(0x0000af86u): goto L_AF86;
    case RC_ADDR(0x0000af8au): goto L_AF8A;
    case RC_ADDR(0x0000af8cu): goto L_AF8C;
    case RC_ADDR(0x0000af8eu): goto L_AF8E;
    case RC_ADDR(0x0000af90u): goto L_AF90;
    case RC_ADDR(0x0000af92u): goto L_AF92;
    case RC_ADDR(0x0000af94u): goto L_AF94;
    case RC_ADDR(0x0000afa4u): goto L_AFA4;
    case RC_ADDR(0x0000afaau): goto L_AFAA;
    case RC_ADDR(0x0000afacu): goto L_AFAC;
    case RC_ADDR(0x0000afaeu): goto L_AFAE;
    case RC_ADDR(0x0000afb2u): goto L_AFB2;
    case RC_ADDR(0x0000afb6u): goto L_AFB6;
    case RC_ADDR(0x0000afb8u): goto L_AFB8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_AE16:
    /* 0000ae16   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0000ae16u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_AE1A:
    /* 0000ae1a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000ae1au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AE1C:
    /* 0000ae1c   4  move.w (3ce,A4),D0 */
    c->pc = RC_ADDR(0x0000ae1cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AE20:
    /* 0000ae20   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ae20u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AE22:
    /* 0000ae22   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000ae22u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_AE24:
    /* 0000ae24   4  lea (30a,A4),A0 */
    c->pc = RC_ADDR(0x0000ae24u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x30au);

L_AE28:
    /* 0000ae28   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000ae28u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE2C:
    /* 0000ae2c   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0000ae2cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_AE30:
    /* 0000ae30   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000ae30u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE34:
    /* 0000ae34   4  jsr (ffff822a,A4) */
    c->pc = RC_ADDR(0x0000ae34u);
    rc_step(c, m, 18);
    /* vector 92 */
    rc_push32(c, m, RC_ADDR(0x0000ae38u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001dd6eu);
    return;

L_AE38:
    /* 0000ae38   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000ae38u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_AE3C:
    /* 0000ae3c   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000ae3cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE40:
    /* 0000ae40   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000ae40u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AE42:
    /* 0000ae42   4  move.w (3d0,A4),D0 */
    c->pc = RC_ADDR(0x0000ae42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AE46:
    /* 0000ae46   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ae46u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AE48:
    /* 0000ae48   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000ae48u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_AE4A:
    /* 0000ae4a   4  lea (34a,A4),A0 */
    c->pc = RC_ADDR(0x0000ae4au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x34au);

L_AE4E:
    /* 0000ae4e   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000ae4eu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE52:
    /* 0000ae52   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0000ae52u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_AE56:
    /* 0000ae56   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000ae56u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE5A:
    /* 0000ae5a   4  jsr (ffff822a,A4) */
    c->pc = RC_ADDR(0x0000ae5au);
    rc_step(c, m, 18);
    /* vector 92 */
    rc_push32(c, m, RC_ADDR(0x0000ae5eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001dd6eu);
    return;

L_AE5E:
    /* 0000ae5e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000ae5eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_AE62:
    /* 0000ae62   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000ae62u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_AE66:
    /* 0000ae66   4  move.w (3d0,A4),D0 */
    c->pc = RC_ADDR(0x0000ae66u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AE6A:
    /* 0000ae6a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ae6au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AE6C:
    /* 0000ae6c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ae6cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_AE6E:
    /* 0000ae6e   4  lea (ffff9670,A4),A0 */
    c->pc = RC_ADDR(0x0000ae6eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6990u);

L_AE72:
    /* 0000ae72   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ae72u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_AE76:
    /* 0000ae76   4  beq 0000af0e */
    c->pc = RC_ADDR(0x0000ae76u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_AF0E;

L_AE7A:
    /* 0000ae7a   4  move.w (3d0,A4),D0 */
    c->pc = RC_ADDR(0x0000ae7au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AE7E:
    /* 0000ae7e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ae7eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AE80:
    /* 0000ae80   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ae80u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_AE82:
    /* 0000ae82   4  lea (ffff9670,A4),A0 */
    c->pc = RC_ADDR(0x0000ae82u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6990u);

L_AE86:
    /* 0000ae86   4  movea.l (fffffff8,A5),A1 */
    c->pc = RC_ADDR(0x0000ae86u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[1] = t0;

L_AE8A:
    /* 0000ae8a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000ae8au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AE8E:
    /* 0000ae8e   4  cmp.w (2a,A1),D1 */
    c->pc = RC_ADDR(0x0000ae8eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2au));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_AE92:
    /* 0000ae92   2  bne 0000af0e */
    c->pc = RC_ADDR(0x0000ae92u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AF0E;

L_AE94:
    /* 0000ae94   4  move.w (3ce,A4),D0 */
    c->pc = RC_ADDR(0x0000ae94u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AE98:
    /* 0000ae98   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ae98u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AE9A:
    /* 0000ae9a   2  bra 0000aefc */
    c->pc = RC_ADDR(0x0000ae9au);
    rc_step(c, m, 10);
    goto L_AEFC;

L_AE9C:
    /* 0000ae9c   4  move.w (3d0,A4),D0 */
    c->pc = RC_ADDR(0x0000ae9cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AEA0:
    /* 0000aea0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000aea0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AEA2:
    /* 0000aea2   2  bra 0000aee4 */
    c->pc = RC_ADDR(0x0000aea2u);
    rc_step(c, m, 10);
    goto L_AEE4;

L_AEA4:
    /* 0000aea4   6  cmpi.w #3,(3ce,A4) */
    c->pc = RC_ADDR(0x0000aea4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_AEAA:
    /* 0000aeaa   2  beq 0000aeb4 */
    c->pc = RC_ADDR(0x0000aeaau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_AEB4;

L_AEAC:
    /* 0000aeac   6  cmpi.w #1,(3ce,A4) */
    c->pc = RC_ADDR(0x0000aeacu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_AEB2:
    /* 0000aeb2   2  bne 0000aeba */
    c->pc = RC_ADDR(0x0000aeb2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AEBA;

L_AEB4:
    /* 0000aeb4   4  jsr (0000b2c4) */
    c->pc = RC_ADDR(0x0000aeb4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000aeb8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b2c4u);
    return;

L_AEB8:
    /* 0000aeb8   2  bra 0000aeec */
    c->pc = RC_ADDR(0x0000aeb8u);
    rc_step(c, m, 10);
    goto L_AEEC;

L_AEBA:
    /* 0000aeba   4  jsr (0000b27c) */
    c->pc = RC_ADDR(0x0000aebau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000aebeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b27cu);
    return;

L_AEBE:
    /* 0000aebe   4  jsr (0000afba) */
    c->pc = RC_ADDR(0x0000aebeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000aec2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000afbau);
    return;

L_AEC2:
    /* 0000aec2   4  addq.w #3,(3d8,A4) */
    c->pc = RC_ADDR(0x0000aec2u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x3d8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_AEC6:
    /* 0000aec6   2  bra 0000aeec */
    c->pc = RC_ADDR(0x0000aec6u);
    rc_step(c, m, 10);
    goto L_AEEC;

L_AEC8:
    /* 0000aec8   6  cmpi.w #2,(3ce,A4) */
    c->pc = RC_ADDR(0x0000aec8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_AECE:
    /* 0000aece   2  bne 0000aed6 */
    c->pc = RC_ADDR(0x0000aeceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AED6;

L_AED0:
    /* 0000aed0   4  jsr (0000b2c4) */
    c->pc = RC_ADDR(0x0000aed0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000aed4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b2c4u);
    return;

L_AED4:
    /* 0000aed4   2  bra 0000aeec */
    c->pc = RC_ADDR(0x0000aed4u);
    rc_step(c, m, 10);
    goto L_AEEC;

L_AED6:
    /* 0000aed6   4  jsr (0000b234) */
    c->pc = RC_ADDR(0x0000aed6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000aedau));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b234u);
    return;

L_AEDA:
    /* 0000aeda   4  jsr (0000afba) */
    c->pc = RC_ADDR(0x0000aedau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000aedeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000afbau);
    return;

L_AEDE:
    /* 0000aede   4  addq.w #1,(3d8,A4) */
    c->pc = RC_ADDR(0x0000aedeu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x3d8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_AEE2:
    /* 0000aee2   2  bra 0000aeec */
    c->pc = RC_ADDR(0x0000aee2u);
    rc_step(c, m, 10);
    goto L_AEEC;

L_AEE4:
    /* 0000aee4   2  subq.l #4,D0 */
    c->pc = RC_ADDR(0x0000aee4u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_AEE6:
    /* 0000aee6   2  beq 0000aea4 */
    c->pc = RC_ADDR(0x0000aee6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_AEA4; }

L_AEE8:
    /* 0000aee8   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000aee8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_AEEA:
    /* 0000aeea   2  beq 0000aec8 */
    c->pc = RC_ADDR(0x0000aeeau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_AEC8; }

L_AEEC:
    /* 0000aeec   2  bra 0000af0e */
    c->pc = RC_ADDR(0x0000aeecu);
    rc_step(c, m, 10);
    goto L_AF0E;

L_AEFC:
    /* 0000aefc   6  cmp.l #7,D0 */
    c->pc = RC_ADDR(0x0000aefcu);
    rc_step(c, m, 14);
    t0 = 0x00000007u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_AF02:
    /* 0000af02   2  bcc 0000af0e */
    c->pc = RC_ADDR(0x0000af02u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_AF0E;

L_AF04:
    /* 0000af04   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000af04u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_AF06:
    /* 0000af06   4  move.w (0000aeee),D0 */
    c->pc = RC_ADDR(0x0000af06u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0000aeeeu) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AF0A:
    /* 0000af0a   4  jmp (0000af0c) */
    c->pc = RC_ADDR(0x0000af0au);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0000af0cu) + t4);
    c->pc = t3;
    return;

L_AF0E:
    /* 0000af0e   4  move.w (3ce,A4),D0 */
    c->pc = RC_ADDR(0x0000af0eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AF12:
    /* 0000af12   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000af12u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AF14:
    /* 0000af14   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000af14u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_AF16:
    /* 0000af16   4  lea (ffff9640,A4),A0 */
    c->pc = RC_ADDR(0x0000af16u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x69c0u);

L_AF1A:
    /* 0000af1a   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000af1au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_AF1E:
    /* 0000af1e   4  beq 0000afb6 */
    c->pc = RC_ADDR(0x0000af1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_AFB6;

L_AF22:
    /* 0000af22   4  move.w (3ce,A4),D0 */
    c->pc = RC_ADDR(0x0000af22u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AF26:
    /* 0000af26   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000af26u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AF28:
    /* 0000af28   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000af28u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_AF2A:
    /* 0000af2a   4  lea (ffff9640,A4),A0 */
    c->pc = RC_ADDR(0x0000af2au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x69c0u);

L_AF2E:
    /* 0000af2e   4  movea.l (fffffffc,A5),A1 */
    c->pc = RC_ADDR(0x0000af2eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[1] = t0;

L_AF32:
    /* 0000af32   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000af32u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AF36:
    /* 0000af36   4  cmp.w (2a,A1),D1 */
    c->pc = RC_ADDR(0x0000af36u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2au));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_AF3A:
    /* 0000af3a   2  bne 0000afb6 */
    c->pc = RC_ADDR(0x0000af3au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AFB6;

L_AF3C:
    /* 0000af3c   4  move.w (3d0,A4),D0 */
    c->pc = RC_ADDR(0x0000af3cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AF40:
    /* 0000af40   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000af40u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AF42:
    /* 0000af42   2  bra 0000afa4 */
    c->pc = RC_ADDR(0x0000af42u);
    rc_step(c, m, 10);
    goto L_AFA4;

L_AF44:
    /* 0000af44   4  move.w (3ce,A4),D0 */
    c->pc = RC_ADDR(0x0000af44u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AF48:
    /* 0000af48   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000af48u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_AF4A:
    /* 0000af4a   2  bra 0000af8c */
    c->pc = RC_ADDR(0x0000af4au);
    rc_step(c, m, 10);
    goto L_AF8C;

L_AF4C:
    /* 0000af4c   6  cmpi.w #3,(3d0,A4) */
    c->pc = RC_ADDR(0x0000af4cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_AF52:
    /* 0000af52   2  beq 0000af5c */
    c->pc = RC_ADDR(0x0000af52u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_AF5C;

L_AF54:
    /* 0000af54   6  cmpi.w #1,(3d0,A4) */
    c->pc = RC_ADDR(0x0000af54u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_AF5A:
    /* 0000af5a   2  bne 0000af62 */
    c->pc = RC_ADDR(0x0000af5au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AF62;

L_AF5C:
    /* 0000af5c   4  jsr (0000b2e8) */
    c->pc = RC_ADDR(0x0000af5cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000af60u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b2e8u);
    return;

L_AF60:
    /* 0000af60   2  bra 0000af94 */
    c->pc = RC_ADDR(0x0000af60u);
    rc_step(c, m, 10);
    goto L_AF94;

L_AF62:
    /* 0000af62   4  jsr (0000b2a0) */
    c->pc = RC_ADDR(0x0000af62u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000af66u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b2a0u);
    return;

L_AF66:
    /* 0000af66   4  jsr (0000b048) */
    c->pc = RC_ADDR(0x0000af66u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000af6au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b048u);
    return;

L_AF6A:
    /* 0000af6a   4  addq.w #3,(3da,A4) */
    c->pc = RC_ADDR(0x0000af6au);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x3dau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_AF6E:
    /* 0000af6e   2  bra 0000af94 */
    c->pc = RC_ADDR(0x0000af6eu);
    rc_step(c, m, 10);
    goto L_AF94;

L_AF70:
    /* 0000af70   6  cmpi.w #2,(3d0,A4) */
    c->pc = RC_ADDR(0x0000af70u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_AF76:
    /* 0000af76   2  bne 0000af7e */
    c->pc = RC_ADDR(0x0000af76u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_AF7E;

L_AF78:
    /* 0000af78   4  jsr (0000b2e8) */
    c->pc = RC_ADDR(0x0000af78u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000af7cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b2e8u);
    return;

L_AF7C:
    /* 0000af7c   2  bra 0000af94 */
    c->pc = RC_ADDR(0x0000af7cu);
    rc_step(c, m, 10);
    goto L_AF94;

L_AF7E:
    /* 0000af7e   4  jsr (0000b258) */
    c->pc = RC_ADDR(0x0000af7eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000af82u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b258u);
    return;

L_AF82:
    /* 0000af82   4  jsr (0000b048) */
    c->pc = RC_ADDR(0x0000af82u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000af86u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b048u);
    return;

L_AF86:
    /* 0000af86   4  addq.w #1,(3da,A4) */
    c->pc = RC_ADDR(0x0000af86u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x3dau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_AF8A:
    /* 0000af8a   2  bra 0000af94 */
    c->pc = RC_ADDR(0x0000af8au);
    rc_step(c, m, 10);
    goto L_AF94;

L_AF8C:
    /* 0000af8c   2  subq.l #4,D0 */
    c->pc = RC_ADDR(0x0000af8cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_AF8E:
    /* 0000af8e   2  beq 0000af4c */
    c->pc = RC_ADDR(0x0000af8eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_AF4C; }

L_AF90:
    /* 0000af90   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000af90u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_AF92:
    /* 0000af92   2  beq 0000af70 */
    c->pc = RC_ADDR(0x0000af92u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_AF70; }

L_AF94:
    /* 0000af94   2  bra 0000afb6 */
    c->pc = RC_ADDR(0x0000af94u);
    rc_step(c, m, 10);
    goto L_AFB6;

L_AFA4:
    /* 0000afa4   6  cmp.l #7,D0 */
    c->pc = RC_ADDR(0x0000afa4u);
    rc_step(c, m, 14);
    t0 = 0x00000007u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_AFAA:
    /* 0000afaa   2  bcc 0000afb6 */
    c->pc = RC_ADDR(0x0000afaau);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_AFB6;

L_AFAC:
    /* 0000afac   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000afacu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_AFAE:
    /* 0000afae   4  move.w (0000af96),D0 */
    c->pc = RC_ADDR(0x0000afaeu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0000af96u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AFB2:
    /* 0000afb2   4  jmp (0000afb4) */
    c->pc = RC_ADDR(0x0000afb2u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0000afb4u) + t4);
    c->pc = t3;
    return;

L_AFB6:
    /* 0000afb6   2  unlk A5 */
    c->pc = RC_ADDR(0x0000afb6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_AFB8:
    /* 0000afb8   2  rts */
    c->pc = RC_ADDR(0x0000afb8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
