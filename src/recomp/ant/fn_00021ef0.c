/* fn_00021ef0 - 118 byte(s), 40 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021ef0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00021ef0u): goto L_21EF0;
    case RC_ADDR(0x00021ef4u): goto L_21EF4;
    case RC_ADDR(0x00021ef8u): goto L_21EF8;
    case RC_ADDR(0x00021efcu): goto L_21EFC;
    case RC_ADDR(0x00021f00u): goto L_21F00;
    case RC_ADDR(0x00021f04u): goto L_21F04;
    case RC_ADDR(0x00021f08u): goto L_21F08;
    case RC_ADDR(0x00021f0au): goto L_21F0A;
    case RC_ADDR(0x00021f0eu): goto L_21F0E;
    case RC_ADDR(0x00021f10u): goto L_21F10;
    case RC_ADDR(0x00021f12u): goto L_21F12;
    case RC_ADDR(0x00021f16u): goto L_21F16;
    case RC_ADDR(0x00021f18u): goto L_21F18;
    case RC_ADDR(0x00021f1au): goto L_21F1A;
    case RC_ADDR(0x00021f1eu): goto L_21F1E;
    case RC_ADDR(0x00021f22u): goto L_21F22;
    case RC_ADDR(0x00021f24u): goto L_21F24;
    case RC_ADDR(0x00021f28u): goto L_21F28;
    case RC_ADDR(0x00021f2au): goto L_21F2A;
    case RC_ADDR(0x00021f2cu): goto L_21F2C;
    case RC_ADDR(0x00021f2eu): goto L_21F2E;
    case RC_ADDR(0x00021f30u): goto L_21F30;
    case RC_ADDR(0x00021f34u): goto L_21F34;
    case RC_ADDR(0x00021f38u): goto L_21F38;
    case RC_ADDR(0x00021f3au): goto L_21F3A;
    case RC_ADDR(0x00021f3eu): goto L_21F3E;
    case RC_ADDR(0x00021f40u): goto L_21F40;
    case RC_ADDR(0x00021f42u): goto L_21F42;
    case RC_ADDR(0x00021f44u): goto L_21F44;
    case RC_ADDR(0x00021f48u): goto L_21F48;
    case RC_ADDR(0x00021f4cu): goto L_21F4C;
    case RC_ADDR(0x00021f4eu): goto L_21F4E;
    case RC_ADDR(0x00021f52u): goto L_21F52;
    case RC_ADDR(0x00021f54u): goto L_21F54;
    case RC_ADDR(0x00021f56u): goto L_21F56;
    case RC_ADDR(0x00021f58u): goto L_21F58;
    case RC_ADDR(0x00021f5au): goto L_21F5A;
    case RC_ADDR(0x00021f5eu): goto L_21F5E;
    case RC_ADDR(0x00021f62u): goto L_21F62;
    case RC_ADDR(0x00021f64u): goto L_21F64;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21EF0:
    /* 00021ef0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00021ef0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_21EF4:
    /* 00021ef4   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x00021ef4u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_21EF8:
    /* 00021ef8   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x00021ef8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_21EFC:
    /* 00021efc   4  movea.l (c,A5),A3 */
    c->pc = RC_ADDR(0x00021efcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[3] = t0;

L_21F00:
    /* 00021f00   4  move.w (c,A2),D0 */
    c->pc = RC_ADDR(0x00021f00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21F04:
    /* 00021f04   4  add.w (34,A2),D0 */
    c->pc = RC_ADDR(0x00021f04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x34u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_21F08:
    /* 00021f08   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00021f08u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_21F0A:
    /* 00021f0a   4  cmp.w (c,A3),D0 */
    c->pc = RC_ADDR(0x00021f0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_21F0E:
    /* 00021f0e   2  bge 00021f1a */
    c->pc = RC_ADDR(0x00021f0eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_21F1A;

L_21F10:
    /* 00021f10   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021f10u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21F12:
    /* 00021f12   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x00021f12u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_21F16:
    /* 00021f16   2  unlk A5 */
    c->pc = RC_ADDR(0x00021f16u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21F18:
    /* 00021f18   2  rts */
    c->pc = RC_ADDR(0x00021f18u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_21F1A:
    /* 00021f1a   4  move.w (c,A3),D0 */
    c->pc = RC_ADDR(0x00021f1au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21F1E:
    /* 00021f1e   4  add.w (34,A3),D0 */
    c->pc = RC_ADDR(0x00021f1eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x34u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_21F22:
    /* 00021f22   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00021f22u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_21F24:
    /* 00021f24   4  move.w (c,A2),D1 */
    c->pc = RC_ADDR(0x00021f24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21F28:
    /* 00021f28   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00021f28u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_21F2A:
    /* 00021f2a   2  ble 00021f30 */
    c->pc = RC_ADDR(0x00021f2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_21F30;

L_21F2C:
    /* 00021f2c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021f2cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21F2E:
    /* 00021f2e   2  bra 00021f12 */
    c->pc = RC_ADDR(0x00021f2eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21F12;

L_21F30:
    /* 00021f30   4  move.w (e,A2),D0 */
    c->pc = RC_ADDR(0x00021f30u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21F34:
    /* 00021f34   4  add.w (36,A2),D0 */
    c->pc = RC_ADDR(0x00021f34u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x36u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_21F38:
    /* 00021f38   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00021f38u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_21F3A:
    /* 00021f3a   4  cmp.w (e,A3),D0 */
    c->pc = RC_ADDR(0x00021f3au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_21F3E:
    /* 00021f3e   2  bge 00021f44 */
    c->pc = RC_ADDR(0x00021f3eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_21F44;

L_21F40:
    /* 00021f40   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021f40u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21F42:
    /* 00021f42   2  bra 00021f12 */
    c->pc = RC_ADDR(0x00021f42u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21F12;

L_21F44:
    /* 00021f44   4  move.w (e,A3),D0 */
    c->pc = RC_ADDR(0x00021f44u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21F48:
    /* 00021f48   4  add.w (36,A3),D0 */
    c->pc = RC_ADDR(0x00021f48u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x36u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_21F4C:
    /* 00021f4c   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00021f4cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_21F4E:
    /* 00021f4e   4  move.w (e,A2),D1 */
    c->pc = RC_ADDR(0x00021f4eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0xeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21F52:
    /* 00021f52   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00021f52u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_21F54:
    /* 00021f54   2  ble 00021f5a */
    c->pc = RC_ADDR(0x00021f54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_21F5A;

L_21F56:
    /* 00021f56   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021f56u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21F58:
    /* 00021f58   2  bra 00021f12 */
    c->pc = RC_ADDR(0x00021f58u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21F12;

L_21F5A:
    /* 00021f5a   4  move.l A2,(ffffd49a,A4) */
    c->pc = RC_ADDR(0x00021f5au);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2b66u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21F5E:
    /* 00021f5e   4  move.l A3,(ffffd49e,A4) */
    c->pc = RC_ADDR(0x00021f5eu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2b62u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21F62:
    /* 00021f62   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00021f62u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21F64:
    /* 00021f64   2  bra 00021f12 */
    c->pc = RC_ADDR(0x00021f64u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21F12;

}
