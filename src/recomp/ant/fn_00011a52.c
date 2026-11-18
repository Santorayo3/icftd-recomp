/* fn_00011a52 - 178 byte(s), 46 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00011a52(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00011a52u): goto L_11A52;
    case RC_ADDR(0x00011a56u): goto L_11A56;
    case RC_ADDR(0x00011a5au): goto L_11A5A;
    case RC_ADDR(0x00011a60u): goto L_11A60;
    case RC_ADDR(0x00011a66u): goto L_11A66;
    case RC_ADDR(0x00011a6au): goto L_11A6A;
    case RC_ADDR(0x00011a6cu): goto L_11A6C;
    case RC_ADDR(0x00011a70u): goto L_11A70;
    case RC_ADDR(0x00011a72u): goto L_11A72;
    case RC_ADDR(0x00011a76u): goto L_11A76;
    case RC_ADDR(0x00011a7au): goto L_11A7A;
    case RC_ADDR(0x00011a82u): goto L_11A82;
    case RC_ADDR(0x00011a84u): goto L_11A84;
    case RC_ADDR(0x00011a88u): goto L_11A88;
    case RC_ADDR(0x00011a8cu): goto L_11A8C;
    case RC_ADDR(0x00011a8eu): goto L_11A8E;
    case RC_ADDR(0x00011a92u): goto L_11A92;
    case RC_ADDR(0x00011a98u): goto L_11A98;
    case RC_ADDR(0x00011a9au): goto L_11A9A;
    case RC_ADDR(0x00011aa0u): goto L_11AA0;
    case RC_ADDR(0x00011aa4u): goto L_11AA4;
    case RC_ADDR(0x00011aaau): goto L_11AAA;
    case RC_ADDR(0x00011aacu): goto L_11AAC;
    case RC_ADDR(0x00011ab0u): goto L_11AB0;
    case RC_ADDR(0x00011ab6u): goto L_11AB6;
    case RC_ADDR(0x00011abau): goto L_11ABA;
    case RC_ADDR(0x00011abeu): goto L_11ABE;
    case RC_ADDR(0x00011ac0u): goto L_11AC0;
    case RC_ADDR(0x00011ac4u): goto L_11AC4;
    case RC_ADDR(0x00011ac8u): goto L_11AC8;
    case RC_ADDR(0x00011accu): goto L_11ACC;
    case RC_ADDR(0x00011ad0u): goto L_11AD0;
    case RC_ADDR(0x00011ad4u): goto L_11AD4;
    case RC_ADDR(0x00011ad8u): goto L_11AD8;
    case RC_ADDR(0x00011adcu): goto L_11ADC;
    case RC_ADDR(0x00011ae0u): goto L_11AE0;
    case RC_ADDR(0x00011ae4u): goto L_11AE4;
    case RC_ADDR(0x00011ae8u): goto L_11AE8;
    case RC_ADDR(0x00011aeeu): goto L_11AEE;
    case RC_ADDR(0x00011af0u): goto L_11AF0;
    case RC_ADDR(0x00011af4u): goto L_11AF4;
    case RC_ADDR(0x00011af6u): goto L_11AF6;
    case RC_ADDR(0x00011afau): goto L_11AFA;
    case RC_ADDR(0x00011afcu): goto L_11AFC;
    case RC_ADDR(0x00011b00u): goto L_11B00;
    case RC_ADDR(0x00011b02u): goto L_11B02;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11A52:
    /* 00011a52   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x00011a52u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_11A56:
    /* 00011a56   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00011a56u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11A5A:
    /* 00011a5a   6  move.w #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00011a5au);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11A60:
    /* 00011a60   6  move.w #64,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00011a60u);
    rc_step(c, m, 16);
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11A66:
    /* 00011a66   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x00011a66u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_11A6A:
    /* 00011a6a   2  beq 00011a72 */
    c->pc = RC_ADDR(0x00011a6au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11A72;

L_11A6C:
    /* 00011a6c   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00011a6cu);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x00011a70u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_11A70:
    /* 00011a70   2  bra 00011a66 */
    c->pc = RC_ADDR(0x00011a70u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_11A66;

L_11A72:
    /* 00011a72   4  clr.l (fffffff6,A5) */
    c->pc = RC_ADDR(0x00011a72u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11A76:
    /* 00011a76   4  addq.l #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00011a76u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_11A7A:
    /* 00011a7a   8  cmpi.l #4e20,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00011a7au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_L, t0, 0x00004e20u);

L_11A82:
    /* 00011a82   2  blt 00011a76 */
    c->pc = RC_ADDR(0x00011a82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_11A76; }

L_11A84:
    /* 00011a84   4  clr.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x00011a84u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4db2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11A88:
    /* 00011a88   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x00011a88u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_11A8C:
    /* 00011a8c   2  bne 00011af0 */
    c->pc = RC_ADDR(0x00011a8cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_11AF0;

L_11A8E:
    /* 00011a8e   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00011a8eu);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x00011a92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_11A92:
    /* 00011a92   6  cmpi.w #ffff,(ffffb24c,A4) */
    c->pc = RC_ADDR(0x00011a92u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_11A98:
    /* 00011a98   2  bne 00011aa4 */
    c->pc = RC_ADDR(0x00011a98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_11AA4;

L_11A9A:
    /* 00011a9a   6  move.w #4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00011a9au);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11AA0:
    /* 00011aa0   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00011aa0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11AA4:
    /* 00011aa4   6  cmpi.w #1,(ffffb24c,A4) */
    c->pc = RC_ADDR(0x00011aa4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_11AAA:
    /* 00011aaa   2  bne 00011ab6 */
    c->pc = RC_ADDR(0x00011aaau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_11AB6;

L_11AAC:
    /* 00011aac   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00011aacu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11AB0:
    /* 00011ab0   6  move.w #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00011ab0u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11AB6:
    /* 00011ab6   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00011ab6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11ABA:
    /* 00011aba   4  cmp.w (ffffb24c,A4),D0 */
    c->pc = RC_ADDR(0x00011abau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_11ABE:
    /* 00011abe   2  beq 00011ae8 */
    c->pc = RC_ADDR(0x00011abeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11AE8;

L_11AC0:
    /* 00011ac0   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x00011ac0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11AC4:
    /* 00011ac4   4  pea (00000091).l */
    c->pc = RC_ADDR(0x00011ac4u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000091u);

L_11AC8:
    /* 00011ac8   4  pea (00011b04) */
    c->pc = RC_ADDR(0x00011ac8u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00011b04u));

L_11ACC:
    /* 00011acc   4  jsr (ffff8026,A4) */
    c->pc = RC_ADDR(0x00011accu);
    rc_step(c, m, 18);
    /* vector 6 */
    rc_push32(c, m, RC_ADDR(0x00011ad0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b1cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_11AD0:
    /* 00011ad0   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00011ad0u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_11AD4:
    /* 00011ad4   4  move.w (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00011ad4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11AD8:
    /* 00011ad8   4  pea (0000009b).l */
    c->pc = RC_ADDR(0x00011ad8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000009bu);

L_11ADC:
    /* 00011adc   4  pea (00011b08) */
    c->pc = RC_ADDR(0x00011adcu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00011b08u));

L_11AE0:
    /* 00011ae0   4  jsr (ffff8026,A4) */
    c->pc = RC_ADDR(0x00011ae0u);
    rc_step(c, m, 18);
    /* vector 6 */
    rc_push32(c, m, RC_ADDR(0x00011ae4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b1cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_11AE4:
    /* 00011ae4   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00011ae4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_11AE8:
    /* 00011ae8   6  move.w (ffffb24c,A4),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00011ae8u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11AEE:
    /* 00011aee   2  bra 00011a88 */
    c->pc = RC_ADDR(0x00011aeeu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_11A88;

L_11AF0:
    /* 00011af0   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x00011af0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_11AF4:
    /* 00011af4   2  beq 00011afc */
    c->pc = RC_ADDR(0x00011af4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11AFC;

L_11AF6:
    /* 00011af6   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00011af6u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x00011afau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_11AFA:
    /* 00011afa   2  bra 00011af0 */
    c->pc = RC_ADDR(0x00011afau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_11AF0;

L_11AFC:
    /* 00011afc   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00011afcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11B00:
    /* 00011b00   2  unlk A5 */
    c->pc = RC_ADDR(0x00011b00u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11B02:
    /* 00011b02   2  rts */
    c->pc = RC_ADDR(0x00011b02u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
