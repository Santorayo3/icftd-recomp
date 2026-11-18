/* fn_00010862 - 24 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010862(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00010862u): goto L_10862;
    case RC_ADDR(0x00010866u): goto L_10866;
    case RC_ADDR(0x0001086au): goto L_1086A;
    case RC_ADDR(0x0001086eu): goto L_1086E;
    case RC_ADDR(0x00010872u): goto L_10872;
    case RC_ADDR(0x00010874u): goto L_10874;
    case RC_ADDR(0x00010878u): goto L_10878;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10862:
    /* 00010862   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x00010862u);
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

L_10866:
    /* 00010866   4  movea.l (2c,A7),A0 */
    c->pc = RC_ADDR(0x00010866u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x2cu));
    c->a[0] = t0;

L_1086A:
    /* 0001086a   4  movea.l (14da,A4),A3 */
    c->pc = RC_ADDR(0x0001086au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14dau));
    c->a[3] = t0;

L_1086E:
    /* 0001086e   4  movea.l (ffffa428,A4),A6 */
    c->pc = RC_ADDR(0x0001086eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd8u));
    c->a[6] = t0;

L_10872:
    /* 00010872   2  bsr 000108ce */
    c->pc = RC_ADDR(0x00010872u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010874u));
    rc_depth++;
    c->pc = RC_ADDR(0x000108ceu);
    return;

L_10874:
    /* 00010874   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x00010874u);
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

L_10878:
    /* 00010878   2  rts */
    c->pc = RC_ADDR(0x00010878u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
