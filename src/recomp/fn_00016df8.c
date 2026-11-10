/* fn_00016df8 - 70 byte(s), 18 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016df8(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00016df8u): goto L_16DF8;
    case RC_ADDR(0x00016dfcu): goto L_16DFC;
    case RC_ADDR(0x00016e00u): goto L_16E00;
    case RC_ADDR(0x00016e02u): goto L_16E02;
    case RC_ADDR(0x00016e08u): goto L_16E08;
    case RC_ADDR(0x00016e0cu): goto L_16E0C;
    case RC_ADDR(0x00016e10u): goto L_16E10;
    case RC_ADDR(0x00016e12u): goto L_16E12;
    case RC_ADDR(0x00016e16u): goto L_16E16;
    case RC_ADDR(0x00016e1au): goto L_16E1A;
    case RC_ADDR(0x00016e1eu): goto L_16E1E;
    case RC_ADDR(0x00016e22u): goto L_16E22;
    case RC_ADDR(0x00016e26u): goto L_16E26;
    case RC_ADDR(0x00016e2au): goto L_16E2A;
    case RC_ADDR(0x00016e2eu): goto L_16E2E;
    case RC_ADDR(0x00016e34u): goto L_16E34;
    case RC_ADDR(0x00016e3au): goto L_16E3A;
    case RC_ADDR(0x00016e3cu): goto L_16E3C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16DF8:
    /* 00016df8   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016df8u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_16DFC:
    /* 00016dfc   4  tst.w (10c6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016dfcu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10c6u));
    rc_set_nzvc(c, t0, RC_W);

L_16E00:
    /* 00016e00   2  beq 00016e3a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016e00u);
    if (rc_cond(c, 7)) goto L_16E3A;

L_16E02:
    /* 00016e02   6  move.w #23,(ffffcdf2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016e02u);
    t0 = 0x00000023u;
    rc_wr16(c, m, (c->a[4] - 0x320eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E08:
    /* 00016e08   4  clr.w (10c6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016e08u);
    rc_wr16(c, m, (c->a[4] + 0x10c6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16E0C:
    /* 00016e0c   4  tst.l (fffffd4e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016e0cu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2b2u));
    rc_set_nzvc(c, t0, RC_L);

L_16E10:
    /* 00016e10   2  beq 00016e2e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016e10u);
    if (rc_cond(c, 7)) goto L_16E2E;

L_16E12:
    /* 00016e12   4  move.w (ffffcdf2,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016e12u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x320eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E16:
    /* 00016e16   4  move.w #3,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016e16u);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E1A:
    /* 00016e1a   4  move.l (fffffd54,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016e1au);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2acu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16E1E:
    /* 00016e1e   4  move.w (fffffd52,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016e1eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2aeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E22:
    /* 00016e22   4  move.l (fffffd4e,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016e22u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2b2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16E26:
    /* 00016e26   4  jsr (ffff80b6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016e26u);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x00016e2au));
    rc_depth++;
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_16E2A:
    /* 00016e2a   4  lea (e,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016e2au);
    c->a[7] = (c->a[7] + 0xeu);

L_16E2E:
    /* 00016e2e   6  move.w #5,(ffffcdf4,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016e2eu);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] - 0x320cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E34:
    /* 00016e34   6  move.w #ffff,(ffffcdf6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016e34u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] - 0x320au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E3A:
    /* 00016e3a   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016e3au);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16E3C:
    /* 00016e3c   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016e3cu);
    rc_ret(c, m);
    return;

}
