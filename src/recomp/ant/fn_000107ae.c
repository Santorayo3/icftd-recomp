/* fn_000107ae - 26 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000107ae(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000107aeu): goto L_107AE;
    case RC_ADDR(0x000107b2u): goto L_107B2;
    case RC_ADDR(0x000107b6u): goto L_107B6;
    case RC_ADDR(0x000107bau): goto L_107BA;
    case RC_ADDR(0x000107beu): goto L_107BE;
    case RC_ADDR(0x000107c2u): goto L_107C2;
    case RC_ADDR(0x000107c6u): goto L_107C6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_107AE:
    /* 000107ae   4  movem.l { D1 D2 D3 D4 D5 D6 A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x000107aeu);
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

L_107B2:
    /* 000107b2   4  move.l (2c,A7),D0 */
    c->pc = RC_ADDR(0x000107b2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x2cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_107B6:
    /* 000107b6   4  movea.l (14da,A4),A3 */
    c->pc = RC_ADDR(0x000107b6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x14dau));
    c->a[3] = t0;

L_107BA:
    /* 000107ba   4  movea.l (ffffa428,A4),A6 */
    c->pc = RC_ADDR(0x000107bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bd8u));
    c->a[6] = t0;

L_107BE:
    /* 000107be   4  jsr (000108b2) */
    c->pc = RC_ADDR(0x000107beu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000107c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x000108b2u);
    return;

L_107C2:
    /* 000107c2   4  movem.l (SP)+,{ D4 D5 D6 D7 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x000107c2u);
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

L_107C6:
    /* 000107c6   2  rts */
    c->pc = RC_ADDR(0x000107c6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
