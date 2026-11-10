/* fn_0000b048 - 222 byte(s), 68 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b048(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case 0x0000b048u: goto L_B048;
    case 0x0000b04cu: goto L_B04C;
    case 0x0000b04eu: goto L_B04E;
    case 0x0000b052u: goto L_B052;
    case 0x0000b054u: goto L_B054;
    case 0x0000b056u: goto L_B056;
    case 0x0000b05au: goto L_B05A;
    case 0x0000b05eu: goto L_B05E;
    case 0x0000b062u: goto L_B062;
    case 0x0000b066u: goto L_B066;
    case 0x0000b068u: goto L_B068;
    case 0x0000b06cu: goto L_B06C;
    case 0x0000b06eu: goto L_B06E;
    case 0x0000b070u: goto L_B070;
    case 0x0000b074u: goto L_B074;
    case 0x0000b078u: goto L_B078;
    case 0x0000b07au: goto L_B07A;
    case 0x0000b07cu: goto L_B07C;
    case 0x0000b080u: goto L_B080;
    case 0x0000b082u: goto L_B082;
    case 0x0000b084u: goto L_B084;
    case 0x0000b088u: goto L_B088;
    case 0x0000b08cu: goto L_B08C;
    case 0x0000b090u: goto L_B090;
    case 0x0000b094u: goto L_B094;
    case 0x0000b096u: goto L_B096;
    case 0x0000b09au: goto L_B09A;
    case 0x0000b09cu: goto L_B09C;
    case 0x0000b0a0u: goto L_B0A0;
    case 0x0000b0a2u: goto L_B0A2;
    case 0x0000b0a4u: goto L_B0A4;
    case 0x0000b0a8u: goto L_B0A8;
    case 0x0000b0aeu: goto L_B0AE;
    case 0x0000b0b0u: goto L_B0B0;
    case 0x0000b0b2u: goto L_B0B2;
    case 0x0000b0b8u: goto L_B0B8;
    case 0x0000b0bcu: goto L_B0BC;
    case 0x0000b0c0u: goto L_B0C0;
    case 0x0000b0c4u: goto L_B0C4;
    case 0x0000b0c8u: goto L_B0C8;
    case 0x0000b0cau: goto L_B0CA;
    case 0x0000b0ceu: goto L_B0CE;
    case 0x0000b0d0u: goto L_B0D0;
    case 0x0000b0d2u: goto L_B0D2;
    case 0x0000b0d6u: goto L_B0D6;
    case 0x0000b0dau: goto L_B0DA;
    case 0x0000b0deu: goto L_B0DE;
    case 0x0000b0e2u: goto L_B0E2;
    case 0x0000b0e6u: goto L_B0E6;
    case 0x0000b0eau: goto L_B0EA;
    case 0x0000b0ecu: goto L_B0EC;
    case 0x0000b0eeu: goto L_B0EE;
    case 0x0000b0f2u: goto L_B0F2;
    case 0x0000b0f6u: goto L_B0F6;
    case 0x0000b0f8u: goto L_B0F8;
    case 0x0000b0fcu: goto L_B0FC;
    case 0x0000b100u: goto L_B100;
    case 0x0000b104u: goto L_B104;
    case 0x0000b106u: goto L_B106;
    case 0x0000b10au: goto L_B10A;
    case 0x0000b10cu: goto L_B10C;
    case 0x0000b10eu: goto L_B10E;
    case 0x0000b112u: goto L_B112;
    case 0x0000b116u: goto L_B116;
    case 0x0000b11au: goto L_B11A;
    case 0x0000b11eu: goto L_B11E;
    case 0x0000b122u: goto L_B122;
    case 0x0000b124u: goto L_B124;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B048:
    /* 0000b048   4  link.w A5,#0 */
    c->pc = 0x0000b048u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B04C:
    /* 0000b04c   2  clr.w -(A7) */
    c->pc = 0x0000b04cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B04E:
    /* 0000b04e   4  move.w (3d0,A4),D0 */
    c->pc = 0x0000b04eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B052:
    /* 0000b052   2  ext.l D0 */
    c->pc = 0x0000b052u;
    rc_ext_l(c, 0);

L_B054:
    /* 0000b054   2  asl.l #2,D0 */
    c->pc = 0x0000b054u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_B056:
    /* 0000b056   4  lea (34a,A4),A0 */
    c->pc = 0x0000b056u;
    c->a[0] = (c->a[4] + 0x34au);

L_B05A:
    /* 0000b05a   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = 0x0000b05au;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B05E:
    /* 0000b05e   4  move.w #2,-(A7) */
    c->pc = 0x0000b05eu;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B062:
    /* 0000b062   4  jsr (ffff8266,A4) */
    c->pc = 0x0000b062u;
    /* vector 102 */
    rc_push32(c, m, 0x0000b066u);
    rc_depth++;
    c->pc = 0x0001f2aeu;
    return;

L_B066:
    /* 0000b066   2  addq.w #8,A7 */
    c->pc = 0x0000b066u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B068:
    /* 0000b068   4  move.w (3d0,A4),D0 */
    c->pc = 0x0000b068u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B06C:
    /* 0000b06c   2  ext.l D0 */
    c->pc = 0x0000b06cu;
    rc_ext_l(c, 0);

L_B06E:
    /* 0000b06e   2  asl.l #2,D0 */
    c->pc = 0x0000b06eu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_B070:
    /* 0000b070   4  lea (38a,A4),A0 */
    c->pc = 0x0000b070u;
    c->a[0] = (c->a[4] + 0x38au);

L_B074:
    /* 0000b074   4  tst.l (0,A0,D0.w) */
    c->pc = 0x0000b074u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_B078:
    /* 0000b078   2  beq 0000b096 */
    c->pc = 0x0000b078u;
    if (rc_cond(c, 7)) goto L_B096;

L_B07A:
    /* 0000b07a   2  clr.w -(A7) */
    c->pc = 0x0000b07au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B07C:
    /* 0000b07c   4  move.w (3d0,A4),D0 */
    c->pc = 0x0000b07cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B080:
    /* 0000b080   2  ext.l D0 */
    c->pc = 0x0000b080u;
    rc_ext_l(c, 0);

L_B082:
    /* 0000b082   2  asl.l #2,D0 */
    c->pc = 0x0000b082u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_B084:
    /* 0000b084   4  lea (38a,A4),A0 */
    c->pc = 0x0000b084u;
    c->a[0] = (c->a[4] + 0x38au);

L_B088:
    /* 0000b088   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = 0x0000b088u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B08C:
    /* 0000b08c   4  move.w #2,-(A7) */
    c->pc = 0x0000b08cu;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B090:
    /* 0000b090   4  jsr (ffff8266,A4) */
    c->pc = 0x0000b090u;
    /* vector 102 */
    rc_push32(c, m, 0x0000b094u);
    rc_depth++;
    c->pc = 0x0001f2aeu;
    return;

L_B094:
    /* 0000b094   2  addq.w #8,A7 */
    c->pc = 0x0000b094u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B096:
    /* 0000b096   4  tst.w (3e2,A4) */
    c->pc = 0x0000b096u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3e2u));
    rc_set_nzvc(c, t0, RC_W);

L_B09A:
    /* 0000b09a   2  ble 0000b0b2 */
    c->pc = 0x0000b09au;
    if (rc_cond(c, 15)) goto L_B0B2;

L_B09C:
    /* 0000b09c   4  move.w (3ce,A4),D0 */
    c->pc = 0x0000b09cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B0A0:
    /* 0000b0a0   2  ext.l D0 */
    c->pc = 0x0000b0a0u;
    rc_ext_l(c, 0);

L_B0A2:
    /* 0000b0a2   2  asl.l #1,D0 */
    c->pc = 0x0000b0a2u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_B0A4:
    /* 0000b0a4   4  lea (ffff9690,A4),A0 */
    c->pc = 0x0000b0a4u;
    c->a[0] = (c->a[4] - 0x6970u);

L_B0A8:
    /* 0000b0a8   6  move.w (0,A0,D0.w),(3d0,A4) */
    c->pc = 0x0000b0a8u;
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0x3d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B0AE:
    /* 0000b0ae   2  bsr 0000b126 */
    c->pc = 0x0000b0aeu;
    rc_push32(c, m, 0x0000b0b0u);
    rc_depth++;
    c->pc = 0x0000b126u;
    return;

L_B0B0:
    /* 0000b0b0   2  bra 0000b0bc */
    c->pc = 0x0000b0b0u;
    goto L_B0BC;

L_B0B2:
    /* 0000b0b2   6  move.w #8,(3d0,A4) */
    c->pc = 0x0000b0b2u;
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0x3d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B0B8:
    /* 0000b0b8   4  clr.w (3e2,A4) */
    c->pc = 0x0000b0b8u;
    rc_wr16(c, m, (c->a[4] + 0x3e2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B0BC:
    /* 0000b0bc   4  move.w #a,-(A7) */
    c->pc = 0x0000b0bcu;
    t0 = 0x0000000au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B0C0:
    /* 0000b0c0   4  move.w (3cc,A4),-(A7) */
    c->pc = 0x0000b0c0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ccu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B0C4:
    /* 0000b0c4   4  move.w (3ca,A4),-(A7) */
    c->pc = 0x0000b0c4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3cau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B0C8:
    /* 0000b0c8   2  clr.w -(A7) */
    c->pc = 0x0000b0c8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B0CA:
    /* 0000b0ca   4  move.w (3d0,A4),D0 */
    c->pc = 0x0000b0cau;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B0CE:
    /* 0000b0ce   2  ext.l D0 */
    c->pc = 0x0000b0ceu;
    rc_ext_l(c, 0);

L_B0D0:
    /* 0000b0d0   2  asl.l #2,D0 */
    c->pc = 0x0000b0d0u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_B0D2:
    /* 0000b0d2   4  lea (34a,A4),A0 */
    c->pc = 0x0000b0d2u;
    c->a[0] = (c->a[4] + 0x34au);

L_B0D6:
    /* 0000b0d6   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = 0x0000b0d6u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B0DA:
    /* 0000b0da   4  move.w #1,-(A7) */
    c->pc = 0x0000b0dau;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B0DE:
    /* 0000b0de   4  jsr (ffff8272,A4) */
    c->pc = 0x0000b0deu;
    /* vector 104 */
    rc_push32(c, m, 0x0000b0e2u);
    rc_depth++;
    c->pc = 0x0001f914u;
    return;

L_B0E2:
    /* 0000b0e2   4  lea (e,A7),A7 */
    c->pc = 0x0000b0e2u;
    c->a[7] = (c->a[7] + 0xeu);

L_B0E6:
    /* 0000b0e6   4  move.w (3d0,A4),D0 */
    c->pc = 0x0000b0e6u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B0EA:
    /* 0000b0ea   2  ext.l D0 */
    c->pc = 0x0000b0eau;
    rc_ext_l(c, 0);

L_B0EC:
    /* 0000b0ec   2  asl.l #2,D0 */
    c->pc = 0x0000b0ecu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_B0EE:
    /* 0000b0ee   4  lea (38a,A4),A0 */
    c->pc = 0x0000b0eeu;
    c->a[0] = (c->a[4] + 0x38au);

L_B0F2:
    /* 0000b0f2   4  tst.l (0,A0,D0.w) */
    c->pc = 0x0000b0f2u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_B0F6:
    /* 0000b0f6   2  beq 0000b122 */
    c->pc = 0x0000b0f6u;
    if (rc_cond(c, 7)) goto L_B122;

L_B0F8:
    /* 0000b0f8   4  move.w #28,-(A7) */
    c->pc = 0x0000b0f8u;
    t0 = 0x00000028u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B0FC:
    /* 0000b0fc   4  move.w (3cc,A4),-(A7) */
    c->pc = 0x0000b0fcu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3ccu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B100:
    /* 0000b100   4  move.w (3ca,A4),-(A7) */
    c->pc = 0x0000b100u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3cau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B104:
    /* 0000b104   2  clr.w -(A7) */
    c->pc = 0x0000b104u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B106:
    /* 0000b106   4  move.w (3d0,A4),D0 */
    c->pc = 0x0000b106u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x3d0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B10A:
    /* 0000b10a   2  ext.l D0 */
    c->pc = 0x0000b10au;
    rc_ext_l(c, 0);

L_B10C:
    /* 0000b10c   2  asl.l #2,D0 */
    c->pc = 0x0000b10cu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_B10E:
    /* 0000b10e   4  lea (38a,A4),A0 */
    c->pc = 0x0000b10eu;
    c->a[0] = (c->a[4] + 0x38au);

L_B112:
    /* 0000b112   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = 0x0000b112u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B116:
    /* 0000b116   4  move.w #1,-(A7) */
    c->pc = 0x0000b116u;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B11A:
    /* 0000b11a   4  jsr (ffff8272,A4) */
    c->pc = 0x0000b11au;
    /* vector 104 */
    rc_push32(c, m, 0x0000b11eu);
    rc_depth++;
    c->pc = 0x0001f914u;
    return;

L_B11E:
    /* 0000b11e   4  lea (e,A7),A7 */
    c->pc = 0x0000b11eu;
    c->a[7] = (c->a[7] + 0xeu);

L_B122:
    /* 0000b122   2  unlk A5 */
    c->pc = 0x0000b122u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B124:
    /* 0000b124   2  rts */
    c->pc = 0x0000b124u;
    rc_ret(c, m);
    return;

}
