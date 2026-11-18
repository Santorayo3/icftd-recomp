/* fn_0000ed8a - 94 byte(s), 29 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000ed8a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ed8au): goto L_ED8A;
    case RC_ADDR(0x0000ed8eu): goto L_ED8E;
    case RC_ADDR(0x0000ed92u): goto L_ED92;
    case RC_ADDR(0x0000ed96u): goto L_ED96;
    case RC_ADDR(0x0000ed9au): goto L_ED9A;
    case RC_ADDR(0x0000ed9cu): goto L_ED9C;
    case RC_ADDR(0x0000eda0u): goto L_EDA0;
    case RC_ADDR(0x0000eda4u): goto L_EDA4;
    case RC_ADDR(0x0000eda6u): goto L_EDA6;
    case RC_ADDR(0x0000edaau): goto L_EDAA;
    case RC_ADDR(0x0000edaeu): goto L_EDAE;
    case RC_ADDR(0x0000edb2u): goto L_EDB2;
    case RC_ADDR(0x0000edb4u): goto L_EDB4;
    case RC_ADDR(0x0000edb8u): goto L_EDB8;
    case RC_ADDR(0x0000edbau): goto L_EDBA;
    case RC_ADDR(0x0000edbcu): goto L_EDBC;
    case RC_ADDR(0x0000edc0u): goto L_EDC0;
    case RC_ADDR(0x0000edc2u): goto L_EDC2;
    case RC_ADDR(0x0000edc6u): goto L_EDC6;
    case RC_ADDR(0x0000edcau): goto L_EDCA;
    case RC_ADDR(0x0000edccu): goto L_EDCC;
    case RC_ADDR(0x0000edceu): goto L_EDCE;
    case RC_ADDR(0x0000edd2u): goto L_EDD2;
    case RC_ADDR(0x0000edd4u): goto L_EDD4;
    case RC_ADDR(0x0000edd8u): goto L_EDD8;
    case RC_ADDR(0x0000eddcu): goto L_EDDC;
    case RC_ADDR(0x0000ede0u): goto L_EDE0;
    case RC_ADDR(0x0000ede4u): goto L_EDE4;
    case RC_ADDR(0x0000ede6u): goto L_EDE6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_ED8A:
    /* 0000ed8a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000ed8au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_ED8E:
    /* 0000ed8e   4  movem.l { A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000ed8eu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_ED92:
    /* 0000ed92   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000ed92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ED96:
    /* 0000ed96   4  cmp.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0000ed96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_ED9A:
    /* 0000ed9a   2  beq 0000eddc */
    c->pc = RC_ADDR(0x0000ed9au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_EDDC;

L_ED9C:
    /* 0000ed9c   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000ed9cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EDA0:
    /* 0000eda0   4  sub.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0000eda0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_EDA4:
    /* 0000eda4   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x0000eda4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EDA6:
    /* 0000eda6   4  and.w #f,D4 */
    c->pc = RC_ADDR(0x0000eda6u);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 4, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 4, RC_W, t2);

L_EDAA:
    /* 0000edaa   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0000edaau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EDAE:
    /* 0000edae   4  sub.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000edaeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_EDB2:
    /* 0000edb2   2  move.w D0,D5 */
    c->pc = RC_ADDR(0x0000edb2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EDB4:
    /* 0000edb4   4  and.w #f,D5 */
    c->pc = RC_ADDR(0x0000edb4u);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 5, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 5, RC_W, t2);

L_EDB8:
    /* 0000edb8   2  cmp.w D5,D4 */
    c->pc = RC_ADDR(0x0000edb8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_EDBA:
    /* 0000edba   2  bge 0000edca */
    c->pc = RC_ADDR(0x0000edbau);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_EDCA;

L_EDBC:
    /* 0000edbc   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000edbcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EDC0:
    /* 0000edc0   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000edc0u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_EDC2:
    /* 0000edc2   4  and.w #f,D0 */
    c->pc = RC_ADDR(0x0000edc2u);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_EDC6:
    /* 0000edc6   4  move.w D0,(8,A5) */
    c->pc = RC_ADDR(0x0000edc6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EDCA:
    /* 0000edca   2  cmp.w D5,D4 */
    c->pc = RC_ADDR(0x0000edcau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_EDCC:
    /* 0000edcc   2  ble 0000eddc */
    c->pc = RC_ADDR(0x0000edccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_EDDC;

L_EDCE:
    /* 0000edce   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000edceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EDD2:
    /* 0000edd2   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000edd2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_EDD4:
    /* 0000edd4   4  and.w #f,D0 */
    c->pc = RC_ADDR(0x0000edd4u);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_EDD8:
    /* 0000edd8   4  move.w D0,(8,A5) */
    c->pc = RC_ADDR(0x0000edd8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_EDDC:
    /* 0000eddc   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000eddcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_EDE0:
    /* 0000ede0   4  movem.l (SP)+,{ D4 D5 } */
    c->pc = RC_ADDR(0x0000ede0u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_EDE4:
    /* 0000ede4   2  unlk A5 */
    c->pc = RC_ADDR(0x0000ede4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_EDE6:
    /* 0000ede6   2  rts */
    c->pc = RC_ADDR(0x0000ede6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
