/* fn_00010d10 - 28 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010d10(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00010d10u): goto L_10D10;
    case RC_ADDR(0x00010d12u): goto L_10D12;
    case RC_ADDR(0x00010d14u): goto L_10D14;
    case RC_ADDR(0x00010d1au): goto L_10D1A;
    case RC_ADDR(0x00010d1cu): goto L_10D1C;
    case RC_ADDR(0x00010d1eu): goto L_10D1E;
    case RC_ADDR(0x00010d24u): goto L_10D24;
    case RC_ADDR(0x00010d2au): goto L_10D2A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10D10:
    /* 00010d10   2  clr.w D0 */
    c->pc = RC_ADDR(0x00010d10u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10D12:
    /* 00010d12   2  bset D7,D0 */
    c->pc = RC_ADDR(0x00010d12u);
    rc_step(c, m, 8);
    t4 = c->d[7] & 31u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 0, RC_L, t2);

L_10D14:
    /* 00010d14   6  move.w D0,(00dff096).l */
    c->pc = RC_ADDR(0x00010d14u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff096u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10D1A:
    /* 00010d1a   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x00010d1au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10D1C:
    /* 00010d1c   2  asl.w #4,D0 */
    c->pc = RC_ADDR(0x00010d1cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_10D1E:
    /* 00010d1e   6  lea (00dff0a0).l,A0 */
    c->pc = RC_ADDR(0x00010d1eu);
    rc_step(c, m, 12);
    c->a[0] = 0x00dff0a0u;

L_10D24:
    /* 00010d24   6  move.w #2,(6,A0,D0.w) */
    c->pc = RC_ADDR(0x00010d24u);
    rc_step(c, m, 18);
    t0 = 0x00000002u;
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x6u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10D2A:
    /* 00010d2a   2  rts */
    c->pc = RC_ADDR(0x00010d2au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
