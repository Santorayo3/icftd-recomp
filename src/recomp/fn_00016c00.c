/* fn_00016c00 - 92 byte(s), 28 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016c00(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00016c00u): goto L_16C00;
    case RC_ADDR(0x00016c04u): goto L_16C04;
    case RC_ADDR(0x00016c08u): goto L_16C08;
    case RC_ADDR(0x00016c0cu): goto L_16C0C;
    case RC_ADDR(0x00016c10u): goto L_16C10;
    case RC_ADDR(0x00016c12u): goto L_16C12;
    case RC_ADDR(0x00016c16u): goto L_16C16;
    case RC_ADDR(0x00016c18u): goto L_16C18;
    case RC_ADDR(0x00016c1cu): goto L_16C1C;
    case RC_ADDR(0x00016c20u): goto L_16C20;
    case RC_ADDR(0x00016c22u): goto L_16C22;
    case RC_ADDR(0x00016c26u): goto L_16C26;
    case RC_ADDR(0x00016c2au): goto L_16C2A;
    case RC_ADDR(0x00016c2cu): goto L_16C2C;
    case RC_ADDR(0x00016c30u): goto L_16C30;
    case RC_ADDR(0x00016c32u): goto L_16C32;
    case RC_ADDR(0x00016c36u): goto L_16C36;
    case RC_ADDR(0x00016c38u): goto L_16C38;
    case RC_ADDR(0x00016c3cu): goto L_16C3C;
    case RC_ADDR(0x00016c3eu): goto L_16C3E;
    case RC_ADDR(0x00016c42u): goto L_16C42;
    case RC_ADDR(0x00016c46u): goto L_16C46;
    case RC_ADDR(0x00016c4au): goto L_16C4A;
    case RC_ADDR(0x00016c4eu): goto L_16C4E;
    case RC_ADDR(0x00016c52u): goto L_16C52;
    case RC_ADDR(0x00016c54u): goto L_16C54;
    case RC_ADDR(0x00016c58u): goto L_16C58;
    case RC_ADDR(0x00016c5au): goto L_16C5A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16C00:
    /* 00016c00   4  link.w A5,#fffffff6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c00u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_16C04:
    /* 00016c04   4  pea (000003ed).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c04u);
    rc_push32(c, m, 0x000003edu);

L_16C08:
    /* 00016c08   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c08u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16C0C:
    /* 00016c0c   4  jsr (ffff8290,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c0cu);
    /* vector 109 */
    rc_push32(c, m, RC_ADDR(0x00016c10u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020476u);
    return;

L_16C10:
    /* 00016c10   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c10u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16C12:
    /* 00016c12   4  move.l D0,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c12u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16C16:
    /* 00016c16   2  beq 00016c58 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c16u);
    if (rc_cond(c, 7)) goto L_16C58;

L_16C18:
    /* 00016c18   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c18u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16C1C:
    /* 00016c1c   4  jsr (ffff829c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c1cu);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x00016c20u));
    rc_depth++;
    c->pc = RC_ADDR(0x000205e6u);
    return;

L_16C20:
    /* 00016c20   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c20u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_16C22:
    /* 00016c22   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c22u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16C26:
    /* 00016c26   4  jsr (ffff8296,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c26u);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x00016c2au));
    rc_depth++;
    c->pc = RC_ADDR(0x00020490u);
    return;

L_16C2A:
    /* 00016c2a   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c2au);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_16C2C:
    /* 00016c2c   4  clr.w (fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c2cu);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16C30:
    /* 00016c30   2  bra 00016c4a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c30u);
    goto L_16C4A;

L_16C32:
    /* 00016c32   4  jsr (00016ac4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c32u);
    rc_push32(c, m, RC_ADDR(0x00016c36u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016ac4u);
    return;

L_16C36:
    /* 00016c36   2  moveq #0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c36u);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_16C38:
    /* 00016c38   4  move.w (fffffff6,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c38u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16C3C:
    /* 00016c3c   2  asl.l #2,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c3cu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_16C3E:
    /* 00016c3e   4  movea.l (e,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c3eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0xeu));
    c->a[0] = t0;

L_16C42:
    /* 00016c42   4  move.l D0,(0,A0,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c42u);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16C46:
    /* 00016c46   4  addq.w #1,(fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c46u);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16C4A:
    /* 00016c4a   4  move.w (fffffff6,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c4au);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16C4E:
    /* 00016c4e   4  cmp.w (c,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c4eu);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16C52:
    /* 00016c52   2  bcs 00016c32 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c52u);
    if (rc_cond(c, 5)) { rc_tick(); goto L_16C32; }

L_16C54:
    /* 00016c54   4  jsr (ffff82a2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c54u);
    /* vector 112 */
    rc_push32(c, m, RC_ADDR(0x00016c58u));
    rc_depth++;
    c->pc = RC_ADDR(0x000207f0u);
    return;

L_16C58:
    /* 00016c58   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c58u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16C5A:
    /* 00016c5a   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c5au);
    rc_ret(c, m);
    return;

}
