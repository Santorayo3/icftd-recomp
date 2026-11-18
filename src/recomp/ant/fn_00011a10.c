/* fn_00011a10 - 24 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00011a10(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00011a10u): goto L_11A10;
    case RC_ADDR(0x00011a14u): goto L_11A14;
    case RC_ADDR(0x00011a18u): goto L_11A18;
    case RC_ADDR(0x00011a1au): goto L_11A1A;
    case RC_ADDR(0x00011a1cu): goto L_11A1C;
    case RC_ADDR(0x00011a20u): goto L_11A20;
    case RC_ADDR(0x00011a22u): goto L_11A22;
    case RC_ADDR(0x00011a26u): goto L_11A26;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11A10:
    /* 00011a10   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x00011a10u);
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
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_11A14:
    /* 00011a14   4  move.l (00011a46),D0 */
    c->pc = RC_ADDR(0x00011a14u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, RC_ADDR(0x00011a46u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11A18:
    /* 00011a18   2  beq 00011a22 */
    c->pc = RC_ADDR(0x00011a18u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11A22;

L_11A1A:
    /* 00011a1a   2  movea.l D0,A6 */
    c->pc = RC_ADDR(0x00011a1au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[6] = t0;

L_11A1C:
    /* 00011a1c   4  bsr 00010e12 */
    c->pc = RC_ADDR(0x00011a1cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00011a20u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010e12u);
    return;

L_11A20:
    /* 00011a20   2  bsr 00011a28 */
    c->pc = RC_ADDR(0x00011a20u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00011a22u));
    rc_depth++;
    c->pc = RC_ADDR(0x00011a28u);
    return;

L_11A22:
    /* 00011a22   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x00011a22u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
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
    c->a[0] = t0;
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

L_11A26:
    /* 00011a26   2  rts */
    c->pc = RC_ADDR(0x00011a26u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
