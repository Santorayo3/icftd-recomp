/* fn_0001f914 - 72 byte(s), 27 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f914(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f914u): goto L_1F914;
    case RC_ADDR(0x0001f918u): goto L_1F918;
    case RC_ADDR(0x0001f91cu): goto L_1F91C;
    case RC_ADDR(0x0001f91eu): goto L_1F91E;
    case RC_ADDR(0x0001f920u): goto L_1F920;
    case RC_ADDR(0x0001f922u): goto L_1F922;
    case RC_ADDR(0x0001f924u): goto L_1F924;
    case RC_ADDR(0x0001f928u): goto L_1F928;
    case RC_ADDR(0x0001f92au): goto L_1F92A;
    case RC_ADDR(0x0001f92cu): goto L_1F92C;
    case RC_ADDR(0x0001f92eu): goto L_1F92E;
    case RC_ADDR(0x0001f930u): goto L_1F930;
    case RC_ADDR(0x0001f934u): goto L_1F934;
    case RC_ADDR(0x0001f936u): goto L_1F936;
    case RC_ADDR(0x0001f938u): goto L_1F938;
    case RC_ADDR(0x0001f93au): goto L_1F93A;
    case RC_ADDR(0x0001f93cu): goto L_1F93C;
    case RC_ADDR(0x0001f93eu): goto L_1F93E;
    case RC_ADDR(0x0001f942u): goto L_1F942;
    case RC_ADDR(0x0001f944u): goto L_1F944;
    case RC_ADDR(0x0001f948u): goto L_1F948;
    case RC_ADDR(0x0001f94cu): goto L_1F94C;
    case RC_ADDR(0x0001f94eu): goto L_1F94E;
    case RC_ADDR(0x0001f950u): goto L_1F950;
    case RC_ADDR(0x0001f954u): goto L_1F954;
    case RC_ADDR(0x0001f958u): goto L_1F958;
    case RC_ADDR(0x0001f95au): goto L_1F95A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F914:
    /* 0001f914   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001f914u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F918:
    /* 0001f918   4  move.w (14,A5),D0 */
    c->pc = RC_ADDR(0x0001f918u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F91C:
    /* 0001f91c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001f91cu);
    rc_ext_l(c, 0);

L_1F91E:
    /* 0001f91e   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f91eu);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F920:
    /* 0001f920   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x0001f920u);
    c->d[0] = rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_1F922:
    /* 0001f922   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f922u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F924:
    /* 0001f924   4  move.w (12,A5),D0 */
    c->pc = RC_ADDR(0x0001f924u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F928:
    /* 0001f928   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001f928u);
    rc_ext_l(c, 0);

L_1F92A:
    /* 0001f92a   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f92au);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F92C:
    /* 0001f92c   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x0001f92cu);
    c->d[0] = rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_1F92E:
    /* 0001f92e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f92eu);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F930:
    /* 0001f930   4  move.w (10,A5),D0 */
    c->pc = RC_ADDR(0x0001f930u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F934:
    /* 0001f934   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001f934u);
    rc_ext_l(c, 0);

L_1F936:
    /* 0001f936   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f936u);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F938:
    /* 0001f938   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x0001f938u);
    c->d[0] = rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_1F93A:
    /* 0001f93a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001f93au);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F93C:
    /* 0001f93c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f93cu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F93E:
    /* 0001f93e   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x0001f93eu);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F942:
    /* 0001f942   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001f942u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F944:
    /* 0001f944   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f944u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F948:
    /* 0001f948   4  move.b (9,A5),D0 */
    c->pc = RC_ADDR(0x0001f948u);
    t0 = rc_rd8(c, m, (c->a[5] + 0x9u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F94C:
    /* 0001f94c   2  ext.w D0 */
    c->pc = RC_ADDR(0x0001f94cu);
    rc_ext_w(c, 0);

L_1F94E:
    /* 0001f94e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001f94eu);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F950:
    /* 0001f950   4  jsr (0001f2ae) */
    c->pc = RC_ADDR(0x0001f950u);
    rc_push32(c, m, RC_ADDR(0x0001f954u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_1F954:
    /* 0001f954   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0001f954u);
    c->a[7] = (c->a[7] + 0x14u);

L_1F958:
    /* 0001f958   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f958u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F95A:
    /* 0001f95a   2  rts */
    c->pc = RC_ADDR(0x0001f95au);
    rc_ret(c, m);
    return;

}
