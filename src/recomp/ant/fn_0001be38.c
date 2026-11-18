/* fn_0001be38 - 220 byte(s), 61 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001be38(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001be38u): goto L_1BE38;
    case RC_ADDR(0x0001be3cu): goto L_1BE3C;
    case RC_ADDR(0x0001be40u): goto L_1BE40;
    case RC_ADDR(0x0001be44u): goto L_1BE44;
    case RC_ADDR(0x0001be48u): goto L_1BE48;
    case RC_ADDR(0x0001be4au): goto L_1BE4A;
    case RC_ADDR(0x0001be4eu): goto L_1BE4E;
    case RC_ADDR(0x0001be52u): goto L_1BE52;
    case RC_ADDR(0x0001be56u): goto L_1BE56;
    case RC_ADDR(0x0001be5au): goto L_1BE5A;
    case RC_ADDR(0x0001be5eu): goto L_1BE5E;
    case RC_ADDR(0x0001be62u): goto L_1BE62;
    case RC_ADDR(0x0001be64u): goto L_1BE64;
    case RC_ADDR(0x0001be68u): goto L_1BE68;
    case RC_ADDR(0x0001be6cu): goto L_1BE6C;
    case RC_ADDR(0x0001be70u): goto L_1BE70;
    case RC_ADDR(0x0001be74u): goto L_1BE74;
    case RC_ADDR(0x0001be78u): goto L_1BE78;
    case RC_ADDR(0x0001be7cu): goto L_1BE7C;
    case RC_ADDR(0x0001be80u): goto L_1BE80;
    case RC_ADDR(0x0001be84u): goto L_1BE84;
    case RC_ADDR(0x0001be88u): goto L_1BE88;
    case RC_ADDR(0x0001be8au): goto L_1BE8A;
    case RC_ADDR(0x0001be8eu): goto L_1BE8E;
    case RC_ADDR(0x0001be92u): goto L_1BE92;
    case RC_ADDR(0x0001be96u): goto L_1BE96;
    case RC_ADDR(0x0001be98u): goto L_1BE98;
    case RC_ADDR(0x0001be9cu): goto L_1BE9C;
    case RC_ADDR(0x0001be9eu): goto L_1BE9E;
    case RC_ADDR(0x0001bea2u): goto L_1BEA2;
    case RC_ADDR(0x0001bea6u): goto L_1BEA6;
    case RC_ADDR(0x0001beaau): goto L_1BEAA;
    case RC_ADDR(0x0001beacu): goto L_1BEAC;
    case RC_ADDR(0x0001beb0u): goto L_1BEB0;
    case RC_ADDR(0x0001beb2u): goto L_1BEB2;
    case RC_ADDR(0x0001beb4u): goto L_1BEB4;
    case RC_ADDR(0x0001beb6u): goto L_1BEB6;
    case RC_ADDR(0x0001bebcu): goto L_1BEBC;
    case RC_ADDR(0x0001bebeu): goto L_1BEBE;
    case RC_ADDR(0x0001bec2u): goto L_1BEC2;
    case RC_ADDR(0x0001becau): goto L_1BECA;
    case RC_ADDR(0x0001beccu): goto L_1BECC;
    case RC_ADDR(0x0001bed0u): goto L_1BED0;
    case RC_ADDR(0x0001bed2u): goto L_1BED2;
    case RC_ADDR(0x0001bed6u): goto L_1BED6;
    case RC_ADDR(0x0001bed8u): goto L_1BED8;
    case RC_ADDR(0x0001bedcu): goto L_1BEDC;
    case RC_ADDR(0x0001bee0u): goto L_1BEE0;
    case RC_ADDR(0x0001bee4u): goto L_1BEE4;
    case RC_ADDR(0x0001bee8u): goto L_1BEE8;
    case RC_ADDR(0x0001beecu): goto L_1BEEC;
    case RC_ADDR(0x0001beeeu): goto L_1BEEE;
    case RC_ADDR(0x0001bef2u): goto L_1BEF2;
    case RC_ADDR(0x0001bef6u): goto L_1BEF6;
    case RC_ADDR(0x0001befau): goto L_1BEFA;
    case RC_ADDR(0x0001befeu): goto L_1BEFE;
    case RC_ADDR(0x0001bf00u): goto L_1BF00;
    case RC_ADDR(0x0001bf02u): goto L_1BF02;
    case RC_ADDR(0x0001bf06u): goto L_1BF06;
    case RC_ADDR(0x0001bf0eu): goto L_1BF0E;
    case RC_ADDR(0x0001bf12u): goto L_1BF12;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BE38:
    /* 0001be38   4  link.w A5,#fffffff2 */
    c->pc = RC_ADDR(0x0001be38u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xeu;

L_1BE3C:
    /* 0001be3c   4  clr.w (1108,A4) */
    c->pc = RC_ADDR(0x0001be3cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1108u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BE40:
    /* 0001be40   4  clr.l (fffffff2,A5) */
    c->pc = RC_ADDR(0x0001be40u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1BE44:
    /* 0001be44   4  move.l (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0001be44u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BE48:
    /* 0001be48   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001be48u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BE4A:
    /* 0001be4a   4  lea (ffffce60,A4),A0 */
    c->pc = RC_ADDR(0x0001be4au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x31a0u);

L_1BE4E:
    /* 0001be4e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001be4eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BE52:
    /* 0001be52   4  add.w (8,A5),D1 */
    c->pc = RC_ADDR(0x0001be52u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BE56:
    /* 0001be56   4  sub.w (e6c,A4),D1 */
    c->pc = RC_ADDR(0x0001be56u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BE5A:
    /* 0001be5a   4  move.w D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001be5au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BE5E:
    /* 0001be5e   4  move.l (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0001be5eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BE62:
    /* 0001be62   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001be62u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BE64:
    /* 0001be64   4  lea (ffffce68,A4),A0 */
    c->pc = RC_ADDR(0x0001be64u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3198u);

L_1BE68:
    /* 0001be68   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001be68u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BE6C:
    /* 0001be6c   4  add.w (a,A5),D1 */
    c->pc = RC_ADDR(0x0001be6cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BE70:
    /* 0001be70   4  sub.w (e6e,A4),D1 */
    c->pc = RC_ADDR(0x0001be70u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BE74:
    /* 0001be74   4  move.w D1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001be74u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BE78:
    /* 0001be78   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001be78u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BE7C:
    /* 0001be7c   4  clr.l (fffffff6,A5) */
    c->pc = RC_ADDR(0x0001be7cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1BE80:
    /* 0001be80   4  pea (ffff83ff).l */
    c->pc = RC_ADDR(0x0001be80u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffff83ffu);

L_1BE84:
    /* 0001be84   4  move.l (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0001be84u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BE88:
    /* 0001be88   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001be88u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BE8A:
    /* 0001be8a   4  lea (ffffce82,A4),A0 */
    c->pc = RC_ADDR(0x0001be8au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x317eu);

L_1BE8E:
    /* 0001be8e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001be8eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BE92:
    /* 0001be92   4  add.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x0001be92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BE96:
    /* 0001be96   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001be96u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BE98:
    /* 0001be98   4  move.l (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0001be98u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BE9C:
    /* 0001be9c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001be9cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BE9E:
    /* 0001be9e   4  lea (ffffce70,A4),A0 */
    c->pc = RC_ADDR(0x0001be9eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3190u);

L_1BEA2:
    /* 0001bea2   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001bea2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BEA6:
    /* 0001bea6   4  add.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001bea6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BEAA:
    /* 0001beaa   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001beaau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BEAC:
    /* 0001beac   4  jsr (0001c2a2) */
    c->pc = RC_ADDR(0x0001beacu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001beb0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c2a2u);
    return;

L_1BEB0:
    /* 0001beb0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001beb0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BEB2:
    /* 0001beb2   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001beb2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1BEB4:
    /* 0001beb4   2  beq 0001bebe */
    c->pc = RC_ADDR(0x0001beb4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1BEBE;

L_1BEB6:
    /* 0001beb6   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001beb6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BEBC:
    /* 0001bebc   2  bra 0001becc */
    c->pc = RC_ADDR(0x0001bebcu);
    rc_step(c, m, 10);
    goto L_1BECC;

L_1BEBE:
    /* 0001bebe   4  addq.l #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001bebeu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1BEC2:
    /* 0001bec2   8  cmpi.l #9,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001bec2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_L, t0, 0x00000009u);

L_1BECA:
    /* 0001beca   2  blt 0001be80 */
    c->pc = RC_ADDR(0x0001becau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1BE80; }

L_1BECC:
    /* 0001becc   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001beccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_1BED0:
    /* 0001bed0   2  bne 0001bf02 */
    c->pc = RC_ADDR(0x0001bed0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1BF02;

L_1BED2:
    /* 0001bed2   4  move.l (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0001bed2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BED6:
    /* 0001bed6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001bed6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BED8:
    /* 0001bed8   4  lea (ffffce60,A4),A0 */
    c->pc = RC_ADDR(0x0001bed8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x31a0u);

L_1BEDC:
    /* 0001bedc   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001bedcu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BEE0:
    /* 0001bee0   4  add.w (8,A5),D1 */
    c->pc = RC_ADDR(0x0001bee0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BEE4:
    /* 0001bee4   4  move.w D1,(1108,A4) */
    c->pc = RC_ADDR(0x0001bee4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1108u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BEE8:
    /* 0001bee8   4  move.l (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x0001bee8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1BEEC:
    /* 0001beec   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001beecu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1BEEE:
    /* 0001beee   4  lea (ffffce68,A4),A0 */
    c->pc = RC_ADDR(0x0001beeeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x3198u);

L_1BEF2:
    /* 0001bef2   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001bef2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BEF6:
    /* 0001bef6   4  add.w (a,A5),D1 */
    c->pc = RC_ADDR(0x0001bef6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1BEFA:
    /* 0001befa   4  move.w D1,(110a,A4) */
    c->pc = RC_ADDR(0x0001befau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x110au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BEFE:
    /* 0001befe   2  unlk A5 */
    c->pc = RC_ADDR(0x0001befeu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BF00:
    /* 0001bf00   2  rts */
    c->pc = RC_ADDR(0x0001bf00u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1BF02:
    /* 0001bf02   4  addq.l #1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0001bf02u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0xeu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1BF06:
    /* 0001bf06   8  cmpi.l #4,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0001bf06u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    rc_cmp(c, RC_L, t0, 0x00000004u);

L_1BF0E:
    /* 0001bf0e   4  blt 0001be44 */
    c->pc = RC_ADDR(0x0001bf0eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1BE44; }

L_1BF12:
    /* 0001bf12   2  bra 0001befe */
    c->pc = RC_ADDR(0x0001bf12u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1BEFE;

}
