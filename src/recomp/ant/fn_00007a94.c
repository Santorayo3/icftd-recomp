/* fn_00007a94 - 156 byte(s), 49 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00007a94(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00007a94u): goto L_7A94;
    case RC_ADDR(0x00007a98u): goto L_7A98;
    case RC_ADDR(0x00007a9cu): goto L_7A9C;
    case RC_ADDR(0x00007aa0u): goto L_7AA0;
    case RC_ADDR(0x00007aa4u): goto L_7AA4;
    case RC_ADDR(0x00007aa6u): goto L_7AA6;
    case RC_ADDR(0x00007aa8u): goto L_7AA8;
    case RC_ADDR(0x00007aacu): goto L_7AAC;
    case RC_ADDR(0x00007ab0u): goto L_7AB0;
    case RC_ADDR(0x00007ab4u): goto L_7AB4;
    case RC_ADDR(0x00007ab6u): goto L_7AB6;
    case RC_ADDR(0x00007ab8u): goto L_7AB8;
    case RC_ADDR(0x00007abau): goto L_7ABA;
    case RC_ADDR(0x00007abeu): goto L_7ABE;
    case RC_ADDR(0x00007ac0u): goto L_7AC0;
    case RC_ADDR(0x00007ac2u): goto L_7AC2;
    case RC_ADDR(0x00007ac6u): goto L_7AC6;
    case RC_ADDR(0x00007accu): goto L_7ACC;
    case RC_ADDR(0x00007ad2u): goto L_7AD2;
    case RC_ADDR(0x00007ad6u): goto L_7AD6;
    case RC_ADDR(0x00007adcu): goto L_7ADC;
    case RC_ADDR(0x00007adeu): goto L_7ADE;
    case RC_ADDR(0x00007ae2u): goto L_7AE2;
    case RC_ADDR(0x00007ae6u): goto L_7AE6;
    case RC_ADDR(0x00007aeau): goto L_7AEA;
    case RC_ADDR(0x00007aecu): goto L_7AEC;
    case RC_ADDR(0x00007aeeu): goto L_7AEE;
    case RC_ADDR(0x00007af2u): goto L_7AF2;
    case RC_ADDR(0x00007af6u): goto L_7AF6;
    case RC_ADDR(0x00007afau): goto L_7AFA;
    case RC_ADDR(0x00007afcu): goto L_7AFC;
    case RC_ADDR(0x00007afeu): goto L_7AFE;
    case RC_ADDR(0x00007b00u): goto L_7B00;
    case RC_ADDR(0x00007b04u): goto L_7B04;
    case RC_ADDR(0x00007b06u): goto L_7B06;
    case RC_ADDR(0x00007b08u): goto L_7B08;
    case RC_ADDR(0x00007b0cu): goto L_7B0C;
    case RC_ADDR(0x00007b10u): goto L_7B10;
    case RC_ADDR(0x00007b14u): goto L_7B14;
    case RC_ADDR(0x00007b16u): goto L_7B16;
    case RC_ADDR(0x00007b18u): goto L_7B18;
    case RC_ADDR(0x00007b1au): goto L_7B1A;
    case RC_ADDR(0x00007b1cu): goto L_7B1C;
    case RC_ADDR(0x00007b1eu): goto L_7B1E;
    case RC_ADDR(0x00007b20u): goto L_7B20;
    case RC_ADDR(0x00007b24u): goto L_7B24;
    case RC_ADDR(0x00007b2au): goto L_7B2A;
    case RC_ADDR(0x00007b2cu): goto L_7B2C;
    case RC_ADDR(0x00007b2eu): goto L_7B2E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7A94:
    /* 00007a94   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00007a94u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_7A98:
    /* 00007a98   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00007a98u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7A9C:
    /* 00007a9c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007a9cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7AA0:
    /* 00007aa0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00007aa0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7AA4:
    /* 00007aa4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007aa4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7AA6:
    /* 00007aa6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007aa6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7AA8:
    /* 00007aa8   4  lea (ffff8be0,A4),A0 */
    c->pc = RC_ADDR(0x00007aa8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7420u);

L_7AAC:
    /* 00007aac   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00007aacu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7AB0:
    /* 00007ab0   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x00007ab0u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x00007ab4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_7AB4:
    /* 00007ab4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007ab4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7AB6:
    /* 00007ab6   2  tst.w D0 */
    c->pc = RC_ADDR(0x00007ab6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_7AB8:
    /* 00007ab8   2  bne 00007ad2 */
    c->pc = RC_ADDR(0x00007ab8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7AD2;

L_7ABA:
    /* 00007aba   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00007abau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7ABE:
    /* 00007abe   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007abeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7AC0:
    /* 00007ac0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00007ac0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_7AC2:
    /* 00007ac2   4  lea (ffff8d04,A4),A0 */
    c->pc = RC_ADDR(0x00007ac2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x72fcu);

L_7AC6:
    /* 00007ac6   6  move.w (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00007ac6u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7ACC:
    /* 00007acc   6  move.w #4a,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00007accu);
    rc_step(c, m, 16);
    t0 = 0x0000004au;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7AD2:
    /* 00007ad2   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00007ad2u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7AD6:
    /* 00007ad6   6  cmpi.w #49,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00007ad6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000049u);

L_7ADC:
    /* 00007adc   2  blt 00007a9c */
    c->pc = RC_ADDR(0x00007adcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_7A9C; }

L_7ADE:
    /* 00007ade   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00007adeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7AE2:
    /* 00007ae2   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00007ae2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7AE6:
    /* 00007ae6   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00007ae6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7AEA:
    /* 00007aea   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007aeau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7AEC:
    /* 00007aec   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00007aecu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_7AEE:
    /* 00007aee   4  lea (ffff8be0,A4),A0 */
    c->pc = RC_ADDR(0x00007aeeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7420u);

L_7AF2:
    /* 00007af2   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00007af2u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7AF6:
    /* 00007af6   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x00007af6u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x00007afau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_7AFA:
    /* 00007afa   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007afau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7AFC:
    /* 00007afc   2  tst.w D0 */
    c->pc = RC_ADDR(0x00007afcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_7AFE:
    /* 00007afe   2  bne 00007b20 */
    c->pc = RC_ADDR(0x00007afeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7B20;

L_7B00:
    /* 00007b00   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00007b00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B04:
    /* 00007b04   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007b04u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7B06:
    /* 00007b06   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00007b06u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_7B08:
    /* 00007b08   4  lea (ffff8d04,A4),A0 */
    c->pc = RC_ADDR(0x00007b08u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x72fcu);

L_7B0C:
    /* 00007b0c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00007b0cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7B10:
    /* 00007b10   4  cmp.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00007b10u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_7B14:
    /* 00007b14   2  bne 00007b1c */
    c->pc = RC_ADDR(0x00007b14u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7B1C;

L_7B16:
    /* 00007b16   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00007b16u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_7B18:
    /* 00007b18   2  unlk A5 */
    c->pc = RC_ADDR(0x00007b18u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_7B1A:
    /* 00007b1a   2  rts */
    c->pc = RC_ADDR(0x00007b1au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_7B1C:
    /* 00007b1c   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00007b1cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_7B1E:
    /* 00007b1e   2  bra 00007b18 */
    c->pc = RC_ADDR(0x00007b1eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_7B18;

L_7B20:
    /* 00007b20   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00007b20u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7B24:
    /* 00007b24   6  cmpi.w #49,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00007b24u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000049u);

L_7B2A:
    /* 00007b2a   2  blt 00007ae2 */
    c->pc = RC_ADDR(0x00007b2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_7AE2; }

L_7B2C:
    /* 00007b2c   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00007b2cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_7B2E:
    /* 00007b2e   2  bra 00007b18 */
    c->pc = RC_ADDR(0x00007b2eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_7B18;

}
