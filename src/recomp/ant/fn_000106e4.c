/* fn_000106e4 - 22 byte(s), 6 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000106e4(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000106e4u): goto L_106E4;
    case RC_ADDR(0x000106e8u): goto L_106E8;
    case RC_ADDR(0x000106ecu): goto L_106EC;
    case RC_ADDR(0x000106f0u): goto L_106F0;
    case RC_ADDR(0x000106f4u): goto L_106F4;
    case RC_ADDR(0x000106f8u): goto L_106F8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_106E4:
    /* 000106e4   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x000106e4u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_106E8:
    /* 000106e8   4  movea.l (14da,A4),A3 */
    c->pc = RC_ADDR(0x000106e8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14dau));
    c->a[3] = t0;

L_106EC:
    /* 000106ec   4  movea.l (ffffa428,A4),A6 */
    c->pc = RC_ADDR(0x000106ecu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd8u));
    c->a[6] = t0;

L_106F0:
    /* 000106f0   4  jsr (0001089a) */
    c->pc = RC_ADDR(0x000106f0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000106f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001089au);
    return;

L_106F4:
    /* 000106f4   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x000106f4u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_106F8:
    /* 000106f8   2  rts */
    c->pc = RC_ADDR(0x000106f8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
