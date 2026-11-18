/* fn_00009edc - 132 byte(s), 39 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00009edc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00009edcu): goto L_9EDC;
    case RC_ADDR(0x00009ee0u): goto L_9EE0;
    case RC_ADDR(0x00009ee4u): goto L_9EE4;
    case RC_ADDR(0x00009ee8u): goto L_9EE8;
    case RC_ADDR(0x00009eeau): goto L_9EEA;
    case RC_ADDR(0x00009eeeu): goto L_9EEE;
    case RC_ADDR(0x00009ef2u): goto L_9EF2;
    case RC_ADDR(0x00009ef6u): goto L_9EF6;
    case RC_ADDR(0x00009efcu): goto L_9EFC;
    case RC_ADDR(0x00009f00u): goto L_9F00;
    case RC_ADDR(0x00009f04u): goto L_9F04;
    case RC_ADDR(0x00009f08u): goto L_9F08;
    case RC_ADDR(0x00009f0cu): goto L_9F0C;
    case RC_ADDR(0x00009f0eu): goto L_9F0E;
    case RC_ADDR(0x00009f12u): goto L_9F12;
    case RC_ADDR(0x00009f16u): goto L_9F16;
    case RC_ADDR(0x00009f1au): goto L_9F1A;
    case RC_ADDR(0x00009f1cu): goto L_9F1C;
    case RC_ADDR(0x00009f1eu): goto L_9F1E;
    case RC_ADDR(0x00009f20u): goto L_9F20;
    case RC_ADDR(0x00009f24u): goto L_9F24;
    case RC_ADDR(0x00009f26u): goto L_9F26;
    case RC_ADDR(0x00009f2au): goto L_9F2A;
    case RC_ADDR(0x00009f2eu): goto L_9F2E;
    case RC_ADDR(0x00009f32u): goto L_9F32;
    case RC_ADDR(0x00009f34u): goto L_9F34;
    case RC_ADDR(0x00009f36u): goto L_9F36;
    case RC_ADDR(0x00009f38u): goto L_9F38;
    case RC_ADDR(0x00009f3cu): goto L_9F3C;
    case RC_ADDR(0x00009f3eu): goto L_9F3E;
    case RC_ADDR(0x00009f40u): goto L_9F40;
    case RC_ADDR(0x00009f44u): goto L_9F44;
    case RC_ADDR(0x00009f48u): goto L_9F48;
    case RC_ADDR(0x00009f4cu): goto L_9F4C;
    case RC_ADDR(0x00009f50u): goto L_9F50;
    case RC_ADDR(0x00009f54u): goto L_9F54;
    case RC_ADDR(0x00009f58u): goto L_9F58;
    case RC_ADDR(0x00009f5cu): goto L_9F5C;
    case RC_ADDR(0x00009f5eu): goto L_9F5E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9EDC:
    /* 00009edc   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00009edcu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9EE0:
    /* 00009ee0   4  jsr (00009de8) */
    c->pc = RC_ADDR(0x00009ee0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00009ee4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009de8u);
    return;

L_9EE4:
    /* 00009ee4   4  jsr (ffff83a4,A4) */
    c->pc = RC_ADDR(0x00009ee4u);
    rc_step(c, m, 18);
    /* vector 155 */
    rc_push32(c, m, RC_ADDR(0x00009ee8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023972u);
    return;

L_9EE8:
    /* 00009ee8   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00009ee8u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9EEA:
    /* 00009eea   4  movea.l (ac0,A4),A0 */
    c->pc = RC_ADDR(0x00009eeau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xac0u));
    c->a[0] = t0;

L_9EEE:
    /* 00009eee   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x00009eeeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_9EF2:
    /* 00009ef2   4  move.l (30,A1),-(A7) */
    c->pc = RC_ADDR(0x00009ef2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[1] + 0x30u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9EF6:
    /* 00009ef6   6  pea (00043210).l */
    c->pc = RC_ADDR(0x00009ef6u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00043210u);

L_9EFC:
    /* 00009efc   4  pea (000000ca).l */
    c->pc = RC_ADDR(0x00009efcu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000cau);

L_9F00:
    /* 00009f00   4  pea (000000c8).l */
    c->pc = RC_ADDR(0x00009f00u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000c8u);

L_9F04:
    /* 00009f04   4  pea (000000c8).l */
    c->pc = RC_ADDR(0x00009f04u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000c8u);

L_9F08:
    /* 00009f08   4  move.w (acc,A4),D0 */
    c->pc = RC_ADDR(0x00009f08u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9F0C:
    /* 00009f0c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009f0cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9F0E:
    /* 00009f0e   4  movea.l (ac0,A4),A0 */
    c->pc = RC_ADDR(0x00009f0eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xac0u));
    c->a[0] = t0;

L_9F12:
    /* 00009f12   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x00009f12u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_9F16:
    /* 00009f16   4  move.w (a,A1),D1 */
    c->pc = RC_ADDR(0x00009f16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9F1A:
    /* 00009f1a   2  ext.l D1 */
    c->pc = RC_ADDR(0x00009f1au);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_9F1C:
    /* 00009f1c   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x00009f1cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9F1E:
    /* 00009f1e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00009f1eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9F20:
    /* 00009f20   4  move.w (aca,A4),D0 */
    c->pc = RC_ADDR(0x00009f20u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xacau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9F24:
    /* 00009f24   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009f24u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9F26:
    /* 00009f26   4  movea.l (ac0,A4),A0 */
    c->pc = RC_ADDR(0x00009f26u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xac0u));
    c->a[0] = t0;

L_9F2A:
    /* 00009f2a   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x00009f2au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_9F2E:
    /* 00009f2e   4  move.w (8,A1),D1 */
    c->pc = RC_ADDR(0x00009f2eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9F32:
    /* 00009f32   2  ext.l D1 */
    c->pc = RC_ADDR(0x00009f32u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_9F34:
    /* 00009f34   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x00009f34u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9F36:
    /* 00009f36   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00009f36u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9F38:
    /* 00009f38   4  move.l (ffffd340,A4),-(A7) */
    c->pc = RC_ADDR(0x00009f38u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9F3C:
    /* 00009f3c   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00009f3cu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9F3E:
    /* 00009f3e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00009f3eu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9F40:
    /* 00009f40   4  movea.l (ac0,A4),A0 */
    c->pc = RC_ADDR(0x00009f40u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xac0u));
    c->a[0] = t0;

L_9F44:
    /* 00009f44   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x00009f44u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_9F48:
    /* 00009f48   4  pea (c,A1) */
    c->pc = RC_ADDR(0x00009f48u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[1] + 0xcu));

L_9F4C:
    /* 00009f4c   4  jsr (ffff8260,A4) */
    c->pc = RC_ADDR(0x00009f4cu);
    rc_step(c, m, 18);
    /* vector 101 */
    rc_push32(c, m, RC_ADDR(0x00009f50u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d56u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020940u);
    return;

L_9F50:
    /* 00009f50   4  lea (30,A7),A7 */
    c->pc = RC_ADDR(0x00009f50u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x30u);

L_9F54:
    /* 00009f54   4  jsr (ffff83ce,A4) */
    c->pc = RC_ADDR(0x00009f54u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00009f58u));
    rc_depth++;
    t3 = (c->a[4] - 0x7c32u);
    c->pc = t3;
    return;

L_9F58:
    /* 00009f58   4  jsr (ffff8386,A4) */
    c->pc = RC_ADDR(0x00009f58u);
    rc_step(c, m, 18);
    /* vector 150 */
    rc_push32(c, m, RC_ADDR(0x00009f5cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023896u);
    return;

L_9F5C:
    /* 00009f5c   2  unlk A5 */
    c->pc = RC_ADDR(0x00009f5cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9F5E:
    /* 00009f5e   2  rts */
    c->pc = RC_ADDR(0x00009f5eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
