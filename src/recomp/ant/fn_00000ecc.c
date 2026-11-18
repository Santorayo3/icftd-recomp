/* fn_00000ecc - 64 byte(s), 18 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00000ecc(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00000eccu): goto L_ECC;
    case RC_ADDR(0x00000ed0u): goto L_ED0;
    case RC_ADDR(0x00000ed4u): goto L_ED4;
    case RC_ADDR(0x00000edau): goto L_EDA;
    case RC_ADDR(0x00000edcu): goto L_EDC;
    case RC_ADDR(0x00000ee0u): goto L_EE0;
    case RC_ADDR(0x00000ee4u): goto L_EE4;
    case RC_ADDR(0x00000ee8u): goto L_EE8;
    case RC_ADDR(0x00000eeau): goto L_EEA;
    case RC_ADDR(0x00000ef2u): goto L_EF2;
    case RC_ADDR(0x00000ef8u): goto L_EF8;
    case RC_ADDR(0x00000efau): goto L_EFA;
    case RC_ADDR(0x00000efeu): goto L_EFE;
    case RC_ADDR(0x00000f00u): goto L_F00;
    case RC_ADDR(0x00000f02u): goto L_F02;
    case RC_ADDR(0x00000f04u): goto L_F04;
    case RC_ADDR(0x00000f08u): goto L_F08;
    case RC_ADDR(0x00000f0au): goto L_F0A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_ECC:
    /* 00000ecc   4  link.w A5,#ffffff98 */
    c->pc = RC_ADDR(0x00000eccu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x68u;

L_ED0:
    /* 00000ed0   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00000ed0u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_ED4:
    /* 00000ed4   6  cmpi.b #fe,(9,A5) */
    c->pc = RC_ADDR(0x00000ed4u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[5] + 0x9u));
    rc_cmp(c, RC_B, t0, 0x000000feu);

L_EDA:
    /* 00000eda   2  bne 00000ef2 */
    c->pc = RC_ADDR(0x00000edau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_EF2;

L_EDC:
    /* 00000edc   4  pea (00000003).l */
    c->pc = RC_ADDR(0x00000edcu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000003u);

L_EE0:
    /* 00000ee0   4  pea (ffffff98,A5) */
    c->pc = RC_ADDR(0x00000ee0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x68u));

L_EE4:
    /* 00000ee4   4  jsr (00000e54) */
    c->pc = RC_ADDR(0x00000ee4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000ee8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e54u);
    return;

L_EE8:
    /* 00000ee8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000ee8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_EEA:
    /* 00000eea   8  move.l #3,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00000eeau);
    rc_step(c, m, 24);
    t0 = 0x00000003u;
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EF2:
    /* 00000ef2   6  cmpi.b #fd,(9,A5) */
    c->pc = RC_ADDR(0x00000ef2u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[5] + 0x9u));
    rc_cmp(c, RC_B, t0, 0x000000fdu);

L_EF8:
    /* 00000ef8   2  bne 00000f08 */
    c->pc = RC_ADDR(0x00000ef8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_F08;

L_EFA:
    /* 00000efa   4  pea (ffffff98,A5) */
    c->pc = RC_ADDR(0x00000efau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x68u));

L_EFE:
    /* 00000efe   2  bsr 00000e9a */
    c->pc = RC_ADDR(0x00000efeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00000f00u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000e9au);
    return;

L_F00:
    /* 00000f00   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000f00u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_F02:
    /* 00000f02   2  ext.l D0 */
    c->pc = RC_ADDR(0x00000f02u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F04:
    /* 00000f04   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00000f04u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_F08:
    /* 00000f08   2  unlk A5 */
    c->pc = RC_ADDR(0x00000f08u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_F0A:
    /* 00000f0a   2  rts */
    c->pc = RC_ADDR(0x00000f0au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
