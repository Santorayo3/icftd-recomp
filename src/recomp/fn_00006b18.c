/* fn_00006b18 - 304 byte(s), 88 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00006b18(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00006b18u): goto L_6B18;
    case RC_ADDR(0x00006b1cu): goto L_6B1C;
    case RC_ADDR(0x00006b20u): goto L_6B20;
    case RC_ADDR(0x00006b24u): goto L_6B24;
    case RC_ADDR(0x00006b26u): goto L_6B26;
    case RC_ADDR(0x00006b2au): goto L_6B2A;
    case RC_ADDR(0x00006b2eu): goto L_6B2E;
    case RC_ADDR(0x00006b32u): goto L_6B32;
    case RC_ADDR(0x00006b38u): goto L_6B38;
    case RC_ADDR(0x00006b3cu): goto L_6B3C;
    case RC_ADDR(0x00006b40u): goto L_6B40;
    case RC_ADDR(0x00006b44u): goto L_6B44;
    case RC_ADDR(0x00006b46u): goto L_6B46;
    case RC_ADDR(0x00006b48u): goto L_6B48;
    case RC_ADDR(0x00006b4au): goto L_6B4A;
    case RC_ADDR(0x00006b50u): goto L_6B50;
    case RC_ADDR(0x00006b54u): goto L_6B54;
    case RC_ADDR(0x00006b58u): goto L_6B58;
    case RC_ADDR(0x00006b5au): goto L_6B5A;
    case RC_ADDR(0x00006b5eu): goto L_6B5E;
    case RC_ADDR(0x00006b62u): goto L_6B62;
    case RC_ADDR(0x00006b64u): goto L_6B64;
    case RC_ADDR(0x00006b68u): goto L_6B68;
    case RC_ADDR(0x00006b6cu): goto L_6B6C;
    case RC_ADDR(0x00006b70u): goto L_6B70;
    case RC_ADDR(0x00006b74u): goto L_6B74;
    case RC_ADDR(0x00006b76u): goto L_6B76;
    case RC_ADDR(0x00006b7cu): goto L_6B7C;
    case RC_ADDR(0x00006b7eu): goto L_6B7E;
    case RC_ADDR(0x00006b84u): goto L_6B84;
    case RC_ADDR(0x00006b86u): goto L_6B86;
    case RC_ADDR(0x00006b8eu): goto L_6B8E;
    case RC_ADDR(0x00006b94u): goto L_6B94;
    case RC_ADDR(0x00006b98u): goto L_6B98;
    case RC_ADDR(0x00006b9cu): goto L_6B9C;
    case RC_ADDR(0x00006b9eu): goto L_6B9E;
    case RC_ADDR(0x00006ba0u): goto L_6BA0;
    case RC_ADDR(0x00006ba2u): goto L_6BA2;
    case RC_ADDR(0x00006ba6u): goto L_6BA6;
    case RC_ADDR(0x00006baau): goto L_6BAA;
    case RC_ADDR(0x00006bacu): goto L_6BAC;
    case RC_ADDR(0x00006bb4u): goto L_6BB4;
    case RC_ADDR(0x00006bb6u): goto L_6BB6;
    case RC_ADDR(0x00006bbau): goto L_6BBA;
    case RC_ADDR(0x00006bbeu): goto L_6BBE;
    case RC_ADDR(0x00006bc0u): goto L_6BC0;
    case RC_ADDR(0x00006bc4u): goto L_6BC4;
    case RC_ADDR(0x00006bc6u): goto L_6BC6;
    case RC_ADDR(0x00006bceu): goto L_6BCE;
    case RC_ADDR(0x00006bd0u): goto L_6BD0;
    case RC_ADDR(0x00006bd8u): goto L_6BD8;
    case RC_ADDR(0x00006bdcu): goto L_6BDC;
    case RC_ADDR(0x00006bdeu): goto L_6BDE;
    case RC_ADDR(0x00006be4u): goto L_6BE4;
    case RC_ADDR(0x00006be8u): goto L_6BE8;
    case RC_ADDR(0x00006beau): goto L_6BEA;
    case RC_ADDR(0x00006becu): goto L_6BEC;
    case RC_ADDR(0x00006beeu): goto L_6BEE;
    case RC_ADDR(0x00006bf2u): goto L_6BF2;
    case RC_ADDR(0x00006bf4u): goto L_6BF4;
    case RC_ADDR(0x00006bf6u): goto L_6BF6;
    case RC_ADDR(0x00006bf8u): goto L_6BF8;
    case RC_ADDR(0x00006bfcu): goto L_6BFC;
    case RC_ADDR(0x00006c00u): goto L_6C00;
    case RC_ADDR(0x00006c02u): goto L_6C02;
    case RC_ADDR(0x00006c04u): goto L_6C04;
    case RC_ADDR(0x00006c06u): goto L_6C06;
    case RC_ADDR(0x00006c08u): goto L_6C08;
    case RC_ADDR(0x00006c0cu): goto L_6C0C;
    case RC_ADDR(0x00006c0eu): goto L_6C0E;
    case RC_ADDR(0x00006c10u): goto L_6C10;
    case RC_ADDR(0x00006c14u): goto L_6C14;
    case RC_ADDR(0x00006c18u): goto L_6C18;
    case RC_ADDR(0x00006c1cu): goto L_6C1C;
    case RC_ADDR(0x00006c20u): goto L_6C20;
    case RC_ADDR(0x00006c24u): goto L_6C24;
    case RC_ADDR(0x00006c28u): goto L_6C28;
    case RC_ADDR(0x00006c2au): goto L_6C2A;
    case RC_ADDR(0x00006c2eu): goto L_6C2E;
    case RC_ADDR(0x00006c32u): goto L_6C32;
    case RC_ADDR(0x00006c34u): goto L_6C34;
    case RC_ADDR(0x00006c36u): goto L_6C36;
    case RC_ADDR(0x00006c3au): goto L_6C3A;
    case RC_ADDR(0x00006c3cu): goto L_6C3C;
    case RC_ADDR(0x00006c40u): goto L_6C40;
    case RC_ADDR(0x00006c42u): goto L_6C42;
    case RC_ADDR(0x00006c44u): goto L_6C44;
    case RC_ADDR(0x00006c46u): goto L_6C46;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6B18:
    /* 00006b18   4  link.w A5,#fffffff8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b18u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_6B1C:
    /* 00006b1c   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b1cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6B20:
    /* 00006b20   4  jsr (00006a1a) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b20u);
    rc_push32(c, m, RC_ADDR(0x00006b24u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006a1au);
    return;

L_6B24:
    /* 00006b24   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b24u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6B26:
    /* 00006b26   4  move.w D0,(fffff260,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b26u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xda0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6B2A:
    /* 00006b2a   4  tst.w (fffff260,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b2au);
    t0 = rc_rd16(c, m, (c->a[4] - 0xda0u));
    rc_set_nzvc(c, t0, RC_W);

L_6B2E:
    /* 00006b2e   4  blt 00006c44 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b2eu);
    if (rc_cond(c, 13)) goto L_6C44;

L_6B32:
    /* 00006b32   6  move.l (c,A5),(fffffebe,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b32u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6B38:
    /* 00006b38   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b38u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6B3C:
    /* 00006b3c   4  pea (00006c48) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b3cu);
    rc_push32(c, m, RC_ADDR(0x00006c48u));

L_6B40:
    /* 00006b40   4  jsr (ffff82ba,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b40u);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x00006b44u));
    rc_depth++;
    c->pc = RC_ADDR(0x000208e8u);
    return;

L_6B44:
    /* 00006b44   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b44u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6B46:
    /* 00006b46   2  tst.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b46u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_6B48:
    /* 00006b48   2  bne 00006b5a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b48u);
    if (rc_cond(c, 6)) goto L_6B5A;

L_6B4A:
    /* 00006b4a   6  move.w #1,(fffff26c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b4au);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd94u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6B50:
    /* 00006b50   4  move.l (c,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b50u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6B54:
    /* 00006b54   4  jsr (00006c76) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b54u);
    rc_push32(c, m, RC_ADDR(0x00006b58u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006c76u);
    return;

L_6B58:
    /* 00006b58   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b58u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6B5A:
    /* 00006b5a   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b5au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6B5E:
    /* 00006b5e   4  jsr (00006c4c) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b5eu);
    rc_push32(c, m, RC_ADDR(0x00006b62u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006c4cu);
    return;

L_6B62:
    /* 00006b62   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b62u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6B64:
    /* 00006b64   4  move.w D0,(fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b64u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6B68:
    /* 00006b68   4  clr.w (fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b68u);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6B6C:
    /* 00006b6c   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b6cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6B70:
    /* 00006b70   4  cmpi.b #4a,(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b70u);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000004au);

L_6B74:
    /* 00006b74   2  bne 00006b94 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b74u);
    if (rc_cond(c, 6)) goto L_6B94;

L_6B76:
    /* 00006b76   6  cmpi.w #8,(ffff83c8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b76u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_6B7C:
    /* 00006b7c   2  bne 00006b94 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b7cu);
    if (rc_cond(c, 6)) goto L_6B94;

L_6B7E:
    /* 00006b7e   6  cmpi.w #5,(ffffefe4,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b7eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_6B84:
    /* 00006b84   2  bne 00006b94 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b84u);
    if (rc_cond(c, 6)) goto L_6B94;

L_6B86:
    /* 00006b86   8  move.l #ffffffba,(fffff264,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b86u);
    t0 = 0xffffffbau;
    rc_wr32(c, m, (c->a[4] - 0xd9cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6B8E:
    /* 00006b8e   6  move.w #1,(fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b8eu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6B94:
    /* 00006b94   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b94u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6B98:
    /* 00006b98   4  jsr (ffff82ae,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b98u);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x00006b9cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020820u);
    return;

L_6B9C:
    /* 00006b9c   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b9cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6B9E:
    /* 00006b9e   2  subq.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006b9eu);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_6BA0:
    /* 00006ba0   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ba0u);
    rc_ext_l(c, 0);

L_6BA2:
    /* 00006ba2   4  add.l D0,(8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ba2u);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_6BA6:
    /* 00006ba6   4  tst.w (fffff26e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006ba6u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd92u));
    rc_set_nzvc(c, t0, RC_W);

L_6BAA:
    /* 00006baa   2  beq 00006bb6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006baau);
    if (rc_cond(c, 7)) goto L_6BB6;

L_6BAC:
    /* 00006bac   8  move.l #6,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bacu);
    t0 = 0x00000006u;
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6BB4:
    /* 00006bb4   2  bra 00006bd8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bb4u);
    goto L_6BD8;

L_6BB6:
    /* 00006bb6   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bb6u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6BBA:
    /* 00006bba   4  cmpi.b #50,(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bbau);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000050u);

L_6BBE:
    /* 00006bbe   2  beq 00006bc6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bbeu);
    if (rc_cond(c, 7)) goto L_6BC6;

L_6BC0:
    /* 00006bc0   4  tst.w (fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bc0u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_6BC4:
    /* 00006bc4   2  bne 00006bd0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bc4u);
    if (rc_cond(c, 6)) goto L_6BD0;

L_6BC6:
    /* 00006bc6   8  move.l #8,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bc6u);
    t0 = 0x00000008u;
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6BCE:
    /* 00006bce   2  bra 00006bd8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bceu);
    goto L_6BD8;

L_6BD0:
    /* 00006bd0   8  move.l #5,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bd0u);
    t0 = 0x00000005u;
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6BD8:
    /* 00006bd8   4  tst.w (fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bd8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_6BDC:
    /* 00006bdc   2  beq 00006be4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bdcu);
    if (rc_cond(c, 7)) goto L_6BE4;

L_6BDE:
    /* 00006bde   6  move.w (fffff260,A4),(fffff262,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bdeu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xda0u));
    rc_wr16(c, m, (c->a[4] - 0xd9eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6BE4:
    /* 00006be4   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006be4u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6BE8:
    /* 00006be8   2  moveq #10,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006be8u);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_6BEA:
    /* 00006bea   2  asl.l D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006beau);
    c->d[0] = rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_6BEC:
    /* 00006bec   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006becu);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6BEE:
    /* 00006bee   4  move.l (fffff0e4,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006beeu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf1cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6BF2:
    /* 00006bf2   2  moveq #10,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bf2u);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_6BF4:
    /* 00006bf4   2  asl.l D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bf4u);
    c->d[0] = rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_6BF6:
    /* 00006bf6   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bf6u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6BF8:
    /* 00006bf8   4  move.l (fffff0e0,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bf8u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf20u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6BFC:
    /* 00006bfc   4  add.l (fffff264,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006bfcu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd9cu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_6C00:
    /* 00006c00   2  moveq #10,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c00u);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_6C02:
    /* 00006c02   2  asl.l D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c02u);
    c->d[0] = rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_6C04:
    /* 00006c04   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c04u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6C06:
    /* 00006c06   2  clr.w -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c06u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6C08:
    /* 00006c08   4  move.w (fffff260,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c08u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xda0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6C0C:
    /* 00006c0c   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c0cu);
    rc_ext_l(c, 0);

L_6C0E:
    /* 00006c0e   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c0eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_6C10:
    /* 00006c10   4  lea (fffff1d2,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c10u);
    c->a[0] = (c->a[4] - 0xe2eu);

L_6C14:
    /* 00006c14   4  move.l (0,A0,D0.w),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c14u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6C18:
    /* 00006c18   4  move.w #1,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c18u);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6C1C:
    /* 00006c1c   4  jsr (ffff8266,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c1cu);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00006c20u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_6C20:
    /* 00006c20   4  lea (14,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c20u);
    c->a[7] = (c->a[7] + 0x14u);

L_6C24:
    /* 00006c24   4  tst.w (fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c24u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_6C28:
    /* 00006c28   2  beq 00006c2e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c28u);
    if (rc_cond(c, 7)) goto L_6C2E;

L_6C2A:
    /* 00006c2a   4  clr.l (fffff264,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c2au);
    rc_wr32(c, m, (c->a[4] - 0xd9cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6C2E:
    /* 00006c2e   4  move.w (fffff260,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c2eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xda0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6C32:
    /* 00006c32   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c32u);
    rc_ext_l(c, 0);

L_6C34:
    /* 00006c34   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c34u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_6C36:
    /* 00006c36   4  lea (fffff1d2,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c36u);
    c->a[0] = (c->a[4] - 0xe2eu);

L_6C3A:
    /* 00006c3a   2  move.l D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c3au);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6C3C:
    /* 00006c3c   4  move.l (0,A0,D1.w),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c3cu);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6C40:
    /* 00006c40   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c40u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6C42:
    /* 00006c42   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c42u);
    rc_ret(c, m);
    return;

L_6C44:
    /* 00006c44   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c44u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6C46:
    /* 00006c46   2  bra 00006c40 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00006c46u);
    rc_tick();
    goto L_6C40;

}
