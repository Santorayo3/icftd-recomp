/* fn_00007fa6 - 84 byte(s), 25 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00007fa6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00007fa6u): goto L_7FA6;
    case RC_ADDR(0x00007faau): goto L_7FAA;
    case RC_ADDR(0x00007facu): goto L_7FAC;
    case RC_ADDR(0x00007fb0u): goto L_7FB0;
    case RC_ADDR(0x00007fb4u): goto L_7FB4;
    case RC_ADDR(0x00007fb8u): goto L_7FB8;
    case RC_ADDR(0x00007fbcu): goto L_7FBC;
    case RC_ADDR(0x00007fc0u): goto L_7FC0;
    case RC_ADDR(0x00007fc4u): goto L_7FC4;
    case RC_ADDR(0x00007fc6u): goto L_7FC6;
    case RC_ADDR(0x00007fc8u): goto L_7FC8;
    case RC_ADDR(0x00007fcau): goto L_7FCA;
    case RC_ADDR(0x00007fceu): goto L_7FCE;
    case RC_ADDR(0x00007fd2u): goto L_7FD2;
    case RC_ADDR(0x00007fd6u): goto L_7FD6;
    case RC_ADDR(0x00007fdau): goto L_7FDA;
    case RC_ADDR(0x00007fdeu): goto L_7FDE;
    case RC_ADDR(0x00007fe4u): goto L_7FE4;
    case RC_ADDR(0x00007fe6u): goto L_7FE6;
    case RC_ADDR(0x00007feau): goto L_7FEA;
    case RC_ADDR(0x00007feeu): goto L_7FEE;
    case RC_ADDR(0x00007ff0u): goto L_7FF0;
    case RC_ADDR(0x00007ff2u): goto L_7FF2;
    case RC_ADDR(0x00007ff6u): goto L_7FF6;
    case RC_ADDR(0x00007ff8u): goto L_7FF8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7FA6:
    /* 00007fa6   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00007fa6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_7FAA:
    /* 00007faa   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007faau);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7FAC:
    /* 00007fac   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00007facu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7FB0:
    /* 00007fb0   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00007fb0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_7FB4:
    /* 00007fb4   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00007fb4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7FB8:
    /* 00007fb8   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x00007fb8u);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x00007fbcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fe0au);
    return;

L_7FBC:
    /* 00007fbc   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00007fbcu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_7FC0:
    /* 00007fc0   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00007fc0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7FC4:
    /* 00007fc4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007fc4u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7FC6:
    /* 00007fc6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00007fc6u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_7FC8:
    /* 00007fc8   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00007fc8u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_7FCA:
    /* 00007fca   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00007fcau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_7FCE:
    /* 00007fce   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00007fceu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7FD2:
    /* 00007fd2   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x00007fd2u);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x00007fd6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_7FD6:
    /* 00007fd6   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00007fd6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_7FDA:
    /* 00007fda   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00007fdau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_7FDE:
    /* 00007fde   6  cmpi.w #1,(28,A0) */
    c->pc = RC_ADDR(0x00007fdeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[0] + 0x28u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_7FE4:
    /* 00007fe4   2  ble 00007ff2 */
    c->pc = RC_ADDR(0x00007fe4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_7FF2;

L_7FE6:
    /* 00007fe6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007fe6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7FEA:
    /* 00007fea   4  jsr (00006612) */
    c->pc = RC_ADDR(0x00007feau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007feeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00006612u);
    return;

L_7FEE:
    /* 00007fee   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007feeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7FF0:
    /* 00007ff0   2  bra 00007fda */
    c->pc = RC_ADDR(0x00007ff0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_7FDA;

L_7FF2:
    /* 00007ff2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00007ff2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_7FF6:
    /* 00007ff6   2  unlk A5 */
    c->pc = RC_ADDR(0x00007ff6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_7FF8:
    /* 00007ff8   2  rts */
    c->pc = RC_ADDR(0x00007ff8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
