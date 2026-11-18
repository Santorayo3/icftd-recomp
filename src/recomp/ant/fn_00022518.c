/* fn_00022518 - 26 byte(s), 9 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022518(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00022518u): goto L_22518;
    case RC_ADDR(0x0002251cu): goto L_2251C;
    case RC_ADDR(0x0002251eu): goto L_2251E;
    case RC_ADDR(0x00022522u): goto L_22522;
    case RC_ADDR(0x00022526u): goto L_22526;
    case RC_ADDR(0x00022528u): goto L_22528;
    case RC_ADDR(0x0002252au): goto L_2252A;
    case RC_ADDR(0x0002252cu): goto L_2252C;
    case RC_ADDR(0x0002252eu): goto L_2252E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22518:
    /* 00022518   4  tst.w (3508,A4) */
    c->pc = RC_ADDR(0x00022518u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3508u));
    rc_set_nzvc(c, t0, RC_W);

L_2251C:
    /* 0002251c   2  beq 0002252e */
    c->pc = RC_ADDR(0x0002251cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2252E;

L_2251E:
    /* 0002251e   4  move.l (4,A7),-(A7) */
    c->pc = RC_ADDR(0x0002251eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22522:
    /* 00022522   4  jsr (00022480) */
    c->pc = RC_ADDR(0x00022522u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022526u));
    rc_depth++;
    c->pc = RC_ADDR(0x00022480u);
    return;

L_22526:
    /* 00022526   2  addq.l #4,A7 */
    c->pc = RC_ADDR(0x00022526u);
    rc_step(c, m, 8);
    c->a[7] += 0x00000004u;

L_22528:
    /* 00022528   2  tst.l D0 */
    c->pc = RC_ADDR(0x00022528u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_2252A:
    /* 0002252a   2  beq 0002252e */
    c->pc = RC_ADDR(0x0002252au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2252E;

L_2252C:
    /* 0002252c   2  rts */
    c->pc = RC_ADDR(0x0002252cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_2252E:
    /* 0002252e   4  jmp (000234fe) */
    c->pc = RC_ADDR(0x0002252eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000234feu);
    return;

}
