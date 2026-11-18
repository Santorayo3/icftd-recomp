/* fn_0001d09a - 186 byte(s), 50 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001d09a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d09au): goto L_1D09A;
    case RC_ADDR(0x0001d09eu): goto L_1D09E;
    case RC_ADDR(0x0001d0a2u): goto L_1D0A2;
    case RC_ADDR(0x0001d0a6u): goto L_1D0A6;
    case RC_ADDR(0x0001d0aau): goto L_1D0AA;
    case RC_ADDR(0x0001d0aeu): goto L_1D0AE;
    case RC_ADDR(0x0001d0b2u): goto L_1D0B2;
    case RC_ADDR(0x0001d0b6u): goto L_1D0B6;
    case RC_ADDR(0x0001d0bau): goto L_1D0BA;
    case RC_ADDR(0x0001d0beu): goto L_1D0BE;
    case RC_ADDR(0x0001d0c2u): goto L_1D0C2;
    case RC_ADDR(0x0001d0c6u): goto L_1D0C6;
    case RC_ADDR(0x0001d0cau): goto L_1D0CA;
    case RC_ADDR(0x0001d0ceu): goto L_1D0CE;
    case RC_ADDR(0x0001d0d2u): goto L_1D0D2;
    case RC_ADDR(0x0001d0d6u): goto L_1D0D6;
    case RC_ADDR(0x0001d0dau): goto L_1D0DA;
    case RC_ADDR(0x0001d0deu): goto L_1D0DE;
    case RC_ADDR(0x0001d0e2u): goto L_1D0E2;
    case RC_ADDR(0x0001d0e6u): goto L_1D0E6;
    case RC_ADDR(0x0001d0e8u): goto L_1D0E8;
    case RC_ADDR(0x0001d0ecu): goto L_1D0EC;
    case RC_ADDR(0x0001d0f0u): goto L_1D0F0;
    case RC_ADDR(0x0001d0f4u): goto L_1D0F4;
    case RC_ADDR(0x0001d0f8u): goto L_1D0F8;
    case RC_ADDR(0x0001d0fcu): goto L_1D0FC;
    case RC_ADDR(0x0001d100u): goto L_1D100;
    case RC_ADDR(0x0001d102u): goto L_1D102;
    case RC_ADDR(0x0001d106u): goto L_1D106;
    case RC_ADDR(0x0001d10au): goto L_1D10A;
    case RC_ADDR(0x0001d10eu): goto L_1D10E;
    case RC_ADDR(0x0001d112u): goto L_1D112;
    case RC_ADDR(0x0001d116u): goto L_1D116;
    case RC_ADDR(0x0001d11au): goto L_1D11A;
    case RC_ADDR(0x0001d11cu): goto L_1D11C;
    case RC_ADDR(0x0001d120u): goto L_1D120;
    case RC_ADDR(0x0001d124u): goto L_1D124;
    case RC_ADDR(0x0001d128u): goto L_1D128;
    case RC_ADDR(0x0001d12cu): goto L_1D12C;
    case RC_ADDR(0x0001d130u): goto L_1D130;
    case RC_ADDR(0x0001d134u): goto L_1D134;
    case RC_ADDR(0x0001d136u): goto L_1D136;
    case RC_ADDR(0x0001d13au): goto L_1D13A;
    case RC_ADDR(0x0001d13eu): goto L_1D13E;
    case RC_ADDR(0x0001d142u): goto L_1D142;
    case RC_ADDR(0x0001d146u): goto L_1D146;
    case RC_ADDR(0x0001d14au): goto L_1D14A;
    case RC_ADDR(0x0001d14eu): goto L_1D14E;
    case RC_ADDR(0x0001d150u): goto L_1D150;
    case RC_ADDR(0x0001d152u): goto L_1D152;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D09A:
    /* 0001d09a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001d09au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D09E:
    /* 0001d09e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001d09eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D0A2:
    /* 0001d0a2   4  pea (0001d164) */
    c->pc = RC_ADDR(0x0001d0a2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d164u));

L_1D0A6:
    /* 0001d0a6   4  pea (0001d158) */
    c->pc = RC_ADDR(0x0001d0a6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d158u));

L_1D0AA:
    /* 0001d0aa   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0001d0aau);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0001d0aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_1D0AE:
    /* 0001d0ae   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001d0aeu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1D0B2:
    /* 0001d0b2   4  pea (2c96,A4) */
    c->pc = RC_ADDR(0x0001d0b2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2c96u));

L_1D0B6:
    /* 0001d0b6   4  pea (2c82,A4) */
    c->pc = RC_ADDR(0x0001d0b6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2c82u));

L_1D0BA:
    /* 0001d0ba   4  pea (0001d16b) */
    c->pc = RC_ADDR(0x0001d0bau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d16bu));

L_1D0BE:
    /* 0001d0be   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0001d0beu);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0001d0c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_1D0C2:
    /* 0001d0c2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001d0c2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1D0C6:
    /* 0001d0c6   4  move.l D0,(2c72,A4) */
    c->pc = RC_ADDR(0x0001d0c6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2c72u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D0CA:
    /* 0001d0ca   4  beq 0001d14e */
    c->pc = RC_ADDR(0x0001d0cau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D14E;

L_1D0CE:
    /* 0001d0ce   4  pea (2c9a,A4) */
    c->pc = RC_ADDR(0x0001d0ceu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2c9au));

L_1D0D2:
    /* 0001d0d2   4  pea (2c84,A4) */
    c->pc = RC_ADDR(0x0001d0d2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2c84u));

L_1D0D6:
    /* 0001d0d6   4  pea (0001d172) */
    c->pc = RC_ADDR(0x0001d0d6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d172u));

L_1D0DA:
    /* 0001d0da   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0001d0dau);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0001d0deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_1D0DE:
    /* 0001d0de   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001d0deu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1D0E2:
    /* 0001d0e2   4  move.l D0,(2c76,A4) */
    c->pc = RC_ADDR(0x0001d0e2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2c76u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D0E6:
    /* 0001d0e6   2  beq 0001d14e */
    c->pc = RC_ADDR(0x0001d0e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D14E;

L_1D0E8:
    /* 0001d0e8   4  pea (2c86,A4) */
    c->pc = RC_ADDR(0x0001d0e8u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2c86u));

L_1D0EC:
    /* 0001d0ec   4  pea (2c7a,A4) */
    c->pc = RC_ADDR(0x0001d0ecu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2c7au));

L_1D0F0:
    /* 0001d0f0   4  pea (0001d17c) */
    c->pc = RC_ADDR(0x0001d0f0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d17cu));

L_1D0F4:
    /* 0001d0f4   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0001d0f4u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0001d0f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_1D0F8:
    /* 0001d0f8   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001d0f8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1D0FC:
    /* 0001d0fc   4  move.l D0,(2c62,A4) */
    c->pc = RC_ADDR(0x0001d0fcu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2c62u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D100:
    /* 0001d100   2  beq 0001d14e */
    c->pc = RC_ADDR(0x0001d100u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D14E;

L_1D102:
    /* 0001d102   4  pea (2c8a,A4) */
    c->pc = RC_ADDR(0x0001d102u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2c8au));

L_1D106:
    /* 0001d106   4  pea (2c7c,A4) */
    c->pc = RC_ADDR(0x0001d106u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2c7cu));

L_1D10A:
    /* 0001d10a   4  pea (0001d189) */
    c->pc = RC_ADDR(0x0001d10au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d189u));

L_1D10E:
    /* 0001d10e   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0001d10eu);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0001d112u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_1D112:
    /* 0001d112   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001d112u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1D116:
    /* 0001d116   4  move.l D0,(2c66,A4) */
    c->pc = RC_ADDR(0x0001d116u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2c66u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D11A:
    /* 0001d11a   2  beq 0001d14e */
    c->pc = RC_ADDR(0x0001d11au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D14E;

L_1D11C:
    /* 0001d11c   4  pea (2c8e,A4) */
    c->pc = RC_ADDR(0x0001d11cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2c8eu));

L_1D120:
    /* 0001d120   4  pea (2c7e,A4) */
    c->pc = RC_ADDR(0x0001d120u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2c7eu));

L_1D124:
    /* 0001d124   4  pea (0001d191) */
    c->pc = RC_ADDR(0x0001d124u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d191u));

L_1D128:
    /* 0001d128   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0001d128u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0001d12cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_1D12C:
    /* 0001d12c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001d12cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1D130:
    /* 0001d130   4  move.l D0,(2c6a,A4) */
    c->pc = RC_ADDR(0x0001d130u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2c6au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D134:
    /* 0001d134   2  beq 0001d14e */
    c->pc = RC_ADDR(0x0001d134u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D14E;

L_1D136:
    /* 0001d136   4  pea (2c92,A4) */
    c->pc = RC_ADDR(0x0001d136u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2c92u));

L_1D13A:
    /* 0001d13a   4  pea (2c80,A4) */
    c->pc = RC_ADDR(0x0001d13au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2c80u));

L_1D13E:
    /* 0001d13e   4  pea (0001d19d) */
    c->pc = RC_ADDR(0x0001d13eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d19du));

L_1D142:
    /* 0001d142   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0001d142u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0001d146u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_1D146:
    /* 0001d146   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001d146u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1D14A:
    /* 0001d14a   4  move.l D0,(2c6e,A4) */
    c->pc = RC_ADDR(0x0001d14au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2c6eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D14E:
    /* 0001d14e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d14eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D150:
    /* 0001d150   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d150u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D152:
    /* 0001d152   2  rts */
    c->pc = RC_ADDR(0x0001d152u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
