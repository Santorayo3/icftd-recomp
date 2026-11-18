/* fn_00007d1a - 24 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00007d1a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00007d1au): goto L_7D1A;
    case RC_ADDR(0x00007d1eu): goto L_7D1E;
    case RC_ADDR(0x00007d22u): goto L_7D22;
    case RC_ADDR(0x00007d26u): goto L_7D26;
    case RC_ADDR(0x00007d28u): goto L_7D28;
    case RC_ADDR(0x00007d2cu): goto L_7D2C;
    case RC_ADDR(0x00007d2eu): goto L_7D2E;
    case RC_ADDR(0x00007d30u): goto L_7D30;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7D1A:
    /* 00007d1a   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00007d1au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_7D1E:
    /* 00007d1e   4  move.l (A0),(fffffff0,A5) */
    c->pc = RC_ADDR(0x00007d1eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7D22:
    /* 00007d22   4  movea.l (fffffff0,A5),A0 */
    c->pc = RC_ADDR(0x00007d22u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_7D26:
    /* 00007d26   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x00007d26u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_7D28:
    /* 00007d28   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00007d28u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7D2C:
    /* 00007d2c   2  bra 00007cee */
    c->pc = RC_ADDR(0x00007d2cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00007ceeu);
    return;

L_7D2E:
    /* 00007d2e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00007d2eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_7D30:
    /* 00007d30   2  bra 00007d08 */
    c->pc = RC_ADDR(0x00007d30u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00007d08u);
    return;

}
