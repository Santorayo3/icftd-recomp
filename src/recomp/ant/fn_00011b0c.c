/* fn_00011b0c - 250 byte(s), 69 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00011b0c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00011b0cu): goto L_11B0C;
    case RC_ADDR(0x00011b10u): goto L_11B10;
    case RC_ADDR(0x00011b14u): goto L_11B14;
    case RC_ADDR(0x00011b18u): goto L_11B18;
    case RC_ADDR(0x00011b1cu): goto L_11B1C;
    case RC_ADDR(0x00011b20u): goto L_11B20;
    case RC_ADDR(0x00011b24u): goto L_11B24;
    case RC_ADDR(0x00011b28u): goto L_11B28;
    case RC_ADDR(0x00011b2cu): goto L_11B2C;
    case RC_ADDR(0x00011b30u): goto L_11B30;
    case RC_ADDR(0x00011b34u): goto L_11B34;
    case RC_ADDR(0x00011b38u): goto L_11B38;
    case RC_ADDR(0x00011b3cu): goto L_11B3C;
    case RC_ADDR(0x00011b40u): goto L_11B40;
    case RC_ADDR(0x00011b44u): goto L_11B44;
    case RC_ADDR(0x00011b48u): goto L_11B48;
    case RC_ADDR(0x00011b4cu): goto L_11B4C;
    case RC_ADDR(0x00011b50u): goto L_11B50;
    case RC_ADDR(0x00011b54u): goto L_11B54;
    case RC_ADDR(0x00011b58u): goto L_11B58;
    case RC_ADDR(0x00011b5cu): goto L_11B5C;
    case RC_ADDR(0x00011b60u): goto L_11B60;
    case RC_ADDR(0x00011b62u): goto L_11B62;
    case RC_ADDR(0x00011b64u): goto L_11B64;
    case RC_ADDR(0x00011b66u): goto L_11B66;
    case RC_ADDR(0x00011b68u): goto L_11B68;
    case RC_ADDR(0x00011b6au): goto L_11B6A;
    case RC_ADDR(0x00011b6eu): goto L_11B6E;
    case RC_ADDR(0x00011b72u): goto L_11B72;
    case RC_ADDR(0x00011b76u): goto L_11B76;
    case RC_ADDR(0x00011b7au): goto L_11B7A;
    case RC_ADDR(0x00011b7cu): goto L_11B7C;
    case RC_ADDR(0x00011b7eu): goto L_11B7E;
    case RC_ADDR(0x00011b80u): goto L_11B80;
    case RC_ADDR(0x00011b82u): goto L_11B82;
    case RC_ADDR(0x00011b86u): goto L_11B86;
    case RC_ADDR(0x00011b8au): goto L_11B8A;
    case RC_ADDR(0x00011b8eu): goto L_11B8E;
    case RC_ADDR(0x00011b90u): goto L_11B90;
    case RC_ADDR(0x00011b94u): goto L_11B94;
    case RC_ADDR(0x00011b96u): goto L_11B96;
    case RC_ADDR(0x00011b9au): goto L_11B9A;
    case RC_ADDR(0x00011b9eu): goto L_11B9E;
    case RC_ADDR(0x00011ba2u): goto L_11BA2;
    case RC_ADDR(0x00011ba6u): goto L_11BA6;
    case RC_ADDR(0x00011baau): goto L_11BAA;
    case RC_ADDR(0x00011baeu): goto L_11BAE;
    case RC_ADDR(0x00011bb2u): goto L_11BB2;
    case RC_ADDR(0x00011bb6u): goto L_11BB6;
    case RC_ADDR(0x00011bbau): goto L_11BBA;
    case RC_ADDR(0x00011bbeu): goto L_11BBE;
    case RC_ADDR(0x00011bc2u): goto L_11BC2;
    case RC_ADDR(0x00011bc6u): goto L_11BC6;
    case RC_ADDR(0x00011bcau): goto L_11BCA;
    case RC_ADDR(0x00011bceu): goto L_11BCE;
    case RC_ADDR(0x00011bd2u): goto L_11BD2;
    case RC_ADDR(0x00011bd6u): goto L_11BD6;
    case RC_ADDR(0x00011bdau): goto L_11BDA;
    case RC_ADDR(0x00011bdeu): goto L_11BDE;
    case RC_ADDR(0x00011be2u): goto L_11BE2;
    case RC_ADDR(0x00011be6u): goto L_11BE6;
    case RC_ADDR(0x00011beau): goto L_11BEA;
    case RC_ADDR(0x00011beeu): goto L_11BEE;
    case RC_ADDR(0x00011bf2u): goto L_11BF2;
    case RC_ADDR(0x00011bf6u): goto L_11BF6;
    case RC_ADDR(0x00011bfau): goto L_11BFA;
    case RC_ADDR(0x00011bfeu): goto L_11BFE;
    case RC_ADDR(0x00011c00u): goto L_11C00;
    case RC_ADDR(0x00011c02u): goto L_11C02;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11B0C:
    /* 00011b0c   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x00011b0cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_11B10:
    /* 00011b10   4  jsr (ffff801a,A4) */
    c->pc = RC_ADDR(0x00011b10u);
    rc_step(c, m, 18);
    /* vector 4 */
    rc_push32(c, m, RC_ADDR(0x00011b14u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b10u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00000b9eu);
    return;

L_11B14:
    /* 00011b14   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00011b14u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11B18:
    /* 00011b18   4  pea (0000005f).l */
    c->pc = RC_ADDR(0x00011b18u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000005fu);

L_11B1C:
    /* 00011b1c   4  pea (00011c06) */
    c->pc = RC_ADDR(0x00011b1cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00011c06u));

L_11B20:
    /* 00011b20   4  jsr (ffff8026,A4) */
    c->pc = RC_ADDR(0x00011b20u);
    rc_step(c, m, 18);
    /* vector 6 */
    rc_push32(c, m, RC_ADDR(0x00011b24u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b1cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_11B24:
    /* 00011b24   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00011b24u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_11B28:
    /* 00011b28   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00011b28u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11B2C:
    /* 00011b2c   4  pea (00000069).l */
    c->pc = RC_ADDR(0x00011b2cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000069u);

L_11B30:
    /* 00011b30   4  pea (00011c33) */
    c->pc = RC_ADDR(0x00011b30u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00011c33u));

L_11B34:
    /* 00011b34   4  jsr (ffff8026,A4) */
    c->pc = RC_ADDR(0x00011b34u);
    rc_step(c, m, 18);
    /* vector 6 */
    rc_push32(c, m, RC_ADDR(0x00011b38u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b1cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_11B38:
    /* 00011b38   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00011b38u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_11B3C:
    /* 00011b3c   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00011b3cu);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11B40:
    /* 00011b40   4  pea (00000073).l */
    c->pc = RC_ADDR(0x00011b40u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000073u);

L_11B44:
    /* 00011b44   4  pea (00011c63) */
    c->pc = RC_ADDR(0x00011b44u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00011c63u));

L_11B48:
    /* 00011b48   4  jsr (ffff8026,A4) */
    c->pc = RC_ADDR(0x00011b48u);
    rc_step(c, m, 18);
    /* vector 6 */
    rc_push32(c, m, RC_ADDR(0x00011b4cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b1cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00000ce4u);
    return;

L_11B4C:
    /* 00011b4c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00011b4cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_11B50:
    /* 00011b50   4  jsr (00011a52) */
    c->pc = RC_ADDR(0x00011b50u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00011b54u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011a52u);
    return;

L_11B54:
    /* 00011b54   4  move.w D0,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00011b54u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11B58:
    /* 00011b58   4  jsr (ffff8020,A4) */
    c->pc = RC_ADDR(0x00011b58u);
    rc_step(c, m, 18);
    /* vector 5 */
    rc_push32(c, m, RC_ADDR(0x00011b5cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b16u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00000c80u);
    return;

L_11B5C:
    /* 00011b5c   4  tst.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x00011b5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_set_nzvc(c, t0, RC_W);

L_11B60:
    /* 00011b60   2  bne 00011b68 */
    c->pc = RC_ADDR(0x00011b60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_11B68;

L_11B62:
    /* 00011b62   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00011b62u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_11B64:
    /* 00011b64   2  unlk A5 */
    c->pc = RC_ADDR(0x00011b64u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11B66:
    /* 00011b66   2  rts */
    c->pc = RC_ADDR(0x00011b66u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_11B68:
    /* 00011b68   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00011b68u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_11B6A:
    /* 00011b6a   4  move.l (ffffa430,A4),-(A7) */
    c->pc = RC_ADDR(0x00011b6au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11B6E:
    /* 00011b6e   4  pea (00011c91) */
    c->pc = RC_ADDR(0x00011b6eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00011c91u));

L_11B72:
    /* 00011b72   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x00011b72u);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x00011b76u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_11B76:
    /* 00011b76   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00011b76u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_11B7A:
    /* 00011b7a   2  tst.w D0 */
    c->pc = RC_ADDR(0x00011b7au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_11B7C:
    /* 00011b7c   2  bne 00011b82 */
    c->pc = RC_ADDR(0x00011b7cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_11B82;

L_11B7E:
    /* 00011b7e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00011b7eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_11B80:
    /* 00011b80   2  bra 00011b64 */
    c->pc = RC_ADDR(0x00011b80u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_11B64;

L_11B82:
    /* 00011b82   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x00011b82u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_11B86:
    /* 00011b86   4  move.l (ffffa430,A4),-(A7) */
    c->pc = RC_ADDR(0x00011b86u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11B8A:
    /* 00011b8a   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x00011b8au);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x00011b8eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023daau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022518u);
    return;

L_11B8E:
    /* 00011b8e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00011b8eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_11B90:
    /* 00011b90   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00011b90u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11B94:
    /* 00011b94   2  beq 00011c00 */
    c->pc = RC_ADDR(0x00011b94u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11C00;

L_11B96:
    /* 00011b96   4  lea (ffff83da,A4),A0 */
    c->pc = RC_ADDR(0x00011b96u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7c26u);

L_11B9A:
    /* 00011b9a   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00011b9au);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11B9E:
    /* 00011b9e   4  lea (ffff849c,A4),A0 */
    c->pc = RC_ADDR(0x00011b9eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b64u);

L_11BA2:
    /* 00011ba2   4  move.l A0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00011ba2u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11BA6:
    /* 00011ba6   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00011ba6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_11BAA:
    /* 00011baa   4  suba.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00011baau);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] -= t0;

L_11BAE:
    /* 00011bae   4  move.l A0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00011baeu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11BB2:
    /* 00011bb2   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00011bb2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11BB6:
    /* 00011bb6   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00011bb6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11BBA:
    /* 00011bba   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00011bbau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11BBE:
    /* 00011bbe   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00011bbeu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00011bc2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_11BC2:
    /* 00011bc2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00011bc2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_11BC6:
    /* 00011bc6   4  lea (ffffd59e,A4),A0 */
    c->pc = RC_ADDR(0x00011bc6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2a62u);

L_11BCA:
    /* 00011bca   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00011bcau);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11BCE:
    /* 00011bce   4  lea (7b2,A4),A0 */
    c->pc = RC_ADDR(0x00011bceu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x7b2u);

L_11BD2:
    /* 00011bd2   4  move.l A0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00011bd2u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11BD6:
    /* 00011bd6   4  movea.l (fffffff4,A5),A0 */
    c->pc = RC_ADDR(0x00011bd6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_11BDA:
    /* 00011bda   4  suba.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00011bdau);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] -= t0;

L_11BDE:
    /* 00011bde   4  move.l A0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00011bdeu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_11BE2:
    /* 00011be2   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00011be2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11BE6:
    /* 00011be6   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00011be6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11BEA:
    /* 00011bea   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00011beau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11BEE:
    /* 00011bee   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00011beeu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00011bf2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_11BF2:
    /* 00011bf2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00011bf2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_11BF6:
    /* 00011bf6   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00011bf6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11BFA:
    /* 00011bfa   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x00011bfau);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x00011bfeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_11BFE:
    /* 00011bfe   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00011bfeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_11C00:
    /* 00011c00   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00011c00u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_11C02:
    /* 00011c02   4  bra 00011b64 */
    c->pc = RC_ADDR(0x00011c02u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_11B64;

}
