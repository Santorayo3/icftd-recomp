/* fn_0000da1e - 356 byte(s), 92 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000da1e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000da1eu): goto L_DA1E;
    case RC_ADDR(0x0000da22u): goto L_DA22;
    case RC_ADDR(0x0000da28u): goto L_DA28;
    case RC_ADDR(0x0000da2au): goto L_DA2A;
    case RC_ADDR(0x0000da2eu): goto L_DA2E;
    case RC_ADDR(0x0000da30u): goto L_DA30;
    case RC_ADDR(0x0000da32u): goto L_DA32;
    case RC_ADDR(0x0000da36u): goto L_DA36;
    case RC_ADDR(0x0000da3cu): goto L_DA3C;
    case RC_ADDR(0x0000da40u): goto L_DA40;
    case RC_ADDR(0x0000da42u): goto L_DA42;
    case RC_ADDR(0x0000da44u): goto L_DA44;
    case RC_ADDR(0x0000da48u): goto L_DA48;
    case RC_ADDR(0x0000da4eu): goto L_DA4E;
    case RC_ADDR(0x0000da50u): goto L_DA50;
    case RC_ADDR(0x0000da54u): goto L_DA54;
    case RC_ADDR(0x0000da56u): goto L_DA56;
    case RC_ADDR(0x0000da58u): goto L_DA58;
    case RC_ADDR(0x0000da5cu): goto L_DA5C;
    case RC_ADDR(0x0000da62u): goto L_DA62;
    case RC_ADDR(0x0000da66u): goto L_DA66;
    case RC_ADDR(0x0000da68u): goto L_DA68;
    case RC_ADDR(0x0000da6au): goto L_DA6A;
    case RC_ADDR(0x0000da6eu): goto L_DA6E;
    case RC_ADDR(0x0000da72u): goto L_DA72;
    case RC_ADDR(0x0000da76u): goto L_DA76;
    case RC_ADDR(0x0000da7au): goto L_DA7A;
    case RC_ADDR(0x0000da80u): goto L_DA80;
    case RC_ADDR(0x0000da84u): goto L_DA84;
    case RC_ADDR(0x0000da88u): goto L_DA88;
    case RC_ADDR(0x0000da8eu): goto L_DA8E;
    case RC_ADDR(0x0000da94u): goto L_DA94;
    case RC_ADDR(0x0000da9au): goto L_DA9A;
    case RC_ADDR(0x0000da9eu): goto L_DA9E;
    case RC_ADDR(0x0000daa4u): goto L_DAA4;
    case RC_ADDR(0x0000daa8u): goto L_DAA8;
    case RC_ADDR(0x0000daacu): goto L_DAAC;
    case RC_ADDR(0x0000dab0u): goto L_DAB0;
    case RC_ADDR(0x0000dab4u): goto L_DAB4;
    case RC_ADDR(0x0000dab8u): goto L_DAB8;
    case RC_ADDR(0x0000dabcu): goto L_DABC;
    case RC_ADDR(0x0000dabeu): goto L_DABE;
    case RC_ADDR(0x0000dac2u): goto L_DAC2;
    case RC_ADDR(0x0000dac6u): goto L_DAC6;
    case RC_ADDR(0x0000dacau): goto L_DACA;
    case RC_ADDR(0x0000dad2u): goto L_DAD2;
    case RC_ADDR(0x0000dad4u): goto L_DAD4;
    case RC_ADDR(0x0000dad8u): goto L_DAD8;
    case RC_ADDR(0x0000dadcu): goto L_DADC;
    case RC_ADDR(0x0000dae0u): goto L_DAE0;
    case RC_ADDR(0x0000dae2u): goto L_DAE2;
    case RC_ADDR(0x0000dae6u): goto L_DAE6;
    case RC_ADDR(0x0000daeau): goto L_DAEA;
    case RC_ADDR(0x0000daeeu): goto L_DAEE;
    case RC_ADDR(0x0000daf6u): goto L_DAF6;
    case RC_ADDR(0x0000daf8u): goto L_DAF8;
    case RC_ADDR(0x0000dafcu): goto L_DAFC;
    case RC_ADDR(0x0000db00u): goto L_DB00;
    case RC_ADDR(0x0000db02u): goto L_DB02;
    case RC_ADDR(0x0000db06u): goto L_DB06;
    case RC_ADDR(0x0000db0au): goto L_DB0A;
    case RC_ADDR(0x0000db0eu): goto L_DB0E;
    case RC_ADDR(0x0000db10u): goto L_DB10;
    case RC_ADDR(0x0000db14u): goto L_DB14;
    case RC_ADDR(0x0000db18u): goto L_DB18;
    case RC_ADDR(0x0000db1cu): goto L_DB1C;
    case RC_ADDR(0x0000db1eu): goto L_DB1E;
    case RC_ADDR(0x0000db22u): goto L_DB22;
    case RC_ADDR(0x0000db26u): goto L_DB26;
    case RC_ADDR(0x0000db2au): goto L_DB2A;
    case RC_ADDR(0x0000db2cu): goto L_DB2C;
    case RC_ADDR(0x0000db30u): goto L_DB30;
    case RC_ADDR(0x0000db34u): goto L_DB34;
    case RC_ADDR(0x0000db38u): goto L_DB38;
    case RC_ADDR(0x0000db3au): goto L_DB3A;
    case RC_ADDR(0x0000db3eu): goto L_DB3E;
    case RC_ADDR(0x0000db42u): goto L_DB42;
    case RC_ADDR(0x0000db46u): goto L_DB46;
    case RC_ADDR(0x0000db48u): goto L_DB48;
    case RC_ADDR(0x0000db4cu): goto L_DB4C;
    case RC_ADDR(0x0000db52u): goto L_DB52;
    case RC_ADDR(0x0000db56u): goto L_DB56;
    case RC_ADDR(0x0000db58u): goto L_DB58;
    case RC_ADDR(0x0000db5cu): goto L_DB5C;
    case RC_ADDR(0x0000db62u): goto L_DB62;
    case RC_ADDR(0x0000db66u): goto L_DB66;
    case RC_ADDR(0x0000db6eu): goto L_DB6E;
    case RC_ADDR(0x0000db70u): goto L_DB70;
    case RC_ADDR(0x0000db74u): goto L_DB74;
    case RC_ADDR(0x0000db7au): goto L_DB7A;
    case RC_ADDR(0x0000db7eu): goto L_DB7E;
    case RC_ADDR(0x0000db80u): goto L_DB80;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_DA1E:
    /* 0000da1e   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0000da1eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_DA22:
    /* 0000da22   6  cmpi.w #1,(e74,A4) */
    c->pc = RC_ADDR(0x0000da22u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe74u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_DA28:
    /* 0000da28   2  bne 0000da50 */
    c->pc = RC_ADDR(0x0000da28u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_DA50;

L_DA2A:
    /* 0000da2a   4  move.w (110c,A4),D0 */
    c->pc = RC_ADDR(0x0000da2au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA2E:
    /* 0000da2e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000da2eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_DA30:
    /* 0000da30   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000da30u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DA32:
    /* 0000da32   4  lea (ffff9918,A4),A0 */
    c->pc = RC_ADDR(0x0000da32u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x66e8u);

L_DA36:
    /* 0000da36   6  move.w (0,A0,D0.w),(e76,A4) */
    c->pc = RC_ADDR(0x0000da36u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0xe76u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA3C:
    /* 0000da3c   4  move.w (110c,A4),D0 */
    c->pc = RC_ADDR(0x0000da3cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA40:
    /* 0000da40   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000da40u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_DA42:
    /* 0000da42   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000da42u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DA44:
    /* 0000da44   4  lea (ffff9924,A4),A0 */
    c->pc = RC_ADDR(0x0000da44u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x66dcu);

L_DA48:
    /* 0000da48   6  move.w (0,A0,D0.w),(e78,A4) */
    c->pc = RC_ADDR(0x0000da48u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0xe78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA4E:
    /* 0000da4e   2  bra 0000da7a */
    c->pc = RC_ADDR(0x0000da4eu);
    rc_step(c, m, 10);
    goto L_DA7A;

L_DA50:
    /* 0000da50   4  move.w (110c,A4),D0 */
    c->pc = RC_ADDR(0x0000da50u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA54:
    /* 0000da54   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000da54u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_DA56:
    /* 0000da56   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000da56u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DA58:
    /* 0000da58   4  lea (ffff9930,A4),A0 */
    c->pc = RC_ADDR(0x0000da58u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x66d0u);

L_DA5C:
    /* 0000da5c   6  move.w (0,A0,D0.w),(e76,A4) */
    c->pc = RC_ADDR(0x0000da5cu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0xe76u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA62:
    /* 0000da62   4  move.w (110c,A4),D0 */
    c->pc = RC_ADDR(0x0000da62u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA66:
    /* 0000da66   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000da66u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_DA68:
    /* 0000da68   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000da68u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DA6A:
    /* 0000da6a   4  lea (ffff993c,A4),A0 */
    c->pc = RC_ADDR(0x0000da6au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x66c4u);

L_DA6E:
    /* 0000da6e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000da6eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA72:
    /* 0000da72   4  sub.w #10,D1 */
    c->pc = RC_ADDR(0x0000da72u);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DA76:
    /* 0000da76   4  move.w D1,(e78,A4) */
    c->pc = RC_ADDR(0x0000da76u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xe78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA7A:
    /* 0000da7a   6  move.w #1,(e88,A4) */
    c->pc = RC_ADDR(0x0000da7au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe88u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA80:
    /* 0000da80   4  clr.w (e7e,A4) */
    c->pc = RC_ADDR(0x0000da80u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe7eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DA84:
    /* 0000da84   4  clr.w (e74,A4) */
    c->pc = RC_ADDR(0x0000da84u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe74u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DA88:
    /* 0000da88   6  move.w #4,(e7a,A4) */
    c->pc = RC_ADDR(0x0000da88u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0xe7au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA8E:
    /* 0000da8e   6  move.w #3,(e7c,A4) */
    c->pc = RC_ADDR(0x0000da8eu);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0xe7cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA94:
    /* 0000da94   6  move.w #1,(e80,A4) */
    c->pc = RC_ADDR(0x0000da94u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe80u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA9A:
    /* 0000da9a   4  clr.w (e82,A4) */
    c->pc = RC_ADDR(0x0000da9au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe82u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DA9E:
    /* 0000da9e   6  move.w #1,(e84,A4) */
    c->pc = RC_ADDR(0x0000da9eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe84u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DAA4:
    /* 0000daa4   4  clr.w (e86,A4) */
    c->pc = RC_ADDR(0x0000daa4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe86u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DAA8:
    /* 0000daa8   4  clr.w (e8a,A4) */
    c->pc = RC_ADDR(0x0000daa8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe8au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DAAC:
    /* 0000daac   4  clr.w (ee2,A4) */
    c->pc = RC_ADDR(0x0000daacu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xee2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DAB0:
    /* 0000dab0   4  clr.w (ee4,A4) */
    c->pc = RC_ADDR(0x0000dab0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xee4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DAB4:
    /* 0000dab4   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000dab4u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_DAB8:
    /* 0000dab8   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000dab8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DABC:
    /* 0000dabc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000dabcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DABE:
    /* 0000dabe   4  lea (ee6,A4),A0 */
    c->pc = RC_ADDR(0x0000dabeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xee6u);

L_DAC2:
    /* 0000dac2   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000dac2u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DAC6:
    /* 0000dac6   4  addq.l #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000dac6u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_DACA:
    /* 0000daca   8  cmpi.l #4,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000dacau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x00000004u);

L_DAD2:
    /* 0000dad2   2  blt 0000dab8 */
    c->pc = RC_ADDR(0x0000dad2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_DAB8; }

L_DAD4:
    /* 0000dad4   4  clr.w (f06,A4) */
    c->pc = RC_ADDR(0x0000dad4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xf06u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DAD8:
    /* 0000dad8   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000dad8u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_DADC:
    /* 0000dadc   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000dadcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DAE0:
    /* 0000dae0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000dae0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DAE2:
    /* 0000dae2   4  lea (f08,A4),A0 */
    c->pc = RC_ADDR(0x0000dae2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xf08u);

L_DAE6:
    /* 0000dae6   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000dae6u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DAEA:
    /* 0000daea   4  addq.l #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000daeau);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_DAEE:
    /* 0000daee   8  cmpi.l #40,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000daeeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x00000040u);

L_DAF6:
    /* 0000daf6   2  blt 0000dadc */
    c->pc = RC_ADDR(0x0000daf6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_DADC; }

L_DAF8:
    /* 0000daf8   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000daf8u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_DAFC:
    /* 0000dafc   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000dafcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DB00:
    /* 0000db00   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000db00u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DB02:
    /* 0000db02   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000db02u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_DB06:
    /* 0000db06   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000db06u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DB0A:
    /* 0000db0a   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000db0au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DB0E:
    /* 0000db0e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000db0eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DB10:
    /* 0000db10   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000db10u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_DB14:
    /* 0000db14   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000db14u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DB18:
    /* 0000db18   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000db18u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DB1C:
    /* 0000db1c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000db1cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DB1E:
    /* 0000db1e   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000db1eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_DB22:
    /* 0000db22   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000db22u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DB26:
    /* 0000db26   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000db26u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DB2A:
    /* 0000db2a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000db2au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DB2C:
    /* 0000db2c   4  lea (eac,A4),A0 */
    c->pc = RC_ADDR(0x0000db2cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xeacu);

L_DB30:
    /* 0000db30   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000db30u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DB34:
    /* 0000db34   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000db34u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DB38:
    /* 0000db38   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000db38u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DB3A:
    /* 0000db3a   4  lea (ebc,A4),A0 */
    c->pc = RC_ADDR(0x0000db3au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xebcu);

L_DB3E:
    /* 0000db3e   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000db3eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DB42:
    /* 0000db42   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000db42u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DB46:
    /* 0000db46   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000db46u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DB48:
    /* 0000db48   4  lea (ecc,A4),A0 */
    c->pc = RC_ADDR(0x0000db48u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xeccu);

L_DB4C:
    /* 0000db4c   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000db4cu);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DB52:
    /* 0000db52   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000db52u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DB56:
    /* 0000db56   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000db56u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DB58:
    /* 0000db58   4  lea (b26,A4),A0 */
    c->pc = RC_ADDR(0x0000db58u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb26u);

L_DB5C:
    /* 0000db5c   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000db5cu);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DB62:
    /* 0000db62   4  addq.l #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000db62u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_DB66:
    /* 0000db66   8  cmpi.l #8,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000db66u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x00000008u);

L_DB6E:
    /* 0000db6e   2  blt 0000dafc */
    c->pc = RC_ADDR(0x0000db6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_DAFC; }

L_DB70:
    /* 0000db70   4  clr.w (edc,A4) */
    c->pc = RC_ADDR(0x0000db70u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xedcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DB74:
    /* 0000db74   6  move.w #1,(ede,A4) */
    c->pc = RC_ADDR(0x0000db74u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xedeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DB7A:
    /* 0000db7a   4  jsr (0000eb1a) */
    c->pc = RC_ADDR(0x0000db7au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000db7eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000eb1au);
    return;

L_DB7E:
    /* 0000db7e   2  unlk A5 */
    c->pc = RC_ADDR(0x0000db7eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_DB80:
    /* 0000db80   2  rts */
    c->pc = RC_ADDR(0x0000db80u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
