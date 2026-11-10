/* fn_000149dc - 328 byte(s), 81 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000149dc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000149dcu): goto L_149DC;
    case RC_ADDR(0x000149e0u): goto L_149E0;
    case RC_ADDR(0x000149e6u): goto L_149E6;
    case RC_ADDR(0x000149e8u): goto L_149E8;
    case RC_ADDR(0x000149ecu): goto L_149EC;
    case RC_ADDR(0x000149eeu): goto L_149EE;
    case RC_ADDR(0x000149f4u): goto L_149F4;
    case RC_ADDR(0x000149f8u): goto L_149F8;
    case RC_ADDR(0x000149fcu): goto L_149FC;
    case RC_ADDR(0x00014a02u): goto L_14A02;
    case RC_ADDR(0x00014a06u): goto L_14A06;
    case RC_ADDR(0x00014a0au): goto L_14A0A;
    case RC_ADDR(0x00014a0eu): goto L_14A0E;
    case RC_ADDR(0x00014a12u): goto L_14A12;
    case RC_ADDR(0x00014a18u): goto L_14A18;
    case RC_ADDR(0x00014a1au): goto L_14A1A;
    case RC_ADDR(0x00014a20u): goto L_14A20;
    case RC_ADDR(0x00014a26u): goto L_14A26;
    case RC_ADDR(0x00014a2cu): goto L_14A2C;
    case RC_ADDR(0x00014a32u): goto L_14A32;
    case RC_ADDR(0x00014a34u): goto L_14A34;
    case RC_ADDR(0x00014a3au): goto L_14A3A;
    case RC_ADDR(0x00014a40u): goto L_14A40;
    case RC_ADDR(0x00014a46u): goto L_14A46;
    case RC_ADDR(0x00014a4cu): goto L_14A4C;
    case RC_ADDR(0x00014a4eu): goto L_14A4E;
    case RC_ADDR(0x00014a54u): goto L_14A54;
    case RC_ADDR(0x00014a5au): goto L_14A5A;
    case RC_ADDR(0x00014a60u): goto L_14A60;
    case RC_ADDR(0x00014a66u): goto L_14A66;
    case RC_ADDR(0x00014a68u): goto L_14A68;
    case RC_ADDR(0x00014a6eu): goto L_14A6E;
    case RC_ADDR(0x00014a74u): goto L_14A74;
    case RC_ADDR(0x00014a7au): goto L_14A7A;
    case RC_ADDR(0x00014a7eu): goto L_14A7E;
    case RC_ADDR(0x00014a82u): goto L_14A82;
    case RC_ADDR(0x00014a86u): goto L_14A86;
    case RC_ADDR(0x00014a8au): goto L_14A8A;
    case RC_ADDR(0x00014a8eu): goto L_14A8E;
    case RC_ADDR(0x00014a92u): goto L_14A92;
    case RC_ADDR(0x00014a96u): goto L_14A96;
    case RC_ADDR(0x00014a98u): goto L_14A98;
    case RC_ADDR(0x00014a9cu): goto L_14A9C;
    case RC_ADDR(0x00014aa0u): goto L_14AA0;
    case RC_ADDR(0x00014aa2u): goto L_14AA2;
    case RC_ADDR(0x00014aa6u): goto L_14AA6;
    case RC_ADDR(0x00014aaau): goto L_14AAA;
    case RC_ADDR(0x00014aaeu): goto L_14AAE;
    case RC_ADDR(0x00014ab0u): goto L_14AB0;
    case RC_ADDR(0x00014ab4u): goto L_14AB4;
    case RC_ADDR(0x00014ab8u): goto L_14AB8;
    case RC_ADDR(0x00014abau): goto L_14ABA;
    case RC_ADDR(0x00014abeu): goto L_14ABE;
    case RC_ADDR(0x00014ac2u): goto L_14AC2;
    case RC_ADDR(0x00014ac6u): goto L_14AC6;
    case RC_ADDR(0x00014ac8u): goto L_14AC8;
    case RC_ADDR(0x00014accu): goto L_14ACC;
    case RC_ADDR(0x00014ad0u): goto L_14AD0;
    case RC_ADDR(0x00014ad2u): goto L_14AD2;
    case RC_ADDR(0x00014ad6u): goto L_14AD6;
    case RC_ADDR(0x00014adau): goto L_14ADA;
    case RC_ADDR(0x00014adeu): goto L_14ADE;
    case RC_ADDR(0x00014ae0u): goto L_14AE0;
    case RC_ADDR(0x00014ae4u): goto L_14AE4;
    case RC_ADDR(0x00014ae8u): goto L_14AE8;
    case RC_ADDR(0x00014aeau): goto L_14AEA;
    case RC_ADDR(0x00014aeeu): goto L_14AEE;
    case RC_ADDR(0x00014af2u): goto L_14AF2;
    case RC_ADDR(0x00014af6u): goto L_14AF6;
    case RC_ADDR(0x00014afau): goto L_14AFA;
    case RC_ADDR(0x00014afeu): goto L_14AFE;
    case RC_ADDR(0x00014b02u): goto L_14B02;
    case RC_ADDR(0x00014b06u): goto L_14B06;
    case RC_ADDR(0x00014b0au): goto L_14B0A;
    case RC_ADDR(0x00014b0eu): goto L_14B0E;
    case RC_ADDR(0x00014b14u): goto L_14B14;
    case RC_ADDR(0x00014b16u): goto L_14B16;
    case RC_ADDR(0x00014b1au): goto L_14B1A;
    case RC_ADDR(0x00014b1eu): goto L_14B1E;
    case RC_ADDR(0x00014b20u): goto L_14B20;
    case RC_ADDR(0x00014b22u): goto L_14B22;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_149DC:
    /* 000149dc   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000149dcu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_149E0:
    /* 000149e0   6  cmpi.w #3e8,(1154,A4) */
    c->pc = RC_ADDR(0x000149e0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1154u));
    rc_cmp(c, RC_W, t0, 0x000003e8u);

L_149E6:
    /* 000149e6   2  bge 000149f4 */
    c->pc = RC_ADDR(0x000149e6u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_149F4;

L_149E8:
    /* 000149e8   4  tst.w (df8,A4) */
    c->pc = RC_ADDR(0x000149e8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdf8u));
    rc_set_nzvc(c, t0, RC_W);

L_149EC:
    /* 000149ec   2  bne 000149f4 */
    c->pc = RC_ADDR(0x000149ecu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_149F4;

L_149EE:
    /* 000149ee   6  move.w #1,(1192,A4) */
    c->pc = RC_ADDR(0x000149eeu);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1192u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_149F4:
    /* 000149f4   4  tst.w (df8,A4) */
    c->pc = RC_ADDR(0x000149f4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdf8u));
    rc_set_nzvc(c, t0, RC_W);

L_149F8:
    /* 000149f8   4  beq 00014b16 */
    c->pc = RC_ADDR(0x000149f8u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_14B16;

L_149FC:
    /* 000149fc   6  cmpi.w #3e8,(1154,A4) */
    c->pc = RC_ADDR(0x000149fcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1154u));
    rc_cmp(c, RC_W, t0, 0x000003e8u);

L_14A02:
    /* 00014a02   4  bne 00014b16 */
    c->pc = RC_ADDR(0x00014a02u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_14B16;

L_14A06:
    /* 00014a06   4  clr.w (1152,A4) */
    c->pc = RC_ADDR(0x00014a06u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x1152u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14A0A:
    /* 00014a0a   4  clr.w (1150,A4) */
    c->pc = RC_ADDR(0x00014a0au);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x1150u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14A0E:
    /* 00014a0e   4  clr.w (1154,A4) */
    c->pc = RC_ADDR(0x00014a0eu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x1154u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14A12:
    /* 00014a12   6  cmpi.w #f,(1168,A4) */
    c->pc = RC_ADDR(0x00014a12u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1168u));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_14A18:
    /* 00014a18   2  bne 00014a2c */
    c->pc = RC_ADDR(0x00014a18u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_14A2C;

L_14A1A:
    /* 00014a1a   6  move.w #ffd8,(1168,A4) */
    c->pc = RC_ADDR(0x00014a1au);
    rc_step(c, m);
    t0 = 0x0000ffd8u;
    rc_wr16(c, m, (c->a[4] + 0x1168u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A20:
    /* 00014a20   6  bset #0,(1155,A4) */
    c->pc = RC_ADDR(0x00014a20u);
    rc_step(c, m);
    t4 = 0x00000000u;
    t3 = (c->a[4] + 0x1155u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_14A26:
    /* 00014a26   6  move.w #18,(1150,A4) */
    c->pc = RC_ADDR(0x00014a26u);
    rc_step(c, m);
    t0 = 0x00000018u;
    rc_wr16(c, m, (c->a[4] + 0x1150u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A2C:
    /* 00014a2c   6  cmpi.w #126,(1168,A4) */
    c->pc = RC_ADDR(0x00014a2cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1168u));
    rc_cmp(c, RC_W, t0, 0x00000126u);

L_14A32:
    /* 00014a32   2  bne 00014a46 */
    c->pc = RC_ADDR(0x00014a32u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_14A46;

L_14A34:
    /* 00014a34   6  move.w #140,(1168,A4) */
    c->pc = RC_ADDR(0x00014a34u);
    rc_step(c, m);
    t0 = 0x00000140u;
    rc_wr16(c, m, (c->a[4] + 0x1168u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A3A:
    /* 00014a3a   6  bset #1,(1155,A4) */
    c->pc = RC_ADDR(0x00014a3au);
    rc_step(c, m);
    t4 = 0x00000001u;
    t3 = (c->a[4] + 0x1155u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_14A40:
    /* 00014a40   6  move.w #ffe8,(1150,A4) */
    c->pc = RC_ADDR(0x00014a40u);
    rc_step(c, m);
    t0 = 0x0000ffe8u;
    rc_wr16(c, m, (c->a[4] + 0x1150u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A46:
    /* 00014a46   6  cmpi.w #a,(116a,A4) */
    c->pc = RC_ADDR(0x00014a46u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x116au));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_14A4C:
    /* 00014a4c   2  bne 00014a60 */
    c->pc = RC_ADDR(0x00014a4cu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_14A60;

L_14A4E:
    /* 00014a4e   6  move.w #ffe0,(116a,A4) */
    c->pc = RC_ADDR(0x00014a4eu);
    rc_step(c, m);
    t0 = 0x0000ffe0u;
    rc_wr16(c, m, (c->a[4] + 0x116au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A54:
    /* 00014a54   6  bset #2,(1155,A4) */
    c->pc = RC_ADDR(0x00014a54u);
    rc_step(c, m);
    t4 = 0x00000002u;
    t3 = (c->a[4] + 0x1155u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_14A5A:
    /* 00014a5a   6  move.w #14,(1152,A4) */
    c->pc = RC_ADDR(0x00014a5au);
    rc_step(c, m);
    t0 = 0x00000014u;
    rc_wr16(c, m, (c->a[4] + 0x1152u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A60:
    /* 00014a60   6  cmpi.w #b5,(116a,A4) */
    c->pc = RC_ADDR(0x00014a60u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x116au));
    rc_cmp(c, RC_W, t0, 0x000000b5u);

L_14A66:
    /* 00014a66   2  bne 00014a7a */
    c->pc = RC_ADDR(0x00014a66u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_14A7A;

L_14A68:
    /* 00014a68   6  move.w #c8,(116a,A4) */
    c->pc = RC_ADDR(0x00014a68u);
    rc_step(c, m);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] + 0x116au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A6E:
    /* 00014a6e   6  bset #3,(1155,A4) */
    c->pc = RC_ADDR(0x00014a6eu);
    rc_step(c, m);
    t4 = 0x00000003u;
    t3 = (c->a[4] + 0x1155u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_14A74:
    /* 00014a74   6  move.w #ffec,(1152,A4) */
    c->pc = RC_ADDR(0x00014a74u);
    rc_step(c, m);
    t0 = 0x0000ffecu;
    rc_wr16(c, m, (c->a[4] + 0x1152u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A7A:
    /* 00014a7a   4  move.w (1168,A4),D0 */
    c->pc = RC_ADDR(0x00014a7au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1168u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A7E:
    /* 00014a7e   4  add.w (dfa,A4),D0 */
    c->pc = RC_ADDR(0x00014a7eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14A82:
    /* 00014a82   4  move.w D0,(1158,A4) */
    c->pc = RC_ADDR(0x00014a82u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1158u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A86:
    /* 00014a86   4  move.w (116a,A4),D0 */
    c->pc = RC_ADDR(0x00014a86u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x116au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A8A:
    /* 00014a8a   4  add.w (dfc,A4),D0 */
    c->pc = RC_ADDR(0x00014a8au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14A8E:
    /* 00014a8e   4  move.w D0,(115e,A4) */
    c->pc = RC_ADDR(0x00014a8eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x115eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A92:
    /* 00014a92   4  move.w (1154,A4),D0 */
    c->pc = RC_ADDR(0x00014a92u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1154u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14A96:
    /* 00014a96   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00014a96u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14A98:
    /* 00014a98   4  lea (ffffb1ac,A4),A0 */
    c->pc = RC_ADDR(0x00014a98u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4e54u);

L_14A9C:
    /* 00014a9c   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014a9cu);
    rc_step(c, m);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_14AA0:
    /* 00014aa0   2  ext.w D1 */
    c->pc = RC_ADDR(0x00014aa0u);
    rc_step(c, m);
    rc_ext_w(c, 1);

L_14AA2:
    /* 00014aa2   4  add.w (1158,A4),D1 */
    c->pc = RC_ADDR(0x00014aa2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1158u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14AA6:
    /* 00014aa6   4  move.w D1,(115a,A4) */
    c->pc = RC_ADDR(0x00014aa6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x115au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14AAA:
    /* 00014aaa   4  move.w (1154,A4),D0 */
    c->pc = RC_ADDR(0x00014aaau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1154u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14AAE:
    /* 00014aae   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00014aaeu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14AB0:
    /* 00014ab0   4  lea (ffffb1c0,A4),A0 */
    c->pc = RC_ADDR(0x00014ab0u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4e40u);

L_14AB4:
    /* 00014ab4   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014ab4u);
    rc_step(c, m);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_14AB8:
    /* 00014ab8   2  ext.w D1 */
    c->pc = RC_ADDR(0x00014ab8u);
    rc_step(c, m);
    rc_ext_w(c, 1);

L_14ABA:
    /* 00014aba   4  add.w (115e,A4),D1 */
    c->pc = RC_ADDR(0x00014abau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x115eu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14ABE:
    /* 00014abe   4  move.w D1,(1160,A4) */
    c->pc = RC_ADDR(0x00014abeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1160u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14AC2:
    /* 00014ac2   4  move.w (1154,A4),D0 */
    c->pc = RC_ADDR(0x00014ac2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1154u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14AC6:
    /* 00014ac6   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00014ac6u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14AC8:
    /* 00014ac8   4  lea (ffffb1b6,A4),A0 */
    c->pc = RC_ADDR(0x00014ac8u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4e4au);

L_14ACC:
    /* 00014acc   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014accu);
    rc_step(c, m);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_14AD0:
    /* 00014ad0   2  ext.w D1 */
    c->pc = RC_ADDR(0x00014ad0u);
    rc_step(c, m);
    rc_ext_w(c, 1);

L_14AD2:
    /* 00014ad2   4  add.w (1158,A4),D1 */
    c->pc = RC_ADDR(0x00014ad2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1158u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14AD6:
    /* 00014ad6   4  move.w D1,(115c,A4) */
    c->pc = RC_ADDR(0x00014ad6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x115cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14ADA:
    /* 00014ada   4  move.w (1154,A4),D0 */
    c->pc = RC_ADDR(0x00014adau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1154u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14ADE:
    /* 00014ade   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00014adeu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14AE0:
    /* 00014ae0   4  lea (ffffb1ca,A4),A0 */
    c->pc = RC_ADDR(0x00014ae0u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x4e36u);

L_14AE4:
    /* 00014ae4   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014ae4u);
    rc_step(c, m);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_14AE8:
    /* 00014ae8   2  ext.w D1 */
    c->pc = RC_ADDR(0x00014ae8u);
    rc_step(c, m);
    rc_ext_w(c, 1);

L_14AEA:
    /* 00014aea   4  add.w (115e,A4),D1 */
    c->pc = RC_ADDR(0x00014aeau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x115eu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_14AEE:
    /* 00014aee   4  move.w D1,(1162,A4) */
    c->pc = RC_ADDR(0x00014aeeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1162u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14AF2:
    /* 00014af2   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x00014af2u);
    rc_step(c, m);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14AF6:
    /* 00014af6   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00014af6u);
    rc_step(c, m);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14AFA:
    /* 00014afa   4  move.l (1198,A4),-(A7) */
    c->pc = RC_ADDR(0x00014afau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1198u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14AFE:
    /* 00014afe   4  move.w (1196,A4),-(A7) */
    c->pc = RC_ADDR(0x00014afeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1196u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B02:
    /* 00014b02   4  move.l (ffffb1d4,A4),-(A7) */
    c->pc = RC_ADDR(0x00014b02u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x4e2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14B06:
    /* 00014b06   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x00014b06u);
    rc_step(c, m);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x00014b0au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_14B0A:
    /* 00014b0a   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00014b0au);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_14B0E:
    /* 00014b0e   6  move.w #1,(1194,A4) */
    c->pc = RC_ADDR(0x00014b0eu);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1194u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B14:
    /* 00014b14   2  bra 00014b20 */
    c->pc = RC_ADDR(0x00014b14u);
    rc_step(c, m);
    goto L_14B20;

L_14B16:
    /* 00014b16   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00014b16u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14B1A:
    /* 00014b1a   4  jsr (00014906) */
    c->pc = RC_ADDR(0x00014b1au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00014b1eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00014906u);
    return;

L_14B1E:
    /* 00014b1e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00014b1eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_14B20:
    /* 00014b20   2  unlk A5 */
    c->pc = RC_ADDR(0x00014b20u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14B22:
    /* 00014b22   2  rts */
    c->pc = RC_ADDR(0x00014b22u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
