/* fn_0000d748 - 184 byte(s), 56 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000d748(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0000d748u): goto L_D748;
    case RC_ADDR(0x0000d74cu): goto L_D74C;
    case RC_ADDR(0x0000d750u): goto L_D750;
    case RC_ADDR(0x0000d756u): goto L_D756;
    case RC_ADDR(0x0000d758u): goto L_D758;
    case RC_ADDR(0x0000d75cu): goto L_D75C;
    case RC_ADDR(0x0000d75eu): goto L_D75E;
    case RC_ADDR(0x0000d762u): goto L_D762;
    case RC_ADDR(0x0000d766u): goto L_D766;
    case RC_ADDR(0x0000d76au): goto L_D76A;
    case RC_ADDR(0x0000d76cu): goto L_D76C;
    case RC_ADDR(0x0000d770u): goto L_D770;
    case RC_ADDR(0x0000d774u): goto L_D774;
    case RC_ADDR(0x0000d776u): goto L_D776;
    case RC_ADDR(0x0000d77au): goto L_D77A;
    case RC_ADDR(0x0000d77cu): goto L_D77C;
    case RC_ADDR(0x0000d780u): goto L_D780;
    case RC_ADDR(0x0000d784u): goto L_D784;
    case RC_ADDR(0x0000d788u): goto L_D788;
    case RC_ADDR(0x0000d78au): goto L_D78A;
    case RC_ADDR(0x0000d78eu): goto L_D78E;
    case RC_ADDR(0x0000d790u): goto L_D790;
    case RC_ADDR(0x0000d794u): goto L_D794;
    case RC_ADDR(0x0000d798u): goto L_D798;
    case RC_ADDR(0x0000d79au): goto L_D79A;
    case RC_ADDR(0x0000d79eu): goto L_D79E;
    case RC_ADDR(0x0000d7a2u): goto L_D7A2;
    case RC_ADDR(0x0000d7a6u): goto L_D7A6;
    case RC_ADDR(0x0000d7aau): goto L_D7AA;
    case RC_ADDR(0x0000d7aeu): goto L_D7AE;
    case RC_ADDR(0x0000d7b2u): goto L_D7B2;
    case RC_ADDR(0x0000d7b6u): goto L_D7B6;
    case RC_ADDR(0x0000d7bau): goto L_D7BA;
    case RC_ADDR(0x0000d7beu): goto L_D7BE;
    case RC_ADDR(0x0000d7c0u): goto L_D7C0;
    case RC_ADDR(0x0000d7c2u): goto L_D7C2;
    case RC_ADDR(0x0000d7c4u): goto L_D7C4;
    case RC_ADDR(0x0000d7c8u): goto L_D7C8;
    case RC_ADDR(0x0000d7ccu): goto L_D7CC;
    case RC_ADDR(0x0000d7d0u): goto L_D7D0;
    case RC_ADDR(0x0000d7d2u): goto L_D7D2;
    case RC_ADDR(0x0000d7d6u): goto L_D7D6;
    case RC_ADDR(0x0000d7d8u): goto L_D7D8;
    case RC_ADDR(0x0000d7dau): goto L_D7DA;
    case RC_ADDR(0x0000d7deu): goto L_D7DE;
    case RC_ADDR(0x0000d7e0u): goto L_D7E0;
    case RC_ADDR(0x0000d7e2u): goto L_D7E2;
    case RC_ADDR(0x0000d7e6u): goto L_D7E6;
    case RC_ADDR(0x0000d7e8u): goto L_D7E8;
    case RC_ADDR(0x0000d7eau): goto L_D7EA;
    case RC_ADDR(0x0000d7eeu): goto L_D7EE;
    case RC_ADDR(0x0000d7f0u): goto L_D7F0;
    case RC_ADDR(0x0000d7f2u): goto L_D7F2;
    case RC_ADDR(0x0000d7f6u): goto L_D7F6;
    case RC_ADDR(0x0000d7fau): goto L_D7FA;
    case RC_ADDR(0x0000d7feu): goto L_D7FE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_D748:
    /* 0000d748   4  link.w A5,#fffffff0 */
    c->pc = RC_ADDR(0x0000d748u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x10u;

L_D74C:
    /* 0000d74c   4  movea.l (ffffd298,A4),A0 */
    c->pc = RC_ADDR(0x0000d74cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[0] = t0;

L_D750:
    /* 0000d750   6  move.l (ffffd340,A4),(4,A0) */
    c->pc = RC_ADDR(0x0000d750u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D756:
    /* 0000d756   2  moveq #f,D0 */
    c->pc = RC_ADDR(0x0000d756u);
    rc_step(c, m, 4);
    c->d[0] = 0x0000000fu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_D758:
    /* 0000d758   4  sub.w (fffffa26,A4),D0 */
    c->pc = RC_ADDR(0x0000d758u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5dau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D75C:
    /* 0000d75c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d75cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_D75E:
    /* 0000d75e   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000d75eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D762:
    /* 0000d762   4  move.w (fffffa28,A4),D0 */
    c->pc = RC_ADDR(0x0000d762u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5d8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D766:
    /* 0000d766   4  add.w #b8,D0 */
    c->pc = RC_ADDR(0x0000d766u);
    rc_step(c, m, 10);
    t0 = 0x000000b8u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D76A:
    /* 0000d76a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d76au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_D76C:
    /* 0000d76c   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000d76cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D770:
    /* 0000d770   4  move.w (1134,A4),D0 */
    c->pc = RC_ADDR(0x0000d770u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1134u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D774:
    /* 0000d774   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d774u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_D776:
    /* 0000d776   4  divs.w #3,D0 */
    c->pc = RC_ADDR(0x0000d776u);
    rc_step(c, m, 162);
    t0 = 0x00000003u;
    rc_divs(c, m, 0, t0);

L_D77A:
    /* 0000d77a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d77au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_D77C:
    /* 0000d77c   4  add.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d77cu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D780:
    /* 0000d780   4  move.l D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000d780u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D784:
    /* 0000d784   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000d784u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D788:
    /* 0000d788   2  addq.l #5,D0 */
    c->pc = RC_ADDR(0x0000d788u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000005u;
    rc_flags_add(c, RC_L, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D78A:
    /* 0000d78a   4  move.l D0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x0000d78au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D78E:
    /* 0000d78e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000d78eu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_D790:
    /* 0000d790   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d790u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D794:
    /* 0000d794   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x0000d794u);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x0000d798u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_D798:
    /* 0000d798   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d798u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D79A:
    /* 0000d79a   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d79au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D79E:
    /* 0000d79e   4  pea (00000130).l */
    c->pc = RC_ADDR(0x0000d79eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000130u);

L_D7A2:
    /* 0000d7a2   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d7a2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7A6:
    /* 0000d7a6   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000d7a6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7AA:
    /* 0000d7aa   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d7aau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7AE:
    /* 0000d7ae   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x0000d7aeu);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x0000d7b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002397au);
    return;

L_D7B2:
    /* 0000d7b2   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000d7b2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_D7B6:
    /* 0000d7b6   4  move.l (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0000d7b6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7BA:
    /* 0000d7ba   4  cmp.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d7bau);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_D7BE:
    /* 0000d7be   2  bgt 0000d7c4 */
    c->pc = RC_ADDR(0x0000d7beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_D7C4;

L_D7C0:
    /* 0000d7c0   2  unlk A5 */
    c->pc = RC_ADDR(0x0000d7c0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_D7C2:
    /* 0000d7c2   2  rts */
    c->pc = RC_ADDR(0x0000d7c2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_D7C4:
    /* 0000d7c4   4  pea (00000006).l */
    c->pc = RC_ADDR(0x0000d7c4u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000006u);

L_D7C8:
    /* 0000d7c8   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d7c8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7CC:
    /* 0000d7cc   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x0000d7ccu);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x0000d7d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_D7D0:
    /* 0000d7d0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000d7d0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_D7D2:
    /* 0000d7d2   4  move.l (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x0000d7d2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7D6:
    /* 0000d7d6   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000d7d6u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D7D8:
    /* 0000d7d8   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000d7d8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7DA:
    /* 0000d7da   4  move.l (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0000d7dau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7DE:
    /* 0000d7de   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000d7deu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D7E0:
    /* 0000d7e0   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000d7e0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7E2:
    /* 0000d7e2   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000d7e2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7E6:
    /* 0000d7e6   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x0000d7e6u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D7E8:
    /* 0000d7e8   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000d7e8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7EA:
    /* 0000d7ea   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d7eau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7EE:
    /* 0000d7ee   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x0000d7eeu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D7F0:
    /* 0000d7f0   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000d7f0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7F2:
    /* 0000d7f2   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x0000d7f2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D7F6:
    /* 0000d7f6   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x0000d7f6u);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x0000d7fau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002397au);
    return;

L_D7FA:
    /* 0000d7fa   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000d7fau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_D7FE:
    /* 0000d7fe   2  bra 0000d7c0 */
    c->pc = RC_ADDR(0x0000d7feu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_D7C0;

}
