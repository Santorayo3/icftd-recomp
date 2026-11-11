/* fn_0001d72e - 74 byte(s), 27 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d72e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d72eu): goto L_1D72E;
    case RC_ADDR(0x0001d732u): goto L_1D732;
    case RC_ADDR(0x0001d734u): goto L_1D734;
    case RC_ADDR(0x0001d738u): goto L_1D738;
    case RC_ADDR(0x0001d73au): goto L_1D73A;
    case RC_ADDR(0x0001d73eu): goto L_1D73E;
    case RC_ADDR(0x0001d742u): goto L_1D742;
    case RC_ADDR(0x0001d744u): goto L_1D744;
    case RC_ADDR(0x0001d746u): goto L_1D746;
    case RC_ADDR(0x0001d748u): goto L_1D748;
    case RC_ADDR(0x0001d74au): goto L_1D74A;
    case RC_ADDR(0x0001d74eu): goto L_1D74E;
    case RC_ADDR(0x0001d752u): goto L_1D752;
    case RC_ADDR(0x0001d754u): goto L_1D754;
    case RC_ADDR(0x0001d756u): goto L_1D756;
    case RC_ADDR(0x0001d758u): goto L_1D758;
    case RC_ADDR(0x0001d75au): goto L_1D75A;
    case RC_ADDR(0x0001d75eu): goto L_1D75E;
    case RC_ADDR(0x0001d762u): goto L_1D762;
    case RC_ADDR(0x0001d764u): goto L_1D764;
    case RC_ADDR(0x0001d768u): goto L_1D768;
    case RC_ADDR(0x0001d76au): goto L_1D76A;
    case RC_ADDR(0x0001d76eu): goto L_1D76E;
    case RC_ADDR(0x0001d770u): goto L_1D770;
    case RC_ADDR(0x0001d772u): goto L_1D772;
    case RC_ADDR(0x0001d774u): goto L_1D774;
    case RC_ADDR(0x0001d776u): goto L_1D776;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D72E:
    /* 0001d72e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001d72eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D732:
    /* 0001d732   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001d732u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D734:
    /* 0001d734   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x0001d734u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1D738:
    /* 0001d738   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001d738u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D73A:
    /* 0001d73a   4  pea (ffffcb18,A4) */
    c->pc = RC_ADDR(0x0001d73au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x34e8u));

L_1D73E:
    /* 0001d73e   4  jsr (0001e452) */
    c->pc = RC_ADDR(0x0001d73eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d742u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e452u);
    return;

L_1D742:
    /* 0001d742   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d742u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D744:
    /* 0001d744   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001d744u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D746:
    /* 0001d746   2  bsr 0001d70a */
    c->pc = RC_ADDR(0x0001d746u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d748u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d70au);
    return;

L_1D748:
    /* 0001d748   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d748u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D74A:
    /* 0001d74a   4  move.l (4,A2),-(A7) */
    c->pc = RC_ADDR(0x0001d74au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D74E:
    /* 0001d74e   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x0001d74eu);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x0001d752u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020820u);
    return;

L_1D752:
    /* 0001d752   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d752u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D754:
    /* 0001d754   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d754u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D756:
    /* 0001d756   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x0001d756u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1D758:
    /* 0001d758   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001d758u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D75A:
    /* 0001d75a   4  move.l (4,A2),-(A7) */
    c->pc = RC_ADDR(0x0001d75au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D75E:
    /* 0001d75e   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001d75eu);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0001d762u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_1D762:
    /* 0001d762   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d762u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D764:
    /* 0001d764   4  pea (00000010).l */
    c->pc = RC_ADDR(0x0001d764u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000010u);

L_1D768:
    /* 0001d768   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0001d768u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D76A:
    /* 0001d76a   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0001d76au);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0001d76eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_1D76E:
    /* 0001d76e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d76eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D770:
    /* 0001d770   2  suba.l A2,A2 */
    c->pc = RC_ADDR(0x0001d770u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[2] -= t0;

L_1D772:
    /* 0001d772   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x0001d772u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1D774:
    /* 0001d774   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d774u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D776:
    /* 0001d776   2  rts */
    c->pc = RC_ADDR(0x0001d776u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
