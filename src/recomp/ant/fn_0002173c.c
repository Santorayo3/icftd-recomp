/* fn_0002173c - 100 byte(s), 34 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002173c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x0002173cu): goto L_2173C;
    case RC_ADDR(0x00021740u): goto L_21740;
    case RC_ADDR(0x00021744u): goto L_21744;
    case RC_ADDR(0x00021746u): goto L_21746;
    case RC_ADDR(0x00021748u): goto L_21748;
    case RC_ADDR(0x0002174au): goto L_2174A;
    case RC_ADDR(0x0002174cu): goto L_2174C;
    case RC_ADDR(0x00021750u): goto L_21750;
    case RC_ADDR(0x00021752u): goto L_21752;
    case RC_ADDR(0x00021754u): goto L_21754;
    case RC_ADDR(0x00021756u): goto L_21756;
    case RC_ADDR(0x0002175au): goto L_2175A;
    case RC_ADDR(0x0002175eu): goto L_2175E;
    case RC_ADDR(0x00021760u): goto L_21760;
    case RC_ADDR(0x00021762u): goto L_21762;
    case RC_ADDR(0x00021766u): goto L_21766;
    case RC_ADDR(0x0002176au): goto L_2176A;
    case RC_ADDR(0x0002176cu): goto L_2176C;
    case RC_ADDR(0x0002176eu): goto L_2176E;
    case RC_ADDR(0x00021772u): goto L_21772;
    case RC_ADDR(0x00021776u): goto L_21776;
    case RC_ADDR(0x00021778u): goto L_21778;
    case RC_ADDR(0x0002177cu): goto L_2177C;
    case RC_ADDR(0x0002177eu): goto L_2177E;
    case RC_ADDR(0x00021780u): goto L_21780;
    case RC_ADDR(0x00021784u): goto L_21784;
    case RC_ADDR(0x00021786u): goto L_21786;
    case RC_ADDR(0x00021788u): goto L_21788;
    case RC_ADDR(0x0002178au): goto L_2178A;
    case RC_ADDR(0x0002178eu): goto L_2178E;
    case RC_ADDR(0x00021792u): goto L_21792;
    case RC_ADDR(0x00021794u): goto L_21794;
    case RC_ADDR(0x00021798u): goto L_21798;
    case RC_ADDR(0x0002179cu): goto L_2179C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2173C:
    /* 0002173c   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x0002173cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_21740:
    /* 00021740   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x00021740u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_21744:
    /* 00021744   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00021744u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_21746:
    /* 00021746   2  move.w (A1),D1 */
    c->pc = RC_ADDR(0x00021746u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[1]);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21748:
    /* 00021748   2  cmp.l D1,D0 */
    c->pc = RC_ADDR(0x00021748u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_2174A:
    /* 0002174a   2  bcc 00021756 */
    c->pc = RC_ADDR(0x0002174au);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_21756;

L_2174C:
    /* 0002174c   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0002174cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21750:
    /* 00021750   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00021750u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_21752:
    /* 00021752   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x00021752u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_21754:
    /* 00021754   2  bra 00021762 */
    c->pc = RC_ADDR(0x00021754u);
    rc_step(c, m, 10);
    goto L_21762;

L_21756:
    /* 00021756   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x00021756u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_2175A:
    /* 0002175a   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0002175au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_2175E:
    /* 0002175e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0002175eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21760:
    /* 00021760   2  move.w (A1),D0 */
    c->pc = RC_ADDR(0x00021760u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[1]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21762:
    /* 00021762   4  move.w D0,(34,A2) */
    c->pc = RC_ADDR(0x00021762u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x34u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21766:
    /* 00021766   4  move.l (14,A5),D0 */
    c->pc = RC_ADDR(0x00021766u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2176A:
    /* 0002176a   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0002176au);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_2176C:
    /* 0002176c   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0002176cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_2176E:
    /* 0002176e   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x0002176eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_21772:
    /* 00021772   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x00021772u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_21776:
    /* 00021776   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00021776u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_21778:
    /* 00021778   4  move.w (2,A1),D1 */
    c->pc = RC_ADDR(0x00021778u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2177C:
    /* 0002177c   2  cmp.l D1,D0 */
    c->pc = RC_ADDR(0x0002177cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_2177E:
    /* 0002177e   2  bcc 0002178a */
    c->pc = RC_ADDR(0x0002177eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_2178A;

L_21780:
    /* 00021780   4  move.l (14,A5),D0 */
    c->pc = RC_ADDR(0x00021780u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21784:
    /* 00021784   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00021784u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_21786:
    /* 00021786   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x00021786u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_21788:
    /* 00021788   2  bra 00021798 */
    c->pc = RC_ADDR(0x00021788u);
    rc_step(c, m, 10);
    goto L_21798;

L_2178A:
    /* 0002178a   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x0002178au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_2178E:
    /* 0002178e   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0002178eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_21792:
    /* 00021792   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021792u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21794:
    /* 00021794   4  move.w (2,A1),D0 */
    c->pc = RC_ADDR(0x00021794u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21798:
    /* 00021798   4  move.w D0,(36,A2) */
    c->pc = RC_ADDR(0x00021798u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2179C:
    /* 0002179c   4  bra 00021950 */
    c->pc = RC_ADDR(0x0002179cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
