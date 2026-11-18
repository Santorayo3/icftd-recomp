/* fn_00019716 - 146 byte(s), 45 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00019716(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00019716u): goto L_19716;
    case RC_ADDR(0x0001971au): goto L_1971A;
    case RC_ADDR(0x0001971eu): goto L_1971E;
    case RC_ADDR(0x00019720u): goto L_19720;
    case RC_ADDR(0x00019724u): goto L_19724;
    case RC_ADDR(0x00019726u): goto L_19726;
    case RC_ADDR(0x0001972au): goto L_1972A;
    case RC_ADDR(0x0001972cu): goto L_1972C;
    case RC_ADDR(0x00019730u): goto L_19730;
    case RC_ADDR(0x00019732u): goto L_19732;
    case RC_ADDR(0x00019736u): goto L_19736;
    case RC_ADDR(0x0001973au): goto L_1973A;
    case RC_ADDR(0x0001973eu): goto L_1973E;
    case RC_ADDR(0x00019740u): goto L_19740;
    case RC_ADDR(0x00019744u): goto L_19744;
    case RC_ADDR(0x00019746u): goto L_19746;
    case RC_ADDR(0x0001974au): goto L_1974A;
    case RC_ADDR(0x0001974cu): goto L_1974C;
    case RC_ADDR(0x00019750u): goto L_19750;
    case RC_ADDR(0x00019752u): goto L_19752;
    case RC_ADDR(0x00019756u): goto L_19756;
    case RC_ADDR(0x00019758u): goto L_19758;
    case RC_ADDR(0x0001975cu): goto L_1975C;
    case RC_ADDR(0x0001975eu): goto L_1975E;
    case RC_ADDR(0x00019762u): goto L_19762;
    case RC_ADDR(0x00019766u): goto L_19766;
    case RC_ADDR(0x0001976au): goto L_1976A;
    case RC_ADDR(0x0001976cu): goto L_1976C;
    case RC_ADDR(0x00019770u): goto L_19770;
    case RC_ADDR(0x00019772u): goto L_19772;
    case RC_ADDR(0x00019776u): goto L_19776;
    case RC_ADDR(0x0001977au): goto L_1977A;
    case RC_ADDR(0x00019780u): goto L_19780;
    case RC_ADDR(0x00019782u): goto L_19782;
    case RC_ADDR(0x00019786u): goto L_19786;
    case RC_ADDR(0x0001978au): goto L_1978A;
    case RC_ADDR(0x00019790u): goto L_19790;
    case RC_ADDR(0x00019794u): goto L_19794;
    case RC_ADDR(0x00019796u): goto L_19796;
    case RC_ADDR(0x0001979au): goto L_1979A;
    case RC_ADDR(0x0001979cu): goto L_1979C;
    case RC_ADDR(0x0001979eu): goto L_1979E;
    case RC_ADDR(0x000197a0u): goto L_197A0;
    case RC_ADDR(0x000197a4u): goto L_197A4;
    case RC_ADDR(0x000197a6u): goto L_197A6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_19716:
    /* 00019716   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00019716u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1971A:
    /* 0001971a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001971au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1971E:
    /* 0001971e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001971eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_19720:
    /* 00019720   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00019720u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19724:
    /* 00019724   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00019724u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_19726:
    /* 00019726   4  lea (1802,A4),A0 */
    c->pc = RC_ADDR(0x00019726u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1802u);

L_1972A:
    /* 0001972a   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001972au);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1972C:
    /* 0001972c   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001972cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19730:
    /* 00019730   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00019730u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_19732:
    /* 00019732   4  lea (ffffface,A4),A1 */
    c->pc = RC_ADDR(0x00019732u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x532u);

L_19736:
    /* 00019736   4  move.w (fffffa76,A4),D2 */
    c->pc = RC_ADDR(0x00019736u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1973A:
    /* 0001973a   4  muls.w #a,D2 */
    c->pc = RC_ADDR(0x0001973au);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 2, t0);

L_1973E:
    /* 0001973e   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001973eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_19740:
    /* 00019740   4  movea.l (0,A1,D1.w),A6 */
    c->pc = RC_ADDR(0x00019740u);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    c->a[6] = t0;

L_19744:
    /* 00019744   2  adda.l D2,A6 */
    c->pc = RC_ADDR(0x00019744u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    c->a[6] += t0;

L_19746:
    /* 00019746   4  move.l A6,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019746u);
    rc_step(c, m, 18);
    t0 = rc_a_get(c, 6, RC_L);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1974A:
    /* 0001974a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001974au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1974C:
    /* 0001974c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001974cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19750:
    /* 00019750   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00019750u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_19752:
    /* 00019752   4  lea (1816,A4),A0 */
    c->pc = RC_ADDR(0x00019752u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1816u);

L_19756:
    /* 00019756   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00019756u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_19758:
    /* 00019758   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00019758u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1975C:
    /* 0001975c   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0001975cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_1975E:
    /* 0001975e   4  lea (fffffae2,A4),A1 */
    c->pc = RC_ADDR(0x0001975eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x51eu);

L_19762:
    /* 00019762   4  move.w (fffffa76,A4),D2 */
    c->pc = RC_ADDR(0x00019762u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19766:
    /* 00019766   4  muls.w #a,D2 */
    c->pc = RC_ADDR(0x00019766u);
    rc_step(c, m, 42);
    t0 = 0x0000000au;
    rc_muls(c, 2, t0);

L_1976A:
    /* 0001976a   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001976au);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1976C:
    /* 0001976c   4  movea.l (0,A1,D1.w),A6 */
    c->pc = RC_ADDR(0x0001976cu);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    c->a[6] = t0;

L_19770:
    /* 00019770   2  adda.l D2,A6 */
    c->pc = RC_ADDR(0x00019770u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    c->a[6] += t0;

L_19772:
    /* 00019772   4  move.l A6,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00019772u);
    rc_step(c, m, 18);
    t0 = rc_a_get(c, 6, RC_L);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_19776:
    /* 00019776   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00019776u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1977A:
    /* 0001977a   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001977au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_19780:
    /* 00019780   2  bcs 0001971e */
    c->pc = RC_ADDR(0x00019780u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1971E; }

L_19782:
    /* 00019782   4  lea (1802,A4),A0 */
    c->pc = RC_ADDR(0x00019782u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1802u);

L_19786:
    /* 00019786   4  movea.l (140c,A4),A1 */
    c->pc = RC_ADDR(0x00019786u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[1] = t0;

L_1978A:
    /* 0001978a   6  adda.l #2a,A1 */
    c->pc = RC_ADDR(0x0001978au);
    rc_step(c, m, 16);
    t0 = 0x0000002au;
    c->a[1] += t0;

L_19790:
    /* 00019790   4  move.w #4,D1 */
    c->pc = RC_ADDR(0x00019790u);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19794:
    /* 00019794   2  move.l (A0)+,D0 */
    c->pc = RC_ADDR(0x00019794u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19796:
    /* 00019796   4  move.w D0,(4,A1) */
    c->pc = RC_ADDR(0x00019796u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1979A:
    /* 0001979a   2  swap D0 */
    c->pc = RC_ADDR(0x0001979au);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1979C:
    /* 0001979c   2  move.w D0,(A1) */
    c->pc = RC_ADDR(0x0001979cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1979E:
    /* 0001979e   2  addq.l #8,A1 */
    c->pc = RC_ADDR(0x0001979eu);
    rc_step(c, m, 8);
    c->a[1] += 0x00000008u;

L_197A0:
    /* 000197a0   4  dbf D1,00019794 */
    c->pc = RC_ADDR(0x000197a0u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_19794; }
    }

L_197A4:
    /* 000197a4   2  unlk A5 */
    c->pc = RC_ADDR(0x000197a4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_197A6:
    /* 000197a6   2  rts */
    c->pc = RC_ADDR(0x000197a6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
