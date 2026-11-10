/* fn_00008af0 - 182 byte(s), 52 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00008af0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00008af0u): goto L_8AF0;
    case RC_ADDR(0x00008af4u): goto L_8AF4;
    case RC_ADDR(0x00008af6u): goto L_8AF6;
    case RC_ADDR(0x00008afau): goto L_8AFA;
    case RC_ADDR(0x00008afeu): goto L_8AFE;
    case RC_ADDR(0x00008b00u): goto L_8B00;
    case RC_ADDR(0x00008b04u): goto L_8B04;
    case RC_ADDR(0x00008b08u): goto L_8B08;
    case RC_ADDR(0x00008b0cu): goto L_8B0C;
    case RC_ADDR(0x00008b10u): goto L_8B10;
    case RC_ADDR(0x00008b16u): goto L_8B16;
    case RC_ADDR(0x00008b18u): goto L_8B18;
    case RC_ADDR(0x00008b1cu): goto L_8B1C;
    case RC_ADDR(0x00008b20u): goto L_8B20;
    case RC_ADDR(0x00008b22u): goto L_8B22;
    case RC_ADDR(0x00008b28u): goto L_8B28;
    case RC_ADDR(0x00008b2cu): goto L_8B2C;
    case RC_ADDR(0x00008b30u): goto L_8B30;
    case RC_ADDR(0x00008b34u): goto L_8B34;
    case RC_ADDR(0x00008b38u): goto L_8B38;
    case RC_ADDR(0x00008b3cu): goto L_8B3C;
    case RC_ADDR(0x00008b40u): goto L_8B40;
    case RC_ADDR(0x00008b44u): goto L_8B44;
    case RC_ADDR(0x00008b48u): goto L_8B48;
    case RC_ADDR(0x00008b4cu): goto L_8B4C;
    case RC_ADDR(0x00008b50u): goto L_8B50;
    case RC_ADDR(0x00008b56u): goto L_8B56;
    case RC_ADDR(0x00008b58u): goto L_8B58;
    case RC_ADDR(0x00008b5cu): goto L_8B5C;
    case RC_ADDR(0x00008b5eu): goto L_8B5E;
    case RC_ADDR(0x00008b62u): goto L_8B62;
    case RC_ADDR(0x00008b68u): goto L_8B68;
    case RC_ADDR(0x00008b6au): goto L_8B6A;
    case RC_ADDR(0x00008b6cu): goto L_8B6C;
    case RC_ADDR(0x00008b6eu): goto L_8B6E;
    case RC_ADDR(0x00008b70u): goto L_8B70;
    case RC_ADDR(0x00008b72u): goto L_8B72;
    case RC_ADDR(0x00008b76u): goto L_8B76;
    case RC_ADDR(0x00008b7au): goto L_8B7A;
    case RC_ADDR(0x00008b7cu): goto L_8B7C;
    case RC_ADDR(0x00008b80u): goto L_8B80;
    case RC_ADDR(0x00008b84u): goto L_8B84;
    case RC_ADDR(0x00008b86u): goto L_8B86;
    case RC_ADDR(0x00008b8au): goto L_8B8A;
    case RC_ADDR(0x00008b8eu): goto L_8B8E;
    case RC_ADDR(0x00008b92u): goto L_8B92;
    case RC_ADDR(0x00008b96u): goto L_8B96;
    case RC_ADDR(0x00008b98u): goto L_8B98;
    case RC_ADDR(0x00008b9cu): goto L_8B9C;
    case RC_ADDR(0x00008ba0u): goto L_8BA0;
    case RC_ADDR(0x00008ba2u): goto L_8BA2;
    case RC_ADDR(0x00008ba4u): goto L_8BA4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_8AF0:
    /* 00008af0   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00008af0u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_8AF4:
    /* 00008af4   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00008af4u);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8AF6:
    /* 00008af6   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x00008af6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_8AFA:
    /* 00008afa   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00008afau);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8AFE:
    /* 00008afe   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x00008afeu);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_8B00:
    /* 00008b00   4  beq 00008b9c */
    c->pc = RC_ADDR(0x00008b00u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_8B9C;

L_8B04:
    /* 00008b04   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00008b04u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_8B08:
    /* 00008b08   4  bne 00008b9c */
    c->pc = RC_ADDR(0x00008b08u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_8B9C;

L_8B0C:
    /* 00008b0c   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x00008b0cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_8B10:
    /* 00008b10   6  btst #0,(b,A0) */
    c->pc = RC_ADDR(0x00008b10u);
    rc_step(c, m);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_8B16:
    /* 00008b16   2  beq 00008b58 */
    c->pc = RC_ADDR(0x00008b16u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_8B58;

L_8B18:
    /* 00008b18   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x00008b18u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_8B1C:
    /* 00008b1c   4  cmpa.l (b4,A4),A0 */
    c->pc = RC_ADDR(0x00008b1cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0xb4u));
    rc_cmp(c, RC_L, c->a[0], t0);

L_8B20:
    /* 00008b20   2  bne 00008b56 */
    c->pc = RC_ADDR(0x00008b20u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_8B56;

L_8B22:
    /* 00008b22   6  move.w (8,A2),(b8,A4) */
    c->pc = RC_ADDR(0x00008b22u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[2] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0xb8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8B28:
    /* 00008b28   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x00008b28u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_8B2C:
    /* 00008b2c   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x00008b2cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_8B30:
    /* 00008b30   4  move.w (8,A1),D0 */
    c->pc = RC_ADDR(0x00008b30u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[1] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8B34:
    /* 00008b34   4  add.w (c,A2),D0 */
    c->pc = RC_ADDR(0x00008b34u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[2] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_8B38:
    /* 00008b38   4  move.w D0,(ba,A4) */
    c->pc = RC_ADDR(0x00008b38u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xbau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8B3C:
    /* 00008b3c   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x00008b3cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_8B40:
    /* 00008b40   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x00008b40u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_8B44:
    /* 00008b44   4  move.w (a,A1),D0 */
    c->pc = RC_ADDR(0x00008b44u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[1] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8B48:
    /* 00008b48   4  add.w (e,A2),D0 */
    c->pc = RC_ADDR(0x00008b48u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[2] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_8B4C:
    /* 00008b4c   4  move.w D0,(bc,A4) */
    c->pc = RC_ADDR(0x00008b4cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xbcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8B50:
    /* 00008b50   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00008b50u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8B56:
    /* 00008b56   2  bra 00008b96 */
    c->pc = RC_ADDR(0x00008b56u);
    rc_step(c, m);
    goto L_8B96;

L_8B58:
    /* 00008b58   4  tst.w (14,A5) */
    c->pc = RC_ADDR(0x00008b58u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_8B5C:
    /* 00008b5c   2  bne 00008b6a */
    c->pc = RC_ADDR(0x00008b5cu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_8B6A;

L_8B5E:
    /* 00008b5e   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x00008b5eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_8B62:
    /* 00008b62   6  btst #1,(b,A0) */
    c->pc = RC_ADDR(0x00008b62u);
    rc_step(c, m);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_8B68:
    /* 00008b68   2  beq 00008b6e */
    c->pc = RC_ADDR(0x00008b68u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_8B6E;

L_8B6A:
    /* 00008b6a   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00008b6au);
    rc_step(c, m);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_8B6C:
    /* 00008b6c   2  bra 00008b70 */
    c->pc = RC_ADDR(0x00008b6cu);
    rc_step(c, m);
    goto L_8B70;

L_8B6E:
    /* 00008b6e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00008b6eu);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_8B70:
    /* 00008b70   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00008b70u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8B72:
    /* 00008b72   4  move.l (14,A2),D0 */
    c->pc = RC_ADDR(0x00008b72u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[2] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_8B76:
    /* 00008b76   4  add.l (10,A5),D0 */
    c->pc = RC_ADDR(0x00008b76u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_8B7A:
    /* 00008b7a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00008b7au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8B7C:
    /* 00008b7c   4  move.l (10,A2),D0 */
    c->pc = RC_ADDR(0x00008b7cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[2] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_8B80:
    /* 00008b80   4  add.l (c,A5),D0 */
    c->pc = RC_ADDR(0x00008b80u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_8B84:
    /* 00008b84   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00008b84u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8B86:
    /* 00008b86   4  move.l (2c,A2),-(A7) */
    c->pc = RC_ADDR(0x00008b86u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[2] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8B8A:
    /* 00008b8a   4  jsr (00008af0) */
    c->pc = RC_ADDR(0x00008b8au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00008b8eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00008af0u);
    return;

L_8B8E:
    /* 00008b8e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00008b8eu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_8B92:
    /* 00008b92   4  or.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00008b92u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_8B96:
    /* 00008b96   2  movea.l (A2),A2 */
    c->pc = RC_ADDR(0x00008b96u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[2] = t0;

L_8B98:
    /* 00008b98   4  bra 00008afe */
    c->pc = RC_ADDR(0x00008b98u);
    rc_step(c, m);
    rc_tick();
    goto L_8AFE;

L_8B9C:
    /* 00008b9c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00008b9cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8BA0:
    /* 00008ba0   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x00008ba0u);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_8BA2:
    /* 00008ba2   2  unlk A5 */
    c->pc = RC_ADDR(0x00008ba2u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_8BA4:
    /* 00008ba4   2  rts */
    c->pc = RC_ADDR(0x00008ba4u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
