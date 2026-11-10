/* fn_00020204 - 66 byte(s), 26 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020204(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00020204u): goto L_20204;
    case RC_ADDR(0x00020208u): goto L_20208;
    case RC_ADDR(0x0002020au): goto L_2020A;
    case RC_ADDR(0x0002020eu): goto L_2020E;
    case RC_ADDR(0x00020212u): goto L_20212;
    case RC_ADDR(0x00020214u): goto L_20214;
    case RC_ADDR(0x00020216u): goto L_20216;
    case RC_ADDR(0x00020218u): goto L_20218;
    case RC_ADDR(0x0002021au): goto L_2021A;
    case RC_ADDR(0x0002021cu): goto L_2021C;
    case RC_ADDR(0x0002021eu): goto L_2021E;
    case RC_ADDR(0x00020220u): goto L_20220;
    case RC_ADDR(0x00020224u): goto L_20224;
    case RC_ADDR(0x00020226u): goto L_20226;
    case RC_ADDR(0x0002022au): goto L_2022A;
    case RC_ADDR(0x0002022cu): goto L_2022C;
    case RC_ADDR(0x0002022eu): goto L_2022E;
    case RC_ADDR(0x00020230u): goto L_20230;
    case RC_ADDR(0x00020234u): goto L_20234;
    case RC_ADDR(0x00020236u): goto L_20236;
    case RC_ADDR(0x0002023au): goto L_2023A;
    case RC_ADDR(0x0002023cu): goto L_2023C;
    case RC_ADDR(0x0002023eu): goto L_2023E;
    case RC_ADDR(0x00020240u): goto L_20240;
    case RC_ADDR(0x00020242u): goto L_20242;
    case RC_ADDR(0x00020244u): goto L_20244;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20204:
    /* 00020204   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00020204u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_20208:
    /* 00020208   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00020208u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2020A:
    /* 0002020a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0002020au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_2020E:
    /* 0002020e   4  movea.l (c,A5),A1 */
    c->pc = RC_ADDR(0x0002020eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[1] = t0;

L_20212:
    /* 00020212   2  move.b (A0)+,D1 */
    c->pc = RC_ADDR(0x00020212u);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20214:
    /* 00020214   2  move.b (A1)+,D2 */
    c->pc = RC_ADDR(0x00020214u);
    t3 = c->a[1];
    c->a[1] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20216:
    /* 00020216   2  beq 0002023c */
    c->pc = RC_ADDR(0x00020216u);
    if (rc_cond(c, 7)) goto L_2023C;

L_20218:
    /* 00020218   2  cmp.b D1,D2 */
    c->pc = RC_ADDR(0x00020218u);
    t0 = rc_d_get(c, 1, RC_B);
    t1 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_2021A:
    /* 0002021a   2  beq 00020212 */
    c->pc = RC_ADDR(0x0002021au);
    if (rc_cond(c, 7)) { rc_tick(); goto L_20212; }

L_2021C:
    /* 0002021c   2  tst.b D1 */
    c->pc = RC_ADDR(0x0002021cu);
    t0 = rc_d_get(c, 1, RC_B);
    rc_set_nzvc(c, t0, RC_B);

L_2021E:
    /* 0002021e   2  bmi 0002023c */
    c->pc = RC_ADDR(0x0002021eu);
    if (rc_cond(c, 11)) goto L_2023C;

L_20220:
    /* 00020220   4  cmpi.b #60,D1 */
    c->pc = RC_ADDR(0x00020220u);
    t0 = rc_d_get(c, 1, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000060u);

L_20224:
    /* 00020224   2  bgt 0002022c */
    c->pc = RC_ADDR(0x00020224u);
    if (rc_cond(c, 14)) goto L_2022C;

L_20226:
    /* 00020226   4  addi.b #20,D1 */
    c->pc = RC_ADDR(0x00020226u);
    t1 = rc_d_get(c, 1, RC_B);
    t2 = t1 + 0x00000020u;
    rc_flags_add(c, RC_B, t1, 0x00000020u, t2, 0);
    rc_d_set(c, 1, RC_B, t2);

L_2022A:
    /* 0002022a   2  bra 00020218 */
    c->pc = RC_ADDR(0x0002022au);
    rc_tick();
    goto L_20218;

L_2022C:
    /* 0002022c   2  tst.b D2 */
    c->pc = RC_ADDR(0x0002022cu);
    t0 = rc_d_get(c, 2, RC_B);
    rc_set_nzvc(c, t0, RC_B);

L_2022E:
    /* 0002022e   2  bmi 0002023c */
    c->pc = RC_ADDR(0x0002022eu);
    if (rc_cond(c, 11)) goto L_2023C;

L_20230:
    /* 00020230   4  cmpi.b #60,D2 */
    c->pc = RC_ADDR(0x00020230u);
    t0 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000060u);

L_20234:
    /* 00020234   2  bgt 0002023c */
    c->pc = RC_ADDR(0x00020234u);
    if (rc_cond(c, 14)) goto L_2023C;

L_20236:
    /* 00020236   4  addi.b #20,D2 */
    c->pc = RC_ADDR(0x00020236u);
    t1 = rc_d_get(c, 2, RC_B);
    t2 = t1 + 0x00000020u;
    rc_flags_add(c, RC_B, t1, 0x00000020u, t2, 0);
    rc_d_set(c, 2, RC_B, t2);

L_2023A:
    /* 0002023a   2  bra 00020218 */
    c->pc = RC_ADDR(0x0002023au);
    rc_tick();
    goto L_20218;

L_2023C:
    /* 0002023c   2  cmp.b D1,D2 */
    c->pc = RC_ADDR(0x0002023cu);
    t0 = rc_d_get(c, 1, RC_B);
    t1 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_2023E:
    /* 0002023e   2  beq 00020242 */
    c->pc = RC_ADDR(0x0002023eu);
    if (rc_cond(c, 7)) goto L_20242;

L_20240:
    /* 00020240   2  clr.l D0 */
    c->pc = RC_ADDR(0x00020240u);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20242:
    /* 00020242   2  unlk A5 */
    c->pc = RC_ADDR(0x00020242u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_20244:
    /* 00020244   2  rts */
    c->pc = RC_ADDR(0x00020244u);
    rc_ret(c, m);
    return;

}
