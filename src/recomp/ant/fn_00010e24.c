/* fn_00010e24 - 80 byte(s), 22 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010e24(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00010e24u): goto L_10E24;
    case RC_ADDR(0x00010e28u): goto L_10E28;
    case RC_ADDR(0x00010e2cu): goto L_10E2C;
    case RC_ADDR(0x00010e30u): goto L_10E30;
    case RC_ADDR(0x00010e32u): goto L_10E32;
    case RC_ADDR(0x00010e34u): goto L_10E34;
    case RC_ADDR(0x00010e38u): goto L_10E38;
    case RC_ADDR(0x00010e3au): goto L_10E3A;
    case RC_ADDR(0x00010e3eu): goto L_10E3E;
    case RC_ADDR(0x00010e44u): goto L_10E44;
    case RC_ADDR(0x00010e46u): goto L_10E46;
    case RC_ADDR(0x00010e4cu): goto L_10E4C;
    case RC_ADDR(0x00010e50u): goto L_10E50;
    case RC_ADDR(0x00010e52u): goto L_10E52;
    case RC_ADDR(0x00010e56u): goto L_10E56;
    case RC_ADDR(0x00010e58u): goto L_10E58;
    case RC_ADDR(0x00010e5cu): goto L_10E5C;
    case RC_ADDR(0x00010e60u): goto L_10E60;
    case RC_ADDR(0x00010e64u): goto L_10E64;
    case RC_ADDR(0x00010e6au): goto L_10E6A;
    case RC_ADDR(0x00010e6eu): goto L_10E6E;
    case RC_ADDR(0x00010e72u): goto L_10E72;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10E24:
    /* 00010e24   4  movem.l { D6 D7 A0 A7 },-(SP) */
    c->pc = RC_ADDR(0x00010e24u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_10E28:
    /* 00010e28   4  movea.l (6,A6),A0 */
    c->pc = RC_ADDR(0x00010e28u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[6] + 0x6u));
    c->a[0] = t0;

L_10E2C:
    /* 00010e2c   4  lea (3e,A6),A1 */
    c->pc = RC_ADDR(0x00010e2cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[6] + 0x3eu);

L_10E30:
    /* 00010e30   2  ext.w D0 */
    c->pc = RC_ADDR(0x00010e30u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_10E32:
    /* 00010e32   2  move.w D0,D7 */
    c->pc = RC_ADDR(0x00010e32u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10E34:
    /* 00010e34   4  mulu.w #16,D0 */
    c->pc = RC_ADDR(0x00010e34u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_mulu(c, 0, t0);

L_10E38:
    /* 00010e38   2  adda.w D0,A1 */
    c->pc = RC_ADDR(0x00010e38u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[1] += rc_ext(t0, RC_W);

L_10E3A:
    /* 00010e3a   4  clr.b (0,A1) */
    c->pc = RC_ADDR(0x00010e3au);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[1] + 0x0u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_10E3E:
    /* 00010e3e   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x00010e3eu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_10E44:
    /* 00010e44   2  beq 00010e6e */
    c->pc = RC_ADDR(0x00010e44u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10E6E;

L_10E46:
    /* 00010e46   6  move.b #3,(0,A1) */
    c->pc = RC_ADDR(0x00010e46u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr8(c, m, (c->a[1] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_10E4C:
    /* 00010e4c   4  move.l (4,A1),D0 */
    c->pc = RC_ADDR(0x00010e4cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10E50:
    /* 00010e50   2  beq 00010e64 */
    c->pc = RC_ADDR(0x00010e50u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10E64;

L_10E52:
    /* 00010e52   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x00010e52u);
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

L_10E56:
    /* 00010e56   2  movea.l D0,A4 */
    c->pc = RC_ADDR(0x00010e56u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[4] = t0;

L_10E58:
    /* 00010e58   4  movea.l (0,A4),A4 */
    c->pc = RC_ADDR(0x00010e58u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x0u));
    c->a[4] = t0;

L_10E5C:
    /* 00010e5c   4  jsr (0,A4) */
    c->pc = RC_ADDR(0x00010e5cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010e60u));
    rc_depth++;
    t3 = (c->a[4] + 0x0u);
    c->pc = t3;
    return;

L_10E60:
    /* 00010e60   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x00010e60u);
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

L_10E64:
    /* 00010e64   6  move.b #0,(1,A1) */
    c->pc = RC_ADDR(0x00010e64u);
    rc_step(c, m, 16);
    t0 = 0x00000000u;
    rc_wr8(c, m, (c->a[1] + 0x1u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_10E6A:
    /* 00010e6a   4  clr.b (0,A1) */
    c->pc = RC_ADDR(0x00010e6au);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[1] + 0x0u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_10E6E:
    /* 00010e6e   4  movem.l (SP)+,{ D0 D7 A0 A1 } */
    c->pc = RC_ADDR(0x00010e6eu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
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
    c->a[7] = t3;

L_10E72:
    /* 00010e72   2  rts */
    c->pc = RC_ADDR(0x00010e72u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
