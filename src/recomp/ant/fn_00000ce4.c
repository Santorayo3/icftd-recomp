/* fn_00000ce4 - 184 byte(s), 53 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00000ce4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00000ce4u): goto L_CE4;
    case RC_ADDR(0x00000ce8u): goto L_CE8;
    case RC_ADDR(0x00000cecu): goto L_CEC;
    case RC_ADDR(0x00000cf0u): goto L_CF0;
    case RC_ADDR(0x00000cf2u): goto L_CF2;
    case RC_ADDR(0x00000cf4u): goto L_CF4;
    case RC_ADDR(0x00000cf8u): goto L_CF8;
    case RC_ADDR(0x00000cfcu): goto L_CFC;
    case RC_ADDR(0x00000d00u): goto L_D00;
    case RC_ADDR(0x00000d04u): goto L_D04;
    case RC_ADDR(0x00000d08u): goto L_D08;
    case RC_ADDR(0x00000d0cu): goto L_D0C;
    case RC_ADDR(0x00000d10u): goto L_D10;
    case RC_ADDR(0x00000d14u): goto L_D14;
    case RC_ADDR(0x00000d16u): goto L_D16;
    case RC_ADDR(0x00000d1cu): goto L_D1C;
    case RC_ADDR(0x00000d1eu): goto L_D1E;
    case RC_ADDR(0x00000d22u): goto L_D22;
    case RC_ADDR(0x00000d24u): goto L_D24;
    case RC_ADDR(0x00000d28u): goto L_D28;
    case RC_ADDR(0x00000d2cu): goto L_D2C;
    case RC_ADDR(0x00000d2eu): goto L_D2E;
    case RC_ADDR(0x00000d32u): goto L_D32;
    case RC_ADDR(0x00000d36u): goto L_D36;
    case RC_ADDR(0x00000d3au): goto L_D3A;
    case RC_ADDR(0x00000d3eu): goto L_D3E;
    case RC_ADDR(0x00000d42u): goto L_D42;
    case RC_ADDR(0x00000d46u): goto L_D46;
    case RC_ADDR(0x00000d4au): goto L_D4A;
    case RC_ADDR(0x00000d4eu): goto L_D4E;
    case RC_ADDR(0x00000d52u): goto L_D52;
    case RC_ADDR(0x00000d56u): goto L_D56;
    case RC_ADDR(0x00000d5au): goto L_D5A;
    case RC_ADDR(0x00000d5cu): goto L_D5C;
    case RC_ADDR(0x00000d5eu): goto L_D5E;
    case RC_ADDR(0x00000d62u): goto L_D62;
    case RC_ADDR(0x00000d66u): goto L_D66;
    case RC_ADDR(0x00000d68u): goto L_D68;
    case RC_ADDR(0x00000d6cu): goto L_D6C;
    case RC_ADDR(0x00000d6eu): goto L_D6E;
    case RC_ADDR(0x00000d70u): goto L_D70;
    case RC_ADDR(0x00000d74u): goto L_D74;
    case RC_ADDR(0x00000d76u): goto L_D76;
    case RC_ADDR(0x00000d78u): goto L_D78;
    case RC_ADDR(0x00000d7cu): goto L_D7C;
    case RC_ADDR(0x00000d80u): goto L_D80;
    case RC_ADDR(0x00000d84u): goto L_D84;
    case RC_ADDR(0x00000d88u): goto L_D88;
    case RC_ADDR(0x00000d8cu): goto L_D8C;
    case RC_ADDR(0x00000d90u): goto L_D90;
    case RC_ADDR(0x00000d94u): goto L_D94;
    case RC_ADDR(0x00000d98u): goto L_D98;
    case RC_ADDR(0x00000d9au): goto L_D9A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_CE4:
    /* 00000ce4   4  link.w A5,#fffffff4 */
    c->pc = RC_ADDR(0x00000ce4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xcu;

L_CE8:
    /* 00000ce8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000ce8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CEC:
    /* 00000cec   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x00000cecu);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x00000cf0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_CF0:
    /* 00000cf0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000cf0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_CF2:
    /* 00000cf2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00000cf2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_CF4:
    /* 00000cf4   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00000cf4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CF8:
    /* 00000cf8   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00000cf8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CFC:
    /* 00000cfc   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000cfcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D00:
    /* 00000d00   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000d00u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D04:
    /* 00000d04   4  jsr (ffff83c8,A4) */
    c->pc = RC_ADDR(0x00000d04u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000d08u));
    rc_depth++;
    t3 = (c->a[4] - 0x7c38u);
    c->pc = t3;
    return;

L_D08:
    /* 00000d08   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00000d08u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_D0C:
    /* 00000d0c   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00000d0cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D10:
    /* 00000d10   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00000d10u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D14:
    /* 00000d14   2  lsr.l #1,D0 */
    c->pc = RC_ADDR(0x00000d14u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D16:
    /* 00000d16   6  move.l #a0,D1 */
    c->pc = RC_ADDR(0x00000d16u);
    rc_step(c, m, 12);
    t0 = 0x000000a0u;
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D1C:
    /* 00000d1c   2  sub.l D0,D1 */
    c->pc = RC_ADDR(0x00000d1cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_D1E:
    /* 00000d1e   4  move.l D1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00000d1eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D22:
    /* 00000d22   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00000d22u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_D24:
    /* 00000d24   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000d24u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D28:
    /* 00000d28   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x00000d28u);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x00000d2cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_D2C:
    /* 00000d2c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000d2cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D2E:
    /* 00000d2e   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00000d2eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D32:
    /* 00000d32   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00000d32u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D36:
    /* 00000d36   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000d36u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D3A:
    /* 00000d3a   4  jsr (ffff839e,A4) */
    c->pc = RC_ADDR(0x00000d3au);
    rc_step(c, m, 18);
    /* vector 154 */
    rc_push32(c, m, RC_ADDR(0x00000d3eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e94u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023954u);
    return;

L_D3E:
    /* 00000d3e   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00000d3eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_D42:
    /* 00000d42   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00000d42u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D46:
    /* 00000d46   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000d46u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D4A:
    /* 00000d4a   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000d4au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D4E:
    /* 00000d4e   4  jsr (ffff83c2,A4) */
    c->pc = RC_ADDR(0x00000d4eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000d52u));
    rc_depth++;
    t3 = (c->a[4] - 0x7c3eu);
    c->pc = t3;
    return;

L_D52:
    /* 00000d52   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00000d52u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_D56:
    /* 00000d56   4  move.w (10,A5),D0 */
    c->pc = RC_ADDR(0x00000d56u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D5A:
    /* 00000d5a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00000d5au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_D5C:
    /* 00000d5c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00000d5cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D5E:
    /* 00000d5e   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000d5eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D62:
    /* 00000d62   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x00000d62u);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x00000d66u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_D66:
    /* 00000d66   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000d66u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D68:
    /* 00000d68   4  move.l (c,A5),D0 */
    c->pc = RC_ADDR(0x00000d68u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D6C:
    /* 00000d6c   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00000d6cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D6E:
    /* 00000d6e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00000d6eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D70:
    /* 00000d70   4  move.l (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00000d70u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D74:
    /* 00000d74   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00000d74u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D76:
    /* 00000d76   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00000d76u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D78:
    /* 00000d78   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000d78u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7C:
    /* 00000d7c   4  jsr (ffff839e,A4) */
    c->pc = RC_ADDR(0x00000d7cu);
    rc_step(c, m, 18);
    /* vector 154 */
    rc_push32(c, m, RC_ADDR(0x00000d80u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e94u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023954u);
    return;

L_D80:
    /* 00000d80   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00000d80u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_D84:
    /* 00000d84   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00000d84u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D88:
    /* 00000d88   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000d88u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D8C:
    /* 00000d8c   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000d8cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D90:
    /* 00000d90   4  jsr (ffff83c2,A4) */
    c->pc = RC_ADDR(0x00000d90u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000d94u));
    rc_depth++;
    t3 = (c->a[4] - 0x7c3eu);
    c->pc = t3;
    return;

L_D94:
    /* 00000d94   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00000d94u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_D98:
    /* 00000d98   2  unlk A5 */
    c->pc = RC_ADDR(0x00000d98u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_D9A:
    /* 00000d9a   2  rts */
    c->pc = RC_ADDR(0x00000d9au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
