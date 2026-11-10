/* fn_0000561c - 132 byte(s), 39 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000561c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000561cu): goto L_561C;
    case RC_ADDR(0x00005620u): goto L_5620;
    case RC_ADDR(0x00005624u): goto L_5624;
    case RC_ADDR(0x00005628u): goto L_5628;
    case RC_ADDR(0x0000562cu): goto L_562C;
    case RC_ADDR(0x00005632u): goto L_5632;
    case RC_ADDR(0x00005636u): goto L_5636;
    case RC_ADDR(0x0000563au): goto L_563A;
    case RC_ADDR(0x0000563eu): goto L_563E;
    case RC_ADDR(0x00005644u): goto L_5644;
    case RC_ADDR(0x00005648u): goto L_5648;
    case RC_ADDR(0x0000564cu): goto L_564C;
    case RC_ADDR(0x00005650u): goto L_5650;
    case RC_ADDR(0x00005652u): goto L_5652;
    case RC_ADDR(0x00005656u): goto L_5656;
    case RC_ADDR(0x00005658u): goto L_5658;
    case RC_ADDR(0x0000565cu): goto L_565C;
    case RC_ADDR(0x0000565eu): goto L_565E;
    case RC_ADDR(0x00005660u): goto L_5660;
    case RC_ADDR(0x00005664u): goto L_5664;
    case RC_ADDR(0x00005666u): goto L_5666;
    case RC_ADDR(0x0000566au): goto L_566A;
    case RC_ADDR(0x0000566cu): goto L_566C;
    case RC_ADDR(0x0000566eu): goto L_566E;
    case RC_ADDR(0x00005674u): goto L_5674;
    case RC_ADDR(0x00005676u): goto L_5676;
    case RC_ADDR(0x0000567au): goto L_567A;
    case RC_ADDR(0x0000567cu): goto L_567C;
    case RC_ADDR(0x00005680u): goto L_5680;
    case RC_ADDR(0x00005682u): goto L_5682;
    case RC_ADDR(0x00005684u): goto L_5684;
    case RC_ADDR(0x00005688u): goto L_5688;
    case RC_ADDR(0x0000568au): goto L_568A;
    case RC_ADDR(0x0000568eu): goto L_568E;
    case RC_ADDR(0x00005690u): goto L_5690;
    case RC_ADDR(0x00005692u): goto L_5692;
    case RC_ADDR(0x00005698u): goto L_5698;
    case RC_ADDR(0x0000569cu): goto L_569C;
    case RC_ADDR(0x0000569eu): goto L_569E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_561C:
    /* 0000561c   4  link.w A5,#fffffffc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000561cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_5620:
    /* 00005620   4  move.w (8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005620u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5624:
    /* 00005624   4  muls.w #12,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005624u);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_5628:
    /* 00005628   4  lea (ffff8586,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005628u);
    c->a[0] = (c->a[4] - 0x7a7au);

L_562C:
    /* 0000562c   6  move.b (0,A0,D0.w),(ffffffff,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000562cu);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_wr8(c, m, (c->a[5] - 0x1u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_5632:
    /* 00005632   4  move.w (8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005632u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5636:
    /* 00005636   4  muls.w #12,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005636u);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_563A:
    /* 0000563a   4  lea (ffff8587,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000563au);
    c->a[0] = (c->a[4] - 0x7a79u);

L_563E:
    /* 0000563e   6  move.b (0,A0,D0.w),(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000563eu);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_wr8(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_5644:
    /* 00005644   4  clr.w (fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005644u);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5648:
    /* 00005648   4  move.b (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005648u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_564C:
    /* 0000564c   4  cmp.b (ffffffff,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000564cu);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    t1 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_5650:
    /* 00005650   2  bge 00005676 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005650u);
    if (rc_cond(c, 12)) goto L_5676;

L_5652:
    /* 00005652   4  move.b (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005652u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5656:
    /* 00005656   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005656u);
    rc_ext_w(c, 0);

L_5658:
    /* 00005658   4  move.w (ffff83cc,A4),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005658u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_565C:
    /* 0000565c   2  cmp.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000565cu);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_565E:
    /* 0000565e   2  blt 00005674 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000565eu);
    if (rc_cond(c, 13)) goto L_5674;

L_5660:
    /* 00005660   4  move.b (ffffffff,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005660u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5664:
    /* 00005664   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005664u);
    rc_ext_w(c, 0);

L_5666:
    /* 00005666   4  move.w (ffff83cc,A4),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005666u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_566A:
    /* 0000566a   2  cmp.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000566au);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_566C:
    /* 0000566c   2  bge 00005674 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000566cu);
    if (rc_cond(c, 12)) goto L_5674;

L_566E:
    /* 0000566e   6  move.w #1,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000566eu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5674:
    /* 00005674   2  bra 00005698 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005674u);
    goto L_5698;

L_5676:
    /* 00005676   4  move.b (ffffffff,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005676u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_567A:
    /* 0000567a   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000567au);
    rc_ext_w(c, 0);

L_567C:
    /* 0000567c   4  move.w (ffff83cc,A4),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000567cu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5680:
    /* 00005680   2  cmp.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005680u);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_5682:
    /* 00005682   2  blt 00005692 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005682u);
    if (rc_cond(c, 13)) goto L_5692;

L_5684:
    /* 00005684   4  move.b (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005684u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5688:
    /* 00005688   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005688u);
    rc_ext_w(c, 0);

L_568A:
    /* 0000568a   4  move.w (ffff83cc,A4),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000568au);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_568E:
    /* 0000568e   2  cmp.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000568eu);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_5690:
    /* 00005690   2  blt 00005698 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005690u);
    if (rc_cond(c, 13)) goto L_5698;

L_5692:
    /* 00005692   6  move.w #1,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005692u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5698:
    /* 00005698   4  move.w (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005698u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_569C:
    /* 0000569c   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000569cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_569E:
    /* 0000569e   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000569eu);
    rc_ret(c, m);
    return;

}
