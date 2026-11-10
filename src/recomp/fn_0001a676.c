/* fn_0001a676 - 132 byte(s), 41 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001a676(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001a676u): goto L_1A676;
    case RC_ADDR(0x0001a67au): goto L_1A67A;
    case RC_ADDR(0x0001a67eu): goto L_1A67E;
    case RC_ADDR(0x0001a682u): goto L_1A682;
    case RC_ADDR(0x0001a684u): goto L_1A684;
    case RC_ADDR(0x0001a688u): goto L_1A688;
    case RC_ADDR(0x0001a68cu): goto L_1A68C;
    case RC_ADDR(0x0001a690u): goto L_1A690;
    case RC_ADDR(0x0001a692u): goto L_1A692;
    case RC_ADDR(0x0001a696u): goto L_1A696;
    case RC_ADDR(0x0001a69au): goto L_1A69A;
    case RC_ADDR(0x0001a69eu): goto L_1A69E;
    case RC_ADDR(0x0001a6a0u): goto L_1A6A0;
    case RC_ADDR(0x0001a6a4u): goto L_1A6A4;
    case RC_ADDR(0x0001a6a8u): goto L_1A6A8;
    case RC_ADDR(0x0001a6acu): goto L_1A6AC;
    case RC_ADDR(0x0001a6aeu): goto L_1A6AE;
    case RC_ADDR(0x0001a6b2u): goto L_1A6B2;
    case RC_ADDR(0x0001a6b6u): goto L_1A6B6;
    case RC_ADDR(0x0001a6b8u): goto L_1A6B8;
    case RC_ADDR(0x0001a6bau): goto L_1A6BA;
    case RC_ADDR(0x0001a6beu): goto L_1A6BE;
    case RC_ADDR(0x0001a6c0u): goto L_1A6C0;
    case RC_ADDR(0x0001a6c2u): goto L_1A6C2;
    case RC_ADDR(0x0001a6c6u): goto L_1A6C6;
    case RC_ADDR(0x0001a6c8u): goto L_1A6C8;
    case RC_ADDR(0x0001a6cau): goto L_1A6CA;
    case RC_ADDR(0x0001a6ceu): goto L_1A6CE;
    case RC_ADDR(0x0001a6d0u): goto L_1A6D0;
    case RC_ADDR(0x0001a6d2u): goto L_1A6D2;
    case RC_ADDR(0x0001a6d6u): goto L_1A6D6;
    case RC_ADDR(0x0001a6dau): goto L_1A6DA;
    case RC_ADDR(0x0001a6dcu): goto L_1A6DC;
    case RC_ADDR(0x0001a6e0u): goto L_1A6E0;
    case RC_ADDR(0x0001a6e4u): goto L_1A6E4;
    case RC_ADDR(0x0001a6e8u): goto L_1A6E8;
    case RC_ADDR(0x0001a6eau): goto L_1A6EA;
    case RC_ADDR(0x0001a6eeu): goto L_1A6EE;
    case RC_ADDR(0x0001a6f2u): goto L_1A6F2;
    case RC_ADDR(0x0001a6f6u): goto L_1A6F6;
    case RC_ADDR(0x0001a6f8u): goto L_1A6F8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1A676:
    /* 0001a676   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a676u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1A67A:
    /* 0001a67a   4  movem.l { A0 A1 A2 A3 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a67au);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1A67E:
    /* 0001a67e   4  move.l (8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a67eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A682:
    /* 0001a682   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a682u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A684:
    /* 0001a684   4  lea (1ce8,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a684u);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_1A688:
    /* 0001a688   4  move.w (0,A0,D0.w),D6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a688u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A68C:
    /* 0001a68c   4  move.l (8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a68cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A690:
    /* 0001a690   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a690u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A692:
    /* 0001a692   4  lea (1d00,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a692u);
    c->a[0] = (c->a[4] + 0x1d00u);

L_1A696:
    /* 0001a696   4  move.w (0,A0,D0.w),D7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a696u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A69A:
    /* 0001a69a   4  move.l (8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a69au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A69E:
    /* 0001a69e   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a69eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A6A0:
    /* 0001a6a0   4  lea (1d78,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6a0u);
    c->a[0] = (c->a[4] + 0x1d78u);

L_1A6A4:
    /* 0001a6a4   4  move.w (0,A0,D0.w),D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6a4u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A6A8:
    /* 0001a6a8   4  move.l (8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6a8u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A6AC:
    /* 0001a6ac   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6acu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A6AE:
    /* 0001a6ae   4  lea (1d90,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6aeu);
    c->a[0] = (c->a[4] + 0x1d90u);

L_1A6B2:
    /* 0001a6b2   4  move.w (0,A0,D0.w),D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6b2u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A6B6:
    /* 0001a6b6   2  cmp.w D4,D6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6b6u);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A6B8:
    /* 0001a6b8   2  bge 0001a6be */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6b8u);
    if (rc_cond(c, 12)) goto L_1A6BE;

L_1A6BA:
    /* 0001a6ba   4  add.w #1e,D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6bau);
    t0 = 0x0000001eu;
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_1A6BE:
    /* 0001a6be   2  cmp.w D4,D6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6beu);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A6C0:
    /* 0001a6c0   2  ble 0001a6c6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6c0u);
    if (rc_cond(c, 15)) goto L_1A6C6;

L_1A6C2:
    /* 0001a6c2   4  add.w #a,D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6c2u);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_1A6C6:
    /* 0001a6c6   2  cmp.w D5,D7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6c6u);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A6C8:
    /* 0001a6c8   2  bge 0001a6ce */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6c8u);
    if (rc_cond(c, 12)) goto L_1A6CE;

L_1A6CA:
    /* 0001a6ca   4  add.w #c,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6cau);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1A6CE:
    /* 0001a6ce   2  cmp.w D5,D7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6ceu);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1A6D0:
    /* 0001a6d0   2  ble 0001a6d6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6d0u);
    if (rc_cond(c, 15)) goto L_1A6D6;

L_1A6D2:
    /* 0001a6d2   4  add.w #24,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6d2u);
    t0 = 0x00000024u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_1A6D6:
    /* 0001a6d6   4  move.l (8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6d6u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A6DA:
    /* 0001a6da   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6dau);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A6DC:
    /* 0001a6dc   4  lea (1d78,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6dcu);
    c->a[0] = (c->a[4] + 0x1d78u);

L_1A6E0:
    /* 0001a6e0   4  move.w D4,(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6e0u);
    t0 = rc_d_get(c, 4, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A6E4:
    /* 0001a6e4   4  move.l (8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6e4u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A6E8:
    /* 0001a6e8   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6e8u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1A6EA:
    /* 0001a6ea   4  lea (1d90,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6eau);
    c->a[0] = (c->a[4] + 0x1d90u);

L_1A6EE:
    /* 0001a6ee   4  move.w D5,(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6eeu);
    t0 = rc_d_get(c, 5, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A6F2:
    /* 0001a6f2   4  movem.l (SP)+,{ D4 D5 D6 D7 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6f2u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1A6F6:
    /* 0001a6f6   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6f6u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1A6F8:
    /* 0001a6f8   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a6f8u);
    rc_ret(c, m);
    return;

}
