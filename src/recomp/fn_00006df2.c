/* fn_00006df2 - 96 byte(s), 30 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00006df2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00006df2u): goto L_6DF2;
    case RC_ADDR(0x00006df6u): goto L_6DF6;
    case RC_ADDR(0x00006dfau): goto L_6DFA;
    case RC_ADDR(0x00006dfeu): goto L_6DFE;
    case RC_ADDR(0x00006e00u): goto L_6E00;
    case RC_ADDR(0x00006e04u): goto L_6E04;
    case RC_ADDR(0x00006e08u): goto L_6E08;
    case RC_ADDR(0x00006e0cu): goto L_6E0C;
    case RC_ADDR(0x00006e0eu): goto L_6E0E;
    case RC_ADDR(0x00006e12u): goto L_6E12;
    case RC_ADDR(0x00006e16u): goto L_6E16;
    case RC_ADDR(0x00006e18u): goto L_6E18;
    case RC_ADDR(0x00006e1cu): goto L_6E1C;
    case RC_ADDR(0x00006e20u): goto L_6E20;
    case RC_ADDR(0x00006e24u): goto L_6E24;
    case RC_ADDR(0x00006e26u): goto L_6E26;
    case RC_ADDR(0x00006e28u): goto L_6E28;
    case RC_ADDR(0x00006e2cu): goto L_6E2C;
    case RC_ADDR(0x00006e32u): goto L_6E32;
    case RC_ADDR(0x00006e34u): goto L_6E34;
    case RC_ADDR(0x00006e36u): goto L_6E36;
    case RC_ADDR(0x00006e38u): goto L_6E38;
    case RC_ADDR(0x00006e48u): goto L_6E48;
    case RC_ADDR(0x00006e4cu): goto L_6E4C;
    case RC_ADDR(0x00006e50u): goto L_6E50;
    case RC_ADDR(0x00006e54u): goto L_6E54;
    case RC_ADDR(0x00006e56u): goto L_6E56;
    case RC_ADDR(0x00006e5au): goto L_6E5A;
    case RC_ADDR(0x00006e5cu): goto L_6E5C;
    case RC_ADDR(0x00006e5eu): goto L_6E5E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6DF2:
    /* 00006df2   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x00006df2u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_6DF6:
    /* 00006df6   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006df6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6DFA:
    /* 00006dfa   4  jsr (00001f44) */
    c->pc = RC_ADDR(0x00006dfau);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00006dfeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00001f44u);
    return;

L_6DFE:
    /* 00006dfe   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00006dfeu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_6E00:
    /* 00006e00   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00006e00u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6E04:
    /* 00006e04   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00006e04u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_6E08:
    /* 00006e08   4  move.b (1,A0),D0 */
    c->pc = RC_ADDR(0x00006e08u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_6E0C:
    /* 00006e0c   2  ext.w D0 */
    c->pc = RC_ADDR(0x00006e0cu);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_6E0E:
    /* 00006e0e   4  move.w D0,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00006e0eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6E12:
    /* 00006e12   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00006e12u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_6E16:
    /* 00006e16   2  addq.l #2,A0 */
    c->pc = RC_ADDR(0x00006e16u);
    rc_step(c, m);
    c->a[0] += 0x00000002u;

L_6E18:
    /* 00006e18   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00006e18u);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6E1C:
    /* 00006e1c   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00006e1cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6E20:
    /* 00006e20   4  subq.w #1,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00006e20u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x12u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6E24:
    /* 00006e24   2  tst.w D0 */
    c->pc = RC_ADDR(0x00006e24u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_6E26:
    /* 00006e26   2  beq 00006e5c */
    c->pc = RC_ADDR(0x00006e26u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_6E5C;

L_6E28:
    /* 00006e28   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00006e28u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_6E2C:
    /* 00006e2c   6  cmpi.b #64,(4,A0) */
    c->pc = RC_ADDR(0x00006e2cu);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_cmp(c, RC_B, t0, 0x00000064u);

L_6E32:
    /* 00006e32   2  bne 00006e48 */
    c->pc = RC_ADDR(0x00006e32u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_6E48;

L_6E34:
    /* 00006e34   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00006e34u);
    rc_step(c, m);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6E36:
    /* 00006e36   2  unlk A5 */
    c->pc = RC_ADDR(0x00006e36u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6E38:
    /* 00006e38   2  rts */
    c->pc = RC_ADDR(0x00006e38u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_6E48:
    /* 00006e48   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00006e48u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_6E4C:
    /* 00006e4c   4  move.l (A0),(fffffff0,A5) */
    c->pc = RC_ADDR(0x00006e4cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6E50:
    /* 00006e50   4  movea.l (fffffff0,A5),A0 */
    c->pc = RC_ADDR(0x00006e50u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_6E54:
    /* 00006e54   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x00006e54u);
    rc_step(c, m);
    c->a[0] += 0x00000004u;

L_6E56:
    /* 00006e56   4  move.l A0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00006e56u);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6E5A:
    /* 00006e5a   2  bra 00006e1c */
    c->pc = RC_ADDR(0x00006e5au);
    rc_step(c, m);
    rc_tick();
    goto L_6E1C;

L_6E5C:
    /* 00006e5c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00006e5cu);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_6E5E:
    /* 00006e5e   2  bra 00006e36 */
    c->pc = RC_ADDR(0x00006e5eu);
    rc_step(c, m);
    rc_tick();
    goto L_6E36;

}
