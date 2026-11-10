/* fn_00015eb2 - 108 byte(s), 31 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00015eb2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00015eb2u): goto L_15EB2;
    case RC_ADDR(0x00015eb6u): goto L_15EB6;
    case RC_ADDR(0x00015ebau): goto L_15EBA;
    case RC_ADDR(0x00015ec0u): goto L_15EC0;
    case RC_ADDR(0x00015ec6u): goto L_15EC6;
    case RC_ADDR(0x00015ecau): goto L_15ECA;
    case RC_ADDR(0x00015eccu): goto L_15ECC;
    case RC_ADDR(0x00015ed0u): goto L_15ED0;
    case RC_ADDR(0x00015ed4u): goto L_15ED4;
    case RC_ADDR(0x00015ed6u): goto L_15ED6;
    case RC_ADDR(0x00015edau): goto L_15EDA;
    case RC_ADDR(0x00015edcu): goto L_15EDC;
    case RC_ADDR(0x00015ee0u): goto L_15EE0;
    case RC_ADDR(0x00015ee2u): goto L_15EE2;
    case RC_ADDR(0x00015ee6u): goto L_15EE6;
    case RC_ADDR(0x00015eeau): goto L_15EEA;
    case RC_ADDR(0x00015eecu): goto L_15EEC;
    case RC_ADDR(0x00015ef0u): goto L_15EF0;
    case RC_ADDR(0x00015ef2u): goto L_15EF2;
    case RC_ADDR(0x00015ef4u): goto L_15EF4;
    case RC_ADDR(0x00015ef8u): goto L_15EF8;
    case RC_ADDR(0x00015efeu): goto L_15EFE;
    case RC_ADDR(0x00015f02u): goto L_15F02;
    case RC_ADDR(0x00015f04u): goto L_15F04;
    case RC_ADDR(0x00015f06u): goto L_15F06;
    case RC_ADDR(0x00015f0au): goto L_15F0A;
    case RC_ADDR(0x00015f0cu): goto L_15F0C;
    case RC_ADDR(0x00015f10u): goto L_15F10;
    case RC_ADDR(0x00015f14u): goto L_15F14;
    case RC_ADDR(0x00015f18u): goto L_15F18;
    case RC_ADDR(0x00015f1cu): goto L_15F1C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15EB2:
    /* 00015eb2   4  move.w (4,A7),D0 */
    c->pc = RC_ADDR(0x00015eb2u);
    t0 = rc_rd16(c, m, (c->a[7] + 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15EB6:
    /* 00015eb6   4  move.w (6,A7),D1 */
    c->pc = RC_ADDR(0x00015eb6u);
    t0 = rc_rd16(c, m, (c->a[7] + 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15EBA:
    /* 00015eba   6  andi.l #ffff,D0 */
    c->pc = RC_ADDR(0x00015ebau);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 0, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_15EC0:
    /* 00015ec0   6  andi.l #ffff,D1 */
    c->pc = RC_ADDR(0x00015ec0u);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 1, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_15EC6:
    /* 00015ec6   4  divu.w #140,D0 */
    c->pc = RC_ADDR(0x00015ec6u);
    t0 = 0x00000140u;
    rc_divu(c, m, 0, t0);

L_15ECA:
    /* 00015eca   2  move.l D1,D3 */
    c->pc = RC_ADDR(0x00015ecau);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 3, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_15ECC:
    /* 00015ecc   4  divu.w #c8,D3 */
    c->pc = RC_ADDR(0x00015eccu);
    t0 = 0x000000c8u;
    rc_divu(c, m, 3, t0);

L_15ED0:
    /* 00015ed0   4  mulu.w #3c,D3 */
    c->pc = RC_ADDR(0x00015ed0u);
    t0 = 0x0000003cu;
    rc_mulu(c, 3, t0);

L_15ED4:
    /* 00015ed4   2  add.w D0,D3 */
    c->pc = RC_ADDR(0x00015ed4u);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_15ED6:
    /* 00015ed6   4  lea (ffffa21a,A4),A0 */
    c->pc = RC_ADDR(0x00015ed6u);
    c->a[0] = (c->a[4] - 0x5de6u);

L_15EDA:
    /* 00015eda   2  clr.l D2 */
    c->pc = RC_ADDR(0x00015edau);
    rc_d_set(c, 2, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_15EDC:
    /* 00015edc   4  move.b (0,A0,D3.w),D2 */
    c->pc = RC_ADDR(0x00015edcu);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_15EE0:
    /* 00015ee0   2  lsl.w #2,D2 */
    c->pc = RC_ADDR(0x00015ee0u);
    c->d[2] = rc_shift(c, 1, 1, 0x00000002u, rc_d_get(c, 2, RC_W), RC_W);

L_15EE2:
    /* 00015ee2   4  lea (b08,A4),A0 */
    c->pc = RC_ADDR(0x00015ee2u);
    c->a[0] = (c->a[4] + 0xb08u);

L_15EE6:
    /* 00015ee6   4  movea.l (0,A0,D2.w),A0 */
    c->pc = RC_ADDR(0x00015ee6u);
    t4 = rc_ext(c->d[2], RC_W);
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[0] = t0;

L_15EEA:
    /* 00015eea   2  swap D0 */
    c->pc = RC_ADDR(0x00015eeau);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_15EEC:
    /* 00015eec   4  divu.w #c8,D1 */
    c->pc = RC_ADDR(0x00015eecu);
    t0 = 0x000000c8u;
    rc_divu(c, m, 1, t0);

L_15EF0:
    /* 00015ef0   2  swap D1 */
    c->pc = RC_ADDR(0x00015ef0u);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_15EF2:
    /* 00015ef2   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x00015ef2u);
    c->d[0] = rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W);

L_15EF4:
    /* 00015ef4   4  mulu.w #14,D0 */
    c->pc = RC_ADDR(0x00015ef4u);
    t0 = 0x00000014u;
    rc_mulu(c, 0, t0);

L_15EF8:
    /* 00015ef8   6  andi.l #ffff,D1 */
    c->pc = RC_ADDR(0x00015ef8u);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 1, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_15EFE:
    /* 00015efe   4  divu.w #a,D1 */
    c->pc = RC_ADDR(0x00015efeu);
    t0 = 0x0000000au;
    rc_divu(c, m, 1, t0);

L_15F02:
    /* 00015f02   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x00015f02u);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15F04:
    /* 00015f04   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00015f04u);
    c->d[0] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_15F06:
    /* 00015f06   4  move.w (0,A0,D0.w),D0 */
    c->pc = RC_ADDR(0x00015f06u);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F0A:
    /* 00015f0a   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x00015f0au);
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_15F0C:
    /* 00015f0c   4  move.w D0,(12ac,A4) */
    c->pc = RC_ADDR(0x00015f0cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x12acu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15F10:
    /* 00015f10   4  movea.l (fffff318,A4),A0 */
    c->pc = RC_ADDR(0x00015f10u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xce8u));
    c->a[0] = t0;

L_15F14:
    /* 00015f14   4  move.b (0,A0,D0.w),D0 */
    c->pc = RC_ADDR(0x00015f14u);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_15F18:
    /* 00015f18   4  andi.w #ff,D0 */
    c->pc = RC_ADDR(0x00015f18u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x000000ffu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_15F1C:
    /* 00015f1c   2  rts */
    c->pc = RC_ADDR(0x00015f1cu);
    rc_ret(c, m);
    return;

}
