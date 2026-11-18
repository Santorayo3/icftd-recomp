/* fn_00023740 - 22 byte(s), 6 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023740(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00023740u): goto L_23740;
    case RC_ADDR(0x00023744u): goto L_23744;
    case RC_ADDR(0x00023748u): goto L_23748;
    case RC_ADDR(0x0002374cu): goto L_2374C;
    case RC_ADDR(0x00023750u): goto L_23750;
    case RC_ADDR(0x00023754u): goto L_23754;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23740:
    /* 00023740   4  movem.l { A0 A1 },-(SP) */
    c->pc = RC_ADDR(0x00023740u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    c->a[7] = t3;

L_23744:
    /* 00023744   4  movea.l (c,A7),A1 */
    c->pc = RC_ADDR(0x00023744u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0xcu));
    c->a[1] = t0;

L_23748:
    /* 00023748   4  movea.l (4524,A4),A6 */
    c->pc = RC_ADDR(0x00023748u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4524u));
    c->a[6] = t0;

L_2374C:
    /* 0002374c   4  jsr (fffffe38,A6) */
    c->pc = RC_ADDR(0x0002374cu);
    rc_step(c, m, 18);
    c->pc = RC_ADDR(0x00023750u);
    rc_push32(c, m, RC_ADDR(0x00023750u));
    rc_depth++;
    rc_os_call_a6(c, m, -456);

L_23750:
    /* 00023750   4  movem.l (SP)+,{ D6 D7 } */
    c->pc = RC_ADDR(0x00023750u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_23754:
    /* 00023754   2  rts */
    c->pc = RC_ADDR(0x00023754u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
