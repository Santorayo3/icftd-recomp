/* fn_000022aa - 38 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000022aa(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000022aau): goto L_22AA;
    case RC_ADDR(0x000022aeu): goto L_22AE;
    case RC_ADDR(0x000022b2u): goto L_22B2;
    case RC_ADDR(0x000022b4u): goto L_22B4;
    case RC_ADDR(0x000022b6u): goto L_22B6;
    case RC_ADDR(0x000022bau): goto L_22BA;
    case RC_ADDR(0x000022beu): goto L_22BE;
    case RC_ADDR(0x000022c2u): goto L_22C2;
    case RC_ADDR(0x000022c4u): goto L_22C4;
    case RC_ADDR(0x000022c6u): goto L_22C6;
    case RC_ADDR(0x000022c8u): goto L_22C8;
    case RC_ADDR(0x000022cau): goto L_22CA;
    case RC_ADDR(0x000022ccu): goto L_22CC;
    case RC_ADDR(0x000022ceu): goto L_22CE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22AA:
    /* 000022aa   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000022aau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_22AE:
    /* 000022ae   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000022aeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_22B2:
    /* 000022b2   2  tst.b (A0) */
    c->pc = RC_ADDR(0x000022b2u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_22B4:
    /* 000022b4   2  beq 000022cc */
    c->pc = RC_ADDR(0x000022b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22CC;

L_22B6:
    /* 000022b6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000022b6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_22BA:
    /* 000022ba   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x000022bau);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_22BE:
    /* 000022be   4  cmpi.b #20,(A0) */
    c->pc = RC_ADDR(0x000022beu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_22C2:
    /* 000022c2   2  ble 000022ca */
    c->pc = RC_ADDR(0x000022c2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_22CA;

L_22C4:
    /* 000022c4   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000022c4u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_22C6:
    /* 000022c6   2  unlk A5 */
    c->pc = RC_ADDR(0x000022c6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_22C8:
    /* 000022c8   2  rts */
    c->pc = RC_ADDR(0x000022c8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_22CA:
    /* 000022ca   2  bra 000022ae */
    c->pc = RC_ADDR(0x000022cau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_22AE;

L_22CC:
    /* 000022cc   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000022ccu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_22CE:
    /* 000022ce   2  bra 000022c6 */
    c->pc = RC_ADDR(0x000022ceu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_22C6;

}
