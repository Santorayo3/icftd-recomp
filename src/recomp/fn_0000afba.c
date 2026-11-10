/* fn_0000afba - 142 byte(s), 43 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000afba(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case 0x0000afbau: goto L_AFBA;
    case 0x0000afbeu: goto L_AFBE;
    case 0x0000afc0u: goto L_AFC0;
    case 0x0000afc4u: goto L_AFC4;
    case 0x0000afc6u: goto L_AFC6;
    case 0x0000afc8u: goto L_AFC8;
    case 0x0000afccu: goto L_AFCC;
    case 0x0000afd0u: goto L_AFD0;
    case 0x0000afd4u: goto L_AFD4;
    case 0x0000afd8u: goto L_AFD8;
    case 0x0000afdau: goto L_AFDA;
    case 0x0000afdeu: goto L_AFDE;
    case 0x0000afe0u: goto L_AFE0;
    case 0x0000afe4u: goto L_AFE4;
    case 0x0000afe6u: goto L_AFE6;
    case 0x0000afe8u: goto L_AFE8;
    case 0x0000afecu: goto L_AFEC;
    case 0x0000aff2u: goto L_AFF2;
    case 0x0000aff6u: goto L_AFF6;
    case 0x0000aff8u: goto L_AFF8;
    case 0x0000affeu: goto L_AFFE;
    case 0x0000b002u: goto L_B002;
    case 0x0000b006u: goto L_B006;
    case 0x0000b00au: goto L_B00A;
    case 0x0000b00cu: goto L_B00C;
    case 0x0000b00eu: goto L_B00E;
    case 0x0000b012u: goto L_B012;
    case 0x0000b016u: goto L_B016;
    case 0x0000b01au: goto L_B01A;
    case 0x0000b01cu: goto L_B01C;
    case 0x0000b01eu: goto L_B01E;
    case 0x0000b022u: goto L_B022;
    case 0x0000b026u: goto L_B026;
    case 0x0000b028u: goto L_B028;
    case 0x0000b02cu: goto L_B02C;
    case 0x0000b02eu: goto L_B02E;
    case 0x0000b030u: goto L_B030;
    case 0x0000b034u: goto L_B034;
    case 0x0000b038u: goto L_B038;
    case 0x0000b03cu: goto L_B03C;
    case 0x0000b040u: goto L_B040;
    case 0x0000b044u: goto L_B044;
    case 0x0000b046u: goto L_B046;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_AFBA:
    /* 0000afba   4  link.w A5,#0 */
    c->pc = 0x0000afbau;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_AFBE:
    /* 0000afbe   2  clr.w -(A7) */
    c->pc = 0x0000afbeu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AFC0:
    /* 0000afc0   4  move.w (3ce,A4),D0 */
    c->pc = 0x0000afc0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AFC4:
    /* 0000afc4   2  ext.l D0 */
    c->pc = 0x0000afc4u;
    rc_ext_l(c, 0);

L_AFC6:
    /* 0000afc6   2  asl.l #2,D0 */
    c->pc = 0x0000afc6u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_AFC8:
    /* 0000afc8   4  lea (30a,A4),A0 */
    c->pc = 0x0000afc8u;
    c->a[0] = (c->a[4] + 0x30au);

L_AFCC:
    /* 0000afcc   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = 0x0000afccu;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_AFD0:
    /* 0000afd0   4  move.w #2,-(A7) */
    c->pc = 0x0000afd0u;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AFD4:
    /* 0000afd4   4  jsr (ffff8266,A4) */
    c->pc = 0x0000afd4u;
    /* vector 102 */
    rc_push32(c, m, 0x0000afd8u);
    rc_depth++;
    c->pc = 0x0001f2aeu;
    return;

L_AFD8:
    /* 0000afd8   2  addq.w #8,A7 */
    c->pc = 0x0000afd8u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_AFDA:
    /* 0000afda   4  tst.w (3e0,A4) */
    c->pc = 0x0000afdau;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3e0u));
    rc_set_nzvc(c, t0, RC_W);

L_AFDE:
    /* 0000afde   2  ble 0000aff8 */
    c->pc = 0x0000afdeu;
    if (rc_cond(c, 15)) goto L_AFF8;

L_AFE0:
    /* 0000afe0   4  move.w (3d0,A4),D0 */
    c->pc = 0x0000afe0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AFE4:
    /* 0000afe4   2  ext.l D0 */
    c->pc = 0x0000afe4u;
    rc_ext_l(c, 0);

L_AFE6:
    /* 0000afe6   2  asl.l #1,D0 */
    c->pc = 0x0000afe6u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_AFE8:
    /* 0000afe8   4  lea (ffff9660,A4),A0 */
    c->pc = 0x0000afe8u;
    c->a[0] = (c->a[4] - 0x69a0u);

L_AFEC:
    /* 0000afec   6  move.w (0,A0,D0.w),(3ce,A4) */
    c->pc = 0x0000afecu;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x3ceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AFF2:
    /* 0000aff2   4  jsr (0000b126) */
    c->pc = 0x0000aff2u;
    rc_push32(c, m, 0x0000aff6u);
    rc_depth++;
    c->pc = 0x0000b126u;
    return;

L_AFF6:
    /* 0000aff6   2  bra 0000b002 */
    c->pc = 0x0000aff6u;
    goto L_B002;

L_AFF8:
    /* 0000aff8   6  move.w #8,(3ce,A4) */
    c->pc = 0x0000aff8u;
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0x3ceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AFFE:
    /* 0000affe   4  clr.w (3e0,A4) */
    c->pc = 0x0000affeu;
    rc_wr16(c, m, (c->a[4] + 0x3e0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B002:
    /* 0000b002   4  move.w #14,-(A7) */
    c->pc = 0x0000b002u;
    t0 = 0x00000014u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B006:
    /* 0000b006   4  move.w (3ce,A4),D0 */
    c->pc = 0x0000b006u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B00A:
    /* 0000b00a   2  ext.l D0 */
    c->pc = 0x0000b00au;
    rc_ext_l(c, 0);

L_B00C:
    /* 0000b00c   2  asl.l #2,D0 */
    c->pc = 0x0000b00cu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_B00E:
    /* 0000b00e   4  lea (ffff9462,A4),A0 */
    c->pc = 0x0000b00eu;
    c->a[0] = (c->a[4] - 0x6b9eu);

L_B012:
    /* 0000b012   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = 0x0000b012u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B016:
    /* 0000b016   4  move.w (3ce,A4),D0 */
    c->pc = 0x0000b016u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B01A:
    /* 0000b01a   2  ext.l D0 */
    c->pc = 0x0000b01au;
    rc_ext_l(c, 0);

L_B01C:
    /* 0000b01c   2  asl.l #2,D0 */
    c->pc = 0x0000b01cu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_B01E:
    /* 0000b01e   4  lea (ffff9460,A4),A0 */
    c->pc = 0x0000b01eu;
    c->a[0] = (c->a[4] - 0x6ba0u);

L_B022:
    /* 0000b022   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = 0x0000b022u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B026:
    /* 0000b026   2  clr.w -(A7) */
    c->pc = 0x0000b026u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B028:
    /* 0000b028   4  move.w (3ce,A4),D0 */
    c->pc = 0x0000b028u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B02C:
    /* 0000b02c   2  ext.l D0 */
    c->pc = 0x0000b02cu;
    rc_ext_l(c, 0);

L_B02E:
    /* 0000b02e   2  asl.l #2,D0 */
    c->pc = 0x0000b02eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_B030:
    /* 0000b030   4  lea (30a,A4),A0 */
    c->pc = 0x0000b030u;
    c->a[0] = (c->a[4] + 0x30au);

L_B034:
    /* 0000b034   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = 0x0000b034u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B038:
    /* 0000b038   4  move.w #1,-(A7) */
    c->pc = 0x0000b038u;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B03C:
    /* 0000b03c   4  jsr (ffff8272,A4) */
    c->pc = 0x0000b03cu;
    /* vector 104 */
    rc_push32(c, m, 0x0000b040u);
    rc_depth++;
    c->pc = 0x0001f914u;
    return;

L_B040:
    /* 0000b040   4  lea (e,A7),A7 */
    c->pc = 0x0000b040u;
    c->a[7] = (c->a[7] + 0xeu);

L_B044:
    /* 0000b044   2  unlk A5 */
    c->pc = 0x0000b044u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B046:
    /* 0000b046   2  rts */
    c->pc = 0x0000b046u;
    rc_ret(c, m);
    return;

}
