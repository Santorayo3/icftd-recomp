/* fn_00006af0 - 106 byte(s), 32 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00006af0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00006af0u): goto L_6AF0;
    case RC_ADDR(0x00006af4u): goto L_6AF4;
    case RC_ADDR(0x00006afau): goto L_6AFA;
    case RC_ADDR(0x00006afcu): goto L_6AFC;
    case RC_ADDR(0x00006b00u): goto L_6B00;
    case RC_ADDR(0x00006b04u): goto L_6B04;
    case RC_ADDR(0x00006b08u): goto L_6B08;
    case RC_ADDR(0x00006b0cu): goto L_6B0C;
    case RC_ADDR(0x00006b0eu): goto L_6B0E;
    case RC_ADDR(0x00006b12u): goto L_6B12;
    case RC_ADDR(0x00006b16u): goto L_6B16;
    case RC_ADDR(0x00006b1au): goto L_6B1A;
    case RC_ADDR(0x00006b1cu): goto L_6B1C;
    case RC_ADDR(0x00006b20u): goto L_6B20;
    case RC_ADDR(0x00006b22u): goto L_6B22;
    case RC_ADDR(0x00006b26u): goto L_6B26;
    case RC_ADDR(0x00006b28u): goto L_6B28;
    case RC_ADDR(0x00006b2cu): goto L_6B2C;
    case RC_ADDR(0x00006b30u): goto L_6B30;
    case RC_ADDR(0x00006b34u): goto L_6B34;
    case RC_ADDR(0x00006b36u): goto L_6B36;
    case RC_ADDR(0x00006b3au): goto L_6B3A;
    case RC_ADDR(0x00006b3cu): goto L_6B3C;
    case RC_ADDR(0x00006b40u): goto L_6B40;
    case RC_ADDR(0x00006b44u): goto L_6B44;
    case RC_ADDR(0x00006b48u): goto L_6B48;
    case RC_ADDR(0x00006b4au): goto L_6B4A;
    case RC_ADDR(0x00006b4cu): goto L_6B4C;
    case RC_ADDR(0x00006b50u): goto L_6B50;
    case RC_ADDR(0x00006b54u): goto L_6B54;
    case RC_ADDR(0x00006b56u): goto L_6B56;
    case RC_ADDR(0x00006b58u): goto L_6B58;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6AF0:
    /* 00006af0   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x00006af0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_6AF4:
    /* 00006af4   6  move.l (fffff812,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00006af4u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7eeu));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6AFA:
    /* 00006afa   2  moveq #e,D0 */
    c->pc = RC_ADDR(0x00006afau);
    rc_step(c, m, 4);
    c->d[0] = 0x0000000eu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6AFC:
    /* 00006afc   4  sub.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00006afcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_6B00:
    /* 00006b00   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00006b00u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6B04:
    /* 00006b04   4  addq.w #1,(8,A5) */
    c->pc = RC_ADDR(0x00006b04u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6B08:
    /* 00006b08   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00006b08u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_6B0C:
    /* 00006b0c   2  beq 00006b22 */
    c->pc = RC_ADDR(0x00006b0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6B22;

L_6B0E:
    /* 00006b0e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00006b0eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_6B12:
    /* 00006b12   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00006b12u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_6B16:
    /* 00006b16   4  cmpi.b #2a,(A0) */
    c->pc = RC_ADDR(0x00006b16u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002au);

L_6B1A:
    /* 00006b1a   2  bne 00006b20 */
    c->pc = RC_ADDR(0x00006b1au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6B20;

L_6B1C:
    /* 00006b1c   4  subq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00006b1cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6B20:
    /* 00006b20   2  bra 00006b08 */
    c->pc = RC_ADDR(0x00006b20u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6B08;

L_6B22:
    /* 00006b22   4  tst.w (8,A5) */
    c->pc = RC_ADDR(0x00006b22u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_6B26:
    /* 00006b26   2  beq 00006b3c */
    c->pc = RC_ADDR(0x00006b26u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6B3C;

L_6B28:
    /* 00006b28   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00006b28u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_6B2C:
    /* 00006b2c   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00006b2cu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_6B30:
    /* 00006b30   4  cmpi.b #23,(A0) */
    c->pc = RC_ADDR(0x00006b30u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000023u);

L_6B34:
    /* 00006b34   2  bne 00006b3a */
    c->pc = RC_ADDR(0x00006b34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6B3A;

L_6B36:
    /* 00006b36   4  subq.w #1,(8,A5) */
    c->pc = RC_ADDR(0x00006b36u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6B3A:
    /* 00006b3a   2  bra 00006b22 */
    c->pc = RC_ADDR(0x00006b3au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6B22;

L_6B3C:
    /* 00006b3c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00006b3cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_6B40:
    /* 00006b40   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00006b40u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_6B44:
    /* 00006b44   4  cmpi.b #a,(A0) */
    c->pc = RC_ADDR(0x00006b44u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000000au);

L_6B48:
    /* 00006b48   2  beq 00006b4c */
    c->pc = RC_ADDR(0x00006b48u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6B4C;

L_6B4A:
    /* 00006b4a   2  bra 00006b3c */
    c->pc = RC_ADDR(0x00006b4au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6B3C;

L_6B4C:
    /* 00006b4c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00006b4cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6B50:
    /* 00006b50   4  jsr (000069f2) */
    c->pc = RC_ADDR(0x00006b50u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006b54u));
    rc_depth++;
    c->pc = RC_ADDR(0x000069f2u);
    return;

L_6B54:
    /* 00006b54   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006b54u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6B56:
    /* 00006b56   2  unlk A5 */
    c->pc = RC_ADDR(0x00006b56u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6B58:
    /* 00006b58   2  rts */
    c->pc = RC_ADDR(0x00006b58u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
