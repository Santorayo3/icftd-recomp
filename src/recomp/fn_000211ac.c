/* fn_000211ac - 40 byte(s), 17 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000211ac(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000211acu): goto L_211AC;
    case RC_ADDR(0x000211b0u): goto L_211B0;
    case RC_ADDR(0x000211b2u): goto L_211B2;
    case RC_ADDR(0x000211b4u): goto L_211B4;
    case RC_ADDR(0x000211b6u): goto L_211B6;
    case RC_ADDR(0x000211b8u): goto L_211B8;
    case RC_ADDR(0x000211bau): goto L_211BA;
    case RC_ADDR(0x000211bcu): goto L_211BC;
    case RC_ADDR(0x000211beu): goto L_211BE;
    case RC_ADDR(0x000211c0u): goto L_211C0;
    case RC_ADDR(0x000211c4u): goto L_211C4;
    case RC_ADDR(0x000211c6u): goto L_211C6;
    case RC_ADDR(0x000211c8u): goto L_211C8;
    case RC_ADDR(0x000211cau): goto L_211CA;
    case RC_ADDR(0x000211ccu): goto L_211CC;
    case RC_ADDR(0x000211d0u): goto L_211D0;
    case RC_ADDR(0x000211d2u): goto L_211D2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_211AC:
    /* 000211ac   4  movem.l { A3 A6 },-(SP) */
    c->pc = RC_ADDR(0x000211acu);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    c->a[7] = t3;

L_211B0:
    /* 000211b0   2  clr.l D4 */
    c->pc = RC_ADDR(0x000211b0u);
    rc_step(c, m);
    rc_d_set(c, 4, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_211B2:
    /* 000211b2   2  tst.l D0 */
    c->pc = RC_ADDR(0x000211b2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_211B4:
    /* 000211b4   2  bpl 000211ba */
    c->pc = RC_ADDR(0x000211b4u);
    rc_step(c, m);
    if (rc_cond(c, 10)) goto L_211BA;

L_211B6:
    /* 000211b6   2  neg.l D0 */
    c->pc = RC_ADDR(0x000211b6u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_211B8:
    /* 000211b8   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x000211b8u);
    rc_step(c, m);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_211BA:
    /* 000211ba   2  tst.l D1 */
    c->pc = RC_ADDR(0x000211bau);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_211BC:
    /* 000211bc   2  bpl 000211c4 */
    c->pc = RC_ADDR(0x000211bcu);
    rc_step(c, m);
    if (rc_cond(c, 10)) goto L_211C4;

L_211BE:
    /* 000211be   2  neg.l D1 */
    c->pc = RC_ADDR(0x000211beu);
    rc_step(c, m);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_211C0:
    /* 000211c0   4  eori.w #1,D4 */
    c->pc = RC_ADDR(0x000211c0u);
    rc_step(c, m);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 ^ 0x00000001u;
    rc_d_set(c, 4, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_211C4:
    /* 000211c4   2  bsr 00021204 */
    c->pc = RC_ADDR(0x000211c4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000211c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021204u);
    return;

L_211C6:
    /* 000211c6   2  tst.w D4 */
    c->pc = RC_ADDR(0x000211c6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_211C8:
    /* 000211c8   2  beq 000211cc */
    c->pc = RC_ADDR(0x000211c8u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_211CC;

L_211CA:
    /* 000211ca   2  neg.l D0 */
    c->pc = RC_ADDR(0x000211cau);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_211CC:
    /* 000211cc   4  movem.l (SP)+,{ D1 D4 } */
    c->pc = RC_ADDR(0x000211ccu);
    rc_step(c, m);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_211D0:
    /* 000211d0   2  tst.l D0 */
    c->pc = RC_ADDR(0x000211d0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_211D2:
    /* 000211d2   2  rts */
    c->pc = RC_ADDR(0x000211d2u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
