/* fn_00005eac - 274 byte(s), 77 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00005eac(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x00005eacu: goto L_5EAC;
    case 0x00005eb0u: goto L_5EB0;
    case 0x00005eb6u: goto L_5EB6;
    case 0x00005eb8u: goto L_5EB8;
    case 0x00005ebcu: goto L_5EBC;
    case 0x00005ebeu: goto L_5EBE;
    case 0x00005ec0u: goto L_5EC0;
    case 0x00005ec2u: goto L_5EC2;
    case 0x00005ec8u: goto L_5EC8;
    case 0x00005ecau: goto L_5ECA;
    case 0x00005eccu: goto L_5ECC;
    case 0x00005eceu: goto L_5ECE;
    case 0x00005ed0u: goto L_5ED0;
    case 0x00005ed2u: goto L_5ED2;
    case 0x00005ed6u: goto L_5ED6;
    case 0x00005ed8u: goto L_5ED8;
    case 0x00005edcu: goto L_5EDC;
    case 0x00005ee0u: goto L_5EE0;
    case 0x00005ee2u: goto L_5EE2;
    case 0x00005ee4u: goto L_5EE4;
    case 0x00005eecu: goto L_5EEC;
    case 0x00005eeeu: goto L_5EEE;
    case 0x00005ef6u: goto L_5EF6;
    case 0x00005efcu: goto L_5EFC;
    case 0x00005f04u: goto L_5F04;
    case 0x00005f06u: goto L_5F06;
    case 0x00005f0eu: goto L_5F0E;
    case 0x00005f10u: goto L_5F10;
    case 0x00005f16u: goto L_5F16;
    case 0x00005f1cu: goto L_5F1C;
    case 0x00005f20u: goto L_5F20;
    case 0x00005f22u: goto L_5F22;
    case 0x00005f24u: goto L_5F24;
    case 0x00005f26u: goto L_5F26;
    case 0x00005f2cu: goto L_5F2C;
    case 0x00005f2eu: goto L_5F2E;
    case 0x00005f32u: goto L_5F32;
    case 0x00005f36u: goto L_5F36;
    case 0x00005f3au: goto L_5F3A;
    case 0x00005f3eu: goto L_5F3E;
    case 0x00005f42u: goto L_5F42;
    case 0x00005f44u: goto L_5F44;
    case 0x00005f46u: goto L_5F46;
    case 0x00005f4au: goto L_5F4A;
    case 0x00005f4eu: goto L_5F4E;
    case 0x00005f50u: goto L_5F50;
    case 0x00005f54u: goto L_5F54;
    case 0x00005f58u: goto L_5F58;
    case 0x00005f5au: goto L_5F5A;
    case 0x00005f60u: goto L_5F60;
    case 0x00005f62u: goto L_5F62;
    case 0x00005f66u: goto L_5F66;
    case 0x00005f6au: goto L_5F6A;
    case 0x00005f6cu: goto L_5F6C;
    case 0x00005f70u: goto L_5F70;
    case 0x00005f74u: goto L_5F74;
    case 0x00005f78u: goto L_5F78;
    case 0x00005f7au: goto L_5F7A;
    case 0x00005f80u: goto L_5F80;
    case 0x00005f82u: goto L_5F82;
    case 0x00005f88u: goto L_5F88;
    case 0x00005f8au: goto L_5F8A;
    case 0x00005f8eu: goto L_5F8E;
    case 0x00005f92u: goto L_5F92;
    case 0x00005f96u: goto L_5F96;
    case 0x00005f98u: goto L_5F98;
    case 0x00005f9cu: goto L_5F9C;
    case 0x00005f9eu: goto L_5F9E;
    case 0x00005fa0u: goto L_5FA0;
    case 0x00005fa2u: goto L_5FA2;
    case 0x00005fa4u: goto L_5FA4;
    case 0x00005fa6u: goto L_5FA6;
    case 0x00005faau: goto L_5FAA;
    case 0x00005faeu: goto L_5FAE;
    case 0x00005fb2u: goto L_5FB2;
    case 0x00005fb6u: goto L_5FB6;
    case 0x00005fbau: goto L_5FBA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5EAC:
    /* 00005eac   4  link.w A5,#fffffff8 */
    c->pc = 0x00005eacu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_5EB0:
    /* 00005eb0   6  cmpi.w #1,(c,A5) */
    c->pc = 0x00005eb0u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_5EB6:
    /* 00005eb6   2  bne 00005ec2 */
    c->pc = 0x00005eb6u;
    if (rc_cond(c, 6)) goto L_5EC2;

L_5EB8:
    /* 00005eb8   4  tst.w (ffff8438,A4) */
    c->pc = 0x00005eb8u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7bc8u));
    rc_set_nzvc(c, t0, RC_W);

L_5EBC:
    /* 00005ebc   2  bne 00005ec2 */
    c->pc = 0x00005ebcu;
    if (rc_cond(c, 6)) goto L_5EC2;

L_5EBE:
    /* 00005ebe   2  unlk A5 */
    c->pc = 0x00005ebeu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5EC0:
    /* 00005ec0   2  rts */
    c->pc = 0x00005ec0u;
    rc_ret(c, m);
    return;

L_5EC2:
    /* 00005ec2   6  cmpi.w #ffff,(c,A5) */
    c->pc = 0x00005ec2u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_5EC8:
    /* 00005ec8   2  bne 00005eee */
    c->pc = 0x00005ec8u;
    if (rc_cond(c, 6)) goto L_5EEE;

L_5ECA:
    /* 00005eca   2  bsr 00005e6c */
    c->pc = 0x00005ecau;
    rc_push32(c, m, 0x00005eccu);
    rc_depth++;
    c->pc = 0x00005e6cu;
    return;

L_5ECC:
    /* 00005ecc   2  tst.w D0 */
    c->pc = 0x00005eccu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_5ECE:
    /* 00005ece   2  bne 00005ed2 */
    c->pc = 0x00005eceu;
    if (rc_cond(c, 6)) goto L_5ED2;

L_5ED0:
    /* 00005ed0   2  bra 00005ebe */
    c->pc = 0x00005ed0u;
    rc_tick();
    goto L_5EBE;

L_5ED2:
    /* 00005ed2   4  tst.w (ffff8438,A4) */
    c->pc = 0x00005ed2u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7bc8u));
    rc_set_nzvc(c, t0, RC_W);

L_5ED6:
    /* 00005ed6   2  beq 00005ee4 */
    c->pc = 0x00005ed6u;
    if (rc_cond(c, 7)) goto L_5EE4;

L_5ED8:
    /* 00005ed8   4  move.l (8,A5),-(A7) */
    c->pc = 0x00005ed8u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5EDC:
    /* 00005edc   4  jsr (00005e24) */
    c->pc = 0x00005edcu;
    rc_push32(c, m, 0x00005ee0u);
    rc_depth++;
    c->pc = 0x00005e24u;
    return;

L_5EE0:
    /* 00005ee0   2  addq.w #4,A7 */
    c->pc = 0x00005ee0u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5EE2:
    /* 00005ee2   2  bra 00005ebe */
    c->pc = 0x00005ee2u;
    rc_tick();
    goto L_5EBE;

L_5EE4:
    /* 00005ee4   8  move.l #f5,(fffffffc,A5) */
    c->pc = 0x00005ee4u;
    t0 = 0x000000f5u;
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5EEC:
    /* 00005eec   2  bra 00005ef6 */
    c->pc = 0x00005eecu;
    goto L_5EF6;

L_5EEE:
    /* 00005eee   8  move.l #9b,(fffffffc,A5) */
    c->pc = 0x00005eeeu;
    t0 = 0x0000009bu;
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5EF6:
    /* 00005ef6   6  move.w #1,(fffffff8,A5) */
    c->pc = 0x00005ef6u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5EFC:
    /* 00005efc   8  cmpi.l #9a,(fffffffc,A5) */
    c->pc = 0x00005efcu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x0000009au);

L_5F04:
    /* 00005f04   2  ble 00005f5a */
    c->pc = 0x00005f04u;
    if (rc_cond(c, 15)) goto L_5F5A;

L_5F06:
    /* 00005f06   8  cmpi.l #113,(fffffffc,A5) */
    c->pc = 0x00005f06u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000113u);

L_5F0E:
    /* 00005f0e   2  bge 00005f5a */
    c->pc = 0x00005f0eu;
    if (rc_cond(c, 12)) goto L_5F5A;

L_5F10:
    /* 00005f10   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = 0x00005f10u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F16:
    /* 00005f16   6  pea (00080000).l */
    c->pc = 0x00005f16u;
    rc_push32(c, m, 0x00080000u);

L_5F1C:
    /* 00005f1c   4  move.l (fffffffc,A5),D0 */
    c->pc = 0x00005f1cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F20:
    /* 00005f20   2  moveq #10,D1 */
    c->pc = 0x00005f20u;
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_5F22:
    /* 00005f22   2  asl.l D1,D0 */
    c->pc = 0x00005f22u;
    c->d[0] = rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_5F24:
    /* 00005f24   2  move.l D0,-(A7) */
    c->pc = 0x00005f24u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F26:
    /* 00005f26   6  pea (00a00000).l */
    c->pc = 0x00005f26u;
    rc_push32(c, m, 0x00a00000u);

L_5F2C:
    /* 00005f2c   2  clr.w -(A7) */
    c->pc = 0x00005f2cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5F2E:
    /* 00005f2e   4  move.l (ffff8434,A4),-(A7) */
    c->pc = 0x00005f2eu;
    t0 = rc_rd32(c, m, (c->a[4] - 0x7bccu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F32:
    /* 00005f32   4  move.w #1,-(A7) */
    c->pc = 0x00005f32u;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5F36:
    /* 00005f36   4  jsr (ffff8266,A4) */
    c->pc = 0x00005f36u;
    /* vector 102 */
    rc_push32(c, m, 0x00005f3au);
    rc_depth++;
    c->pc = 0x0001f2aeu;
    return;

L_5F3A:
    /* 00005f3a   4  lea (14,A7),A7 */
    c->pc = 0x00005f3au;
    c->a[7] = (c->a[7] + 0x14u);

L_5F3E:
    /* 00005f3e   4  move.l (8,A5),-(A7) */
    c->pc = 0x00005f3eu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F42:
    /* 00005f42   2  bsr 00005fbe */
    c->pc = 0x00005f42u;
    rc_push32(c, m, 0x00005f44u);
    rc_depth++;
    c->pc = 0x00005fbeu;
    return;

L_5F44:
    /* 00005f44   2  addq.w #4,A7 */
    c->pc = 0x00005f44u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5F46:
    /* 00005f46   4  move.w (c,A5),D0 */
    c->pc = 0x00005f46u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5F4A:
    /* 00005f4a   4  muls.w (fffffff8,A5),D0 */
    c->pc = 0x00005f4au;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_muls(c, 0, t0);

L_5F4E:
    /* 00005f4e   2  ext.l D0 */
    c->pc = 0x00005f4eu;
    rc_ext_l(c, 0);

L_5F50:
    /* 00005f50   4  add.l D0,(fffffffc,A5) */
    c->pc = 0x00005f50u;
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_5F54:
    /* 00005f54   4  addq.w #1,(fffffff8,A5) */
    c->pc = 0x00005f54u;
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_5F58:
    /* 00005f58   2  bra 00005efc */
    c->pc = 0x00005f58u;
    rc_tick();
    goto L_5EFC;

L_5F5A:
    /* 00005f5a   6  cmpi.w #ffff,(c,A5) */
    c->pc = 0x00005f5au;
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_5F60:
    /* 00005f60   2  bne 00005f82 */
    c->pc = 0x00005f60u;
    if (rc_cond(c, 6)) goto L_5F82;

L_5F62:
    /* 00005f62   4  move.l (8,A5),-(A7) */
    c->pc = 0x00005f62u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F66:
    /* 00005f66   4  jsr (00005e24) */
    c->pc = 0x00005f66u;
    rc_push32(c, m, 0x00005f6au);
    rc_depth++;
    c->pc = 0x00005e24u;
    return;

L_5F6A:
    /* 00005f6a   2  addq.w #4,A7 */
    c->pc = 0x00005f6au;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5F6C:
    /* 00005f6c   4  jsr (ffff81ee,A4) */
    c->pc = 0x00005f6cu;
    /* vector 82 */
    rc_push32(c, m, 0x00005f70u);
    rc_depth++;
    c->pc = 0x0001d1dau;
    return;

L_5F70:
    /* 00005f70   4  move.l (8,A5),-(A7) */
    c->pc = 0x00005f70u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F74:
    /* 00005f74   4  jsr (00005e24) */
    c->pc = 0x00005f74u;
    rc_push32(c, m, 0x00005f78u);
    rc_depth++;
    c->pc = 0x00005e24u;
    return;

L_5F78:
    /* 00005f78   2  addq.w #4,A7 */
    c->pc = 0x00005f78u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5F7A:
    /* 00005f7a   6  move.w #1,(ffff8438,A4) */
    c->pc = 0x00005f7au;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7bc8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5F80:
    /* 00005f80   2  bra 00005fba */
    c->pc = 0x00005f80u;
    goto L_5FBA;

L_5F82:
    /* 00005f82   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = 0x00005f82u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F88:
    /* 00005f88   2  clr.w -(A7) */
    c->pc = 0x00005f88u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5F8A:
    /* 00005f8a   4  move.l (ffff8434,A4),-(A7) */
    c->pc = 0x00005f8au;
    t0 = rc_rd32(c, m, (c->a[4] - 0x7bccu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F8E:
    /* 00005f8e   4  move.w #2,-(A7) */
    c->pc = 0x00005f8eu;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_5F92:
    /* 00005f92   4  jsr (ffff8266,A4) */
    c->pc = 0x00005f92u;
    /* vector 102 */
    rc_push32(c, m, 0x00005f96u);
    rc_depth++;
    c->pc = 0x0001f2aeu;
    return;

L_5F96:
    /* 00005f96   2  addq.w #8,A7 */
    c->pc = 0x00005f96u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5F98:
    /* 00005f98   4  move.l (8,A5),-(A7) */
    c->pc = 0x00005f98u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5F9C:
    /* 00005f9c   2  bsr 00005fbe */
    c->pc = 0x00005f9cu;
    rc_push32(c, m, 0x00005f9eu);
    rc_depth++;
    c->pc = 0x00005fbeu;
    return;

L_5F9E:
    /* 00005f9e   2  addq.w #4,A7 */
    c->pc = 0x00005f9eu;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5FA0:
    /* 00005fa0   2  clr.w -(A7) */
    c->pc = 0x00005fa0u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5FA2:
    /* 00005fa2   2  clr.l -(A7) */
    c->pc = 0x00005fa2u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5FA4:
    /* 00005fa4   2  clr.l -(A7) */
    c->pc = 0x00005fa4u;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_5FA6:
    /* 00005fa6   4  movea.l (8,A5),A0 */
    c->pc = 0x00005fa6u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_5FAA:
    /* 00005faa   4  move.l (2c,A0),-(A7) */
    c->pc = 0x00005faau;
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5FAE:
    /* 00005fae   4  jsr (ffff8278,A4) */
    c->pc = 0x00005faeu;
    /* vector 105 */
    rc_push32(c, m, 0x00005fb2u);
    rc_depth++;
    c->pc = 0x0001fa02u;
    return;

L_5FB2:
    /* 00005fb2   4  lea (e,A7),A7 */
    c->pc = 0x00005fb2u;
    c->a[7] = (c->a[7] + 0xeu);

L_5FB6:
    /* 00005fb6   4  clr.w (ffff8438,A4) */
    c->pc = 0x00005fb6u;
    rc_wr16(c, m, (c->a[4] - 0x7bc8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5FBA:
    /* 00005fba   4  bra 00005ebe */
    c->pc = 0x00005fbau;
    rc_tick();
    goto L_5EBE;

}
