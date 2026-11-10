/* fn_00009b60 - 70 byte(s), 18 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009b60(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00009b60u): goto L_9B60;
    case RC_ADDR(0x00009b64u): goto L_9B64;
    case RC_ADDR(0x00009b68u): goto L_9B68;
    case RC_ADDR(0x00009b6au): goto L_9B6A;
    case RC_ADDR(0x00009b6eu): goto L_9B6E;
    case RC_ADDR(0x00009b74u): goto L_9B74;
    case RC_ADDR(0x00009b76u): goto L_9B76;
    case RC_ADDR(0x00009b7au): goto L_9B7A;
    case RC_ADDR(0x00009b7cu): goto L_9B7C;
    case RC_ADDR(0x00009b82u): goto L_9B82;
    case RC_ADDR(0x00009b88u): goto L_9B88;
    case RC_ADDR(0x00009b8eu): goto L_9B8E;
    case RC_ADDR(0x00009b94u): goto L_9B94;
    case RC_ADDR(0x00009b96u): goto L_9B96;
    case RC_ADDR(0x00009b9au): goto L_9B9A;
    case RC_ADDR(0x00009b9cu): goto L_9B9C;
    case RC_ADDR(0x00009ba2u): goto L_9BA2;
    case RC_ADDR(0x00009ba4u): goto L_9BA4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9B60:
    /* 00009b60   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00009b60u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9B64:
    /* 00009b64   4  move.l (e,A5),D0 */
    c->pc = RC_ADDR(0x00009b64u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B68:
    /* 00009b68   2  lsr.l #1,D0 */
    c->pc = RC_ADDR(0x00009b68u);
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_9B6A:
    /* 00009b6a   4  move.l D0,(e,A5) */
    c->pc = RC_ADDR(0x00009b6au);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B6E:
    /* 00009b6e   6  movea.l #dff0a0,A0 */
    c->pc = RC_ADDR(0x00009b6eu);
    t0 = 0x00dff0a0u;
    c->a[0] = t0;

L_9B74:
    /* 00009b74   2  clr.l D0 */
    c->pc = RC_ADDR(0x00009b74u);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9B76:
    /* 00009b76   4  move.w (12,A5),D0 */
    c->pc = RC_ADDR(0x00009b76u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9B7A:
    /* 00009b7a   2  lsl.w #4,D0 */
    c->pc = RC_ADDR(0x00009b7au);
    c->d[0] = rc_shift(c, 1, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W);

L_9B7C:
    /* 00009b7c   6  move.l (8,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00009b7cu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B82:
    /* 00009b82   6  move.w (c,A5),(6,A0,D0.w) */
    c->pc = RC_ADDR(0x00009b82u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x6u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9B88:
    /* 00009b88   6  move.w (10,A5),(4,A0,D0.w) */
    c->pc = RC_ADDR(0x00009b88u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x4u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9B8E:
    /* 00009b8e   6  move.w (14,A5),(8,A0,D0.w) */
    c->pc = RC_ADDR(0x00009b8eu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x8u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9B94:
    /* 00009b94   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x00009b94u);
    c->d[0] = rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W);

L_9B96:
    /* 00009b96   4  move.w #8200,D1 */
    c->pc = RC_ADDR(0x00009b96u);
    t0 = 0x00008200u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9B9A:
    /* 00009b9a   2  bset D0,D1 */
    c->pc = RC_ADDR(0x00009b9au);
    t4 = c->d[0] & 7u;
    t0 = rc_d_get(c, 1, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_B, t2);

L_9B9C:
    /* 00009b9c   6  move.w D1,(00dff096).l */
    c->pc = RC_ADDR(0x00009b9cu);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, RC_ADDR(0x00dff096u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9BA2:
    /* 00009ba2   2  unlk A5 */
    c->pc = RC_ADDR(0x00009ba2u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9BA4:
    /* 00009ba4   2  rts */
    c->pc = RC_ADDR(0x00009ba4u);
    rc_ret(c, m);
    return;

}
