/* fn_00021976 - 64 byte(s), 25 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021976(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021976u): goto L_21976;
    case RC_ADDR(0x0002197au): goto L_2197A;
    case RC_ADDR(0x0002197eu): goto L_2197E;
    case RC_ADDR(0x00021980u): goto L_21980;
    case RC_ADDR(0x00021982u): goto L_21982;
    case RC_ADDR(0x00021984u): goto L_21984;
    case RC_ADDR(0x00021986u): goto L_21986;
    case RC_ADDR(0x0002198au): goto L_2198A;
    case RC_ADDR(0x0002198cu): goto L_2198C;
    case RC_ADDR(0x0002198eu): goto L_2198E;
    case RC_ADDR(0x00021990u): goto L_21990;
    case RC_ADDR(0x00021992u): goto L_21992;
    case RC_ADDR(0x00021996u): goto L_21996;
    case RC_ADDR(0x00021998u): goto L_21998;
    case RC_ADDR(0x0002199au): goto L_2199A;
    case RC_ADDR(0x0002199cu): goto L_2199C;
    case RC_ADDR(0x0002199eu): goto L_2199E;
    case RC_ADDR(0x000219a0u): goto L_219A0;
    case RC_ADDR(0x000219a2u): goto L_219A2;
    case RC_ADDR(0x000219a6u): goto L_219A6;
    case RC_ADDR(0x000219a8u): goto L_219A8;
    case RC_ADDR(0x000219aau): goto L_219AA;
    case RC_ADDR(0x000219aeu): goto L_219AE;
    case RC_ADDR(0x000219b2u): goto L_219B2;
    case RC_ADDR(0x000219b4u): goto L_219B4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21976:
    /* 00021976   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00021976u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_2197A:
    /* 0002197a   4  move.w (e,A5),D0 */
    c->pc = RC_ADDR(0x0002197au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2197E:
    /* 0002197e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0002197eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_21980:
    /* 00021980   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00021980u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_21982:
    /* 00021982   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00021982u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_21984:
    /* 00021984   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00021984u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21986:
    /* 00021986   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x00021986u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2198A:
    /* 0002198a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0002198au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_2198C:
    /* 0002198c   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0002198cu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_2198E:
    /* 0002198e   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x0002198eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_21990:
    /* 00021990   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00021990u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21992:
    /* 00021992   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x00021992u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21996:
    /* 00021996   2  ext.l D0 */
    c->pc = RC_ADDR(0x00021996u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_21998:
    /* 00021998   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00021998u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_2199A:
    /* 0002199a   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x0002199au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_2199C:
    /* 0002199c   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0002199cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2199E:
    /* 0002199e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0002199eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_219A0:
    /* 000219a0   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000219a0u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_219A2:
    /* 000219a2   4  move.b (9,A5),D0 */
    c->pc = RC_ADDR(0x000219a2u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0x9u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_219A6:
    /* 000219a6   2  ext.w D0 */
    c->pc = RC_ADDR(0x000219a6u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_219A8:
    /* 000219a8   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000219a8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_219AA:
    /* 000219aa   4  jsr (00021350) */
    c->pc = RC_ADDR(0x000219aau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000219aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021350u);
    return;

L_219AE:
    /* 000219ae   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x000219aeu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_219B2:
    /* 000219b2   2  unlk A5 */
    c->pc = RC_ADDR(0x000219b2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_219B4:
    /* 000219b4   2  rts */
    c->pc = RC_ADDR(0x000219b4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
