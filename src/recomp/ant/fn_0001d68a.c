/* fn_0001d68a - 90 byte(s), 31 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001d68a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d68au): goto L_1D68A;
    case RC_ADDR(0x0001d68eu): goto L_1D68E;
    case RC_ADDR(0x0001d692u): goto L_1D692;
    case RC_ADDR(0x0001d694u): goto L_1D694;
    case RC_ADDR(0x0001d696u): goto L_1D696;
    case RC_ADDR(0x0001d69au): goto L_1D69A;
    case RC_ADDR(0x0001d69cu): goto L_1D69C;
    case RC_ADDR(0x0001d6a2u): goto L_1D6A2;
    case RC_ADDR(0x0001d6a4u): goto L_1D6A4;
    case RC_ADDR(0x0001d6aau): goto L_1D6AA;
    case RC_ADDR(0x0001d6acu): goto L_1D6AC;
    case RC_ADDR(0x0001d6b2u): goto L_1D6B2;
    case RC_ADDR(0x0001d6b4u): goto L_1D6B4;
    case RC_ADDR(0x0001d6b8u): goto L_1D6B8;
    case RC_ADDR(0x0001d6bau): goto L_1D6BA;
    case RC_ADDR(0x0001d6beu): goto L_1D6BE;
    case RC_ADDR(0x0001d6c0u): goto L_1D6C0;
    case RC_ADDR(0x0001d6c4u): goto L_1D6C4;
    case RC_ADDR(0x0001d6c8u): goto L_1D6C8;
    case RC_ADDR(0x0001d6ccu): goto L_1D6CC;
    case RC_ADDR(0x0001d6ceu): goto L_1D6CE;
    case RC_ADDR(0x0001d6d0u): goto L_1D6D0;
    case RC_ADDR(0x0001d6d2u): goto L_1D6D2;
    case RC_ADDR(0x0001d6d4u): goto L_1D6D4;
    case RC_ADDR(0x0001d6d6u): goto L_1D6D6;
    case RC_ADDR(0x0001d6d8u): goto L_1D6D8;
    case RC_ADDR(0x0001d6dau): goto L_1D6DA;
    case RC_ADDR(0x0001d6dcu): goto L_1D6DC;
    case RC_ADDR(0x0001d6deu): goto L_1D6DE;
    case RC_ADDR(0x0001d6e0u): goto L_1D6E0;
    case RC_ADDR(0x0001d6e2u): goto L_1D6E2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D68A:
    /* 0001d68a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001d68au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D68E:
    /* 0001d68e   4  move.w (7a4,A4),D0 */
    c->pc = RC_ADDR(0x0001d68eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x7a4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D692:
    /* 0001d692   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d692u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D694:
    /* 0001d694   2  bra 0001d6d4 */
    c->pc = RC_ADDR(0x0001d694u);
    rc_step(c, m, 10);
    goto L_1D6D4;

L_1D696:
    /* 0001d696   4  tst.w (2968,A4) */
    c->pc = RC_ADDR(0x0001d696u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2968u));
    rc_set_nzvc(c, t0, RC_W);

L_1D69A:
    /* 0001d69a   2  bne 0001d6cc */
    c->pc = RC_ADDR(0x0001d69au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D6CC;

L_1D69C:
    /* 0001d69c   6  cmpi.w #3,(26d8,A4) */
    c->pc = RC_ADDR(0x0001d69cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26d8u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_1D6A2:
    /* 0001d6a2   2  bne 0001d6cc */
    c->pc = RC_ADDR(0x0001d6a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D6CC;

L_1D6A4:
    /* 0001d6a4   6  cmpi.w #233,(e76,A4) */
    c->pc = RC_ADDR(0x0001d6a4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_cmp(c, RC_W, t0, 0x00000233u);

L_1D6AA:
    /* 0001d6aa   2  bgt 0001d6cc */
    c->pc = RC_ADDR(0x0001d6aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1D6CC;

L_1D6AC:
    /* 0001d6ac   6  cmpi.w #68,(e78,A4) */
    c->pc = RC_ADDR(0x0001d6acu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_cmp(c, RC_W, t0, 0x00000068u);

L_1D6B2:
    /* 0001d6b2   2  bgt 0001d6cc */
    c->pc = RC_ADDR(0x0001d6b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1D6CC;

L_1D6B4:
    /* 0001d6b4   4  tst.w (ffffb24a,A4) */
    c->pc = RC_ADDR(0x0001d6b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_set_nzvc(c, t0, RC_W);

L_1D6B8:
    /* 0001d6b8   2  bne 0001d6cc */
    c->pc = RC_ADDR(0x0001d6b8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D6CC;

L_1D6BA:
    /* 0001d6ba   4  tst.w (ffffb24c,A4) */
    c->pc = RC_ADDR(0x0001d6bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_set_nzvc(c, t0, RC_W);

L_1D6BE:
    /* 0001d6be   2  bne 0001d6cc */
    c->pc = RC_ADDR(0x0001d6beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D6CC;

L_1D6C0:
    /* 0001d6c0   4  clr.w (7a6,A4) */
    c->pc = RC_ADDR(0x0001d6c0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7a6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D6C4:
    /* 0001d6c4   4  clr.w (7ac,A4) */
    c->pc = RC_ADDR(0x0001d6c4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7acu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D6C8:
    /* 0001d6c8   4  addq.w #1,(7a4,A4) */
    c->pc = RC_ADDR(0x0001d6c8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x7a4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D6CC:
    /* 0001d6cc   2  bra 0001d6e0 */
    c->pc = RC_ADDR(0x0001d6ccu);
    rc_step(c, m, 10);
    goto L_1D6E0;

L_1D6CE:
    /* 0001d6ce   2  bsr 0001d6e4 */
    c->pc = RC_ADDR(0x0001d6ceu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d6d0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d6e4u);
    return;

L_1D6D0:
    /* 0001d6d0   2  bra 0001d6e0 */
    c->pc = RC_ADDR(0x0001d6d0u);
    rc_step(c, m, 10);
    goto L_1D6E0;

L_1D6D2:
    /* 0001d6d2   2  bra 0001d6e0 */
    c->pc = RC_ADDR(0x0001d6d2u);
    rc_step(c, m, 10);
    goto L_1D6E0;

L_1D6D4:
    /* 0001d6d4   2  tst.l D0 */
    c->pc = RC_ADDR(0x0001d6d4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_1D6D6:
    /* 0001d6d6   2  beq 0001d696 */
    c->pc = RC_ADDR(0x0001d6d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1D696; }

L_1D6D8:
    /* 0001d6d8   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0001d6d8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1D6DA:
    /* 0001d6da   2  beq 0001d6ce */
    c->pc = RC_ADDR(0x0001d6dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1D6CE; }

L_1D6DC:
    /* 0001d6dc   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0001d6dcu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1D6DE:
    /* 0001d6de   2  beq 0001d6d2 */
    c->pc = RC_ADDR(0x0001d6deu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_1D6D2; }

L_1D6E0:
    /* 0001d6e0   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d6e0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D6E2:
    /* 0001d6e2   2  rts */
    c->pc = RC_ADDR(0x0001d6e2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
