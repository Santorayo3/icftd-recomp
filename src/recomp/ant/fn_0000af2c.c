/* fn_0000af2c - 70 byte(s), 18 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000af2c(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000af2cu): goto L_AF2C;
    case RC_ADDR(0x0000af30u): goto L_AF30;
    case RC_ADDR(0x0000af34u): goto L_AF34;
    case RC_ADDR(0x0000af36u): goto L_AF36;
    case RC_ADDR(0x0000af3au): goto L_AF3A;
    case RC_ADDR(0x0000af40u): goto L_AF40;
    case RC_ADDR(0x0000af42u): goto L_AF42;
    case RC_ADDR(0x0000af46u): goto L_AF46;
    case RC_ADDR(0x0000af48u): goto L_AF48;
    case RC_ADDR(0x0000af4eu): goto L_AF4E;
    case RC_ADDR(0x0000af54u): goto L_AF54;
    case RC_ADDR(0x0000af5au): goto L_AF5A;
    case RC_ADDR(0x0000af60u): goto L_AF60;
    case RC_ADDR(0x0000af62u): goto L_AF62;
    case RC_ADDR(0x0000af66u): goto L_AF66;
    case RC_ADDR(0x0000af68u): goto L_AF68;
    case RC_ADDR(0x0000af6eu): goto L_AF6E;
    case RC_ADDR(0x0000af70u): goto L_AF70;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_AF2C:
    /* 0000af2c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000af2cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_AF30:
    /* 0000af30   4  move.l (e,A5),D0 */
    c->pc = RC_ADDR(0x0000af30u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_AF34:
    /* 0000af34   2  lsr.l #1,D0 */
    c->pc = RC_ADDR(0x0000af34u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_AF36:
    /* 0000af36   4  move.l D0,(e,A5) */
    c->pc = RC_ADDR(0x0000af36u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_AF3A:
    /* 0000af3a   6  movea.l #dff0a0,A0 */
    c->pc = RC_ADDR(0x0000af3au);
    rc_step(c, m, 12);
    t0 = 0x00dff0a0u;
    c->a[0] = t0;

L_AF40:
    /* 0000af40   2  clr.l D0 */
    c->pc = RC_ADDR(0x0000af40u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_AF42:
    /* 0000af42   4  move.w (12,A5),D0 */
    c->pc = RC_ADDR(0x0000af42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AF46:
    /* 0000af46   2  lsl.w #4,D0 */
    c->pc = RC_ADDR(0x0000af46u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_AF48:
    /* 0000af48   6  move.l (8,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000af48u);
    rc_step(c, m, 30);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_AF4E:
    /* 0000af4e   6  move.w (c,A5),(6,A0,D0.w) */
    c->pc = RC_ADDR(0x0000af4eu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x6u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AF54:
    /* 0000af54   6  move.w (10,A5),(4,A0,D0.w) */
    c->pc = RC_ADDR(0x0000af54u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x4u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AF5A:
    /* 0000af5a   6  move.w (14,A5),(8,A0,D0.w) */
    c->pc = RC_ADDR(0x0000af5au);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x8u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AF60:
    /* 0000af60   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x0000af60u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_AF62:
    /* 0000af62   4  move.w #8200,D1 */
    c->pc = RC_ADDR(0x0000af62u);
    rc_step(c, m, 8);
    t0 = 0x00008200u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AF66:
    /* 0000af66   2  bset D0,D1 */
    c->pc = RC_ADDR(0x0000af66u);
    rc_step(c, m, 8);
    t4 = c->d[0] & 31u;
    t0 = rc_d_get(c, 1, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_L, t2);

L_AF68:
    /* 0000af68   6  move.w D1,(00dff096).l */
    c->pc = RC_ADDR(0x0000af68u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, 0x00dff096u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AF6E:
    /* 0000af6e   2  unlk A5 */
    c->pc = RC_ADDR(0x0000af6eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_AF70:
    /* 0000af70   2  rts */
    c->pc = RC_ADDR(0x0000af70u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
