/* fn_0001e756 - 120 byte(s), 36 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001e756(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0001e756u: goto L_1E756;
    case 0x0001e75au: goto L_1E75A;
    case 0x0001e75eu: goto L_1E75E;
    case 0x0001e762u: goto L_1E762;
    case 0x0001e766u: goto L_1E766;
    case 0x0001e76au: goto L_1E76A;
    case 0x0001e76eu: goto L_1E76E;
    case 0x0001e772u: goto L_1E772;
    case 0x0001e776u: goto L_1E776;
    case 0x0001e778u: goto L_1E778;
    case 0x0001e77cu: goto L_1E77C;
    case 0x0001e780u: goto L_1E780;
    case 0x0001e782u: goto L_1E782;
    case 0x0001e786u: goto L_1E786;
    case 0x0001e788u: goto L_1E788;
    case 0x0001e78cu: goto L_1E78C;
    case 0x0001e790u: goto L_1E790;
    case 0x0001e792u: goto L_1E792;
    case 0x0001e796u: goto L_1E796;
    case 0x0001e798u: goto L_1E798;
    case 0x0001e79cu: goto L_1E79C;
    case 0x0001e7a0u: goto L_1E7A0;
    case 0x0001e7a2u: goto L_1E7A2;
    case 0x0001e7a6u: goto L_1E7A6;
    case 0x0001e7aau: goto L_1E7AA;
    case 0x0001e7acu: goto L_1E7AC;
    case 0x0001e7aeu: goto L_1E7AE;
    case 0x0001e7b2u: goto L_1E7B2;
    case 0x0001e7b4u: goto L_1E7B4;
    case 0x0001e7b8u: goto L_1E7B8;
    case 0x0001e7bcu: goto L_1E7BC;
    case 0x0001e7c0u: goto L_1E7C0;
    case 0x0001e7c4u: goto L_1E7C4;
    case 0x0001e7c8u: goto L_1E7C8;
    case 0x0001e7cau: goto L_1E7CA;
    case 0x0001e7ccu: goto L_1E7CC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E756:
    /* 0001e756   4  link.w A5,#0 */
    c->pc = 0x0001e756u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E75A:
    /* 0001e75a   4  jsr (0001e322) */
    c->pc = 0x0001e75au;
    rc_push32(c, m, 0x0001e75eu);
    rc_depth++;
    c->pc = 0x0001e322u;
    return;

L_1E75E:
    /* 0001e75e   4  jsr (0001e43c) */
    c->pc = 0x0001e75eu;
    rc_push32(c, m, 0x0001e762u);
    rc_depth++;
    c->pc = 0x0001e43cu;
    return;

L_1E762:
    /* 0001e762   4  jsr (0001d250) */
    c->pc = 0x0001e762u;
    rc_push32(c, m, 0x0001e766u);
    rc_depth++;
    c->pc = 0x0001d250u;
    return;

L_1E766:
    /* 0001e766   4  jsr (0001f1e8) */
    c->pc = 0x0001e766u;
    rc_push32(c, m, 0x0001e76au);
    rc_depth++;
    c->pc = 0x0001f1e8u;
    return;

L_1E76A:
    /* 0001e76a   4  jsr (ffff8260,A4) */
    c->pc = 0x0001e76au;
    /* vector 101 */
    rc_push32(c, m, 0x0001e76eu);
    rc_depth++;
    c->pc = 0x0001f27eu;
    return;

L_1E76E:
    /* 0001e76e   4  jsr (ffff821e,A4) */
    c->pc = 0x0001e76eu;
    /* vector 90 */
    rc_push32(c, m, 0x0001e772u);
    rc_depth++;
    c->pc = 0x0001d778u;
    return;

L_1E772:
    /* 0001e772   4  tst.l (ffffcba8,A4) */
    c->pc = 0x0001e772u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x3458u));
    rc_set_nzvc(c, t0, RC_L);

L_1E776:
    /* 0001e776   2  beq 0001e782 */
    c->pc = 0x0001e776u;
    if (rc_cond(c, 7)) goto L_1E782;

L_1E778:
    /* 0001e778   4  move.l (ffffcba8,A4),-(A7) */
    c->pc = 0x0001e778u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x3458u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E77C:
    /* 0001e77c   4  jsr (ffff8332,A4) */
    c->pc = 0x0001e77cu;
    /* vector 136: exec.library -414 */
    c->pc = 0x0001e780u;
    rc_os_call(c, m, 0, -414);

L_1E780:
    /* 0001e780   2  addq.w #4,A7 */
    c->pc = 0x0001e780u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E782:
    /* 0001e782   4  tst.l (ffffcba4,A4) */
    c->pc = 0x0001e782u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x345cu));
    rc_set_nzvc(c, t0, RC_L);

L_1E786:
    /* 0001e786   2  beq 0001e792 */
    c->pc = 0x0001e786u;
    if (rc_cond(c, 7)) goto L_1E792;

L_1E788:
    /* 0001e788   4  move.l (ffffcba4,A4),-(A7) */
    c->pc = 0x0001e788u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x345cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E78C:
    /* 0001e78c   4  jsr (ffff8332,A4) */
    c->pc = 0x0001e78cu;
    /* vector 136: exec.library -414 */
    c->pc = 0x0001e790u;
    rc_os_call(c, m, 0, -414);

L_1E790:
    /* 0001e790   2  addq.w #4,A7 */
    c->pc = 0x0001e790u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E792:
    /* 0001e792   4  tst.l (ffffcba0,A4) */
    c->pc = 0x0001e792u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    rc_set_nzvc(c, t0, RC_L);

L_1E796:
    /* 0001e796   2  beq 0001e7a2 */
    c->pc = 0x0001e796u;
    if (rc_cond(c, 7)) goto L_1E7A2;

L_1E798:
    /* 0001e798   4  move.l (ffffcba0,A4),-(A7) */
    c->pc = 0x0001e798u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E79C:
    /* 0001e79c   4  jsr (ffff8332,A4) */
    c->pc = 0x0001e79cu;
    /* vector 136: exec.library -414 */
    c->pc = 0x0001e7a0u;
    rc_os_call(c, m, 0, -414);

L_1E7A0:
    /* 0001e7a0   2  addq.w #4,A7 */
    c->pc = 0x0001e7a0u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E7A2:
    /* 0001e7a2   4  move.l (2a18,A4),-(A7) */
    c->pc = 0x0001e7a2u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2a18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E7A6:
    /* 0001e7a6   4  jsr (ffff82f6,A4) */
    c->pc = 0x0001e7a6u;
    /* vector 126 */
    rc_push32(c, m, 0x0001e7aau);
    rc_depth++;
    c->pc = 0x00021410u;
    return;

L_1E7AA:
    /* 0001e7aa   2  addq.w #4,A7 */
    c->pc = 0x0001e7aau;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E7AC:
    /* 0001e7ac   2  move.l D0,-(A7) */
    c->pc = 0x0001e7acu;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E7AE:
    /* 0001e7ae   4  jsr (ffff8320,A4) */
    c->pc = 0x0001e7aeu;
    /* vector 133 */
    rc_push32(c, m, 0x0001e7b2u);
    rc_depth++;
    c->pc = 0x0002149au;
    return;

L_1E7B2:
    /* 0001e7b2   2  addq.w #4,A7 */
    c->pc = 0x0001e7b2u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E7B4:
    /* 0001e7b4   4  jsr (000204d6) */
    c->pc = 0x0001e7b4u;
    rc_push32(c, m, 0x0001e7b8u);
    rc_depth++;
    c->pc = 0x000204d6u;
    return;

L_1E7B8:
    /* 0001e7b8   4  jsr (ffff8284,A4) */
    c->pc = 0x0001e7b8u;
    /* vector 107 */
    rc_push32(c, m, 0x0001e7bcu);
    rc_depth++;
    c->pc = 0x00020266u;
    return;

L_1E7BC:
    /* 0001e7bc   4  jsr (ffff8116,A4) */
    c->pc = 0x0001e7bcu;
    /* vector 46 */
    rc_push32(c, m, 0x0001e7c0u);
    rc_depth++;
    c->pc = 0x0000ed2au;
    return;

L_1E7C0:
    /* 0001e7c0   4  move.w (8,A5),-(A7) */
    c->pc = 0x0001e7c0u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E7C4:
    /* 0001e7c4   4  jsr (00021254) */
    c->pc = 0x0001e7c4u;
    rc_push32(c, m, 0x0001e7c8u);
    rc_depth++;
    c->pc = 0x00021254u;
    return;

L_1E7C8:
    /* 0001e7c8   2  addq.w #2,A7 */
    c->pc = 0x0001e7c8u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1E7CA:
    /* 0001e7ca   2  unlk A5 */
    c->pc = 0x0001e7cau;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E7CC:
    /* 0001e7cc   2  rts */
    c->pc = 0x0001e7ccu;
    rc_ret(c, m);
    return;

}
