/* fn_0001076e - 38 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001076e(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001076eu): goto L_1076E;
    case RC_ADDR(0x00010772u): goto L_10772;
    case RC_ADDR(0x00010776u): goto L_10776;
    case RC_ADDR(0x0001077au): goto L_1077A;
    case RC_ADDR(0x0001077eu): goto L_1077E;
    case RC_ADDR(0x00010782u): goto L_10782;
    case RC_ADDR(0x00010786u): goto L_10786;
    case RC_ADDR(0x0001078au): goto L_1078A;
    case RC_ADDR(0x0001078eu): goto L_1078E;
    case RC_ADDR(0x00010792u): goto L_10792;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1076E:
    /* 0001076e   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001076eu);
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

L_10772:
    /* 00010772   4  movea.l (2c,A7),A0 */
    c->pc = RC_ADDR(0x00010772u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x2cu));
    c->a[0] = t0;

L_10776:
    /* 00010776   4  move.l (30,A7),D0 */
    c->pc = RC_ADDR(0x00010776u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x30u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1077A:
    /* 0001077a   4  move.l (34,A7),D1 */
    c->pc = RC_ADDR(0x0001077au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x34u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1077E:
    /* 0001077e   4  move.l (38,A7),D2 */
    c->pc = RC_ADDR(0x0001077eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x38u));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10782:
    /* 00010782   4  movea.l (14da,A4),A3 */
    c->pc = RC_ADDR(0x00010782u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14dau));
    c->a[3] = t0;

L_10786:
    /* 00010786   4  movea.l (ffffa428,A4),A6 */
    c->pc = RC_ADDR(0x00010786u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd8u));
    c->a[6] = t0;

L_1078A:
    /* 0001078a   4  jsr (000108aa) */
    c->pc = RC_ADDR(0x0001078au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001078eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000108aau);
    return;

L_1078E:
    /* 0001078e   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0001078eu);
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

L_10792:
    /* 00010792   2  rts */
    c->pc = RC_ADDR(0x00010792u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
