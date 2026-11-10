/* fn_0001d778 - 40 byte(s), 15 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d778(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case 0x0001d778u: goto L_1D778;
    case 0x0001d77cu: goto L_1D77C;
    case 0x0001d780u: goto L_1D780;
    case 0x0001d784u: goto L_1D784;
    case 0x0001d786u: goto L_1D786;
    case 0x0001d788u: goto L_1D788;
    case 0x0001d78au: goto L_1D78A;
    case 0x0001d78cu: goto L_1D78C;
    case 0x0001d78eu: goto L_1D78E;
    case 0x0001d790u: goto L_1D790;
    case 0x0001d792u: goto L_1D792;
    case 0x0001d794u: goto L_1D794;
    case 0x0001d798u: goto L_1D798;
    case 0x0001d79cu: goto L_1D79C;
    case 0x0001d79eu: goto L_1D79E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D778:
    /* 0001d778   4  link.w A5,#0 */
    c->pc = 0x0001d778u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D77C:
    /* 0001d77c   4  movem.l { D4 D5 },-(SP) */
    c->pc = 0x0001d77cu;
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_1D780:
    /* 0001d780   4  movea.l (ffffcb18,A4),A2 */
    c->pc = 0x0001d780u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x34e8u));
    c->a[2] = t0;

L_1D784:
    /* 0001d784   2  move.l A2,D0 */
    c->pc = 0x0001d784u;
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D786:
    /* 0001d786   2  beq 0001d794 */
    c->pc = 0x0001d786u;
    if (rc_cond(c, 7)) goto L_1D794;

L_1D788:
    /* 0001d788   2  movea.l (A2),A3 */
    c->pc = 0x0001d788u;
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[3] = t0;

L_1D78A:
    /* 0001d78a   2  move.l A2,-(A7) */
    c->pc = 0x0001d78au;
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D78C:
    /* 0001d78c   2  bsr 0001d72e */
    c->pc = 0x0001d78cu;
    rc_push32(c, m, 0x0001d78eu);
    rc_depth++;
    c->pc = 0x0001d72eu;
    return;

L_1D78E:
    /* 0001d78e   2  addq.w #4,A7 */
    c->pc = 0x0001d78eu;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D790:
    /* 0001d790   2  movea.l A3,A2 */
    c->pc = 0x0001d790u;
    t0 = rc_a_get(c, 3, RC_L);
    c->a[2] = t0;

L_1D792:
    /* 0001d792   2  bra 0001d784 */
    c->pc = 0x0001d792u;
    rc_tick();
    goto L_1D784;

L_1D794:
    /* 0001d794   4  clr.l (ffffcb18,A4) */
    c->pc = 0x0001d794u;
    rc_wr32(c, m, (c->a[4] - 0x34e8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D798:
    /* 0001d798   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = 0x0001d798u;
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

L_1D79C:
    /* 0001d79c   2  unlk A5 */
    c->pc = 0x0001d79cu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D79E:
    /* 0001d79e   2  rts */
    c->pc = 0x0001d79eu;
    rc_ret(c, m);
    return;

}
