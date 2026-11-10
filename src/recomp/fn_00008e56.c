/* fn_00008e56 - 234 byte(s), 68 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00008e56(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00008e56u): goto L_8E56;
    case RC_ADDR(0x00008e5au): goto L_8E5A;
    case RC_ADDR(0x00008e5eu): goto L_8E5E;
    case RC_ADDR(0x00008e62u): goto L_8E62;
    case RC_ADDR(0x00008e66u): goto L_8E66;
    case RC_ADDR(0x00008e68u): goto L_8E68;
    case RC_ADDR(0x00008e6cu): goto L_8E6C;
    case RC_ADDR(0x00008e70u): goto L_8E70;
    case RC_ADDR(0x00008e74u): goto L_8E74;
    case RC_ADDR(0x00008e76u): goto L_8E76;
    case RC_ADDR(0x00008e78u): goto L_8E78;
    case RC_ADDR(0x00008e7au): goto L_8E7A;
    case RC_ADDR(0x00008e7cu): goto L_8E7C;
    case RC_ADDR(0x00008e80u): goto L_8E80;
    case RC_ADDR(0x00008e84u): goto L_8E84;
    case RC_ADDR(0x00008e88u): goto L_8E88;
    case RC_ADDR(0x00008e8cu): goto L_8E8C;
    case RC_ADDR(0x00008e90u): goto L_8E90;
    case RC_ADDR(0x00008e94u): goto L_8E94;
    case RC_ADDR(0x00008e98u): goto L_8E98;
    case RC_ADDR(0x00008e9cu): goto L_8E9C;
    case RC_ADDR(0x00008ea0u): goto L_8EA0;
    case RC_ADDR(0x00008ea2u): goto L_8EA2;
    case RC_ADDR(0x00008ea6u): goto L_8EA6;
    case RC_ADDR(0x00008eaau): goto L_8EAA;
    case RC_ADDR(0x00008eaeu): goto L_8EAE;
    case RC_ADDR(0x00008eb2u): goto L_8EB2;
    case RC_ADDR(0x00008eb6u): goto L_8EB6;
    case RC_ADDR(0x00008eb8u): goto L_8EB8;
    case RC_ADDR(0x00008ebcu): goto L_8EBC;
    case RC_ADDR(0x00008ec0u): goto L_8EC0;
    case RC_ADDR(0x00008ec4u): goto L_8EC4;
    case RC_ADDR(0x00008ec6u): goto L_8EC6;
    case RC_ADDR(0x00008ecau): goto L_8ECA;
    case RC_ADDR(0x00008eceu): goto L_8ECE;
    case RC_ADDR(0x00008ed2u): goto L_8ED2;
    case RC_ADDR(0x00008ed6u): goto L_8ED6;
    case RC_ADDR(0x00008ed8u): goto L_8ED8;
    case RC_ADDR(0x00008edcu): goto L_8EDC;
    case RC_ADDR(0x00008ee2u): goto L_8EE2;
    case RC_ADDR(0x00008ee4u): goto L_8EE4;
    case RC_ADDR(0x00008eeau): goto L_8EEA;
    case RC_ADDR(0x00008eecu): goto L_8EEC;
    case RC_ADDR(0x00008ef0u): goto L_8EF0;
    case RC_ADDR(0x00008ef2u): goto L_8EF2;
    case RC_ADDR(0x00008ef6u): goto L_8EF6;
    case RC_ADDR(0x00008efau): goto L_8EFA;
    case RC_ADDR(0x00008efcu): goto L_8EFC;
    case RC_ADDR(0x00008f02u): goto L_8F02;
    case RC_ADDR(0x00008f04u): goto L_8F04;
    case RC_ADDR(0x00008f08u): goto L_8F08;
    case RC_ADDR(0x00008f0au): goto L_8F0A;
    case RC_ADDR(0x00008f0eu): goto L_8F0E;
    case RC_ADDR(0x00008f12u): goto L_8F12;
    case RC_ADDR(0x00008f14u): goto L_8F14;
    case RC_ADDR(0x00008f18u): goto L_8F18;
    case RC_ADDR(0x00008f1cu): goto L_8F1C;
    case RC_ADDR(0x00008f1eu): goto L_8F1E;
    case RC_ADDR(0x00008f22u): goto L_8F22;
    case RC_ADDR(0x00008f24u): goto L_8F24;
    case RC_ADDR(0x00008f28u): goto L_8F28;
    case RC_ADDR(0x00008f2cu): goto L_8F2C;
    case RC_ADDR(0x00008f2eu): goto L_8F2E;
    case RC_ADDR(0x00008f32u): goto L_8F32;
    case RC_ADDR(0x00008f36u): goto L_8F36;
    case RC_ADDR(0x00008f3au): goto L_8F3A;
    case RC_ADDR(0x00008f3cu): goto L_8F3C;
    case RC_ADDR(0x00008f3eu): goto L_8F3E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_8E56:
    /* 00008e56   4  link.w A5,#ffffffcc */
    c->pc = RC_ADDR(0x00008e56u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x34u;

L_8E5A:
    /* 00008e5a   4  move.w #ffff,-(A7) */
    c->pc = RC_ADDR(0x00008e5au);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8E5E:
    /* 00008e5e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00008e5eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8E62:
    /* 00008e62   4  jsr (00005eac) */
    c->pc = RC_ADDR(0x00008e62u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00008e66u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005eacu);
    return;

L_8E66:
    /* 00008e66   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00008e66u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_8E68:
    /* 00008e68   4  jsr (0000334a) */
    c->pc = RC_ADDR(0x00008e68u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00008e6cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000334au);
    return;

L_8E6C:
    /* 00008e6c   4  clr.w (fffff0fa,A4) */
    c->pc = RC_ADDR(0x00008e6cu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xf06u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8E70:
    /* 00008e70   4  tst.w (ffffce40,A4) */
    c->pc = RC_ADDR(0x00008e70u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_8E74:
    /* 00008e74   2  bne 00008eec */
    c->pc = RC_ADDR(0x00008e74u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_8EEC;

L_8E76:
    /* 00008e76   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00008e76u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8E78:
    /* 00008e78   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00008e78u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_8E7A:
    /* 00008e7a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00008e7au);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_8E7C:
    /* 00008e7c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00008e7cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_8E80:
    /* 00008e80   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00008e80u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8E84:
    /* 00008e84   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x00008e84u);
    rc_step(c, m);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x00008e88u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cceu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_8E88:
    /* 00008e88   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00008e88u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_8E8C:
    /* 00008e8c   4  move.w (fffff0fa,A4),-(A7) */
    c->pc = RC_ADDR(0x00008e8cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf06u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8E90:
    /* 00008e90   4  pea (00008f40) */
    c->pc = RC_ADDR(0x00008e90u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00008f40u));

L_8E94:
    /* 00008e94   4  pea (ffffffce,A5) */
    c->pc = RC_ADDR(0x00008e94u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x32u));

L_8E98:
    /* 00008e98   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x00008e98u);
    rc_step(c, m);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x00008e9cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d28u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020db6u);
    return;

L_8E9C:
    /* 00008e9c   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00008e9cu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_8EA0:
    /* 00008ea0   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00008ea0u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8EA2:
    /* 00008ea2   4  move.w #a0,-(A7) */
    c->pc = RC_ADDR(0x00008ea2u);
    rc_step(c, m);
    t0 = 0x000000a0u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8EA6:
    /* 00008ea6   4  move.w #a0,-(A7) */
    c->pc = RC_ADDR(0x00008ea6u);
    rc_step(c, m);
    t0 = 0x000000a0u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8EAA:
    /* 00008eaa   4  pea (ffffffce,A5) */
    c->pc = RC_ADDR(0x00008eaau);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x32u));

L_8EAE:
    /* 00008eae   4  jsr (00004e2e) */
    c->pc = RC_ADDR(0x00008eaeu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00008eb2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004e2eu);
    return;

L_8EB2:
    /* 00008eb2   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00008eb2u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_8EB6:
    /* 00008eb6   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00008eb6u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8EB8:
    /* 00008eb8   4  move.w #aa,-(A7) */
    c->pc = RC_ADDR(0x00008eb8u);
    rc_step(c, m);
    t0 = 0x000000aau;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8EBC:
    /* 00008ebc   4  move.w #a0,-(A7) */
    c->pc = RC_ADDR(0x00008ebcu);
    rc_step(c, m);
    t0 = 0x000000a0u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8EC0:
    /* 00008ec0   4  jsr (000055ba) */
    c->pc = RC_ADDR(0x00008ec0u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00008ec4u));
    rc_depth++;
    c->pc = RC_ADDR(0x000055bau);
    return;

L_8EC4:
    /* 00008ec4   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00008ec4u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_8EC6:
    /* 00008ec6   4  jsr (ffff81ee,A4) */
    c->pc = RC_ADDR(0x00008ec6u);
    rc_step(c, m);
    /* vector 82 */
    rc_push32(c, m, RC_ADDR(0x00008ecau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c44u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d1dau);
    return;

L_8ECA:
    /* 00008eca   4  move.w (ffffce3c,A4),D0 */
    c->pc = RC_ADDR(0x00008ecau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8ECE:
    /* 00008ece   4  add.w D0,(fffff0fa,A4) */
    c->pc = RC_ADDR(0x00008eceu);
    rc_step(c, m);
    t3 = (c->a[4] - 0xf06u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_8ED2:
    /* 00008ed2   4  tst.w (fffff0fa,A4) */
    c->pc = RC_ADDR(0x00008ed2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf06u));
    rc_set_nzvc(c, t0, RC_W);

L_8ED6:
    /* 00008ed6   2  bge 00008edc */
    c->pc = RC_ADDR(0x00008ed6u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_8EDC;

L_8ED8:
    /* 00008ed8   4  clr.w (fffff0fa,A4) */
    c->pc = RC_ADDR(0x00008ed8u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xf06u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8EDC:
    /* 00008edc   6  cmpi.w #18,(fffff0fa,A4) */
    c->pc = RC_ADDR(0x00008edcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf06u));
    rc_cmp(c, RC_W, t0, 0x00000018u);

L_8EE2:
    /* 00008ee2   2  ble 00008eea */
    c->pc = RC_ADDR(0x00008ee2u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_8EEA;

L_8EE4:
    /* 00008ee4   6  move.w #18,(fffff0fa,A4) */
    c->pc = RC_ADDR(0x00008ee4u);
    rc_step(c, m);
    t0 = 0x00000018u;
    rc_wr16(c, m, (c->a[4] - 0xf06u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8EEA:
    /* 00008eea   2  bra 00008e70 */
    c->pc = RC_ADDR(0x00008eeau);
    rc_step(c, m);
    rc_tick();
    goto L_8E70;

L_8EEC:
    /* 00008eec   4  tst.w (fffff0fa,A4) */
    c->pc = RC_ADDR(0x00008eecu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf06u));
    rc_set_nzvc(c, t0, RC_W);

L_8EF0:
    /* 00008ef0   2  beq 00008f14 */
    c->pc = RC_ADDR(0x00008ef0u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_8F14;

L_8EF2:
    /* 00008ef2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00008ef2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8EF6:
    /* 00008ef6   4  jsr (00003398) */
    c->pc = RC_ADDR(0x00008ef6u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00008efau));
    rc_depth++;
    c->pc = RC_ADDR(0x00003398u);
    return;

L_8EFA:
    /* 00008efa   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00008efau);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_8EFC:
    /* 00008efc   6  cmpi.w #e,(ffff83c8,A4) */
    c->pc = RC_ADDR(0x00008efcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_cmp(c, RC_W, t0, 0x0000000eu);

L_8F02:
    /* 00008f02   2  bge 00008f14 */
    c->pc = RC_ADDR(0x00008f02u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_8F14;

L_8F04:
    /* 00008f04   4  tst.w (fffff100,A4) */
    c->pc = RC_ADDR(0x00008f04u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf00u));
    rc_set_nzvc(c, t0, RC_W);

L_8F08:
    /* 00008f08   2  bne 00008f14 */
    c->pc = RC_ADDR(0x00008f08u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_8F14;

L_8F0A:
    /* 00008f0a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00008f0au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8F0E:
    /* 00008f0e   4  jsr (00009064) */
    c->pc = RC_ADDR(0x00008f0eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00008f12u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009064u);
    return;

L_8F12:
    /* 00008f12   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00008f12u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_8F14:
    /* 00008f14   4  move.w (fffff0fa,A4),D0 */
    c->pc = RC_ADDR(0x00008f14u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf06u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8F18:
    /* 00008f18   4  muls.w #3c,D0 */
    c->pc = RC_ADDR(0x00008f18u);
    rc_step(c, m);
    t0 = 0x0000003cu;
    rc_muls(c, 0, t0);

L_8F1C:
    /* 00008f1c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00008f1cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8F1E:
    /* 00008f1e   4  jsr (ffff807a,A4) */
    c->pc = RC_ADDR(0x00008f1eu);
    rc_step(c, m);
    /* vector 20 */
    rc_push32(c, m, RC_ADDR(0x00008f22u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad0u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000579cu);
    return;

L_8F22:
    /* 00008f22   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00008f22u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_8F24:
    /* 00008f24   4  move.w (fffff0fa,A4),-(A7) */
    c->pc = RC_ADDR(0x00008f24u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf06u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8F28:
    /* 00008f28   4  jsr (0000903a) */
    c->pc = RC_ADDR(0x00008f28u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00008f2cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000903au);
    return;

L_8F2C:
    /* 00008f2c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00008f2cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_8F2E:
    /* 00008f2e   4  move.w #ffff,-(A7) */
    c->pc = RC_ADDR(0x00008f2eu);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_8F32:
    /* 00008f32   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00008f32u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8F36:
    /* 00008f36   4  jsr (00005824) */
    c->pc = RC_ADDR(0x00008f36u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00008f3au));
    rc_depth++;
    c->pc = RC_ADDR(0x00005824u);
    return;

L_8F3A:
    /* 00008f3a   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00008f3au);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_8F3C:
    /* 00008f3c   2  unlk A5 */
    c->pc = RC_ADDR(0x00008f3cu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_8F3E:
    /* 00008f3e   2  rts */
    c->pc = RC_ADDR(0x00008f3eu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
