/* fn_0000fbea - 100 byte(s), 39 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000fbea(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000fbeau): goto L_FBEA;
    case RC_ADDR(0x0000fbeeu): goto L_FBEE;
    case RC_ADDR(0x0000fbf2u): goto L_FBF2;
    case RC_ADDR(0x0000fbf6u): goto L_FBF6;
    case RC_ADDR(0x0000fbfau): goto L_FBFA;
    case RC_ADDR(0x0000fbfcu): goto L_FBFC;
    case RC_ADDR(0x0000fc00u): goto L_FC00;
    case RC_ADDR(0x0000fc02u): goto L_FC02;
    case RC_ADDR(0x0000fc04u): goto L_FC04;
    case RC_ADDR(0x0000fc06u): goto L_FC06;
    case RC_ADDR(0x0000fc08u): goto L_FC08;
    case RC_ADDR(0x0000fc0cu): goto L_FC0C;
    case RC_ADDR(0x0000fc0eu): goto L_FC0E;
    case RC_ADDR(0x0000fc12u): goto L_FC12;
    case RC_ADDR(0x0000fc14u): goto L_FC14;
    case RC_ADDR(0x0000fc16u): goto L_FC16;
    case RC_ADDR(0x0000fc18u): goto L_FC18;
    case RC_ADDR(0x0000fc1cu): goto L_FC1C;
    case RC_ADDR(0x0000fc1eu): goto L_FC1E;
    case RC_ADDR(0x0000fc20u): goto L_FC20;
    case RC_ADDR(0x0000fc22u): goto L_FC22;
    case RC_ADDR(0x0000fc24u): goto L_FC24;
    case RC_ADDR(0x0000fc26u): goto L_FC26;
    case RC_ADDR(0x0000fc28u): goto L_FC28;
    case RC_ADDR(0x0000fc2au): goto L_FC2A;
    case RC_ADDR(0x0000fc2cu): goto L_FC2C;
    case RC_ADDR(0x0000fc2eu): goto L_FC2E;
    case RC_ADDR(0x0000fc30u): goto L_FC30;
    case RC_ADDR(0x0000fc32u): goto L_FC32;
    case RC_ADDR(0x0000fc34u): goto L_FC34;
    case RC_ADDR(0x0000fc36u): goto L_FC36;
    case RC_ADDR(0x0000fc38u): goto L_FC38;
    case RC_ADDR(0x0000fc3au): goto L_FC3A;
    case RC_ADDR(0x0000fc3eu): goto L_FC3E;
    case RC_ADDR(0x0000fc40u): goto L_FC40;
    case RC_ADDR(0x0000fc42u): goto L_FC42;
    case RC_ADDR(0x0000fc46u): goto L_FC46;
    case RC_ADDR(0x0000fc48u): goto L_FC48;
    case RC_ADDR(0x0000fc4cu): goto L_FC4C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_FBEA:
    /* 0000fbea   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0000fbeau);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_FBEE:
    /* 0000fbee   4  movea.l (4,A0),A1 */
    c->pc = RC_ADDR(0x0000fbeeu);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[1] = t0;

L_FBF2:
    /* 0000fbf2   4  lea (8,A0),A0 */
    c->pc = RC_ADDR(0x0000fbf2u);
    c->a[0] = (c->a[0] + 0x8u);

L_FBF6:
    /* 0000fbf6   4  lea (0000fc4e),A2 */
    c->pc = RC_ADDR(0x0000fbf6u);
    c->a[2] = RC_ADDR(0x0000fc4eu);

L_FBFA:
    /* 0000fbfa   2  clr.w D3 */
    c->pc = RC_ADDR(0x0000fbfau);
    rc_d_set(c, 3, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_FBFC:
    /* 0000fbfc   4  move.b (7f,A0),D4 */
    c->pc = RC_ADDR(0x0000fbfcu);
    t0 = rc_rd8(c, m, (c->a[0] + 0x7fu));
    rc_d_set(c, 4, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_FC00:
    /* 0000fc00   2  ext.w D4 */
    c->pc = RC_ADDR(0x0000fc00u);
    rc_ext_w(c, 4);

L_FC02:
    /* 0000fc02   2  asl.w #7,D4 */
    c->pc = RC_ADDR(0x0000fc02u);
    c->d[4] = rc_shift(c, 0, 1, 0x00000007u, rc_d_get(c, 4, RC_W), RC_W);

L_FC04:
    /* 0000fc04   2  clr.w D0 */
    c->pc = RC_ADDR(0x0000fc04u);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_FC06:
    /* 0000fc06   2  move.w (A2)+,D1 */
    c->pc = RC_ADDR(0x0000fc06u);
    t3 = c->a[2];
    c->a[2] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FC08:
    /* 0000fc08   4  move.w #8000,D2 */
    c->pc = RC_ADDR(0x0000fc08u);
    t0 = 0x00008000u;
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FC0C:
    /* 0000fc0c   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0000fc0cu);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_FC0E:
    /* 0000fc0e   4  mulu.w #e666,D2 */
    c->pc = RC_ADDR(0x0000fc0eu);
    t0 = 0x0000e666u;
    rc_mulu(c, 2, t0);

L_FC12:
    /* 0000fc12   2  swap D2 */
    c->pc = RC_ADDR(0x0000fc12u);
    t0 = c->d[2];
    c->d[2] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[2], RC_L);

L_FC14:
    /* 0000fc14   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000fc14u);
    c->d[1] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_FC16:
    /* 0000fc16   2  clr.w D5 */
    c->pc = RC_ADDR(0x0000fc16u);
    rc_d_set(c, 5, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_FC18:
    /* 0000fc18   4  move.b (0,A0,D5.w),D6 */
    c->pc = RC_ADDR(0x0000fc18u);
    t4 = rc_ext(c->d[5], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 6, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_FC1C:
    /* 0000fc1c   2  ext.w D6 */
    c->pc = RC_ADDR(0x0000fc1cu);
    rc_ext_w(c, 6);

L_FC1E:
    /* 0000fc1e   2  asl.w #7,D6 */
    c->pc = RC_ADDR(0x0000fc1eu);
    c->d[6] = rc_shift(c, 0, 1, 0x00000007u, rc_d_get(c, 6, RC_W), RC_W);

L_FC20:
    /* 0000fc20   2  sub.w D4,D6 */
    c->pc = RC_ADDR(0x0000fc20u);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_FC22:
    /* 0000fc22   2  muls.w D1,D6 */
    c->pc = RC_ADDR(0x0000fc22u);
    t0 = rc_d_get(c, 1, RC_W);
    rc_muls(c, 6, t0);

L_FC24:
    /* 0000fc24   2  asl.l #2,D6 */
    c->pc = RC_ADDR(0x0000fc24u);
    c->d[6] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 6, RC_L), RC_L);

L_FC26:
    /* 0000fc26   2  swap D6 */
    c->pc = RC_ADDR(0x0000fc26u);
    t0 = c->d[6];
    c->d[6] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[6], RC_L);

L_FC28:
    /* 0000fc28   2  add.w D6,D3 */
    c->pc = RC_ADDR(0x0000fc28u);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_FC2A:
    /* 0000fc2a   2  add.w D3,D4 */
    c->pc = RC_ADDR(0x0000fc2au);
    t0 = rc_d_get(c, 3, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_FC2C:
    /* 0000fc2c   2  ror.w #7,D4 */
    c->pc = RC_ADDR(0x0000fc2cu);
    c->d[4] = rc_shift(c, 3, 0, 0x00000007u, rc_d_get(c, 4, RC_W), RC_W);

L_FC2E:
    /* 0000fc2e   2  move.b D4,(A1)+ */
    c->pc = RC_ADDR(0x0000fc2eu);
    t0 = rc_d_get(c, 4, RC_B);
    t3 = c->a[1];
    c->a[1] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_FC30:
    /* 0000fc30   2  rol.w #7,D4 */
    c->pc = RC_ADDR(0x0000fc30u);
    c->d[4] = rc_shift(c, 3, 1, 0x00000007u, rc_d_get(c, 4, RC_W), RC_W);

L_FC32:
    /* 0000fc32   2  muls.w D2,D3 */
    c->pc = RC_ADDR(0x0000fc32u);
    t0 = rc_d_get(c, 2, RC_W);
    rc_muls(c, 3, t0);

L_FC34:
    /* 0000fc34   2  asl.l #1,D3 */
    c->pc = RC_ADDR(0x0000fc34u);
    c->d[3] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 3, RC_L), RC_L);

L_FC36:
    /* 0000fc36   2  swap D3 */
    c->pc = RC_ADDR(0x0000fc36u);
    t0 = c->d[3];
    c->d[3] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[3], RC_L);

L_FC38:
    /* 0000fc38   2  addq.w #1,D5 */
    c->pc = RC_ADDR(0x0000fc38u);
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_FC3A:
    /* 0000fc3a   4  cmpi.w #80,D5 */
    c->pc = RC_ADDR(0x0000fc3au);
    t0 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000080u);

L_FC3E:
    /* 0000fc3e   2  bcs 0000fc18 */
    c->pc = RC_ADDR(0x0000fc3eu);
    if (rc_cond(c, 5)) { rc_tick(); goto L_FC18; }

L_FC40:
    /* 0000fc40   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000fc40u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FC42:
    /* 0000fc42   4  cmpi.w #40,D0 */
    c->pc = RC_ADDR(0x0000fc42u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000040u);

L_FC46:
    /* 0000fc46   2  bne 0000fc06 */
    c->pc = RC_ADDR(0x0000fc46u);
    if (rc_cond(c, 6)) { rc_tick(); goto L_FC06; }

L_FC48:
    /* 0000fc48   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0000fc48u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_FC4C:
    /* 0000fc4c   2  rts */
    c->pc = RC_ADDR(0x0000fc4cu);
    rc_ret(c, m);
    return;

}
