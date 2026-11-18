/* fn_0000803e - 22 byte(s), 6 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000803e(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000803eu): goto L_803E;
    case RC_ADDR(0x00008042u): goto L_8042;
    case RC_ADDR(0x00008046u): goto L_8046;
    case RC_ADDR(0x0000804au): goto L_804A;
    case RC_ADDR(0x00008050u): goto L_8050;
    case RC_ADDR(0x00008052u): goto L_8052;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_803E:
    /* 0000803e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000803eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_8042:
    /* 00008042   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00008042u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8046:
    /* 00008046   4  lea (ffffd5cc,A4),A0 */
    c->pc = RC_ADDR(0x00008046u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2a34u);

L_804A:
    /* 0000804a   6  move.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000804au);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_8050:
    /* 00008050   2  unlk A5 */
    c->pc = RC_ADDR(0x00008050u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_8052:
    /* 00008052   2  rts */
    c->pc = RC_ADDR(0x00008052u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
