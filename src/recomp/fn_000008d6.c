/* fn_000008d6 - 100 byte(s), 30 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000008d6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000008d6u): goto L_8D6;
    case RC_ADDR(0x000008dau): goto L_8DA;
    case RC_ADDR(0x000008dcu): goto L_8DC;
    case RC_ADDR(0x000008e0u): goto L_8E0;
    case RC_ADDR(0x000008e4u): goto L_8E4;
    case RC_ADDR(0x000008e6u): goto L_8E6;
    case RC_ADDR(0x000008eau): goto L_8EA;
    case RC_ADDR(0x000008eeu): goto L_8EE;
    case RC_ADDR(0x000008f0u): goto L_8F0;
    case RC_ADDR(0x000008f2u): goto L_8F2;
    case RC_ADDR(0x000008f6u): goto L_8F6;
    case RC_ADDR(0x000008fau): goto L_8FA;
    case RC_ADDR(0x000008feu): goto L_8FE;
    case RC_ADDR(0x00000902u): goto L_902;
    case RC_ADDR(0x00000904u): goto L_904;
    case RC_ADDR(0x00000908u): goto L_908;
    case RC_ADDR(0x0000090cu): goto L_90C;
    case RC_ADDR(0x0000090eu): goto L_90E;
    case RC_ADDR(0x00000912u): goto L_912;
    case RC_ADDR(0x00000914u): goto L_914;
    case RC_ADDR(0x00000918u): goto L_918;
    case RC_ADDR(0x0000091au): goto L_91A;
    case RC_ADDR(0x0000091eu): goto L_91E;
    case RC_ADDR(0x00000920u): goto L_920;
    case RC_ADDR(0x00000924u): goto L_924;
    case RC_ADDR(0x0000092au): goto L_92A;
    case RC_ADDR(0x0000092eu): goto L_92E;
    case RC_ADDR(0x00000934u): goto L_934;
    case RC_ADDR(0x00000936u): goto L_936;
    case RC_ADDR(0x00000938u): goto L_938;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_8D6:
    /* 000008d6   4  link.w A5,#fffffffe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000008d6u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_8DA:
    /* 000008da   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000008dau);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_8DC:
    /* 000008dc   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000008dcu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8E0:
    /* 000008e0   4  jsr (ffff838c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000008e0u);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x000008e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x000218eau);
    return;

L_8E4:
    /* 000008e4   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000008e4u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_8E6:
    /* 000008e6   4  pea (000000c7).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000008e6u);
    rc_push32(c, m, 0x000000c7u);

L_8EA:
    /* 000008ea   4  pea (0000013f).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000008eau);
    rc_push32(c, m, 0x0000013fu);

L_8EE:
    /* 000008ee   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000008eeu);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_8F0:
    /* 000008f0   2  clr.l -(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000008f0u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_8F2:
    /* 000008f2   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000008f2u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8F6:
    /* 000008f6   4  jsr (ffff8386,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000008f6u);
    /* vector 150 */
    rc_push32(c, m, RC_ADDR(0x000008fau));
    rc_depth++;
    c->pc = RC_ADDR(0x000218d8u);
    return;

L_8FA:
    /* 000008fa   4  lea (14,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000008fau);
    c->a[7] = (c->a[7] + 0x14u);

L_8FE:
    /* 000008fe   4  tst.w (ffff8504,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000008feu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7afcu));
    rc_set_nzvc(c, t0, RC_W);

L_902:
    /* 00000902   2  beq 00000936 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000902u);
    if (rc_cond(c, 7)) goto L_936;

L_904:
    /* 00000904   4  clr.w (ffff8504,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000904u);
    rc_wr16(c, m, (c->a[4] - 0x7afcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_908:
    /* 00000908   4  clr.w (fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000908u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_90C:
    /* 0000090c   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000090cu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_90E:
    /* 0000090e   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000090eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_912:
    /* 00000912   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000912u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_914:
    /* 00000914   4  lea (fffffe42,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000914u);
    c->a[0] = (c->a[4] - 0x1beu);

L_918:
    /* 00000918   2  moveq #0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000918u);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_91A:
    /* 0000091a   4  move.w (fffffffe,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000091au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_91E:
    /* 0000091e   2  asl.l #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000091eu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_920:
    /* 00000920   4  lea (fffffe7c,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000920u);
    c->a[1] = (c->a[4] - 0x184u);

L_924:
    /* 00000924   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000924u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_92A:
    /* 0000092a   4  addq.w #1,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000092au);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_92E:
    /* 0000092e   6  cmpi.w #5,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000092eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_934:
    /* 00000934   2  bcs 0000090c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000934u);
    if (rc_cond(c, 5)) { rc_tick(); goto L_90C; }

L_936:
    /* 00000936   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000936u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_938:
    /* 00000938   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00000938u);
    rc_ret(c, m);
    return;

}
