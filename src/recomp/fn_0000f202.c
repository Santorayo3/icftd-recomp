/* fn_0000f202 - 98 byte(s), 32 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f202(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f202u): goto L_F202;
    case RC_ADDR(0x0000f206u): goto L_F206;
    case RC_ADDR(0x0000f20au): goto L_F20A;
    case RC_ADDR(0x0000f20eu): goto L_F20E;
    case RC_ADDR(0x0000f210u): goto L_F210;
    case RC_ADDR(0x0000f212u): goto L_F212;
    case RC_ADDR(0x0000f216u): goto L_F216;
    case RC_ADDR(0x0000f21cu): goto L_F21C;
    case RC_ADDR(0x0000f21eu): goto L_F21E;
    case RC_ADDR(0x0000f220u): goto L_F220;
    case RC_ADDR(0x0000f224u): goto L_F224;
    case RC_ADDR(0x0000f226u): goto L_F226;
    case RC_ADDR(0x0000f228u): goto L_F228;
    case RC_ADDR(0x0000f22cu): goto L_F22C;
    case RC_ADDR(0x0000f230u): goto L_F230;
    case RC_ADDR(0x0000f232u): goto L_F232;
    case RC_ADDR(0x0000f236u): goto L_F236;
    case RC_ADDR(0x0000f238u): goto L_F238;
    case RC_ADDR(0x0000f23cu): goto L_F23C;
    case RC_ADDR(0x0000f240u): goto L_F240;
    case RC_ADDR(0x0000f242u): goto L_F242;
    case RC_ADDR(0x0000f244u): goto L_F244;
    case RC_ADDR(0x0000f248u): goto L_F248;
    case RC_ADDR(0x0000f24au): goto L_F24A;
    case RC_ADDR(0x0000f24eu): goto L_F24E;
    case RC_ADDR(0x0000f252u): goto L_F252;
    case RC_ADDR(0x0000f254u): goto L_F254;
    case RC_ADDR(0x0000f256u): goto L_F256;
    case RC_ADDR(0x0000f258u): goto L_F258;
    case RC_ADDR(0x0000f25cu): goto L_F25C;
    case RC_ADDR(0x0000f25eu): goto L_F25E;
    case RC_ADDR(0x0000f262u): goto L_F262;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F202:
    /* 0000f202   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x0000f202u);
    rc_step(c, m, 8);
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

L_F206:
    /* 0000f206   4  lea (c6,A6),A2 */
    c->pc = RC_ADDR(0x0000f206u);
    rc_step(c, m, 8);
    c->a[2] = (c->a[6] + 0xc6u);

L_F20A:
    /* 0000f20a   4  lea (e6,A6),A1 */
    c->pc = RC_ADDR(0x0000f20au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[6] + 0xe6u);

L_F20E:
    /* 0000f20e   2  moveq #7,D7 */
    c->pc = RC_ADDR(0x0000f20eu);
    rc_step(c, m, 4);
    c->d[7] = 0x00000007u;
    rc_set_nzvc(c, c->d[7], RC_L);

L_F210:
    /* 0000f210   2  move.l (A2)+,(A1)+ */
    c->pc = RC_ADDR(0x0000f210u);
    rc_step(c, m, 20);
    t3 = c->a[2];
    c->a[2] += 4u;
    t0 = rc_rd32(c, m, t3);
    t3 = c->a[1];
    c->a[1] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F212:
    /* 0000f212   4  dbf D7,0000f210 */
    c->pc = RC_ADDR(0x0000f212u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 7, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 7, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_F210; }
    }

L_F216:
    /* 0000f216   6  move.l (c,A6),(10,A6) */
    c->pc = RC_ADDR(0x0000f216u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[6] + 0xcu));
    rc_wr32(c, m, (c->a[6] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F21C:
    /* 0000f21c   2  movea.l A6,A4 */
    c->pc = RC_ADDR(0x0000f21cu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 6, RC_L);
    c->a[4] = t0;

L_F21E:
    /* 0000f21e   2  clr.b D7 */
    c->pc = RC_ADDR(0x0000f21eu);
    rc_step(c, m, 4);
    rc_d_set(c, 7, RC_B, 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_F220:
    /* 0000f220   4  tst.l (26,A4) */
    c->pc = RC_ADDR(0x0000f220u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x26u));
    rc_set_nzvc(c, t0, RC_L);

L_F224:
    /* 0000f224   2  beq 0000f22c */
    c->pc = RC_ADDR(0x0000f224u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F22C;

L_F226:
    /* 0000f226   2  move.b D7,D0 */
    c->pc = RC_ADDR(0x0000f226u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F228:
    /* 0000f228   4  bsr 0000f57e */
    c->pc = RC_ADDR(0x0000f228u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000f22cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f57eu);
    return;

L_F22C:
    /* 0000f22c   4  clr.l (a6,A4) */
    c->pc = RC_ADDR(0x0000f22cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0xa6u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F230:
    /* 0000f230   2  clr.l D0 */
    c->pc = RC_ADDR(0x0000f230u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_F232:
    /* 0000f232   4  move.b (f7,A4),D0 */
    c->pc = RC_ADDR(0x0000f232u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[4] + 0xf7u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F236:
    /* 0000f236   2  addq.b #1,D0 */
    c->pc = RC_ADDR(0x0000f236u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_F238:
    /* 0000f238   4  move.l D0,(b6,A4) */
    c->pc = RC_ADDR(0x0000f238u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xb6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F23C:
    /* 0000f23c   4  move.b (f6,A4),D0 */
    c->pc = RC_ADDR(0x0000f23cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[4] + 0xf6u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F240:
    /* 0000f240   2  beq 0000f24e */
    c->pc = RC_ADDR(0x0000f240u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F24E;

L_F242:
    /* 0000f242   2  subq.b #1,D0 */
    c->pc = RC_ADDR(0x0000f242u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_F244:
    /* 0000f244   4  lea (40,A0),A3 */
    c->pc = RC_ADDR(0x0000f244u);
    rc_step(c, m, 8);
    c->a[3] = (c->a[0] + 0x40u);

L_F248:
    /* 0000f248   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x0000f248u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_F24A:
    /* 0000f24a   4  move.l (0,A3,D0.w),D0 */
    c->pc = RC_ADDR(0x0000f24au);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd32(c, m, (c->a[3] + 0x0u + t4));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F24E:
    /* 0000f24e   4  move.l D0,(96,A4) */
    c->pc = RC_ADDR(0x0000f24eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x96u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F252:
    /* 0000f252   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x0000f252u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_F254:
    /* 0000f254   2  addq.l #4,A4 */
    c->pc = RC_ADDR(0x0000f254u);
    rc_step(c, m, 8);
    c->a[4] += 0x00000004u;

L_F256:
    /* 0000f256   2  addq.b #1,D7 */
    c->pc = RC_ADDR(0x0000f256u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 7, RC_B);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_B, t2);

L_F258:
    /* 0000f258   4  cmpi.b #4,D7 */
    c->pc = RC_ADDR(0x0000f258u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 7, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000004u);

L_F25C:
    /* 0000f25c   2  bcs 0000f220 */
    c->pc = RC_ADDR(0x0000f25cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_F220; }

L_F25E:
    /* 0000f25e   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x0000f25eu);
    rc_step(c, m, 12);
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

L_F262:
    /* 0000f262   2  rts */
    c->pc = RC_ADDR(0x0000f262u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
