/* fn_00011e8a - 116 byte(s), 32 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00011e8a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00011e8au): goto L_11E8A;
    case RC_ADDR(0x00011e8eu): goto L_11E8E;
    case RC_ADDR(0x00011e94u): goto L_11E94;
    case RC_ADDR(0x00011e96u): goto L_11E96;
    case RC_ADDR(0x00011e9au): goto L_11E9A;
    case RC_ADDR(0x00011e9cu): goto L_11E9C;
    case RC_ADDR(0x00011ea2u): goto L_11EA2;
    case RC_ADDR(0x00011ea4u): goto L_11EA4;
    case RC_ADDR(0x00011eaau): goto L_11EAA;
    case RC_ADDR(0x00011eb0u): goto L_11EB0;
    case RC_ADDR(0x00011eb2u): goto L_11EB2;
    case RC_ADDR(0x00011eb8u): goto L_11EB8;
    case RC_ADDR(0x00011ebau): goto L_11EBA;
    case RC_ADDR(0x00011ebeu): goto L_11EBE;
    case RC_ADDR(0x00011ec2u): goto L_11EC2;
    case RC_ADDR(0x00011ec6u): goto L_11EC6;
    case RC_ADDR(0x00011ec8u): goto L_11EC8;
    case RC_ADDR(0x00011eccu): goto L_11ECC;
    case RC_ADDR(0x00011ed0u): goto L_11ED0;
    case RC_ADDR(0x00011ed2u): goto L_11ED2;
    case RC_ADDR(0x00011ed6u): goto L_11ED6;
    case RC_ADDR(0x00011ed8u): goto L_11ED8;
    case RC_ADDR(0x00011edcu): goto L_11EDC;
    case RC_ADDR(0x00011ee0u): goto L_11EE0;
    case RC_ADDR(0x00011ee2u): goto L_11EE2;
    case RC_ADDR(0x00011ee6u): goto L_11EE6;
    case RC_ADDR(0x00011eeau): goto L_11EEA;
    case RC_ADDR(0x00011eecu): goto L_11EEC;
    case RC_ADDR(0x00011ef2u): goto L_11EF2;
    case RC_ADDR(0x00011ef4u): goto L_11EF4;
    case RC_ADDR(0x00011efau): goto L_11EFA;
    case RC_ADDR(0x00011efcu): goto L_11EFC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11E8A:
    /* 00011e8a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00011e8au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_11E8E:
    /* 00011e8e   6  cmpi.w #6,(ffff83e2,A4) */
    c->pc = RC_ADDR(0x00011e8eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_11E94:
    /* 00011e94   2  bge 00011efa */
    c->pc = RC_ADDR(0x00011e94u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_11EFA;

L_11E96:
    /* 00011e96   4  tst.w (ffffa434,A4) */
    c->pc = RC_ADDR(0x00011e96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5bccu));
    rc_set_nzvc(c, t0, RC_W);

L_11E9A:
    /* 00011e9a   2  bne 00011ed8 */
    c->pc = RC_ADDR(0x00011e9au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_11ED8;

L_11E9C:
    /* 00011e9c   6  cmpi.w #c,(ffff83e6,A4) */
    c->pc = RC_ADDR(0x00011e9cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_11EA2:
    /* 00011ea2   2  ble 00011eaa */
    c->pc = RC_ADDR(0x00011ea2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_11EAA;

L_11EA4:
    /* 00011ea4   6  move.w #3,(ffff9582,A4) */
    c->pc = RC_ADDR(0x00011ea4u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] - 0x6a7eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11EAA:
    /* 00011eaa   6  cmpi.w #7,(ffff83e6,A4) */
    c->pc = RC_ADDR(0x00011eaau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_11EB0:
    /* 00011eb0   2  blt 00011ed6 */
    c->pc = RC_ADDR(0x00011eb0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_11ED6;

L_11EB2:
    /* 00011eb2   6  cmpi.w #12,(ffff83e6,A4) */
    c->pc = RC_ADDR(0x00011eb2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_cmp(c, RC_W, t0, 0x00000012u);

L_11EB8:
    /* 00011eb8   2  bge 00011ed6 */
    c->pc = RC_ADDR(0x00011eb8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_11ED6;

L_11EBA:
    /* 00011eba   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00011ebau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11EBE:
    /* 00011ebe   4  move.l (ffffa436,A4),-(A7) */
    c->pc = RC_ADDR(0x00011ebeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5bcau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11EC2:
    /* 00011ec2   4  jsr (ffff8062,A4) */
    c->pc = RC_ADDR(0x00011ec2u);
    rc_step(c, m, 18);
    /* vector 16 */
    rc_push32(c, m, RC_ADDR(0x00011ec6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b58u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00004852u);
    return;

L_11EC6:
    /* 00011ec6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00011ec6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_11EC8:
    /* 00011ec8   4  addq.w #1,(ffffa434,A4) */
    c->pc = RC_ADDR(0x00011ec8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x5bccu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_11ECC:
    /* 00011ecc   4  move.w (ffff83e6,A4),D0 */
    c->pc = RC_ADDR(0x00011eccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11ED0:
    /* 00011ed0   2  addq.w #6,D0 */
    c->pc = RC_ADDR(0x00011ed0u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000006u;
    rc_flags_add(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_11ED2:
    /* 00011ed2   4  move.w D0,(14e2,A4) */
    c->pc = RC_ADDR(0x00011ed2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x14e2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11ED6:
    /* 00011ed6   2  bra 00011efa */
    c->pc = RC_ADDR(0x00011ed6u);
    rc_step(c, m, 10);
    goto L_11EFA;

L_11ED8:
    /* 00011ed8   4  move.w (14e2,A4),D0 */
    c->pc = RC_ADDR(0x00011ed8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x14e2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11EDC:
    /* 00011edc   4  cmp.w (ffff83e6,A4),D0 */
    c->pc = RC_ADDR(0x00011edcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_11EE0:
    /* 00011ee0   2  bgt 00011efa */
    c->pc = RC_ADDR(0x00011ee0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_11EFA;

L_11EE2:
    /* 00011ee2   4  movea.l (ffff84f2,A4),A0 */
    c->pc = RC_ADDR(0x00011ee2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7b0eu));
    c->a[0] = t0;

L_11EE6:
    /* 00011ee6   4  tst.b (7,A0) */
    c->pc = RC_ADDR(0x00011ee6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x7u));
    rc_set_nzvc(c, t0, RC_B);

L_11EEA:
    /* 00011eea   2  bne 00011ef4 */
    c->pc = RC_ADDR(0x00011eeau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_11EF4;

L_11EEC:
    /* 00011eec   6  move.w #17,(14e2,A4) */
    c->pc = RC_ADDR(0x00011eecu);
    rc_step(c, m, 16);
    t0 = 0x00000017u;
    rc_wr16(c, m, (c->a[4] + 0x14e2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11EF2:
    /* 00011ef2   2  bra 00011efa */
    c->pc = RC_ADDR(0x00011ef2u);
    rc_step(c, m, 10);
    goto L_11EFA;

L_11EF4:
    /* 00011ef4   6  move.w #3,(ffff9582,A4) */
    c->pc = RC_ADDR(0x00011ef4u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] - 0x6a7eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_11EFA:
    /* 00011efa   2  unlk A5 */
    c->pc = RC_ADDR(0x00011efau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11EFC:
    /* 00011efc   2  rts */
    c->pc = RC_ADDR(0x00011efcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
