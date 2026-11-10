/* fn_00010010 - 90 byte(s), 30 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00010010(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00010010u): goto L_10010;
    case RC_ADDR(0x00010014u): goto L_10014;
    case RC_ADDR(0x00010018u): goto L_10018;
    case RC_ADDR(0x0001001cu): goto L_1001C;
    case RC_ADDR(0x0001001eu): goto L_1001E;
    case RC_ADDR(0x00010020u): goto L_10020;
    case RC_ADDR(0x00010022u): goto L_10022;
    case RC_ADDR(0x00010024u): goto L_10024;
    case RC_ADDR(0x00010026u): goto L_10026;
    case RC_ADDR(0x0001002au): goto L_1002A;
    case RC_ADDR(0x0001002cu): goto L_1002C;
    case RC_ADDR(0x0001002eu): goto L_1002E;
    case RC_ADDR(0x00010030u): goto L_10030;
    case RC_ADDR(0x00010032u): goto L_10032;
    case RC_ADDR(0x00010034u): goto L_10034;
    case RC_ADDR(0x00010038u): goto L_10038;
    case RC_ADDR(0x0001003au): goto L_1003A;
    case RC_ADDR(0x0001003eu): goto L_1003E;
    case RC_ADDR(0x00010040u): goto L_10040;
    case RC_ADDR(0x00010042u): goto L_10042;
    case RC_ADDR(0x00010044u): goto L_10044;
    case RC_ADDR(0x00010048u): goto L_10048;
    case RC_ADDR(0x0001004cu): goto L_1004C;
    case RC_ADDR(0x0001004eu): goto L_1004E;
    case RC_ADDR(0x00010052u): goto L_10052;
    case RC_ADDR(0x00010054u): goto L_10054;
    case RC_ADDR(0x00010058u): goto L_10058;
    case RC_ADDR(0x0001005eu): goto L_1005E;
    case RC_ADDR(0x00010062u): goto L_10062;
    case RC_ADDR(0x00010068u): goto L_10068;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10010:
    /* 00010010   4  ori.b #e8,(A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010010u);
    t3 = c->a[2];
    t1 = rc_rd8(c, m, t3);
    t2 = t1 | 0x000000e8u;
    rc_wr8(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_B);

L_10014:
    /* 00010014   4  move.l (4,A3),D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010014u);
    t0 = rc_rd32(c, m, (c->a[3] + 0x4u));
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10018:
    /* 00010018   4  move.l (8,A3),D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010018u);
    t0 = rc_rd32(c, m, (c->a[3] + 0x8u));
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1001C:
    /* 0001001c   2  move.l D4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001001cu);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1001E:
    /* 0001001e   2  add.l D5,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001001eu);
    t0 = rc_d_get(c, 5, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_10020:
    /* 00010020   2  move.l D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010020u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10022:
    /* 00010022   2  asl.l D2,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010022u);
    c->d[1] = rc_shift(c, 0, 1, (c->d[2] & 63u), rc_d_get(c, 1, RC_L), RC_L);

L_10024:
    /* 00010024   2  sub.l D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010024u);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_10026:
    /* 00010026   4  lea (0,A5,D1.w),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010026u);
    t4 = c->d[1];
    c->a[0] = (c->a[5] + 0x0u + t4);

L_1002A:
    /* 0001002a   2  asl.l D2,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001002au);
    c->d[4] = rc_shift(c, 0, 1, (c->d[2] & 63u), rc_d_get(c, 4, RC_L), RC_L);

L_1002C:
    /* 0001002c   2  asl.l D2,D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001002cu);
    c->d[5] = rc_shift(c, 0, 1, (c->d[2] & 63u), rc_d_get(c, 5, RC_L), RC_L);

L_1002E:
    /* 0001002e   2  move.w D4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001002eu);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10030:
    /* 00010030   2  bne 00010034 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010030u);
    if (rc_cond(c, 6)) goto L_10034;

L_10032:
    /* 00010032   2  move.w D5,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010032u);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10034:
    /* 00010034   4  move.l A0,(c,A1) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010034u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10038:
    /* 00010038   2  lsr.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010038u);
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_1003A:
    /* 0001003a   4  move.w D0,(10,A1) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001003au);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1003E:
    /* 0001003e   2  adda.w D4,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001003eu);
    t0 = rc_d_get(c, 4, RC_W);
    c->a[0] += rc_ext(t0, RC_W);

L_10040:
    /* 00010040   2  move.w D5,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010040u);
    t0 = rc_d_get(c, 5, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10042:
    /* 00010042   2  bne 0001004e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010042u);
    if (rc_cond(c, 6)) goto L_1004E;

L_10044:
    /* 00010044   4  movea.l (106,A6),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010044u);
    t0 = rc_rd32(c, m, (c->a[6] + 0x106u));
    c->a[0] = t0;

L_10048:
    /* 00010048   4  adda.w #400,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010048u);
    t0 = 0x00000400u;
    c->a[0] += rc_ext(t0, RC_W);

L_1004C:
    /* 0001004c   2  moveq #8,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001004cu);
    c->d[0] = 0x00000008u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1004E:
    /* 0001004e   4  move.l A0,(0,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001004eu);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10052:
    /* 00010052   2  lsr.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010052u);
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_10054:
    /* 00010054   4  move.w D0,(4,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010054u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10058:
    /* 00010058   6  move.w #2,(a,A1) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010058u);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[1] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1005E:
    /* 0001005e   4  bsr 0000f4a4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001005eu);
    rc_push32(c, m, RC_ADDR(0x00010062u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f4a4u);
    return;

L_10062:
    /* 00010062   6  move.w #1,(8,A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010062u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[2] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10068:
    /* 00010068   2  bra 00010084 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00010068u);
    c->pc = RC_ADDR(0x00010084u);
    return;

}
