/* fn_0001d5ce - 116 byte(s), 34 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d5ce(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d5ceu): goto L_1D5CE;
    case RC_ADDR(0x0001d5d2u): goto L_1D5D2;
    case RC_ADDR(0x0001d5d6u): goto L_1D5D6;
    case RC_ADDR(0x0001d5dcu): goto L_1D5DC;
    case RC_ADDR(0x0001d5e0u): goto L_1D5E0;
    case RC_ADDR(0x0001d5e4u): goto L_1D5E4;
    case RC_ADDR(0x0001d5e6u): goto L_1D5E6;
    case RC_ADDR(0x0001d5e8u): goto L_1D5E8;
    case RC_ADDR(0x0001d5eau): goto L_1D5EA;
    case RC_ADDR(0x0001d5eeu): goto L_1D5EE;
    case RC_ADDR(0x0001d5f2u): goto L_1D5F2;
    case RC_ADDR(0x0001d5f6u): goto L_1D5F6;
    case RC_ADDR(0x0001d5f8u): goto L_1D5F8;
    case RC_ADDR(0x0001d5fau): goto L_1D5FA;
    case RC_ADDR(0x0001d5feu): goto L_1D5FE;
    case RC_ADDR(0x0001d602u): goto L_1D602;
    case RC_ADDR(0x0001d606u): goto L_1D606;
    case RC_ADDR(0x0001d608u): goto L_1D608;
    case RC_ADDR(0x0001d60au): goto L_1D60A;
    case RC_ADDR(0x0001d60cu): goto L_1D60C;
    case RC_ADDR(0x0001d610u): goto L_1D610;
    case RC_ADDR(0x0001d614u): goto L_1D614;
    case RC_ADDR(0x0001d616u): goto L_1D616;
    case RC_ADDR(0x0001d61au): goto L_1D61A;
    case RC_ADDR(0x0001d61cu): goto L_1D61C;
    case RC_ADDR(0x0001d620u): goto L_1D620;
    case RC_ADDR(0x0001d624u): goto L_1D624;
    case RC_ADDR(0x0001d628u): goto L_1D628;
    case RC_ADDR(0x0001d62cu): goto L_1D62C;
    case RC_ADDR(0x0001d630u): goto L_1D630;
    case RC_ADDR(0x0001d634u): goto L_1D634;
    case RC_ADDR(0x0001d638u): goto L_1D638;
    case RC_ADDR(0x0001d63cu): goto L_1D63C;
    case RC_ADDR(0x0001d640u): goto L_1D640;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D5CE:
    /* 0001d5ce   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0001d5ceu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_1D5D2:
    /* 0001d5d2   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001d5d2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1D5D6:
    /* 0001d5d6   6  andi.w #fffb,(a,A0) */
    c->pc = RC_ADDR(0x0001d5d6u);
    rc_step(c, m);
    t3 = (c->a[0] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000fffbu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1D5DC:
    /* 0001d5dc   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001d5dcu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1D5E0:
    /* 0001d5e0   4  tst.l (c,A0) */
    c->pc = RC_ADDR(0x0001d5e0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_1D5E4:
    /* 0001d5e4   2  bne 0001d5ea */
    c->pc = RC_ADDR(0x0001d5e4u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1D5EA;

L_1D5E6:
    /* 0001d5e6   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d5e6u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D5E8:
    /* 0001d5e8   2  rts */
    c->pc = RC_ADDR(0x0001d5e8u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_1D5EA:
    /* 0001d5ea   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001d5eau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1D5EE:
    /* 0001d5ee   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001d5eeu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1D5F2:
    /* 0001d5f2   4  tst.l (30,A1) */
    c->pc = RC_ADDR(0x0001d5f2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[1] + 0x30u));
    rc_set_nzvc(c, t0, RC_L);

L_1D5F6:
    /* 0001d5f6   2  beq 0001d5fa */
    c->pc = RC_ADDR(0x0001d5f6u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1D5FA;

L_1D5F8:
    /* 0001d5f8   2  bra 0001d5e6 */
    c->pc = RC_ADDR(0x0001d5f8u);
    rc_step(c, m);
    rc_tick();
    goto L_1D5E6;

L_1D5FA:
    /* 0001d5fa   4  jsr (0001db9e) */
    c->pc = RC_ADDR(0x0001d5fau);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001d5feu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001db9eu);
    return;

L_1D5FE:
    /* 0001d5fe   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001d5feu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1D602:
    /* 0001d602   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001d602u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1D606:
    /* 0001d606   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d606u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D608:
    /* 0001d608   2  move.w (A1),D0 */
    c->pc = RC_ADDR(0x0001d608u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, c->a[1]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D60A:
    /* 0001d60a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001d60au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D60C:
    /* 0001d60c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001d60cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1D610:
    /* 0001d610   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001d610u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1D614:
    /* 0001d614   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d614u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D616:
    /* 0001d616   4  move.w (6,A1),D0 */
    c->pc = RC_ADDR(0x0001d616u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[1] + 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D61A:
    /* 0001d61a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001d61au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D61C:
    /* 0001d61c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001d61cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1D620:
    /* 0001d620   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001d620u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1D624:
    /* 0001d624   4  pea (c,A1) */
    c->pc = RC_ADDR(0x0001d624u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[1] + 0xcu));

L_1D628:
    /* 0001d628   4  jsr (0001e504) */
    c->pc = RC_ADDR(0x0001d628u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001d62cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e504u);
    return;

L_1D62C:
    /* 0001d62c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001d62cu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_1D630:
    /* 0001d630   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001d630u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1D634:
    /* 0001d634   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x0001d634u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_1D638:
    /* 0001d638   4  move.l D0,(30,A1) */
    c->pc = RC_ADDR(0x0001d638u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x30u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D63C:
    /* 0001d63c   4  jsr (0001dbb4) */
    c->pc = RC_ADDR(0x0001d63cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001d640u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001dbb4u);
    return;

L_1D640:
    /* 0001d640   2  bra 0001d5e6 */
    c->pc = RC_ADDR(0x0001d640u);
    rc_step(c, m);
    rc_tick();
    goto L_1D5E6;

}
