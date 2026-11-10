/* fn_000009f2 - 184 byte(s), 49 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000009f2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000009f2u): goto L_9F2;
    case RC_ADDR(0x000009f6u): goto L_9F6;
    case RC_ADDR(0x000009fau): goto L_9FA;
    case RC_ADDR(0x000009feu): goto L_9FE;
    case RC_ADDR(0x00000a02u): goto L_A02;
    case RC_ADDR(0x00000a04u): goto L_A04;
    case RC_ADDR(0x00000a08u): goto L_A08;
    case RC_ADDR(0x00000a0cu): goto L_A0C;
    case RC_ADDR(0x00000a10u): goto L_A10;
    case RC_ADDR(0x00000a14u): goto L_A14;
    case RC_ADDR(0x00000a16u): goto L_A16;
    case RC_ADDR(0x00000a1au): goto L_A1A;
    case RC_ADDR(0x00000a1eu): goto L_A1E;
    case RC_ADDR(0x00000a22u): goto L_A22;
    case RC_ADDR(0x00000a26u): goto L_A26;
    case RC_ADDR(0x00000a2au): goto L_A2A;
    case RC_ADDR(0x00000a2eu): goto L_A2E;
    case RC_ADDR(0x00000a30u): goto L_A30;
    case RC_ADDR(0x00000a34u): goto L_A34;
    case RC_ADDR(0x00000a38u): goto L_A38;
    case RC_ADDR(0x00000a3cu): goto L_A3C;
    case RC_ADDR(0x00000a40u): goto L_A40;
    case RC_ADDR(0x00000a44u): goto L_A44;
    case RC_ADDR(0x00000a48u): goto L_A48;
    case RC_ADDR(0x00000a4au): goto L_A4A;
    case RC_ADDR(0x00000a4eu): goto L_A4E;
    case RC_ADDR(0x00000a52u): goto L_A52;
    case RC_ADDR(0x00000a56u): goto L_A56;
    case RC_ADDR(0x00000a5au): goto L_A5A;
    case RC_ADDR(0x00000a5eu): goto L_A5E;
    case RC_ADDR(0x00000a62u): goto L_A62;
    case RC_ADDR(0x00000a64u): goto L_A64;
    case RC_ADDR(0x00000a68u): goto L_A68;
    case RC_ADDR(0x00000a6cu): goto L_A6C;
    case RC_ADDR(0x00000a70u): goto L_A70;
    case RC_ADDR(0x00000a74u): goto L_A74;
    case RC_ADDR(0x00000a78u): goto L_A78;
    case RC_ADDR(0x00000a7cu): goto L_A7C;
    case RC_ADDR(0x00000a7eu): goto L_A7E;
    case RC_ADDR(0x00000a82u): goto L_A82;
    case RC_ADDR(0x00000a86u): goto L_A86;
    case RC_ADDR(0x00000a8au): goto L_A8A;
    case RC_ADDR(0x00000a90u): goto L_A90;
    case RC_ADDR(0x00000a94u): goto L_A94;
    case RC_ADDR(0x00000a98u): goto L_A98;
    case RC_ADDR(0x00000a9eu): goto L_A9E;
    case RC_ADDR(0x00000aa2u): goto L_AA2;
    case RC_ADDR(0x00000aa6u): goto L_AA6;
    case RC_ADDR(0x00000aa8u): goto L_AA8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9F2:
    /* 000009f2   4  link.w A5,#fffffffc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000009f2u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_9F6:
    /* 000009f6   4  clr.w (fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000009f6u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9FA:
    /* 000009fa   4  clr.w (fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000009fau);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9FE:
    /* 000009fe   4  tst.w (ffff83d8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000009feu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c28u));
    rc_set_nzvc(c, t0, RC_W);

L_A02:
    /* 00000a02   2  beq 00000a38 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a02u);
    if (rc_cond(c, 7)) goto L_A38;

L_A04:
    /* 00000a04   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a04u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A08:
    /* 00000a08   4  muls.w #222,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a08u);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_A0C:
    /* 00000a0c   4  move.w (fffffffc,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a0cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A10:
    /* 00000a10   4  muls.w #e,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a10u);
    t0 = 0x0000000eu;
    rc_muls(c, 1, t0);

L_A14:
    /* 00000a14   2  add.l D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a14u);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_A16:
    /* 00000a16   4  lea (ffffcf90,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a16u);
    c->a[0] = (c->a[4] - 0x3070u);

L_A1A:
    /* 00000a1a   4  clr.l (0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a1au);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A1E:
    /* 00000a1e   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a1eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A22:
    /* 00000a22   4  muls.w #222,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a22u);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_A26:
    /* 00000a26   4  move.w (fffffffc,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a26u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A2A:
    /* 00000a2a   4  muls.w #e,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a2au);
    t0 = 0x0000000eu;
    rc_muls(c, 1, t0);

L_A2E:
    /* 00000a2e   2  add.l D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a2eu);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_A30:
    /* 00000a30   4  lea (ffffcf9c,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a30u);
    c->a[0] = (c->a[4] - 0x3064u);

L_A34:
    /* 00000a34   4  clr.b (0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a34u);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_A38:
    /* 00000a38   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a38u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A3C:
    /* 00000a3c   4  muls.w #222,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a3cu);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_A40:
    /* 00000a40   4  move.w (fffffffc,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a40u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A44:
    /* 00000a44   4  muls.w #e,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a44u);
    t0 = 0x0000000eu;
    rc_muls(c, 1, t0);

L_A48:
    /* 00000a48   2  add.l D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a48u);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_A4A:
    /* 00000a4a   4  lea (ffffcf94,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a4au);
    c->a[0] = (c->a[4] - 0x306cu);

L_A4E:
    /* 00000a4e   4  clr.l (0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a4eu);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A52:
    /* 00000a52   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a52u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A56:
    /* 00000a56   4  muls.w #222,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a56u);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_A5A:
    /* 00000a5a   4  move.w (fffffffc,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a5au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A5E:
    /* 00000a5e   4  muls.w #e,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a5eu);
    t0 = 0x0000000eu;
    rc_muls(c, 1, t0);

L_A62:
    /* 00000a62   2  add.l D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a62u);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_A64:
    /* 00000a64   4  lea (ffffcf98,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a64u);
    c->a[0] = (c->a[4] - 0x3068u);

L_A68:
    /* 00000a68   4  clr.l (0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a68u);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A6C:
    /* 00000a6c   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a6cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A70:
    /* 00000a70   4  muls.w #222,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a70u);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_A74:
    /* 00000a74   4  move.w (fffffffc,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a74u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A78:
    /* 00000a78   4  muls.w #e,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a78u);
    t0 = 0x0000000eu;
    rc_muls(c, 1, t0);

L_A7C:
    /* 00000a7c   2  add.l D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a7cu);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_A7E:
    /* 00000a7e   4  lea (ffffcf9d,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a7eu);
    c->a[0] = (c->a[4] - 0x3063u);

L_A82:
    /* 00000a82   4  clr.b (0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a82u);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_A86:
    /* 00000a86   4  addq.w #1,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a86u);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_A8A:
    /* 00000a8a   6  cmpi.w #27,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a8au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_A90:
    /* 00000a90   4  blt 000009fe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a90u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_9FE; }

L_A94:
    /* 00000a94   4  addq.w #1,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a94u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_A98:
    /* 00000a98   6  cmpi.w #f,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a98u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_A9E:
    /* 00000a9e   4  blt 000009fa */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000a9eu);
    if (rc_cond(c, 13)) { rc_tick(); goto L_9FA; }

L_AA2:
    /* 00000aa2   4  clr.w (ffff83d8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000aa2u);
    rc_wr16(c, m, (c->a[4] - 0x7c28u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AA6:
    /* 00000aa6   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000aa6u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_AA8:
    /* 00000aa8   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000aa8u);
    rc_ret(c, m);
    return;

}
