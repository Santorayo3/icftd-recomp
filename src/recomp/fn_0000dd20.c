/* fn_0000dd20 - 210 byte(s), 76 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000dd20(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000dd20u): goto L_DD20;
    case RC_ADDR(0x0000dd24u): goto L_DD24;
    case RC_ADDR(0x0000dd28u): goto L_DD28;
    case RC_ADDR(0x0000dd2cu): goto L_DD2C;
    case RC_ADDR(0x0000dd2eu): goto L_DD2E;
    case RC_ADDR(0x0000dd32u): goto L_DD32;
    case RC_ADDR(0x0000dd36u): goto L_DD36;
    case RC_ADDR(0x0000dd3au): goto L_DD3A;
    case RC_ADDR(0x0000dd3cu): goto L_DD3C;
    case RC_ADDR(0x0000dd40u): goto L_DD40;
    case RC_ADDR(0x0000dd42u): goto L_DD42;
    case RC_ADDR(0x0000dd46u): goto L_DD46;
    case RC_ADDR(0x0000dd48u): goto L_DD48;
    case RC_ADDR(0x0000dd4au): goto L_DD4A;
    case RC_ADDR(0x0000dd4cu): goto L_DD4C;
    case RC_ADDR(0x0000dd4eu): goto L_DD4E;
    case RC_ADDR(0x0000dd52u): goto L_DD52;
    case RC_ADDR(0x0000dd56u): goto L_DD56;
    case RC_ADDR(0x0000dd58u): goto L_DD58;
    case RC_ADDR(0x0000dd5au): goto L_DD5A;
    case RC_ADDR(0x0000dd5cu): goto L_DD5C;
    case RC_ADDR(0x0000dd5eu): goto L_DD5E;
    case RC_ADDR(0x0000dd62u): goto L_DD62;
    case RC_ADDR(0x0000dd64u): goto L_DD64;
    case RC_ADDR(0x0000dd68u): goto L_DD68;
    case RC_ADDR(0x0000dd6au): goto L_DD6A;
    case RC_ADDR(0x0000dd6eu): goto L_DD6E;
    case RC_ADDR(0x0000dd70u): goto L_DD70;
    case RC_ADDR(0x0000dd74u): goto L_DD74;
    case RC_ADDR(0x0000dd76u): goto L_DD76;
    case RC_ADDR(0x0000dd78u): goto L_DD78;
    case RC_ADDR(0x0000dd7cu): goto L_DD7C;
    case RC_ADDR(0x0000dd80u): goto L_DD80;
    case RC_ADDR(0x0000dd82u): goto L_DD82;
    case RC_ADDR(0x0000dd86u): goto L_DD86;
    case RC_ADDR(0x0000dd88u): goto L_DD88;
    case RC_ADDR(0x0000dd8cu): goto L_DD8C;
    case RC_ADDR(0x0000dd8eu): goto L_DD8E;
    case RC_ADDR(0x0000dd90u): goto L_DD90;
    case RC_ADDR(0x0000dd92u): goto L_DD92;
    case RC_ADDR(0x0000dd96u): goto L_DD96;
    case RC_ADDR(0x0000dd98u): goto L_DD98;
    case RC_ADDR(0x0000dd9cu): goto L_DD9C;
    case RC_ADDR(0x0000dd9eu): goto L_DD9E;
    case RC_ADDR(0x0000dda2u): goto L_DDA2;
    case RC_ADDR(0x0000dda4u): goto L_DDA4;
    case RC_ADDR(0x0000dda6u): goto L_DDA6;
    case RC_ADDR(0x0000dda8u): goto L_DDA8;
    case RC_ADDR(0x0000ddaau): goto L_DDAA;
    case RC_ADDR(0x0000ddacu): goto L_DDAC;
    case RC_ADDR(0x0000ddaeu): goto L_DDAE;
    case RC_ADDR(0x0000ddb2u): goto L_DDB2;
    case RC_ADDR(0x0000ddb6u): goto L_DDB6;
    case RC_ADDR(0x0000ddb8u): goto L_DDB8;
    case RC_ADDR(0x0000ddbau): goto L_DDBA;
    case RC_ADDR(0x0000ddbeu): goto L_DDBE;
    case RC_ADDR(0x0000ddc0u): goto L_DDC0;
    case RC_ADDR(0x0000ddc2u): goto L_DDC2;
    case RC_ADDR(0x0000ddc4u): goto L_DDC4;
    case RC_ADDR(0x0000ddc6u): goto L_DDC6;
    case RC_ADDR(0x0000ddcau): goto L_DDCA;
    case RC_ADDR(0x0000ddccu): goto L_DDCC;
    case RC_ADDR(0x0000ddceu): goto L_DDCE;
    case RC_ADDR(0x0000ddd4u): goto L_DDD4;
    case RC_ADDR(0x0000ddd6u): goto L_DDD6;
    case RC_ADDR(0x0000ddd8u): goto L_DDD8;
    case RC_ADDR(0x0000dddau): goto L_DDDA;
    case RC_ADDR(0x0000dddcu): goto L_DDDC;
    case RC_ADDR(0x0000dddeu): goto L_DDDE;
    case RC_ADDR(0x0000dde2u): goto L_DDE2;
    case RC_ADDR(0x0000dde4u): goto L_DDE4;
    case RC_ADDR(0x0000dde6u): goto L_DDE6;
    case RC_ADDR(0x0000ddeau): goto L_DDEA;
    case RC_ADDR(0x0000ddecu): goto L_DDEC;
    case RC_ADDR(0x0000ddeeu): goto L_DDEE;
    case RC_ADDR(0x0000ddf0u): goto L_DDF0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_DD20:
    /* 0000dd20   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd20u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_DD24:
    /* 0000dd24   4  movem.l { A0 A1 A2 A3 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd24u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_DD28:
    /* 0000dd28   4  move.w (8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd28u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD2C:
    /* 0000dd2c   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd2cu);
    rc_ext_l(c, 0);

L_DD2E:
    /* 0000dd2e   4  divs.w #20,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd2eu);
    t0 = 0x00000020u;
    rc_divs(c, m, 0, t0);

L_DD32:
    /* 0000dd32   4  muls.w #27,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd32u);
    t0 = 0x00000027u;
    rc_muls(c, 0, t0);

L_DD36:
    /* 0000dd36   4  move.w (a,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd36u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD3A:
    /* 0000dd3a   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd3au);
    rc_ext_l(c, 1);

L_DD3C:
    /* 0000dd3c   4  divs.w #1b,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd3cu);
    t0 = 0x0000001bu;
    rc_divs(c, m, 1, t0);

L_DD40:
    /* 0000dd40   2  add.w D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd40u);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DD42:
    /* 0000dd42   4  add.w #28,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd42u);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DD46:
    /* 0000dd46   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd46u);
    rc_ext_l(c, 0);

L_DD48:
    /* 0000dd48   2  move.l D0,D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd48u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DD4A:
    /* 0000dd4a   2  move.l D5,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd4au);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DD4C:
    /* 0000dd4c   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd4cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_DD4E:
    /* 0000dd4e   4  movea.l (fffff2f8,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd4eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_DD52:
    /* 0000dd52   4  move.w (0,A0,D0.w),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd52u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD56:
    /* 0000dd56   2  lsr.w #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd56u);
    c->d[1] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_DD58:
    /* 0000dd58   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd58u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_DD5A:
    /* 0000dd5a   2  move.w D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd5au);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD5C:
    /* 0000dd5c   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd5cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_DD5E:
    /* 0000dd5e   4  movea.l (fffff314,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd5eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xcecu));
    c->a[0] = t0;

L_DD62:
    /* 0000dd62   2  moveq #0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd62u);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_DD64:
    /* 0000dd64   4  move.w (0,A0,D0.w),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd64u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD68:
    /* 0000dd68   2  move.l D1,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd68u);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DD6A:
    /* 0000dd6a   4  move.w (8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd6au);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD6E:
    /* 0000dd6e   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd6eu);
    rc_ext_l(c, 0);

L_DD70:
    /* 0000dd70   4  divs.w #20,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd70u);
    t0 = 0x00000020u;
    rc_divs(c, m, 0, t0);

L_DD74:
    /* 0000dd74   2  swap D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd74u);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_DD76:
    /* 0000dd76   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd76u);
    rc_ext_l(c, 0);

L_DD78:
    /* 0000dd78   4  divs.w #8,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd78u);
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_DD7C:
    /* 0000dd7c   4  move.w (a,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd7cu);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD80:
    /* 0000dd80   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd80u);
    rc_ext_l(c, 1);

L_DD82:
    /* 0000dd82   4  divs.w #1b,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd82u);
    t0 = 0x0000001bu;
    rc_divs(c, m, 1, t0);

L_DD86:
    /* 0000dd86   2  swap D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd86u);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_DD88:
    /* 0000dd88   4  muls.w (fffff2f4,A4),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd88u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0cu));
    rc_muls(c, 1, t0);

L_DD8C:
    /* 0000dd8c   2  add.w D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd8cu);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DD8E:
    /* 0000dd8e   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd8eu);
    rc_ext_l(c, 0);

L_DD90:
    /* 0000dd90   2  add.l D0,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd90u);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_DD92:
    /* 0000dd92   4  move.w (8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd92u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD96:
    /* 0000dd96   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd96u);
    rc_ext_l(c, 0);

L_DD98:
    /* 0000dd98   4  divs.w #8,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd98u);
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_DD9C:
    /* 0000dd9c   2  swap D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd9cu);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_DD9E:
    /* 0000dd9e   4  move.w #80,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dd9eu);
    t0 = 0x00000080u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DDA2:
    /* 0000dda2   2  asr.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dda2u);
    c->d[1] = rc_shift(c, 0, 0, (c->d[0] & 63u), rc_d_get(c, 1, RC_W), RC_W);

L_DDA4:
    /* 0000dda4   2  move.b D1,D7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dda4u);
    t0 = rc_d_get(c, 1, RC_B);
    rc_d_set(c, 7, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_DDA6:
    /* 0000dda6   2  moveq #0,D6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dda6u);
    c->d[6] = 0x00000000u;
    rc_set_nzvc(c, c->d[6], RC_L);

L_DDA8:
    /* 0000dda8   2  moveq #0,D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dda8u);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_DDAA:
    /* 0000ddaa   2  move.l D5,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddaau);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DDAC:
    /* 0000ddac   2  asl.l #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddacu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_DDAE:
    /* 0000ddae   4  lea (fffff300,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddaeu);
    c->a[0] = (c->a[4] - 0xd00u);

L_DDB2:
    /* 0000ddb2   4  move.l (0,A0,D0.w),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddb2u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DDB6:
    /* 0000ddb6   2  movea.l D4,A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddb6u);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_DDB8:
    /* 0000ddb8   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddb8u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_DDBA:
    /* 0000ddba   4  move.b (0,A0,D1.w),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddbau);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_DDBE:
    /* 0000ddbe   2  move.b D7,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddbeu);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_DDC0:
    /* 0000ddc0   2  ext.w D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddc0u);
    rc_ext_w(c, 1);

L_DDC2:
    /* 0000ddc2   2  and.w D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddc2u);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_DDC4:
    /* 0000ddc4   2  beq 0000ddca */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddc4u);
    if (rc_cond(c, 7)) goto L_DDCA;

L_DDC6:
    /* 0000ddc6   4  bset #5,D6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddc6u);
    t4 = 0x00000005u;
    t0 = rc_d_get(c, 6, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_B, t2);

L_DDCA:
    /* 0000ddca   2  asr.w #1,D6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddcau);
    c->d[6] = rc_shift(c, 0, 0, 0x00000001u, rc_d_get(c, 6, RC_W), RC_W);

L_DDCC:
    /* 0000ddcc   2  addq.l #1,D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddccu);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_DDCE:
    /* 0000ddce   6  cmp.l #5,D5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddceu);
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_DDD4:
    /* 0000ddd4   2  blt 0000ddaa */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddd4u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_DDAA; }

L_DDD6:
    /* 0000ddd6   2  move.w D6,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddd6u);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DDD8:
    /* 0000ddd8   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddd8u);
    rc_ext_l(c, 0);

L_DDDA:
    /* 0000ddda   2  moveq #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dddau);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_DDDC:
    /* 0000dddc   2  asl.l D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dddcu);
    c->d[1] = rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L);

L_DDDE:
    /* 0000ddde   4  and.l (ffff9ad8,A4),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dddeu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6528u));
    t2 = t0 & rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_DDE2:
    /* 0000dde2   2  beq 0000ddee */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dde2u);
    if (rc_cond(c, 7)) goto L_DDEE;

L_DDE4:
    /* 0000dde4   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dde4u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_DDE6:
    /* 0000dde6   4  movem.l (SP)+,{ D4 D5 D6 D7 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000dde6u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_DDEA:
    /* 0000ddea   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddeau);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_DDEC:
    /* 0000ddec   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddecu);
    rc_ret(c, m);
    return;

L_DDEE:
    /* 0000ddee   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddeeu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_DDF0:
    /* 0000ddf0   2  bra 0000dde6 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000ddf0u);
    rc_tick();
    goto L_DDE6;

}
