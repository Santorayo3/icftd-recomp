/* fn_00010dfa - 78 byte(s), 22 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00010dfa(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00010dfau): goto L_10DFA;
    case RC_ADDR(0x00010dfeu): goto L_10DFE;
    case RC_ADDR(0x00010e02u): goto L_10E02;
    case RC_ADDR(0x00010e06u): goto L_10E06;
    case RC_ADDR(0x00010e0au): goto L_10E0A;
    case RC_ADDR(0x00010e0eu): goto L_10E0E;
    case RC_ADDR(0x00010e10u): goto L_10E10;
    case RC_ADDR(0x00010e14u): goto L_10E14;
    case RC_ADDR(0x00010e18u): goto L_10E18;
    case RC_ADDR(0x00010e1au): goto L_10E1A;
    case RC_ADDR(0x00010e1eu): goto L_10E1E;
    case RC_ADDR(0x00010e22u): goto L_10E22;
    case RC_ADDR(0x00010e26u): goto L_10E26;
    case RC_ADDR(0x00010e2au): goto L_10E2A;
    case RC_ADDR(0x00010e2cu): goto L_10E2C;
    case RC_ADDR(0x00010e30u): goto L_10E30;
    case RC_ADDR(0x00010e34u): goto L_10E34;
    case RC_ADDR(0x00010e38u): goto L_10E38;
    case RC_ADDR(0x00010e3cu): goto L_10E3C;
    case RC_ADDR(0x00010e42u): goto L_10E42;
    case RC_ADDR(0x00010e44u): goto L_10E44;
    case RC_ADDR(0x00010e46u): goto L_10E46;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10DFA:
    /* 00010dfa   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00010dfau);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_10DFE:
    /* 00010dfe   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00010dfeu);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10E02:
    /* 00010e02   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00010e02u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10E06:
    /* 00010e06   4  lea (ffffa21a,A4),A0 */
    c->pc = RC_ADDR(0x00010e06u);
    c->a[0] = (c->a[4] - 0x5de6u);

L_10E0A:
    /* 00010e0a   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00010e0au);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_10E0E:
    /* 00010e0e   2  bne 00010e2c */
    c->pc = RC_ADDR(0x00010e0eu);
    if (rc_cond(c, 6)) goto L_10E2C;

L_10E10:
    /* 00010e10   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00010e10u);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_10E14:
    /* 00010e14   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x00010e14u);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x00010e18u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001ec06u);
    return;

L_10E18:
    /* 00010e18   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00010e18u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_10E1A:
    /* 00010e1a   4  add.w #7f,D0 */
    c->pc = RC_ADDR(0x00010e1au);
    t0 = 0x0000007fu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_10E1E:
    /* 00010e1e   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00010e1eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10E22:
    /* 00010e22   4  lea (ffffa21a,A4),A0 */
    c->pc = RC_ADDR(0x00010e22u);
    c->a[0] = (c->a[4] - 0x5de6u);

L_10E26:
    /* 00010e26   4  move.b D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00010e26u);
    t0 = rc_d_get(c, 0, RC_B);
    t4 = rc_ext(c->d[1], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_10E2A:
    /* 00010e2a   2  bra 00010e38 */
    c->pc = RC_ADDR(0x00010e2au);
    goto L_10E38;

L_10E2C:
    /* 00010e2c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00010e2cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10E30:
    /* 00010e30   4  lea (ffffa21a,A4),A0 */
    c->pc = RC_ADDR(0x00010e30u);
    c->a[0] = (c->a[4] - 0x5de6u);

L_10E34:
    /* 00010e34   4  subq.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00010e34u);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_10E38:
    /* 00010e38   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00010e38u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_10E3C:
    /* 00010e3c   6  cmpi.w #e10,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00010e3cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000e10u);

L_10E42:
    /* 00010e42   2  blt 00010e02 */
    c->pc = RC_ADDR(0x00010e42u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_10E02; }

L_10E44:
    /* 00010e44   2  unlk A5 */
    c->pc = RC_ADDR(0x00010e44u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_10E46:
    /* 00010e46   2  rts */
    c->pc = RC_ADDR(0x00010e46u);
    rc_ret(c, m);
    return;

}
