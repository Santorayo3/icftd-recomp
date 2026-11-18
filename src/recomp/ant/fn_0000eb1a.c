/* fn_0000eb1a - 200 byte(s), 55 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000eb1a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000eb1au): goto L_EB1A;
    case RC_ADDR(0x0000eb1eu): goto L_EB1E;
    case RC_ADDR(0x0000eb22u): goto L_EB22;
    case RC_ADDR(0x0000eb24u): goto L_EB24;
    case RC_ADDR(0x0000eb28u): goto L_EB28;
    case RC_ADDR(0x0000eb2au): goto L_EB2A;
    case RC_ADDR(0x0000eb2eu): goto L_EB2E;
    case RC_ADDR(0x0000eb32u): goto L_EB32;
    case RC_ADDR(0x0000eb34u): goto L_EB34;
    case RC_ADDR(0x0000eb38u): goto L_EB38;
    case RC_ADDR(0x0000eb3au): goto L_EB3A;
    case RC_ADDR(0x0000eb3eu): goto L_EB3E;
    case RC_ADDR(0x0000eb42u): goto L_EB42;
    case RC_ADDR(0x0000eb46u): goto L_EB46;
    case RC_ADDR(0x0000eb4au): goto L_EB4A;
    case RC_ADDR(0x0000eb4cu): goto L_EB4C;
    case RC_ADDR(0x0000eb50u): goto L_EB50;
    case RC_ADDR(0x0000eb56u): goto L_EB56;
    case RC_ADDR(0x0000eb58u): goto L_EB58;
    case RC_ADDR(0x0000eb5eu): goto L_EB5E;
    case RC_ADDR(0x0000eb62u): goto L_EB62;
    case RC_ADDR(0x0000eb64u): goto L_EB64;
    case RC_ADDR(0x0000eb68u): goto L_EB68;
    case RC_ADDR(0x0000eb6eu): goto L_EB6E;
    case RC_ADDR(0x0000eb70u): goto L_EB70;
    case RC_ADDR(0x0000eb76u): goto L_EB76;
    case RC_ADDR(0x0000eb7au): goto L_EB7A;
    case RC_ADDR(0x0000eb7cu): goto L_EB7C;
    case RC_ADDR(0x0000eb7eu): goto L_EB7E;
    case RC_ADDR(0x0000eb82u): goto L_EB82;
    case RC_ADDR(0x0000eb86u): goto L_EB86;
    case RC_ADDR(0x0000eb8au): goto L_EB8A;
    case RC_ADDR(0x0000eb8eu): goto L_EB8E;
    case RC_ADDR(0x0000eb92u): goto L_EB92;
    case RC_ADDR(0x0000eb94u): goto L_EB94;
    case RC_ADDR(0x0000eb98u): goto L_EB98;
    case RC_ADDR(0x0000eb9cu): goto L_EB9C;
    case RC_ADDR(0x0000eba0u): goto L_EBA0;
    case RC_ADDR(0x0000eba6u): goto L_EBA6;
    case RC_ADDR(0x0000ebaau): goto L_EBAA;
    case RC_ADDR(0x0000ebaeu): goto L_EBAE;
    case RC_ADDR(0x0000ebb2u): goto L_EBB2;
    case RC_ADDR(0x0000ebb6u): goto L_EBB6;
    case RC_ADDR(0x0000ebbau): goto L_EBBA;
    case RC_ADDR(0x0000ebbcu): goto L_EBBC;
    case RC_ADDR(0x0000ebbeu): goto L_EBBE;
    case RC_ADDR(0x0000ebc2u): goto L_EBC2;
    case RC_ADDR(0x0000ebc6u): goto L_EBC6;
    case RC_ADDR(0x0000ebcau): goto L_EBCA;
    case RC_ADDR(0x0000ebceu): goto L_EBCE;
    case RC_ADDR(0x0000ebd2u): goto L_EBD2;
    case RC_ADDR(0x0000ebd6u): goto L_EBD6;
    case RC_ADDR(0x0000ebdau): goto L_EBDA;
    case RC_ADDR(0x0000ebdeu): goto L_EBDE;
    case RC_ADDR(0x0000ebe0u): goto L_EBE0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_EB1A:
    /* 0000eb1a   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000eb1au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_EB1E:
    /* 0000eb1e   4  move.w (e76,A4),D0 */
    c->pc = RC_ADDR(0x0000eb1eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB22:
    /* 0000eb22   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000eb22u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_EB24:
    /* 0000eb24   4  divs.w #20,D0 */
    c->pc = RC_ADDR(0x0000eb24u);
    rc_step(c, m, 162);
    t0 = 0x00000020u;
    rc_divs(c, m, 0, t0);

L_EB28:
    /* 0000eb28   2  subq.w #5,D0 */
    c->pc = RC_ADDR(0x0000eb28u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000005u;
    rc_flags_sub(c, RC_W, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_EB2A:
    /* 0000eb2a   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000eb2au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB2E:
    /* 0000eb2e   4  move.w (e78,A4),D0 */
    c->pc = RC_ADDR(0x0000eb2eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB32:
    /* 0000eb32   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000eb32u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_EB34:
    /* 0000eb34   4  divs.w #1b,D0 */
    c->pc = RC_ADDR(0x0000eb34u);
    rc_step(c, m, 162);
    t0 = 0x0000001bu;
    rc_divs(c, m, 0, t0);

L_EB38:
    /* 0000eb38   2  subq.w #3,D0 */
    c->pc = RC_ADDR(0x0000eb38u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_EB3A:
    /* 0000eb3a   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000eb3au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB3E:
    /* 0000eb3e   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000eb3eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_EB42:
    /* 0000eb42   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000eb42u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_EB46:
    /* 0000eb46   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000eb46u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_EB4A:
    /* 0000eb4a   2  bge 0000eb50 */
    c->pc = RC_ADDR(0x0000eb4au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_EB50;

L_EB4C:
    /* 0000eb4c   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000eb4cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_EB50:
    /* 0000eb50   6  cmpi.w #29,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000eb50u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000029u);

L_EB56:
    /* 0000eb56   2  ble 0000eb5e */
    c->pc = RC_ADDR(0x0000eb56u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_EB5E;

L_EB58:
    /* 0000eb58   6  move.w #29,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000eb58u);
    rc_step(c, m, 16);
    t0 = 0x00000029u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB5E:
    /* 0000eb5e   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000eb5eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_EB62:
    /* 0000eb62   2  bge 0000eb68 */
    c->pc = RC_ADDR(0x0000eb62u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_EB68;

L_EB64:
    /* 0000eb64   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000eb64u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_EB68:
    /* 0000eb68   6  cmpi.w #1f,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000eb68u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x0000001fu);

L_EB6E:
    /* 0000eb6e   2  ble 0000eb76 */
    c->pc = RC_ADDR(0x0000eb6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_EB76;

L_EB70:
    /* 0000eb70   6  move.w #1f,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000eb70u);
    rc_step(c, m, 16);
    t0 = 0x0000001fu;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB76:
    /* 0000eb76   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000eb76u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB7A:
    /* 0000eb7a   2  asl.w #5,D0 */
    c->pc = RC_ADDR(0x0000eb7au);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W));

L_EB7C:
    /* 0000eb7c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000eb7cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_EB7E:
    /* 0000eb7e   4  divs.w #10,D0 */
    c->pc = RC_ADDR(0x0000eb7eu);
    rc_step(c, m, 162);
    t0 = 0x00000010u;
    rc_divs(c, m, 0, t0);

L_EB82:
    /* 0000eb82   4  move.w D0,(1148,A4) */
    c->pc = RC_ADDR(0x0000eb82u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1148u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB86:
    /* 0000eb86   4  move.w D0,(1410,A4) */
    c->pc = RC_ADDR(0x0000eb86u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1410u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB8A:
    /* 0000eb8a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000eb8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB8E:
    /* 0000eb8e   4  muls.w #1b,D0 */
    c->pc = RC_ADDR(0x0000eb8eu);
    rc_step(c, m, 42);
    t0 = 0x0000001bu;
    rc_muls(c, 0, t0);

L_EB92:
    /* 0000eb92   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000eb92u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_EB94:
    /* 0000eb94   4  divs.w #9,D0 */
    c->pc = RC_ADDR(0x0000eb94u);
    rc_step(c, m, 162);
    t0 = 0x00000009u;
    rc_divs(c, m, 0, t0);

L_EB98:
    /* 0000eb98   4  move.w D0,(114a,A4) */
    c->pc = RC_ADDR(0x0000eb98u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x114au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EB9C:
    /* 0000eb9c   4  move.w D0,(1412,A4) */
    c->pc = RC_ADDR(0x0000eb9cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1412u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EBA0:
    /* 0000eba0   6  move.w #f,(fffffa26,A4) */
    c->pc = RC_ADDR(0x0000eba0u);
    rc_step(c, m, 16);
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] - 0x5dau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EBA6:
    /* 0000eba6   4  clr.w (fffffa28,A4) */
    c->pc = RC_ADDR(0x0000eba6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5d8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_EBAA:
    /* 0000ebaa   4  clr.l (fffffa2a,A4) */
    c->pc = RC_ADDR(0x0000ebaau);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x5d6u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_EBAE:
    /* 0000ebae   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000ebaeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EBB2:
    /* 0000ebb2   4  muls.w #27,D0 */
    c->pc = RC_ADDR(0x0000ebb2u);
    rc_step(c, m, 42);
    t0 = 0x00000027u;
    rc_muls(c, 0, t0);

L_EBB6:
    /* 0000ebb6   4  add.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ebb6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_EBBA:
    /* 0000ebba   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x0000ebbau);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_EBBC:
    /* 0000ebbc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ebbcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_EBBE:
    /* 0000ebbe   4  move.l D0,(fffffa8c,A4) */
    c->pc = RC_ADDR(0x0000ebbeu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x574u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EBC2:
    /* 0000ebc2   4  clr.l (fffffa88,A4) */
    c->pc = RC_ADDR(0x0000ebc2u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x578u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_EBC6:
    /* 0000ebc6   4  clr.l (fffffa84,A4) */
    c->pc = RC_ADDR(0x0000ebc6u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x57cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_EBCA:
    /* 0000ebca   4  clr.w (fffffa80,A4) */
    c->pc = RC_ADDR(0x0000ebcau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x580u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_EBCE:
    /* 0000ebce   4  clr.w (fffffa7e,A4) */
    c->pc = RC_ADDR(0x0000ebceu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x582u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_EBD2:
    /* 0000ebd2   4  clr.w (fffffa7c,A4) */
    c->pc = RC_ADDR(0x0000ebd2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x584u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_EBD6:
    /* 0000ebd6   4  clr.w (fffffa7a,A4) */
    c->pc = RC_ADDR(0x0000ebd6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x586u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_EBDA:
    /* 0000ebda   4  jsr (ffff81b2,A4) */
    c->pc = RC_ADDR(0x0000ebdau);
    rc_step(c, m, 18);
    /* vector 72 */
    rc_push32(c, m, RC_ADDR(0x0000ebdeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ca8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00019716u);
    return;

L_EBDE:
    /* 0000ebde   2  unlk A5 */
    c->pc = RC_ADDR(0x0000ebdeu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_EBE0:
    /* 0000ebe0   2  rts */
    c->pc = RC_ADDR(0x0000ebe0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
