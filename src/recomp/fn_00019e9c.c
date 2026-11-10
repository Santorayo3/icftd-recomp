/* fn_00019e9c - 418 byte(s), 113 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00019e9c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00019e9cu): goto L_19E9C;
    case RC_ADDR(0x00019ea0u): goto L_19EA0;
    case RC_ADDR(0x00019ea4u): goto L_19EA4;
    case RC_ADDR(0x00019ea8u): goto L_19EA8;
    case RC_ADDR(0x00019eaau): goto L_19EAA;
    case RC_ADDR(0x00019eaeu): goto L_19EAE;
    case RC_ADDR(0x00019eb2u): goto L_19EB2;
    case RC_ADDR(0x00019eb4u): goto L_19EB4;
    case RC_ADDR(0x00019eb8u): goto L_19EB8;
    case RC_ADDR(0x00019ebeu): goto L_19EBE;
    case RC_ADDR(0x00019ec2u): goto L_19EC2;
    case RC_ADDR(0x00019ec4u): goto L_19EC4;
    case RC_ADDR(0x00019ec8u): goto L_19EC8;
    case RC_ADDR(0x00019eccu): goto L_19ECC;
    case RC_ADDR(0x00019eceu): goto L_19ECE;
    case RC_ADDR(0x00019ed2u): goto L_19ED2;
    case RC_ADDR(0x00019ed8u): goto L_19ED8;
    case RC_ADDR(0x00019edcu): goto L_19EDC;
    case RC_ADDR(0x00019edeu): goto L_19EDE;
    case RC_ADDR(0x00019ee2u): goto L_19EE2;
    case RC_ADDR(0x00019ee6u): goto L_19EE6;
    case RC_ADDR(0x00019ee8u): goto L_19EE8;
    case RC_ADDR(0x00019eeau): goto L_19EEA;
    case RC_ADDR(0x00019eeeu): goto L_19EEE;
    case RC_ADDR(0x00019ef2u): goto L_19EF2;
    case RC_ADDR(0x00019ef6u): goto L_19EF6;
    case RC_ADDR(0x00019ef8u): goto L_19EF8;
    case RC_ADDR(0x00019efcu): goto L_19EFC;
    case RC_ADDR(0x00019f00u): goto L_19F00;
    case RC_ADDR(0x00019f02u): goto L_19F02;
    case RC_ADDR(0x00019f04u): goto L_19F04;
    case RC_ADDR(0x00019f06u): goto L_19F06;
    case RC_ADDR(0x00019f0au): goto L_19F0A;
    case RC_ADDR(0x00019f0cu): goto L_19F0C;
    case RC_ADDR(0x00019f10u): goto L_19F10;
    case RC_ADDR(0x00019f16u): goto L_19F16;
    case RC_ADDR(0x00019f1au): goto L_19F1A;
    case RC_ADDR(0x00019f22u): goto L_19F22;
    case RC_ADDR(0x00019f24u): goto L_19F24;
    case RC_ADDR(0x00019f2au): goto L_19F2A;
    case RC_ADDR(0x00019f30u): goto L_19F30;
    case RC_ADDR(0x00019f34u): goto L_19F34;
    case RC_ADDR(0x00019f38u): goto L_19F38;
    case RC_ADDR(0x00019f3cu): goto L_19F3C;
    case RC_ADDR(0x00019f40u): goto L_19F40;
    case RC_ADDR(0x00019f42u): goto L_19F42;
    case RC_ADDR(0x00019f46u): goto L_19F46;
    case RC_ADDR(0x00019f4au): goto L_19F4A;
    case RC_ADDR(0x00019f4cu): goto L_19F4C;
    case RC_ADDR(0x00019f4eu): goto L_19F4E;
    case RC_ADDR(0x00019f52u): goto L_19F52;
    case RC_ADDR(0x00019f56u): goto L_19F56;
    case RC_ADDR(0x00019f5au): goto L_19F5A;
    case RC_ADDR(0x00019f5eu): goto L_19F5E;
    case RC_ADDR(0x00019f62u): goto L_19F62;
    case RC_ADDR(0x00019f64u): goto L_19F64;
    case RC_ADDR(0x00019f68u): goto L_19F68;
    case RC_ADDR(0x00019f6eu): goto L_19F6E;
    case RC_ADDR(0x00019f72u): goto L_19F72;
    case RC_ADDR(0x00019f74u): goto L_19F74;
    case RC_ADDR(0x00019f78u): goto L_19F78;
    case RC_ADDR(0x00019f7eu): goto L_19F7E;
    case RC_ADDR(0x00019f82u): goto L_19F82;
    case RC_ADDR(0x00019f84u): goto L_19F84;
    case RC_ADDR(0x00019f88u): goto L_19F88;
    case RC_ADDR(0x00019f8eu): goto L_19F8E;
    case RC_ADDR(0x00019f92u): goto L_19F92;
    case RC_ADDR(0x00019f94u): goto L_19F94;
    case RC_ADDR(0x00019f96u): goto L_19F96;
    case RC_ADDR(0x00019f9au): goto L_19F9A;
    case RC_ADDR(0x00019f9eu): goto L_19F9E;
    case RC_ADDR(0x00019fa0u): goto L_19FA0;
    case RC_ADDR(0x00019fa4u): goto L_19FA4;
    case RC_ADDR(0x00019faau): goto L_19FAA;
    case RC_ADDR(0x00019faeu): goto L_19FAE;
    case RC_ADDR(0x00019fb0u): goto L_19FB0;
    case RC_ADDR(0x00019fb2u): goto L_19FB2;
    case RC_ADDR(0x00019fb6u): goto L_19FB6;
    case RC_ADDR(0x00019fbau): goto L_19FBA;
    case RC_ADDR(0x00019fbcu): goto L_19FBC;
    case RC_ADDR(0x00019fc0u): goto L_19FC0;
    case RC_ADDR(0x00019fc6u): goto L_19FC6;
    case RC_ADDR(0x00019fcau): goto L_19FCA;
    case RC_ADDR(0x00019fccu): goto L_19FCC;
    case RC_ADDR(0x00019fceu): goto L_19FCE;
    case RC_ADDR(0x00019fd2u): goto L_19FD2;
    case RC_ADDR(0x00019fd6u): goto L_19FD6;
    case RC_ADDR(0x00019fd8u): goto L_19FD8;
    case RC_ADDR(0x00019fdcu): goto L_19FDC;
    case RC_ADDR(0x00019fe2u): goto L_19FE2;
    case RC_ADDR(0x00019fe6u): goto L_19FE6;
    case RC_ADDR(0x00019fe8u): goto L_19FE8;
    case RC_ADDR(0x00019feau): goto L_19FEA;
    case RC_ADDR(0x00019feeu): goto L_19FEE;
    case RC_ADDR(0x00019ff4u): goto L_19FF4;
    case RC_ADDR(0x00019ff8u): goto L_19FF8;
    case RC_ADDR(0x00019ffau): goto L_19FFA;
    case RC_ADDR(0x00019ffcu): goto L_19FFC;
    case RC_ADDR(0x0001a000u): goto L_1A000;
    case RC_ADDR(0x0001a006u): goto L_1A006;
    case RC_ADDR(0x0001a00au): goto L_1A00A;
    case RC_ADDR(0x0001a00cu): goto L_1A00C;
    case RC_ADDR(0x0001a00eu): goto L_1A00E;
    case RC_ADDR(0x0001a012u): goto L_1A012;
    case RC_ADDR(0x0001a018u): goto L_1A018;
    case RC_ADDR(0x0001a01cu): goto L_1A01C;
    case RC_ADDR(0x0001a024u): goto L_1A024;
    case RC_ADDR(0x0001a028u): goto L_1A028;
    case RC_ADDR(0x0001a02cu): goto L_1A02C;
    case RC_ADDR(0x0001a034u): goto L_1A034;
    case RC_ADDR(0x0001a038u): goto L_1A038;
    case RC_ADDR(0x0001a03au): goto L_1A03A;
    case RC_ADDR(0x0001a03cu): goto L_1A03C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_19E9C:
    /* 00019e9c   4  link.w A5,#fffffff0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019e9cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x10u;

L_19EA0:
    /* 00019ea0   4  clr.l (fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ea0u);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_19EA4:
    /* 00019ea4   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ea4u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19EA8:
    /* 00019ea8   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ea8u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_19EAA:
    /* 00019eaa   4  lea (1ce8,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019eaau);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_19EAE:
    /* 00019eae   4  move.l (fffffffc,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019eaeu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19EB2:
    /* 00019eb2   2  asl.l #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019eb2u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_19EB4:
    /* 00019eb4   4  lea (9aa,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019eb4u);
    c->a[1] = (c->a[4] + 0x9aau);

L_19EB8:
    /* 00019eb8   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019eb8u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19EBE:
    /* 00019ebe   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ebeu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19EC2:
    /* 00019ec2   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ec2u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_19EC4:
    /* 00019ec4   4  lea (1d00,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ec4u);
    c->a[0] = (c->a[4] + 0x1d00u);

L_19EC8:
    /* 00019ec8   4  move.l (fffffffc,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ec8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19ECC:
    /* 00019ecc   2  asl.l #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019eccu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_19ECE:
    /* 00019ece   4  lea (9c4,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019eceu);
    c->a[1] = (c->a[4] + 0x9c4u);

L_19ED2:
    /* 00019ed2   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ed2u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19ED8:
    /* 00019ed8   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ed8u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19EDC:
    /* 00019edc   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019edcu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_19EDE:
    /* 00019ede   4  lea (1cd0,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019edeu);
    c->a[0] = (c->a[4] + 0x1cd0u);

L_19EE2:
    /* 00019ee2   4  move.w (0,A0,D0.w),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ee2u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19EE6:
    /* 00019ee6   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ee6u);
    rc_ext_l(c, 1);

L_19EE8:
    /* 00019ee8   2  asl.l #2,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ee8u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_19EEA:
    /* 00019eea   4  lea (ffffc6be,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019eeau);
    c->a[0] = (c->a[4] - 0x3942u);

L_19EEE:
    /* 00019eee   4  move.l (0,A0,D1.w),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019eeeu);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19EF2:
    /* 00019ef2   4  move.l (fffffffc,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ef2u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19EF6:
    /* 00019ef6   2  asl.l #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ef6u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_19EF8:
    /* 00019ef8   4  lea (1e68,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ef8u);
    c->a[0] = (c->a[4] + 0x1e68u);

L_19EFC:
    /* 00019efc   4  move.w (0,A0,D1.w),D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019efcu);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F00:
    /* 00019f00   2  ext.l D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f00u);
    rc_ext_l(c, 2);

L_19F02:
    /* 00019f02   2  asl.l #2,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f02u);
    c->d[2] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 2, RC_L), RC_L);

L_19F04:
    /* 00019f04   2  movea.l D2,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f04u);
    t0 = rc_d_get(c, 2, RC_L);
    c->a[0] = t0;

L_19F06:
    /* 00019f06   4  move.l (fffffffc,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f06u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19F0A:
    /* 00019f0a   2  asl.l #2,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f0au);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_19F0C:
    /* 00019f0c   4  lea (9de,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f0cu);
    c->a[1] = (c->a[4] + 0x9deu);

L_19F10:
    /* 00019f10   6  move.l (0,A0,D0.w),(0,A1,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f10u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_19F16:
    /* 00019f16   4  addq.l #1,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f16u);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_19F1A:
    /* 00019f1a   8  cmpi.l #c,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f1au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x0000000cu);

L_19F22:
    /* 00019f22   2  blt 00019ea4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f22u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_19EA4; }

L_19F24:
    /* 00019f24   6  move.w (47a,A4),(9c2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f24u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_wr16(c, m, (c->a[4] + 0x9c2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F2A:
    /* 00019f2a   6  move.w (47c,A4),(9dc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f2au);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_wr16(c, m, (c->a[4] + 0x9dcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F30:
    /* 00019f30   4  clr.l (a0e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f30u);
    rc_wr32(c, m, (c->a[4] + 0xa0eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_19F34:
    /* 00019f34   4  clr.l (fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f34u);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_19F38:
    /* 00019f38   4  clr.l (fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f38u);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_19F3C:
    /* 00019f3c   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f3cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19F40:
    /* 00019f40   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f40u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_19F42:
    /* 00019f42   4  lea (9c4,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f42u);
    c->a[0] = (c->a[4] + 0x9c4u);

L_19F46:
    /* 00019f46   4  move.l (fffffffc,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f46u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19F4A:
    /* 00019f4a   2  addq.l #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f4au);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_19F4C:
    /* 00019f4c   2  asl.l #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f4cu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_19F4E:
    /* 00019f4e   4  lea (9c4,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f4eu);
    c->a[1] = (c->a[4] + 0x9c4u);

L_19F52:
    /* 00019f52   4  move.w (0,A0,D0.w),D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f52u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F56:
    /* 00019f56   4  cmp.w (0,A1,D1.w),D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f56u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_19F5A:
    /* 00019f5a   4  ble 0001a018 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f5au);
    if (rc_cond(c, 15)) goto L_1A018;

L_19F5E:
    /* 00019f5e   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f5eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19F62:
    /* 00019f62   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f62u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_19F64:
    /* 00019f64   4  lea (9aa,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f64u);
    c->a[0] = (c->a[4] + 0x9aau);

L_19F68:
    /* 00019f68   6  move.w (0,A0,D0.w),(fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f68u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F6E:
    /* 00019f6e   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f6eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19F72:
    /* 00019f72   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f72u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_19F74:
    /* 00019f74   4  lea (9c4,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f74u);
    c->a[0] = (c->a[4] + 0x9c4u);

L_19F78:
    /* 00019f78   6  move.w (0,A0,D0.w),(fffffff4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f78u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19F7E:
    /* 00019f7e   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f7eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19F82:
    /* 00019f82   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f82u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_19F84:
    /* 00019f84   4  lea (9de,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f84u);
    c->a[0] = (c->a[4] + 0x9deu);

L_19F88:
    /* 00019f88   6  move.l (0,A0,D0.w),(fffffff0,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f88u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_19F8E:
    /* 00019f8e   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f8eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19F92:
    /* 00019f92   2  addq.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f92u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_19F94:
    /* 00019f94   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f94u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_19F96:
    /* 00019f96   4  lea (9aa,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f96u);
    c->a[0] = (c->a[4] + 0x9aau);

L_19F9A:
    /* 00019f9a   4  move.l (fffffffc,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f9au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19F9E:
    /* 00019f9e   2  asl.l #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019f9eu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_19FA0:
    /* 00019fa0   4  lea (9aa,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fa0u);
    c->a[1] = (c->a[4] + 0x9aau);

L_19FA4:
    /* 00019fa4   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fa4u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19FAA:
    /* 00019faa   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019faau);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19FAE:
    /* 00019fae   2  addq.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019faeu);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_19FB0:
    /* 00019fb0   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fb0u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_19FB2:
    /* 00019fb2   4  lea (9c4,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fb2u);
    c->a[0] = (c->a[4] + 0x9c4u);

L_19FB6:
    /* 00019fb6   4  move.l (fffffffc,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fb6u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19FBA:
    /* 00019fba   2  asl.l #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fbau);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_19FBC:
    /* 00019fbc   4  lea (9c4,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fbcu);
    c->a[1] = (c->a[4] + 0x9c4u);

L_19FC0:
    /* 00019fc0   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fc0u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19FC6:
    /* 00019fc6   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fc6u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19FCA:
    /* 00019fca   2  addq.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fcau);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_19FCC:
    /* 00019fcc   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fccu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_19FCE:
    /* 00019fce   4  lea (9de,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fceu);
    c->a[0] = (c->a[4] + 0x9deu);

L_19FD2:
    /* 00019fd2   4  move.l (fffffffc,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fd2u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19FD6:
    /* 00019fd6   2  asl.l #2,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fd6u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_19FD8:
    /* 00019fd8   4  lea (9de,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fd8u);
    c->a[1] = (c->a[4] + 0x9deu);

L_19FDC:
    /* 00019fdc   6  move.l (0,A0,D0.w),(0,A1,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fdcu);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_19FE2:
    /* 00019fe2   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fe2u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19FE6:
    /* 00019fe6   2  addq.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fe6u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_19FE8:
    /* 00019fe8   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019fe8u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_19FEA:
    /* 00019fea   4  lea (9aa,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019feau);
    c->a[0] = (c->a[4] + 0x9aau);

L_19FEE:
    /* 00019fee   6  move.w (fffffff6,A5),(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019feeu);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_19FF4:
    /* 00019ff4   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ff4u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_19FF8:
    /* 00019ff8   2  addq.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ff8u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_19FFA:
    /* 00019ffa   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ffau);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_19FFC:
    /* 00019ffc   4  lea (9c4,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00019ffcu);
    c->a[0] = (c->a[4] + 0x9c4u);

L_1A000:
    /* 0001a000   6  move.w (fffffff4,A5),(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a000u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A006:
    /* 0001a006   4  move.l (fffffffc,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a006u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A00A:
    /* 0001a00a   2  addq.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a00au);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1A00C:
    /* 0001a00c   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a00cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1A00E:
    /* 0001a00e   4  lea (9de,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a00eu);
    c->a[0] = (c->a[4] + 0x9deu);

L_1A012:
    /* 0001a012   6  move.l (fffffff0,A5),(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a012u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1A018:
    /* 0001a018   4  addq.l #1,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a018u);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1A01C:
    /* 0001a01c   8  cmpi.l #c,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a01cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x0000000cu);

L_1A024:
    /* 0001a024   4  blt 00019f3c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a024u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_19F3C; }

L_1A028:
    /* 0001a028   4  addq.l #1,(fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a028u);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1A02C:
    /* 0001a02c   8  cmpi.l #d,(fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a02cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x0000000du);

L_1A034:
    /* 0001a034   4  blt 00019f38 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a034u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_19F38; }

L_1A038:
    /* 0001a038   2  bsr 0001a03e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a038u);
    rc_push32(c, m, RC_ADDR(0x0001a03au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001a03eu);
    return;

L_1A03A:
    /* 0001a03a   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a03au);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1A03C:
    /* 0001a03c   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001a03cu);
    rc_ret(c, m);
    return;

}
