/* fn_00020c0c - 72 byte(s), 22 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00020c0c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00020c0cu): goto L_20C0C;
    case RC_ADDR(0x00020c10u): goto L_20C10;
    case RC_ADDR(0x00020c14u): goto L_20C14;
    case RC_ADDR(0x00020c16u): goto L_20C16;
    case RC_ADDR(0x00020c18u): goto L_20C18;
    case RC_ADDR(0x00020c1au): goto L_20C1A;
    case RC_ADDR(0x00020c1eu): goto L_20C1E;
    case RC_ADDR(0x00020c22u): goto L_20C22;
    case RC_ADDR(0x00020c24u): goto L_20C24;
    case RC_ADDR(0x00020c28u): goto L_20C28;
    case RC_ADDR(0x00020c2cu): goto L_20C2C;
    case RC_ADDR(0x00020c2eu): goto L_20C2E;
    case RC_ADDR(0x00020c32u): goto L_20C32;
    case RC_ADDR(0x00020c36u): goto L_20C36;
    case RC_ADDR(0x00020c3au): goto L_20C3A;
    case RC_ADDR(0x00020c3cu): goto L_20C3C;
    case RC_ADDR(0x00020c40u): goto L_20C40;
    case RC_ADDR(0x00020c44u): goto L_20C44;
    case RC_ADDR(0x00020c48u): goto L_20C48;
    case RC_ADDR(0x00020c4au): goto L_20C4A;
    case RC_ADDR(0x00020c4eu): goto L_20C4E;
    case RC_ADDR(0x00020c52u): goto L_20C52;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20C0C:
    /* 00020c0c   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x00020c0cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_20C10:
    /* 00020c10   4  tst.w (ffffd284,A4) */
    c->pc = RC_ADDR(0x00020c10u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d7cu));
    rc_set_nzvc(c, t0, RC_W);

L_20C14:
    /* 00020c14   2  bne 00020c1a */
    c->pc = RC_ADDR(0x00020c14u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_20C1A;

L_20C16:
    /* 00020c16   2  unlk A5 */
    c->pc = RC_ADDR(0x00020c16u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_20C18:
    /* 00020c18   2  rts */
    c->pc = RC_ADDR(0x00020c18u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_20C1A:
    /* 00020c1a   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x00020c1au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20C1E:
    /* 00020c1e   4  jsr (ffff824e,A4) */
    c->pc = RC_ADDR(0x00020c1eu);
    rc_step(c, m, 18);
    /* vector 98 */
    rc_push32(c, m, RC_ADDR(0x00020c22u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d44u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ff16u);
    return;

L_20C22:
    /* 00020c22   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020c22u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20C24:
    /* 00020c24   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00020c24u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20C28:
    /* 00020c28   4  tst.l (14,A5) */
    c->pc = RC_ADDR(0x00020c28u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_set_nzvc(c, t0, RC_L);

L_20C2C:
    /* 00020c2c   2  bne 00020c36 */
    c->pc = RC_ADDR(0x00020c2cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_20C36;

L_20C2E:
    /* 00020c2e   4  lea (ffff829c,A4),A0 */
    c->pc = RC_ADDR(0x00020c2eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7d64u);

L_20C32:
    /* 00020c32   4  move.l A0,(14,A5) */
    c->pc = RC_ADDR(0x00020c32u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20C36:
    /* 00020c36   4  tst.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x00020c36u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_20C3A:
    /* 00020c3a   2  beq 00020c4a */
    c->pc = RC_ADDR(0x00020c3au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20C4A;

L_20C3C:
    /* 00020c3c   4  move.l (14,A5),-(A7) */
    c->pc = RC_ADDR(0x00020c3cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20C40:
    /* 00020c40   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00020c40u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20C44:
    /* 00020c44   4  jsr (ffff8218,A4) */
    c->pc = RC_ADDR(0x00020c44u);
    rc_step(c, m, 18);
    /* vector 89 */
    rc_push32(c, m, RC_ADDR(0x00020c48u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d0eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f34cu);
    return;

L_20C48:
    /* 00020c48   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020c48u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20C4A:
    /* 00020c4a   4  jsr (ffff8284,A4) */
    c->pc = RC_ADDR(0x00020c4au);
    rc_step(c, m, 18);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x00020c4eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d7au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021320u);
    return;

L_20C4E:
    /* 00020c4e   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x00020c4eu);
    rc_step(c, m, 18);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x00020c52u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d32u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f814u);
    return;

L_20C52:
    /* 00020c52   2  bra 00020c16 */
    c->pc = RC_ADDR(0x00020c52u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_20C16;

}
