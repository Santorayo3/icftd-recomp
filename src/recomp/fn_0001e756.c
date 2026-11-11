/* fn_0001e756 - 120 byte(s), 36 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001e756(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e756u): goto L_1E756;
    case RC_ADDR(0x0001e75au): goto L_1E75A;
    case RC_ADDR(0x0001e75eu): goto L_1E75E;
    case RC_ADDR(0x0001e762u): goto L_1E762;
    case RC_ADDR(0x0001e766u): goto L_1E766;
    case RC_ADDR(0x0001e76au): goto L_1E76A;
    case RC_ADDR(0x0001e76eu): goto L_1E76E;
    case RC_ADDR(0x0001e772u): goto L_1E772;
    case RC_ADDR(0x0001e776u): goto L_1E776;
    case RC_ADDR(0x0001e778u): goto L_1E778;
    case RC_ADDR(0x0001e77cu): goto L_1E77C;
    case RC_ADDR(0x0001e780u): goto L_1E780;
    case RC_ADDR(0x0001e782u): goto L_1E782;
    case RC_ADDR(0x0001e786u): goto L_1E786;
    case RC_ADDR(0x0001e788u): goto L_1E788;
    case RC_ADDR(0x0001e78cu): goto L_1E78C;
    case RC_ADDR(0x0001e790u): goto L_1E790;
    case RC_ADDR(0x0001e792u): goto L_1E792;
    case RC_ADDR(0x0001e796u): goto L_1E796;
    case RC_ADDR(0x0001e798u): goto L_1E798;
    case RC_ADDR(0x0001e79cu): goto L_1E79C;
    case RC_ADDR(0x0001e7a0u): goto L_1E7A0;
    case RC_ADDR(0x0001e7a2u): goto L_1E7A2;
    case RC_ADDR(0x0001e7a6u): goto L_1E7A6;
    case RC_ADDR(0x0001e7aau): goto L_1E7AA;
    case RC_ADDR(0x0001e7acu): goto L_1E7AC;
    case RC_ADDR(0x0001e7aeu): goto L_1E7AE;
    case RC_ADDR(0x0001e7b2u): goto L_1E7B2;
    case RC_ADDR(0x0001e7b4u): goto L_1E7B4;
    case RC_ADDR(0x0001e7b8u): goto L_1E7B8;
    case RC_ADDR(0x0001e7bcu): goto L_1E7BC;
    case RC_ADDR(0x0001e7c0u): goto L_1E7C0;
    case RC_ADDR(0x0001e7c4u): goto L_1E7C4;
    case RC_ADDR(0x0001e7c8u): goto L_1E7C8;
    case RC_ADDR(0x0001e7cau): goto L_1E7CA;
    case RC_ADDR(0x0001e7ccu): goto L_1E7CC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E756:
    /* 0001e756   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e756u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E75A:
    /* 0001e75a   4  jsr (0001e322) */
    c->pc = RC_ADDR(0x0001e75au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e75eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e322u);
    return;

L_1E75E:
    /* 0001e75e   4  jsr (0001e43c) */
    c->pc = RC_ADDR(0x0001e75eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e762u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e43cu);
    return;

L_1E762:
    /* 0001e762   4  jsr (0001d250) */
    c->pc = RC_ADDR(0x0001e762u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e766u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d250u);
    return;

L_1E766:
    /* 0001e766   4  jsr (0001f1e8) */
    c->pc = RC_ADDR(0x0001e766u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e76au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f1e8u);
    return;

L_1E76A:
    /* 0001e76a   4  jsr (ffff8260,A4) */
    c->pc = RC_ADDR(0x0001e76au);
    rc_step(c, m, 18);
    /* vector 101 */
    rc_push32(c, m, RC_ADDR(0x0001e76eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cb6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f27eu);
    return;

L_1E76E:
    /* 0001e76e   4  jsr (ffff821e,A4) */
    c->pc = RC_ADDR(0x0001e76eu);
    rc_step(c, m, 18);
    /* vector 90 */
    rc_push32(c, m, RC_ADDR(0x0001e772u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c74u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d778u);
    return;

L_1E772:
    /* 0001e772   4  tst.l (ffffcba8,A4) */
    c->pc = RC_ADDR(0x0001e772u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3458u));
    rc_set_nzvc(c, t0, RC_L);

L_1E776:
    /* 0001e776   2  beq 0001e782 */
    c->pc = RC_ADDR(0x0001e776u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E782;

L_1E778:
    /* 0001e778   4  move.l (ffffcba8,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e778u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3458u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E77C:
    /* 0001e77c   4  jsr (ffff8332,A4) */
    c->pc = RC_ADDR(0x0001e77cu);
    rc_step(c, m, 18);
    /* vector 136 */
    rc_push32(c, m, RC_ADDR(0x0001e780u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d88u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000214eau);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000214eeu);
    return;

L_1E780:
    /* 0001e780   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001e780u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E782:
    /* 0001e782   4  tst.l (ffffcba4,A4) */
    c->pc = RC_ADDR(0x0001e782u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x345cu));
    rc_set_nzvc(c, t0, RC_L);

L_1E786:
    /* 0001e786   2  beq 0001e792 */
    c->pc = RC_ADDR(0x0001e786u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E792;

L_1E788:
    /* 0001e788   4  move.l (ffffcba4,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e788u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x345cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E78C:
    /* 0001e78c   4  jsr (ffff8332,A4) */
    c->pc = RC_ADDR(0x0001e78cu);
    rc_step(c, m, 18);
    /* vector 136 */
    rc_push32(c, m, RC_ADDR(0x0001e790u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d88u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000214eau);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000214eeu);
    return;

L_1E790:
    /* 0001e790   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001e790u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E792:
    /* 0001e792   4  tst.l (ffffcba0,A4) */
    c->pc = RC_ADDR(0x0001e792u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    rc_set_nzvc(c, t0, RC_L);

L_1E796:
    /* 0001e796   2  beq 0001e7a2 */
    c->pc = RC_ADDR(0x0001e796u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E7A2;

L_1E798:
    /* 0001e798   4  move.l (ffffcba0,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e798u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E79C:
    /* 0001e79c   4  jsr (ffff8332,A4) */
    c->pc = RC_ADDR(0x0001e79cu);
    rc_step(c, m, 18);
    /* vector 136 */
    rc_push32(c, m, RC_ADDR(0x0001e7a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d88u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000214eau);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000214eeu);
    return;

L_1E7A0:
    /* 0001e7a0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001e7a0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E7A2:
    /* 0001e7a2   4  move.l (2a18,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e7a2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2a18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E7A6:
    /* 0001e7a6   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x0001e7a6u);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x0001e7aau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d4cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002140cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021410u);
    return;

L_1E7AA:
    /* 0001e7aa   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001e7aau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E7AC:
    /* 0001e7ac   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001e7acu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E7AE:
    /* 0001e7ae   4  jsr (ffff8320,A4) */
    c->pc = RC_ADDR(0x0001e7aeu);
    rc_step(c, m, 18);
    /* vector 133 */
    rc_push32(c, m, RC_ADDR(0x0001e7b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d76u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021496u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002149au);
    return;

L_1E7B2:
    /* 0001e7b2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001e7b2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E7B4:
    /* 0001e7b4   4  jsr (000204d6) */
    c->pc = RC_ADDR(0x0001e7b4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e7b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000204d6u);
    return;

L_1E7B8:
    /* 0001e7b8   4  jsr (ffff8284,A4) */
    c->pc = RC_ADDR(0x0001e7b8u);
    rc_step(c, m, 18);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x0001e7bcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cdau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020266u);
    return;

L_1E7BC:
    /* 0001e7bc   4  jsr (ffff8116,A4) */
    c->pc = RC_ADDR(0x0001e7bcu);
    rc_step(c, m, 18);
    /* vector 46 */
    rc_push32(c, m, RC_ADDR(0x0001e7c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ed2au);
    return;

L_1E7C0:
    /* 0001e7c0   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001e7c0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E7C4:
    /* 0001e7c4   4  jsr (00021254) */
    c->pc = RC_ADDR(0x0001e7c4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e7c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021254u);
    return;

L_1E7C8:
    /* 0001e7c8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001e7c8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1E7CA:
    /* 0001e7ca   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e7cau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E7CC:
    /* 0001e7cc   2  rts */
    c->pc = RC_ADDR(0x0001e7ccu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
