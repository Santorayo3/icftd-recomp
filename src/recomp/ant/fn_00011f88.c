/* fn_00011f88 - 36 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00011f88(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00011f88u): goto L_11F88;
    case RC_ADDR(0x00011f8cu): goto L_11F8C;
    case RC_ADDR(0x00011f90u): goto L_11F90;
    case RC_ADDR(0x00011f94u): goto L_11F94;
    case RC_ADDR(0x00011f96u): goto L_11F96;
    case RC_ADDR(0x00011f9au): goto L_11F9A;
    case RC_ADDR(0x00011f9eu): goto L_11F9E;
    case RC_ADDR(0x00011fa2u): goto L_11FA2;
    case RC_ADDR(0x00011fa4u): goto L_11FA4;
    case RC_ADDR(0x00011fa8u): goto L_11FA8;
    case RC_ADDR(0x00011faau): goto L_11FAA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11F88:
    /* 00011f88   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00011f88u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_11F8C:
    /* 00011f8c   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00011f8cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11F90:
    /* 00011f90   4  jsr (00011efe) */
    c->pc = RC_ADDR(0x00011f90u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00011f94u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011efeu);
    return;

L_11F94:
    /* 00011f94   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00011f94u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_11F96:
    /* 00011f96   4  jsr (000189d2) */
    c->pc = RC_ADDR(0x00011f96u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00011f9au));
    rc_depth++;
    c->pc = RC_ADDR(0x000189d2u);
    return;

L_11F9A:
    /* 00011f9a   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00011f9au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11F9E:
    /* 00011f9e   4  jsr (00011efe) */
    c->pc = RC_ADDR(0x00011f9eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00011fa2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011efeu);
    return;

L_11FA2:
    /* 00011fa2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00011fa2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_11FA4:
    /* 00011fa4   4  jsr (000189d2) */
    c->pc = RC_ADDR(0x00011fa4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00011fa8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000189d2u);
    return;

L_11FA8:
    /* 00011fa8   2  unlk A5 */
    c->pc = RC_ADDR(0x00011fa8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11FAA:
    /* 00011faa   2  rts */
    c->pc = RC_ADDR(0x00011faau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
