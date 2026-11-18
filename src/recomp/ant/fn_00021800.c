/* fn_00021800 - 74 byte(s), 20 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021800(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00021800u): goto L_21800;
    case RC_ADDR(0x00021804u): goto L_21804;
    case RC_ADDR(0x00021808u): goto L_21808;
    case RC_ADDR(0x0002180au): goto L_2180A;
    case RC_ADDR(0x0002180cu): goto L_2180C;
    case RC_ADDR(0x00021810u): goto L_21810;
    case RC_ADDR(0x00021816u): goto L_21816;
    case RC_ADDR(0x0002181au): goto L_2181A;
    case RC_ADDR(0x00021820u): goto L_21820;
    case RC_ADDR(0x00021822u): goto L_21822;
    case RC_ADDR(0x00021828u): goto L_21828;
    case RC_ADDR(0x0002182eu): goto L_2182E;
    case RC_ADDR(0x00021832u): goto L_21832;
    case RC_ADDR(0x00021834u): goto L_21834;
    case RC_ADDR(0x00021836u): goto L_21836;
    case RC_ADDR(0x0002183au): goto L_2183A;
    case RC_ADDR(0x0002183eu): goto L_2183E;
    case RC_ADDR(0x00021840u): goto L_21840;
    case RC_ADDR(0x00021842u): goto L_21842;
    case RC_ADDR(0x00021846u): goto L_21846;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21800:
    /* 00021800   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00021800u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_21804:
    /* 00021804   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00021804u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21808:
    /* 00021808   2  ext.l D0 */
    c->pc = RC_ADDR(0x00021808u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2180A:
    /* 0002180a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0002180au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2180C:
    /* 0002180c   4  lea (89c,A4),A0 */
    c->pc = RC_ADDR(0x0002180cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x89cu);

L_21810:
    /* 00021810   6  move.w (12,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00021810u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21816:
    /* 00021816   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00021816u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_2181A:
    /* 0002181a   6  cmpi.w #20,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0002181au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_21820:
    /* 00021820   2  blt 00021804 */
    c->pc = RC_ADDR(0x00021820u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_21804; }

L_21822:
    /* 00021822   6  move.w #1,(91c,A4) */
    c->pc = RC_ADDR(0x00021822u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x91cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21828:
    /* 00021828   6  move.w #1,(91e,A4) */
    c->pc = RC_ADDR(0x00021828u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x91eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2182E:
    /* 0002182e   4  move.l (14,A5),D0 */
    c->pc = RC_ADDR(0x0002182eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21832:
    /* 00021832   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00021832u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_21834:
    /* 00021834   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x00021834u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_21836:
    /* 00021836   4  move.w D0,(920,A4) */
    c->pc = RC_ADDR(0x00021836u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x920u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2183A:
    /* 0002183a   4  move.l (18,A5),D0 */
    c->pc = RC_ADDR(0x0002183au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x18u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2183E:
    /* 0002183e   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0002183eu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_21840:
    /* 00021840   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x00021840u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_21842:
    /* 00021842   4  move.w D0,(922,A4) */
    c->pc = RC_ADDR(0x00021842u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x922u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21846:
    /* 00021846   4  bra 00021950 */
    c->pc = RC_ADDR(0x00021846u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
