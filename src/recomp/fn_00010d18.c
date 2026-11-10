/* fn_00010d18 - 208 byte(s), 58 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00010d18(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x00010d18u: goto L_10D18;
    case 0x00010d1cu: goto L_10D1C;
    case 0x00010d20u: goto L_10D20;
    case 0x00010d22u: goto L_10D22;
    case 0x00010d26u: goto L_10D26;
    case 0x00010d2au: goto L_10D2A;
    case 0x00010d2eu: goto L_10D2E;
    case 0x00010d32u: goto L_10D32;
    case 0x00010d36u: goto L_10D36;
    case 0x00010d38u: goto L_10D38;
    case 0x00010d3cu: goto L_10D3C;
    case 0x00010d3eu: goto L_10D3E;
    case 0x00010d40u: goto L_10D40;
    case 0x00010d44u: goto L_10D44;
    case 0x00010d46u: goto L_10D46;
    case 0x00010d4au: goto L_10D4A;
    case 0x00010d4cu: goto L_10D4C;
    case 0x00010d50u: goto L_10D50;
    case 0x00010d56u: goto L_10D56;
    case 0x00010d5au: goto L_10D5A;
    case 0x00010d60u: goto L_10D60;
    case 0x00010d62u: goto L_10D62;
    case 0x00010d66u: goto L_10D66;
    case 0x00010d6au: goto L_10D6A;
    case 0x00010d70u: goto L_10D70;
    case 0x00010d74u: goto L_10D74;
    case 0x00010d78u: goto L_10D78;
    case 0x00010d7au: goto L_10D7A;
    case 0x00010d7cu: goto L_10D7C;
    case 0x00010d80u: goto L_10D80;
    case 0x00010d84u: goto L_10D84;
    case 0x00010d86u: goto L_10D86;
    case 0x00010d8au: goto L_10D8A;
    case 0x00010d90u: goto L_10D90;
    case 0x00010d94u: goto L_10D94;
    case 0x00010d98u: goto L_10D98;
    case 0x00010d9au: goto L_10D9A;
    case 0x00010d9eu: goto L_10D9E;
    case 0x00010da4u: goto L_10DA4;
    case 0x00010da8u: goto L_10DA8;
    case 0x00010dacu: goto L_10DAC;
    case 0x00010daeu: goto L_10DAE;
    case 0x00010db2u: goto L_10DB2;
    case 0x00010db6u: goto L_10DB6;
    case 0x00010dbau: goto L_10DBA;
    case 0x00010dbeu: goto L_10DBE;
    case 0x00010dc0u: goto L_10DC0;
    case 0x00010dc4u: goto L_10DC4;
    case 0x00010dc6u: goto L_10DC6;
    case 0x00010dcau: goto L_10DCA;
    case 0x00010dceu: goto L_10DCE;
    case 0x00010dd2u: goto L_10DD2;
    case 0x00010dd6u: goto L_10DD6;
    case 0x00010ddau: goto L_10DDA;
    case 0x00010ddeu: goto L_10DDE;
    case 0x00010de2u: goto L_10DE2;
    case 0x00010de4u: goto L_10DE4;
    case 0x00010de6u: goto L_10DE6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10D18:
    /* 00010d18   4  link.w A5,#fffffffa */
    c->pc = 0x00010d18u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_10D1C:
    /* 00010d1c   4  pea (282,A4) */
    c->pc = 0x00010d1cu;
    rc_push32(c, m, (c->a[4] + 0x282u));

L_10D20:
    /* 00010d20   2  clr.l -(A7) */
    c->pc = 0x00010d20u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_10D22:
    /* 00010d22   4  pea (00010de8) */
    c->pc = 0x00010d22u;
    rc_push32(c, m, 0x00010de8u);

L_10D26:
    /* 00010d26   4  jsr (00016a40) */
    c->pc = 0x00010d26u;
    rc_push32(c, m, 0x00010d2au);
    rc_depth++;
    c->pc = 0x00016a40u;
    return;

L_10D2A:
    /* 00010d2a   4  lea (c,A7),A7 */
    c->pc = 0x00010d2au;
    c->a[7] = (c->a[7] + 0xcu);

L_10D2E:
    /* 00010d2e   4  move.l D0,(ffff84f4,A4) */
    c->pc = 0x00010d2eu;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x7b0cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10D32:
    /* 00010d32   4  clr.w (fffffffa,A5) */
    c->pc = 0x00010d32u;
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10D36:
    /* 00010d36   2  moveq #0,D0 */
    c->pc = 0x00010d36u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10D38:
    /* 00010d38   4  move.w (fffffffa,A5),D0 */
    c->pc = 0x00010d38u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10D3C:
    /* 00010d3c   2  asl.l #2,D0 */
    c->pc = 0x00010d3cu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_10D3E:
    /* 00010d3e   2  movea.l D0,A0 */
    c->pc = 0x00010d3eu;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_10D40:
    /* 00010d40   4  adda.l (ffff84f4,A4),A0 */
    c->pc = 0x00010d40u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x7b0cu));
    c->a[0] += t0;

L_10D44:
    /* 00010d44   2  moveq #0,D0 */
    c->pc = 0x00010d44u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10D46:
    /* 00010d46   4  move.w (fffffffa,A5),D0 */
    c->pc = 0x00010d46u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10D4A:
    /* 00010d4a   2  asl.l #2,D0 */
    c->pc = 0x00010d4au;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_10D4C:
    /* 00010d4c   4  lea (fffff300,A4),A1 */
    c->pc = 0x00010d4cu;
    c->a[1] = (c->a[4] - 0xd00u);

L_10D50:
    /* 00010d50   6  move.l (8,A0),(0,A1,D0.w) */
    c->pc = 0x00010d50u;
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10D56:
    /* 00010d56   4  addq.w #1,(fffffffa,A5) */
    c->pc = 0x00010d56u;
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_10D5A:
    /* 00010d5a   6  cmpi.w #5,(fffffffa,A5) */
    c->pc = 0x00010d5au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_10D60:
    /* 00010d60   2  bcs 00010d36 */
    c->pc = 0x00010d60u;
    if (rc_cond(c, 5)) { rc_tick(); goto L_10D36; }

L_10D62:
    /* 00010d62   4  movea.l (ffff84f4,A4),A0 */
    c->pc = 0x00010d62u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x7b0cu));
    c->a[0] = t0;

L_10D66:
    /* 00010d66   4  move.w (A0),(fffff2f4,A4) */
    c->pc = 0x00010d66u;
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[4] - 0xd0cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10D6A:
    /* 00010d6a   6  move.w #12,(fffff2f6,A4) */
    c->pc = 0x00010d6au;
    t0 = 0x00000012u;
    rc_wr16(c, m, (c->a[4] - 0xd0au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10D70:
    /* 00010d70   4  move.w (fffff2f4,A4),D0 */
    c->pc = 0x00010d70u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10D74:
    /* 00010d74   4  mulu.w (fffff2f6,A4),D0 */
    c->pc = 0x00010d74u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0au));
    rc_mulu(c, 0, t0);

L_10D78:
    /* 00010d78   2  moveq #0,D1 */
    c->pc = 0x00010d78u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_10D7A:
    /* 00010d7a   2  move.w D0,D1 */
    c->pc = 0x00010d7au;
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10D7C:
    /* 00010d7c   4  move.l D1,(fffff31c,A4) */
    c->pc = 0x00010d7cu;
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xce4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10D80:
    /* 00010d80   4  move.l (fffff31c,A4),D0 */
    c->pc = 0x00010d80u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xce4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10D84:
    /* 00010d84   2  lsr.l #1,D0 */
    c->pc = 0x00010d84u;
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_10D86:
    /* 00010d86   4  move.l D0,(fffff320,A4) */
    c->pc = 0x00010d86u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xce0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10D8A:
    /* 00010d8a   6  pea (00010001).l */
    c->pc = 0x00010d8au;
    rc_push32(c, m, 0x00010001u);

L_10D90:
    /* 00010d90   4  move.l (fffff31c,A4),-(A7) */
    c->pc = 0x00010d90u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xce4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10D94:
    /* 00010d94   4  jsr (ffff8338,A4) */
    c->pc = 0x00010d94u;
    /* vector 137: exec.library -198 */
    c->pc = 0x00010d98u;
    rc_os_call(c, m, 0, -198);

L_10D98:
    /* 00010d98   2  addq.w #8,A7 */
    c->pc = 0x00010d98u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_10D9A:
    /* 00010d9a   4  move.l D0,(fffff314,A4) */
    c->pc = 0x00010d9au;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xcecu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10D9E:
    /* 00010d9e   6  pea (00010001).l */
    c->pc = 0x00010d9eu;
    rc_push32(c, m, 0x00010001u);

L_10DA4:
    /* 00010da4   4  move.l (fffff320,A4),-(A7) */
    c->pc = 0x00010da4u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xce0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10DA8:
    /* 00010da8   4  jsr (ffff8338,A4) */
    c->pc = 0x00010da8u;
    /* vector 137: exec.library -198 */
    c->pc = 0x00010dacu;
    rc_os_call(c, m, 0, -198);

L_10DAC:
    /* 00010dac   2  addq.w #8,A7 */
    c->pc = 0x00010dacu;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_10DAE:
    /* 00010dae   4  move.l D0,(fffff318,A4) */
    c->pc = 0x00010daeu;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xce8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10DB2:
    /* 00010db2   4  pea (000003ed).l */
    c->pc = 0x00010db2u;
    rc_push32(c, m, 0x000003edu);

L_10DB6:
    /* 00010db6   4  pea (00010df2) */
    c->pc = 0x00010db6u;
    rc_push32(c, m, 0x00010df2u);

L_10DBA:
    /* 00010dba   4  jsr (ffff8290,A4) */
    c->pc = 0x00010dbau;
    /* vector 109 */
    rc_push32(c, m, 0x00010dbeu);
    rc_depth++;
    c->pc = 0x00020476u;
    return;

L_10DBE:
    /* 00010dbe   2  addq.w #8,A7 */
    c->pc = 0x00010dbeu;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_10DC0:
    /* 00010dc0   4  move.l D0,(fffffffc,A5) */
    c->pc = 0x00010dc0u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10DC4:
    /* 00010dc4   2  beq 00010de4 */
    c->pc = 0x00010dc4u;
    if (rc_cond(c, 7)) goto L_10DE4;

L_10DC6:
    /* 00010dc6   4  move.l (fffff320,A4),-(A7) */
    c->pc = 0x00010dc6u;
    t0 = rc_rd32(c, m, (c->a[4] - 0xce0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10DCA:
    /* 00010dca   4  move.l (fffff318,A4),-(A7) */
    c->pc = 0x00010dcau;
    t0 = rc_rd32(c, m, (c->a[4] - 0xce8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10DCE:
    /* 00010dce   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x00010dceu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10DD2:
    /* 00010dd2   4  jsr (ffff8314,A4) */
    c->pc = 0x00010dd2u;
    /* vector 131 */
    rc_push32(c, m, 0x00010dd6u);
    rc_depth++;
    c->pc = 0x00021476u;
    return;

L_10DD6:
    /* 00010dd6   4  lea (c,A7),A7 */
    c->pc = 0x00010dd6u;
    c->a[7] = (c->a[7] + 0xcu);

L_10DDA:
    /* 00010dda   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x00010ddau;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10DDE:
    /* 00010dde   4  jsr (ffff8296,A4) */
    c->pc = 0x00010ddeu;
    /* vector 110 */
    rc_push32(c, m, 0x00010de2u);
    rc_depth++;
    c->pc = 0x00020490u;
    return;

L_10DE2:
    /* 00010de2   2  addq.w #4,A7 */
    c->pc = 0x00010de2u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_10DE4:
    /* 00010de4   2  unlk A5 */
    c->pc = 0x00010de4u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_10DE6:
    /* 00010de6   2  rts */
    c->pc = 0x00010de6u;
    rc_ret(c, m);
    return;

}
