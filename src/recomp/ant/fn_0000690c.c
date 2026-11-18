/* fn_0000690c - 70 byte(s), 23 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000690c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000690cu): goto L_690C;
    case RC_ADDR(0x00006910u): goto L_6910;
    case RC_ADDR(0x00006914u): goto L_6914;
    case RC_ADDR(0x00006918u): goto L_6918;
    case RC_ADDR(0x0000691au): goto L_691A;
    case RC_ADDR(0x0000691eu): goto L_691E;
    case RC_ADDR(0x00006920u): goto L_6920;
    case RC_ADDR(0x00006922u): goto L_6922;
    case RC_ADDR(0x00006926u): goto L_6926;
    case RC_ADDR(0x0000692au): goto L_692A;
    case RC_ADDR(0x0000692cu): goto L_692C;
    case RC_ADDR(0x00006930u): goto L_6930;
    case RC_ADDR(0x00006934u): goto L_6934;
    case RC_ADDR(0x00006938u): goto L_6938;
    case RC_ADDR(0x0000693cu): goto L_693C;
    case RC_ADDR(0x0000693eu): goto L_693E;
    case RC_ADDR(0x00006940u): goto L_6940;
    case RC_ADDR(0x00006942u): goto L_6942;
    case RC_ADDR(0x00006944u): goto L_6944;
    case RC_ADDR(0x00006948u): goto L_6948;
    case RC_ADDR(0x0000694au): goto L_694A;
    case RC_ADDR(0x0000694cu): goto L_694C;
    case RC_ADDR(0x00006950u): goto L_6950;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_690C:
    /* 0000690c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000690cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_6910:
    /* 00006910   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006910u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6914:
    /* 00006914   4  cmpi.b #a,(A0) */
    c->pc = RC_ADDR(0x00006914u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000000au);

L_6918:
    /* 00006918   2  beq 0000692c */
    c->pc = RC_ADDR(0x00006918u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_692C;

L_691A:
    /* 0000691a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000691au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_691E:
    /* 0000691e   2  tst.b (A0) */
    c->pc = RC_ADDR(0x0000691eu);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_6920:
    /* 00006920   2  beq 0000692c */
    c->pc = RC_ADDR(0x00006920u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_692C;

L_6922:
    /* 00006922   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006922u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6926:
    /* 00006926   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x00006926u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_692A:
    /* 0000692a   2  bra 00006910 */
    c->pc = RC_ADDR(0x0000692au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6910;

L_692C:
    /* 0000692c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000692cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6930:
    /* 00006930   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x00006930u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_6934:
    /* 00006934   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00006934u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6938:
    /* 00006938   4  cmpi.b #2b,(A0) */
    c->pc = RC_ADDR(0x00006938u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002bu);

L_693C:
    /* 0000693c   2  bge 00006944 */
    c->pc = RC_ADDR(0x0000693cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_6944;

L_693E:
    /* 0000693e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000693eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6940:
    /* 00006940   2  unlk A5 */
    c->pc = RC_ADDR(0x00006940u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6942:
    /* 00006942   2  rts */
    c->pc = RC_ADDR(0x00006942u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_6944:
    /* 00006944   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006944u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6948:
    /* 00006948   2  bsr 000068e6 */
    c->pc = RC_ADDR(0x00006948u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000694au));
    rc_depth++;
    c->pc = RC_ADDR(0x000068e6u);
    return;

L_694A:
    /* 0000694a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000694au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_694C:
    /* 0000694c   4  move.l (8,A5),D0 */
    c->pc = RC_ADDR(0x0000694cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_6950:
    /* 00006950   2  bra 00006940 */
    c->pc = RC_ADDR(0x00006950u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6940;

}
