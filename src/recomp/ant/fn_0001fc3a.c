/* fn_0001fc3a - 22 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001fc3a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fc3au): goto L_1FC3A;
    case RC_ADDR(0x0001fc3eu): goto L_1FC3E;
    case RC_ADDR(0x0001fc42u): goto L_1FC42;
    case RC_ADDR(0x0001fc44u): goto L_1FC44;
    case RC_ADDR(0x0001fc48u): goto L_1FC48;
    case RC_ADDR(0x0001fc4cu): goto L_1FC4C;
    case RC_ADDR(0x0001fc4eu): goto L_1FC4E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FC3A:
    /* 0001fc3a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001fc3au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1FC3E:
    /* 0001fc3e   4  tst.w (ffffd2a6,A4) */
    c->pc = RC_ADDR(0x0001fc3eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d5au));
    rc_set_nzvc(c, t0, RC_W);

L_1FC42:
    /* 0001fc42   2  bne 0001fc48 */
    c->pc = RC_ADDR(0x0001fc42u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1FC48;

L_1FC44:
    /* 0001fc44   4  jsr (ffff83a4,A4) */
    c->pc = RC_ADDR(0x0001fc44u);
    rc_step(c, m, 18);
    /* vector 155 */
    rc_push32(c, m, RC_ADDR(0x0001fc48u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023972u);
    return;

L_1FC48:
    /* 0001fc48   4  addq.w #1,(ffffd2a6,A4) */
    c->pc = RC_ADDR(0x0001fc48u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x2d5au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1FC4C:
    /* 0001fc4c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001fc4cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FC4E:
    /* 0001fc4e   2  rts */
    c->pc = RC_ADDR(0x0001fc4eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
