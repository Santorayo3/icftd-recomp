/* fn_0000273a - 24 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000273a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000273au): goto L_273A;
    case RC_ADDR(0x0000273cu): goto L_273C;
    case RC_ADDR(0x0000273eu): goto L_273E;
    case RC_ADDR(0x00002742u): goto L_2742;
    case RC_ADDR(0x00002748u): goto L_2748;
    case RC_ADDR(0x0000274au): goto L_274A;
    case RC_ADDR(0x0000274eu): goto L_274E;
    case RC_ADDR(0x00002750u): goto L_2750;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_273A:
    /* 0000273a   2  or.w -(A2),D0 */
    c->pc = RC_ADDR(0x0000273au);
    rc_step(c, m, 10);
    c->a[2] -= 2u;
    t0 = rc_rd16(c, m, c->a[2]);
    t2 = t0 | rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_273C:
    /* 0000273c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000273cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_273E:
    /* 0000273e   4  addq.w #1,(ffff8584,A4) */
    c->pc = RC_ADDR(0x0000273eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x7a7cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2742:
    /* 00002742   6  cmpi.w #3,(ffff8584,A4) */
    c->pc = RC_ADDR(0x00002742u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a7cu));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_2748:
    /* 00002748   2  ble 0000274e */
    c->pc = RC_ADDR(0x00002748u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_274E;

L_274A:
    /* 0000274a   4  clr.w (ffff8584,A4) */
    c->pc = RC_ADDR(0x0000274au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a7cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_274E:
    /* 0000274e   2  unlk A5 */
    c->pc = RC_ADDR(0x0000274eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2750:
    /* 00002750   2  rts */
    c->pc = RC_ADDR(0x00002750u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
