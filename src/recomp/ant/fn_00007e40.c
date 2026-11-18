/* fn_00007e40 - 302 byte(s), 81 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00007e40(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00007e40u): goto L_7E40;
    case RC_ADDR(0x00007e44u): goto L_7E44;
    case RC_ADDR(0x00007e48u): goto L_7E48;
    case RC_ADDR(0x00007e4cu): goto L_7E4C;
    case RC_ADDR(0x00007e4eu): goto L_7E4E;
    case RC_ADDR(0x00007e52u): goto L_7E52;
    case RC_ADDR(0x00007e56u): goto L_7E56;
    case RC_ADDR(0x00007e5au): goto L_7E5A;
    case RC_ADDR(0x00007e5eu): goto L_7E5E;
    case RC_ADDR(0x00007e62u): goto L_7E62;
    case RC_ADDR(0x00007e66u): goto L_7E66;
    case RC_ADDR(0x00007e6au): goto L_7E6A;
    case RC_ADDR(0x00007e6eu): goto L_7E6E;
    case RC_ADDR(0x00007e72u): goto L_7E72;
    case RC_ADDR(0x00007e76u): goto L_7E76;
    case RC_ADDR(0x00007e7au): goto L_7E7A;
    case RC_ADDR(0x00007e80u): goto L_7E80;
    case RC_ADDR(0x00007e82u): goto L_7E82;
    case RC_ADDR(0x00007e88u): goto L_7E88;
    case RC_ADDR(0x00007e8au): goto L_7E8A;
    case RC_ADDR(0x00007e90u): goto L_7E90;
    case RC_ADDR(0x00007e92u): goto L_7E92;
    case RC_ADDR(0x00007e96u): goto L_7E96;
    case RC_ADDR(0x00007e9au): goto L_7E9A;
    case RC_ADDR(0x00007e9cu): goto L_7E9C;
    case RC_ADDR(0x00007ea0u): goto L_7EA0;
    case RC_ADDR(0x00007ea4u): goto L_7EA4;
    case RC_ADDR(0x00007ea6u): goto L_7EA6;
    case RC_ADDR(0x00007eaau): goto L_7EAA;
    case RC_ADDR(0x00007eaeu): goto L_7EAE;
    case RC_ADDR(0x00007eb4u): goto L_7EB4;
    case RC_ADDR(0x00007ebau): goto L_7EBA;
    case RC_ADDR(0x00007ebcu): goto L_7EBC;
    case RC_ADDR(0x00007ebeu): goto L_7EBE;
    case RC_ADDR(0x00007ec0u): goto L_7EC0;
    case RC_ADDR(0x00007ec4u): goto L_7EC4;
    case RC_ADDR(0x00007ec8u): goto L_7EC8;
    case RC_ADDR(0x00007eccu): goto L_7ECC;
    case RC_ADDR(0x00007ed0u): goto L_7ED0;
    case RC_ADDR(0x00007ed6u): goto L_7ED6;
    case RC_ADDR(0x00007ed8u): goto L_7ED8;
    case RC_ADDR(0x00007edeu): goto L_7EDE;
    case RC_ADDR(0x00007ee0u): goto L_7EE0;
    case RC_ADDR(0x00007ee4u): goto L_7EE4;
    case RC_ADDR(0x00007ee8u): goto L_7EE8;
    case RC_ADDR(0x00007eecu): goto L_7EEC;
    case RC_ADDR(0x00007ef0u): goto L_7EF0;
    case RC_ADDR(0x00007ef4u): goto L_7EF4;
    case RC_ADDR(0x00007ef8u): goto L_7EF8;
    case RC_ADDR(0x00007efcu): goto L_7EFC;
    case RC_ADDR(0x00007f00u): goto L_7F00;
    case RC_ADDR(0x00007f04u): goto L_7F04;
    case RC_ADDR(0x00007f08u): goto L_7F08;
    case RC_ADDR(0x00007f0au): goto L_7F0A;
    case RC_ADDR(0x00007f0cu): goto L_7F0C;
    case RC_ADDR(0x00007f0eu): goto L_7F0E;
    case RC_ADDR(0x00007f14u): goto L_7F14;
    case RC_ADDR(0x00007f18u): goto L_7F18;
    case RC_ADDR(0x00007f1au): goto L_7F1A;
    case RC_ADDR(0x00007f1eu): goto L_7F1E;
    case RC_ADDR(0x00007f22u): goto L_7F22;
    case RC_ADDR(0x00007f26u): goto L_7F26;
    case RC_ADDR(0x00007f2au): goto L_7F2A;
    case RC_ADDR(0x00007f2eu): goto L_7F2E;
    case RC_ADDR(0x00007f32u): goto L_7F32;
    case RC_ADDR(0x00007f36u): goto L_7F36;
    case RC_ADDR(0x00007f3au): goto L_7F3A;
    case RC_ADDR(0x00007f3cu): goto L_7F3C;
    case RC_ADDR(0x00007f40u): goto L_7F40;
    case RC_ADDR(0x00007f46u): goto L_7F46;
    case RC_ADDR(0x00007f48u): goto L_7F48;
    case RC_ADDR(0x00007f4eu): goto L_7F4E;
    case RC_ADDR(0x00007f52u): goto L_7F52;
    case RC_ADDR(0x00007f56u): goto L_7F56;
    case RC_ADDR(0x00007f58u): goto L_7F58;
    case RC_ADDR(0x00007f5cu): goto L_7F5C;
    case RC_ADDR(0x00007f60u): goto L_7F60;
    case RC_ADDR(0x00007f64u): goto L_7F64;
    case RC_ADDR(0x00007f68u): goto L_7F68;
    case RC_ADDR(0x00007f6au): goto L_7F6A;
    case RC_ADDR(0x00007f6cu): goto L_7F6C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7E40:
    /* 00007e40   4  link.w A5,#fffffff0 */
    c->pc = RC_ADDR(0x00007e40u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x10u;

L_7E44:
    /* 00007e44   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007e44u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7E48:
    /* 00007e48   4  jsr (00007a4e) */
    c->pc = RC_ADDR(0x00007e48u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007e4cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00007a4eu);
    return;

L_7E4C:
    /* 00007e4c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007e4cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7E4E:
    /* 00007e4e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00007e4eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7E52:
    /* 00007e52   4  pea (00007f7a) */
    c->pc = RC_ADDR(0x00007e52u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007f7au));

L_7E56:
    /* 00007e56   4  pea (00007f6e) */
    c->pc = RC_ADDR(0x00007e56u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007f6eu));

L_7E5A:
    /* 00007e5a   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x00007e5au);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x00007e5eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_7E5E:
    /* 00007e5e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00007e5eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_7E62:
    /* 00007e62   4  pea (fffffff0,A5) */
    c->pc = RC_ADDR(0x00007e62u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x10u));

L_7E66:
    /* 00007e66   4  pea (fffffff8,A5) */
    c->pc = RC_ADDR(0x00007e66u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x8u));

L_7E6A:
    /* 00007e6a   4  pea (00007f84) */
    c->pc = RC_ADDR(0x00007e6au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007f84u));

L_7E6E:
    /* 00007e6e   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x00007e6eu);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x00007e72u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_7E72:
    /* 00007e72   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00007e72u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_7E76:
    /* 00007e76   4  move.l D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00007e76u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7E7A:
    /* 00007e7a   6  cmpi.w #11,(fffff78c,A4) */
    c->pc = RC_ADDR(0x00007e7au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x00000011u);

L_7E80:
    /* 00007e80   2  bne 00007e92 */
    c->pc = RC_ADDR(0x00007e80u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7E92;

L_7E82:
    /* 00007e82   6  cmpi.w #4,(ffff83e2,A4) */
    c->pc = RC_ADDR(0x00007e82u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_7E88:
    /* 00007e88   2  bne 00007e92 */
    c->pc = RC_ADDR(0x00007e88u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7E92;

L_7E8A:
    /* 00007e8a   6  move.w #dc,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00007e8au);
    rc_step(c, m, 16);
    t0 = 0x000000dcu;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7E90:
    /* 00007e90   2  bra 00007ef8 */
    c->pc = RC_ADDR(0x00007e90u);
    rc_step(c, m, 10);
    goto L_7EF8;

L_7E92:
    /* 00007e92   4  pea (00007f8e) */
    c->pc = RC_ADDR(0x00007e92u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007f8eu));

L_7E96:
    /* 00007e96   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x00007e96u);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x00007e9au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_7E9A:
    /* 00007e9a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007e9au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7E9C:
    /* 00007e9c   4  pea (00007f9d) */
    c->pc = RC_ADDR(0x00007e9cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007f9du));

L_7EA0:
    /* 00007ea0   4  jsr (ffff824e,A4) */
    c->pc = RC_ADDR(0x00007ea0u);
    rc_step(c, m, 18);
    /* vector 98 */
    rc_push32(c, m, RC_ADDR(0x00007ea4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d44u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ff16u);
    return;

L_7EA4:
    /* 00007ea4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007ea4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7EA6:
    /* 00007ea6   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00007ea6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7EAA:
    /* 00007eaa   4  jsr (ffff8056,A4) */
    c->pc = RC_ADDR(0x00007eaau);
    rc_step(c, m, 18);
    /* vector 14 */
    rc_push32(c, m, RC_ADDR(0x00007eaeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b4cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00003988u);
    return;

L_7EAE:
    /* 00007eae   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00007eaeu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7EB4:
    /* 00007eb4   6  pea (000a0000).l */
    c->pc = RC_ADDR(0x00007eb4u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x000a0000u);

L_7EBA:
    /* 00007eba   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00007ebau);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_7EBC:
    /* 00007ebc   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00007ebcu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_7EBE:
    /* 00007ebe   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007ebeu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7EC0:
    /* 00007ec0   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00007ec0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7EC4:
    /* 00007ec4   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00007ec4u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7EC8:
    /* 00007ec8   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00007ec8u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00007eccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_7ECC:
    /* 00007ecc   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00007eccu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_7ED0:
    /* 00007ed0   6  cmpi.w #1,(fffffa10,A4) */
    c->pc = RC_ADDR(0x00007ed0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5f0u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_7ED6:
    /* 00007ed6   2  ble 00007ef8 */
    c->pc = RC_ADDR(0x00007ed6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_7EF8;

L_7ED8:
    /* 00007ed8   6  pea (000a0000).l */
    c->pc = RC_ADDR(0x00007ed8u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x000a0000u);

L_7EDE:
    /* 00007ede   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00007edeu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_7EE0:
    /* 00007ee0   4  pea (00000046).l */
    c->pc = RC_ADDR(0x00007ee0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000046u);

L_7EE4:
    /* 00007ee4   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00007ee4u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7EE8:
    /* 00007ee8   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00007ee8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7EEC:
    /* 00007eec   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00007eecu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7EF0:
    /* 00007ef0   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00007ef0u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00007ef4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_7EF4:
    /* 00007ef4   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00007ef4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_7EF8:
    /* 00007ef8   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x00007ef8u);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x00007efcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_7EFC:
    /* 00007efc   4  pea (00007fa2) */
    c->pc = RC_ADDR(0x00007efcu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00007fa2u));

L_7F00:
    /* 00007f00   4  pea (83c,A4) */
    c->pc = RC_ADDR(0x00007f00u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x83cu));

L_7F04:
    /* 00007f04   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x00007f04u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x00007f08u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_7F08:
    /* 00007f08   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007f08u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7F0A:
    /* 00007f0a   2  tst.w D0 */
    c->pc = RC_ADDR(0x00007f0au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_7F0C:
    /* 00007f0c   2  bne 00007f14 */
    c->pc = RC_ADDR(0x00007f0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7F14;

L_7F0E:
    /* 00007f0e   6  move.w #dc,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00007f0eu);
    rc_step(c, m, 16);
    t0 = 0x000000dcu;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F14:
    /* 00007f14   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x00007f14u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F18:
    /* 00007f18   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007f18u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7F1A:
    /* 00007f1a   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00007f1au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7F1E:
    /* 00007f1e   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007f1eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F22:
    /* 00007f22   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00007f22u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7F26:
    /* 00007f26   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x00007f26u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x00007f2au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_7F2A:
    /* 00007f2a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00007f2au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_7F2E:
    /* 00007f2e   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00007f2eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7F32:
    /* 00007f32   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007f32u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7F36:
    /* 00007f36   4  jsr (00006612) */
    c->pc = RC_ADDR(0x00007f36u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007f3au));
    rc_depth++;
    c->pc = RC_ADDR(0x00006612u);
    return;

L_7F3A:
    /* 00007f3a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007f3au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7F3C:
    /* 00007f3c   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00007f3cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7F40:
    /* 00007f40   6  cmpi.w #a,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00007f40u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_7F46:
    /* 00007f46   2  blt 00007f32 */
    c->pc = RC_ADDR(0x00007f46u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_7F32; }

L_7F48:
    /* 00007f48   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00007f48u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7F4E:
    /* 00007f4e   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x00007f4eu);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7F52:
    /* 00007f52   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00007f52u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00007f56u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_7F56:
    /* 00007f56   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00007f56u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_7F58:
    /* 00007f58   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x00007f58u);
    rc_step(c, m, 18);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x00007f5cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afb8u);
    return;

L_7F5C:
    /* 00007f5c   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00007f5cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7F60:
    /* 00007f60   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00007f60u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7F64:
    /* 00007f64   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00007f64u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00007f68u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_7F68:
    /* 00007f68   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007f68u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7F6A:
    /* 00007f6a   2  unlk A5 */
    c->pc = RC_ADDR(0x00007f6au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_7F6C:
    /* 00007f6c   2  rts */
    c->pc = RC_ADDR(0x00007f6cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
