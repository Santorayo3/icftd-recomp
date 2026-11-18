/* fn_00010ad0 - 34 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010ad0(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00010ad0u): goto L_10AD0;
    case RC_ADDR(0x00010ad4u): goto L_10AD4;
    case RC_ADDR(0x00010ad8u): goto L_10AD8;
    case RC_ADDR(0x00010adcu): goto L_10ADC;
    case RC_ADDR(0x00010adeu): goto L_10ADE;
    case RC_ADDR(0x00010ae0u): goto L_10AE0;
    case RC_ADDR(0x00010ae2u): goto L_10AE2;
    case RC_ADDR(0x00010ae6u): goto L_10AE6;
    case RC_ADDR(0x00010ae8u): goto L_10AE8;
    case RC_ADDR(0x00010aecu): goto L_10AEC;
    case RC_ADDR(0x00010af0u): goto L_10AF0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10AD0:
    /* 00010ad0   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x00010ad0u);
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

L_10AD4:
    /* 00010ad4   4  movea.l (00011a46),A6 */
    c->pc = RC_ADDR(0x00010ad4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, RC_ADDR(0x00011a46u));
    c->a[6] = t0;

L_10AD8:
    /* 00010ad8   4  move.l (18,A6),D0 */
    c->pc = RC_ADDR(0x00010ad8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[6] + 0x18u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10ADC:
    /* 00010adc   2  beq 00010ae2 */
    c->pc = RC_ADDR(0x00010adcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10AE2;

L_10ADE:
    /* 00010ade   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00010adeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_10AE0:
    /* 00010ae0   2  jsr (A0) */
    c->pc = RC_ADDR(0x00010ae0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00010ae2u));
    rc_depth++;
    t3 = c->a[0];
    c->pc = t3;
    return;

L_10AE2:
    /* 00010ae2   4  bsr 00010eb2 */
    c->pc = RC_ADDR(0x00010ae2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010ae6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010eb2u);
    return;

L_10AE6:
    /* 00010ae6   2  bsr 00010af2 */
    c->pc = RC_ADDR(0x00010ae6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010ae8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010af2u);
    return;

L_10AE8:
    /* 00010ae8   4  bsr 00010c60 */
    c->pc = RC_ADDR(0x00010ae8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010aecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00010c60u);
    return;

L_10AEC:
    /* 00010aec   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x00010aecu);
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

L_10AF0:
    /* 00010af0   2  rts */
    c->pc = RC_ADDR(0x00010af0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
