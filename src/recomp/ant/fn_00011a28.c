/* fn_00011a28 - 30 byte(s), 9 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00011a28(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00011a28u): goto L_11A28;
    case RC_ADDR(0x00011a2cu): goto L_11A2C;
    case RC_ADDR(0x00011a30u): goto L_11A30;
    case RC_ADDR(0x00011a32u): goto L_11A32;
    case RC_ADDR(0x00011a36u): goto L_11A36;
    case RC_ADDR(0x00011a38u): goto L_11A38;
    case RC_ADDR(0x00011a3au): goto L_11A3A;
    case RC_ADDR(0x00011a40u): goto L_11A40;
    case RC_ADDR(0x00011a44u): goto L_11A44;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11A28:
    /* 00011a28   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x00011a28u);
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

L_11A2C:
    /* 00011a2c   4  lea (00011a46),A0 */
    c->pc = RC_ADDR(0x00011a2cu);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00011a46u);

L_11A30:
    /* 00011a30   2  move.l (A0),D0 */
    c->pc = RC_ADDR(0x00011a30u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_11A32:
    /* 00011a32   4  beq 00011a40 */
    c->pc = RC_ADDR(0x00011a32u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_11A40;

L_11A36:
    /* 00011a36   2  movea.l D0,A6 */
    c->pc = RC_ADDR(0x00011a36u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[6] = t0;

L_11A38:
    /* 00011a38   2  clr.l (A0) */
    c->pc = RC_ADDR(0x00011a38u);
    rc_step(c, m, 20);
    rc_wr32(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_11A3A:
    /* 00011a3a   6  clr.b (00bfee01).l */
    c->pc = RC_ADDR(0x00011a3au);
    rc_step(c, m, 20);
    rc_wr8(c, m, 0x00bfee01u, 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_11A40:
    /* 00011a40   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x00011a40u);
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

L_11A44:
    /* 00011a44   2  rts */
    c->pc = RC_ADDR(0x00011a44u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
