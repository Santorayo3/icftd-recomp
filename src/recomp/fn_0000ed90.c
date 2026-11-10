/* fn_0000ed90 - 158 byte(s), 49 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000ed90(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0000ed90u: goto L_ED90;
    case 0x0000ed94u: goto L_ED94;
    case 0x0000ed96u: goto L_ED96;
    case 0x0000ed9au: goto L_ED9A;
    case 0x0000ed9eu: goto L_ED9E;
    case 0x0000eda0u: goto L_EDA0;
    case 0x0000eda4u: goto L_EDA4;
    case 0x0000eda8u: goto L_EDA8;
    case 0x0000edaau: goto L_EDAA;
    case 0x0000edaeu: goto L_EDAE;
    case 0x0000edb2u: goto L_EDB2;
    case 0x0000edb6u: goto L_EDB6;
    case 0x0000edb8u: goto L_EDB8;
    case 0x0000edbcu: goto L_EDBC;
    case 0x0000edc0u: goto L_EDC0;
    case 0x0000edc2u: goto L_EDC2;
    case 0x0000edc6u: goto L_EDC6;
    case 0x0000edcau: goto L_EDCA;
    case 0x0000edccu: goto L_EDCC;
    case 0x0000edd0u: goto L_EDD0;
    case 0x0000edd4u: goto L_EDD4;
    case 0x0000edd6u: goto L_EDD6;
    case 0x0000eddcu: goto L_EDDC;
    case 0x0000ede0u: goto L_EDE0;
    case 0x0000ede4u: goto L_EDE4;
    case 0x0000ede6u: goto L_EDE6;
    case 0x0000edeau: goto L_EDEA;
    case 0x0000edeeu: goto L_EDEE;
    case 0x0000edf2u: goto L_EDF2;
    case 0x0000edf4u: goto L_EDF4;
    case 0x0000edf6u: goto L_EDF6;
    case 0x0000edfcu: goto L_EDFC;
    case 0x0000ee00u: goto L_EE00;
    case 0x0000ee04u: goto L_EE04;
    case 0x0000ee08u: goto L_EE08;
    case 0x0000ee0cu: goto L_EE0C;
    case 0x0000ee0eu: goto L_EE0E;
    case 0x0000ee12u: goto L_EE12;
    case 0x0000ee14u: goto L_EE14;
    case 0x0000ee18u: goto L_EE18;
    case 0x0000ee1cu: goto L_EE1C;
    case 0x0000ee1eu: goto L_EE1E;
    case 0x0000ee20u: goto L_EE20;
    case 0x0000ee22u: goto L_EE22;
    case 0x0000ee24u: goto L_EE24;
    case 0x0000ee26u: goto L_EE26;
    case 0x0000ee28u: goto L_EE28;
    case 0x0000ee2au: goto L_EE2A;
    case 0x0000ee2cu: goto L_EE2C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_ED90:
    /* 0000ed90   4  link.w A5,#0 */
    c->pc = 0x0000ed90u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_ED94:
    /* 0000ed94   2  clr.l -(A7) */
    c->pc = 0x0000ed94u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_ED96:
    /* 0000ed96   4  pea (000001ea).l */
    c->pc = 0x0000ed96u;
    rc_push32(c, m, 0x000001eau);

L_ED9A:
    /* 0000ed9a   4  jsr (ffff8338,A4) */
    c->pc = 0x0000ed9au;
    /* vector 137: exec.library -198 */
    c->pc = 0x0000ed9eu;
    rc_os_call(c, m, 0, -198);

L_ED9E:
    /* 0000ed9e   2  addq.w #8,A7 */
    c->pc = 0x0000ed9eu;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_EDA0:
    /* 0000eda0   4  move.l D0,(ffffa208,A4) */
    c->pc = 0x0000eda0u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x5df8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EDA4:
    /* 0000eda4   4  tst.l (ffffa208,A4) */
    c->pc = 0x0000eda4u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    rc_set_nzvc(c, t0, RC_L);

L_EDA8:
    /* 0000eda8   2  beq 0000ee0e */
    c->pc = 0x0000eda8u;
    if (rc_cond(c, 7)) goto L_EE0E;

L_EDAA:
    /* 0000edaa   4  pea (00000002).l */
    c->pc = 0x0000edaau;
    rc_push32(c, m, 0x00000002u);

L_EDAE:
    /* 0000edae   4  pea (00000408).l */
    c->pc = 0x0000edaeu;
    rc_push32(c, m, 0x00000408u);

L_EDB2:
    /* 0000edb2   4  jsr (ffff8338,A4) */
    c->pc = 0x0000edb2u;
    /* vector 137: exec.library -198 */
    c->pc = 0x0000edb6u;
    rc_os_call(c, m, 0, -198);

L_EDB6:
    /* 0000edb6   2  addq.w #8,A7 */
    c->pc = 0x0000edb6u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_EDB8:
    /* 0000edb8   4  move.l D0,(adc,A4) */
    c->pc = 0x0000edb8u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xadcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EDBC:
    /* 0000edbc   4  tst.l (adc,A4) */
    c->pc = 0x0000edbcu;
    t0 = rc_rd32(c, m, (c->a[4] + 0xadcu));
    rc_set_nzvc(c, t0, RC_L);

L_EDC0:
    /* 0000edc0   2  beq 0000ee0e */
    c->pc = 0x0000edc0u;
    if (rc_cond(c, 7)) goto L_EE0E;

L_EDC2:
    /* 0000edc2   4  pea (0000ee2e) */
    c->pc = 0x0000edc2u;
    rc_push32(c, m, 0x0000ee2eu);

L_EDC6:
    /* 0000edc6   4  jsr (ffff8350,A4) */
    c->pc = 0x0000edc6u;
    /* vector 141: exec.library -498 */
    c->pc = 0x0000edcau;
    rc_os_call(c, m, 0, -498);

L_EDCA:
    /* 0000edca   2  addq.w #4,A7 */
    c->pc = 0x0000edcau;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_EDCC:
    /* 0000edcc   4  move.l D0,(ae4,A4) */
    c->pc = 0x0000edccu;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xae4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EDD0:
    /* 0000edd0   4  tst.l (ae4,A4) */
    c->pc = 0x0000edd0u;
    t0 = rc_rd32(c, m, (c->a[4] + 0xae4u));
    rc_set_nzvc(c, t0, RC_L);

L_EDD4:
    /* 0000edd4   2  beq 0000ee0e */
    c->pc = 0x0000edd4u;
    if (rc_cond(c, 7)) goto L_EE0E;

L_EDD6:
    /* 0000edd6   6  move.l (ffffa20c,A4),(ad8,A4) */
    c->pc = 0x0000edd6u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df4u));
    rc_wr32(c, m, (c->a[4] + 0xad8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EDDC:
    /* 0000eddc   4  clr.l (ad4,A4) */
    c->pc = 0x0000eddcu;
    rc_wr32(c, m, (c->a[4] + 0xad4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_EDE0:
    /* 0000ede0   4  pea (ac6,A4) */
    c->pc = 0x0000ede0u;
    rc_push32(c, m, (c->a[4] + 0xac6u));

L_EDE4:
    /* 0000ede4   2  clr.l -(A7) */
    c->pc = 0x0000ede4u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_EDE6:
    /* 0000ede6   4  move.l (ae4,A4),-(A7) */
    c->pc = 0x0000ede6u;
    t0 = rc_rd32(c, m, (c->a[4] + 0xae4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EDEA:
    /* 0000edea   4  jsr (ffff82ea,A4) */
    c->pc = 0x0000edeau;
    /* vector 124 */
    rc_push32(c, m, 0x0000edeeu);
    rc_depth++;
    c->pc = 0x000213e6u;
    return;

L_EDEE:
    /* 0000edee   4  lea (c,A7),A7 */
    c->pc = 0x0000edeeu;
    c->a[7] = (c->a[7] + 0xcu);

L_EDF2:
    /* 0000edf2   2  tst.l D0 */
    c->pc = 0x0000edf2u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_EDF4:
    /* 0000edf4   2  bne 0000ee0e */
    c->pc = 0x0000edf4u;
    if (rc_cond(c, 6)) goto L_EE0E;

L_EDF6:
    /* 0000edf6   6  move.l (ffffa20c,A4),(ae0,A4) */
    c->pc = 0x0000edf6u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df4u));
    rc_wr32(c, m, (c->a[4] + 0xae0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_EDFC:
    /* 0000edfc   4  jsr (0000ee8e) */
    c->pc = 0x0000edfcu;
    rc_push32(c, m, 0x0000ee00u);
    rc_depth++;
    c->pc = 0x0000ee8eu;
    return;

L_EE00:
    /* 0000ee00   4  pea (00000081).l */
    c->pc = 0x0000ee00u;
    rc_push32(c, m, 0x00000081u);

L_EE04:
    /* 0000ee04   4  move.l (ae4,A4),-(A7) */
    c->pc = 0x0000ee04u;
    t0 = rc_rd32(c, m, (c->a[4] + 0xae4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EE08:
    /* 0000ee08   4  jsr (ffff82e4,A4) */
    c->pc = 0x0000ee08u;
    /* vector 123 */
    rc_push32(c, m, 0x0000ee0cu);
    rc_depth++;
    c->pc = 0x000213dau;
    return;

L_EE0C:
    /* 0000ee0c   2  addq.w #8,A7 */
    c->pc = 0x0000ee0cu;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_EE0E:
    /* 0000ee0e   4  tst.l (ae0,A4) */
    c->pc = 0x0000ee0eu;
    t0 = rc_rd32(c, m, (c->a[4] + 0xae0u));
    rc_set_nzvc(c, t0, RC_L);

L_EE12:
    /* 0000ee12   2  bne 0000ee18 */
    c->pc = 0x0000ee12u;
    if (rc_cond(c, 6)) goto L_EE18;

L_EE14:
    /* 0000ee14   4  jsr (0000ed2a) */
    c->pc = 0x0000ee14u;
    rc_push32(c, m, 0x0000ee18u);
    rc_depth++;
    c->pc = 0x0000ed2au;
    return;

L_EE18:
    /* 0000ee18   4  tst.l (ae0,A4) */
    c->pc = 0x0000ee18u;
    t0 = rc_rd32(c, m, (c->a[4] + 0xae0u));
    rc_set_nzvc(c, t0, RC_L);

L_EE1C:
    /* 0000ee1c   2  beq 0000ee22 */
    c->pc = 0x0000ee1cu;
    if (rc_cond(c, 7)) goto L_EE22;

L_EE1E:
    /* 0000ee1e   2  moveq #1,D0 */
    c->pc = 0x0000ee1eu;
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_EE20:
    /* 0000ee20   2  bra 0000ee24 */
    c->pc = 0x0000ee20u;
    goto L_EE24;

L_EE22:
    /* 0000ee22   2  moveq #0,D0 */
    c->pc = 0x0000ee22u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_EE24:
    /* 0000ee24   2  move.b D0,D1 */
    c->pc = 0x0000ee24u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_EE26:
    /* 0000ee26   2  moveq #0,D0 */
    c->pc = 0x0000ee26u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_EE28:
    /* 0000ee28   2  move.b D1,D0 */
    c->pc = 0x0000ee28u;
    t0 = rc_d_get(c, 1, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_EE2A:
    /* 0000ee2a   2  unlk A5 */
    c->pc = 0x0000ee2au;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_EE2C:
    /* 0000ee2c   2  rts */
    c->pc = 0x0000ee2cu;
    rc_ret(c, m);
    return;

}
