/* fn_0000628a - 38 byte(s), 12 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000628a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000628au): goto L_628A;
    case RC_ADDR(0x0000628eu): goto L_628E;
    case RC_ADDR(0x00006292u): goto L_6292;
    case RC_ADDR(0x00006296u): goto L_6296;
    case RC_ADDR(0x0000629au): goto L_629A;
    case RC_ADDR(0x0000629cu): goto L_629C;
    case RC_ADDR(0x0000629eu): goto L_629E;
    case RC_ADDR(0x000062a2u): goto L_62A2;
    case RC_ADDR(0x000062a6u): goto L_62A6;
    case RC_ADDR(0x000062aau): goto L_62AA;
    case RC_ADDR(0x000062acu): goto L_62AC;
    case RC_ADDR(0x000062aeu): goto L_62AE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_628A:
    /* 0000628a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000628au);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_628E:
    /* 0000628e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000628eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_6292:
    /* 00006292   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x00006292u);
    rc_step(c, m);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_6296:
    /* 00006296   4  cmpi.b #a,(A0) */
    c->pc = RC_ADDR(0x00006296u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000000au);

L_629A:
    /* 0000629a   2  beq 0000629e */
    c->pc = RC_ADDR(0x0000629au);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_629E;

L_629C:
    /* 0000629c   2  bra 0000628e */
    c->pc = RC_ADDR(0x0000629cu);
    rc_step(c, m);
    rc_tick();
    goto L_628E;

L_629E:
    /* 0000629e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000629eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_62A2:
    /* 000062a2   4  subq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x000062a2u);
    rc_step(c, m);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_62A6:
    /* 000062a6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000062a6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_62AA:
    /* 000062aa   2  clr.b (A0) */
    c->pc = RC_ADDR(0x000062aau);
    rc_step(c, m);
    rc_wr8(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_62AC:
    /* 000062ac   2  unlk A5 */
    c->pc = RC_ADDR(0x000062acu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_62AE:
    /* 000062ae   2  rts */
    c->pc = RC_ADDR(0x000062aeu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
