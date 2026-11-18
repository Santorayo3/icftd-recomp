/* fn_00022d80 - 36 byte(s), 16 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022d80(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00022d80u): goto L_22D80;
    case RC_ADDR(0x00022d84u): goto L_22D84;
    case RC_ADDR(0x00022d86u): goto L_22D86;
    case RC_ADDR(0x00022d88u): goto L_22D88;
    case RC_ADDR(0x00022d8au): goto L_22D8A;
    case RC_ADDR(0x00022d8cu): goto L_22D8C;
    case RC_ADDR(0x00022d8eu): goto L_22D8E;
    case RC_ADDR(0x00022d90u): goto L_22D90;
    case RC_ADDR(0x00022d92u): goto L_22D92;
    case RC_ADDR(0x00022d94u): goto L_22D94;
    case RC_ADDR(0x00022d96u): goto L_22D96;
    case RC_ADDR(0x00022d98u): goto L_22D98;
    case RC_ADDR(0x00022d9au): goto L_22D9A;
    case RC_ADDR(0x00022d9cu): goto L_22D9C;
    case RC_ADDR(0x00022d9eu): goto L_22D9E;
    case RC_ADDR(0x00022da2u): goto L_22DA2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22D80:
    /* 00022d80   4  movem.l { A4 A5 A6 },-(SP) */
    c->pc = RC_ADDR(0x00022d80u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    c->a[7] = t3;

L_22D84:
    /* 00022d84   2  move.w D1,D2 */
    c->pc = RC_ADDR(0x00022d84u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22D86:
    /* 00022d86   2  mulu.w D0,D2 */
    c->pc = RC_ADDR(0x00022d86u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 0, RC_W);
    rc_mulu(c, 2, t0);

L_22D88:
    /* 00022d88   2  move.l D1,D3 */
    c->pc = RC_ADDR(0x00022d88u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 3, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22D8A:
    /* 00022d8a   2  swap D3 */
    c->pc = RC_ADDR(0x00022d8au);
    rc_step(c, m, 4);
    t0 = c->d[3];
    c->d[3] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[3], RC_L);

L_22D8C:
    /* 00022d8c   2  mulu.w D0,D3 */
    c->pc = RC_ADDR(0x00022d8cu);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 0, RC_W);
    rc_mulu(c, 3, t0);

L_22D8E:
    /* 00022d8e   2  swap D3 */
    c->pc = RC_ADDR(0x00022d8eu);
    rc_step(c, m, 4);
    t0 = c->d[3];
    c->d[3] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[3], RC_L);

L_22D90:
    /* 00022d90   2  clr.w D3 */
    c->pc = RC_ADDR(0x00022d90u);
    rc_step(c, m, 4);
    rc_d_set(c, 3, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_22D92:
    /* 00022d92   2  add.l D3,D2 */
    c->pc = RC_ADDR(0x00022d92u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_22D94:
    /* 00022d94   2  swap D0 */
    c->pc = RC_ADDR(0x00022d94u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_22D96:
    /* 00022d96   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x00022d96u);
    rc_step(c, m, 38);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_22D98:
    /* 00022d98   2  swap D0 */
    c->pc = RC_ADDR(0x00022d98u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_22D9A:
    /* 00022d9a   2  clr.w D0 */
    c->pc = RC_ADDR(0x00022d9au);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_22D9C:
    /* 00022d9c   2  add.l D2,D0 */
    c->pc = RC_ADDR(0x00022d9cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_22D9E:
    /* 00022d9e   4  movem.l (SP)+,{ D1 D2 D3 } */
    c->pc = RC_ADDR(0x00022d9eu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_22DA2:
    /* 00022da2   2  rts */
    c->pc = RC_ADDR(0x00022da2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
