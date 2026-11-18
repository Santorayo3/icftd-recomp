/* fn_0000ac3c - 156 byte(s), 41 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000ac3c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ac3cu): goto L_AC3C;
    case RC_ADDR(0x0000ac40u): goto L_AC40;
    case RC_ADDR(0x0000ac46u): goto L_AC46;
    case RC_ADDR(0x0000ac4au): goto L_AC4A;
    case RC_ADDR(0x0000ac4eu): goto L_AC4E;
    case RC_ADDR(0x0000ac52u): goto L_AC52;
    case RC_ADDR(0x0000ac56u): goto L_AC56;
    case RC_ADDR(0x0000ac5au): goto L_AC5A;
    case RC_ADDR(0x0000ac5eu): goto L_AC5E;
    case RC_ADDR(0x0000ac62u): goto L_AC62;
    case RC_ADDR(0x0000ac66u): goto L_AC66;
    case RC_ADDR(0x0000ac6au): goto L_AC6A;
    case RC_ADDR(0x0000ac6eu): goto L_AC6E;
    case RC_ADDR(0x0000ac72u): goto L_AC72;
    case RC_ADDR(0x0000ac76u): goto L_AC76;
    case RC_ADDR(0x0000ac7au): goto L_AC7A;
    case RC_ADDR(0x0000ac7eu): goto L_AC7E;
    case RC_ADDR(0x0000ac82u): goto L_AC82;
    case RC_ADDR(0x0000ac86u): goto L_AC86;
    case RC_ADDR(0x0000ac8au): goto L_AC8A;
    case RC_ADDR(0x0000ac8eu): goto L_AC8E;
    case RC_ADDR(0x0000ac92u): goto L_AC92;
    case RC_ADDR(0x0000ac96u): goto L_AC96;
    case RC_ADDR(0x0000ac9au): goto L_AC9A;
    case RC_ADDR(0x0000ac9eu): goto L_AC9E;
    case RC_ADDR(0x0000aca2u): goto L_ACA2;
    case RC_ADDR(0x0000aca6u): goto L_ACA6;
    case RC_ADDR(0x0000acaau): goto L_ACAA;
    case RC_ADDR(0x0000acacu): goto L_ACAC;
    case RC_ADDR(0x0000acb0u): goto L_ACB0;
    case RC_ADDR(0x0000acb4u): goto L_ACB4;
    case RC_ADDR(0x0000acb6u): goto L_ACB6;
    case RC_ADDR(0x0000acbau): goto L_ACBA;
    case RC_ADDR(0x0000acbeu): goto L_ACBE;
    case RC_ADDR(0x0000acc0u): goto L_ACC0;
    case RC_ADDR(0x0000acc4u): goto L_ACC4;
    case RC_ADDR(0x0000acc8u): goto L_ACC8;
    case RC_ADDR(0x0000acccu): goto L_ACCC;
    case RC_ADDR(0x0000acd0u): goto L_ACD0;
    case RC_ADDR(0x0000acd4u): goto L_ACD4;
    case RC_ADDR(0x0000acd6u): goto L_ACD6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_AC3C:
    /* 0000ac3c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000ac3cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_AC40:
    /* 0000ac40   6  move.w #1,(9c6,A4) */
    c->pc = RC_ADDR(0x0000ac40u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x9c6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AC46:
    /* 0000ac46   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000ac46u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AC4A:
    /* 0000ac4a   4  pea (0000ace4) */
    c->pc = RC_ADDR(0x0000ac4au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000ace4u));

L_AC4E:
    /* 0000ac4e   4  pea (0000acd8) */
    c->pc = RC_ADDR(0x0000ac4eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000acd8u));

L_AC52:
    /* 0000ac52   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0000ac52u);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0000ac56u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_AC56:
    /* 0000ac56   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000ac56u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_AC5A:
    /* 0000ac5a   4  pea (cd6,A4) */
    c->pc = RC_ADDR(0x0000ac5au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xcd6u));

L_AC5E:
    /* 0000ac5e   4  pea (cd0,A4) */
    c->pc = RC_ADDR(0x0000ac5eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xcd0u));

L_AC62:
    /* 0000ac62   4  pea (0000aceb) */
    c->pc = RC_ADDR(0x0000ac62u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000acebu));

L_AC66:
    /* 0000ac66   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000ac66u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000ac6au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_AC6A:
    /* 0000ac6a   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000ac6au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_AC6E:
    /* 0000ac6e   4  move.l D0,(cc4,A4) */
    c->pc = RC_ADDR(0x0000ac6eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xcc4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_AC72:
    /* 0000ac72   4  pea (cda,A4) */
    c->pc = RC_ADDR(0x0000ac72u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xcdau));

L_AC76:
    /* 0000ac76   4  pea (cd2,A4) */
    c->pc = RC_ADDR(0x0000ac76u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xcd2u));

L_AC7A:
    /* 0000ac7a   4  pea (0000acf2) */
    c->pc = RC_ADDR(0x0000ac7au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000acf2u));

L_AC7E:
    /* 0000ac7e   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000ac7eu);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000ac82u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_AC82:
    /* 0000ac82   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000ac82u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_AC86:
    /* 0000ac86   4  move.l D0,(cc8,A4) */
    c->pc = RC_ADDR(0x0000ac86u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xcc8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_AC8A:
    /* 0000ac8a   4  pea (cde,A4) */
    c->pc = RC_ADDR(0x0000ac8au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xcdeu));

L_AC8E:
    /* 0000ac8e   4  pea (cd4,A4) */
    c->pc = RC_ADDR(0x0000ac8eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xcd4u));

L_AC92:
    /* 0000ac92   4  pea (0000acf6) */
    c->pc = RC_ADDR(0x0000ac92u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000acf6u));

L_AC96:
    /* 0000ac96   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000ac96u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000ac9au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_AC9A:
    /* 0000ac9a   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000ac9au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_AC9E:
    /* 0000ac9e   4  move.l D0,(ccc,A4) */
    c->pc = RC_ADDR(0x0000ac9eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xcccu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_ACA2:
    /* 0000aca2   4  pea (ffffa210,A4) */
    c->pc = RC_ADDR(0x0000aca2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x5df0u));

L_ACA6:
    /* 0000aca6   4  jsr (ffff8128,A4) */
    c->pc = RC_ADDR(0x0000aca6u);
    rc_step(c, m, 18);
    /* vector 49 */
    rc_push32(c, m, RC_ADDR(0x0000acaau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c1eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00010070u);
    return;

L_ACAA:
    /* 0000acaa   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000acaau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_ACAC:
    /* 0000acac   4  pea (0000acfa) */
    c->pc = RC_ADDR(0x0000acacu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000acfau));

L_ACB0:
    /* 0000acb0   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x0000acb0u);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x0000acb4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_ACB4:
    /* 0000acb4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000acb4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_ACB6:
    /* 0000acb6   4  pea (0000a9f2) */
    c->pc = RC_ADDR(0x0000acb6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000a9f2u));

L_ACBA:
    /* 0000acba   4  pea (0000ad08) */
    c->pc = RC_ADDR(0x0000acbau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000ad08u));

L_ACBE:
    /* 0000acbe   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000acbeu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_ACC0:
    /* 0000acc0   4  pea (0000ad07) */
    c->pc = RC_ADDR(0x0000acc0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000ad07u));

L_ACC4:
    /* 0000acc4   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0000acc4u);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000acc8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d5cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020c0cu);
    return;

L_ACC8:
    /* 0000acc8   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x0000acc8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x10u);

L_ACCC:
    /* 0000accc   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x0000acccu);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x0000acd0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022308u);
    return;

L_ACD0:
    /* 0000acd0   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x0000acd0u);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x0000acd4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_ACD4:
    /* 0000acd4   2  unlk A5 */
    c->pc = RC_ADDR(0x0000acd4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_ACD6:
    /* 0000acd6   2  rts */
    c->pc = RC_ADDR(0x0000acd6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
