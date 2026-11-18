/* fn_00007d00 - 12 byte(s), 5 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00007d00(cpu_t *c, rt_machine *m)
{
    u32 t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00007d00u): goto L_7D00;
    case RC_ADDR(0x00007d04u): goto L_7D04;
    case RC_ADDR(0x00007d06u): goto L_7D06;
    case RC_ADDR(0x00007d08u): goto L_7D08;
    case RC_ADDR(0x00007d0au): goto L_7D0A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7D00:
    /* 00007d00   4  ori.w #4,-(A4) */
    c->pc = RC_ADDR(0x00007d00u);
    rc_step(c, m, 18);
    c->a[4] -= 2u;
    t3 = c->a[4];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00000004u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_7D04:
    /* 00007d04   2  bne 00007d1a */
    c->pc = RC_ADDR(0x00007d04u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6))
    {
        c->pc = RC_ADDR(0x00007d1au);
        return;
    }

L_7D06:
    /* 00007d06   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00007d06u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_7D08:
    /* 00007d08   2  unlk A5 */
    c->pc = RC_ADDR(0x00007d08u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_7D0A:
    /* 00007d0a   2  rts */
    c->pc = RC_ADDR(0x00007d0au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
