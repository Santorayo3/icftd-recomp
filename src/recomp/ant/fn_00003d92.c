/* fn_00003d92 - 524 byte(s), 138 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00003d92(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00003d92u): goto L_3D92;
    case RC_ADDR(0x00003d96u): goto L_3D96;
    case RC_ADDR(0x00003d9au): goto L_3D9A;
    case RC_ADDR(0x00003d9eu): goto L_3D9E;
    case RC_ADDR(0x00003da2u): goto L_3DA2;
    case RC_ADDR(0x00003da6u): goto L_3DA6;
    case RC_ADDR(0x00003dacu): goto L_3DAC;
    case RC_ADDR(0x00003db0u): goto L_3DB0;
    case RC_ADDR(0x00003db4u): goto L_3DB4;
    case RC_ADDR(0x00003db8u): goto L_3DB8;
    case RC_ADDR(0x00003dbau): goto L_3DBA;
    case RC_ADDR(0x00003dbeu): goto L_3DBE;
    case RC_ADDR(0x00003dc2u): goto L_3DC2;
    case RC_ADDR(0x00003dc6u): goto L_3DC6;
    case RC_ADDR(0x00003dc8u): goto L_3DC8;
    case RC_ADDR(0x00003dccu): goto L_3DCC;
    case RC_ADDR(0x00003dd0u): goto L_3DD0;
    case RC_ADDR(0x00003dd4u): goto L_3DD4;
    case RC_ADDR(0x00003dd8u): goto L_3DD8;
    case RC_ADDR(0x00003ddcu): goto L_3DDC;
    case RC_ADDR(0x00003de0u): goto L_3DE0;
    case RC_ADDR(0x00003de2u): goto L_3DE2;
    case RC_ADDR(0x00003de6u): goto L_3DE6;
    case RC_ADDR(0x00003deau): goto L_3DEA;
    case RC_ADDR(0x00003deeu): goto L_3DEE;
    case RC_ADDR(0x00003df2u): goto L_3DF2;
    case RC_ADDR(0x00003df6u): goto L_3DF6;
    case RC_ADDR(0x00003dfau): goto L_3DFA;
    case RC_ADDR(0x00003dfcu): goto L_3DFC;
    case RC_ADDR(0x00003e00u): goto L_3E00;
    case RC_ADDR(0x00003e04u): goto L_3E04;
    case RC_ADDR(0x00003e08u): goto L_3E08;
    case RC_ADDR(0x00003e0cu): goto L_3E0C;
    case RC_ADDR(0x00003e10u): goto L_3E10;
    case RC_ADDR(0x00003e14u): goto L_3E14;
    case RC_ADDR(0x00003e16u): goto L_3E16;
    case RC_ADDR(0x00003e1au): goto L_3E1A;
    case RC_ADDR(0x00003e1eu): goto L_3E1E;
    case RC_ADDR(0x00003e22u): goto L_3E22;
    case RC_ADDR(0x00003e28u): goto L_3E28;
    case RC_ADDR(0x00003e2eu): goto L_3E2E;
    case RC_ADDR(0x00003e34u): goto L_3E34;
    case RC_ADDR(0x00003e3au): goto L_3E3A;
    case RC_ADDR(0x00003e42u): goto L_3E42;
    case RC_ADDR(0x00003e46u): goto L_3E46;
    case RC_ADDR(0x00003e4au): goto L_3E4A;
    case RC_ADDR(0x00003e4cu): goto L_3E4C;
    case RC_ADDR(0x00003e50u): goto L_3E50;
    case RC_ADDR(0x00003e52u): goto L_3E52;
    case RC_ADDR(0x00003e56u): goto L_3E56;
    case RC_ADDR(0x00003e5au): goto L_3E5A;
    case RC_ADDR(0x00003e5eu): goto L_3E5E;
    case RC_ADDR(0x00003e62u): goto L_3E62;
    case RC_ADDR(0x00003e66u): goto L_3E66;
    case RC_ADDR(0x00003e6au): goto L_3E6A;
    case RC_ADDR(0x00003e6cu): goto L_3E6C;
    case RC_ADDR(0x00003e70u): goto L_3E70;
    case RC_ADDR(0x00003e74u): goto L_3E74;
    case RC_ADDR(0x00003e78u): goto L_3E78;
    case RC_ADDR(0x00003e7au): goto L_3E7A;
    case RC_ADDR(0x00003e7eu): goto L_3E7E;
    case RC_ADDR(0x00003e82u): goto L_3E82;
    case RC_ADDR(0x00003e8au): goto L_3E8A;
    case RC_ADDR(0x00003e8cu): goto L_3E8C;
    case RC_ADDR(0x00003e94u): goto L_3E94;
    case RC_ADDR(0x00003e98u): goto L_3E98;
    case RC_ADDR(0x00003e9cu): goto L_3E9C;
    case RC_ADDR(0x00003e9eu): goto L_3E9E;
    case RC_ADDR(0x00003ea0u): goto L_3EA0;
    case RC_ADDR(0x00003ea4u): goto L_3EA4;
    case RC_ADDR(0x00003ea6u): goto L_3EA6;
    case RC_ADDR(0x00003ea8u): goto L_3EA8;
    case RC_ADDR(0x00003eacu): goto L_3EAC;
    case RC_ADDR(0x00003eaeu): goto L_3EAE;
    case RC_ADDR(0x00003eb0u): goto L_3EB0;
    case RC_ADDR(0x00003eb4u): goto L_3EB4;
    case RC_ADDR(0x00003eb8u): goto L_3EB8;
    case RC_ADDR(0x00003ebcu): goto L_3EBC;
    case RC_ADDR(0x00003ec0u): goto L_3EC0;
    case RC_ADDR(0x00003ec4u): goto L_3EC4;
    case RC_ADDR(0x00003ec8u): goto L_3EC8;
    case RC_ADDR(0x00003eccu): goto L_3ECC;
    case RC_ADDR(0x00003ed0u): goto L_3ED0;
    case RC_ADDR(0x00003ed2u): goto L_3ED2;
    case RC_ADDR(0x00003ed6u): goto L_3ED6;
    case RC_ADDR(0x00003edau): goto L_3EDA;
    case RC_ADDR(0x00003edeu): goto L_3EDE;
    case RC_ADDR(0x00003ee2u): goto L_3EE2;
    case RC_ADDR(0x00003ee6u): goto L_3EE6;
    case RC_ADDR(0x00003ee8u): goto L_3EE8;
    case RC_ADDR(0x00003eecu): goto L_3EEC;
    case RC_ADDR(0x00003ef0u): goto L_3EF0;
    case RC_ADDR(0x00003ef4u): goto L_3EF4;
    case RC_ADDR(0x00003ef8u): goto L_3EF8;
    case RC_ADDR(0x00003efcu): goto L_3EFC;
    case RC_ADDR(0x00003f00u): goto L_3F00;
    case RC_ADDR(0x00003f02u): goto L_3F02;
    case RC_ADDR(0x00003f06u): goto L_3F06;
    case RC_ADDR(0x00003f0au): goto L_3F0A;
    case RC_ADDR(0x00003f0eu): goto L_3F0E;
    case RC_ADDR(0x00003f12u): goto L_3F12;
    case RC_ADDR(0x00003f16u): goto L_3F16;
    case RC_ADDR(0x00003f18u): goto L_3F18;
    case RC_ADDR(0x00003f1cu): goto L_3F1C;
    case RC_ADDR(0x00003f20u): goto L_3F20;
    case RC_ADDR(0x00003f24u): goto L_3F24;
    case RC_ADDR(0x00003f28u): goto L_3F28;
    case RC_ADDR(0x00003f2cu): goto L_3F2C;
    case RC_ADDR(0x00003f30u): goto L_3F30;
    case RC_ADDR(0x00003f32u): goto L_3F32;
    case RC_ADDR(0x00003f36u): goto L_3F36;
    case RC_ADDR(0x00003f3au): goto L_3F3A;
    case RC_ADDR(0x00003f3eu): goto L_3F3E;
    case RC_ADDR(0x00003f42u): goto L_3F42;
    case RC_ADDR(0x00003f46u): goto L_3F46;
    case RC_ADDR(0x00003f48u): goto L_3F48;
    case RC_ADDR(0x00003f4cu): goto L_3F4C;
    case RC_ADDR(0x00003f50u): goto L_3F50;
    case RC_ADDR(0x00003f54u): goto L_3F54;
    case RC_ADDR(0x00003f58u): goto L_3F58;
    case RC_ADDR(0x00003f5cu): goto L_3F5C;
    case RC_ADDR(0x00003f60u): goto L_3F60;
    case RC_ADDR(0x00003f62u): goto L_3F62;
    case RC_ADDR(0x00003f66u): goto L_3F66;
    case RC_ADDR(0x00003f6au): goto L_3F6A;
    case RC_ADDR(0x00003f6eu): goto L_3F6E;
    case RC_ADDR(0x00003f72u): goto L_3F72;
    case RC_ADDR(0x00003f76u): goto L_3F76;
    case RC_ADDR(0x00003f78u): goto L_3F78;
    case RC_ADDR(0x00003f7cu): goto L_3F7C;
    case RC_ADDR(0x00003f80u): goto L_3F80;
    case RC_ADDR(0x00003f84u): goto L_3F84;
    case RC_ADDR(0x00003f88u): goto L_3F88;
    case RC_ADDR(0x00003f8cu): goto L_3F8C;
    case RC_ADDR(0x00003f92u): goto L_3F92;
    case RC_ADDR(0x00003f94u): goto L_3F94;
    case RC_ADDR(0x00003f9au): goto L_3F9A;
    case RC_ADDR(0x00003f9cu): goto L_3F9C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3D92:
    /* 00003d92   4  link.w A5,#ffffffe8 */
    c->pc = RC_ADDR(0x00003d92u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x18u;

L_3D96:
    /* 00003d96   4  addq.w #1,(fffff798,A4) */
    c->pc = RC_ADDR(0x00003d96u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x868u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_3D9A:
    /* 00003d9a   4  tst.w (fffff798,A4) */
    c->pc = RC_ADDR(0x00003d9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x868u));
    rc_set_nzvc(c, t0, RC_W);

L_3D9E:
    /* 00003d9e   4  ble 00003f9a */
    c->pc = RC_ADDR(0x00003d9eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_3F9A;

L_3DA2:
    /* 00003da2   4  movea.l (ffffd298,A4),A0 */
    c->pc = RC_ADDR(0x00003da2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[0] = t0;

L_3DA6:
    /* 00003da6   6  move.l (ffffd340,A4),(4,A0) */
    c->pc = RC_ADDR(0x00003da6u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3DAC:
    /* 00003dac   4  pea (00000009).l */
    c->pc = RC_ADDR(0x00003dacu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000009u);

L_3DB0:
    /* 00003db0   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00003db0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3DB4:
    /* 00003db4   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x00003db4u);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x00003db8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_3DB8:
    /* 00003db8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00003db8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_3DBA:
    /* 00003dba   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x00003dbau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3DBE:
    /* 00003dbe   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x00003dbeu);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_3DC2:
    /* 00003dc2   4  lea (ffff85ea,A4),A0 */
    c->pc = RC_ADDR(0x00003dc2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a16u);

L_3DC6:
    /* 00003dc6   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00003dc6u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3DC8:
    /* 00003dc8   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00003dc8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3DCC:
    /* 00003dcc   4  add.l (fffff79e,A4),D1 */
    c->pc = RC_ADDR(0x00003dccu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x862u));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_3DD0:
    /* 00003dd0   4  move.l D1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00003dd0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3DD4:
    /* 00003dd4   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x00003dd4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3DD8:
    /* 00003dd8   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x00003dd8u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_3DDC:
    /* 00003ddc   4  lea (ffff85ec,A4),A0 */
    c->pc = RC_ADDR(0x00003ddcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a14u);

L_3DE0:
    /* 00003de0   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00003de0u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3DE2:
    /* 00003de2   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00003de2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3DE6:
    /* 00003de6   4  add.l (fffff7a2,A4),D1 */
    c->pc = RC_ADDR(0x00003de6u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85eu));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_3DEA:
    /* 00003dea   4  move.l D1,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00003deau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3DEE:
    /* 00003dee   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x00003deeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3DF2:
    /* 00003df2   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x00003df2u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_3DF6:
    /* 00003df6   4  lea (ffff85ee,A4),A0 */
    c->pc = RC_ADDR(0x00003df6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a12u);

L_3DFA:
    /* 00003dfa   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00003dfau);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3DFC:
    /* 00003dfc   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00003dfcu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3E00:
    /* 00003e00   4  add.l (fffff79e,A4),D1 */
    c->pc = RC_ADDR(0x00003e00u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x862u));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_3E04:
    /* 00003e04   4  move.l D1,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00003e04u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3E08:
    /* 00003e08   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x00003e08u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3E0C:
    /* 00003e0c   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x00003e0cu);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_3E10:
    /* 00003e10   4  lea (ffff85f0,A4),A0 */
    c->pc = RC_ADDR(0x00003e10u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a10u);

L_3E14:
    /* 00003e14   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00003e14u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3E16:
    /* 00003e16   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00003e16u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3E1A:
    /* 00003e1a   4  add.l (fffff7a2,A4),D1 */
    c->pc = RC_ADDR(0x00003e1au);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85eu));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_3E1E:
    /* 00003e1e   4  move.l D1,(ffffffe8,A5) */
    c->pc = RC_ADDR(0x00003e1eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3E22:
    /* 00003e22   6  move.w #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00003e22u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3E28:
    /* 00003e28   6  move.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00003e28u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3E2E:
    /* 00003e2e   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00003e2eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3E34:
    /* 00003e34   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00003e34u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3E3A:
    /* 00003e3a   8  cmpi.l #140,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00003e3au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_cmp(c, RC_L, t0, 0x00000140u);

L_3E42:
    /* 00003e42   4  bge 00003f8c */
    c->pc = RC_ADDR(0x00003e42u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_3F8C;

L_3E46:
    /* 00003e46   4  move.w (ffffd346,A4),D0 */
    c->pc = RC_ADDR(0x00003e46u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2cbau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3E4A:
    /* 00003e4a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003e4au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_3E4C:
    /* 00003e4c   4  move.l (fffffff0,A5),D1 */
    c->pc = RC_ADDR(0x00003e4cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3E50:
    /* 00003e50   2  cmp.l D0,D1 */
    c->pc = RC_ADDR(0x00003e50u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_3E52:
    /* 00003e52   4  bge 00003f8c */
    c->pc = RC_ADDR(0x00003e52u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_3F8C;

L_3E56:
    /* 00003e56   4  tst.l (ffffffec,A5) */
    c->pc = RC_ADDR(0x00003e56u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    rc_set_nzvc(c, t0, RC_L);

L_3E5A:
    /* 00003e5a   4  ble 00003f8c */
    c->pc = RC_ADDR(0x00003e5au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_3F8C;

L_3E5E:
    /* 00003e5e   4  tst.l (ffffffe8,A5) */
    c->pc = RC_ADDR(0x00003e5eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    rc_set_nzvc(c, t0, RC_L);

L_3E62:
    /* 00003e62   4  ble 00003f8c */
    c->pc = RC_ADDR(0x00003e62u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_3F8C;

L_3E66:
    /* 00003e66   4  tst.l (fffffff4,A5) */
    c->pc = RC_ADDR(0x00003e66u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_3E6A:
    /* 00003e6a   2  bge 00003e74 */
    c->pc = RC_ADDR(0x00003e6au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_3E74;

L_3E6C:
    /* 00003e6c   4  clr.l (fffffff4,A5) */
    c->pc = RC_ADDR(0x00003e6cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3E70:
    /* 00003e70   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00003e70u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3E74:
    /* 00003e74   4  tst.l (fffffff0,A5) */
    c->pc = RC_ADDR(0x00003e74u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    rc_set_nzvc(c, t0, RC_L);

L_3E78:
    /* 00003e78   2  bge 00003e82 */
    c->pc = RC_ADDR(0x00003e78u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_3E82;

L_3E7A:
    /* 00003e7a   4  clr.l (fffffff0,A5) */
    c->pc = RC_ADDR(0x00003e7au);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x10u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3E7E:
    /* 00003e7e   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00003e7eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3E82:
    /* 00003e82   8  cmpi.l #13f,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00003e82u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    rc_cmp(c, RC_L, t0, 0x0000013fu);

L_3E8A:
    /* 00003e8a   2  ble 00003e98 */
    c->pc = RC_ADDR(0x00003e8au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_3E98;

L_3E8C:
    /* 00003e8c   8  move.l #13f,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00003e8cu);
    rc_step(c, m, 24);
    t0 = 0x0000013fu;
    rc_wr32(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3E94:
    /* 00003e94   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00003e94u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3E98:
    /* 00003e98   4  move.w (ffffd346,A4),D0 */
    c->pc = RC_ADDR(0x00003e98u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2cbau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3E9C:
    /* 00003e9c   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00003e9cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3E9E:
    /* 00003e9e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003e9eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_3EA0:
    /* 00003ea0   4  move.l (ffffffe8,A5),D1 */
    c->pc = RC_ADDR(0x00003ea0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3EA4:
    /* 00003ea4   2  cmp.l D0,D1 */
    c->pc = RC_ADDR(0x00003ea4u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_3EA6:
    /* 00003ea6   2  ble 00003eb8 */
    c->pc = RC_ADDR(0x00003ea6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_3EB8;

L_3EA8:
    /* 00003ea8   4  move.w (ffffd346,A4),D0 */
    c->pc = RC_ADDR(0x00003ea8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2cbau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3EAC:
    /* 00003eac   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00003eacu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3EAE:
    /* 00003eae   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003eaeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_3EB0:
    /* 00003eb0   4  move.l D0,(ffffffe8,A5) */
    c->pc = RC_ADDR(0x00003eb0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3EB4:
    /* 00003eb4   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00003eb4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3EB8:
    /* 00003eb8   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00003eb8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3EBC:
    /* 00003ebc   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00003ebcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3EC0:
    /* 00003ec0   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00003ec0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3EC4:
    /* 00003ec4   4  jsr (ffff839e,A4) */
    c->pc = RC_ADDR(0x00003ec4u);
    rc_step(c, m, 18);
    /* vector 154 */
    rc_push32(c, m, RC_ADDR(0x00003ec8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e94u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023954u);
    return;

L_3EC8:
    /* 00003ec8   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003ec8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_3ECC:
    /* 00003ecc   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00003eccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_3ED0:
    /* 00003ed0   2  beq 00003ee8 */
    c->pc = RC_ADDR(0x00003ed0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3EE8;

L_3ED2:
    /* 00003ed2   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00003ed2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3ED6:
    /* 00003ed6   4  move.l (ffffffec,A5),-(A7) */
    c->pc = RC_ADDR(0x00003ed6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3EDA:
    /* 00003eda   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00003edau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3EDE:
    /* 00003ede   4  jsr (ffff838c,A4) */
    c->pc = RC_ADDR(0x00003edeu);
    rc_step(c, m, 18);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x00003ee2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002389eu);
    return;

L_3EE2:
    /* 00003ee2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003ee2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_3EE6:
    /* 00003ee6   2  bra 00003efc */
    c->pc = RC_ADDR(0x00003ee6u);
    rc_step(c, m, 10);
    goto L_3EFC;

L_3EE8:
    /* 00003ee8   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00003ee8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3EEC:
    /* 00003eec   4  move.l (ffffffec,A5),-(A7) */
    c->pc = RC_ADDR(0x00003eecu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3EF0:
    /* 00003ef0   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00003ef0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3EF4:
    /* 00003ef4   4  jsr (ffff839e,A4) */
    c->pc = RC_ADDR(0x00003ef4u);
    rc_step(c, m, 18);
    /* vector 154 */
    rc_push32(c, m, RC_ADDR(0x00003ef8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e94u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023954u);
    return;

L_3EF8:
    /* 00003ef8   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003ef8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_3EFC:
    /* 00003efc   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00003efcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_3F00:
    /* 00003f00   2  beq 00003f18 */
    c->pc = RC_ADDR(0x00003f00u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3F18;

L_3F02:
    /* 00003f02   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003f02u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F06:
    /* 00003f06   4  move.l (ffffffec,A5),-(A7) */
    c->pc = RC_ADDR(0x00003f06u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F0A:
    /* 00003f0a   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00003f0au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F0E:
    /* 00003f0e   4  jsr (ffff838c,A4) */
    c->pc = RC_ADDR(0x00003f0eu);
    rc_step(c, m, 18);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x00003f12u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002389eu);
    return;

L_3F12:
    /* 00003f12   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003f12u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_3F16:
    /* 00003f16   2  bra 00003f2c */
    c->pc = RC_ADDR(0x00003f16u);
    rc_step(c, m, 10);
    goto L_3F2C;

L_3F18:
    /* 00003f18   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003f18u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F1C:
    /* 00003f1c   4  move.l (ffffffec,A5),-(A7) */
    c->pc = RC_ADDR(0x00003f1cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F20:
    /* 00003f20   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00003f20u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F24:
    /* 00003f24   4  jsr (ffff839e,A4) */
    c->pc = RC_ADDR(0x00003f24u);
    rc_step(c, m, 18);
    /* vector 154 */
    rc_push32(c, m, RC_ADDR(0x00003f28u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e94u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023954u);
    return;

L_3F28:
    /* 00003f28   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003f28u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_3F2C:
    /* 00003f2c   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00003f2cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_3F30:
    /* 00003f30   2  beq 00003f48 */
    c->pc = RC_ADDR(0x00003f30u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3F48;

L_3F32:
    /* 00003f32   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003f32u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F36:
    /* 00003f36   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00003f36u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F3A:
    /* 00003f3a   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00003f3au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F3E:
    /* 00003f3e   4  jsr (ffff838c,A4) */
    c->pc = RC_ADDR(0x00003f3eu);
    rc_step(c, m, 18);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x00003f42u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002389eu);
    return;

L_3F42:
    /* 00003f42   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003f42u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_3F46:
    /* 00003f46   2  bra 00003f5c */
    c->pc = RC_ADDR(0x00003f46u);
    rc_step(c, m, 10);
    goto L_3F5C;

L_3F48:
    /* 00003f48   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003f48u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F4C:
    /* 00003f4c   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00003f4cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F50:
    /* 00003f50   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00003f50u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F54:
    /* 00003f54   4  jsr (ffff839e,A4) */
    c->pc = RC_ADDR(0x00003f54u);
    rc_step(c, m, 18);
    /* vector 154 */
    rc_push32(c, m, RC_ADDR(0x00003f58u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e94u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023954u);
    return;

L_3F58:
    /* 00003f58   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003f58u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_3F5C:
    /* 00003f5c   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00003f5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_3F60:
    /* 00003f60   2  beq 00003f78 */
    c->pc = RC_ADDR(0x00003f60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_3F78;

L_3F62:
    /* 00003f62   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00003f62u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F66:
    /* 00003f66   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00003f66u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F6A:
    /* 00003f6a   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00003f6au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F6E:
    /* 00003f6e   4  jsr (ffff838c,A4) */
    c->pc = RC_ADDR(0x00003f6eu);
    rc_step(c, m, 18);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x00003f72u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002389eu);
    return;

L_3F72:
    /* 00003f72   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003f72u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_3F76:
    /* 00003f76   2  bra 00003f8c */
    c->pc = RC_ADDR(0x00003f76u);
    rc_step(c, m, 10);
    goto L_3F8C;

L_3F78:
    /* 00003f78   4  move.l (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x00003f78u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F7C:
    /* 00003f7c   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00003f7cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F80:
    /* 00003f80   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00003f80u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F84:
    /* 00003f84   4  jsr (ffff839e,A4) */
    c->pc = RC_ADDR(0x00003f84u);
    rc_step(c, m, 18);
    /* vector 154 */
    rc_push32(c, m, RC_ADDR(0x00003f88u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e94u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023954u);
    return;

L_3F88:
    /* 00003f88   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003f88u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_3F8C:
    /* 00003f8c   6  cmpi.w #3,(fffff798,A4) */
    c->pc = RC_ADDR(0x00003f8cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x868u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_3F92:
    /* 00003f92   2  ble 00003f9a */
    c->pc = RC_ADDR(0x00003f92u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_3F9A;

L_3F94:
    /* 00003f94   6  move.w #fffd,(fffff798,A4) */
    c->pc = RC_ADDR(0x00003f94u);
    rc_step(c, m, 16);
    t0 = 0x0000fffdu;
    rc_wr16(c, m, (c->a[4] - 0x868u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3F9A:
    /* 00003f9a   2  unlk A5 */
    c->pc = RC_ADDR(0x00003f9au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3F9C:
    /* 00003f9c   2  rts */
    c->pc = RC_ADDR(0x00003f9cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
