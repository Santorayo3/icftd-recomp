/* fn_000217cc - 52 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000217cc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000217ccu): goto L_217CC;
    case RC_ADDR(0x000217d0u): goto L_217D0;
    case RC_ADDR(0x000217d4u): goto L_217D4;
    case RC_ADDR(0x000217d6u): goto L_217D6;
    case RC_ADDR(0x000217d8u): goto L_217D8;
    case RC_ADDR(0x000217dcu): goto L_217DC;
    case RC_ADDR(0x000217e2u): goto L_217E2;
    case RC_ADDR(0x000217e6u): goto L_217E6;
    case RC_ADDR(0x000217ecu): goto L_217EC;
    case RC_ADDR(0x000217eeu): goto L_217EE;
    case RC_ADDR(0x000217f2u): goto L_217F2;
    case RC_ADDR(0x000217f6u): goto L_217F6;
    case RC_ADDR(0x000217fcu): goto L_217FC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_217CC:
    /* 000217cc   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000217ccu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_217D0:
    /* 000217d0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000217d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_217D4:
    /* 000217d4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000217d4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_217D6:
    /* 000217d6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000217d6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_217D8:
    /* 000217d8   4  lea (8dc,A4),A0 */
    c->pc = RC_ADDR(0x000217d8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x8dcu);

L_217DC:
    /* 000217dc   6  move.w (12,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000217dcu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_217E2:
    /* 000217e2   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000217e2u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_217E6:
    /* 000217e6   6  cmpi.w #20,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000217e6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_217EC:
    /* 000217ec   2  blt 000217d0 */
    c->pc = RC_ADDR(0x000217ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_217D0; }

L_217EE:
    /* 000217ee   4  jsr (0001fc22) */
    c->pc = RC_ADDR(0x000217eeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000217f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fc22u);
    return;

L_217F2:
    /* 000217f2   4  clr.w (91c,A4) */
    c->pc = RC_ADDR(0x000217f2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x91cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_217F6:
    /* 000217f6   6  move.w #1,(30ea,A4) */
    c->pc = RC_ADDR(0x000217f6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x30eau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_217FC:
    /* 000217fc   4  bra 00021950 */
    c->pc = RC_ADDR(0x000217fcu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
