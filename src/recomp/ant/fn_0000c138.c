/* fn_0000c138 - 468 byte(s), 138 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000c138(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c138u): goto L_C138;
    case RC_ADDR(0x0000c13cu): goto L_C13C;
    case RC_ADDR(0x0000c13eu): goto L_C13E;
    case RC_ADDR(0x0000c142u): goto L_C142;
    case RC_ADDR(0x0000c144u): goto L_C144;
    case RC_ADDR(0x0000c146u): goto L_C146;
    case RC_ADDR(0x0000c14au): goto L_C14A;
    case RC_ADDR(0x0000c14eu): goto L_C14E;
    case RC_ADDR(0x0000c152u): goto L_C152;
    case RC_ADDR(0x0000c156u): goto L_C156;
    case RC_ADDR(0x0000c15au): goto L_C15A;
    case RC_ADDR(0x0000c15eu): goto L_C15E;
    case RC_ADDR(0x0000c162u): goto L_C162;
    case RC_ADDR(0x0000c168u): goto L_C168;
    case RC_ADDR(0x0000c16au): goto L_C16A;
    case RC_ADDR(0x0000c16eu): goto L_C16E;
    case RC_ADDR(0x0000c170u): goto L_C170;
    case RC_ADDR(0x0000c174u): goto L_C174;
    case RC_ADDR(0x0000c178u): goto L_C178;
    case RC_ADDR(0x0000c17au): goto L_C17A;
    case RC_ADDR(0x0000c17cu): goto L_C17C;
    case RC_ADDR(0x0000c180u): goto L_C180;
    case RC_ADDR(0x0000c184u): goto L_C184;
    case RC_ADDR(0x0000c188u): goto L_C188;
    case RC_ADDR(0x0000c18au): goto L_C18A;
    case RC_ADDR(0x0000c18eu): goto L_C18E;
    case RC_ADDR(0x0000c190u): goto L_C190;
    case RC_ADDR(0x0000c194u): goto L_C194;
    case RC_ADDR(0x0000c19au): goto L_C19A;
    case RC_ADDR(0x0000c19cu): goto L_C19C;
    case RC_ADDR(0x0000c1a0u): goto L_C1A0;
    case RC_ADDR(0x0000c1a2u): goto L_C1A2;
    case RC_ADDR(0x0000c1a6u): goto L_C1A6;
    case RC_ADDR(0x0000c1acu): goto L_C1AC;
    case RC_ADDR(0x0000c1b0u): goto L_C1B0;
    case RC_ADDR(0x0000c1b2u): goto L_C1B2;
    case RC_ADDR(0x0000c1b6u): goto L_C1B6;
    case RC_ADDR(0x0000c1b8u): goto L_C1B8;
    case RC_ADDR(0x0000c1bau): goto L_C1BA;
    case RC_ADDR(0x0000c1beu): goto L_C1BE;
    case RC_ADDR(0x0000c1c2u): goto L_C1C2;
    case RC_ADDR(0x0000c1c6u): goto L_C1C6;
    case RC_ADDR(0x0000c1cau): goto L_C1CA;
    case RC_ADDR(0x0000c1ccu): goto L_C1CC;
    case RC_ADDR(0x0000c1d0u): goto L_C1D0;
    case RC_ADDR(0x0000c1d2u): goto L_C1D2;
    case RC_ADDR(0x0000c1d4u): goto L_C1D4;
    case RC_ADDR(0x0000c1d8u): goto L_C1D8;
    case RC_ADDR(0x0000c1dcu): goto L_C1DC;
    case RC_ADDR(0x0000c1deu): goto L_C1DE;
    case RC_ADDR(0x0000c1e0u): goto L_C1E0;
    case RC_ADDR(0x0000c1e4u): goto L_C1E4;
    case RC_ADDR(0x0000c1e6u): goto L_C1E6;
    case RC_ADDR(0x0000c1e8u): goto L_C1E8;
    case RC_ADDR(0x0000c1ecu): goto L_C1EC;
    case RC_ADDR(0x0000c1f0u): goto L_C1F0;
    case RC_ADDR(0x0000c1f4u): goto L_C1F4;
    case RC_ADDR(0x0000c1f8u): goto L_C1F8;
    case RC_ADDR(0x0000c1fau): goto L_C1FA;
    case RC_ADDR(0x0000c1feu): goto L_C1FE;
    case RC_ADDR(0x0000c200u): goto L_C200;
    case RC_ADDR(0x0000c204u): goto L_C204;
    case RC_ADDR(0x0000c208u): goto L_C208;
    case RC_ADDR(0x0000c20cu): goto L_C20C;
    case RC_ADDR(0x0000c212u): goto L_C212;
    case RC_ADDR(0x0000c216u): goto L_C216;
    case RC_ADDR(0x0000c21cu): goto L_C21C;
    case RC_ADDR(0x0000c220u): goto L_C220;
    case RC_ADDR(0x0000c226u): goto L_C226;
    case RC_ADDR(0x0000c22au): goto L_C22A;
    case RC_ADDR(0x0000c22eu): goto L_C22E;
    case RC_ADDR(0x0000c232u): goto L_C232;
    case RC_ADDR(0x0000c236u): goto L_C236;
    case RC_ADDR(0x0000c238u): goto L_C238;
    case RC_ADDR(0x0000c23au): goto L_C23A;
    case RC_ADDR(0x0000c23cu): goto L_C23C;
    case RC_ADDR(0x0000c240u): goto L_C240;
    case RC_ADDR(0x0000c242u): goto L_C242;
    case RC_ADDR(0x0000c244u): goto L_C244;
    case RC_ADDR(0x0000c246u): goto L_C246;
    case RC_ADDR(0x0000c24au): goto L_C24A;
    case RC_ADDR(0x0000c250u): goto L_C250;
    case RC_ADDR(0x0000c254u): goto L_C254;
    case RC_ADDR(0x0000c258u): goto L_C258;
    case RC_ADDR(0x0000c25cu): goto L_C25C;
    case RC_ADDR(0x0000c260u): goto L_C260;
    case RC_ADDR(0x0000c262u): goto L_C262;
    case RC_ADDR(0x0000c264u): goto L_C264;
    case RC_ADDR(0x0000c266u): goto L_C266;
    case RC_ADDR(0x0000c26au): goto L_C26A;
    case RC_ADDR(0x0000c26cu): goto L_C26C;
    case RC_ADDR(0x0000c26eu): goto L_C26E;
    case RC_ADDR(0x0000c270u): goto L_C270;
    case RC_ADDR(0x0000c274u): goto L_C274;
    case RC_ADDR(0x0000c27au): goto L_C27A;
    case RC_ADDR(0x0000c27cu): goto L_C27C;
    case RC_ADDR(0x0000c280u): goto L_C280;
    case RC_ADDR(0x0000c284u): goto L_C284;
    case RC_ADDR(0x0000c286u): goto L_C286;
    case RC_ADDR(0x0000c28au): goto L_C28A;
    case RC_ADDR(0x0000c28eu): goto L_C28E;
    case RC_ADDR(0x0000c2a2u): goto L_C2A2;
    case RC_ADDR(0x0000c2a8u): goto L_C2A8;
    case RC_ADDR(0x0000c2aau): goto L_C2AA;
    case RC_ADDR(0x0000c2acu): goto L_C2AC;
    case RC_ADDR(0x0000c2b0u): goto L_C2B0;
    case RC_ADDR(0x0000c2b4u): goto L_C2B4;
    case RC_ADDR(0x0000c2b8u): goto L_C2B8;
    case RC_ADDR(0x0000c2bcu): goto L_C2BC;
    case RC_ADDR(0x0000c2c0u): goto L_C2C0;
    case RC_ADDR(0x0000c2c2u): goto L_C2C2;
    case RC_ADDR(0x0000c2c6u): goto L_C2C6;
    case RC_ADDR(0x0000c2c8u): goto L_C2C8;
    case RC_ADDR(0x0000c2cau): goto L_C2CA;
    case RC_ADDR(0x0000c2ceu): goto L_C2CE;
    case RC_ADDR(0x0000c2d2u): goto L_C2D2;
    case RC_ADDR(0x0000c2d6u): goto L_C2D6;
    case RC_ADDR(0x0000c2dau): goto L_C2DA;
    case RC_ADDR(0x0000c2deu): goto L_C2DE;
    case RC_ADDR(0x0000c2e2u): goto L_C2E2;
    case RC_ADDR(0x0000c2e4u): goto L_C2E4;
    case RC_ADDR(0x0000c2e6u): goto L_C2E6;
    case RC_ADDR(0x0000c2eau): goto L_C2EA;
    case RC_ADDR(0x0000c2eeu): goto L_C2EE;
    case RC_ADDR(0x0000c2f0u): goto L_C2F0;
    case RC_ADDR(0x0000c2f4u): goto L_C2F4;
    case RC_ADDR(0x0000c2f8u): goto L_C2F8;
    case RC_ADDR(0x0000c2fcu): goto L_C2FC;
    case RC_ADDR(0x0000c2feu): goto L_C2FE;
    case RC_ADDR(0x0000c302u): goto L_C302;
    case RC_ADDR(0x0000c304u): goto L_C304;
    case RC_ADDR(0x0000c306u): goto L_C306;
    case RC_ADDR(0x0000c30au): goto L_C30A;
    case RC_ADDR(0x0000c30eu): goto L_C30E;
    case RC_ADDR(0x0000c312u): goto L_C312;
    case RC_ADDR(0x0000c316u): goto L_C316;
    case RC_ADDR(0x0000c31au): goto L_C31A;
    case RC_ADDR(0x0000c31cu): goto L_C31C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C138:
    /* 0000c138   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000c138u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_C13C:
    /* 0000c13c   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000c13cu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C13E:
    /* 0000c13e   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c13eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C142:
    /* 0000c142   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c142u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C144:
    /* 0000c144   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c144u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C146:
    /* 0000c146   4  lea (d48,A4),A0 */
    c->pc = RC_ADDR(0x0000c146u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd48u);

L_C14A:
    /* 0000c14a   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c14au);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C14E:
    /* 0000c14e   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x0000c14eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_C152:
    /* 0000c152   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000c152u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C156:
    /* 0000c156   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x0000c156u);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x0000c15au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fe0au);
    return;

L_C15A:
    /* 0000c15a   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000c15au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_C15E:
    /* 0000c15e   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000c15eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_C162:
    /* 0000c162   6  cmpi.w #1,(dd4,A4) */
    c->pc = RC_ADDR(0x0000c162u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdd4u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_C168:
    /* 0000c168   2  bne 0000c170 */
    c->pc = RC_ADDR(0x0000c168u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C170;

L_C16A:
    /* 0000c16a   4  clr.w (dd4,A4) */
    c->pc = RC_ADDR(0x0000c16au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xdd4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C16E:
    /* 0000c16e   2  bra 0000c194 */
    c->pc = RC_ADDR(0x0000c16eu);
    rc_step(c, m, 10);
    goto L_C194;

L_C170:
    /* 0000c170   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0000c170u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_C174:
    /* 0000c174   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c174u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C178:
    /* 0000c178   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c178u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C17A:
    /* 0000c17a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c17au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C17C:
    /* 0000c17c   4  lea (d48,A4),A1 */
    c->pc = RC_ADDR(0x0000c17cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0xd48u);

L_C180:
    /* 0000c180   4  movea.l (0,A1,D0.w),A6 */
    c->pc = RC_ADDR(0x0000c180u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    c->a[6] = t0;

L_C184:
    /* 0000c184   4  move.w (c,A6),D0 */
    c->pc = RC_ADDR(0x0000c184u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C188:
    /* 0000c188   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000c188u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C18A:
    /* 0000c18a   4  move.w (2a,A0),D1 */
    c->pc = RC_ADDR(0x0000c18au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C18E:
    /* 0000c18e   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0000c18eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C190:
    /* 0000c190   4  blt 0000c31a */
    c->pc = RC_ADDR(0x0000c190u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_C31A;

L_C194:
    /* 0000c194   6  cmpi.w #8,(dce,A4) */
    c->pc = RC_ADDR(0x0000c194u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_C19A:
    /* 0000c19a   2  bne 0000c1b0 */
    c->pc = RC_ADDR(0x0000c19au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C1B0;

L_C19C:
    /* 0000c19c   4  tst.w (ffff9910,A4) */
    c->pc = RC_ADDR(0x0000c19cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x66f0u));
    rc_set_nzvc(c, t0, RC_W);

L_C1A0:
    /* 0000c1a0   2  bne 0000c1a6 */
    c->pc = RC_ADDR(0x0000c1a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C1A6;

L_C1A2:
    /* 0000c1a2   4  jsr (0000c81c) */
    c->pc = RC_ADDR(0x0000c1a2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c1a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c81cu);
    return;

L_C1A6:
    /* 0000c1a6   6  move.w #1,(ffff9910,A4) */
    c->pc = RC_ADDR(0x0000c1a6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x66f0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C1AC:
    /* 0000c1ac   4  bra 0000c31a */
    c->pc = RC_ADDR(0x0000c1acu);
    rc_step(c, m, 10);
    goto L_C31A;

L_C1B0:
    /* 0000c1b0   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000c1b0u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C1B2:
    /* 0000c1b2   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c1b2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C1B6:
    /* 0000c1b6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c1b6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C1B8:
    /* 0000c1b8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c1b8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C1BA:
    /* 0000c1ba   4  lea (d48,A4),A0 */
    c->pc = RC_ADDR(0x0000c1bau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd48u);

L_C1BE:
    /* 0000c1be   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c1beu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C1C2:
    /* 0000c1c2   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000c1c2u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C1C6:
    /* 0000c1c6   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000c1c6u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000c1cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_C1CA:
    /* 0000c1ca   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c1cau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C1CC:
    /* 0000c1cc   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c1ccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C1D0:
    /* 0000c1d0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c1d0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C1D2:
    /* 0000c1d2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c1d2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C1D4:
    /* 0000c1d4   4  lea (d88,A4),A0 */
    c->pc = RC_ADDR(0x0000c1d4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd88u);

L_C1D8:
    /* 0000c1d8   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c1d8u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_C1DC:
    /* 0000c1dc   2  beq 0000c1fa */
    c->pc = RC_ADDR(0x0000c1dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C1FA;

L_C1DE:
    /* 0000c1de   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000c1deu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C1E0:
    /* 0000c1e0   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c1e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C1E4:
    /* 0000c1e4   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c1e4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C1E6:
    /* 0000c1e6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c1e6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C1E8:
    /* 0000c1e8   4  lea (d88,A4),A0 */
    c->pc = RC_ADDR(0x0000c1e8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd88u);

L_C1EC:
    /* 0000c1ec   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c1ecu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C1F0:
    /* 0000c1f0   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000c1f0u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C1F4:
    /* 0000c1f4   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000c1f4u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000c1f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_C1F8:
    /* 0000c1f8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c1f8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C1FA:
    /* 0000c1fa   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000c1fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C1FE:
    /* 0000c1fe   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c1feu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C200:
    /* 0000c200   4  bra 0000c2a2 */
    c->pc = RC_ADDR(0x0000c200u);
    rc_step(c, m, 10);
    goto L_C2A2;

L_C204:
    /* 0000c204   4  clr.w (dce,A4) */
    c->pc = RC_ADDR(0x0000c204u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xdceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C208:
    /* 0000c208   4  bra 0000c2b4 */
    c->pc = RC_ADDR(0x0000c208u);
    rc_step(c, m, 10);
    goto L_C2B4;

L_C20C:
    /* 0000c20c   6  move.w #1,(dce,A4) */
    c->pc = RC_ADDR(0x0000c20cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xdceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C212:
    /* 0000c212   4  bra 0000c2b4 */
    c->pc = RC_ADDR(0x0000c212u);
    rc_step(c, m, 10);
    goto L_C2B4;

L_C216:
    /* 0000c216   6  move.w #3,(dce,A4) */
    c->pc = RC_ADDR(0x0000c216u);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0xdceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C21C:
    /* 0000c21c   4  bra 0000c2b4 */
    c->pc = RC_ADDR(0x0000c21cu);
    rc_step(c, m, 10);
    goto L_C2B4;

L_C220:
    /* 0000c220   6  move.w #2,(dce,A4) */
    c->pc = RC_ADDR(0x0000c220u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0xdceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C226:
    /* 0000c226   4  bra 0000c2b4 */
    c->pc = RC_ADDR(0x0000c226u);
    rc_step(c, m, 10);
    goto L_C2B4;

L_C22A:
    /* 0000c22a   4  move.w (ffff9912,A4),D0 */
    c->pc = RC_ADDR(0x0000c22au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x66eeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C22E:
    /* 0000c22e   4  muls.w #60,D0 */
    c->pc = RC_ADDR(0x0000c22eu);
    rc_step(c, m, 42);
    t0 = 0x00000060u;
    rc_muls(c, 0, t0);

L_C232:
    /* 0000c232   4  move.w (dd0,A4),D1 */
    c->pc = RC_ADDR(0x0000c232u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdd0u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C236:
    /* 0000c236   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000c236u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_C238:
    /* 0000c238   2  asl.l #5,D1 */
    c->pc = RC_ADDR(0x0000c238u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 1, RC_L), RC_L));

L_C23A:
    /* 0000c23a   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0000c23au);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_C23C:
    /* 0000c23c   4  move.w (dd2,A4),D1 */
    c->pc = RC_ADDR(0x0000c23cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdd2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C240:
    /* 0000c240   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000c240u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_C242:
    /* 0000c242   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000c242u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_C244:
    /* 0000c244   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0000c244u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_C246:
    /* 0000c246   4  lea (ffff9730,A4),A0 */
    c->pc = RC_ADDR(0x0000c246u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x68d0u);

L_C24A:
    /* 0000c24a   6  move.w (0,A0,D0.w),(dce,A4) */
    c->pc = RC_ADDR(0x0000c24au);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0xdceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C250:
    /* 0000c250   4  addq.w #1,(dd2,A4) */
    c->pc = RC_ADDR(0x0000c250u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xdd2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C254:
    /* 0000c254   4  move.w (ffff9912,A4),D0 */
    c->pc = RC_ADDR(0x0000c254u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x66eeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C258:
    /* 0000c258   4  muls.w #60,D0 */
    c->pc = RC_ADDR(0x0000c258u);
    rc_step(c, m, 42);
    t0 = 0x00000060u;
    rc_muls(c, 0, t0);

L_C25C:
    /* 0000c25c   4  move.w (dd0,A4),D1 */
    c->pc = RC_ADDR(0x0000c25cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdd0u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C260:
    /* 0000c260   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000c260u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_C262:
    /* 0000c262   2  asl.l #5,D1 */
    c->pc = RC_ADDR(0x0000c262u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 1, RC_L), RC_L));

L_C264:
    /* 0000c264   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0000c264u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_C266:
    /* 0000c266   4  move.w (dd2,A4),D1 */
    c->pc = RC_ADDR(0x0000c266u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdd2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C26A:
    /* 0000c26a   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000c26au);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_C26C:
    /* 0000c26c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000c26cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_C26E:
    /* 0000c26e   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0000c26eu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_C270:
    /* 0000c270   4  lea (ffff9730,A4),A0 */
    c->pc = RC_ADDR(0x0000c270u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x68d0u);

L_C274:
    /* 0000c274   6  cmpi.w #ff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c274u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x000000ffu);

L_C27A:
    /* 0000c27a   2  bne 0000c28e */
    c->pc = RC_ADDR(0x0000c27au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C28E;

L_C27C:
    /* 0000c27c   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000c27cu);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C280:
    /* 0000c280   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0000c280u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0000c284u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_C284:
    /* 0000c284   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000c284u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C286:
    /* 0000c286   4  move.w D0,(dd0,A4) */
    c->pc = RC_ADDR(0x0000c286u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xdd0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C28A:
    /* 0000c28a   4  clr.w (dd2,A4) */
    c->pc = RC_ADDR(0x0000c28au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xdd2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C28E:
    /* 0000c28e   2  bra 0000c2b4 */
    c->pc = RC_ADDR(0x0000c28eu);
    rc_step(c, m, 10);
    goto L_C2B4;

L_C2A2:
    /* 0000c2a2   6  cmp.l #9,D0 */
    c->pc = RC_ADDR(0x0000c2a2u);
    rc_step(c, m, 14);
    t0 = 0x00000009u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_C2A8:
    /* 0000c2a8   2  bcc 0000c2b4 */
    c->pc = RC_ADDR(0x0000c2a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_C2B4;

L_C2AA:
    /* 0000c2aa   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c2aau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C2AC:
    /* 0000c2ac   4  move.w (0000c290),D0 */
    c->pc = RC_ADDR(0x0000c2acu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0000c290u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C2B0:
    /* 0000c2b0   4  jmp (0000c2b2) */
    c->pc = RC_ADDR(0x0000c2b0u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0000c2b2u) + t4);
    c->pc = t3;
    return;

L_C2B4:
    /* 0000c2b4   4  move.w #a,-(A7) */
    c->pc = RC_ADDR(0x0000c2b4u);
    rc_step(c, m, 12);
    t0 = 0x0000000au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C2B8:
    /* 0000c2b8   4  move.w (dca,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c2b8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdcau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C2BC:
    /* 0000c2bc   4  move.w (dc8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c2bcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdc8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C2C0:
    /* 0000c2c0   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000c2c0u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C2C2:
    /* 0000c2c2   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c2c2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C2C6:
    /* 0000c2c6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c2c6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C2C8:
    /* 0000c2c8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c2c8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C2CA:
    /* 0000c2ca   4  lea (d48,A4),A0 */
    c->pc = RC_ADDR(0x0000c2cau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd48u);

L_C2CE:
    /* 0000c2ce   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c2ceu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C2D2:
    /* 0000c2d2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000c2d2u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C2D6:
    /* 0000c2d6   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000c2d6u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000c2dau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_C2DA:
    /* 0000c2da   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000c2dau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_C2DE:
    /* 0000c2de   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c2deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C2E2:
    /* 0000c2e2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c2e2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C2E4:
    /* 0000c2e4   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c2e4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C2E6:
    /* 0000c2e6   4  lea (d88,A4),A0 */
    c->pc = RC_ADDR(0x0000c2e6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd88u);

L_C2EA:
    /* 0000c2ea   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000c2eau);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_C2EE:
    /* 0000c2ee   2  beq 0000c31a */
    c->pc = RC_ADDR(0x0000c2eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C31A;

L_C2F0:
    /* 0000c2f0   4  move.w #28,-(A7) */
    c->pc = RC_ADDR(0x0000c2f0u);
    rc_step(c, m, 12);
    t0 = 0x00000028u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C2F4:
    /* 0000c2f4   4  move.w (dca,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c2f4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdcau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C2F8:
    /* 0000c2f8   4  move.w (dc8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c2f8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdc8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C2FC:
    /* 0000c2fc   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000c2fcu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C2FE:
    /* 0000c2fe   4  move.w (dce,A4),D0 */
    c->pc = RC_ADDR(0x0000c2feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C302:
    /* 0000c302   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c302u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C304:
    /* 0000c304   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c304u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C306:
    /* 0000c306   4  lea (d88,A4),A0 */
    c->pc = RC_ADDR(0x0000c306u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd88u);

L_C30A:
    /* 0000c30a   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c30au);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C30E:
    /* 0000c30e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000c30eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C312:
    /* 0000c312   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000c312u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000c316u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_C316:
    /* 0000c316   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000c316u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_C31A:
    /* 0000c31a   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c31au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C31C:
    /* 0000c31c   2  rts */
    c->pc = RC_ADDR(0x0000c31cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
