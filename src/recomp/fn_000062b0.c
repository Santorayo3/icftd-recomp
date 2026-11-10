/* fn_000062b0 - 70 byte(s), 23 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000062b0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000062b0u): goto L_62B0;
    case RC_ADDR(0x000062b4u): goto L_62B4;
    case RC_ADDR(0x000062b8u): goto L_62B8;
    case RC_ADDR(0x000062bcu): goto L_62BC;
    case RC_ADDR(0x000062beu): goto L_62BE;
    case RC_ADDR(0x000062c2u): goto L_62C2;
    case RC_ADDR(0x000062c4u): goto L_62C4;
    case RC_ADDR(0x000062c6u): goto L_62C6;
    case RC_ADDR(0x000062cau): goto L_62CA;
    case RC_ADDR(0x000062ceu): goto L_62CE;
    case RC_ADDR(0x000062d0u): goto L_62D0;
    case RC_ADDR(0x000062d4u): goto L_62D4;
    case RC_ADDR(0x000062d8u): goto L_62D8;
    case RC_ADDR(0x000062dcu): goto L_62DC;
    case RC_ADDR(0x000062e0u): goto L_62E0;
    case RC_ADDR(0x000062e2u): goto L_62E2;
    case RC_ADDR(0x000062e4u): goto L_62E4;
    case RC_ADDR(0x000062e6u): goto L_62E6;
    case RC_ADDR(0x000062e8u): goto L_62E8;
    case RC_ADDR(0x000062ecu): goto L_62EC;
    case RC_ADDR(0x000062eeu): goto L_62EE;
    case RC_ADDR(0x000062f0u): goto L_62F0;
    case RC_ADDR(0x000062f4u): goto L_62F4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_62B0:
    /* 000062b0   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062b0u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_62B4:
    /* 000062b4   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062b4u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_62B8:
    /* 000062b8   4  cmpi.b #a,(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062b8u);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000000au);

L_62BC:
    /* 000062bc   2  beq 000062d0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062bcu);
    if (rc_cond(c, 7)) goto L_62D0;

L_62BE:
    /* 000062be   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062beu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_62C2:
    /* 000062c2   2  tst.b (A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062c2u);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_62C4:
    /* 000062c4   2  beq 000062d0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062c4u);
    if (rc_cond(c, 7)) goto L_62D0;

L_62C6:
    /* 000062c6   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062c6u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_62CA:
    /* 000062ca   4  addq.l #1,(8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062cau);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_62CE:
    /* 000062ce   2  bra 000062b4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062ceu);
    rc_tick();
    goto L_62B4;

L_62D0:
    /* 000062d0   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062d0u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_62D4:
    /* 000062d4   4  addq.l #1,(8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062d4u);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_62D8:
    /* 000062d8   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062d8u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_62DC:
    /* 000062dc   4  cmpi.b #2b,(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062dcu);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002bu);

L_62E0:
    /* 000062e0   2  bge 000062e8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062e0u);
    if (rc_cond(c, 12)) goto L_62E8;

L_62E2:
    /* 000062e2   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062e2u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_62E4:
    /* 000062e4   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062e4u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_62E6:
    /* 000062e6   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062e6u);
    rc_ret(c, m);
    return;

L_62E8:
    /* 000062e8   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062e8u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_62EC:
    /* 000062ec   2  bsr 0000628a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062ecu);
    rc_push32(c, m, RC_ADDR(0x000062eeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000628au);
    return;

L_62EE:
    /* 000062ee   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062eeu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_62F0:
    /* 000062f0   4  move.l (8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062f0u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_62F4:
    /* 000062f4   2  bra 000062e4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000062f4u);
    rc_tick();
    goto L_62E4;

}
