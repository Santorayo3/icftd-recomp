/* fn_00014d0c - 164 byte(s), 47 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00014d0c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00014d0cu): goto L_14D0C;
    case RC_ADDR(0x00014d10u): goto L_14D10;
    case RC_ADDR(0x00014d14u): goto L_14D14;
    case RC_ADDR(0x00014d18u): goto L_14D18;
    case RC_ADDR(0x00014d1cu): goto L_14D1C;
    case RC_ADDR(0x00014d20u): goto L_14D20;
    case RC_ADDR(0x00014d22u): goto L_14D22;
    case RC_ADDR(0x00014d26u): goto L_14D26;
    case RC_ADDR(0x00014d2au): goto L_14D2A;
    case RC_ADDR(0x00014d2eu): goto L_14D2E;
    case RC_ADDR(0x00014d32u): goto L_14D32;
    case RC_ADDR(0x00014d36u): goto L_14D36;
    case RC_ADDR(0x00014d3au): goto L_14D3A;
    case RC_ADDR(0x00014d3eu): goto L_14D3E;
    case RC_ADDR(0x00014d42u): goto L_14D42;
    case RC_ADDR(0x00014d46u): goto L_14D46;
    case RC_ADDR(0x00014d4au): goto L_14D4A;
    case RC_ADDR(0x00014d4eu): goto L_14D4E;
    case RC_ADDR(0x00014d52u): goto L_14D52;
    case RC_ADDR(0x00014d54u): goto L_14D54;
    case RC_ADDR(0x00014d58u): goto L_14D58;
    case RC_ADDR(0x00014d5au): goto L_14D5A;
    case RC_ADDR(0x00014d5eu): goto L_14D5E;
    case RC_ADDR(0x00014d62u): goto L_14D62;
    case RC_ADDR(0x00014d66u): goto L_14D66;
    case RC_ADDR(0x00014d68u): goto L_14D68;
    case RC_ADDR(0x00014d6au): goto L_14D6A;
    case RC_ADDR(0x00014d6eu): goto L_14D6E;
    case RC_ADDR(0x00014d72u): goto L_14D72;
    case RC_ADDR(0x00014d76u): goto L_14D76;
    case RC_ADDR(0x00014d78u): goto L_14D78;
    case RC_ADDR(0x00014d7au): goto L_14D7A;
    case RC_ADDR(0x00014d7eu): goto L_14D7E;
    case RC_ADDR(0x00014d82u): goto L_14D82;
    case RC_ADDR(0x00014d86u): goto L_14D86;
    case RC_ADDR(0x00014d88u): goto L_14D88;
    case RC_ADDR(0x00014d8au): goto L_14D8A;
    case RC_ADDR(0x00014d8eu): goto L_14D8E;
    case RC_ADDR(0x00014d92u): goto L_14D92;
    case RC_ADDR(0x00014d96u): goto L_14D96;
    case RC_ADDR(0x00014d98u): goto L_14D98;
    case RC_ADDR(0x00014d9au): goto L_14D9A;
    case RC_ADDR(0x00014d9eu): goto L_14D9E;
    case RC_ADDR(0x00014da2u): goto L_14DA2;
    case RC_ADDR(0x00014da6u): goto L_14DA6;
    case RC_ADDR(0x00014dacu): goto L_14DAC;
    case RC_ADDR(0x00014daeu): goto L_14DAE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14D0C:
    /* 00014d0c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00014d0cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_14D10:
    /* 00014d10   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014d10u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D14:
    /* 00014d14   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014d14u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14D18:
    /* 00014d18   4  lea (fffffb36,A4),A0 */
    c->pc = RC_ADDR(0x00014d18u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4cau);

L_14D1C:
    /* 00014d1c   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014d1cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_14D20:
    /* 00014d20   2  beq 00014d54 */
    c->pc = RC_ADDR(0x00014d20u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_14D54;

L_14D22:
    /* 00014d22   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014d22u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D26:
    /* 00014d26   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014d26u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14D2A:
    /* 00014d2a   4  lea (fffffb2c,A4),A0 */
    c->pc = RC_ADDR(0x00014d2au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d4u);

L_14D2E:
    /* 00014d2e   4  move.w (6ee,A4),D1 */
    c->pc = RC_ADDR(0x00014d2eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6eeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D32:
    /* 00014d32   4  sub.w #f,D1 */
    c->pc = RC_ADDR(0x00014d32u);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14D36:
    /* 00014d36   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014d36u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D3A:
    /* 00014d3a   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014d3au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D3E:
    /* 00014d3e   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014d3eu);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14D42:
    /* 00014d42   4  lea (fffffb2e,A4),A0 */
    c->pc = RC_ADDR(0x00014d42u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4d2u);

L_14D46:
    /* 00014d46   4  move.w (6f0,A4),D1 */
    c->pc = RC_ADDR(0x00014d46u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f0u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D4A:
    /* 00014d4a   4  sub.w #f,D1 */
    c->pc = RC_ADDR(0x00014d4au);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14D4E:
    /* 00014d4e   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014d4eu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D52:
    /* 00014d52   2  bra 00014dac */
    c->pc = RC_ADDR(0x00014d52u);
    rc_step(c, m, 10);
    goto L_14DAC;

L_14D54:
    /* 00014d54   4  tst.w (14f0,A4) */
    c->pc = RC_ADDR(0x00014d54u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14f0u));
    rc_set_nzvc(c, t0, RC_W);

L_14D58:
    /* 00014d58   2  bne 00014dac */
    c->pc = RC_ADDR(0x00014d58u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_14DAC;

L_14D5A:
    /* 00014d5a   4  move.w (6ee,A4),D0 */
    c->pc = RC_ADDR(0x00014d5au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6eeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D5E:
    /* 00014d5e   4  sub.w #a0,D0 */
    c->pc = RC_ADDR(0x00014d5eu);
    rc_step(c, m, 10);
    t0 = 0x000000a0u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14D62:
    /* 00014d62   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00014d62u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D66:
    /* 00014d66   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00014d66u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14D68:
    /* 00014d68   2  ble 00014dac */
    c->pc = RC_ADDR(0x00014d68u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_14DAC;

L_14D6A:
    /* 00014d6a   4  move.w (6ee,A4),D0 */
    c->pc = RC_ADDR(0x00014d6au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6eeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D6E:
    /* 00014d6e   4  add.w #a0,D0 */
    c->pc = RC_ADDR(0x00014d6eu);
    rc_step(c, m, 10);
    t0 = 0x000000a0u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14D72:
    /* 00014d72   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x00014d72u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D76:
    /* 00014d76   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00014d76u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14D78:
    /* 00014d78   2  bge 00014dac */
    c->pc = RC_ADDR(0x00014d78u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_14DAC;

L_14D7A:
    /* 00014d7a   4  move.w (6f0,A4),D0 */
    c->pc = RC_ADDR(0x00014d7au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D7E:
    /* 00014d7e   4  sub.w #64,D0 */
    c->pc = RC_ADDR(0x00014d7eu);
    rc_step(c, m, 10);
    t0 = 0x00000064u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14D82:
    /* 00014d82   4  move.w (c,A5),D1 */
    c->pc = RC_ADDR(0x00014d82u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D86:
    /* 00014d86   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00014d86u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14D88:
    /* 00014d88   2  ble 00014dac */
    c->pc = RC_ADDR(0x00014d88u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_14DAC;

L_14D8A:
    /* 00014d8a   4  move.w (6f0,A4),D0 */
    c->pc = RC_ADDR(0x00014d8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6f0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D8E:
    /* 00014d8e   4  add.w #64,D0 */
    c->pc = RC_ADDR(0x00014d8eu);
    rc_step(c, m, 10);
    t0 = 0x00000064u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14D92:
    /* 00014d92   4  move.w (c,A5),D1 */
    c->pc = RC_ADDR(0x00014d92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D96:
    /* 00014d96   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00014d96u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14D98:
    /* 00014d98   2  bge 00014dac */
    c->pc = RC_ADDR(0x00014d98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_14DAC;

L_14D9A:
    /* 00014d9a   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00014d9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14D9E:
    /* 00014d9e   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00014d9eu);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_14DA2:
    /* 00014da2   4  lea (fffffb36,A4),A0 */
    c->pc = RC_ADDR(0x00014da2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4cau);

L_14DA6:
    /* 00014da6   6  move.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014da6u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_14DAC:
    /* 00014dac   2  unlk A5 */
    c->pc = RC_ADDR(0x00014dacu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14DAE:
    /* 00014dae   2  rts */
    c->pc = RC_ADDR(0x00014daeu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
