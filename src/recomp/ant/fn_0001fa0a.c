/* fn_0001fa0a - 90 byte(s), 29 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001fa0a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fa0au): goto L_1FA0A;
    case RC_ADDR(0x0001fa0eu): goto L_1FA0E;
    case RC_ADDR(0x0001fa10u): goto L_1FA10;
    case RC_ADDR(0x0001fa14u): goto L_1FA14;
    case RC_ADDR(0x0001fa18u): goto L_1FA18;
    case RC_ADDR(0x0001fa1cu): goto L_1FA1C;
    case RC_ADDR(0x0001fa1eu): goto L_1FA1E;
    case RC_ADDR(0x0001fa22u): goto L_1FA22;
    case RC_ADDR(0x0001fa26u): goto L_1FA26;
    case RC_ADDR(0x0001fa2au): goto L_1FA2A;
    case RC_ADDR(0x0001fa2cu): goto L_1FA2C;
    case RC_ADDR(0x0001fa30u): goto L_1FA30;
    case RC_ADDR(0x0001fa32u): goto L_1FA32;
    case RC_ADDR(0x0001fa36u): goto L_1FA36;
    case RC_ADDR(0x0001fa3au): goto L_1FA3A;
    case RC_ADDR(0x0001fa3cu): goto L_1FA3C;
    case RC_ADDR(0x0001fa40u): goto L_1FA40;
    case RC_ADDR(0x0001fa44u): goto L_1FA44;
    case RC_ADDR(0x0001fa46u): goto L_1FA46;
    case RC_ADDR(0x0001fa4au): goto L_1FA4A;
    case RC_ADDR(0x0001fa4cu): goto L_1FA4C;
    case RC_ADDR(0x0001fa4eu): goto L_1FA4E;
    case RC_ADDR(0x0001fa50u): goto L_1FA50;
    case RC_ADDR(0x0001fa54u): goto L_1FA54;
    case RC_ADDR(0x0001fa56u): goto L_1FA56;
    case RC_ADDR(0x0001fa58u): goto L_1FA58;
    case RC_ADDR(0x0001fa5cu): goto L_1FA5C;
    case RC_ADDR(0x0001fa5eu): goto L_1FA5E;
    case RC_ADDR(0x0001fa62u): goto L_1FA62;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FA0A:
    /* 0001fa0a   4  subq.w #1,(32f8,A4) */
    c->pc = RC_ADDR(0x0001fa0au);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x32f8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1FA0E:
    /* 0001fa0e   2  bne 0001fa62 */
    c->pc = RC_ADDR(0x0001fa0eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1FA62;

L_1FA10:
    /* 0001fa10   4  move.w (32f6,A4),D0 */
    c->pc = RC_ADDR(0x0001fa10u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x32f6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FA14:
    /* 0001fa14   4  move.w D0,(32f8,A4) */
    c->pc = RC_ADDR(0x0001fa14u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x32f8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FA18:
    /* 0001fa18   4  tst.w (32f4,A4) */
    c->pc = RC_ADDR(0x0001fa18u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x32f4u));
    rc_set_nzvc(c, t0, RC_W);

L_1FA1C:
    /* 0001fa1c   2  beq 0001fa62 */
    c->pc = RC_ADDR(0x0001fa1cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FA62;

L_1FA1E:
    /* 0001fa1e   4  lea (7f6,A4),A6 */
    c->pc = RC_ADDR(0x0001fa1eu);
    rc_step(c, m, 8);
    c->a[6] = (c->a[4] + 0x7f6u);

L_1FA22:
    /* 0001fa22   4  move.w #1f,D3 */
    c->pc = RC_ADDR(0x0001fa22u);
    rc_step(c, m, 8);
    t0 = 0x0000001fu;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FA26:
    /* 0001fa26   4  subq.w #1,(32f4,A4) */
    c->pc = RC_ADDR(0x0001fa26u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x32f4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1FA2A:
    /* 0001fa2a   2  bne 0001fa3c */
    c->pc = RC_ADDR(0x0001fa2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1FA3C;

L_1FA2C:
    /* 0001fa2c   4  lea (30f0,A4),A0 */
    c->pc = RC_ADDR(0x0001fa2cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x30f0u);

L_1FA30:
    /* 0001fa30   2  move.w (A0)+,(A6)+ */
    c->pc = RC_ADDR(0x0001fa30u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    t3 = c->a[6];
    c->a[6] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FA32:
    /* 0001fa32   4  dbf D3,0001fa30 */
    c->pc = RC_ADDR(0x0001fa32u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 3, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 3, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1FA30; }
    }

L_1FA36:
    /* 0001fa36   4  clr.w (924,A4) */
    c->pc = RC_ADDR(0x0001fa36u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x924u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1FA3A:
    /* 0001fa3a   2  rts */
    c->pc = RC_ADDR(0x0001fa3au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1FA3C:
    /* 0001fa3c   4  lea (3130,A4),A0 */
    c->pc = RC_ADDR(0x0001fa3cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x3130u);

L_1FA40:
    /* 0001fa40   4  lea (31f0,A4),A1 */
    c->pc = RC_ADDR(0x0001fa40u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x31f0u);

L_1FA44:
    /* 0001fa44   2  clr.w D1 */
    c->pc = RC_ADDR(0x0001fa44u);
    rc_step(c, m, 4);
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1FA46:
    /* 0001fa46   4  move.w #2,D2 */
    c->pc = RC_ADDR(0x0001fa46u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FA4A:
    /* 0001fa4a   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x0001fa4au);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FA4C:
    /* 0001fa4c   2  sub.w (A1)+,D0 */
    c->pc = RC_ADDR(0x0001fa4cu);
    rc_step(c, m, 8);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1FA4E:
    /* 0001fa4e   2  move.w D0,(A0)+ */
    c->pc = RC_ADDR(0x0001fa4eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    t3 = c->a[0];
    c->a[0] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FA50:
    /* 0001fa50   4  and.w #f000,D0 */
    c->pc = RC_ADDR(0x0001fa50u);
    rc_step(c, m, 10);
    t0 = 0x0000f000u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1FA54:
    /* 0001fa54   2  or.w D0,D1 */
    c->pc = RC_ADDR(0x0001fa54u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t2 = t0 | rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_1FA56:
    /* 0001fa56   2  rol.w #4,D1 */
    c->pc = RC_ADDR(0x0001fa56u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 3, 1, 0x00000004u, rc_d_get(c, 1, RC_W), RC_W));

L_1FA58:
    /* 0001fa58   4  dbf D2,0001fa4a */
    c->pc = RC_ADDR(0x0001fa58u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1FA4A; }
    }

L_1FA5C:
    /* 0001fa5c   2  move.w D1,(A6)+ */
    c->pc = RC_ADDR(0x0001fa5cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    t3 = c->a[6];
    c->a[6] += 2u;
    rc_wr16(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FA5E:
    /* 0001fa5e   4  dbf D3,0001fa44 */
    c->pc = RC_ADDR(0x0001fa5eu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 3, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 3, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1FA44; }
    }

L_1FA62:
    /* 0001fa62   2  rts */
    c->pc = RC_ADDR(0x0001fa62u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
