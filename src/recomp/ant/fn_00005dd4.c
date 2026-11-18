/* fn_00005dd4 - 76 byte(s), 21 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00005dd4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00005dd4u): goto L_5DD4;
    case RC_ADDR(0x00005dd8u): goto L_5DD8;
    case RC_ADDR(0x00005ddeu): goto L_5DDE;
    case RC_ADDR(0x00005de0u): goto L_5DE0;
    case RC_ADDR(0x00005de6u): goto L_5DE6;
    case RC_ADDR(0x00005de8u): goto L_5DE8;
    case RC_ADDR(0x00005deeu): goto L_5DEE;
    case RC_ADDR(0x00005df0u): goto L_5DF0;
    case RC_ADDR(0x00005df6u): goto L_5DF6;
    case RC_ADDR(0x00005df8u): goto L_5DF8;
    case RC_ADDR(0x00005dfeu): goto L_5DFE;
    case RC_ADDR(0x00005e00u): goto L_5E00;
    case RC_ADDR(0x00005e04u): goto L_5E04;
    case RC_ADDR(0x00005e08u): goto L_5E08;
    case RC_ADDR(0x00005e0au): goto L_5E0A;
    case RC_ADDR(0x00005e0eu): goto L_5E0E;
    case RC_ADDR(0x00005e12u): goto L_5E12;
    case RC_ADDR(0x00005e16u): goto L_5E16;
    case RC_ADDR(0x00005e1au): goto L_5E1A;
    case RC_ADDR(0x00005e1cu): goto L_5E1C;
    case RC_ADDR(0x00005e1eu): goto L_5E1E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5DD4:
    /* 00005dd4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00005dd4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_5DD8:
    /* 00005dd8   6  cmpi.w #7,(8,A5) */
    c->pc = RC_ADDR(0x00005dd8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_5DDE:
    /* 00005dde   2  ble 00005de8 */
    c->pc = RC_ADDR(0x00005ddeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_5DE8;

L_5DE0:
    /* 00005de0   6  cmpi.w #c,(8,A5) */
    c->pc = RC_ADDR(0x00005de0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_5DE6:
    /* 00005de6   2  blt 00005e00 */
    c->pc = RC_ADDR(0x00005de6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_5E00;

L_5DE8:
    /* 00005de8   6  cmpi.w #1d,(8,A5) */
    c->pc = RC_ADDR(0x00005de8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x0000001du);

L_5DEE:
    /* 00005dee   2  ble 00005df8 */
    c->pc = RC_ADDR(0x00005deeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_5DF8;

L_5DF0:
    /* 00005df0   6  cmpi.w #24,(8,A5) */
    c->pc = RC_ADDR(0x00005df0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000024u);

L_5DF6:
    /* 00005df6   2  blt 00005e00 */
    c->pc = RC_ADDR(0x00005df6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_5E00;

L_5DF8:
    /* 00005df8   6  cmpi.w #61,(8,A5) */
    c->pc = RC_ADDR(0x00005df8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000061u);

L_5DFE:
    /* 00005dfe   2  ble 00005e0a */
    c->pc = RC_ADDR(0x00005dfeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_5E0A;

L_5E00:
    /* 00005e00   4  lea (00005e20),A0 */
    c->pc = RC_ADDR(0x00005e00u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00005e20u);

L_5E04:
    /* 00005e04   4  move.l A0,(9f4,A4) */
    c->pc = RC_ADDR(0x00005e04u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x9f4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5E08:
    /* 00005e08   2  bra 00005e12 */
    c->pc = RC_ADDR(0x00005e08u);
    rc_step(c, m, 10);
    goto L_5E12;

L_5E0A:
    /* 00005e0a   4  lea (00005e2f),A0 */
    c->pc = RC_ADDR(0x00005e0au);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00005e2fu);

L_5E0E:
    /* 00005e0e   4  move.l A0,(9f4,A4) */
    c->pc = RC_ADDR(0x00005e0eu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x9f4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5E12:
    /* 00005e12   4  move.l (9f4,A4),-(A7) */
    c->pc = RC_ADDR(0x00005e12u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x9f4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5E16:
    /* 00005e16   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x00005e16u);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x00005e1au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_5E1A:
    /* 00005e1a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005e1au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5E1C:
    /* 00005e1c   2  unlk A5 */
    c->pc = RC_ADDR(0x00005e1cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5E1E:
    /* 00005e1e   2  rts */
    c->pc = RC_ADDR(0x00005e1eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
