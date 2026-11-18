/* fn_0000ed08 - 130 byte(s), 42 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000ed08(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ed08u): goto L_ED08;
    case RC_ADDR(0x0000ed0cu): goto L_ED0C;
    case RC_ADDR(0x0000ed0eu): goto L_ED0E;
    case RC_ADDR(0x0000ed10u): goto L_ED10;
    case RC_ADDR(0x0000ed12u): goto L_ED12;
    case RC_ADDR(0x0000ed14u): goto L_ED14;
    case RC_ADDR(0x0000ed18u): goto L_ED18;
    case RC_ADDR(0x0000ed1cu): goto L_ED1C;
    case RC_ADDR(0x0000ed1eu): goto L_ED1E;
    case RC_ADDR(0x0000ed20u): goto L_ED20;
    case RC_ADDR(0x0000ed22u): goto L_ED22;
    case RC_ADDR(0x0000ed26u): goto L_ED26;
    case RC_ADDR(0x0000ed2cu): goto L_ED2C;
    case RC_ADDR(0x0000ed2eu): goto L_ED2E;
    case RC_ADDR(0x0000ed30u): goto L_ED30;
    case RC_ADDR(0x0000ed34u): goto L_ED34;
    case RC_ADDR(0x0000ed3au): goto L_ED3A;
    case RC_ADDR(0x0000ed3cu): goto L_ED3C;
    case RC_ADDR(0x0000ed3eu): goto L_ED3E;
    case RC_ADDR(0x0000ed42u): goto L_ED42;
    case RC_ADDR(0x0000ed48u): goto L_ED48;
    case RC_ADDR(0x0000ed4au): goto L_ED4A;
    case RC_ADDR(0x0000ed4cu): goto L_ED4C;
    case RC_ADDR(0x0000ed50u): goto L_ED50;
    case RC_ADDR(0x0000ed56u): goto L_ED56;
    case RC_ADDR(0x0000ed5au): goto L_ED5A;
    case RC_ADDR(0x0000ed5cu): goto L_ED5C;
    case RC_ADDR(0x0000ed5eu): goto L_ED5E;
    case RC_ADDR(0x0000ed62u): goto L_ED62;
    case RC_ADDR(0x0000ed66u): goto L_ED66;
    case RC_ADDR(0x0000ed68u): goto L_ED68;
    case RC_ADDR(0x0000ed6au): goto L_ED6A;
    case RC_ADDR(0x0000ed6eu): goto L_ED6E;
    case RC_ADDR(0x0000ed72u): goto L_ED72;
    case RC_ADDR(0x0000ed74u): goto L_ED74;
    case RC_ADDR(0x0000ed78u): goto L_ED78;
    case RC_ADDR(0x0000ed7au): goto L_ED7A;
    case RC_ADDR(0x0000ed7cu): goto L_ED7C;
    case RC_ADDR(0x0000ed82u): goto L_ED82;
    case RC_ADDR(0x0000ed84u): goto L_ED84;
    case RC_ADDR(0x0000ed86u): goto L_ED86;
    case RC_ADDR(0x0000ed88u): goto L_ED88;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_ED08:
    /* 0000ed08   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000ed08u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_ED0C:
    /* 0000ed0c   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x0000ed0cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ED0E:
    /* 0000ed0e   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000ed0eu);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_ED10:
    /* 0000ed10   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000ed10u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_ED12:
    /* 0000ed12   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ed12u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_ED14:
    /* 0000ed14   4  lea (f08,A4),A0 */
    c->pc = RC_ADDR(0x0000ed14u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xf08u);

L_ED18:
    /* 0000ed18   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ed18u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_ED1C:
    /* 0000ed1c   2  bne 0000ed7a */
    c->pc = RC_ADDR(0x0000ed1cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_ED7A;

L_ED1E:
    /* 0000ed1e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000ed1eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_ED20:
    /* 0000ed20   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ed20u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_ED22:
    /* 0000ed22   4  lea (f08,A4),A0 */
    c->pc = RC_ADDR(0x0000ed22u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xf08u);

L_ED26:
    /* 0000ed26   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ed26u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_ED2C:
    /* 0000ed2c   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000ed2cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_ED2E:
    /* 0000ed2e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ed2eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_ED30:
    /* 0000ed30   4  lea (1088,A4),A0 */
    c->pc = RC_ADDR(0x0000ed30u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1088u);

L_ED34:
    /* 0000ed34   6  move.w #20,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ed34u);
    rc_step(c, m, 18);
    t0 = 0x00000020u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_ED3A:
    /* 0000ed3a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000ed3au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_ED3C:
    /* 0000ed3c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ed3cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_ED3E:
    /* 0000ed3e   4  lea (f88,A4),A0 */
    c->pc = RC_ADDR(0x0000ed3eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xf88u);

L_ED42:
    /* 0000ed42   6  move.w (8,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ed42u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_ED48:
    /* 0000ed48   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000ed48u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_ED4A:
    /* 0000ed4a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ed4au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_ED4C:
    /* 0000ed4c   4  lea (1008,A4),A0 */
    c->pc = RC_ADDR(0x0000ed4cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1008u);

L_ED50:
    /* 0000ed50   6  move.w (a,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ed50u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_ED56:
    /* 0000ed56   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0000ed56u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ED5A:
    /* 0000ed5a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ed5au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_ED5C:
    /* 0000ed5c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ed5cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_ED5E:
    /* 0000ed5e   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x0000ed5eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_ED62:
    /* 0000ed62   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x0000ed62u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ED66:
    /* 0000ed66   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000ed66u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_ED68:
    /* 0000ed68   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000ed68u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_ED6A:
    /* 0000ed6a   4  lea (ffff9b5a,A4),A1 */
    c->pc = RC_ADDR(0x0000ed6au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x64a6u);

L_ED6E:
    /* 0000ed6e   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0000ed6eu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ED72:
    /* 0000ed72   2  asl.w #1,D2 */
    c->pc = RC_ADDR(0x0000ed72u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_ED74:
    /* 0000ed74   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ed74u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_ED78:
    /* 0000ed78   2  bra 0000ed84 */
    c->pc = RC_ADDR(0x0000ed78u);
    rc_step(c, m, 10);
    goto L_ED84;

L_ED7A:
    /* 0000ed7a   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000ed7au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_ED7C:
    /* 0000ed7c   6  cmp.l #40,D4 */
    c->pc = RC_ADDR(0x0000ed7cu);
    rc_step(c, m, 14);
    t0 = 0x00000040u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_ED82:
    /* 0000ed82   2  blt 0000ed10 */
    c->pc = RC_ADDR(0x0000ed82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_ED10; }

L_ED84:
    /* 0000ed84   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x0000ed84u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_ED86:
    /* 0000ed86   2  unlk A5 */
    c->pc = RC_ADDR(0x0000ed86u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_ED88:
    /* 0000ed88   2  rts */
    c->pc = RC_ADDR(0x0000ed88u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
