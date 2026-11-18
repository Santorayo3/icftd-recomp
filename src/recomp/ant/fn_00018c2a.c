/* fn_00018c2a - 390 byte(s), 113 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00018c2a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00018c2au): goto L_18C2A;
    case RC_ADDR(0x00018c2eu): goto L_18C2E;
    case RC_ADDR(0x00018c32u): goto L_18C32;
    case RC_ADDR(0x00018c34u): goto L_18C34;
    case RC_ADDR(0x00018c38u): goto L_18C38;
    case RC_ADDR(0x00018c3cu): goto L_18C3C;
    case RC_ADDR(0x00018c40u): goto L_18C40;
    case RC_ADDR(0x00018c42u): goto L_18C42;
    case RC_ADDR(0x00018c46u): goto L_18C46;
    case RC_ADDR(0x00018c4au): goto L_18C4A;
    case RC_ADDR(0x00018c4eu): goto L_18C4E;
    case RC_ADDR(0x00018c52u): goto L_18C52;
    case RC_ADDR(0x00018c56u): goto L_18C56;
    case RC_ADDR(0x00018c58u): goto L_18C58;
    case RC_ADDR(0x00018c5au): goto L_18C5A;
    case RC_ADDR(0x00018c5cu): goto L_18C5C;
    case RC_ADDR(0x00018c60u): goto L_18C60;
    case RC_ADDR(0x00018c62u): goto L_18C62;
    case RC_ADDR(0x00018c66u): goto L_18C66;
    case RC_ADDR(0x00018c6au): goto L_18C6A;
    case RC_ADDR(0x00018c6eu): goto L_18C6E;
    case RC_ADDR(0x00018c70u): goto L_18C70;
    case RC_ADDR(0x00018c74u): goto L_18C74;
    case RC_ADDR(0x00018c76u): goto L_18C76;
    case RC_ADDR(0x00018c7au): goto L_18C7A;
    case RC_ADDR(0x00018c7eu): goto L_18C7E;
    case RC_ADDR(0x00018c82u): goto L_18C82;
    case RC_ADDR(0x00018c86u): goto L_18C86;
    case RC_ADDR(0x00018c88u): goto L_18C88;
    case RC_ADDR(0x00018c8au): goto L_18C8A;
    case RC_ADDR(0x00018c8eu): goto L_18C8E;
    case RC_ADDR(0x00018c92u): goto L_18C92;
    case RC_ADDR(0x00018c94u): goto L_18C94;
    case RC_ADDR(0x00018c96u): goto L_18C96;
    case RC_ADDR(0x00018c9au): goto L_18C9A;
    case RC_ADDR(0x00018c9cu): goto L_18C9C;
    case RC_ADDR(0x00018ca0u): goto L_18CA0;
    case RC_ADDR(0x00018ca4u): goto L_18CA4;
    case RC_ADDR(0x00018ca8u): goto L_18CA8;
    case RC_ADDR(0x00018cacu): goto L_18CAC;
    case RC_ADDR(0x00018cb0u): goto L_18CB0;
    case RC_ADDR(0x00018cb4u): goto L_18CB4;
    case RC_ADDR(0x00018cb6u): goto L_18CB6;
    case RC_ADDR(0x00018cbau): goto L_18CBA;
    case RC_ADDR(0x00018cbeu): goto L_18CBE;
    case RC_ADDR(0x00018cc0u): goto L_18CC0;
    case RC_ADDR(0x00018cc2u): goto L_18CC2;
    case RC_ADDR(0x00018cc6u): goto L_18CC6;
    case RC_ADDR(0x00018cc8u): goto L_18CC8;
    case RC_ADDR(0x00018cccu): goto L_18CCC;
    case RC_ADDR(0x00018cd0u): goto L_18CD0;
    case RC_ADDR(0x00018cd4u): goto L_18CD4;
    case RC_ADDR(0x00018cd8u): goto L_18CD8;
    case RC_ADDR(0x00018cdcu): goto L_18CDC;
    case RC_ADDR(0x00018ce0u): goto L_18CE0;
    case RC_ADDR(0x00018ce2u): goto L_18CE2;
    case RC_ADDR(0x00018ce6u): goto L_18CE6;
    case RC_ADDR(0x00018ceau): goto L_18CEA;
    case RC_ADDR(0x00018cecu): goto L_18CEC;
    case RC_ADDR(0x00018cf0u): goto L_18CF0;
    case RC_ADDR(0x00018cf4u): goto L_18CF4;
    case RC_ADDR(0x00018cf8u): goto L_18CF8;
    case RC_ADDR(0x00018cfcu): goto L_18CFC;
    case RC_ADDR(0x00018d00u): goto L_18D00;
    case RC_ADDR(0x00018d04u): goto L_18D04;
    case RC_ADDR(0x00018d06u): goto L_18D06;
    case RC_ADDR(0x00018d0cu): goto L_18D0C;
    case RC_ADDR(0x00018d10u): goto L_18D10;
    case RC_ADDR(0x00018d14u): goto L_18D14;
    case RC_ADDR(0x00018d18u): goto L_18D18;
    case RC_ADDR(0x00018d1au): goto L_18D1A;
    case RC_ADDR(0x00018d1eu): goto L_18D1E;
    case RC_ADDR(0x00018d20u): goto L_18D20;
    case RC_ADDR(0x00018d24u): goto L_18D24;
    case RC_ADDR(0x00018d26u): goto L_18D26;
    case RC_ADDR(0x00018d2au): goto L_18D2A;
    case RC_ADDR(0x00018d2eu): goto L_18D2E;
    case RC_ADDR(0x00018d32u): goto L_18D32;
    case RC_ADDR(0x00018d36u): goto L_18D36;
    case RC_ADDR(0x00018d38u): goto L_18D38;
    case RC_ADDR(0x00018d3au): goto L_18D3A;
    case RC_ADDR(0x00018d3eu): goto L_18D3E;
    case RC_ADDR(0x00018d42u): goto L_18D42;
    case RC_ADDR(0x00018d46u): goto L_18D46;
    case RC_ADDR(0x00018d4au): goto L_18D4A;
    case RC_ADDR(0x00018d4cu): goto L_18D4C;
    case RC_ADDR(0x00018d50u): goto L_18D50;
    case RC_ADDR(0x00018d54u): goto L_18D54;
    case RC_ADDR(0x00018d58u): goto L_18D58;
    case RC_ADDR(0x00018d5cu): goto L_18D5C;
    case RC_ADDR(0x00018d5eu): goto L_18D5E;
    case RC_ADDR(0x00018d62u): goto L_18D62;
    case RC_ADDR(0x00018d66u): goto L_18D66;
    case RC_ADDR(0x00018d6au): goto L_18D6A;
    case RC_ADDR(0x00018d6eu): goto L_18D6E;
    case RC_ADDR(0x00018d72u): goto L_18D72;
    case RC_ADDR(0x00018d76u): goto L_18D76;
    case RC_ADDR(0x00018d78u): goto L_18D78;
    case RC_ADDR(0x00018d7cu): goto L_18D7C;
    case RC_ADDR(0x00018d80u): goto L_18D80;
    case RC_ADDR(0x00018d82u): goto L_18D82;
    case RC_ADDR(0x00018d86u): goto L_18D86;
    case RC_ADDR(0x00018d88u): goto L_18D88;
    case RC_ADDR(0x00018d8cu): goto L_18D8C;
    case RC_ADDR(0x00018d90u): goto L_18D90;
    case RC_ADDR(0x00018d94u): goto L_18D94;
    case RC_ADDR(0x00018d98u): goto L_18D98;
    case RC_ADDR(0x00018d9cu): goto L_18D9C;
    case RC_ADDR(0x00018da0u): goto L_18DA0;
    case RC_ADDR(0x00018da2u): goto L_18DA2;
    case RC_ADDR(0x00018da6u): goto L_18DA6;
    case RC_ADDR(0x00018daau): goto L_18DAA;
    case RC_ADDR(0x00018dacu): goto L_18DAC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18C2A:
    /* 00018c2a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00018c2au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_18C2E:
    /* 00018c2e   4  tst.w (1b46,A4) */
    c->pc = RC_ADDR(0x00018c2eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b46u));
    rc_set_nzvc(c, t0, RC_W);

L_18C32:
    /* 00018c32   2  beq 00018c3c */
    c->pc = RC_ADDR(0x00018c32u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18C3C;

L_18C34:
    /* 00018c34   4  clr.w (1b46,A4) */
    c->pc = RC_ADDR(0x00018c34u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b46u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18C38:
    /* 00018c38   4  addq.w #1,(712,A4) */
    c->pc = RC_ADDR(0x00018c38u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x712u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_18C3C:
    /* 00018c3c   4  tst.w (14f6,A4) */
    c->pc = RC_ADDR(0x00018c3cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f6u));
    rc_set_nzvc(c, t0, RC_W);

L_18C40:
    /* 00018c40   2  beq 00018c5c */
    c->pc = RC_ADDR(0x00018c40u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18C5C;

L_18C42:
    /* 00018c42   4  clr.w (14e6,A4) */
    c->pc = RC_ADDR(0x00018c42u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14e6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18C46:
    /* 00018c46   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00018c46u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C4A:
    /* 00018c4a   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00018c4au);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C4E:
    /* 00018c4e   4  pea (00018db0) */
    c->pc = RC_ADDR(0x00018c4eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00018db0u));

L_18C52:
    /* 00018c52   4  jsr (00018a56) */
    c->pc = RC_ADDR(0x00018c52u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018c56u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018a56u);
    return;

L_18C56:
    /* 00018c56   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018c56u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18C58:
    /* 00018c58   2  unlk A5 */
    c->pc = RC_ADDR(0x00018c58u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18C5A:
    /* 00018c5a   2  rts */
    c->pc = RC_ADDR(0x00018c5au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_18C5C:
    /* 00018c5c   4  tst.w (1adc,A4) */
    c->pc = RC_ADDR(0x00018c5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1adcu));
    rc_set_nzvc(c, t0, RC_W);

L_18C60:
    /* 00018c60   2  beq 00018c96 */
    c->pc = RC_ADDR(0x00018c60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18C96;

L_18C62:
    /* 00018c62   4  clr.w (14e6,A4) */
    c->pc = RC_ADDR(0x00018c62u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14e6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18C66:
    /* 00018c66   4  clr.w (1adc,A4) */
    c->pc = RC_ADDR(0x00018c66u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1adcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18C6A:
    /* 00018c6a   4  tst.w (1b44,A4) */
    c->pc = RC_ADDR(0x00018c6au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b44u));
    rc_set_nzvc(c, t0, RC_W);

L_18C6E:
    /* 00018c6e   2  beq 00018c8a */
    c->pc = RC_ADDR(0x00018c6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18C8A;

L_18C70:
    /* 00018c70   4  tst.w (1b46,A4) */
    c->pc = RC_ADDR(0x00018c70u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b46u));
    rc_set_nzvc(c, t0, RC_W);

L_18C74:
    /* 00018c74   2  bne 00018c8a */
    c->pc = RC_ADDR(0x00018c74u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18C8A;

L_18C76:
    /* 00018c76   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00018c76u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C7A:
    /* 00018c7a   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00018c7au);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C7E:
    /* 00018c7e   4  pea (00018e5f) */
    c->pc = RC_ADDR(0x00018c7eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00018e5fu));

L_18C82:
    /* 00018c82   4  jsr (00018a56) */
    c->pc = RC_ADDR(0x00018c82u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018c86u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018a56u);
    return;

L_18C86:
    /* 00018c86   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018c86u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18C88:
    /* 00018c88   2  bra 00018c94 */
    c->pc = RC_ADDR(0x00018c88u);
    rc_step(c, m, 10);
    goto L_18C94;

L_18C8A:
    /* 00018c8a   4  move.w #fa,-(A7) */
    c->pc = RC_ADDR(0x00018c8au);
    rc_step(c, m, 12);
    t0 = 0x000000fau;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18C8E:
    /* 00018c8e   4  jsr (ffff8044,A4) */
    c->pc = RC_ADDR(0x00018c8eu);
    rc_step(c, m, 18);
    /* vector 11 */
    rc_push32(c, m, RC_ADDR(0x00018c92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b3au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000302cu);
    return;

L_18C92:
    /* 00018c92   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00018c92u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_18C94:
    /* 00018c94   2  bra 00018c58 */
    c->pc = RC_ADDR(0x00018c94u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_18C58;

L_18C96:
    /* 00018c96   4  tst.w (6ec,A4) */
    c->pc = RC_ADDR(0x00018c96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6ecu));
    rc_set_nzvc(c, t0, RC_W);

L_18C9A:
    /* 00018c9a   2  beq 00018cc2 */
    c->pc = RC_ADDR(0x00018c9au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18CC2;

L_18C9C:
    /* 00018c9c   4  clr.w (14e6,A4) */
    c->pc = RC_ADDR(0x00018c9cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14e6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18CA0:
    /* 00018ca0   4  clr.w (6ec,A4) */
    c->pc = RC_ADDR(0x00018ca0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6ecu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18CA4:
    /* 00018ca4   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00018ca4u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CA8:
    /* 00018ca8   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00018ca8u);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CAC:
    /* 00018cac   4  pea (00018ed5) */
    c->pc = RC_ADDR(0x00018cacu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00018ed5u));

L_18CB0:
    /* 00018cb0   4  jsr (00018a56) */
    c->pc = RC_ADDR(0x00018cb0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018cb4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018a56u);
    return;

L_18CB4:
    /* 00018cb4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018cb4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18CB6:
    /* 00018cb6   4  move.w #fe,-(A7) */
    c->pc = RC_ADDR(0x00018cb6u);
    rc_step(c, m, 12);
    t0 = 0x000000feu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CBA:
    /* 00018cba   4  jsr (ffff8044,A4) */
    c->pc = RC_ADDR(0x00018cbau);
    rc_step(c, m, 18);
    /* vector 11 */
    rc_push32(c, m, RC_ADDR(0x00018cbeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b3au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000302cu);
    return;

L_18CBE:
    /* 00018cbe   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00018cbeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_18CC0:
    /* 00018cc0   2  bra 00018c58 */
    c->pc = RC_ADDR(0x00018cc0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_18C58;

L_18CC2:
    /* 00018cc2   4  tst.w (1b40,A4) */
    c->pc = RC_ADDR(0x00018cc2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b40u));
    rc_set_nzvc(c, t0, RC_W);

L_18CC6:
    /* 00018cc6   2  beq 00018ce6 */
    c->pc = RC_ADDR(0x00018cc6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18CE6;

L_18CC8:
    /* 00018cc8   4  clr.w (14e6,A4) */
    c->pc = RC_ADDR(0x00018cc8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14e6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18CCC:
    /* 00018ccc   4  clr.w (1b40,A4) */
    c->pc = RC_ADDR(0x00018cccu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b40u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18CD0:
    /* 00018cd0   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00018cd0u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CD4:
    /* 00018cd4   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00018cd4u);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CD8:
    /* 00018cd8   4  pea (00018f13) */
    c->pc = RC_ADDR(0x00018cd8u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00018f13u));

L_18CDC:
    /* 00018cdc   4  jsr (00018a56) */
    c->pc = RC_ADDR(0x00018cdcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018ce0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018a56u);
    return;

L_18CE0:
    /* 00018ce0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018ce0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18CE2:
    /* 00018ce2   4  bra 00018c58 */
    c->pc = RC_ADDR(0x00018ce2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_18C58;

L_18CE6:
    /* 00018ce6   4  tst.w (1b42,A4) */
    c->pc = RC_ADDR(0x00018ce6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b42u));
    rc_set_nzvc(c, t0, RC_W);

L_18CEA:
    /* 00018cea   2  beq 00018d14 */
    c->pc = RC_ADDR(0x00018ceau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18D14;

L_18CEC:
    /* 00018cec   4  clr.w (14e6,A4) */
    c->pc = RC_ADDR(0x00018cecu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14e6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18CF0:
    /* 00018cf0   4  clr.w (1b42,A4) */
    c->pc = RC_ADDR(0x00018cf0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b42u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18CF4:
    /* 00018cf4   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00018cf4u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CF8:
    /* 00018cf8   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00018cf8u);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18CFC:
    /* 00018cfc   4  pea (00018f5b) */
    c->pc = RC_ADDR(0x00018cfcu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00018f5bu));

L_18D00:
    /* 00018d00   4  jsr (00018a56) */
    c->pc = RC_ADDR(0x00018d00u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018d04u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018a56u);
    return;

L_18D04:
    /* 00018d04   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018d04u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18D06:
    /* 00018d06   6  move.w #17,(fffff78c,A4) */
    c->pc = RC_ADDR(0x00018d06u);
    rc_step(c, m, 16);
    t0 = 0x00000017u;
    rc_wr16(c, m, (c->a[4] - 0x874u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D0C:
    /* 00018d0c   4  jsr (00018be8) */
    c->pc = RC_ADDR(0x00018d0cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018d10u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018be8u);
    return;

L_18D10:
    /* 00018d10   4  bra 00018c58 */
    c->pc = RC_ADDR(0x00018d10u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_18C58;

L_18D14:
    /* 00018d14   4  tst.w (6c4,A4) */
    c->pc = RC_ADDR(0x00018d14u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6c4u));
    rc_set_nzvc(c, t0, RC_W);

L_18D18:
    /* 00018d18   2  bne 00018d20 */
    c->pc = RC_ADDR(0x00018d18u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_18D20;

L_18D1A:
    /* 00018d1a   4  tst.w (6c8,A4) */
    c->pc = RC_ADDR(0x00018d1au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6c8u));
    rc_set_nzvc(c, t0, RC_W);

L_18D1E:
    /* 00018d1e   2  beq 00018d58 */
    c->pc = RC_ADDR(0x00018d1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18D58;

L_18D20:
    /* 00018d20   4  tst.w (6c8,A4) */
    c->pc = RC_ADDR(0x00018d20u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6c8u));
    rc_set_nzvc(c, t0, RC_W);

L_18D24:
    /* 00018d24   2  beq 00018d3a */
    c->pc = RC_ADDR(0x00018d24u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18D3A;

L_18D26:
    /* 00018d26   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00018d26u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D2A:
    /* 00018d2a   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00018d2au);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D2E:
    /* 00018d2e   4  pea (00018fec) */
    c->pc = RC_ADDR(0x00018d2eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00018fecu));

L_18D32:
    /* 00018d32   4  jsr (00018a56) */
    c->pc = RC_ADDR(0x00018d32u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018d36u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018a56u);
    return;

L_18D36:
    /* 00018d36   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018d36u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18D38:
    /* 00018d38   2  bra 00018d4c */
    c->pc = RC_ADDR(0x00018d38u);
    rc_step(c, m, 10);
    goto L_18D4C;

L_18D3A:
    /* 00018d3a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00018d3au);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D3E:
    /* 00018d3e   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00018d3eu);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D42:
    /* 00018d42   4  pea (00019040) */
    c->pc = RC_ADDR(0x00018d42u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00019040u));

L_18D46:
    /* 00018d46   4  jsr (00018a56) */
    c->pc = RC_ADDR(0x00018d46u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018d4au));
    rc_depth++;
    c->pc = RC_ADDR(0x00018a56u);
    return;

L_18D4A:
    /* 00018d4a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018d4au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18D4C:
    /* 00018d4c   4  clr.w (6c8,A4) */
    c->pc = RC_ADDR(0x00018d4cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6c8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18D50:
    /* 00018d50   4  clr.w (6c4,A4) */
    c->pc = RC_ADDR(0x00018d50u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6c4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18D54:
    /* 00018d54   4  clr.w (14e6,A4) */
    c->pc = RC_ADDR(0x00018d54u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14e6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18D58:
    /* 00018d58   4  tst.w (1a80,A4) */
    c->pc = RC_ADDR(0x00018d58u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1a80u));
    rc_set_nzvc(c, t0, RC_W);

L_18D5C:
    /* 00018d5c   2  beq 00018d82 */
    c->pc = RC_ADDR(0x00018d5cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18D82;

L_18D5E:
    /* 00018d5e   4  clr.w (14e6,A4) */
    c->pc = RC_ADDR(0x00018d5eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14e6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18D62:
    /* 00018d62   4  clr.w (1a80,A4) */
    c->pc = RC_ADDR(0x00018d62u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1a80u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18D66:
    /* 00018d66   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00018d66u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D6A:
    /* 00018d6a   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00018d6au);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D6E:
    /* 00018d6e   4  pea (00019088) */
    c->pc = RC_ADDR(0x00018d6eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00019088u));

L_18D72:
    /* 00018d72   4  jsr (00018a56) */
    c->pc = RC_ADDR(0x00018d72u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018d76u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018a56u);
    return;

L_18D76:
    /* 00018d76   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018d76u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18D78:
    /* 00018d78   4  move.w #c3,-(A7) */
    c->pc = RC_ADDR(0x00018d78u);
    rc_step(c, m, 12);
    t0 = 0x000000c3u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D7C:
    /* 00018d7c   4  jsr (ffff8044,A4) */
    c->pc = RC_ADDR(0x00018d7cu);
    rc_step(c, m, 18);
    /* vector 11 */
    rc_push32(c, m, RC_ADDR(0x00018d80u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b3au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000302cu);
    return;

L_18D80:
    /* 00018d80   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00018d80u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_18D82:
    /* 00018d82   4  tst.w (ffffb4c8,A4) */
    c->pc = RC_ADDR(0x00018d82u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4b38u));
    rc_set_nzvc(c, t0, RC_W);

L_18D86:
    /* 00018d86   2  beq 00018dac */
    c->pc = RC_ADDR(0x00018d86u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18DAC;

L_18D88:
    /* 00018d88   4  clr.w (14e6,A4) */
    c->pc = RC_ADDR(0x00018d88u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14e6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18D8C:
    /* 00018d8c   4  clr.w (ffffb4c8,A4) */
    c->pc = RC_ADDR(0x00018d8cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4b38u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18D90:
    /* 00018d90   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00018d90u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D94:
    /* 00018d94   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x00018d94u);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18D98:
    /* 00018d98   4  pea (000190db) */
    c->pc = RC_ADDR(0x00018d98u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000190dbu));

L_18D9C:
    /* 00018d9c   4  jsr (00018a56) */
    c->pc = RC_ADDR(0x00018d9cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00018da0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018a56u);
    return;

L_18DA0:
    /* 00018da0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018da0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18DA2:
    /* 00018da2   4  move.w #c4,-(A7) */
    c->pc = RC_ADDR(0x00018da2u);
    rc_step(c, m, 12);
    t0 = 0x000000c4u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18DA6:
    /* 00018da6   4  jsr (ffff8044,A4) */
    c->pc = RC_ADDR(0x00018da6u);
    rc_step(c, m, 18);
    /* vector 11 */
    rc_push32(c, m, RC_ADDR(0x00018daau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b3au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000302cu);
    return;

L_18DAA:
    /* 00018daa   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00018daau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_18DAC:
    /* 00018dac   4  bra 00018c58 */
    c->pc = RC_ADDR(0x00018dacu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_18C58;

}
