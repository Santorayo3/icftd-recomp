/* fn_00013430 - 92 byte(s), 25 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00013430(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case 0x00013430u: goto L_13430;
    case 0x00013434u: goto L_13434;
    case 0x00013438u: goto L_13438;
    case 0x0001343cu: goto L_1343C;
    case 0x0001343eu: goto L_1343E;
    case 0x00013442u: goto L_13442;
    case 0x00013444u: goto L_13444;
    case 0x00013448u: goto L_13448;
    case 0x0001344cu: goto L_1344C;
    case 0x00013450u: goto L_13450;
    case 0x00013454u: goto L_13454;
    case 0x00013458u: goto L_13458;
    case 0x0001345cu: goto L_1345C;
    case 0x0001345eu: goto L_1345E;
    case 0x00013462u: goto L_13462;
    case 0x00013466u: goto L_13466;
    case 0x0001346au: goto L_1346A;
    case 0x0001346eu: goto L_1346E;
    case 0x00013472u: goto L_13472;
    case 0x00013476u: goto L_13476;
    case 0x0001347au: goto L_1347A;
    case 0x0001347eu: goto L_1347E;
    case 0x00013482u: goto L_13482;
    case 0x00013488u: goto L_13488;
    case 0x0001348au: goto L_1348A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13430:
    /* 00013430   4  link.w A5,#0 */
    c->pc = 0x00013430u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_13434:
    /* 00013434   4  move.w #3e8,-(A7) */
    c->pc = 0x00013434u;
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13438:
    /* 00013438   4  jsr (ffff8188,A4) */
    c->pc = 0x00013438u;
    /* vector 65 */
    rc_push32(c, m, 0x0001343cu);
    rc_depth++;
    c->pc = 0x00016ee0u;
    return;

L_1343C:
    /* 0001343c   2  addq.w #2,A7 */
    c->pc = 0x0001343cu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1343E:
    /* 0001343e   4  cmp.w #1f4,D0 */
    c->pc = 0x0001343eu;
    t0 = 0x000001f4u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13442:
    /* 00013442   2  bge 0001345e */
    c->pc = 0x00013442u;
    if (rc_cond(c, 12)) goto L_1345E;

L_13444:
    /* 00013444   4  move.w (8,A5),D0 */
    c->pc = 0x00013444u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13448:
    /* 00013448   4  muls.w #16,D0 */
    c->pc = 0x00013448u;
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_1344C:
    /* 0001344c   4  lea (fffff384,A4),A0 */
    c->pc = 0x0001344cu;
    c->a[0] = (c->a[4] - 0xc7cu);

L_13450:
    /* 00013450   4  move.w (a,A5),D1 */
    c->pc = 0x00013450u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13454:
    /* 00013454   4  add.w #32,D1 */
    c->pc = 0x00013454u;
    t0 = 0x00000032u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13458:
    /* 00013458   4  move.w D1,(0,A0,D0.w) */
    c->pc = 0x00013458u;
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1345C:
    /* 0001345c   2  bra 00013476 */
    c->pc = 0x0001345cu;
    goto L_13476;

L_1345E:
    /* 0001345e   4  move.w (8,A5),D0 */
    c->pc = 0x0001345eu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13462:
    /* 00013462   4  muls.w #16,D0 */
    c->pc = 0x00013462u;
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13466:
    /* 00013466   4  lea (fffff384,A4),A0 */
    c->pc = 0x00013466u;
    c->a[0] = (c->a[4] - 0xc7cu);

L_1346A:
    /* 0001346a   4  move.w (a,A5),D1 */
    c->pc = 0x0001346au;
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1346E:
    /* 0001346e   4  sub.w #32,D1 */
    c->pc = 0x0001346eu;
    t0 = 0x00000032u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_13472:
    /* 00013472   4  move.w D1,(0,A0,D0.w) */
    c->pc = 0x00013472u;
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13476:
    /* 00013476   4  move.w (8,A5),D0 */
    c->pc = 0x00013476u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1347A:
    /* 0001347a   4  muls.w #16,D0 */
    c->pc = 0x0001347au;
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_1347E:
    /* 0001347e   4  lea (fffff390,A4),A0 */
    c->pc = 0x0001347eu;
    c->a[0] = (c->a[4] - 0xc70u);

L_13482:
    /* 00013482   6  move.b #14,(0,A0,D0.w) */
    c->pc = 0x00013482u;
    t0 = 0x00000014u;
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_13488:
    /* 00013488   2  unlk A5 */
    c->pc = 0x00013488u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1348A:
    /* 0001348a   2  rts */
    c->pc = 0x0001348au;
    rc_ret(c, m);
    return;

}
