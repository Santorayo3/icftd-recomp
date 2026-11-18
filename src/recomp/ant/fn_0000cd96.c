/* fn_0000cd96 - 104 byte(s), 31 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000cd96(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0000cd96u): goto L_CD96;
    case RC_ADDR(0x0000cd9au): goto L_CD9A;
    case RC_ADDR(0x0000cd9eu): goto L_CD9E;
    case RC_ADDR(0x0000cda2u): goto L_CDA2;
    case RC_ADDR(0x0000cda6u): goto L_CDA6;
    case RC_ADDR(0x0000cdaau): goto L_CDAA;
    case RC_ADDR(0x0000cdaeu): goto L_CDAE;
    case RC_ADDR(0x0000cdb2u): goto L_CDB2;
    case RC_ADDR(0x0000cdb8u): goto L_CDB8;
    case RC_ADDR(0x0000cdbcu): goto L_CDBC;
    case RC_ADDR(0x0000cdc0u): goto L_CDC0;
    case RC_ADDR(0x0000cdc2u): goto L_CDC2;
    case RC_ADDR(0x0000cdc8u): goto L_CDC8;
    case RC_ADDR(0x0000cdccu): goto L_CDCC;
    case RC_ADDR(0x0000cdceu): goto L_CDCE;
    case RC_ADDR(0x0000cdd0u): goto L_CDD0;
    case RC_ADDR(0x0000cdd2u): goto L_CDD2;
    case RC_ADDR(0x0000cdd6u): goto L_CDD6;
    case RC_ADDR(0x0000cddau): goto L_CDDA;
    case RC_ADDR(0x0000cddcu): goto L_CDDC;
    case RC_ADDR(0x0000cddeu): goto L_CDDE;
    case RC_ADDR(0x0000cde0u): goto L_CDE0;
    case RC_ADDR(0x0000cde2u): goto L_CDE2;
    case RC_ADDR(0x0000cde6u): goto L_CDE6;
    case RC_ADDR(0x0000cdeau): goto L_CDEA;
    case RC_ADDR(0x0000cdecu): goto L_CDEC;
    case RC_ADDR(0x0000cdeeu): goto L_CDEE;
    case RC_ADDR(0x0000cdf2u): goto L_CDF2;
    case RC_ADDR(0x0000cdf6u): goto L_CDF6;
    case RC_ADDR(0x0000cdfau): goto L_CDFA;
    case RC_ADDR(0x0000cdfcu): goto L_CDFC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_CD96:
    /* 0000cd96   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000cd96u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_CD9A:
    /* 0000cd9a   4  move.w (926,A4),D0 */
    c->pc = RC_ADDR(0x0000cd9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x926u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CD9E:
    /* 0000cd9e   4  sub.w #12,D0 */
    c->pc = RC_ADDR(0x0000cd9eu);
    rc_step(c, m, 10);
    t0 = 0x00000012u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_CDA2:
    /* 0000cda2   4  move.w D0,(e56,A4) */
    c->pc = RC_ADDR(0x0000cda2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xe56u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CDA6:
    /* 0000cda6   4  move.w (928,A4),D0 */
    c->pc = RC_ADDR(0x0000cda6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x928u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CDAA:
    /* 0000cdaa   4  sub.w #13,D0 */
    c->pc = RC_ADDR(0x0000cdaau);
    rc_step(c, m, 10);
    t0 = 0x00000013u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_CDAE:
    /* 0000cdae   4  move.w D0,(e58,A4) */
    c->pc = RC_ADDR(0x0000cdaeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xe58u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CDB2:
    /* 0000cdb2   6  move.w #64,(e5a,A4) */
    c->pc = RC_ADDR(0x0000cdb2u);
    rc_step(c, m, 16);
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[4] + 0xe5au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CDB8:
    /* 0000cdb8   4  move.l (e5c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000cdb8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe5cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CDBC:
    /* 0000cdbc   4  jsr (0000782a) */
    c->pc = RC_ADDR(0x0000cdbcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000cdc0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000782au);
    return;

L_CDC0:
    /* 0000cdc0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000cdc0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_CDC2:
    /* 0000cdc2   6  pea (00050000).l */
    c->pc = RC_ADDR(0x0000cdc2u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00050000u);

L_CDC8:
    /* 0000cdc8   4  move.l (fffff88c,A4),D0 */
    c->pc = RC_ADDR(0x0000cdc8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x774u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CDCC:
    /* 0000cdcc   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0000cdccu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_CDCE:
    /* 0000cdce   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x0000cdceu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_CDD0:
    /* 0000cdd0   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000cdd0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CDD2:
    /* 0000cdd2   4  move.l (fffff888,A4),D0 */
    c->pc = RC_ADDR(0x0000cdd2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x778u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CDD6:
    /* 0000cdd6   4  add.l (fffffa0c,A4),D0 */
    c->pc = RC_ADDR(0x0000cdd6u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5f4u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_CDDA:
    /* 0000cdda   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0000cddau);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_CDDC:
    /* 0000cddc   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x0000cddcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_CDDE:
    /* 0000cdde   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000cddeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CDE0:
    /* 0000cde0   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000cde0u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CDE2:
    /* 0000cde2   4  move.l (e5c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000cde2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe5cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CDE6:
    /* 0000cde6   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000cde6u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000cdeau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d6eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021218u);
    return;

L_CDEA:
    /* 0000cdea   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000cdeau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_CDEC:
    /* 0000cdec   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000cdecu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CDEE:
    /* 0000cdee   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000cdeeu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CDF2:
    /* 0000cdf2   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000cdf2u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000cdf6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_CDF6:
    /* 0000cdf6   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000cdf6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_CDFA:
    /* 0000cdfa   2  unlk A5 */
    c->pc = RC_ADDR(0x0000cdfau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_CDFC:
    /* 0000cdfc   2  rts */
    c->pc = RC_ADDR(0x0000cdfcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
