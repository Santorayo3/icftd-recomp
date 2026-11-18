/* fn_0001e86e - 50 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001e86e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e86eu): goto L_1E86E;
    case RC_ADDR(0x0001e872u): goto L_1E872;
    case RC_ADDR(0x0001e876u): goto L_1E876;
    case RC_ADDR(0x0001e87au): goto L_1E87A;
    case RC_ADDR(0x0001e87eu): goto L_1E87E;
    case RC_ADDR(0x0001e882u): goto L_1E882;
    case RC_ADDR(0x0001e886u): goto L_1E886;
    case RC_ADDR(0x0001e88au): goto L_1E88A;
    case RC_ADDR(0x0001e88eu): goto L_1E88E;
    case RC_ADDR(0x0001e892u): goto L_1E892;
    case RC_ADDR(0x0001e896u): goto L_1E896;
    case RC_ADDR(0x0001e89au): goto L_1E89A;
    case RC_ADDR(0x0001e89cu): goto L_1E89C;
    case RC_ADDR(0x0001e89eu): goto L_1E89E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E86E:
    /* 0001e86e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e86eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E872:
    /* 0001e872   4  pea (307a,A4) */
    c->pc = RC_ADDR(0x0001e872u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x307au));

L_1E876:
    /* 0001e876   4  move.w #12,-(A7) */
    c->pc = RC_ADDR(0x0001e876u);
    rc_step(c, m, 12);
    t0 = 0x00000012u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E87A:
    /* 0001e87a   4  pea (0001e8a0) */
    c->pc = RC_ADDR(0x0001e87au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001e8a0u));

L_1E87E:
    /* 0001e87e   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0001e87eu);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0001e882u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_1E882:
    /* 0001e882   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001e882u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1E886:
    /* 0001e886   4  pea (30c2,A4) */
    c->pc = RC_ADDR(0x0001e886u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x30c2u));

L_1E88A:
    /* 0001e88a   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001e88au);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E88E:
    /* 0001e88e   4  pea (0001e8a5) */
    c->pc = RC_ADDR(0x0001e88eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001e8a5u));

L_1E892:
    /* 0001e892   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0001e892u);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0001e896u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001850eu);
    return;

L_1E896:
    /* 0001e896   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001e896u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1E89A:
    /* 0001e89a   2  bsr 0001e844 */
    c->pc = RC_ADDR(0x0001e89au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e89cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e844u);
    return;

L_1E89C:
    /* 0001e89c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e89cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E89E:
    /* 0001e89e   2  rts */
    c->pc = RC_ADDR(0x0001e89eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
