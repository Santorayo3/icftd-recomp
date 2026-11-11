/* fn_000124de - 204 byte(s), 58 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000124de(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000124deu): goto L_124DE;
    case RC_ADDR(0x000124e2u): goto L_124E2;
    case RC_ADDR(0x000124e6u): goto L_124E6;
    case RC_ADDR(0x000124e8u): goto L_124E8;
    case RC_ADDR(0x000124eau): goto L_124EA;
    case RC_ADDR(0x000124eeu): goto L_124EE;
    case RC_ADDR(0x000124f2u): goto L_124F2;
    case RC_ADDR(0x000124f6u): goto L_124F6;
    case RC_ADDR(0x000124fau): goto L_124FA;
    case RC_ADDR(0x000124fcu): goto L_124FC;
    case RC_ADDR(0x000124feu): goto L_124FE;
    case RC_ADDR(0x00012502u): goto L_12502;
    case RC_ADDR(0x00012508u): goto L_12508;
    case RC_ADDR(0x0001250cu): goto L_1250C;
    case RC_ADDR(0x0001250eu): goto L_1250E;
    case RC_ADDR(0x00012510u): goto L_12510;
    case RC_ADDR(0x00012514u): goto L_12514;
    case RC_ADDR(0x0001251au): goto L_1251A;
    case RC_ADDR(0x0001251eu): goto L_1251E;
    case RC_ADDR(0x00012520u): goto L_12520;
    case RC_ADDR(0x00012522u): goto L_12522;
    case RC_ADDR(0x00012526u): goto L_12526;
    case RC_ADDR(0x0001252au): goto L_1252A;
    case RC_ADDR(0x0001252eu): goto L_1252E;
    case RC_ADDR(0x00012530u): goto L_12530;
    case RC_ADDR(0x00012532u): goto L_12532;
    case RC_ADDR(0x00012536u): goto L_12536;
    case RC_ADDR(0x0001253cu): goto L_1253C;
    case RC_ADDR(0x00012540u): goto L_12540;
    case RC_ADDR(0x00012542u): goto L_12542;
    case RC_ADDR(0x00012544u): goto L_12544;
    case RC_ADDR(0x00012548u): goto L_12548;
    case RC_ADDR(0x0001254eu): goto L_1254E;
    case RC_ADDR(0x00012552u): goto L_12552;
    case RC_ADDR(0x00012554u): goto L_12554;
    case RC_ADDR(0x00012556u): goto L_12556;
    case RC_ADDR(0x0001255au): goto L_1255A;
    case RC_ADDR(0x00012560u): goto L_12560;
    case RC_ADDR(0x00012564u): goto L_12564;
    case RC_ADDR(0x00012566u): goto L_12566;
    case RC_ADDR(0x00012568u): goto L_12568;
    case RC_ADDR(0x0001256cu): goto L_1256C;
    case RC_ADDR(0x00012572u): goto L_12572;
    case RC_ADDR(0x00012576u): goto L_12576;
    case RC_ADDR(0x00012578u): goto L_12578;
    case RC_ADDR(0x0001257au): goto L_1257A;
    case RC_ADDR(0x0001257eu): goto L_1257E;
    case RC_ADDR(0x00012584u): goto L_12584;
    case RC_ADDR(0x00012588u): goto L_12588;
    case RC_ADDR(0x0001258au): goto L_1258A;
    case RC_ADDR(0x0001258cu): goto L_1258C;
    case RC_ADDR(0x00012590u): goto L_12590;
    case RC_ADDR(0x00012596u): goto L_12596;
    case RC_ADDR(0x0001259au): goto L_1259A;
    case RC_ADDR(0x000125a0u): goto L_125A0;
    case RC_ADDR(0x000125a2u): goto L_125A2;
    case RC_ADDR(0x000125a6u): goto L_125A6;
    case RC_ADDR(0x000125a8u): goto L_125A8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_124DE:
    /* 000124de   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000124deu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_124E2:
    /* 000124e2   4  move.w (1082,A4),D0 */
    c->pc = RC_ADDR(0x000124e2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1082u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_124E6:
    /* 000124e6   2  ext.l D0 */
    c->pc = RC_ADDR(0x000124e6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_124E8:
    /* 000124e8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000124e8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_124EA:
    /* 000124ea   4  lea (f1a,A4),A0 */
    c->pc = RC_ADDR(0x000124eau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xf1au);

L_124EE:
    /* 000124ee   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000124eeu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_124F2:
    /* 000124f2   4  bge 000125a6 */
    c->pc = RC_ADDR(0x000124f2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_125A6;

L_124F6:
    /* 000124f6   4  move.w (1082,A4),D0 */
    c->pc = RC_ADDR(0x000124f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1082u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_124FA:
    /* 000124fa   2  ext.l D0 */
    c->pc = RC_ADDR(0x000124fau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_124FC:
    /* 000124fc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000124fcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_124FE:
    /* 000124fe   4  lea (e66,A4),A0 */
    c->pc = RC_ADDR(0x000124feu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xe66u);

L_12502:
    /* 00012502   6  move.w (8,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012502u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12508:
    /* 00012508   4  move.w (1082,A4),D0 */
    c->pc = RC_ADDR(0x00012508u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1082u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1250C:
    /* 0001250c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001250cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1250E:
    /* 0001250e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001250eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12510:
    /* 00012510   4  lea (ea2,A4),A0 */
    c->pc = RC_ADDR(0x00012510u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xea2u);

L_12514:
    /* 00012514   6  move.w (a,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012514u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1251A:
    /* 0001251a   4  move.w (1082,A4),D0 */
    c->pc = RC_ADDR(0x0001251au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1082u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1251E:
    /* 0001251e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001251eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_12520:
    /* 00012520   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012520u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12522:
    /* 00012522   4  lea (f1a,A4),A0 */
    c->pc = RC_ADDR(0x00012522u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xf1au);

L_12526:
    /* 00012526   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012526u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1252A:
    /* 0001252a   4  move.w (1082,A4),D0 */
    c->pc = RC_ADDR(0x0001252au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1082u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1252E:
    /* 0001252e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001252eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_12530:
    /* 00012530   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012530u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12532:
    /* 00012532   4  lea (ede,A4),A0 */
    c->pc = RC_ADDR(0x00012532u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xedeu);

L_12536:
    /* 00012536   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012536u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1253C:
    /* 0001253c   4  move.w (1082,A4),D0 */
    c->pc = RC_ADDR(0x0001253cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1082u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12540:
    /* 00012540   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012540u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_12542:
    /* 00012542   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012542u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12544:
    /* 00012544   4  lea (f56,A4),A0 */
    c->pc = RC_ADDR(0x00012544u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xf56u);

L_12548:
    /* 00012548   6  move.w (c,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012548u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1254E:
    /* 0001254e   4  move.w (1082,A4),D0 */
    c->pc = RC_ADDR(0x0001254eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1082u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12552:
    /* 00012552   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012552u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_12554:
    /* 00012554   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012554u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12556:
    /* 00012556   4  lea (f92,A4),A0 */
    c->pc = RC_ADDR(0x00012556u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xf92u);

L_1255A:
    /* 0001255a   6  move.w (e,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001255au);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12560:
    /* 00012560   4  move.w (1082,A4),D0 */
    c->pc = RC_ADDR(0x00012560u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1082u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12564:
    /* 00012564   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012564u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_12566:
    /* 00012566   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012566u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_12568:
    /* 00012568   4  lea (fce,A4),A0 */
    c->pc = RC_ADDR(0x00012568u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xfceu);

L_1256C:
    /* 0001256c   6  move.w (10,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001256cu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12572:
    /* 00012572   4  move.w (1082,A4),D0 */
    c->pc = RC_ADDR(0x00012572u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1082u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12576:
    /* 00012576   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012576u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_12578:
    /* 00012578   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00012578u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1257A:
    /* 0001257a   4  lea (100a,A4),A0 */
    c->pc = RC_ADDR(0x0001257au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x100au);

L_1257E:
    /* 0001257e   6  move.w (12,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001257eu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12584:
    /* 00012584   4  move.w (1082,A4),D0 */
    c->pc = RC_ADDR(0x00012584u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1082u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12588:
    /* 00012588   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012588u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1258A:
    /* 0001258a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001258au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1258C:
    /* 0001258c   4  lea (1046,A4),A0 */
    c->pc = RC_ADDR(0x0001258cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1046u);

L_12590:
    /* 00012590   6  move.w (14,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012590u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12596:
    /* 00012596   4  addq.w #1,(1082,A4) */
    c->pc = RC_ADDR(0x00012596u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1082u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1259A:
    /* 0001259a   6  cmpi.w #1d,(1082,A4) */
    c->pc = RC_ADDR(0x0001259au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1082u));
    rc_cmp(c, RC_W, t0, 0x0000001du);

L_125A0:
    /* 000125a0   2  ble 000125a6 */
    c->pc = RC_ADDR(0x000125a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_125A6;

L_125A2:
    /* 000125a2   4  clr.w (1082,A4) */
    c->pc = RC_ADDR(0x000125a2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1082u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_125A6:
    /* 000125a6   2  unlk A5 */
    c->pc = RC_ADDR(0x000125a6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_125A8:
    /* 000125a8   2  rts */
    c->pc = RC_ADDR(0x000125a8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
