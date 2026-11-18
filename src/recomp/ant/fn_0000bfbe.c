/* fn_0000bfbe - 378 byte(s), 115 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000bfbe(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000bfbeu): goto L_BFBE;
    case RC_ADDR(0x0000bfc2u): goto L_BFC2;
    case RC_ADDR(0x0000bfc4u): goto L_BFC4;
    case RC_ADDR(0x0000bfc6u): goto L_BFC6;
    case RC_ADDR(0x0000bfcau): goto L_BFCA;
    case RC_ADDR(0x0000bfccu): goto L_BFCC;
    case RC_ADDR(0x0000bfceu): goto L_BFCE;
    case RC_ADDR(0x0000bfd2u): goto L_BFD2;
    case RC_ADDR(0x0000bfd6u): goto L_BFD6;
    case RC_ADDR(0x0000bfdau): goto L_BFDA;
    case RC_ADDR(0x0000bfdeu): goto L_BFDE;
    case RC_ADDR(0x0000bfe2u): goto L_BFE2;
    case RC_ADDR(0x0000bfe6u): goto L_BFE6;
    case RC_ADDR(0x0000bfeau): goto L_BFEA;
    case RC_ADDR(0x0000bfecu): goto L_BFEC;
    case RC_ADDR(0x0000bff0u): goto L_BFF0;
    case RC_ADDR(0x0000bff4u): goto L_BFF4;
    case RC_ADDR(0x0000bff6u): goto L_BFF6;
    case RC_ADDR(0x0000bff8u): goto L_BFF8;
    case RC_ADDR(0x0000bffcu): goto L_BFFC;
    case RC_ADDR(0x0000c000u): goto L_C000;
    case RC_ADDR(0x0000c004u): goto L_C004;
    case RC_ADDR(0x0000c006u): goto L_C006;
    case RC_ADDR(0x0000c00au): goto L_C00A;
    case RC_ADDR(0x0000c00cu): goto L_C00C;
    case RC_ADDR(0x0000c00eu): goto L_C00E;
    case RC_ADDR(0x0000c014u): goto L_C014;
    case RC_ADDR(0x0000c016u): goto L_C016;
    case RC_ADDR(0x0000c01cu): goto L_C01C;
    case RC_ADDR(0x0000c01eu): goto L_C01E;
    case RC_ADDR(0x0000c020u): goto L_C020;
    case RC_ADDR(0x0000c024u): goto L_C024;
    case RC_ADDR(0x0000c026u): goto L_C026;
    case RC_ADDR(0x0000c028u): goto L_C028;
    case RC_ADDR(0x0000c02cu): goto L_C02C;
    case RC_ADDR(0x0000c030u): goto L_C030;
    case RC_ADDR(0x0000c034u): goto L_C034;
    case RC_ADDR(0x0000c038u): goto L_C038;
    case RC_ADDR(0x0000c03au): goto L_C03A;
    case RC_ADDR(0x0000c03eu): goto L_C03E;
    case RC_ADDR(0x0000c042u): goto L_C042;
    case RC_ADDR(0x0000c046u): goto L_C046;
    case RC_ADDR(0x0000c04au): goto L_C04A;
    case RC_ADDR(0x0000c04cu): goto L_C04C;
    case RC_ADDR(0x0000c050u): goto L_C050;
    case RC_ADDR(0x0000c054u): goto L_C054;
    case RC_ADDR(0x0000c058u): goto L_C058;
    case RC_ADDR(0x0000c05cu): goto L_C05C;
    case RC_ADDR(0x0000c05eu): goto L_C05E;
    case RC_ADDR(0x0000c062u): goto L_C062;
    case RC_ADDR(0x0000c064u): goto L_C064;
    case RC_ADDR(0x0000c068u): goto L_C068;
    case RC_ADDR(0x0000c06au): goto L_C06A;
    case RC_ADDR(0x0000c070u): goto L_C070;
    case RC_ADDR(0x0000c076u): goto L_C076;
    case RC_ADDR(0x0000c078u): goto L_C078;
    case RC_ADDR(0x0000c07au): goto L_C07A;
    case RC_ADDR(0x0000c080u): goto L_C080;
    case RC_ADDR(0x0000c082u): goto L_C082;
    case RC_ADDR(0x0000c084u): goto L_C084;
    case RC_ADDR(0x0000c08au): goto L_C08A;
    case RC_ADDR(0x0000c08cu): goto L_C08C;
    case RC_ADDR(0x0000c08eu): goto L_C08E;
    case RC_ADDR(0x0000c094u): goto L_C094;
    case RC_ADDR(0x0000c096u): goto L_C096;
    case RC_ADDR(0x0000c098u): goto L_C098;
    case RC_ADDR(0x0000c09au): goto L_C09A;
    case RC_ADDR(0x0000c0a0u): goto L_C0A0;
    case RC_ADDR(0x0000c0a2u): goto L_C0A2;
    case RC_ADDR(0x0000c0a4u): goto L_C0A4;
    case RC_ADDR(0x0000c0aau): goto L_C0AA;
    case RC_ADDR(0x0000c0acu): goto L_C0AC;
    case RC_ADDR(0x0000c0aeu): goto L_C0AE;
    case RC_ADDR(0x0000c0b4u): goto L_C0B4;
    case RC_ADDR(0x0000c0b6u): goto L_C0B6;
    case RC_ADDR(0x0000c0b8u): goto L_C0B8;
    case RC_ADDR(0x0000c0beu): goto L_C0BE;
    case RC_ADDR(0x0000c0c0u): goto L_C0C0;
    case RC_ADDR(0x0000c0c2u): goto L_C0C2;
    case RC_ADDR(0x0000c0c6u): goto L_C0C6;
    case RC_ADDR(0x0000c0c8u): goto L_C0C8;
    case RC_ADDR(0x0000c0ceu): goto L_C0CE;
    case RC_ADDR(0x0000c0d0u): goto L_C0D0;
    case RC_ADDR(0x0000c0d2u): goto L_C0D2;
    case RC_ADDR(0x0000c0d6u): goto L_C0D6;
    case RC_ADDR(0x0000c0d8u): goto L_C0D8;
    case RC_ADDR(0x0000c0dau): goto L_C0DA;
    case RC_ADDR(0x0000c0deu): goto L_C0DE;
    case RC_ADDR(0x0000c0e2u): goto L_C0E2;
    case RC_ADDR(0x0000c0e6u): goto L_C0E6;
    case RC_ADDR(0x0000c0eau): goto L_C0EA;
    case RC_ADDR(0x0000c0ecu): goto L_C0EC;
    case RC_ADDR(0x0000c0f0u): goto L_C0F0;
    case RC_ADDR(0x0000c0f4u): goto L_C0F4;
    case RC_ADDR(0x0000c0f8u): goto L_C0F8;
    case RC_ADDR(0x0000c0fau): goto L_C0FA;
    case RC_ADDR(0x0000c0fcu): goto L_C0FC;
    case RC_ADDR(0x0000c100u): goto L_C100;
    case RC_ADDR(0x0000c104u): goto L_C104;
    case RC_ADDR(0x0000c108u): goto L_C108;
    case RC_ADDR(0x0000c10au): goto L_C10A;
    case RC_ADDR(0x0000c10cu): goto L_C10C;
    case RC_ADDR(0x0000c110u): goto L_C110;
    case RC_ADDR(0x0000c114u): goto L_C114;
    case RC_ADDR(0x0000c116u): goto L_C116;
    case RC_ADDR(0x0000c11au): goto L_C11A;
    case RC_ADDR(0x0000c11cu): goto L_C11C;
    case RC_ADDR(0x0000c11eu): goto L_C11E;
    case RC_ADDR(0x0000c122u): goto L_C122;
    case RC_ADDR(0x0000c126u): goto L_C126;
    case RC_ADDR(0x0000c12au): goto L_C12A;
    case RC_ADDR(0x0000c12eu): goto L_C12E;
    case RC_ADDR(0x0000c132u): goto L_C132;
    case RC_ADDR(0x0000c134u): goto L_C134;
    case RC_ADDR(0x0000c136u): goto L_C136;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_BFBE:
    /* 0000bfbe   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000bfbeu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_BFC2:
    /* 0000bfc2   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x0000bfc2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BFC4:
    /* 0000bfc4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000bfc4u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BFC6:
    /* 0000bfc6   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000bfc6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BFCA:
    /* 0000bfca   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000bfcau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BFCC:
    /* 0000bfcc   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000bfccu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_BFCE:
    /* 0000bfce   4  lea (d08,A4),A0 */
    c->pc = RC_ADDR(0x0000bfceu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd08u);

L_BFD2:
    /* 0000bfd2   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000bfd2u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BFD6:
    /* 0000bfd6   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x0000bfd6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_BFDA:
    /* 0000bfda   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000bfdau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BFDE:
    /* 0000bfde   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x0000bfdeu);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x0000bfe2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fe0au);
    return;

L_BFE2:
    /* 0000bfe2   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000bfe2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_BFE6:
    /* 0000bfe6   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000bfe6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BFEA:
    /* 0000bfea   2  beq 0000c05c */
    c->pc = RC_ADDR(0x0000bfeau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C05C;

L_BFEC:
    /* 0000bfec   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0000bfecu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_BFF0:
    /* 0000bff0   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000bff0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BFF4:
    /* 0000bff4   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000bff4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BFF6:
    /* 0000bff6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000bff6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_BFF8:
    /* 0000bff8   4  lea (d08,A4),A1 */
    c->pc = RC_ADDR(0x0000bff8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0xd08u);

L_BFFC:
    /* 0000bffc   4  movea.l (0,A1,D0.w),A6 */
    c->pc = RC_ADDR(0x0000bffcu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    c->a[6] = t0;

L_C000:
    /* 0000c000   4  move.w (c,A6),D0 */
    c->pc = RC_ADDR(0x0000c000u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C004:
    /* 0000c004   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000c004u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C006:
    /* 0000c006   4  move.w (2a,A0),D1 */
    c->pc = RC_ADDR(0x0000c006u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C00A:
    /* 0000c00a   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x0000c00au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C00C:
    /* 0000c00c   2  blt 0000c05c */
    c->pc = RC_ADDR(0x0000c00cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_C05C;

L_C00E:
    /* 0000c00e   6  cmpi.w #8,(dcc,A4) */
    c->pc = RC_ADDR(0x0000c00eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_C014:
    /* 0000c014   2  bne 0000c01e */
    c->pc = RC_ADDR(0x0000c014u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C01E;

L_C016:
    /* 0000c016   6  move.w #1,(ffff9910,A4) */
    c->pc = RC_ADDR(0x0000c016u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x66f0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C01C:
    /* 0000c01c   2  bra 0000c05c */
    c->pc = RC_ADDR(0x0000c01cu);
    rc_step(c, m, 10);
    goto L_C05C;

L_C01E:
    /* 0000c01e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000c01eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C020:
    /* 0000c020   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000c020u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C024:
    /* 0000c024   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c024u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C026:
    /* 0000c026   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c026u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C028:
    /* 0000c028   4  lea (d08,A4),A0 */
    c->pc = RC_ADDR(0x0000c028u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd08u);

L_C02C:
    /* 0000c02c   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c02cu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C030:
    /* 0000c030   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000c030u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C034:
    /* 0000c034   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000c034u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000c038u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_C038:
    /* 0000c038   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c038u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C03A:
    /* 0000c03a   4  clr.w (dcc,A4) */
    c->pc = RC_ADDR(0x0000c03au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xdccu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C03E:
    /* 0000c03e   4  move.w #14,-(A7) */
    c->pc = RC_ADDR(0x0000c03eu);
    rc_step(c, m, 12);
    t0 = 0x00000014u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C042:
    /* 0000c042   4  move.w (ffff96d2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c042u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x692eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C046:
    /* 0000c046   4  move.w (ffff96d0,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c046u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6930u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C04A:
    /* 0000c04a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000c04au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C04C:
    /* 0000c04c   4  move.l (d08,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c04cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xd08u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C050:
    /* 0000c050   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000c050u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C054:
    /* 0000c054   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000c054u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000c058u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_C058:
    /* 0000c058   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000c058u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_C05C:
    /* 0000c05c   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000c05cu);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_C05E:
    /* 0000c05e   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x0000c05eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_C062:
    /* 0000c062   2  beq 0000c09a */
    c->pc = RC_ADDR(0x0000c062u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C09A;

L_C064:
    /* 0000c064   4  tst.w (dd4,A4) */
    c->pc = RC_ADDR(0x0000c064u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdd4u));
    rc_set_nzvc(c, t0, RC_W);

L_C068:
    /* 0000c068   2  beq 0000c070 */
    c->pc = RC_ADDR(0x0000c068u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C070;

L_C06A:
    /* 0000c06a   6  move.w #1,(dd4,A4) */
    c->pc = RC_ADDR(0x0000c06au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xdd4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C070:
    /* 0000c070   6  cmpi.w #1,(ffffb24a,A4) */
    c->pc = RC_ADDR(0x0000c070u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_C076:
    /* 0000c076   2  bne 0000c07a */
    c->pc = RC_ADDR(0x0000c076u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C07A;

L_C078:
    /* 0000c078   2  moveq #5,D4 */
    c->pc = RC_ADDR(0x0000c078u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000005u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_C07A:
    /* 0000c07a   6  cmpi.w #ffff,(ffffb24a,A4) */
    c->pc = RC_ADDR(0x0000c07au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_C080:
    /* 0000c080   2  bne 0000c084 */
    c->pc = RC_ADDR(0x0000c080u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C084;

L_C082:
    /* 0000c082   2  moveq #6,D4 */
    c->pc = RC_ADDR(0x0000c082u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000006u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_C084:
    /* 0000c084   6  cmpi.w #1,(ffffb24c,A4) */
    c->pc = RC_ADDR(0x0000c084u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_C08A:
    /* 0000c08a   2  bne 0000c08e */
    c->pc = RC_ADDR(0x0000c08au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C08E;

L_C08C:
    /* 0000c08c   2  moveq #2,D4 */
    c->pc = RC_ADDR(0x0000c08cu);
    rc_step(c, m, 4);
    c->d[4] = 0x00000002u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_C08E:
    /* 0000c08e   6  cmpi.w #ffff,(ffffb24c,A4) */
    c->pc = RC_ADDR(0x0000c08eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_C094:
    /* 0000c094   2  bne 0000c098 */
    c->pc = RC_ADDR(0x0000c094u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C098;

L_C096:
    /* 0000c096   2  moveq #4,D4 */
    c->pc = RC_ADDR(0x0000c096u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000004u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_C098:
    /* 0000c098   2  bra 0000c0c2 */
    c->pc = RC_ADDR(0x0000c098u);
    rc_step(c, m, 10);
    goto L_C0C2;

L_C09A:
    /* 0000c09a   6  cmpi.w #1,(ffffb24a,A4) */
    c->pc = RC_ADDR(0x0000c09au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_C0A0:
    /* 0000c0a0   2  bne 0000c0a4 */
    c->pc = RC_ADDR(0x0000c0a0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C0A4;

L_C0A2:
    /* 0000c0a2   2  moveq #1,D4 */
    c->pc = RC_ADDR(0x0000c0a2u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000001u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_C0A4:
    /* 0000c0a4   6  cmpi.w #ffff,(ffffb24a,A4) */
    c->pc = RC_ADDR(0x0000c0a4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_C0AA:
    /* 0000c0aa   2  bne 0000c0ae */
    c->pc = RC_ADDR(0x0000c0aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C0AE;

L_C0AC:
    /* 0000c0ac   2  moveq #3,D4 */
    c->pc = RC_ADDR(0x0000c0acu);
    rc_step(c, m, 4);
    c->d[4] = 0x00000003u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_C0AE:
    /* 0000c0ae   6  cmpi.w #1,(ffffb24c,A4) */
    c->pc = RC_ADDR(0x0000c0aeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_C0B4:
    /* 0000c0b4   2  bne 0000c0b8 */
    c->pc = RC_ADDR(0x0000c0b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C0B8;

L_C0B6:
    /* 0000c0b6   2  moveq #2,D4 */
    c->pc = RC_ADDR(0x0000c0b6u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000002u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_C0B8:
    /* 0000c0b8   6  cmpi.w #ffff,(ffffb24c,A4) */
    c->pc = RC_ADDR(0x0000c0b8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_C0BE:
    /* 0000c0be   2  bne 0000c0c2 */
    c->pc = RC_ADDR(0x0000c0beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C0C2;

L_C0C0:
    /* 0000c0c0   2  moveq #4,D4 */
    c->pc = RC_ADDR(0x0000c0c0u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000004u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_C0C2:
    /* 0000c0c2   4  cmp.w (dcc,A4),D4 */
    c->pc = RC_ADDR(0x0000c0c2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_C0C6:
    /* 0000c0c6   2  beq 0000c132 */
    c->pc = RC_ADDR(0x0000c0c6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C132;

L_C0C8:
    /* 0000c0c8   6  cmpi.w #7,(dcc,A4) */
    c->pc = RC_ADDR(0x0000c0c8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_C0CE:
    /* 0000c0ce   2  bge 0000c132 */
    c->pc = RC_ADDR(0x0000c0ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_C132;

L_C0D0:
    /* 0000c0d0   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000c0d0u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C0D2:
    /* 0000c0d2   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000c0d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C0D6:
    /* 0000c0d6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c0d6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C0D8:
    /* 0000c0d8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c0d8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C0DA:
    /* 0000c0da   4  lea (d08,A4),A0 */
    c->pc = RC_ADDR(0x0000c0dau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd08u);

L_C0DE:
    /* 0000c0de   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c0deu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C0E2:
    /* 0000c0e2   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000c0e2u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C0E6:
    /* 0000c0e6   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000c0e6u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000c0eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_C0EA:
    /* 0000c0ea   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c0eau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C0EC:
    /* 0000c0ec   4  move.w D4,(dcc,A4) */
    c->pc = RC_ADDR(0x0000c0ecu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xdccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C0F0:
    /* 0000c0f0   4  move.w #14,-(A7) */
    c->pc = RC_ADDR(0x0000c0f0u);
    rc_step(c, m, 12);
    t0 = 0x00000014u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C0F4:
    /* 0000c0f4   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000c0f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C0F8:
    /* 0000c0f8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c0f8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C0FA:
    /* 0000c0fa   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c0fau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C0FC:
    /* 0000c0fc   4  lea (ffff96d2,A4),A0 */
    c->pc = RC_ADDR(0x0000c0fcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x692eu);

L_C100:
    /* 0000c100   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c100u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C104:
    /* 0000c104   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000c104u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C108:
    /* 0000c108   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c108u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C10A:
    /* 0000c10a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c10au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C10C:
    /* 0000c10c   4  lea (ffff96d0,A4),A0 */
    c->pc = RC_ADDR(0x0000c10cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6930u);

L_C110:
    /* 0000c110   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c110u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C114:
    /* 0000c114   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000c114u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C116:
    /* 0000c116   4  move.w (dcc,A4),D0 */
    c->pc = RC_ADDR(0x0000c116u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdccu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C11A:
    /* 0000c11a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c11au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C11C:
    /* 0000c11c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000c11cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_C11E:
    /* 0000c11e   4  lea (d08,A4),A0 */
    c->pc = RC_ADDR(0x0000c11eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd08u);

L_C122:
    /* 0000c122   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c122u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C126:
    /* 0000c126   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000c126u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C12A:
    /* 0000c12a   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000c12au);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000c12eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_C12E:
    /* 0000c12e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000c12eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_C132:
    /* 0000c132   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x0000c132u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_C134:
    /* 0000c134   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c134u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C136:
    /* 0000c136   2  rts */
    c->pc = RC_ADDR(0x0000c136u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
