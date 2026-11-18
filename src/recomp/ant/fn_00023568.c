/* fn_00023568 - 24 byte(s), 6 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023568(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00023568u): goto L_23568;
    case RC_ADDR(0x0002356cu): goto L_2356C;
    case RC_ADDR(0x00023572u): goto L_23572;
    case RC_ADDR(0x00023576u): goto L_23576;
    case RC_ADDR(0x0002357au): goto L_2357A;
    case RC_ADDR(0x0002357eu): goto L_2357E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23568:
    /* 00023568   4  movem.l { D2 A0 },-(SP) */
    c->pc = RC_ADDR(0x00023568u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    c->a[7] = t3;

L_2356C:
    /* 0002356c   6  movem.l (SP)+,{ D7 A5 } */
    c->pc = RC_ADDR(0x0002356cu);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0xcu);
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;

L_23572:
    /* 00023572   4  movea.l (4524,A4),A6 */
    c->pc = RC_ADDR(0x00023572u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4524u));
    c->a[6] = t0;

L_23576:
    /* 00023576   4  jsr (ffffff94,A6) */
    c->pc = RC_ADDR(0x00023576u);
    rc_step(c, m, 18);
    c->pc = RC_ADDR(0x0002357au);
    rc_push32(c, m, RC_ADDR(0x0002357au));
    rc_depth++;
    rc_os_call_a6(c, m, -108);

L_2357A:
    /* 0002357a   4  movem.l (SP)+,{ D7 A5 } */
    c->pc = RC_ADDR(0x0002357au);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_2357E:
    /* 0002357e   2  rts */
    c->pc = RC_ADDR(0x0002357eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
