/* fn_00004e84 - 134 byte(s), 39 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00004e84(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00004e84u): goto L_4E84;
    case RC_ADDR(0x00004e88u): goto L_4E88;
    case RC_ADDR(0x00004e8cu): goto L_4E8C;
    case RC_ADDR(0x00004e90u): goto L_4E90;
    case RC_ADDR(0x00004e96u): goto L_4E96;
    case RC_ADDR(0x00004e9au): goto L_4E9A;
    case RC_ADDR(0x00004e9eu): goto L_4E9E;
    case RC_ADDR(0x00004ea2u): goto L_4EA2;
    case RC_ADDR(0x00004ea6u): goto L_4EA6;
    case RC_ADDR(0x00004eaau): goto L_4EAA;
    case RC_ADDR(0x00004eacu): goto L_4EAC;
    case RC_ADDR(0x00004eb0u): goto L_4EB0;
    case RC_ADDR(0x00004eb2u): goto L_4EB2;
    case RC_ADDR(0x00004eb4u): goto L_4EB4;
    case RC_ADDR(0x00004eb8u): goto L_4EB8;
    case RC_ADDR(0x00004ebcu): goto L_4EBC;
    case RC_ADDR(0x00004ec0u): goto L_4EC0;
    case RC_ADDR(0x00004ec4u): goto L_4EC4;
    case RC_ADDR(0x00004ec8u): goto L_4EC8;
    case RC_ADDR(0x00004eccu): goto L_4ECC;
    case RC_ADDR(0x00004ed0u): goto L_4ED0;
    case RC_ADDR(0x00004ed4u): goto L_4ED4;
    case RC_ADDR(0x00004ed8u): goto L_4ED8;
    case RC_ADDR(0x00004edau): goto L_4EDA;
    case RC_ADDR(0x00004edeu): goto L_4EDE;
    case RC_ADDR(0x00004ee2u): goto L_4EE2;
    case RC_ADDR(0x00004ee4u): goto L_4EE4;
    case RC_ADDR(0x00004ee8u): goto L_4EE8;
    case RC_ADDR(0x00004eecu): goto L_4EEC;
    case RC_ADDR(0x00004ef2u): goto L_4EF2;
    case RC_ADDR(0x00004ef4u): goto L_4EF4;
    case RC_ADDR(0x00004ef8u): goto L_4EF8;
    case RC_ADDR(0x00004efau): goto L_4EFA;
    case RC_ADDR(0x00004efeu): goto L_4EFE;
    case RC_ADDR(0x00004f00u): goto L_4F00;
    case RC_ADDR(0x00004f02u): goto L_4F02;
    case RC_ADDR(0x00004f04u): goto L_4F04;
    case RC_ADDR(0x00004f06u): goto L_4F06;
    case RC_ADDR(0x00004f08u): goto L_4F08;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4E84:
    /* 00004e84   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x00004e84u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_4E88:
    /* 00004e88   4  clr.l (fffff274,A4) */
    c->pc = RC_ADDR(0x00004e88u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0xd8cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4E8C:
    /* 00004e8c   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00004e8cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4E90:
    /* 00004e90   6  move.l (8,A5),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00004e90u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4E96:
    /* 00004e96   4  move.w (fffffec4,A4),D0 */
    c->pc = RC_ADDR(0x00004e96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x13cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4E9A:
    /* 00004e9a   4  sub.w (fffffec2,A4),D0 */
    c->pc = RC_ADDR(0x00004e9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x13eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_4E9E:
    /* 00004e9e   4  move.w D0,(fffff27c,A4) */
    c->pc = RC_ADDR(0x00004e9eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd84u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4EA2:
    /* 00004ea2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004ea2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4EA6:
    /* 00004ea6   4  cmp.w (fffff27c,A4),D0 */
    c->pc = RC_ADDR(0x00004ea6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd84u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_4EAA:
    /* 00004eaa   2  bge 00004eda */
    c->pc = RC_ADDR(0x00004eaau);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_4EDA;

L_4EAC:
    /* 00004eac   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00004eacu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_4EB0:
    /* 00004eb0   2  tst.b (A0) */
    c->pc = RC_ADDR(0x00004eb0u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_4EB2:
    /* 00004eb2   2  beq 00004eda */
    c->pc = RC_ADDR(0x00004eb2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4EDA;

L_4EB4:
    /* 00004eb4   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00004eb4u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_4EB8:
    /* 00004eb8   4  move.l (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00004eb8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4EBC:
    /* 00004ebc   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x00004ebcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4EC0:
    /* 00004ec0   4  jsr (ffff83a4,A4) */
    c->pc = RC_ADDR(0x00004ec0u);
    rc_step(c, m, 18);
    /* vector 155 */
    rc_push32(c, m, RC_ADDR(0x00004ec4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dfau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021934u);
    return;

L_4EC4:
    /* 00004ec4   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00004ec4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_4EC8:
    /* 00004ec8   4  add.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00004ec8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_4ECC:
    /* 00004ecc   4  addq.l #1,(fffff274,A4) */
    c->pc = RC_ADDR(0x00004eccu);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0xd8cu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_4ED0:
    /* 00004ed0   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00004ed0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_4ED4:
    /* 00004ed4   4  addq.l #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00004ed4u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_4ED8:
    /* 00004ed8   2  bra 00004ea2 */
    c->pc = RC_ADDR(0x00004ed8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_4EA2;

L_4EDA:
    /* 00004eda   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00004edau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4EDE:
    /* 00004ede   4  cmp.w (fffff27c,A4),D0 */
    c->pc = RC_ADDR(0x00004edeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd84u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_4EE2:
    /* 00004ee2   2  blt 00004f06 */
    c->pc = RC_ADDR(0x00004ee2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_4F06;

L_4EE4:
    /* 00004ee4   4  move.l (fffff274,A4),D0 */
    c->pc = RC_ADDR(0x00004ee4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd8cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4EE8:
    /* 00004ee8   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00004ee8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_4EEC:
    /* 00004eec   6  cmpi.b #20,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004eecu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_4EF2:
    /* 00004ef2   2  beq 00004f00 */
    c->pc = RC_ADDR(0x00004ef2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4F00;

L_4EF4:
    /* 00004ef4   4  tst.l (fffff274,A4) */
    c->pc = RC_ADDR(0x00004ef4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd8cu));
    rc_set_nzvc(c, t0, RC_L);

L_4EF8:
    /* 00004ef8   2  beq 00004f00 */
    c->pc = RC_ADDR(0x00004ef8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4F00;

L_4EFA:
    /* 00004efa   4  subq.l #1,(fffff274,A4) */
    c->pc = RC_ADDR(0x00004efau);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0xd8cu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_4EFE:
    /* 00004efe   2  bra 00004ee4 */
    c->pc = RC_ADDR(0x00004efeu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_4EE4;

L_4F00:
    /* 00004f00   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00004f00u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4F02:
    /* 00004f02   2  unlk A5 */
    c->pc = RC_ADDR(0x00004f02u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4F04:
    /* 00004f04   2  rts */
    c->pc = RC_ADDR(0x00004f04u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_4F06:
    /* 00004f06   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00004f06u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4F08:
    /* 00004f08   2  bra 00004f02 */
    c->pc = RC_ADDR(0x00004f08u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_4F02;

}
