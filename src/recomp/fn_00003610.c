/* fn_00003610 - 130 byte(s), 36 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00003610(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case 0x00003610u: goto L_3610;
    case 0x00003614u: goto L_3614;
    case 0x00003618u: goto L_3618;
    case 0x0000361cu: goto L_361C;
    case 0x00003620u: goto L_3620;
    case 0x00003622u: goto L_3622;
    case 0x00003626u: goto L_3626;
    case 0x0000362cu: goto L_362C;
    case 0x0000362eu: goto L_362E;
    case 0x00003632u: goto L_3632;
    case 0x00003636u: goto L_3636;
    case 0x0000363au: goto L_363A;
    case 0x0000363eu: goto L_363E;
    case 0x00003640u: goto L_3640;
    case 0x00003644u: goto L_3644;
    case 0x00003646u: goto L_3646;
    case 0x00003648u: goto L_3648;
    case 0x0000364cu: goto L_364C;
    case 0x0000364eu: goto L_364E;
    case 0x00003652u: goto L_3652;
    case 0x00003656u: goto L_3656;
    case 0x0000365au: goto L_365A;
    case 0x0000365cu: goto L_365C;
    case 0x00003660u: goto L_3660;
    case 0x00003664u: goto L_3664;
    case 0x0000366au: goto L_366A;
    case 0x0000366eu: goto L_366E;
    case 0x00003672u: goto L_3672;
    case 0x00003676u: goto L_3676;
    case 0x0000367au: goto L_367A;
    case 0x0000367cu: goto L_367C;
    case 0x00003680u: goto L_3680;
    case 0x00003684u: goto L_3684;
    case 0x0000368au: goto L_368A;
    case 0x0000368eu: goto L_368E;
    case 0x00003690u: goto L_3690;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3610:
    /* 00003610   4  link.w A5,#0 */
    c->pc = 0x00003610u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_3614:
    /* 00003614   4  move.w (ffffefe4,A4),D0 */
    c->pc = 0x00003614u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3618:
    /* 00003618   4  mulu.w #12,D0 */
    c->pc = 0x00003618u;
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_361C:
    /* 0000361c   4  lea (ffff857c,A4),A0 */
    c->pc = 0x0000361cu;
    c->a[0] = (c->a[4] - 0x7a84u);

L_3620:
    /* 00003620   2  moveq #0,D1 */
    c->pc = 0x00003620u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3622:
    /* 00003622   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x00003622u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3626:
    /* 00003626   6  move.l #a0,D0 */
    c->pc = 0x00003626u;
    t0 = 0x000000a0u;
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_362C:
    /* 0000362c   2  sub.l D1,D0 */
    c->pc = 0x0000362cu;
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_362E:
    /* 0000362e   4  move.l D0,(ffffeff6,A4) */
    c->pc = 0x0000362eu;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x100au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3632:
    /* 00003632   4  move.w (ffffefe4,A4),D0 */
    c->pc = 0x00003632u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3636:
    /* 00003636   4  mulu.w #12,D0 */
    c->pc = 0x00003636u;
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_363A:
    /* 0000363a   4  lea (ffff857e,A4),A0 */
    c->pc = 0x0000363au;
    c->a[0] = (c->a[4] - 0x7a82u);

L_363E:
    /* 0000363e   2  moveq #0,D1 */
    c->pc = 0x0000363eu;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3640:
    /* 00003640   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x00003640u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3644:
    /* 00003644   2  moveq #64,D0 */
    c->pc = 0x00003644u;
    c->d[0] = 0x00000064u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3646:
    /* 00003646   2  sub.l D1,D0 */
    c->pc = 0x00003646u;
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_3648:
    /* 00003648   4  move.l D0,(ffffeffa,A4) */
    c->pc = 0x00003648u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x1006u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_364C:
    /* 0000364c   2  bsr 000035d2 */
    c->pc = 0x0000364cu;
    rc_push32(c, m, 0x0000364eu);
    rc_depth++;
    c->pc = 0x000035d2u;
    return;

L_364E:
    /* 0000364e   4  move.w (ffffefe4,A4),D0 */
    c->pc = 0x0000364eu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3652:
    /* 00003652   4  mulu.w #12,D0 */
    c->pc = 0x00003652u;
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_3656:
    /* 00003656   4  lea (ffff857c,A4),A0 */
    c->pc = 0x00003656u;
    c->a[0] = (c->a[4] - 0x7a84u);

L_365A:
    /* 0000365a   2  moveq #0,D1 */
    c->pc = 0x0000365au;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_365C:
    /* 0000365c   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000365cu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3660:
    /* 00003660   4  add.l (ffffeff6,A4),D1 */
    c->pc = 0x00003660u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x100au));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_3664:
    /* 00003664   6  add.l #12,D1 */
    c->pc = 0x00003664u;
    t0 = 0x00000012u;
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_366A:
    /* 0000366a   4  move.l D1,(ffffeffe,A4) */
    c->pc = 0x0000366au;
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x1002u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_366E:
    /* 0000366e   4  move.w (ffffefe4,A4),D0 */
    c->pc = 0x0000366eu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3672:
    /* 00003672   4  mulu.w #12,D0 */
    c->pc = 0x00003672u;
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_3676:
    /* 00003676   4  lea (ffff857e,A4),A0 */
    c->pc = 0x00003676u;
    c->a[0] = (c->a[4] - 0x7a82u);

L_367A:
    /* 0000367a   2  moveq #0,D1 */
    c->pc = 0x0000367au;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_367C:
    /* 0000367c   4  move.w (0,A0,D0.w),D1 */
    c->pc = 0x0000367cu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3680:
    /* 00003680   4  add.l (ffffeffa,A4),D1 */
    c->pc = 0x00003680u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x1006u));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_3684:
    /* 00003684   6  add.l #13,D1 */
    c->pc = 0x00003684u;
    t0 = 0x00000013u;
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_368A:
    /* 0000368a   4  move.l D1,(fffff002,A4) */
    c->pc = 0x0000368au;
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xffeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_368E:
    /* 0000368e   2  unlk A5 */
    c->pc = 0x0000368eu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3690:
    /* 00003690   2  rts */
    c->pc = 0x00003690u;
    rc_ret(c, m);
    return;

}
