/* fn_00021204 - 80 byte(s), 36 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021204(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00021204u): goto L_21204;
    case RC_ADDR(0x00021208u): goto L_21208;
    case RC_ADDR(0x0002120au): goto L_2120A;
    case RC_ADDR(0x0002120cu): goto L_2120C;
    case RC_ADDR(0x0002120eu): goto L_2120E;
    case RC_ADDR(0x00021210u): goto L_21210;
    case RC_ADDR(0x00021212u): goto L_21212;
    case RC_ADDR(0x00021214u): goto L_21214;
    case RC_ADDR(0x00021216u): goto L_21216;
    case RC_ADDR(0x00021218u): goto L_21218;
    case RC_ADDR(0x0002121au): goto L_2121A;
    case RC_ADDR(0x0002121cu): goto L_2121C;
    case RC_ADDR(0x0002121eu): goto L_2121E;
    case RC_ADDR(0x00021220u): goto L_21220;
    case RC_ADDR(0x00021222u): goto L_21222;
    case RC_ADDR(0x00021224u): goto L_21224;
    case RC_ADDR(0x00021226u): goto L_21226;
    case RC_ADDR(0x00021228u): goto L_21228;
    case RC_ADDR(0x0002122cu): goto L_2122C;
    case RC_ADDR(0x0002122eu): goto L_2122E;
    case RC_ADDR(0x00021230u): goto L_21230;
    case RC_ADDR(0x00021232u): goto L_21232;
    case RC_ADDR(0x00021234u): goto L_21234;
    case RC_ADDR(0x00021236u): goto L_21236;
    case RC_ADDR(0x00021238u): goto L_21238;
    case RC_ADDR(0x0002123au): goto L_2123A;
    case RC_ADDR(0x0002123cu): goto L_2123C;
    case RC_ADDR(0x0002123eu): goto L_2123E;
    case RC_ADDR(0x00021240u): goto L_21240;
    case RC_ADDR(0x00021242u): goto L_21242;
    case RC_ADDR(0x00021244u): goto L_21244;
    case RC_ADDR(0x00021246u): goto L_21246;
    case RC_ADDR(0x00021248u): goto L_21248;
    case RC_ADDR(0x0002124au): goto L_2124A;
    case RC_ADDR(0x0002124eu): goto L_2124E;
    case RC_ADDR(0x00021252u): goto L_21252;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21204:
    /* 00021204   4  movem.l { A4 A5 },-(SP) */
    c->pc = RC_ADDR(0x00021204u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    c->a[7] = t3;

L_21208:
    /* 00021208   2  swap D1 */
    c->pc = RC_ADDR(0x00021208u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_2120A:
    /* 0002120a   2  tst.w D1 */
    c->pc = RC_ADDR(0x0002120au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2120C:
    /* 0002120c   2  bne 0002122e */
    c->pc = RC_ADDR(0x0002120cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2122E;

L_2120E:
    /* 0002120e   2  swap D1 */
    c->pc = RC_ADDR(0x0002120eu);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_21210:
    /* 00021210   2  move.w D1,D3 */
    c->pc = RC_ADDR(0x00021210u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21212:
    /* 00021212   2  move.w D0,D2 */
    c->pc = RC_ADDR(0x00021212u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21214:
    /* 00021214   2  clr.w D0 */
    c->pc = RC_ADDR(0x00021214u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_21216:
    /* 00021216   2  swap D0 */
    c->pc = RC_ADDR(0x00021216u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_21218:
    /* 00021218   2  divu.w D3,D0 */
    c->pc = RC_ADDR(0x00021218u);
    rc_step(c, m, 140);
    t0 = rc_d_get(c, 3, RC_W);
    rc_divu(c, m, 0, t0);

L_2121A:
    /* 0002121a   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x0002121au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2121C:
    /* 0002121c   2  swap D0 */
    c->pc = RC_ADDR(0x0002121cu);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_2121E:
    /* 0002121e   2  move.w D2,D1 */
    c->pc = RC_ADDR(0x0002121eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21220:
    /* 00021220   2  divu.w D3,D1 */
    c->pc = RC_ADDR(0x00021220u);
    rc_step(c, m, 140);
    t0 = rc_d_get(c, 3, RC_W);
    rc_divu(c, m, 1, t0);

L_21222:
    /* 00021222   2  move.w D1,D0 */
    c->pc = RC_ADDR(0x00021222u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21224:
    /* 00021224   2  clr.w D1 */
    c->pc = RC_ADDR(0x00021224u);
    rc_step(c, m, 4);
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_21226:
    /* 00021226   2  swap D1 */
    c->pc = RC_ADDR(0x00021226u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_21228:
    /* 00021228   4  movem.l (SP)+,{ D2 D3 } */
    c->pc = RC_ADDR(0x00021228u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_2122C:
    /* 0002122c   2  rts */
    c->pc = RC_ADDR(0x0002122cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_2122E:
    /* 0002122e   2  swap D1 */
    c->pc = RC_ADDR(0x0002122eu);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_21230:
    /* 00021230   2  move.l D1,D3 */
    c->pc = RC_ADDR(0x00021230u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 3, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21232:
    /* 00021232   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x00021232u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21234:
    /* 00021234   2  clr.w D1 */
    c->pc = RC_ADDR(0x00021234u);
    rc_step(c, m, 4);
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_21236:
    /* 00021236   2  swap D1 */
    c->pc = RC_ADDR(0x00021236u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_21238:
    /* 00021238   2  swap D0 */
    c->pc = RC_ADDR(0x00021238u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_2123A:
    /* 0002123a   2  clr.w D0 */
    c->pc = RC_ADDR(0x0002123au);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2123C:
    /* 0002123c   2  moveq #f,D2 */
    c->pc = RC_ADDR(0x0002123cu);
    rc_step(c, m, 4);
    c->d[2] = 0x0000000fu;
    rc_set_nzvc(c, c->d[2], RC_L);

L_2123E:
    /* 0002123e   2  add.l D0,D0 */
    c->pc = RC_ADDR(0x0002123eu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_21240:
    /* 00021240   2  addx.l D1,D1 */
    c->pc = RC_ADDR(0x00021240u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0 + ((c->sr & RC_X) ? 1u : 0u);
    rc_flags_addx(c, RC_L, t1, t0, ((c->sr & RC_X) ? 1u : 0u), t2);
    rc_d_set(c, 1, RC_L, t2);

L_21242:
    /* 00021242   2  cmp.l D1,D3 */
    c->pc = RC_ADDR(0x00021242u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 3, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_21244:
    /* 00021244   2  bhi 0002124a */
    c->pc = RC_ADDR(0x00021244u);
    rc_step(c, m, 10);
    if (rc_cond(c, 2)) goto L_2124A;

L_21246:
    /* 00021246   2  sub.l D3,D1 */
    c->pc = RC_ADDR(0x00021246u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_21248:
    /* 00021248   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00021248u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_2124A:
    /* 0002124a   4  dbf D2,0002123e */
    c->pc = RC_ADDR(0x0002124au);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 2, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 2, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_2123E; }
    }

L_2124E:
    /* 0002124e   4  movem.l (SP)+,{ D2 D3 } */
    c->pc = RC_ADDR(0x0002124eu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_21252:
    /* 00021252   2  rts */
    c->pc = RC_ADDR(0x00021252u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
