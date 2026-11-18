/* fn_0000a376 - 60 byte(s), 18 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000a376(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a376u): goto L_A376;
    case RC_ADDR(0x0000a37au): goto L_A37A;
    case RC_ADDR(0x0000a37eu): goto L_A37E;
    case RC_ADDR(0x0000a382u): goto L_A382;
    case RC_ADDR(0x0000a386u): goto L_A386;
    case RC_ADDR(0x0000a388u): goto L_A388;
    case RC_ADDR(0x0000a38cu): goto L_A38C;
    case RC_ADDR(0x0000a390u): goto L_A390;
    case RC_ADDR(0x0000a394u): goto L_A394;
    case RC_ADDR(0x0000a396u): goto L_A396;
    case RC_ADDR(0x0000a39cu): goto L_A39C;
    case RC_ADDR(0x0000a39eu): goto L_A39E;
    case RC_ADDR(0x0000a3a2u): goto L_A3A2;
    case RC_ADDR(0x0000a3a4u): goto L_A3A4;
    case RC_ADDR(0x0000a3a8u): goto L_A3A8;
    case RC_ADDR(0x0000a3aau): goto L_A3AA;
    case RC_ADDR(0x0000a3aeu): goto L_A3AE;
    case RC_ADDR(0x0000a3b0u): goto L_A3B0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A376:
    /* 0000a376   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000a376u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_A37A:
    /* 0000a37a   4  move.l (cba,A4),-(A7) */
    c->pc = RC_ADDR(0x0000a37au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcbau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A37E:
    /* 0000a37e   4  move.l (cae,A4),-(A7) */
    c->pc = RC_ADDR(0x0000a37eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcaeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A382:
    /* 0000a382   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000a382u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000a386u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_A386:
    /* 0000a386   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000a386u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_A388:
    /* 0000a388   4  move.l (cbe,A4),-(A7) */
    c->pc = RC_ADDR(0x0000a388u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcbeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A38C:
    /* 0000a38c   4  move.l (cb2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000a38cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xcb2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A390:
    /* 0000a390   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000a390u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000a394u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_A394:
    /* 0000a394   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000a394u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_A396:
    /* 0000a396   6  cmpi.w #6,(ffff855a,A4) */
    c->pc = RC_ADDR(0x0000a396u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7aa6u));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_A39C:
    /* 0000a39c   2  ble 0000a3ae */
    c->pc = RC_ADDR(0x0000a39cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_A3AE;

L_A39E:
    /* 0000a39e   4  tst.w (856,A4) */
    c->pc = RC_ADDR(0x0000a39eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x856u));
    rc_set_nzvc(c, t0, RC_W);

L_A3A2:
    /* 0000a3a2   2  beq 0000a3ae */
    c->pc = RC_ADDR(0x0000a3a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A3AE;

L_A3A4:
    /* 0000a3a4   4  tst.w (85a,A4) */
    c->pc = RC_ADDR(0x0000a3a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x85au));
    rc_set_nzvc(c, t0, RC_W);

L_A3A8:
    /* 0000a3a8   2  bne 0000a3ae */
    c->pc = RC_ADDR(0x0000a3a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_A3AE;

L_A3AA:
    /* 0000a3aa   4  subq.w #2,(ffff855a,A4) */
    c->pc = RC_ADDR(0x0000a3aau);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x7aa6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_A3AE:
    /* 0000a3ae   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a3aeu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A3B0:
    /* 0000a3b0   2  rts */
    c->pc = RC_ADDR(0x0000a3b0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
