/* fn_00013114 - 152 byte(s), 43 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00013114(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00013114u): goto L_13114;
    case RC_ADDR(0x00013118u): goto L_13118;
    case RC_ADDR(0x0001311eu): goto L_1311E;
    case RC_ADDR(0x00013122u): goto L_13122;
    case RC_ADDR(0x00013126u): goto L_13126;
    case RC_ADDR(0x00013128u): goto L_13128;
    case RC_ADDR(0x0001312au): goto L_1312A;
    case RC_ADDR(0x0001312eu): goto L_1312E;
    case RC_ADDR(0x00013132u): goto L_13132;
    case RC_ADDR(0x00013136u): goto L_13136;
    case RC_ADDR(0x00013138u): goto L_13138;
    case RC_ADDR(0x0001313cu): goto L_1313C;
    case RC_ADDR(0x0001313eu): goto L_1313E;
    case RC_ADDR(0x00013140u): goto L_13140;
    case RC_ADDR(0x00013144u): goto L_13144;
    case RC_ADDR(0x00013146u): goto L_13146;
    case RC_ADDR(0x00013148u): goto L_13148;
    case RC_ADDR(0x0001314cu): goto L_1314C;
    case RC_ADDR(0x00013150u): goto L_13150;
    case RC_ADDR(0x00013154u): goto L_13154;
    case RC_ADDR(0x00013158u): goto L_13158;
    case RC_ADDR(0x0001315cu): goto L_1315C;
    case RC_ADDR(0x00013160u): goto L_13160;
    case RC_ADDR(0x00013164u): goto L_13164;
    case RC_ADDR(0x00013168u): goto L_13168;
    case RC_ADDR(0x0001316cu): goto L_1316C;
    case RC_ADDR(0x0001316eu): goto L_1316E;
    case RC_ADDR(0x00013170u): goto L_13170;
    case RC_ADDR(0x00013174u): goto L_13174;
    case RC_ADDR(0x00013178u): goto L_13178;
    case RC_ADDR(0x0001317cu): goto L_1317C;
    case RC_ADDR(0x00013180u): goto L_13180;
    case RC_ADDR(0x00013186u): goto L_13186;
    case RC_ADDR(0x0001318au): goto L_1318A;
    case RC_ADDR(0x0001318cu): goto L_1318C;
    case RC_ADDR(0x0001318eu): goto L_1318E;
    case RC_ADDR(0x00013192u): goto L_13192;
    case RC_ADDR(0x00013196u): goto L_13196;
    case RC_ADDR(0x0001319au): goto L_1319A;
    case RC_ADDR(0x0001319eu): goto L_1319E;
    case RC_ADDR(0x000131a4u): goto L_131A4;
    case RC_ADDR(0x000131a8u): goto L_131A8;
    case RC_ADDR(0x000131aau): goto L_131AA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13114:
    /* 00013114   4  link.w A5,#fffffffc */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013114u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_13118:
    /* 00013118   6  cmpi.w #a,(fffffd7e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013118u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x282u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_1311E:
    /* 0001311e   4  bge 000131a8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001311eu);
    if (rc_cond(c, 12)) goto L_131A8;

L_13122:
    /* 00013122   4  move.w (ffff83c8,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013122u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13126:
    /* 00013126   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013126u);
    rc_ext_l(c, 0);

L_13128:
    /* 00013128   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013128u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1312A:
    /* 0001312a   4  lea (ffff8440,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001312au);
    c->a[0] = (c->a[4] - 0x7bc0u);

L_1312E:
    /* 0001312e   4  move.l (0,A0,D0.w),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001312eu);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13132:
    /* 00013132   4  move.w (fffffd80,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013132u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x280u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13136:
    /* 00013136   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013136u);
    rc_ext_l(c, 0);

L_13138:
    /* 00013138   4  divs.w #a,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013138u);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_1313C:
    /* 0001313c   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001313cu);
    rc_ext_l(c, 0);

L_1313E:
    /* 0001313e   2  movea.l D0,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001313eu);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_13140:
    /* 00013140   4  move.b (0,A0,D1.w),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013140u);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13144:
    /* 00013144   2  ext.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013144u);
    rc_ext_w(c, 0);

L_13146:
    /* 00013146   2  subq.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013146u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13148:
    /* 00013148   4  move.w D0,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013148u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1314C:
    /* 0001314c   4  move.w (fffffd80,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001314cu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x280u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13150:
    /* 00013150   4  add.w (fffffd7e,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013150u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x282u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13154:
    /* 00013154   4  move.w D0,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013154u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13158:
    /* 00013158   4  move.w (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013158u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1315C:
    /* 0001315c   4  muls.w #16,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001315cu);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13160:
    /* 00013160   4  lea (fffff388,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013160u);
    c->a[0] = (c->a[4] - 0xc78u);

L_13164:
    /* 00013164   4  clr.b (0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013164u);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_13168:
    /* 00013168   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013168u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1316C:
    /* 0001316c   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001316cu);
    rc_ext_l(c, 0);

L_1316E:
    /* 0001316e   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001316eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_13170:
    /* 00013170   4  lea (ffffb3b8,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013170u);
    c->a[0] = (c->a[4] - 0x4c48u);

L_13174:
    /* 00013174   4  move.w (fffffffc,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013174u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13178:
    /* 00013178   4  muls.w #16,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013178u);
    t0 = 0x00000016u;
    rc_muls(c, 1, t0);

L_1317C:
    /* 0001317c   4  lea (fffff37c,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001317cu);
    c->a[1] = (c->a[4] - 0xc84u);

L_13180:
    /* 00013180   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013180u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13186:
    /* 00013186   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013186u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1318A:
    /* 0001318a   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001318au);
    rc_ext_l(c, 0);

L_1318C:
    /* 0001318c   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001318cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1318E:
    /* 0001318e   4  lea (ffffb3ba,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001318eu);
    c->a[0] = (c->a[4] - 0x4c46u);

L_13192:
    /* 00013192   4  move.w (fffffffc,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013192u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13196:
    /* 00013196   4  muls.w #16,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00013196u);
    t0 = 0x00000016u;
    rc_muls(c, 1, t0);

L_1319A:
    /* 0001319a   4  lea (fffff37e,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001319au);
    c->a[1] = (c->a[4] - 0xc82u);

L_1319E:
    /* 0001319e   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001319eu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_131A4:
    /* 000131a4   4  addq.w #1,(fffffd7e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000131a4u);
    t3 = (c->a[4] - 0x282u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_131A8:
    /* 000131a8   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000131a8u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_131AA:
    /* 000131aa   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000131aau);
    rc_ret(c, m);
    return;

}
