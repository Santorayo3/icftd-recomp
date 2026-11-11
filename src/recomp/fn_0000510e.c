/* fn_0000510e - 128 byte(s), 36 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000510e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000510eu): goto L_510E;
    case RC_ADDR(0x00005112u): goto L_5112;
    case RC_ADDR(0x00005116u): goto L_5116;
    case RC_ADDR(0x0000511cu): goto L_511C;
    case RC_ADDR(0x00005120u): goto L_5120;
    case RC_ADDR(0x00005124u): goto L_5124;
    case RC_ADDR(0x00005128u): goto L_5128;
    case RC_ADDR(0x0000512au): goto L_512A;
    case RC_ADDR(0x0000512cu): goto L_512C;
    case RC_ADDR(0x0000512eu): goto L_512E;
    case RC_ADDR(0x00005134u): goto L_5134;
    case RC_ADDR(0x00005138u): goto L_5138;
    case RC_ADDR(0x0000513cu): goto L_513C;
    case RC_ADDR(0x00005140u): goto L_5140;
    case RC_ADDR(0x00005144u): goto L_5144;
    case RC_ADDR(0x00005148u): goto L_5148;
    case RC_ADDR(0x0000514au): goto L_514A;
    case RC_ADDR(0x0000514eu): goto L_514E;
    case RC_ADDR(0x00005152u): goto L_5152;
    case RC_ADDR(0x00005154u): goto L_5154;
    case RC_ADDR(0x00005158u): goto L_5158;
    case RC_ADDR(0x0000515cu): goto L_515C;
    case RC_ADDR(0x0000515eu): goto L_515E;
    case RC_ADDR(0x00005166u): goto L_5166;
    case RC_ADDR(0x00005168u): goto L_5168;
    case RC_ADDR(0x0000516cu): goto L_516C;
    case RC_ADDR(0x0000516eu): goto L_516E;
    case RC_ADDR(0x00005172u): goto L_5172;
    case RC_ADDR(0x00005174u): goto L_5174;
    case RC_ADDR(0x00005178u): goto L_5178;
    case RC_ADDR(0x0000517cu): goto L_517C;
    case RC_ADDR(0x00005180u): goto L_5180;
    case RC_ADDR(0x00005184u): goto L_5184;
    case RC_ADDR(0x00005186u): goto L_5186;
    case RC_ADDR(0x0000518au): goto L_518A;
    case RC_ADDR(0x0000518cu): goto L_518C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_510E:
    /* 0000510e   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0000510eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_5112:
    /* 00005112   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00005112u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5116:
    /* 00005116   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00005116u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_511C:
    /* 0000511c   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000511cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5120:
    /* 00005120   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00005120u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5124:
    /* 00005124   4  jsr (00004e84) */
    c->pc = RC_ADDR(0x00005124u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005128u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004e84u);
    return;

L_5128:
    /* 00005128   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005128u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_512A:
    /* 0000512a   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000512au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_512C:
    /* 0000512c   2  beq 0000515e */
    c->pc = RC_ADDR(0x0000512cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_515E;

L_512E:
    /* 0000512e   6  move.l (8,A5),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000512eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5134:
    /* 00005134   4  move.l (fffff274,A4),D0 */
    c->pc = RC_ADDR(0x00005134u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd8cu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_5138:
    /* 00005138   4  add.l D0,(8,A5) */
    c->pc = RC_ADDR(0x00005138u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_513C:
    /* 0000513c   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000513cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_5140:
    /* 00005140   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00005140u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5144:
    /* 00005144   4  cmp.w (c,A5),D0 */
    c->pc = RC_ADDR(0x00005144u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_5148:
    /* 00005148   2  bne 0000515c */
    c->pc = RC_ADDR(0x00005148u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_515C;

L_514A:
    /* 0000514a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000514au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_514E:
    /* 0000514e   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x0000514eu);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_5152:
    /* 00005152   2  clr.b (A0) */
    c->pc = RC_ADDR(0x00005152u);
    rc_step(c, m, 12);
    rc_wr8(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_5154:
    /* 00005154   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00005154u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5158:
    /* 00005158   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00005158u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_515C:
    /* 0000515c   2  bra 00005120 */
    c->pc = RC_ADDR(0x0000515cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_5120;

L_515E:
    /* 0000515e   8  cmpi.l #14,(fffff274,A4) */
    c->pc = RC_ADDR(0x0000515eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd8cu));
    rc_cmp(c, RC_L, t0, 0x00000014u);

L_5166:
    /* 00005166   2  bcc 00005186 */
    c->pc = RC_ADDR(0x00005166u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_5186;

L_5168:
    /* 00005168   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00005168u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_516C:
    /* 0000516c   2  bne 00005186 */
    c->pc = RC_ADDR(0x0000516cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_5186;

L_516E:
    /* 0000516e   4  tst.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000516eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_5172:
    /* 00005172   2  beq 00005186 */
    c->pc = RC_ADDR(0x00005172u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5186;

L_5174:
    /* 00005174   4  subq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x00005174u);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_5178:
    /* 00005178   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00005178u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_517C:
    /* 0000517c   4  move.b #20,(A0) */
    c->pc = RC_ADDR(0x0000517cu);
    rc_step(c, m, 12);
    t0 = 0x00000020u;
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_5180:
    /* 00005180   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00005180u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_5184:
    /* 00005184   2  clr.b (A0) */
    c->pc = RC_ADDR(0x00005184u);
    rc_step(c, m, 12);
    rc_wr8(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_5186:
    /* 00005186   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00005186u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_518A:
    /* 0000518a   2  unlk A5 */
    c->pc = RC_ADDR(0x0000518au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_518C:
    /* 0000518c   2  rts */
    c->pc = RC_ADDR(0x0000518cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
