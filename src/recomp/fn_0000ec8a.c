/* fn_0000ec8a - 160 byte(s), 49 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000ec8a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0000ec8au: goto L_EC8A;
    case 0x0000ec8eu: goto L_EC8E;
    case 0x0000ec92u: goto L_EC92;
    case 0x0000ec94u: goto L_EC94;
    case 0x0000ec98u: goto L_EC98;
    case 0x0000ec9cu: goto L_EC9C;
    case 0x0000eca0u: goto L_ECA0;
    case 0x0000eca4u: goto L_ECA4;
    case 0x0000eca6u: goto L_ECA6;
    case 0x0000ecaau: goto L_ECAA;
    case 0x0000ecacu: goto L_ECAC;
    case 0x0000ecb0u: goto L_ECB0;
    case 0x0000ecb2u: goto L_ECB2;
    case 0x0000ecb4u: goto L_ECB4;
    case 0x0000ecb8u: goto L_ECB8;
    case 0x0000ecbcu: goto L_ECBC;
    case 0x0000ecc0u: goto L_ECC0;
    case 0x0000ecc2u: goto L_ECC2;
    case 0x0000ecc4u: goto L_ECC4;
    case 0x0000ecc8u: goto L_ECC8;
    case 0x0000ecccu: goto L_ECCC;
    case 0x0000ecd0u: goto L_ECD0;
    case 0x0000ecd2u: goto L_ECD2;
    case 0x0000ecd6u: goto L_ECD6;
    case 0x0000ecd8u: goto L_ECD8;
    case 0x0000ecdau: goto L_ECDA;
    case 0x0000ecdeu: goto L_ECDE;
    case 0x0000ece2u: goto L_ECE2;
    case 0x0000ece6u: goto L_ECE6;
    case 0x0000ece8u: goto L_ECE8;
    case 0x0000eceau: goto L_ECEA;
    case 0x0000eceeu: goto L_ECEE;
    case 0x0000ecf2u: goto L_ECF2;
    case 0x0000ecf6u: goto L_ECF6;
    case 0x0000ecf8u: goto L_ECF8;
    case 0x0000ecfcu: goto L_ECFC;
    case 0x0000ed00u: goto L_ED00;
    case 0x0000ed04u: goto L_ED04;
    case 0x0000ed06u: goto L_ED06;
    case 0x0000ed0au: goto L_ED0A;
    case 0x0000ed0eu: goto L_ED0E;
    case 0x0000ed10u: goto L_ED10;
    case 0x0000ed14u: goto L_ED14;
    case 0x0000ed18u: goto L_ED18;
    case 0x0000ed1cu: goto L_ED1C;
    case 0x0000ed20u: goto L_ED20;
    case 0x0000ed22u: goto L_ED22;
    case 0x0000ed26u: goto L_ED26;
    case 0x0000ed28u: goto L_ED28;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_EC8A:
    /* 0000ec8a   4  link.w A5,#fffffffe */
    c->pc = 0x0000ec8au;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_EC8E:
    /* 0000ec8e   4  tst.l (ffffa202,A4) */
    c->pc = 0x0000ec8eu;
    t0 = rc_rd32(c, m, (c->a[4] - 0x5dfeu));
    rc_set_nzvc(c, t0, RC_L);

L_EC92:
    /* 0000ec92   2  beq 0000ed0a */
    c->pc = 0x0000ec92u;
    if (rc_cond(c, 7)) goto L_ED0A;

L_EC94:
    /* 0000ec94   4  jsr (0000ef72) */
    c->pc = 0x0000ec94u;
    rc_push32(c, m, 0x0000ec98u);
    rc_depth++;
    c->pc = 0x0000ef72u;
    return;

L_EC98:
    /* 0000ec98   4  move.l (a1e,A4),-(A7) */
    c->pc = 0x0000ec98u;
    t0 = rc_rd32(c, m, (c->a[4] + 0xa1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_EC9C:
    /* 0000ec9c   4  move.l (ffffa202,A4),-(A7) */
    c->pc = 0x0000ec9cu;
    t0 = rc_rd32(c, m, (c->a[4] - 0x5dfeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ECA0:
    /* 0000eca0   4  jsr (ffff8344,A4) */
    c->pc = 0x0000eca0u;
    /* vector 139: exec.library -210 */
    c->pc = 0x0000eca4u;
    rc_os_call(c, m, 0, -210);

L_ECA4:
    /* 0000eca4   2  addq.w #8,A7 */
    c->pc = 0x0000eca4u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_ECA6:
    /* 0000eca6   4  clr.w (fffffffe,A5) */
    c->pc = 0x0000eca6u;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_ECAA:
    /* 0000ecaa   2  bra 0000ecfc */
    c->pc = 0x0000ecaau;
    goto L_ECFC;

L_ECAC:
    /* 0000ecac   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x0000ecacu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ECB0:
    /* 0000ecb0   2  ext.l D0 */
    c->pc = 0x0000ecb0u;
    rc_ext_l(c, 0);

L_ECB2:
    /* 0000ecb2   2  asl.l #2,D0 */
    c->pc = 0x0000ecb2u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_ECB4:
    /* 0000ecb4   4  lea (a22,A4),A0 */
    c->pc = 0x0000ecb4u;
    c->a[0] = (c->a[4] + 0xa22u);

L_ECB8:
    /* 0000ecb8   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = 0x0000ecb8u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ECBC:
    /* 0000ecbc   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x0000ecbcu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ECC0:
    /* 0000ecc0   2  ext.l D0 */
    c->pc = 0x0000ecc0u;
    rc_ext_l(c, 0);

L_ECC2:
    /* 0000ecc2   2  asl.l #2,D0 */
    c->pc = 0x0000ecc2u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_ECC4:
    /* 0000ecc4   4  lea (a9a,A4),A0 */
    c->pc = 0x0000ecc4u;
    c->a[0] = (c->a[4] + 0xa9au);

L_ECC8:
    /* 0000ecc8   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = 0x0000ecc8u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ECCC:
    /* 0000eccc   4  jsr (ffff8344,A4) */
    c->pc = 0x0000ecccu;
    /* vector 139: exec.library -210 */
    c->pc = 0x0000ecd0u;
    rc_os_call(c, m, 0, -210);

L_ECD0:
    /* 0000ecd0   2  addq.w #8,A7 */
    c->pc = 0x0000ecd0u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_ECD2:
    /* 0000ecd2   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x0000ecd2u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ECD6:
    /* 0000ecd6   2  ext.l D0 */
    c->pc = 0x0000ecd6u;
    rc_ext_l(c, 0);

L_ECD8:
    /* 0000ecd8   2  asl.l #2,D0 */
    c->pc = 0x0000ecd8u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_ECDA:
    /* 0000ecda   4  lea (a4a,A4),A0 */
    c->pc = 0x0000ecdau;
    c->a[0] = (c->a[4] + 0xa4au);

L_ECDE:
    /* 0000ecde   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = 0x0000ecdeu;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ECE2:
    /* 0000ece2   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x0000ece2u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ECE6:
    /* 0000ece6   2  ext.l D0 */
    c->pc = 0x0000ece6u;
    rc_ext_l(c, 0);

L_ECE8:
    /* 0000ece8   2  asl.l #2,D0 */
    c->pc = 0x0000ece8u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_ECEA:
    /* 0000ecea   4  lea (a72,A4),A0 */
    c->pc = 0x0000eceau;
    c->a[0] = (c->a[4] + 0xa72u);

L_ECEE:
    /* 0000ecee   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = 0x0000eceeu;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ECF2:
    /* 0000ecf2   4  jsr (ffff8344,A4) */
    c->pc = 0x0000ecf2u;
    /* vector 139: exec.library -210 */
    c->pc = 0x0000ecf6u;
    rc_os_call(c, m, 0, -210);

L_ECF6:
    /* 0000ecf6   2  addq.w #8,A7 */
    c->pc = 0x0000ecf6u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_ECF8:
    /* 0000ecf8   4  addq.w #1,(fffffffe,A5) */
    c->pc = 0x0000ecf8u;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_ECFC:
    /* 0000ecfc   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x0000ecfcu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_ED00:
    /* 0000ed00   4  cmp.w (ffffa206,A4),D0 */
    c->pc = 0x0000ed00u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x5dfau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_ED04:
    /* 0000ed04   2  blt 0000ecac */
    c->pc = 0x0000ed04u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_ECAC; }

L_ED06:
    /* 0000ed06   4  clr.l (ffffa202,A4) */
    c->pc = 0x0000ed06u;
    rc_wr32(c, m, (c->a[4] - 0x5dfeu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_ED0A:
    /* 0000ed0a   4  tst.l (ffff930c,A4) */
    c->pc = 0x0000ed0au;
    t0 = rc_rd32(c, m, (c->a[4] - 0x6cf4u));
    rc_set_nzvc(c, t0, RC_L);

L_ED0E:
    /* 0000ed0e   2  beq 0000ed26 */
    c->pc = 0x0000ed0eu;
    if (rc_cond(c, 7)) goto L_ED26;

L_ED10:
    /* 0000ed10   4  jsr (ffff80c8,A4) */
    c->pc = 0x0000ed10u;
    /* vector 33 */
    rc_push32(c, m, 0x0000ed14u);
    rc_depth++;
    c->pc = 0x00009becu;
    return;

L_ED14:
    /* 0000ed14   4  move.l (2f2,A4),-(A7) */
    c->pc = 0x0000ed14u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2f2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ED18:
    /* 0000ed18   4  move.l (ffff930c,A4),-(A7) */
    c->pc = 0x0000ed18u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x6cf4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_ED1C:
    /* 0000ed1c   4  jsr (ffff8344,A4) */
    c->pc = 0x0000ed1cu;
    /* vector 139: exec.library -210 */
    c->pc = 0x0000ed20u;
    rc_os_call(c, m, 0, -210);

L_ED20:
    /* 0000ed20   2  addq.w #8,A7 */
    c->pc = 0x0000ed20u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_ED22:
    /* 0000ed22   4  clr.l (ffff930c,A4) */
    c->pc = 0x0000ed22u;
    rc_wr32(c, m, (c->a[4] - 0x6cf4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_ED26:
    /* 0000ed26   2  unlk A5 */
    c->pc = 0x0000ed26u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_ED28:
    /* 0000ed28   2  rts */
    c->pc = 0x0000ed28u;
    rc_ret(c, m);
    return;

}
