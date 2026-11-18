/* fn_00013cf4 - 50 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013cf4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00013cf4u): goto L_13CF4;
    case RC_ADDR(0x00013cf8u): goto L_13CF8;
    case RC_ADDR(0x00013cfcu): goto L_13CFC;
    case RC_ADDR(0x00013d00u): goto L_13D00;
    case RC_ADDR(0x00013d02u): goto L_13D02;
    case RC_ADDR(0x00013d04u): goto L_13D04;
    case RC_ADDR(0x00013d08u): goto L_13D08;
    case RC_ADDR(0x00013d0eu): goto L_13D0E;
    case RC_ADDR(0x00013d12u): goto L_13D12;
    case RC_ADDR(0x00013d18u): goto L_13D18;
    case RC_ADDR(0x00013d1au): goto L_13D1A;
    case RC_ADDR(0x00013d1eu): goto L_13D1E;
    case RC_ADDR(0x00013d22u): goto L_13D22;
    case RC_ADDR(0x00013d24u): goto L_13D24;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13CF4:
    /* 00013cf4   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00013cf4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_13CF8:
    /* 00013cf8   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00013cf8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13CFC:
    /* 00013cfc   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013cfcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D00:
    /* 00013d00   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013d00u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13D02:
    /* 00013d02   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013d02u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13D04:
    /* 00013d04   4  lea (1914,A4),A0 */
    c->pc = RC_ADDR(0x00013d04u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1914u);

L_13D08:
    /* 00013d08   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013d08u);
    rc_step(c, m, 18);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D0E:
    /* 00013d0e   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00013d0eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13D12:
    /* 00013d12   6  cmpi.w #1e,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00013d12u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000001eu);

L_13D18:
    /* 00013d18   2  blt 00013cfc */
    c->pc = RC_ADDR(0x00013d18u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_13CFC; }

L_13D1A:
    /* 00013d1a   4  clr.w (1a7c,A4) */
    c->pc = RC_ADDR(0x00013d1au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1a7cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13D1E:
    /* 00013d1e   4  clr.w (1a80,A4) */
    c->pc = RC_ADDR(0x00013d1eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1a80u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13D22:
    /* 00013d22   2  unlk A5 */
    c->pc = RC_ADDR(0x00013d22u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13D24:
    /* 00013d24   2  rts */
    c->pc = RC_ADDR(0x00013d24u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
