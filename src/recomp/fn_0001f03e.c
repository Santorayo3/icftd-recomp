/* fn_0001f03e - 98 byte(s), 40 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f03e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x0001f03eu: goto L_1F03E;
    case 0x0001f042u: goto L_1F042;
    case 0x0001f046u: goto L_1F046;
    case 0x0001f04au: goto L_1F04A;
    case 0x0001f04eu: goto L_1F04E;
    case 0x0001f050u: goto L_1F050;
    case 0x0001f052u: goto L_1F052;
    case 0x0001f054u: goto L_1F054;
    case 0x0001f056u: goto L_1F056;
    case 0x0001f058u: goto L_1F058;
    case 0x0001f05cu: goto L_1F05C;
    case 0x0001f05eu: goto L_1F05E;
    case 0x0001f060u: goto L_1F060;
    case 0x0001f062u: goto L_1F062;
    case 0x0001f064u: goto L_1F064;
    case 0x0001f066u: goto L_1F066;
    case 0x0001f06au: goto L_1F06A;
    case 0x0001f06cu: goto L_1F06C;
    case 0x0001f06eu: goto L_1F06E;
    case 0x0001f070u: goto L_1F070;
    case 0x0001f072u: goto L_1F072;
    case 0x0001f074u: goto L_1F074;
    case 0x0001f076u: goto L_1F076;
    case 0x0001f078u: goto L_1F078;
    case 0x0001f07au: goto L_1F07A;
    case 0x0001f07cu: goto L_1F07C;
    case 0x0001f07eu: goto L_1F07E;
    case 0x0001f082u: goto L_1F082;
    case 0x0001f084u: goto L_1F084;
    case 0x0001f086u: goto L_1F086;
    case 0x0001f088u: goto L_1F088;
    case 0x0001f08au: goto L_1F08A;
    case 0x0001f08cu: goto L_1F08C;
    case 0x0001f090u: goto L_1F090;
    case 0x0001f092u: goto L_1F092;
    case 0x0001f094u: goto L_1F094;
    case 0x0001f096u: goto L_1F096;
    case 0x0001f098u: goto L_1F098;
    case 0x0001f09cu: goto L_1F09C;
    case 0x0001f09eu: goto L_1F09E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F03E:
    /* 0001f03e   4  link.w A5,#0 */
    c->pc = 0x0001f03eu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F042:
    /* 0001f042   4  movem.l { D4 D5 },-(SP) */
    c->pc = 0x0001f042u;
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_1F046:
    /* 0001f046   4  movea.l (8,A5),A2 */
    c->pc = 0x0001f046u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1F04A:
    /* 0001f04a   4  movea.l (c,A5),A3 */
    c->pc = 0x0001f04au;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[3] = t0;

L_1F04E:
    /* 0001f04e   2  tst.b (A2) */
    c->pc = 0x0001f04eu;
    t0 = rc_rd8(c, m, c->a[2]);
    rc_set_nzvc(c, t0, RC_B);

L_1F050:
    /* 0001f050   2  beq 0001f078 */
    c->pc = 0x0001f050u;
    if (rc_cond(c, 7)) goto L_1F078;

L_1F052:
    /* 0001f052   2  moveq #0,D0 */
    c->pc = 0x0001f052u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F054:
    /* 0001f054   2  move.b (A2),D0 */
    c->pc = 0x0001f054u;
    t0 = rc_rd8(c, m, c->a[2]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F056:
    /* 0001f056   2  move.w D0,-(A7) */
    c->pc = 0x0001f056u;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F058:
    /* 0001f058   4  jsr (000208b8) */
    c->pc = 0x0001f058u;
    rc_push32(c, m, 0x0001f05cu);
    rc_depth++;
    c->pc = 0x000208b8u;
    return;

L_1F05C:
    /* 0001f05c   2  addq.w #2,A7 */
    c->pc = 0x0001f05cu;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1F05E:
    /* 0001f05e   2  move.w D0,-(A7) */
    c->pc = 0x0001f05eu;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F060:
    /* 0001f060   2  moveq #0,D0 */
    c->pc = 0x0001f060u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F062:
    /* 0001f062   2  move.b (A3),D0 */
    c->pc = 0x0001f062u;
    t0 = rc_rd8(c, m, c->a[3]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F064:
    /* 0001f064   2  move.w D0,-(A7) */
    c->pc = 0x0001f064u;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F066:
    /* 0001f066   4  jsr (000208b8) */
    c->pc = 0x0001f066u;
    rc_push32(c, m, 0x0001f06au);
    rc_depth++;
    c->pc = 0x000208b8u;
    return;

L_1F06A:
    /* 0001f06a   2  addq.w #2,A7 */
    c->pc = 0x0001f06au;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1F06C:
    /* 0001f06c   2  move.w (A7)+,D1 */
    c->pc = 0x0001f06cu;
    t3 = c->a[7];
    c->a[7] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F06E:
    /* 0001f06e   2  cmp.w D0,D1 */
    c->pc = 0x0001f06eu;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1F070:
    /* 0001f070   2  bne 0001f078 */
    c->pc = 0x0001f070u;
    if (rc_cond(c, 6)) goto L_1F078;

L_1F072:
    /* 0001f072   2  addq.l #1,A2 */
    c->pc = 0x0001f072u;
    c->a[2] += 0x00000001u;

L_1F074:
    /* 0001f074   2  addq.l #1,A3 */
    c->pc = 0x0001f074u;
    c->a[3] += 0x00000001u;

L_1F076:
    /* 0001f076   2  bra 0001f04e */
    c->pc = 0x0001f076u;
    rc_tick();
    goto L_1F04E;

L_1F078:
    /* 0001f078   2  moveq #0,D0 */
    c->pc = 0x0001f078u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F07A:
    /* 0001f07a   2  move.b (A2),D0 */
    c->pc = 0x0001f07au;
    t0 = rc_rd8(c, m, c->a[2]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F07C:
    /* 0001f07c   2  move.w D0,-(A7) */
    c->pc = 0x0001f07cu;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F07E:
    /* 0001f07e   4  jsr (000208b8) */
    c->pc = 0x0001f07eu;
    rc_push32(c, m, 0x0001f082u);
    rc_depth++;
    c->pc = 0x000208b8u;
    return;

L_1F082:
    /* 0001f082   2  addq.w #2,A7 */
    c->pc = 0x0001f082u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1F084:
    /* 0001f084   2  move.w D0,-(A7) */
    c->pc = 0x0001f084u;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F086:
    /* 0001f086   2  moveq #0,D0 */
    c->pc = 0x0001f086u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F088:
    /* 0001f088   2  move.b (A3),D0 */
    c->pc = 0x0001f088u;
    t0 = rc_rd8(c, m, c->a[3]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F08A:
    /* 0001f08a   2  move.w D0,-(A7) */
    c->pc = 0x0001f08au;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F08C:
    /* 0001f08c   4  jsr (000208b8) */
    c->pc = 0x0001f08cu;
    rc_push32(c, m, 0x0001f090u);
    rc_depth++;
    c->pc = 0x000208b8u;
    return;

L_1F090:
    /* 0001f090   2  addq.w #2,A7 */
    c->pc = 0x0001f090u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1F092:
    /* 0001f092   2  move.w D0,D1 */
    c->pc = 0x0001f092u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F094:
    /* 0001f094   2  move.w (A7)+,D0 */
    c->pc = 0x0001f094u;
    t3 = c->a[7];
    c->a[7] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F096:
    /* 0001f096   2  sub.w D1,D0 */
    c->pc = 0x0001f096u;
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1F098:
    /* 0001f098   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = 0x0001f098u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1F09C:
    /* 0001f09c   2  unlk A5 */
    c->pc = 0x0001f09cu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F09E:
    /* 0001f09e   2  rts */
    c->pc = 0x0001f09eu;
    rc_ret(c, m);
    return;

}
