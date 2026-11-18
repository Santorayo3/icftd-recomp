/* fn_00020918 - 96 byte(s), 29 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020918(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00020918u): goto L_20918;
    case RC_ADDR(0x0002091au): goto L_2091A;
    case RC_ADDR(0x0002091eu): goto L_2091E;
    case RC_ADDR(0x00020922u): goto L_20922;
    case RC_ADDR(0x00020924u): goto L_20924;
    case RC_ADDR(0x00020926u): goto L_20926;
    case RC_ADDR(0x0002092au): goto L_2092A;
    case RC_ADDR(0x0002092cu): goto L_2092C;
    case RC_ADDR(0x0002092eu): goto L_2092E;
    case RC_ADDR(0x00020930u): goto L_20930;
    case RC_ADDR(0x00020934u): goto L_20934;
    case RC_ADDR(0x00020938u): goto L_20938;
    case RC_ADDR(0x0002093cu): goto L_2093C;
    case RC_ADDR(0x00020940u): goto L_20940;
    case RC_ADDR(0x00020944u): goto L_20944;
    case RC_ADDR(0x0002094au): goto L_2094A;
    case RC_ADDR(0x0002094cu): goto L_2094C;
    case RC_ADDR(0x00020950u): goto L_20950;
    case RC_ADDR(0x00020954u): goto L_20954;
    case RC_ADDR(0x0002095cu): goto L_2095C;
    case RC_ADDR(0x00020960u): goto L_20960;
    case RC_ADDR(0x00020964u): goto L_20964;
    case RC_ADDR(0x00020968u): goto L_20968;
    case RC_ADDR(0x0002096au): goto L_2096A;
    case RC_ADDR(0x00020970u): goto L_20970;
    case RC_ADDR(0x00020974u): goto L_20974;
    case RC_ADDR(0x00020976u): goto L_20976;
    case RC_ADDR(0x0002097au): goto L_2097A;
    case RC_ADDR(0x0002097cu): goto L_2097C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20918:
    /* 00020918   2  bsr 0002098a */
    c->pc = RC_ADDR(0x00020918u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002091au));
    rc_depth++;
    c->pc = RC_ADDR(0x0002098au);
    return;

L_2091A:
    /* 0002091a   4  lea (ffffcdca,A4),A1 */
    c->pc = RC_ADDR(0x0002091au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x3236u);

L_2091E:
    /* 0002091e   4  lea (ffffcdca,A4),A2 */
    c->pc = RC_ADDR(0x0002091eu);
    rc_step(c, m, 8);
    c->a[2] = (c->a[4] - 0x3236u);

L_20922:
    /* 00020922   2  cmpa.l A1,A2 */
    c->pc = RC_ADDR(0x00020922u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 1, RC_L);
    rc_cmp(c, RC_L, c->a[2], t0);

L_20924:
    /* 00020924   2  bne 00020934 */
    c->pc = RC_ADDR(0x00020924u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_20934;

L_20926:
    /* 00020926   4  move.w #1b5c,D1 */
    c->pc = RC_ADDR(0x00020926u);
    rc_step(c, m, 8);
    t0 = 0x00001b5cu;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2092A:
    /* 0002092a   2  bmi 00020934 */
    c->pc = RC_ADDR(0x0002092au);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_20934;

L_2092C:
    /* 0002092c   2  moveq #0,D2 */
    c->pc = RC_ADDR(0x0002092cu);
    rc_step(c, m, 4);
    c->d[2] = 0x00000000u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_2092E:
    /* 0002092e   2  move.l D2,(A1)+ */
    c->pc = RC_ADDR(0x0002092eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_L);
    t3 = c->a[1];
    c->a[1] += 4u;
    rc_wr32(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20930:
    /* 00020930   4  dbf D1,0002092e */
    c->pc = RC_ADDR(0x00020930u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_2092E; }
    }

L_20934:
    /* 00020934   4  move.l A7,(3af0,A4) */
    c->pc = RC_ADDR(0x00020934u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 7, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3af0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20938:
    /* 00020938   4  movea.l (00000004).l,A6 */
    c->pc = RC_ADDR(0x00020938u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, 0x00000004u);
    c->a[6] = t0;

L_2093C:
    /* 0002093c   4  move.l A6,(3af4,A4) */
    c->pc = RC_ADDR(0x0002093cu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 6, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3af4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20940:
    /* 00020940   4  movem.l { D7 A7 },-(SP) */
    c->pc = RC_ADDR(0x00020940u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_20944:
    /* 00020944   6  btst #4,(129,A6) */
    c->pc = RC_ADDR(0x00020944u);
    rc_step(c, m, 16);
    t3 = (c->a[6] + 0x129u);
    t4 = 0x00000004u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_2094A:
    /* 0002094a   2  beq 0002095c */
    c->pc = RC_ADDR(0x0002094au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2095C;

L_2094C:
    /* 0002094c   4  lea (00020956),A5 */
    c->pc = RC_ADDR(0x0002094cu);
    rc_step(c, m, 8);
    c->a[5] = RC_ADDR(0x00020956u);

L_20950:
    /* 00020950   4  jsr (ffffffe2,A6) */
    c->pc = RC_ADDR(0x00020950u);
    rc_step(c, m, 18);
    c->pc = RC_ADDR(0x00020954u);
    rc_push32(c, m, RC_ADDR(0x00020954u));
    rc_depth++;
    rc_os_call_a6(c, m, -30);

L_20954:
    /* 00020954   2  bra 0002095c */
    c->pc = RC_ADDR(0x00020954u);
    rc_step(c, m, 10);
    goto L_2095C;

L_2095C:
    /* 0002095c   4  lea (0002097e),A1 */
    c->pc = RC_ADDR(0x0002095cu);
    rc_step(c, m, 8);
    c->a[1] = RC_ADDR(0x0002097eu);

L_20960:
    /* 00020960   4  jsr (fffffe68,A6) */
    c->pc = RC_ADDR(0x00020960u);
    rc_step(c, m, 18);
    c->pc = RC_ADDR(0x00020964u);
    rc_push32(c, m, RC_ADDR(0x00020964u));
    rc_depth++;
    rc_os_call_a6(c, m, -408);

L_20964:
    /* 00020964   4  move.l D0,(3af8,A4) */
    c->pc = RC_ADDR(0x00020964u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3af8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20968:
    /* 00020968   2  bne 00020976 */
    c->pc = RC_ADDR(0x00020968u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_20976;

L_2096A:
    /* 0002096a   6  move.l #38007,D7 */
    c->pc = RC_ADDR(0x0002096au);
    rc_step(c, m, 12);
    t0 = 0x00038007u;
    rc_d_set(c, 7, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20970:
    /* 00020970   4  jsr (ffffff94,A6) */
    c->pc = RC_ADDR(0x00020970u);
    rc_step(c, m, 18);
    c->pc = RC_ADDR(0x00020974u);
    rc_push32(c, m, RC_ADDR(0x00020974u));
    rc_depth++;
    rc_os_call_a6(c, m, -108);

L_20974:
    /* 00020974   2  bra 0002097a */
    c->pc = RC_ADDR(0x00020974u);
    rc_step(c, m, 10);
    goto L_2097A;

L_20976:
    /* 00020976   4  jsr (00020992) */
    c->pc = RC_ADDR(0x00020976u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002097au));
    rc_depth++;
    c->pc = RC_ADDR(0x00020992u);
    return;

L_2097A:
    /* 0002097a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0002097au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2097C:
    /* 0002097c   2  rts */
    c->pc = RC_ADDR(0x0002097cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
