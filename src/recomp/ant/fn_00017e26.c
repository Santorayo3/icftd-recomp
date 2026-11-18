/* fn_00017e26 - 50 byte(s), 15 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00017e26(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00017e26u): goto L_17E26;
    case RC_ADDR(0x00017e2au): goto L_17E2A;
    case RC_ADDR(0x00017e2eu): goto L_17E2E;
    case RC_ADDR(0x00017e32u): goto L_17E32;
    case RC_ADDR(0x00017e36u): goto L_17E36;
    case RC_ADDR(0x00017e38u): goto L_17E38;
    case RC_ADDR(0x00017e3au): goto L_17E3A;
    case RC_ADDR(0x00017e3eu): goto L_17E3E;
    case RC_ADDR(0x00017e42u): goto L_17E42;
    case RC_ADDR(0x00017e46u): goto L_17E46;
    case RC_ADDR(0x00017e48u): goto L_17E48;
    case RC_ADDR(0x00017e4cu): goto L_17E4C;
    case RC_ADDR(0x00017e52u): goto L_17E52;
    case RC_ADDR(0x00017e54u): goto L_17E54;
    case RC_ADDR(0x00017e56u): goto L_17E56;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_17E26:
    /* 00017e26   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00017e26u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_17E2A:
    /* 00017e2a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00017e2au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17E2E:
    /* 00017e2e   4  move.l (1cc8,A4),-(A7) */
    c->pc = RC_ADDR(0x00017e2eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1cc8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17E32:
    /* 00017e32   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00017e32u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17E36:
    /* 00017e36   2  ext.l D0 */
    c->pc = RC_ADDR(0x00017e36u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_17E38:
    /* 00017e38   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00017e38u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_17E3A:
    /* 00017e3a   4  lea (1832,A4),A0 */
    c->pc = RC_ADDR(0x00017e3au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1832u);

L_17E3E:
    /* 00017e3e   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00017e3eu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17E42:
    /* 00017e42   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00017e42u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00017e46u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_17E46:
    /* 00017e46   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00017e46u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_17E48:
    /* 00017e48   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00017e48u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17E4C:
    /* 00017e4c   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00017e4cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_17E52:
    /* 00017e52   2  blt 00017e2e */
    c->pc = RC_ADDR(0x00017e52u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_17E2E; }

L_17E54:
    /* 00017e54   2  unlk A5 */
    c->pc = RC_ADDR(0x00017e54u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_17E56:
    /* 00017e56   2  rts */
    c->pc = RC_ADDR(0x00017e56u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
