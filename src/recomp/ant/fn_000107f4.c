/* fn_000107f4 - 30 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000107f4(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000107f4u): goto L_107F4;
    case RC_ADDR(0x000107f8u): goto L_107F8;
    case RC_ADDR(0x000107fcu): goto L_107FC;
    case RC_ADDR(0x00010800u): goto L_10800;
    case RC_ADDR(0x00010804u): goto L_10804;
    case RC_ADDR(0x00010808u): goto L_10808;
    case RC_ADDR(0x0001080cu): goto L_1080C;
    case RC_ADDR(0x00010810u): goto L_10810;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_107F4:
    /* 000107f4   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x000107f4u);
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

L_107F8:
    /* 000107f8   4  move.l (2c,A7),D0 */
    c->pc = RC_ADDR(0x000107f8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x2cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_107FC:
    /* 000107fc   4  move.l (30,A7),D1 */
    c->pc = RC_ADDR(0x000107fcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x30u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10800:
    /* 00010800   4  movea.l (14da,A4),A3 */
    c->pc = RC_ADDR(0x00010800u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14dau));
    c->a[3] = t0;

L_10804:
    /* 00010804   4  movea.l (ffffa428,A4),A6 */
    c->pc = RC_ADDR(0x00010804u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd8u));
    c->a[6] = t0;

L_10808:
    /* 00010808   4  jsr (000108be) */
    c->pc = RC_ADDR(0x00010808u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001080cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000108beu);
    return;

L_1080C:
    /* 0001080c   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0001080cu);
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

L_10810:
    /* 00010810   2  rts */
    c->pc = RC_ADDR(0x00010810u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
