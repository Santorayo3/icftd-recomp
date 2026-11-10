/* fn_0000fd20 - 552 byte(s), 177 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000fd20(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000fd20u): goto L_FD20;
    case RC_ADDR(0x0000fd24u): goto L_FD24;
    case RC_ADDR(0x0000fd26u): goto L_FD26;
    case RC_ADDR(0x0000fd28u): goto L_FD28;
    case RC_ADDR(0x0000fd2au): goto L_FD2A;
    case RC_ADDR(0x0000fd2eu): goto L_FD2E;
    case RC_ADDR(0x0000fd32u): goto L_FD32;
    case RC_ADDR(0x0000fd34u): goto L_FD34;
    case RC_ADDR(0x0000fd38u): goto L_FD38;
    case RC_ADDR(0x0000fd3au): goto L_FD3A;
    case RC_ADDR(0x0000fd3eu): goto L_FD3E;
    case RC_ADDR(0x0000fd42u): goto L_FD42;
    case RC_ADDR(0x0000fd46u): goto L_FD46;
    case RC_ADDR(0x0000fd4au): goto L_FD4A;
    case RC_ADDR(0x0000fd4eu): goto L_FD4E;
    case RC_ADDR(0x0000fd50u): goto L_FD50;
    case RC_ADDR(0x0000fd54u): goto L_FD54;
    case RC_ADDR(0x0000fd58u): goto L_FD58;
    case RC_ADDR(0x0000fd5au): goto L_FD5A;
    case RC_ADDR(0x0000fd5cu): goto L_FD5C;
    case RC_ADDR(0x0000fd60u): goto L_FD60;
    case RC_ADDR(0x0000fd62u): goto L_FD62;
    case RC_ADDR(0x0000fd66u): goto L_FD66;
    case RC_ADDR(0x0000fd68u): goto L_FD68;
    case RC_ADDR(0x0000fd6cu): goto L_FD6C;
    case RC_ADDR(0x0000fd72u): goto L_FD72;
    case RC_ADDR(0x0000fd76u): goto L_FD76;
    case RC_ADDR(0x0000fd7au): goto L_FD7A;
    case RC_ADDR(0x0000fd7eu): goto L_FD7E;
    case RC_ADDR(0x0000fd80u): goto L_FD80;
    case RC_ADDR(0x0000fd86u): goto L_FD86;
    case RC_ADDR(0x0000fd88u): goto L_FD88;
    case RC_ADDR(0x0000fd8cu): goto L_FD8C;
    case RC_ADDR(0x0000fd92u): goto L_FD92;
    case RC_ADDR(0x0000fd94u): goto L_FD94;
    case RC_ADDR(0x0000fd98u): goto L_FD98;
    case RC_ADDR(0x0000fd9au): goto L_FD9A;
    case RC_ADDR(0x0000fd9eu): goto L_FD9E;
    case RC_ADDR(0x0000fda2u): goto L_FDA2;
    case RC_ADDR(0x0000fda6u): goto L_FDA6;
    case RC_ADDR(0x0000fda8u): goto L_FDA8;
    case RC_ADDR(0x0000fdaau): goto L_FDAA;
    case RC_ADDR(0x0000fdaeu): goto L_FDAE;
    case RC_ADDR(0x0000fdb0u): goto L_FDB0;
    case RC_ADDR(0x0000fdb2u): goto L_FDB2;
    case RC_ADDR(0x0000fdb4u): goto L_FDB4;
    case RC_ADDR(0x0000fdb6u): goto L_FDB6;
    case RC_ADDR(0x0000fdb8u): goto L_FDB8;
    case RC_ADDR(0x0000fdbcu): goto L_FDBC;
    case RC_ADDR(0x0000fdbeu): goto L_FDBE;
    case RC_ADDR(0x0000fdc0u): goto L_FDC0;
    case RC_ADDR(0x0000fdc4u): goto L_FDC4;
    case RC_ADDR(0x0000fdc8u): goto L_FDC8;
    case RC_ADDR(0x0000fdccu): goto L_FDCC;
    case RC_ADDR(0x0000fdd0u): goto L_FDD0;
    case RC_ADDR(0x0000fdd2u): goto L_FDD2;
    case RC_ADDR(0x0000fdd4u): goto L_FDD4;
    case RC_ADDR(0x0000fdd8u): goto L_FDD8;
    case RC_ADDR(0x0000fddcu): goto L_FDDC;
    case RC_ADDR(0x0000fde0u): goto L_FDE0;
    case RC_ADDR(0x0000fde2u): goto L_FDE2;
    case RC_ADDR(0x0000fde6u): goto L_FDE6;
    case RC_ADDR(0x0000fdeau): goto L_FDEA;
    case RC_ADDR(0x0000fdecu): goto L_FDEC;
    case RC_ADDR(0x0000fdeeu): goto L_FDEE;
    case RC_ADDR(0x0000fdf2u): goto L_FDF2;
    case RC_ADDR(0x0000fdf4u): goto L_FDF4;
    case RC_ADDR(0x0000fdf8u): goto L_FDF8;
    case RC_ADDR(0x0000fdfcu): goto L_FDFC;
    case RC_ADDR(0x0000fdfeu): goto L_FDFE;
    case RC_ADDR(0x0000fe00u): goto L_FE00;
    case RC_ADDR(0x0000fe04u): goto L_FE04;
    case RC_ADDR(0x0000fe08u): goto L_FE08;
    case RC_ADDR(0x0000fe0cu): goto L_FE0C;
    case RC_ADDR(0x0000fe10u): goto L_FE10;
    case RC_ADDR(0x0000fe12u): goto L_FE12;
    case RC_ADDR(0x0000fe14u): goto L_FE14;
    case RC_ADDR(0x0000fe16u): goto L_FE16;
    case RC_ADDR(0x0000fe1au): goto L_FE1A;
    case RC_ADDR(0x0000fe1cu): goto L_FE1C;
    case RC_ADDR(0x0000fe20u): goto L_FE20;
    case RC_ADDR(0x0000fe26u): goto L_FE26;
    case RC_ADDR(0x0000fe2au): goto L_FE2A;
    case RC_ADDR(0x0000fe2cu): goto L_FE2C;
    case RC_ADDR(0x0000fe30u): goto L_FE30;
    case RC_ADDR(0x0000fe32u): goto L_FE32;
    case RC_ADDR(0x0000fe38u): goto L_FE38;
    case RC_ADDR(0x0000fe3au): goto L_FE3A;
    case RC_ADDR(0x0000fe3eu): goto L_FE3E;
    case RC_ADDR(0x0000fe40u): goto L_FE40;
    case RC_ADDR(0x0000fe44u): goto L_FE44;
    case RC_ADDR(0x0000fe48u): goto L_FE48;
    case RC_ADDR(0x0000fe4cu): goto L_FE4C;
    case RC_ADDR(0x0000fe4eu): goto L_FE4E;
    case RC_ADDR(0x0000fe54u): goto L_FE54;
    case RC_ADDR(0x0000fe56u): goto L_FE56;
    case RC_ADDR(0x0000fe5au): goto L_FE5A;
    case RC_ADDR(0x0000fe5eu): goto L_FE5E;
    case RC_ADDR(0x0000fe62u): goto L_FE62;
    case RC_ADDR(0x0000fe64u): goto L_FE64;
    case RC_ADDR(0x0000fe66u): goto L_FE66;
    case RC_ADDR(0x0000fe6au): goto L_FE6A;
    case RC_ADDR(0x0000fe6cu): goto L_FE6C;
    case RC_ADDR(0x0000fe70u): goto L_FE70;
    case RC_ADDR(0x0000fe74u): goto L_FE74;
    case RC_ADDR(0x0000fe76u): goto L_FE76;
    case RC_ADDR(0x0000fe7au): goto L_FE7A;
    case RC_ADDR(0x0000fe7eu): goto L_FE7E;
    case RC_ADDR(0x0000fe80u): goto L_FE80;
    case RC_ADDR(0x0000fe84u): goto L_FE84;
    case RC_ADDR(0x0000fe88u): goto L_FE88;
    case RC_ADDR(0x0000fe8au): goto L_FE8A;
    case RC_ADDR(0x0000fe8cu): goto L_FE8C;
    case RC_ADDR(0x0000fe90u): goto L_FE90;
    case RC_ADDR(0x0000fe94u): goto L_FE94;
    case RC_ADDR(0x0000fe98u): goto L_FE98;
    case RC_ADDR(0x0000fe9au): goto L_FE9A;
    case RC_ADDR(0x0000fe9eu): goto L_FE9E;
    case RC_ADDR(0x0000fea0u): goto L_FEA0;
    case RC_ADDR(0x0000fea4u): goto L_FEA4;
    case RC_ADDR(0x0000fea6u): goto L_FEA6;
    case RC_ADDR(0x0000feaau): goto L_FEAA;
    case RC_ADDR(0x0000feacu): goto L_FEAC;
    case RC_ADDR(0x0000feaeu): goto L_FEAE;
    case RC_ADDR(0x0000feb2u): goto L_FEB2;
    case RC_ADDR(0x0000feb6u): goto L_FEB6;
    case RC_ADDR(0x0000febau): goto L_FEBA;
    case RC_ADDR(0x0000febeu): goto L_FEBE;
    case RC_ADDR(0x0000fec0u): goto L_FEC0;
    case RC_ADDR(0x0000fec2u): goto L_FEC2;
    case RC_ADDR(0x0000fec4u): goto L_FEC4;
    case RC_ADDR(0x0000fec6u): goto L_FEC6;
    case RC_ADDR(0x0000fec8u): goto L_FEC8;
    case RC_ADDR(0x0000fecau): goto L_FECA;
    case RC_ADDR(0x0000feccu): goto L_FECC;
    case RC_ADDR(0x0000feceu): goto L_FECE;
    case RC_ADDR(0x0000fed0u): goto L_FED0;
    case RC_ADDR(0x0000fed6u): goto L_FED6;
    case RC_ADDR(0x0000fed8u): goto L_FED8;
    case RC_ADDR(0x0000fedeu): goto L_FEDE;
    case RC_ADDR(0x0000fee0u): goto L_FEE0;
    case RC_ADDR(0x0000fee2u): goto L_FEE2;
    case RC_ADDR(0x0000fee4u): goto L_FEE4;
    case RC_ADDR(0x0000fee6u): goto L_FEE6;
    case RC_ADDR(0x0000fee8u): goto L_FEE8;
    case RC_ADDR(0x0000feeau): goto L_FEEA;
    case RC_ADDR(0x0000feeeu): goto L_FEEE;
    case RC_ADDR(0x0000fef2u): goto L_FEF2;
    case RC_ADDR(0x0000fef6u): goto L_FEF6;
    case RC_ADDR(0x0000fefau): goto L_FEFA;
    case RC_ADDR(0x0000fefcu): goto L_FEFC;
    case RC_ADDR(0x0000fefeu): goto L_FEFE;
    case RC_ADDR(0x0000ff02u): goto L_FF02;
    case RC_ADDR(0x0000ff06u): goto L_FF06;
    case RC_ADDR(0x0000ff08u): goto L_FF08;
    case RC_ADDR(0x0000ff0cu): goto L_FF0C;
    case RC_ADDR(0x0000ff0eu): goto L_FF0E;
    case RC_ADDR(0x0000ff10u): goto L_FF10;
    case RC_ADDR(0x0000ff12u): goto L_FF12;
    case RC_ADDR(0x0000ff16u): goto L_FF16;
    case RC_ADDR(0x0000ff1au): goto L_FF1A;
    case RC_ADDR(0x0000ff1cu): goto L_FF1C;
    case RC_ADDR(0x0000ff20u): goto L_FF20;
    case RC_ADDR(0x0000ff22u): goto L_FF22;
    case RC_ADDR(0x0000ff24u): goto L_FF24;
    case RC_ADDR(0x0000ff28u): goto L_FF28;
    case RC_ADDR(0x0000ff2au): goto L_FF2A;
    case RC_ADDR(0x0000ff2eu): goto L_FF2E;
    case RC_ADDR(0x0000ff30u): goto L_FF30;
    case RC_ADDR(0x0000ff32u): goto L_FF32;
    case RC_ADDR(0x0000ff34u): goto L_FF34;
    case RC_ADDR(0x0000ff36u): goto L_FF36;
    case RC_ADDR(0x0000ff3au): goto L_FF3A;
    case RC_ADDR(0x0000ff3cu): goto L_FF3C;
    case RC_ADDR(0x0000ff42u): goto L_FF42;
    case RC_ADDR(0x0000ff44u): goto L_FF44;
    case RC_ADDR(0x0000ff46u): goto L_FF46;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_FD20:
    /* 0000fd20   4  cmpi.w #4,D7 */
    c->pc = RC_ADDR(0x0000fd20u);
    t0 = rc_d_get(c, 7, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_FD24:
    /* 0000fd24   2  blt 0000fd2a */
    c->pc = RC_ADDR(0x0000fd24u);
    if (rc_cond(c, 13)) goto L_FD2A;

L_FD26:
    /* 0000fd26   2  clr.l D0 */
    c->pc = RC_ADDR(0x0000fd26u);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_FD28:
    /* 0000fd28   2  rts */
    c->pc = RC_ADDR(0x0000fd28u);
    rc_ret(c, m);
    return;

L_FD2A:
    /* 0000fd2a   4  movea.l (4,A1),A3 */
    c->pc = RC_ADDR(0x0000fd2au);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    c->a[3] = t0;

L_FD2E:
    /* 0000fd2e   4  lea (172,A6),A2 */
    c->pc = RC_ADDR(0x0000fd2eu);
    c->a[2] = (c->a[6] + 0x172u);

L_FD32:
    /* 0000fd32   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x0000fd32u);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FD34:
    /* 0000fd34   4  mulu.w #14,D0 */
    c->pc = RC_ADDR(0x0000fd34u);
    t0 = 0x00000014u;
    rc_mulu(c, 0, t0);

L_FD38:
    /* 0000fd38   2  adda.w D0,A2 */
    c->pc = RC_ADDR(0x0000fd38u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[2] += rc_ext(t0, RC_W);

L_FD3A:
    /* 0000fd3a   4  move.b (0,A1),D0 */
    c->pc = RC_ADDR(0x0000fd3au);
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_FD3E:
    /* 0000fd3e   4  beq 0000fe48 */
    c->pc = RC_ADDR(0x0000fd3eu);
    if (rc_cond(c, 7)) goto L_FE48;

L_FD42:
    /* 0000fd42   4  cmpi.b #1,D0 */
    c->pc = RC_ADDR(0x0000fd42u);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_FD46:
    /* 0000fd46   4  bne 0000fe2c */
    c->pc = RC_ADDR(0x0000fd46u);
    if (rc_cond(c, 6)) goto L_FE2C;

L_FD4A:
    /* 0000fd4a   4  movea.l (4,A3),A5 */
    c->pc = RC_ADDR(0x0000fd4au);
    t0 = rc_rd32(c, m, (c->a[3] + 0x4u));
    c->a[5] = t0;

L_FD4E:
    /* 0000fd4e   2  clr.l D1 */
    c->pc = RC_ADDR(0x0000fd4eu);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_FD50:
    /* 0000fd50   4  move.b (3,A1),D1 */
    c->pc = RC_ADDR(0x0000fd50u);
    t0 = rc_rd8(c, m, (c->a[1] + 0x3u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_FD54:
    /* 0000fd54   4  divu.w #c,D1 */
    c->pc = RC_ADDR(0x0000fd54u);
    t0 = 0x0000000cu;
    rc_divu(c, m, 1, t0);

L_FD58:
    /* 0000fd58   2  move.w D1,D2 */
    c->pc = RC_ADDR(0x0000fd58u);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FD5A:
    /* 0000fd5a   2  swap D1 */
    c->pc = RC_ADDR(0x0000fd5au);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_FD5C:
    /* 0000fd5c   4  subi.w #a,D2 */
    c->pc = RC_ADDR(0x0000fd5cu);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x0000000au;
    rc_flags_sub(c, RC_W, t1, 0x0000000au, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_FD60:
    /* 0000fd60   2  neg.w D2 */
    c->pc = RC_ADDR(0x0000fd60u);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_FD62:
    /* 0000fd62   4  cmp.b (5,A5),D2 */
    c->pc = RC_ADDR(0x0000fd62u);
    t0 = rc_rd8(c, m, (c->a[5] + 0x5u));
    t1 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_FD66:
    /* 0000fd66   2  ble 0000fd7a */
    c->pc = RC_ADDR(0x0000fd66u);
    if (rc_cond(c, 15)) goto L_FD7A;

L_FD68:
    /* 0000fd68   4  clr.b (0,A1) */
    c->pc = RC_ADDR(0x0000fd68u);
    rc_wr8(c, m, (c->a[1] + 0x0u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_FD6C:
    /* 0000fd6c   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x0000fd6cu);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_FD72:
    /* 0000fd72   4  beq 0000ff3a */
    c->pc = RC_ADDR(0x0000fd72u);
    if (rc_cond(c, 7)) goto L_FF3A;

L_FD76:
    /* 0000fd76   4  bra 0000fe48 */
    c->pc = RC_ADDR(0x0000fd76u);
    goto L_FE48;

L_FD7A:
    /* 0000fd7a   4  cmp.b (4,A5),D2 */
    c->pc = RC_ADDR(0x0000fd7au);
    t0 = rc_rd8(c, m, (c->a[5] + 0x4u));
    t1 = rc_d_get(c, 2, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_FD7E:
    /* 0000fd7e   2  blt 0000fd68 */
    c->pc = RC_ADDR(0x0000fd7eu);
    if (rc_cond(c, 13)) { rc_tick(); goto L_FD68; }

L_FD80:
    /* 0000fd80   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x0000fd80u);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_FD86:
    /* 0000fd86   2  bne 0000fd8c */
    c->pc = RC_ADDR(0x0000fd86u);
    if (rc_cond(c, 6)) goto L_FD8C;

L_FD88:
    /* 0000fd88   4  clr.l (a,A2) */
    c->pc = RC_ADDR(0x0000fd88u);
    rc_wr32(c, m, (c->a[2] + 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_FD8C:
    /* 0000fd8c   6  cmpi.b #1,(1,A1) */
    c->pc = RC_ADDR(0x0000fd8cu);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_FD92:
    /* 0000fd92   2  beq 0000fd98 */
    c->pc = RC_ADDR(0x0000fd92u);
    if (rc_cond(c, 7)) goto L_FD98;

L_FD94:
    /* 0000fd94   4  clr.w (8,A2) */
    c->pc = RC_ADDR(0x0000fd94u);
    rc_wr16(c, m, (c->a[2] + 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_FD98:
    /* 0000fd98   2  asl.w #1,D1 */
    c->pc = RC_ADDR(0x0000fd98u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_FD9A:
    /* 0000fd9a   4  lea (0000f6c8),A0 */
    c->pc = RC_ADDR(0x0000fd9au);
    c->a[0] = RC_ADDR(0x0000f6c8u);

L_FD9E:
    /* 0000fd9e   4  move.w #d5c8,D0 */
    c->pc = RC_ADDR(0x0000fd9eu);
    t0 = 0x0000d5c8u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FDA2:
    /* 0000fda2   4  mulu.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000fda2u);
    t4 = rc_ext(c->d[1], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_mulu(c, 0, t0);

L_FDA6:
    /* 0000fda6   2  moveq #f,D1 */
    c->pc = RC_ADDR(0x0000fda6u);
    c->d[1] = 0x0000000fu;
    rc_set_nzvc(c, c->d[1], RC_L);

L_FDA8:
    /* 0000fda8   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x0000fda8u);
    c->d[0] = rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_FDAA:
    /* 0000fdaa   4  move.w D0,(6,A2) */
    c->pc = RC_ADDR(0x0000fdaau);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_FDAE:
    /* 0000fdae   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000fdaeu);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_FDB0:
    /* 0000fdb0   2  asl.l D2,D0 */
    c->pc = RC_ADDR(0x0000fdb0u);
    c->d[0] = rc_shift(c, 0, 1, (c->d[2] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_FDB2:
    /* 0000fdb2   2  move.l D0,D4 */
    c->pc = RC_ADDR(0x0000fdb2u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FDB4:
    /* 0000fdb4   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x0000fdb4u);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_FDB6:
    /* 0000fdb6   2  clr.w D3 */
    c->pc = RC_ADDR(0x0000fdb6u);
    rc_d_set(c, 3, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_FDB8:
    /* 0000fdb8   4  move.b (4,A5),D3 */
    c->pc = RC_ADDR(0x0000fdb8u);
    t0 = rc_rd8(c, m, (c->a[5] + 0x4u));
    rc_d_set(c, 3, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_FDBC:
    /* 0000fdbc   2  asl.l D3,D1 */
    c->pc = RC_ADDR(0x0000fdbcu);
    c->d[1] = rc_shift(c, 0, 1, (c->d[3] & 63u), rc_d_get(c, 1, RC_L), RC_L);

L_FDBE:
    /* 0000fdbe   2  sub.l D1,D0 */
    c->pc = RC_ADDR(0x0000fdbeu);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_FDC0:
    /* 0000fdc0   4  mulu.w (0,A5),D0 */
    c->pc = RC_ADDR(0x0000fdc0u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u));
    rc_mulu(c, 0, t0);

L_FDC4:
    /* 0000fdc4   4  lea (3e,A5,D0.w),A0 */
    c->pc = RC_ADDR(0x0000fdc4u);
    t4 = c->d[0];
    c->a[0] = (c->a[5] + 0x3eu + t4);

L_FDC8:
    /* 0000fdc8   4  move.l A0,(c,A1) */
    c->pc = RC_ADDR(0x0000fdc8u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_FDCC:
    /* 0000fdcc   4  move.w (0,A5),D0 */
    c->pc = RC_ADDR(0x0000fdccu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FDD0:
    /* 0000fdd0   2  mulu.w D4,D0 */
    c->pc = RC_ADDR(0x0000fdd0u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_mulu(c, 0, t0);

L_FDD2:
    /* 0000fdd2   2  lsr.l #1,D0 */
    c->pc = RC_ADDR(0x0000fdd2u);
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_FDD4:
    /* 0000fdd4   4  move.w D0,(10,A1) */
    c->pc = RC_ADDR(0x0000fdd4u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_FDD8:
    /* 0000fdd8   4  movea.l (106,A6),A0 */
    c->pc = RC_ADDR(0x0000fdd8u);
    t0 = rc_rd32(c, m, (c->a[6] + 0x106u));
    c->a[0] = t0;

L_FDDC:
    /* 0000fddc   4  adda.w #400,A0 */
    c->pc = RC_ADDR(0x0000fddcu);
    t0 = 0x00000400u;
    c->a[0] += rc_ext(t0, RC_W);

L_FDE0:
    /* 0000fde0   2  moveq #4,D0 */
    c->pc = RC_ADDR(0x0000fde0u);
    c->d[0] = 0x00000004u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_FDE2:
    /* 0000fde2   4  move.w (2,A5),D1 */
    c->pc = RC_ADDR(0x0000fde2u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FDE6:
    /* 0000fde6   4  cmp.w (0,A5),D1 */
    c->pc = RC_ADDR(0x0000fde6u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_FDEA:
    /* 0000fdea   2  beq 0000fe00 */
    c->pc = RC_ADDR(0x0000fdeau);
    if (rc_cond(c, 7)) goto L_FE00;

L_FDEC:
    /* 0000fdec   2  mulu.w D4,D1 */
    c->pc = RC_ADDR(0x0000fdecu);
    t0 = rc_d_get(c, 4, RC_W);
    rc_mulu(c, 1, t0);

L_FDEE:
    /* 0000fdee   4  movea.l (c,A1),A0 */
    c->pc = RC_ADDR(0x0000fdeeu);
    t0 = rc_rd32(c, m, (c->a[1] + 0xcu));
    c->a[0] = t0;

L_FDF2:
    /* 0000fdf2   2  adda.l D1,A0 */
    c->pc = RC_ADDR(0x0000fdf2u);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[0] += t0;

L_FDF4:
    /* 0000fdf4   4  move.w (0,A5),D0 */
    c->pc = RC_ADDR(0x0000fdf4u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FDF8:
    /* 0000fdf8   4  sub.w (2,A5),D0 */
    c->pc = RC_ADDR(0x0000fdf8u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FDFC:
    /* 0000fdfc   2  mulu.w D4,D0 */
    c->pc = RC_ADDR(0x0000fdfcu);
    t0 = rc_d_get(c, 4, RC_W);
    rc_mulu(c, 0, t0);

L_FDFE:
    /* 0000fdfe   2  lsr.l #1,D0 */
    c->pc = RC_ADDR(0x0000fdfeu);
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_FE00:
    /* 0000fe00   4  move.l A0,(0,A2) */
    c->pc = RC_ADDR(0x0000fe00u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_FE04:
    /* 0000fe04   4  move.w D0,(4,A2) */
    c->pc = RC_ADDR(0x0000fe04u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_FE08:
    /* 0000fe08   4  clr.w (e,A2) */
    c->pc = RC_ADDR(0x0000fe08u);
    rc_wr16(c, m, (c->a[2] + 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_FE0C:
    /* 0000fe0c   4  move.w (1e,A3),D0 */
    c->pc = RC_ADDR(0x0000fe0cu);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FE10:
    /* 0000fe10   2  swap D0 */
    c->pc = RC_ADDR(0x0000fe10u);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_FE12:
    /* 0000fe12   2  clr.w D0 */
    c->pc = RC_ADDR(0x0000fe12u);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_FE14:
    /* 0000fe14   2  lsr.l #1,D0 */
    c->pc = RC_ADDR(0x0000fe14u);
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_FE16:
    /* 0000fe16   4  divu.w (22,A6),D0 */
    c->pc = RC_ADDR(0x0000fe16u);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_divu(c, m, 0, t0);

L_FE1A:
    /* 0000fe1a   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x0000fe1au);
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_FE1C:
    /* 0000fe1c   4  move.w D0,(10,A2) */
    c->pc = RC_ADDR(0x0000fe1cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_FE20:
    /* 0000fe20   6  move.w #2,(a,A1) */
    c->pc = RC_ADDR(0x0000fe20u);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[1] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_FE26:
    /* 0000fe26   4  bsr 0000f4a4 */
    c->pc = RC_ADDR(0x0000fe26u);
    rc_push32(c, m, RC_ADDR(0x0000fe2au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f4a4u);
    return;

L_FE2A:
    /* 0000fe2a   2  bra 0000fe48 */
    c->pc = RC_ADDR(0x0000fe2au);
    goto L_FE48;

L_FE2C:
    /* 0000fe2c   4  cmpi.b #2,D0 */
    c->pc = RC_ADDR(0x0000fe2cu);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000002u);

L_FE30:
    /* 0000fe30   2  bne 0000fe3a */
    c->pc = RC_ADDR(0x0000fe30u);
    if (rc_cond(c, 6)) goto L_FE3A;

L_FE32:
    /* 0000fe32   6  move.w #6,(8,A2) */
    c->pc = RC_ADDR(0x0000fe32u);
    t0 = 0x00000006u;
    rc_wr16(c, m, (c->a[2] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_FE38:
    /* 0000fe38   2  bra 0000fe48 */
    c->pc = RC_ADDR(0x0000fe38u);
    goto L_FE48;

L_FE3A:
    /* 0000fe3a   4  cmpi.b #3,D0 */
    c->pc = RC_ADDR(0x0000fe3au);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000003u);

L_FE3E:
    /* 0000fe3e   2  bne 0000fe48 */
    c->pc = RC_ADDR(0x0000fe3eu);
    if (rc_cond(c, 6)) goto L_FE48;

L_FE40:
    /* 0000fe40   4  bsr 0000f4a4 */
    c->pc = RC_ADDR(0x0000fe40u);
    rc_push32(c, m, RC_ADDR(0x0000fe44u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f4a4u);
    return;

L_FE44:
    /* 0000fe44   4  bra 0000ff3a */
    c->pc = RC_ADDR(0x0000fe44u);
    goto L_FF3A;

L_FE48:
    /* 0000fe48   4  tst.w (10,A2) */
    c->pc = RC_ADDR(0x0000fe48u);
    t0 = rc_rd16(c, m, (c->a[2] + 0x10u));
    rc_set_nzvc(c, t0, RC_W);

L_FE4C:
    /* 0000fe4c   2  beq 0000fe56 */
    c->pc = RC_ADDR(0x0000fe4cu);
    if (rc_cond(c, 7)) goto L_FE56;

L_FE4E:
    /* 0000fe4e   6  subi.w #1,(10,A2) */
    c->pc = RC_ADDR(0x0000fe4eu);
    t3 = (c->a[2] + 0x10u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_FE54:
    /* 0000fe54   2  bra 0000fe70 */
    c->pc = RC_ADDR(0x0000fe54u);
    goto L_FE70;

L_FE56:
    /* 0000fe56   4  move.w (e,A2),D0 */
    c->pc = RC_ADDR(0x0000fe56u);
    t0 = rc_rd16(c, m, (c->a[2] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FE5A:
    /* 0000fe5a   4  move.w (1c,A3),D1 */
    c->pc = RC_ADDR(0x0000fe5au);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FE5E:
    /* 0000fe5e   4  mulu.w (22,A6),D1 */
    c->pc = RC_ADDR(0x0000fe5eu);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_mulu(c, 1, t0);

L_FE62:
    /* 0000fe62   2  asl.l #7,D1 */
    c->pc = RC_ADDR(0x0000fe62u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000007u, rc_d_get(c, 1, RC_L), RC_L);

L_FE64:
    /* 0000fe64   2  swap D1 */
    c->pc = RC_ADDR(0x0000fe64u);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_FE66:
    /* 0000fe66   4  addi.w #40,D1 */
    c->pc = RC_ADDR(0x0000fe66u);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000040u;
    rc_flags_add(c, RC_W, t1, 0x00000040u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_FE6A:
    /* 0000fe6a   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x0000fe6au);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FE6C:
    /* 0000fe6c   4  move.w D0,(e,A2) */
    c->pc = RC_ADDR(0x0000fe6cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_FE70:
    /* 0000fe70   4  move.w (e,A2),D0 */
    c->pc = RC_ADDR(0x0000fe70u);
    t0 = rc_rd16(c, m, (c->a[2] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FE74:
    /* 0000fe74   2  lsr.w #7,D0 */
    c->pc = RC_ADDR(0x0000fe74u);
    c->d[0] = rc_shift(c, 1, 0, 0x00000007u, rc_d_get(c, 0, RC_W), RC_W);

L_FE76:
    /* 0000fe76   4  addi.w #80,D0 */
    c->pc = RC_ADDR(0x0000fe76u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000080u;
    rc_flags_add(c, RC_W, t1, 0x00000080u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FE7A:
    /* 0000fe7a   4  btst #8,D0 */
    c->pc = RC_ADDR(0x0000fe7au);
    t4 = 0x00000008u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_FE7E:
    /* 0000fe7e   2  beq 0000fe84 */
    c->pc = RC_ADDR(0x0000fe7eu);
    if (rc_cond(c, 7)) goto L_FE84;

L_FE80:
    /* 0000fe80   4  eori.w #ff,D0 */
    c->pc = RC_ADDR(0x0000fe80u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ 0x000000ffu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_FE84:
    /* 0000fe84   4  eori.w #80,D0 */
    c->pc = RC_ADDR(0x0000fe84u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ 0x00000080u;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_FE88:
    /* 0000fe88   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000fe88u);
    rc_ext_w(c, 0);

L_FE8A:
    /* 0000fe8a   2  neg.w D0 */
    c->pc = RC_ADDR(0x0000fe8au);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FE8C:
    /* 0000fe8c   4  move.w D0,(12,A2) */
    c->pc = RC_ADDR(0x0000fe8cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_FE90:
    /* 0000fe90   4  move.w (8,A2),D0 */
    c->pc = RC_ADDR(0x0000fe90u);
    t0 = rc_rd16(c, m, (c->a[2] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FE94:
    /* 0000fe94   4  lea (0,A3,D0.w),A0 */
    c->pc = RC_ADDR(0x0000fe94u);
    t4 = rc_ext(c->d[0], RC_W);
    c->a[0] = (c->a[3] + 0x0u + t4);

L_FE98:
    /* 0000fe98   2  clr.l D1 */
    c->pc = RC_ADDR(0x0000fe98u);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_FE9A:
    /* 0000fe9a   4  move.w (a,A0),D1 */
    c->pc = RC_ADDR(0x0000fe9au);
    t0 = rc_rd16(c, m, (c->a[0] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FE9E:
    /* 0000fe9e   2  swap D1 */
    c->pc = RC_ADDR(0x0000fe9eu);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_FEA0:
    /* 0000fea0   4  move.l (a,A2),D2 */
    c->pc = RC_ADDR(0x0000fea0u);
    t0 = rc_rd32(c, m, (c->a[2] + 0xau));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FEA4:
    /* 0000fea4   2  clr.l D3 */
    c->pc = RC_ADDR(0x0000fea4u);
    rc_d_set(c, 3, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_FEA6:
    /* 0000fea6   4  move.w (12,A0),D3 */
    c->pc = RC_ADDR(0x0000fea6u);
    t0 = rc_rd16(c, m, (c->a[0] + 0x12u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FEAA:
    /* 0000feaa   2  move.w D3,D0 */
    c->pc = RC_ADDR(0x0000feaau);
    t0 = rc_d_get(c, 3, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FEAC:
    /* 0000feac   2  lsr.w #5,D0 */
    c->pc = RC_ADDR(0x0000feacu);
    c->d[0] = rc_shift(c, 1, 0, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W);

L_FEAE:
    /* 0000feae   4  eori.w #7,D0 */
    c->pc = RC_ADDR(0x0000feaeu);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ 0x00000007u;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_FEB2:
    /* 0000feb2   4  andi.w #1f,D3 */
    c->pc = RC_ADDR(0x0000feb2u);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 & 0x0000001fu;
    rc_d_set(c, 3, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_FEB6:
    /* 0000feb6   4  addi.w #21,D3 */
    c->pc = RC_ADDR(0x0000feb6u);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + 0x00000021u;
    rc_flags_add(c, RC_W, t1, 0x00000021u, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_FEBA:
    /* 0000feba   4  mulu.w (22,A6),D3 */
    c->pc = RC_ADDR(0x0000febau);
    t0 = rc_rd16(c, m, (c->a[6] + 0x22u));
    rc_mulu(c, 3, t0);

L_FEBE:
    /* 0000febe   2  asl.l #3,D3 */
    c->pc = RC_ADDR(0x0000febeu);
    c->d[3] = rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 3, RC_L), RC_L);

L_FEC0:
    /* 0000fec0   2  lsr.l D0,D3 */
    c->pc = RC_ADDR(0x0000fec0u);
    c->d[3] = rc_shift(c, 1, 0, (c->d[0] & 63u), rc_d_get(c, 3, RC_L), RC_L);

L_FEC2:
    /* 0000fec2   2  move.l D1,D0 */
    c->pc = RC_ADDR(0x0000fec2u);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FEC4:
    /* 0000fec4   2  sub.l D2,D0 */
    c->pc = RC_ADDR(0x0000fec4u);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_FEC6:
    /* 0000fec6   2  bpl 0000feca */
    c->pc = RC_ADDR(0x0000fec6u);
    if (rc_cond(c, 10)) goto L_FECA;

L_FEC8:
    /* 0000fec8   2  neg.l D0 */
    c->pc = RC_ADDR(0x0000fec8u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_FECA:
    /* 0000feca   2  cmp.l D3,D0 */
    c->pc = RC_ADDR(0x0000fecau);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_FECC:
    /* 0000fecc   2  bgt 0000fee0 */
    c->pc = RC_ADDR(0x0000feccu);
    if (rc_cond(c, 14)) goto L_FEE0;

L_FECE:
    /* 0000fece   2  move.l D1,D2 */
    c->pc = RC_ADDR(0x0000feceu);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FED0:
    /* 0000fed0   6  cmpi.w #4,(8,A2) */
    c->pc = RC_ADDR(0x0000fed0u);
    t0 = rc_rd16(c, m, (c->a[2] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_FED6:
    /* 0000fed6   2  bge 0000feea */
    c->pc = RC_ADDR(0x0000fed6u);
    if (rc_cond(c, 12)) goto L_FEEA;

L_FED8:
    /* 0000fed8   6  addi.w #2,(8,A2) */
    c->pc = RC_ADDR(0x0000fed8u);
    t3 = (c->a[2] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_FEDE:
    /* 0000fede   2  bra 0000feea */
    c->pc = RC_ADDR(0x0000fedeu);
    goto L_FEEA;

L_FEE0:
    /* 0000fee0   2  cmp.l D1,D2 */
    c->pc = RC_ADDR(0x0000fee0u);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_FEE2:
    /* 0000fee2   2  blt 0000fee8 */
    c->pc = RC_ADDR(0x0000fee2u);
    if (rc_cond(c, 13)) goto L_FEE8;

L_FEE4:
    /* 0000fee4   2  sub.l D3,D2 */
    c->pc = RC_ADDR(0x0000fee4u);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_FEE6:
    /* 0000fee6   2  bra 0000feea */
    c->pc = RC_ADDR(0x0000fee6u);
    goto L_FEEA;

L_FEE8:
    /* 0000fee8   2  add.l D3,D2 */
    c->pc = RC_ADDR(0x0000fee8u);
    t0 = rc_d_get(c, 3, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_FEEA:
    /* 0000feea   4  move.l D2,(a,A2) */
    c->pc = RC_ADDR(0x0000feeau);
    t0 = rc_d_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[2] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_FEEE:
    /* 0000feee   4  move.w (6,A2),D0 */
    c->pc = RC_ADDR(0x0000feeeu);
    t0 = rc_rd16(c, m, (c->a[2] + 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FEF2:
    /* 0000fef2   4  move.w (12,A2),D1 */
    c->pc = RC_ADDR(0x0000fef2u);
    t0 = rc_rd16(c, m, (c->a[2] + 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FEF6:
    /* 0000fef6   4  move.w (1a,A3),D2 */
    c->pc = RC_ADDR(0x0000fef6u);
    t0 = rc_rd16(c, m, (c->a[3] + 0x1au));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FEFA:
    /* 0000fefa   2  muls.w D2,D1 */
    c->pc = RC_ADDR(0x0000fefau);
    t0 = rc_d_get(c, 2, RC_W);
    rc_muls(c, 1, t0);

L_FEFC:
    /* 0000fefc   2  asr.w #7,D1 */
    c->pc = RC_ADDR(0x0000fefcu);
    c->d[1] = rc_shift(c, 0, 0, 0x00000007u, rc_d_get(c, 1, RC_W), RC_W);

L_FEFE:
    /* 0000fefe   4  move.w (4,A6),D2 */
    c->pc = RC_ADDR(0x0000fefeu);
    t0 = rc_rd16(c, m, (c->a[6] + 0x4u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FF02:
    /* 0000ff02   4  subi.w #80,D2 */
    c->pc = RC_ADDR(0x0000ff02u);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000080u;
    rc_flags_sub(c, RC_W, t1, 0x00000080u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_FF06:
    /* 0000ff06   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x0000ff06u);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_FF08:
    /* 0000ff08   4  addi.w #1000,D1 */
    c->pc = RC_ADDR(0x0000ff08u);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00001000u;
    rc_flags_add(c, RC_W, t1, 0x00001000u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_FF0C:
    /* 0000ff0c   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x0000ff0cu);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_FF0E:
    /* 0000ff0e   2  moveq #13,D1 */
    c->pc = RC_ADDR(0x0000ff0eu);
    c->d[1] = 0x00000013u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_FF10:
    /* 0000ff10   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x0000ff10u);
    c->d[0] = rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L);

L_FF12:
    /* 0000ff12   4  move.w D0,(12,A1) */
    c->pc = RC_ADDR(0x0000ff12u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_FF16:
    /* 0000ff16   4  move.w (0,A6),D0 */
    c->pc = RC_ADDR(0x0000ff16u);
    t0 = rc_rd16(c, m, (c->a[6] + 0x0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_FF1A:
    /* 0000ff1a   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000ff1au);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FF1C:
    /* 0000ff1c   4  mulu.w (8,A1),D0 */
    c->pc = RC_ADDR(0x0000ff1cu);
    t0 = rc_rd16(c, m, (c->a[1] + 0x8u));
    rc_mulu(c, 0, t0);

L_FF20:
    /* 0000ff20   2  lsr.w #8,D0 */
    c->pc = RC_ADDR(0x0000ff20u);
    c->d[0] = rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 0, RC_W), RC_W);

L_FF22:
    /* 0000ff22   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000ff22u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_FF24:
    /* 0000ff24   4  mulu.w (8,A3),D0 */
    c->pc = RC_ADDR(0x0000ff24u);
    t0 = rc_rd16(c, m, (c->a[3] + 0x8u));
    rc_mulu(c, 0, t0);

L_FF28:
    /* 0000ff28   2  lsr.w #8,D0 */
    c->pc = RC_ADDR(0x0000ff28u);
    c->d[0] = rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 0, RC_W), RC_W);

L_FF2A:
    /* 0000ff2a   4  move.l (a,A2),D1 */
    c->pc = RC_ADDR(0x0000ff2au);
    t0 = rc_rd32(c, m, (c->a[2] + 0xau));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_FF2E:
    /* 0000ff2e   2  swap D1 */
    c->pc = RC_ADDR(0x0000ff2eu);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_FF30:
    /* 0000ff30   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x0000ff30u);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_FF32:
    /* 0000ff32   2  moveq #a,D1 */
    c->pc = RC_ADDR(0x0000ff32u);
    c->d[1] = 0x0000000au;
    rc_set_nzvc(c, c->d[1], RC_L);

L_FF34:
    /* 0000ff34   2  lsr.w D1,D0 */
    c->pc = RC_ADDR(0x0000ff34u);
    c->d[0] = rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_W), RC_W);

L_FF36:
    /* 0000ff36   4  move.w D0,(14,A1) */
    c->pc = RC_ADDR(0x0000ff36u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_FF3A:
    /* 0000ff3a   2  clr.l D0 */
    c->pc = RC_ADDR(0x0000ff3au);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_FF3C:
    /* 0000ff3c   6  cmpi.w #2,(a,A1) */
    c->pc = RC_ADDR(0x0000ff3cu);
    t0 = rc_rd16(c, m, (c->a[1] + 0xau));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_FF42:
    /* 0000ff42   2  bne 0000ff46 */
    c->pc = RC_ADDR(0x0000ff42u);
    if (rc_cond(c, 6)) goto L_FF46;

L_FF44:
    /* 0000ff44   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x0000ff44u);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_FF46:
    /* 0000ff46   2  rts */
    c->pc = RC_ADDR(0x0000ff46u);
    rc_ret(c, m);
    return;

}
