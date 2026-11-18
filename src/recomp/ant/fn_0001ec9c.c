/* fn_0001ec9c - 382 byte(s), 106 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001ec9c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001ec9cu): goto L_1EC9C;
    case RC_ADDR(0x0001eca0u): goto L_1ECA0;
    case RC_ADDR(0x0001eca4u): goto L_1ECA4;
    case RC_ADDR(0x0001eca6u): goto L_1ECA6;
    case RC_ADDR(0x0001eca8u): goto L_1ECA8;
    case RC_ADDR(0x0001ecaau): goto L_1ECAA;
    case RC_ADDR(0x0001ecacu): goto L_1ECAC;
    case RC_ADDR(0x0001ecb0u): goto L_1ECB0;
    case RC_ADDR(0x0001ecb4u): goto L_1ECB4;
    case RC_ADDR(0x0001ecb8u): goto L_1ECB8;
    case RC_ADDR(0x0001ecbcu): goto L_1ECBC;
    case RC_ADDR(0x0001ecc0u): goto L_1ECC0;
    case RC_ADDR(0x0001ecc4u): goto L_1ECC4;
    case RC_ADDR(0x0001ecc6u): goto L_1ECC6;
    case RC_ADDR(0x0001eccau): goto L_1ECCA;
    case RC_ADDR(0x0001ecccu): goto L_1ECCC;
    case RC_ADDR(0x0001ecceu): goto L_1ECCE;
    case RC_ADDR(0x0001ecd0u): goto L_1ECD0;
    case RC_ADDR(0x0001ecd4u): goto L_1ECD4;
    case RC_ADDR(0x0001ecd8u): goto L_1ECD8;
    case RC_ADDR(0x0001ecdcu): goto L_1ECDC;
    case RC_ADDR(0x0001ecdeu): goto L_1ECDE;
    case RC_ADDR(0x0001ece4u): goto L_1ECE4;
    case RC_ADDR(0x0001ece8u): goto L_1ECE8;
    case RC_ADDR(0x0001eceau): goto L_1ECEA;
    case RC_ADDR(0x0001ececu): goto L_1ECEC;
    case RC_ADDR(0x0001ecf0u): goto L_1ECF0;
    case RC_ADDR(0x0001ecf6u): goto L_1ECF6;
    case RC_ADDR(0x0001ecfau): goto L_1ECFA;
    case RC_ADDR(0x0001ecfcu): goto L_1ECFC;
    case RC_ADDR(0x0001ecfeu): goto L_1ECFE;
    case RC_ADDR(0x0001ed02u): goto L_1ED02;
    case RC_ADDR(0x0001ed04u): goto L_1ED04;
    case RC_ADDR(0x0001ed06u): goto L_1ED06;
    case RC_ADDR(0x0001ed0au): goto L_1ED0A;
    case RC_ADDR(0x0001ed0eu): goto L_1ED0E;
    case RC_ADDR(0x0001ed12u): goto L_1ED12;
    case RC_ADDR(0x0001ed14u): goto L_1ED14;
    case RC_ADDR(0x0001ed1au): goto L_1ED1A;
    case RC_ADDR(0x0001ed1eu): goto L_1ED1E;
    case RC_ADDR(0x0001ed22u): goto L_1ED22;
    case RC_ADDR(0x0001ed24u): goto L_1ED24;
    case RC_ADDR(0x0001ed2au): goto L_1ED2A;
    case RC_ADDR(0x0001ed2eu): goto L_1ED2E;
    case RC_ADDR(0x0001ed32u): goto L_1ED32;
    case RC_ADDR(0x0001ed34u): goto L_1ED34;
    case RC_ADDR(0x0001ed38u): goto L_1ED38;
    case RC_ADDR(0x0001ed3eu): goto L_1ED3E;
    case RC_ADDR(0x0001ed42u): goto L_1ED42;
    case RC_ADDR(0x0001ed46u): goto L_1ED46;
    case RC_ADDR(0x0001ed4au): goto L_1ED4A;
    case RC_ADDR(0x0001ed4cu): goto L_1ED4C;
    case RC_ADDR(0x0001ed50u): goto L_1ED50;
    case RC_ADDR(0x0001ed54u): goto L_1ED54;
    case RC_ADDR(0x0001ed58u): goto L_1ED58;
    case RC_ADDR(0x0001ed5eu): goto L_1ED5E;
    case RC_ADDR(0x0001ed62u): goto L_1ED62;
    case RC_ADDR(0x0001ed66u): goto L_1ED66;
    case RC_ADDR(0x0001ed6au): goto L_1ED6A;
    case RC_ADDR(0x0001ed6cu): goto L_1ED6C;
    case RC_ADDR(0x0001ed70u): goto L_1ED70;
    case RC_ADDR(0x0001ed74u): goto L_1ED74;
    case RC_ADDR(0x0001ed78u): goto L_1ED78;
    case RC_ADDR(0x0001ed7au): goto L_1ED7A;
    case RC_ADDR(0x0001ed7eu): goto L_1ED7E;
    case RC_ADDR(0x0001ed82u): goto L_1ED82;
    case RC_ADDR(0x0001ed84u): goto L_1ED84;
    case RC_ADDR(0x0001ed88u): goto L_1ED88;
    case RC_ADDR(0x0001ed8cu): goto L_1ED8C;
    case RC_ADDR(0x0001ed90u): goto L_1ED90;
    case RC_ADDR(0x0001ed94u): goto L_1ED94;
    case RC_ADDR(0x0001ed98u): goto L_1ED98;
    case RC_ADDR(0x0001ed9cu): goto L_1ED9C;
    case RC_ADDR(0x0001eda0u): goto L_1EDA0;
    case RC_ADDR(0x0001eda4u): goto L_1EDA4;
    case RC_ADDR(0x0001eda6u): goto L_1EDA6;
    case RC_ADDR(0x0001edaau): goto L_1EDAA;
    case RC_ADDR(0x0001edaeu): goto L_1EDAE;
    case RC_ADDR(0x0001edb4u): goto L_1EDB4;
    case RC_ADDR(0x0001edb8u): goto L_1EDB8;
    case RC_ADDR(0x0001edbcu): goto L_1EDBC;
    case RC_ADDR(0x0001edc0u): goto L_1EDC0;
    case RC_ADDR(0x0001edc2u): goto L_1EDC2;
    case RC_ADDR(0x0001edc8u): goto L_1EDC8;
    case RC_ADDR(0x0001edccu): goto L_1EDCC;
    case RC_ADDR(0x0001edd2u): goto L_1EDD2;
    case RC_ADDR(0x0001edd6u): goto L_1EDD6;
    case RC_ADDR(0x0001eddau): goto L_1EDDA;
    case RC_ADDR(0x0001eddcu): goto L_1EDDC;
    case RC_ADDR(0x0001eddeu): goto L_1EDDE;
    case RC_ADDR(0x0001ede2u): goto L_1EDE2;
    case RC_ADDR(0x0001ede6u): goto L_1EDE6;
    case RC_ADDR(0x0001ede8u): goto L_1EDE8;
    case RC_ADDR(0x0001edecu): goto L_1EDEC;
    case RC_ADDR(0x0001edf0u): goto L_1EDF0;
    case RC_ADDR(0x0001edf2u): goto L_1EDF2;
    case RC_ADDR(0x0001edf8u): goto L_1EDF8;
    case RC_ADDR(0x0001edfau): goto L_1EDFA;
    case RC_ADDR(0x0001edfeu): goto L_1EDFE;
    case RC_ADDR(0x0001ee02u): goto L_1EE02;
    case RC_ADDR(0x0001ee06u): goto L_1EE06;
    case RC_ADDR(0x0001ee08u): goto L_1EE08;
    case RC_ADDR(0x0001ee0eu): goto L_1EE0E;
    case RC_ADDR(0x0001ee10u): goto L_1EE10;
    case RC_ADDR(0x0001ee14u): goto L_1EE14;
    case RC_ADDR(0x0001ee16u): goto L_1EE16;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1EC9C:
    /* 0001ec9c   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x0001ec9cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_1ECA0:
    /* 0001eca0   4  tst.w (79c,A4) */
    c->pc = RC_ADDR(0x0001eca0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x79cu));
    rc_set_nzvc(c, t0, RC_W);

L_1ECA4:
    /* 0001eca4   2  beq 0001ecac */
    c->pc = RC_ADDR(0x0001eca4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1ECAC;

L_1ECA6:
    /* 0001eca6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001eca6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1ECA8:
    /* 0001eca8   2  unlk A5 */
    c->pc = RC_ADDR(0x0001eca8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1ECAA:
    /* 0001ecaa   2  rts */
    c->pc = RC_ADDR(0x0001ecaau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1ECAC:
    /* 0001ecac   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001ecacu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1ECB0:
    /* 0001ecb0   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001ecb0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1ECB4:
    /* 0001ecb4   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0001ecb4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1ECB8:
    /* 0001ecb8   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001ecb8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ECBC:
    /* 0001ecbc   4  lea (ffffd260,A4),A0 */
    c->pc = RC_ADDR(0x0001ecbcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2da0u);

L_1ECC0:
    /* 0001ecc0   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001ecc0u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1ECC4:
    /* 0001ecc4   2  ext.w D1 */
    c->pc = RC_ADDR(0x0001ecc4u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_1ECC6:
    /* 0001ecc6   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x0001ecc6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ECCA:
    /* 0001ecca   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0001eccau);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1ECCC:
    /* 0001eccc   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0001ecccu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1ECCE:
    /* 0001ecce   2  bne 0001ed34 */
    c->pc = RC_ADDR(0x0001ecceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1ED34;

L_1ECD0:
    /* 0001ecd0   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001ecd0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ECD4:
    /* 0001ecd4   4  lea (30dc,A4),A0 */
    c->pc = RC_ADDR(0x0001ecd4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x30dcu);

L_1ECD8:
    /* 0001ecd8   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001ecd8u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_1ECDC:
    /* 0001ecdc   2  bne 0001ed34 */
    c->pc = RC_ADDR(0x0001ecdcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1ED34;

L_1ECDE:
    /* 0001ecde   6  move.w (fffffffa,A5),(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001ecdeu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ECE4:
    /* 0001ece4   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001ece4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ECE8:
    /* 0001ece8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ece8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1ECEA:
    /* 0001ecea   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001eceau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1ECEC:
    /* 0001ecec   4  lea (ffffd268,A4),A0 */
    c->pc = RC_ADDR(0x0001ececu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2d98u);

L_1ECF0:
    /* 0001ecf0   6  move.l (0,A0,D0.w),(fffffff2,A5) */
    c->pc = RC_ADDR(0x0001ecf0u);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ECF6:
    /* 0001ecf6   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x0001ecf6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_1ECFA:
    /* 0001ecfa   2  tst.b (A0) */
    c->pc = RC_ADDR(0x0001ecfau);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_1ECFC:
    /* 0001ecfc   2  beq 0001ed34 */
    c->pc = RC_ADDR(0x0001ecfcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1ED34;

L_1ECFE:
    /* 0001ecfe   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x0001ecfeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_1ED02:
    /* 0001ed02   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x0001ed02u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1ED04:
    /* 0001ed04   2  ext.w D0 */
    c->pc = RC_ADDR(0x0001ed04u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_1ED06:
    /* 0001ed06   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001ed06u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED0A:
    /* 0001ed0a   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001ed0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED0E:
    /* 0001ed0e   4  cmp.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001ed0eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1ED12:
    /* 0001ed12   2  bne 0001ed1a */
    c->pc = RC_ADDR(0x0001ed12u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1ED1A;

L_1ED14:
    /* 0001ed14   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001ed14u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED1A:
    /* 0001ed1a   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0001ed1au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED1E:
    /* 0001ed1e   4  cmp.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0001ed1eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1ED22:
    /* 0001ed22   2  bne 0001ed2a */
    c->pc = RC_ADDR(0x0001ed22u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1ED2A;

L_1ED24:
    /* 0001ed24   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001ed24u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED2A:
    /* 0001ed2a   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x0001ed2au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_1ED2E:
    /* 0001ed2e   4  addq.l #1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0001ed2eu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0xeu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1ED32:
    /* 0001ed32   2  bra 0001ecf6 */
    c->pc = RC_ADDR(0x0001ed32u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1ECF6;

L_1ED34:
    /* 0001ed34   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001ed34u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1ED38:
    /* 0001ed38   6  cmpi.w #7,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001ed38u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_1ED3E:
    /* 0001ed3e   4  blt 0001ecb8 */
    c->pc = RC_ADDR(0x0001ed3eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1ECB8; }

L_1ED42:
    /* 0001ed42   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001ed42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED46:
    /* 0001ed46   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001ed46u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED4A:
    /* 0001ed4a   2  eor.w D0,D1 */
    c->pc = RC_ADDR(0x0001ed4au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 ^ rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1ED4C:
    /* 0001ed4c   4  beq 0001ee14 */
    c->pc = RC_ADDR(0x0001ed4cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1EE14;

L_1ED50:
    /* 0001ed50   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0001ed50u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED54:
    /* 0001ed54   4  lea (30dc,A4),A0 */
    c->pc = RC_ADDR(0x0001ed54u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x30dcu);

L_1ED58:
    /* 0001ed58   6  move.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001ed58u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1ED5E:
    /* 0001ed5e   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0001ed5eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ED62:
    /* 0001ed62   4  move.l (ffffd258,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ed62u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2da8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ED66:
    /* 0001ed66   4  jsr (ffff8062,A4) */
    c->pc = RC_ADDR(0x0001ed66u);
    rc_step(c, m, 18);
    /* vector 16 */
    rc_push32(c, m, RC_ADDR(0x0001ed6au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b58u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00004852u);
    return;

L_1ED6A:
    /* 0001ed6a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001ed6au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1ED6C:
    /* 0001ed6c   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0001ed6cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ED70:
    /* 0001ed70   4  move.l (ffffd25c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ed70u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2da4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ED74:
    /* 0001ed74   4  jsr (ffff8062,A4) */
    c->pc = RC_ADDR(0x0001ed74u);
    rc_step(c, m, 18);
    /* vector 16 */
    rc_push32(c, m, RC_ADDR(0x0001ed78u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b58u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00004852u);
    return;

L_1ED78:
    /* 0001ed78   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001ed78u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1ED7A:
    /* 0001ed7a   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0001ed7au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1ED7E:
    /* 0001ed7e   4  jsr (ffff805c,A4) */
    c->pc = RC_ADDR(0x0001ed7eu);
    rc_step(c, m, 18);
    /* vector 15 */
    rc_push32(c, m, RC_ADDR(0x0001ed82u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00003994u);
    return;

L_1ED82:
    /* 0001ed82   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001ed82u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1ED84:
    /* 0001ed84   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x0001ed84u);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x0001ed88u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_1ED88:
    /* 0001ed88   4  move.w (714,A4),D0 */
    c->pc = RC_ADDR(0x0001ed88u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x714u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED8C:
    /* 0001ed8c   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x0001ed8cu);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_1ED90:
    /* 0001ed90   4  add.w #78,D0 */
    c->pc = RC_ADDR(0x0001ed90u);
    rc_step(c, m, 10);
    t0 = 0x00000078u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1ED94:
    /* 0001ed94   4  move.w D0,(30d8,A4) */
    c->pc = RC_ADDR(0x0001ed94u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x30d8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED98:
    /* 0001ed98   4  move.w (714,A4),D0 */
    c->pc = RC_ADDR(0x0001ed98u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x714u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1ED9C:
    /* 0001ed9c   4  muls.w #a,D0 */
    c->pc = RC_ADDR(0x0001ed9cu);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 0, t0);

L_1EDA0:
    /* 0001eda0   4  move.w #104,D1 */
    c->pc = RC_ADDR(0x0001eda0u);
    rc_step(c, m, 8);
    t0 = 0x00000104u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EDA4:
    /* 0001eda4   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x0001eda4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1EDA6:
    /* 0001eda6   4  move.w D1,(30da,A4) */
    c->pc = RC_ADDR(0x0001eda6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x30dau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EDAA:
    /* 0001edaa   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x0001edaau);
    rc_step(c, m, 18);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x0001edaeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d32u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f814u);
    return;

L_1EDAE:
    /* 0001edae   6  move.w #1,(ffff8b8a,A4) */
    c->pc = RC_ADDR(0x0001edaeu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7476u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EDB4:
    /* 0001edb4   4  jsr (0001dab0) */
    c->pc = RC_ADDR(0x0001edb4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001edb8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001dab0u);
    return;

L_1EDB8:
    /* 0001edb8   4  move.l (ffffd340,A4),-(A7) */
    c->pc = RC_ADDR(0x0001edb8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EDBC:
    /* 0001edbc   4  jsr (ffff8050,A4) */
    c->pc = RC_ADDR(0x0001edbcu);
    rc_step(c, m, 18);
    /* vector 13 */
    rc_push32(c, m, RC_ADDR(0x0001edc0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b46u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000375cu);
    return;

L_1EDC0:
    /* 0001edc0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001edc0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1EDC2:
    /* 0001edc2   6  move.w #1,(79a,A4) */
    c->pc = RC_ADDR(0x0001edc2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x79au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EDC8:
    /* 0001edc8   4  addq.w #1,(714,A4) */
    c->pc = RC_ADDR(0x0001edc8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x714u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1EDCC:
    /* 0001edcc   6  move.w #c8,(ffffd346,A4) */
    c->pc = RC_ADDR(0x0001edccu);
    rc_step(c, m, 16);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0x2cbau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EDD2:
    /* 0001edd2   4  clr.w (ffff8b8a,A4) */
    c->pc = RC_ADDR(0x0001edd2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7476u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EDD6:
    /* 0001edd6   4  tst.w (2cac,A4) */
    c->pc = RC_ADDR(0x0001edd6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cacu));
    rc_set_nzvc(c, t0, RC_W);

L_1EDDA:
    /* 0001edda   2  beq 0001ede2 */
    c->pc = RC_ADDR(0x0001eddau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1EDE2;

L_1EDDC:
    /* 0001eddc   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001eddcu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1EDDE:
    /* 0001edde   4  bra 0001eca8 */
    c->pc = RC_ADDR(0x0001eddeu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1ECA8;

L_1EDE2:
    /* 0001ede2   4  tst.w (2ca6,A4) */
    c->pc = RC_ADDR(0x0001ede2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca6u));
    rc_set_nzvc(c, t0, RC_W);

L_1EDE6:
    /* 0001ede6   2  beq 0001edfe */
    c->pc = RC_ADDR(0x0001ede6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1EDFE;

L_1EDE8:
    /* 0001ede8   4  move.w #12c,-(A7) */
    c->pc = RC_ADDR(0x0001ede8u);
    rc_step(c, m, 12);
    t0 = 0x0000012cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EDEC:
    /* 0001edec   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x0001edecu);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x0001edf0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b76u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00005db6u);
    return;

L_1EDF0:
    /* 0001edf0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001edf0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1EDF2:
    /* 0001edf2   6  move.w #17,(fffff794,A4) */
    c->pc = RC_ADDR(0x0001edf2u);
    rc_step(c, m, 16);
    t0 = 0x00000017u;
    rc_wr16(c, m, (c->a[4] - 0x86cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EDF8:
    /* 0001edf8   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001edf8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1EDFA:
    /* 0001edfa   4  bra 0001eca8 */
    c->pc = RC_ADDR(0x0001edfau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1ECA8;

L_1EDFE:
    /* 0001edfe   4  move.w #f6,-(A7) */
    c->pc = RC_ADDR(0x0001edfeu);
    rc_step(c, m, 12);
    t0 = 0x000000f6u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EE02:
    /* 0001ee02   4  jsr (ffff8044,A4) */
    c->pc = RC_ADDR(0x0001ee02u);
    rc_step(c, m, 18);
    /* vector 11 */
    rc_push32(c, m, RC_ADDR(0x0001ee06u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b3au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000302cu);
    return;

L_1EE06:
    /* 0001ee06   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001ee06u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1EE08:
    /* 0001ee08   6  move.w (fffff78c,A4),(fffff794,A4) */
    c->pc = RC_ADDR(0x0001ee08u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_wr16(c, m, (c->a[4] - 0x86cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EE0E:
    /* 0001ee0e   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001ee0eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1EE10:
    /* 0001ee10   4  bra 0001eca8 */
    c->pc = RC_ADDR(0x0001ee10u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1ECA8;

L_1EE14:
    /* 0001ee14   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001ee14u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1EE16:
    /* 0001ee16   4  bra 0001eca8 */
    c->pc = RC_ADDR(0x0001ee16u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1ECA8;

}
