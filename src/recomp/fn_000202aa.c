/* fn_000202aa - 26 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000202aa(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000202aau): goto L_202AA;
    case RC_ADDR(0x000202aeu): goto L_202AE;
    case RC_ADDR(0x000202b2u): goto L_202B2;
    case RC_ADDR(0x000202b4u): goto L_202B4;
    case RC_ADDR(0x000202b6u): goto L_202B6;
    case RC_ADDR(0x000202b8u): goto L_202B8;
    case RC_ADDR(0x000202bau): goto L_202BA;
    case RC_ADDR(0x000202bcu): goto L_202BC;
    case RC_ADDR(0x000202beu): goto L_202BE;
    case RC_ADDR(0x000202c0u): goto L_202C0;
    case RC_ADDR(0x000202c2u): goto L_202C2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_202AA:
    /* 000202aa   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202aau);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_202AE:
    /* 000202ae   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202aeu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_202B2:
    /* 000202b2   2  move.b (A0)+,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202b2u);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_202B4:
    /* 000202b4   2  lsl.l #8,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202b4u);
    c->d[0] = rc_shift(c, 1, 1, 0x00000008u, rc_d_get(c, 0, RC_L), RC_L);

L_202B6:
    /* 000202b6   2  move.b (A0)+,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202b6u);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_202B8:
    /* 000202b8   2  lsl.l #8,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202b8u);
    c->d[0] = rc_shift(c, 1, 1, 0x00000008u, rc_d_get(c, 0, RC_L), RC_L);

L_202BA:
    /* 000202ba   2  move.b (A0)+,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202bau);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_202BC:
    /* 000202bc   2  lsl.l #8,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202bcu);
    c->d[0] = rc_shift(c, 1, 1, 0x00000008u, rc_d_get(c, 0, RC_L), RC_L);

L_202BE:
    /* 000202be   2  move.b (A0)+,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202beu);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_202C0:
    /* 000202c0   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202c0u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_202C2:
    /* 000202c2   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000202c2u);
    rc_ret(c, m);
    return;

}
