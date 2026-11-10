/* fn_00013b54 - 258 byte(s), 72 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00013b54(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00013b54u): goto L_13B54;
    case RC_ADDR(0x00013b58u): goto L_13B58;
    case RC_ADDR(0x00013b5cu): goto L_13B5C;
    case RC_ADDR(0x00013b5eu): goto L_13B5E;
    case RC_ADDR(0x00013b60u): goto L_13B60;
    case RC_ADDR(0x00013b62u): goto L_13B62;
    case RC_ADDR(0x00013b66u): goto L_13B66;
    case RC_ADDR(0x00013b6au): goto L_13B6A;
    case RC_ADDR(0x00013b6eu): goto L_13B6E;
    case RC_ADDR(0x00013b72u): goto L_13B72;
    case RC_ADDR(0x00013b76u): goto L_13B76;
    case RC_ADDR(0x00013b78u): goto L_13B78;
    case RC_ADDR(0x00013b7cu): goto L_13B7C;
    case RC_ADDR(0x00013b80u): goto L_13B80;
    case RC_ADDR(0x00013b84u): goto L_13B84;
    case RC_ADDR(0x00013b88u): goto L_13B88;
    case RC_ADDR(0x00013b8cu): goto L_13B8C;
    case RC_ADDR(0x00013b92u): goto L_13B92;
    case RC_ADDR(0x00013b96u): goto L_13B96;
    case RC_ADDR(0x00013b9au): goto L_13B9A;
    case RC_ADDR(0x00013b9cu): goto L_13B9C;
    case RC_ADDR(0x00013ba0u): goto L_13BA0;
    case RC_ADDR(0x00013ba4u): goto L_13BA4;
    case RC_ADDR(0x00013ba8u): goto L_13BA8;
    case RC_ADDR(0x00013bacu): goto L_13BAC;
    case RC_ADDR(0x00013bb0u): goto L_13BB0;
    case RC_ADDR(0x00013bb4u): goto L_13BB4;
    case RC_ADDR(0x00013bbau): goto L_13BBA;
    case RC_ADDR(0x00013bbcu): goto L_13BBC;
    case RC_ADDR(0x00013bc0u): goto L_13BC0;
    case RC_ADDR(0x00013bc2u): goto L_13BC2;
    case RC_ADDR(0x00013bc6u): goto L_13BC6;
    case RC_ADDR(0x00013bcau): goto L_13BCA;
    case RC_ADDR(0x00013bceu): goto L_13BCE;
    case RC_ADDR(0x00013bd2u): goto L_13BD2;
    case RC_ADDR(0x00013bd4u): goto L_13BD4;
    case RC_ADDR(0x00013bd6u): goto L_13BD6;
    case RC_ADDR(0x00013bdau): goto L_13BDA;
    case RC_ADDR(0x00013bdeu): goto L_13BDE;
    case RC_ADDR(0x00013be2u): goto L_13BE2;
    case RC_ADDR(0x00013be6u): goto L_13BE6;
    case RC_ADDR(0x00013be8u): goto L_13BE8;
    case RC_ADDR(0x00013beau): goto L_13BEA;
    case RC_ADDR(0x00013beeu): goto L_13BEE;
    case RC_ADDR(0x00013bf2u): goto L_13BF2;
    case RC_ADDR(0x00013bf6u): goto L_13BF6;
    case RC_ADDR(0x00013bfau): goto L_13BFA;
    case RC_ADDR(0x00013bfcu): goto L_13BFC;
    case RC_ADDR(0x00013bfeu): goto L_13BFE;
    case RC_ADDR(0x00013c02u): goto L_13C02;
    case RC_ADDR(0x00013c06u): goto L_13C06;
    case RC_ADDR(0x00013c0au): goto L_13C0A;
    case RC_ADDR(0x00013c0eu): goto L_13C0E;
    case RC_ADDR(0x00013c10u): goto L_13C10;
    case RC_ADDR(0x00013c12u): goto L_13C12;
    case RC_ADDR(0x00013c18u): goto L_13C18;
    case RC_ADDR(0x00013c1eu): goto L_13C1E;
    case RC_ADDR(0x00013c22u): goto L_13C22;
    case RC_ADDR(0x00013c26u): goto L_13C26;
    case RC_ADDR(0x00013c28u): goto L_13C28;
    case RC_ADDR(0x00013c2au): goto L_13C2A;
    case RC_ADDR(0x00013c2cu): goto L_13C2C;
    case RC_ADDR(0x00013c30u): goto L_13C30;
    case RC_ADDR(0x00013c34u): goto L_13C34;
    case RC_ADDR(0x00013c38u): goto L_13C38;
    case RC_ADDR(0x00013c3cu): goto L_13C3C;
    case RC_ADDR(0x00013c40u): goto L_13C40;
    case RC_ADDR(0x00013c42u): goto L_13C42;
    case RC_ADDR(0x00013c46u): goto L_13C46;
    case RC_ADDR(0x00013c4au): goto L_13C4A;
    case RC_ADDR(0x00013c4eu): goto L_13C4E;
    case RC_ADDR(0x00013c52u): goto L_13C52;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13B54:
    /* 00013b54   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x00013b54u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_13B58:
    /* 00013b58   4  tst.w (fffffd58,A4) */
    c->pc = RC_ADDR(0x00013b58u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a8u));
    rc_set_nzvc(c, t0, RC_W);

L_13B5C:
    /* 00013b5c   2  bne 00013b62 */
    c->pc = RC_ADDR(0x00013b5cu);
    if (rc_cond(c, 6)) goto L_13B62;

L_13B5E:
    /* 00013b5e   2  unlk A5 */
    c->pc = RC_ADDR(0x00013b5eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13B60:
    /* 00013b60   2  rts */
    c->pc = RC_ADDR(0x00013b60u);
    rc_ret(c, m);
    return;

L_13B62:
    /* 00013b62   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00013b62u);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13B66:
    /* 00013b66   4  bra 00013c46 */
    c->pc = RC_ADDR(0x00013b66u);
    goto L_13C46;

L_13B6A:
    /* 00013b6a   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00013b6au);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13B6E:
    /* 00013b6e   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00013b6eu);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13B72:
    /* 00013b72   4  lea (fffff37c,A4),A0 */
    c->pc = RC_ADDR(0x00013b72u);
    c->a[0] = (c->a[4] - 0xc84u);

L_13B76:
    /* 00013b76   2  add.l A0,D0 */
    c->pc = RC_ADDR(0x00013b76u);
    t0 = rc_a_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_13B78:
    /* 00013b78   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00013b78u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13B7C:
    /* 00013b7c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013b7cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13B80:
    /* 00013b80   4  tst.b (13,A0) */
    c->pc = RC_ADDR(0x00013b80u);
    t0 = rc_rd8(c, m, (c->a[0] + 0x13u));
    rc_set_nzvc(c, t0, RC_B);

L_13B84:
    /* 00013b84   4  beq 00013c42 */
    c->pc = RC_ADDR(0x00013b84u);
    if (rc_cond(c, 7)) goto L_13C42;

L_13B88:
    /* 00013b88   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013b88u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13B8C:
    /* 00013b8c   6  cmpi.b #ff,(c,A0) */
    c->pc = RC_ADDR(0x00013b8cu);
    t0 = rc_rd8(c, m, (c->a[0] + 0xcu));
    rc_cmp(c, RC_B, t0, 0x000000ffu);

L_13B92:
    /* 00013b92   4  ble 00013c42 */
    c->pc = RC_ADDR(0x00013b92u);
    if (rc_cond(c, 15)) goto L_13C42;

L_13B96:
    /* 00013b96   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013b96u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13B9A:
    /* 00013b9a   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x00013b9au);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13B9C:
    /* 00013b9c   4  sub.w (dfa,A4),D0 */
    c->pc = RC_ADDR(0x00013b9cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13BA0:
    /* 00013ba0   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00013ba0u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13BA4:
    /* 00013ba4   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013ba4u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13BA8:
    /* 00013ba8   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x00013ba8u);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13BAC:
    /* 00013bac   4  sub.w (dfc,A4),D0 */
    c->pc = RC_ADDR(0x00013bacu);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13BB0:
    /* 00013bb0   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00013bb0u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13BB4:
    /* 00013bb4   6  cmpi.w #3,(af8,A4) */
    c->pc = RC_ADDR(0x00013bb4u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf8u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_13BBA:
    /* 00013bba   2  bge 00013c1e */
    c->pc = RC_ADDR(0x00013bbau);
    if (rc_cond(c, 12)) goto L_13C1E;

L_13BBC:
    /* 00013bbc   4  tst.w (10b8,A4) */
    c->pc = RC_ADDR(0x00013bbcu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10b8u));
    rc_set_nzvc(c, t0, RC_W);

L_13BC0:
    /* 00013bc0   2  bne 00013c1e */
    c->pc = RC_ADDR(0x00013bc0u);
    if (rc_cond(c, 6)) goto L_13C1E;

L_13BC2:
    /* 00013bc2   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00013bc2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13BC6:
    /* 00013bc6   4  add.w #10,D0 */
    c->pc = RC_ADDR(0x00013bc6u);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13BCA:
    /* 00013bca   4  move.w (fffffd98,A4),D1 */
    c->pc = RC_ADDR(0x00013bcau);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13BCE:
    /* 00013bce   4  sub.w #10,D1 */
    c->pc = RC_ADDR(0x00013bceu);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13BD2:
    /* 00013bd2   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x00013bd2u);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13BD4:
    /* 00013bd4   2  ble 00013c1e */
    c->pc = RC_ADDR(0x00013bd4u);
    if (rc_cond(c, 15)) goto L_13C1E;

L_13BD6:
    /* 00013bd6   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00013bd6u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13BDA:
    /* 00013bda   4  add.w #10,D0 */
    c->pc = RC_ADDR(0x00013bdau);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13BDE:
    /* 00013bde   4  move.w (fffffd98,A4),D1 */
    c->pc = RC_ADDR(0x00013bdeu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13BE2:
    /* 00013be2   4  add.w #10,D1 */
    c->pc = RC_ADDR(0x00013be2u);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13BE6:
    /* 00013be6   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x00013be6u);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13BE8:
    /* 00013be8   2  bge 00013c1e */
    c->pc = RC_ADDR(0x00013be8u);
    if (rc_cond(c, 12)) goto L_13C1E;

L_13BEA:
    /* 00013bea   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00013beau);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13BEE:
    /* 00013bee   4  add.w #10,D0 */
    c->pc = RC_ADDR(0x00013beeu);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13BF2:
    /* 00013bf2   4  move.w (fffffd9a,A4),D1 */
    c->pc = RC_ADDR(0x00013bf2u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13BF6:
    /* 00013bf6   4  sub.w #e,D1 */
    c->pc = RC_ADDR(0x00013bf6u);
    t0 = 0x0000000eu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13BFA:
    /* 00013bfa   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x00013bfau);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13BFC:
    /* 00013bfc   2  ble 00013c1e */
    c->pc = RC_ADDR(0x00013bfcu);
    if (rc_cond(c, 15)) goto L_13C1E;

L_13BFE:
    /* 00013bfe   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00013bfeu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C02:
    /* 00013c02   4  add.w #10,D0 */
    c->pc = RC_ADDR(0x00013c02u);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13C06:
    /* 00013c06   4  move.w (fffffd9a,A4),D1 */
    c->pc = RC_ADDR(0x00013c06u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C0A:
    /* 00013c0a   4  add.w #e,D1 */
    c->pc = RC_ADDR(0x00013c0au);
    t0 = 0x0000000eu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13C0E:
    /* 00013c0e   2  cmp.w D1,D0 */
    c->pc = RC_ADDR(0x00013c0eu);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13C10:
    /* 00013c10   2  bge 00013c1e */
    c->pc = RC_ADDR(0x00013c10u);
    if (rc_cond(c, 12)) goto L_13C1E;

L_13C12:
    /* 00013c12   6  move.w #1,(aee,A4) */
    c->pc = RC_ADDR(0x00013c12u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xaeeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C18:
    /* 00013c18   6  move.w #1,(aec,A4) */
    c->pc = RC_ADDR(0x00013c18u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xaecu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C1E:
    /* 00013c1e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013c1eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13C22:
    /* 00013c22   4  move.b (d,A0),D0 */
    c->pc = RC_ADDR(0x00013c22u);
    t0 = rc_rd8(c, m, (c->a[0] + 0xdu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13C26:
    /* 00013c26   2  ext.w D0 */
    c->pc = RC_ADDR(0x00013c26u);
    rc_ext_w(c, 0);

L_13C28:
    /* 00013c28   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013c28u);
    rc_ext_l(c, 0);

L_13C2A:
    /* 00013c2a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00013c2au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_13C2C:
    /* 00013c2c   4  lea (fffffc14,A4),A0 */
    c->pc = RC_ADDR(0x00013c2cu);
    c->a[0] = (c->a[4] - 0x3ecu);

L_13C30:
    /* 00013c30   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00013c30u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13C34:
    /* 00013c34   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00013c34u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C38:
    /* 00013c38   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00013c38u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C3C:
    /* 00013c3c   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x00013c3cu);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x00013c40u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011208u);
    return;

L_13C40:
    /* 00013c40   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00013c40u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_13C42:
    /* 00013c42   4  addq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00013c42u);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13C46:
    /* 00013c46   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00013c46u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13C4A:
    /* 00013c4a   4  cmp.w (fffffd58,A4),D0 */
    c->pc = RC_ADDR(0x00013c4au);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13C4E:
    /* 00013c4e   4  blt 00013b6a */
    c->pc = RC_ADDR(0x00013c4eu);
    if (rc_cond(c, 13)) { rc_tick(); goto L_13B6A; }

L_13C52:
    /* 00013c52   4  bra 00013b5e */
    c->pc = RC_ADDR(0x00013c52u);
    rc_tick();
    goto L_13B5E;

}
