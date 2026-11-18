/* fn_0001667a - 36 byte(s), 9 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001667a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001667au): goto L_1667A;
    case RC_ADDR(0x0001667eu): goto L_1667E;
    case RC_ADDR(0x00016682u): goto L_16682;
    case RC_ADDR(0x00016686u): goto L_16686;
    case RC_ADDR(0x0001668au): goto L_1668A;
    case RC_ADDR(0x0001668eu): goto L_1668E;
    case RC_ADDR(0x00016694u): goto L_16694;
    case RC_ADDR(0x0001669au): goto L_1669A;
    case RC_ADDR(0x0001669cu): goto L_1669C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1667A:
    /* 0001667a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001667au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1667E:
    /* 0001667e   4  clr.w (1c72,A4) */
    c->pc = RC_ADDR(0x0001667eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1c72u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16682:
    /* 00016682   4  clr.w (1ab2,A4) */
    c->pc = RC_ADDR(0x00016682u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1ab2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16686:
    /* 00016686   4  clr.w (1c4a,A4) */
    c->pc = RC_ADDR(0x00016686u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1c4au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1668A:
    /* 0001668a   4  clr.w (1c40,A4) */
    c->pc = RC_ADDR(0x0001668au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1c40u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1668E:
    /* 0001668e   6  move.w #ffff,(1c3e,A4) */
    c->pc = RC_ADDR(0x0001668eu);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x1c3eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16694:
    /* 00016694   6  move.w #1,(1c64,A4) */
    c->pc = RC_ADDR(0x00016694u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1c64u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1669A:
    /* 0001669a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001669au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1669C:
    /* 0001669c   2  rts */
    c->pc = RC_ADDR(0x0001669cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
