/* fn_0001003a - 54 byte(s), 19 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001003a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001003au): goto L_1003A;
    case RC_ADDR(0x0001003eu): goto L_1003E;
    case RC_ADDR(0x00010042u): goto L_10042;
    case RC_ADDR(0x00010046u): goto L_10046;
    case RC_ADDR(0x0001004au): goto L_1004A;
    case RC_ADDR(0x0001004eu): goto L_1004E;
    case RC_ADDR(0x00010050u): goto L_10050;
    case RC_ADDR(0x00010052u): goto L_10052;
    case RC_ADDR(0x00010054u): goto L_10054;
    case RC_ADDR(0x00010056u): goto L_10056;
    case RC_ADDR(0x00010058u): goto L_10058;
    case RC_ADDR(0x0001005cu): goto L_1005C;
    case RC_ADDR(0x00010060u): goto L_10060;
    case RC_ADDR(0x00010062u): goto L_10062;
    case RC_ADDR(0x00010064u): goto L_10064;
    case RC_ADDR(0x00010066u): goto L_10066;
    case RC_ADDR(0x00010068u): goto L_10068;
    case RC_ADDR(0x0001006cu): goto L_1006C;
    case RC_ADDR(0x0001006eu): goto L_1006E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1003A:
    /* 0001003a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001003au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1003E:
    /* 0001003e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001003eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_10042:
    /* 00010042   4  movea.l (c,A5),A1 */
    c->pc = RC_ADDR(0x00010042u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[1] = t0;

L_10046:
    /* 00010046   4  movea.l (10,A5),A2 */
    c->pc = RC_ADDR(0x00010046u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[2] = t0;

L_1004A:
    /* 0001004a   4  move.l (14,A5),D0 */
    c->pc = RC_ADDR(0x0001004au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1004E:
    /* 0001004e   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x0001004eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10050:
    /* 00010050   2  lsr.l #1,D1 */
    c->pc = RC_ADDR(0x00010050u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_10052:
    /* 00010052   2  subq.l #1,D1 */
    c->pc = RC_ADDR(0x00010052u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_10054:
    /* 00010054   2  move.b (A0),(A1)+ */
    c->pc = RC_ADDR(0x00010054u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    t3 = c->a[1];
    c->a[1] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_10056:
    /* 00010056   2  addq.l #2,A0 */
    c->pc = RC_ADDR(0x00010056u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000002u;

L_10058:
    /* 00010058   4  dbf D1,00010054 */
    c->pc = RC_ADDR(0x00010058u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_10054; }
    }

L_1005C:
    /* 0001005c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001005cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_10060:
    /* 00010060   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x00010060u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10062:
    /* 00010062   2  subq.l #1,D1 */
    c->pc = RC_ADDR(0x00010062u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_10064:
    /* 00010064   2  move.b (A0),(A2)+ */
    c->pc = RC_ADDR(0x00010064u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    t3 = c->a[2];
    c->a[2] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_10066:
    /* 00010066   2  move.b (A0)+,(A2)+ */
    c->pc = RC_ADDR(0x00010066u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    t3 = c->a[2];
    c->a[2] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_10068:
    /* 00010068   4  dbf D1,00010064 */
    c->pc = RC_ADDR(0x00010068u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_10064; }
    }

L_1006C:
    /* 0001006c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001006cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1006E:
    /* 0001006e   2  rts */
    c->pc = RC_ADDR(0x0001006eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
