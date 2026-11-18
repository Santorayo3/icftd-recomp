/* fn_0002156c - 44 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002156c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0002156cu): goto L_2156C;
    case RC_ADDR(0x00021570u): goto L_21570;
    case RC_ADDR(0x00021572u): goto L_21572;
    case RC_ADDR(0x00021574u): goto L_21574;
    case RC_ADDR(0x00021578u): goto L_21578;
    case RC_ADDR(0x0002157au): goto L_2157A;
    case RC_ADDR(0x0002157cu): goto L_2157C;
    case RC_ADDR(0x00021580u): goto L_21580;
    case RC_ADDR(0x00021582u): goto L_21582;
    case RC_ADDR(0x00021584u): goto L_21584;
    case RC_ADDR(0x00021588u): goto L_21588;
    case RC_ADDR(0x0002158cu): goto L_2158C;
    case RC_ADDR(0x00021590u): goto L_21590;
    case RC_ADDR(0x00021594u): goto L_21594;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2156C:
    /* 0002156c   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0002156cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21570:
    /* 00021570   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00021570u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_21572:
    /* 00021572   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x00021572u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_21574:
    /* 00021574   4  sub.l (30e6,A4),D0 */
    c->pc = RC_ADDR(0x00021574u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x30e6u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_21578:
    /* 00021578   2  tst.l D0 */
    c->pc = RC_ADDR(0x00021578u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_2157A:
    /* 0002157a   2  bls 00021594 */
    c->pc = RC_ADDR(0x0002157au);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_21594;

L_2157C:
    /* 0002157c   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0002157cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21580:
    /* 00021580   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00021580u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_21582:
    /* 00021582   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x00021582u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_21584:
    /* 00021584   4  sub.l (30e6,A4),D0 */
    c->pc = RC_ADDR(0x00021584u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x30e6u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_21588:
    /* 00021588   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x00021588u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_2158C:
    /* 0002158c   4  move.w D0,(28,A0) */
    c->pc = RC_ADDR(0x0002158cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x28u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21590:
    /* 00021590   4  clr.w (3506,A4) */
    c->pc = RC_ADDR(0x00021590u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x3506u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_21594:
    /* 00021594   4  bra 00021950 */
    c->pc = RC_ADDR(0x00021594u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
