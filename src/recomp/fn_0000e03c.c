/* fn_0000e03c - 644 byte(s), 169 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000e03c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000e03cu): goto L_E03C;
    case RC_ADDR(0x0000e040u): goto L_E040;
    case RC_ADDR(0x0000e042u): goto L_E042;
    case RC_ADDR(0x0000e044u): goto L_E044;
    case RC_ADDR(0x0000e046u): goto L_E046;
    case RC_ADDR(0x0000e04au): goto L_E04A;
    case RC_ADDR(0x0000e04cu): goto L_E04C;
    case RC_ADDR(0x0000e050u): goto L_E050;
    case RC_ADDR(0x0000e054u): goto L_E054;
    case RC_ADDR(0x0000e058u): goto L_E058;
    case RC_ADDR(0x0000e05cu): goto L_E05C;
    case RC_ADDR(0x0000e060u): goto L_E060;
    case RC_ADDR(0x0000e064u): goto L_E064;
    case RC_ADDR(0x0000e068u): goto L_E068;
    case RC_ADDR(0x0000e06au): goto L_E06A;
    case RC_ADDR(0x0000e06eu): goto L_E06E;
    case RC_ADDR(0x0000e070u): goto L_E070;
    case RC_ADDR(0x0000e072u): goto L_E072;
    case RC_ADDR(0x0000e076u): goto L_E076;
    case RC_ADDR(0x0000e078u): goto L_E078;
    case RC_ADDR(0x0000e07au): goto L_E07A;
    case RC_ADDR(0x0000e07cu): goto L_E07C;
    case RC_ADDR(0x0000e07eu): goto L_E07E;
    case RC_ADDR(0x0000e080u): goto L_E080;
    case RC_ADDR(0x0000e084u): goto L_E084;
    case RC_ADDR(0x0000e088u): goto L_E088;
    case RC_ADDR(0x0000e08au): goto L_E08A;
    case RC_ADDR(0x0000e08cu): goto L_E08C;
    case RC_ADDR(0x0000e08eu): goto L_E08E;
    case RC_ADDR(0x0000e090u): goto L_E090;
    case RC_ADDR(0x0000e092u): goto L_E092;
    case RC_ADDR(0x0000e094u): goto L_E094;
    case RC_ADDR(0x0000e098u): goto L_E098;
    case RC_ADDR(0x0000e09au): goto L_E09A;
    case RC_ADDR(0x0000e09cu): goto L_E09C;
    case RC_ADDR(0x0000e09eu): goto L_E09E;
    case RC_ADDR(0x0000e0a0u): goto L_E0A0;
    case RC_ADDR(0x0000e0a4u): goto L_E0A4;
    case RC_ADDR(0x0000e0a6u): goto L_E0A6;
    case RC_ADDR(0x0000e0aau): goto L_E0AA;
    case RC_ADDR(0x0000e0acu): goto L_E0AC;
    case RC_ADDR(0x0000e0aeu): goto L_E0AE;
    case RC_ADDR(0x0000e0b4u): goto L_E0B4;
    case RC_ADDR(0x0000e0b8u): goto L_E0B8;
    case RC_ADDR(0x0000e0bau): goto L_E0BA;
    case RC_ADDR(0x0000e0beu): goto L_E0BE;
    case RC_ADDR(0x0000e0c2u): goto L_E0C2;
    case RC_ADDR(0x0000e0c4u): goto L_E0C4;
    case RC_ADDR(0x0000e0c6u): goto L_E0C6;
    case RC_ADDR(0x0000e0c8u): goto L_E0C8;
    case RC_ADDR(0x0000e0ccu): goto L_E0CC;
    case RC_ADDR(0x0000e0ceu): goto L_E0CE;
    case RC_ADDR(0x0000e0d0u): goto L_E0D0;
    case RC_ADDR(0x0000e0d4u): goto L_E0D4;
    case RC_ADDR(0x0000e0d6u): goto L_E0D6;
    case RC_ADDR(0x0000e0d8u): goto L_E0D8;
    case RC_ADDR(0x0000e0dau): goto L_E0DA;
    case RC_ADDR(0x0000e0dcu): goto L_E0DC;
    case RC_ADDR(0x0000e0deu): goto L_E0DE;
    case RC_ADDR(0x0000e0e2u): goto L_E0E2;
    case RC_ADDR(0x0000e0e4u): goto L_E0E4;
    case RC_ADDR(0x0000e0ecu): goto L_E0EC;
    case RC_ADDR(0x0000e0eeu): goto L_E0EE;
    case RC_ADDR(0x0000e0f0u): goto L_E0F0;
    case RC_ADDR(0x0000e0f4u): goto L_E0F4;
    case RC_ADDR(0x0000e0f6u): goto L_E0F6;
    case RC_ADDR(0x0000e0fcu): goto L_E0FC;
    case RC_ADDR(0x0000e102u): goto L_E102;
    case RC_ADDR(0x0000e108u): goto L_E108;
    case RC_ADDR(0x0000e110u): goto L_E110;
    case RC_ADDR(0x0000e114u): goto L_E114;
    case RC_ADDR(0x0000e116u): goto L_E116;
    case RC_ADDR(0x0000e118u): goto L_E118;
    case RC_ADDR(0x0000e11au): goto L_E11A;
    case RC_ADDR(0x0000e11cu): goto L_E11C;
    case RC_ADDR(0x0000e11eu): goto L_E11E;
    case RC_ADDR(0x0000e122u): goto L_E122;
    case RC_ADDR(0x0000e124u): goto L_E124;
    case RC_ADDR(0x0000e126u): goto L_E126;
    case RC_ADDR(0x0000e12au): goto L_E12A;
    case RC_ADDR(0x0000e12eu): goto L_E12E;
    case RC_ADDR(0x0000e130u): goto L_E130;
    case RC_ADDR(0x0000e132u): goto L_E132;
    case RC_ADDR(0x0000e13au): goto L_E13A;
    case RC_ADDR(0x0000e142u): goto L_E142;
    case RC_ADDR(0x0000e146u): goto L_E146;
    case RC_ADDR(0x0000e148u): goto L_E148;
    case RC_ADDR(0x0000e14au): goto L_E14A;
    case RC_ADDR(0x0000e150u): goto L_E150;
    case RC_ADDR(0x0000e152u): goto L_E152;
    case RC_ADDR(0x0000e154u): goto L_E154;
    case RC_ADDR(0x0000e15au): goto L_E15A;
    case RC_ADDR(0x0000e15cu): goto L_E15C;
    case RC_ADDR(0x0000e15eu): goto L_E15E;
    case RC_ADDR(0x0000e164u): goto L_E164;
    case RC_ADDR(0x0000e16cu): goto L_E16C;
    case RC_ADDR(0x0000e174u): goto L_E174;
    case RC_ADDR(0x0000e17cu): goto L_E17C;
    case RC_ADDR(0x0000e182u): goto L_E182;
    case RC_ADDR(0x0000e18au): goto L_E18A;
    case RC_ADDR(0x0000e18cu): goto L_E18C;
    case RC_ADDR(0x0000e194u): goto L_E194;
    case RC_ADDR(0x0000e19cu): goto L_E19C;
    case RC_ADDR(0x0000e19eu): goto L_E19E;
    case RC_ADDR(0x0000e1a0u): goto L_E1A0;
    case RC_ADDR(0x0000e1a6u): goto L_E1A6;
    case RC_ADDR(0x0000e1a8u): goto L_E1A8;
    case RC_ADDR(0x0000e1aau): goto L_E1AA;
    case RC_ADDR(0x0000e1b0u): goto L_E1B0;
    case RC_ADDR(0x0000e1b8u): goto L_E1B8;
    case RC_ADDR(0x0000e1beu): goto L_E1BE;
    case RC_ADDR(0x0000e1c6u): goto L_E1C6;
    case RC_ADDR(0x0000e1c8u): goto L_E1C8;
    case RC_ADDR(0x0000e1ceu): goto L_E1CE;
    case RC_ADDR(0x0000e1d6u): goto L_E1D6;
    case RC_ADDR(0x0000e1deu): goto L_E1DE;
    case RC_ADDR(0x0000e1e6u): goto L_E1E6;
    case RC_ADDR(0x0000e1eeu): goto L_E1EE;
    case RC_ADDR(0x0000e1f2u): goto L_E1F2;
    case RC_ADDR(0x0000e1f4u): goto L_E1F4;
    case RC_ADDR(0x0000e1f6u): goto L_E1F6;
    case RC_ADDR(0x0000e1fau): goto L_E1FA;
    case RC_ADDR(0x0000e200u): goto L_E200;
    case RC_ADDR(0x0000e208u): goto L_E208;
    case RC_ADDR(0x0000e20eu): goto L_E20E;
    case RC_ADDR(0x0000e216u): goto L_E216;
    case RC_ADDR(0x0000e218u): goto L_E218;
    case RC_ADDR(0x0000e220u): goto L_E220;
    case RC_ADDR(0x0000e226u): goto L_E226;
    case RC_ADDR(0x0000e22cu): goto L_E22C;
    case RC_ADDR(0x0000e230u): goto L_E230;
    case RC_ADDR(0x0000e236u): goto L_E236;
    case RC_ADDR(0x0000e23au): goto L_E23A;
    case RC_ADDR(0x0000e23cu): goto L_E23C;
    case RC_ADDR(0x0000e240u): goto L_E240;
    case RC_ADDR(0x0000e248u): goto L_E248;
    case RC_ADDR(0x0000e24au): goto L_E24A;
    case RC_ADDR(0x0000e24eu): goto L_E24E;
    case RC_ADDR(0x0000e250u): goto L_E250;
    case RC_ADDR(0x0000e252u): goto L_E252;
    case RC_ADDR(0x0000e256u): goto L_E256;
    case RC_ADDR(0x0000e25au): goto L_E25A;
    case RC_ADDR(0x0000e25cu): goto L_E25C;
    case RC_ADDR(0x0000e25eu): goto L_E25E;
    case RC_ADDR(0x0000e262u): goto L_E262;
    case RC_ADDR(0x0000e266u): goto L_E266;
    case RC_ADDR(0x0000e268u): goto L_E268;
    case RC_ADDR(0x0000e26cu): goto L_E26C;
    case RC_ADDR(0x0000e26eu): goto L_E26E;
    case RC_ADDR(0x0000e272u): goto L_E272;
    case RC_ADDR(0x0000e274u): goto L_E274;
    case RC_ADDR(0x0000e278u): goto L_E278;
    case RC_ADDR(0x0000e27eu): goto L_E27E;
    case RC_ADDR(0x0000e284u): goto L_E284;
    case RC_ADDR(0x0000e286u): goto L_E286;
    case RC_ADDR(0x0000e288u): goto L_E288;
    case RC_ADDR(0x0000e28eu): goto L_E28E;
    case RC_ADDR(0x0000e290u): goto L_E290;
    case RC_ADDR(0x0000e292u): goto L_E292;
    case RC_ADDR(0x0000e298u): goto L_E298;
    case RC_ADDR(0x0000e29au): goto L_E29A;
    case RC_ADDR(0x0000e29cu): goto L_E29C;
    case RC_ADDR(0x0000e2a2u): goto L_E2A2;
    case RC_ADDR(0x0000e2a8u): goto L_E2A8;
    case RC_ADDR(0x0000e2aeu): goto L_E2AE;
    case RC_ADDR(0x0000e2b6u): goto L_E2B6;
    case RC_ADDR(0x0000e2b8u): goto L_E2B8;
    case RC_ADDR(0x0000e2bcu): goto L_E2BC;
    case RC_ADDR(0x0000e2beu): goto L_E2BE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_E03C:
    /* 0000e03c   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0000e03cu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_E040:
    /* 0000e040   2  clr.l D4 */
    c->pc = RC_ADDR(0x0000e040u);
    rc_step(c, m);
    rc_d_set(c, 4, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_E042:
    /* 0000e042   2  clr.l D5 */
    c->pc = RC_ADDR(0x0000e042u);
    rc_step(c, m);
    rc_d_set(c, 5, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_E044:
    /* 0000e044   2  clr.l D6 */
    c->pc = RC_ADDR(0x0000e044u);
    rc_step(c, m);
    rc_d_set(c, 6, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_E046:
    /* 0000e046   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0000e046u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_E04A:
    /* 0000e04a   2  move.w (A0),D1 */
    c->pc = RC_ADDR(0x0000e04au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E04C:
    /* 0000e04c   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0000e04cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E050:
    /* 0000e050   4  cmpi.w #c7,D0 */
    c->pc = RC_ADDR(0x0000e050u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x000000c7u);

L_E054:
    /* 0000e054   4  bgt 0000e2bc */
    c->pc = RC_ADDR(0x0000e054u);
    rc_step(c, m);
    if (rc_cond(c, 14)) goto L_E2BC;

L_E058:
    /* 0000e058   4  add.w (2,A0),D0 */
    c->pc = RC_ADDR(0x0000e058u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_E05C:
    /* 0000e05c   4  beq 0000e2bc */
    c->pc = RC_ADDR(0x0000e05cu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_E2BC;

L_E060:
    /* 0000e060   4  bmi 0000e2bc */
    c->pc = RC_ADDR(0x0000e060u);
    rc_step(c, m);
    if (rc_cond(c, 11)) goto L_E2BC;

L_E064:
    /* 0000e064   4  cmp.w (fffff2d0,A4),D0 */
    c->pc = RC_ADDR(0x0000e064u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd30u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E068:
    /* 0000e068   2  blt 0000e072 */
    c->pc = RC_ADDR(0x0000e068u);
    rc_step(c, m);
    if (rc_cond(c, 13)) goto L_E072;

L_E06A:
    /* 0000e06a   4  sub.w (fffff2d0,A4),D0 */
    c->pc = RC_ADDR(0x0000e06au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd30u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_E06E:
    /* 0000e06e   2  move.w D0,D6 */
    c->pc = RC_ADDR(0x0000e06eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E070:
    /* 0000e070   2  bra 0000e084 */
    c->pc = RC_ADDR(0x0000e070u);
    rc_step(c, m);
    goto L_E084;

L_E072:
    /* 0000e072   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0000e072u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E076:
    /* 0000e076   2  bpl 0000e084 */
    c->pc = RC_ADDR(0x0000e076u);
    rc_step(c, m);
    if (rc_cond(c, 10)) goto L_E084;

L_E078:
    /* 0000e078   2  neg.w D0 */
    c->pc = RC_ADDR(0x0000e078u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_E07A:
    /* 0000e07a   2  move.w D0,D6 */
    c->pc = RC_ADDR(0x0000e07au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E07C:
    /* 0000e07c   2  mulu.w D1,D0 */
    c->pc = RC_ADDR(0x0000e07cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_E07E:
    /* 0000e07e   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x0000e07eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E080:
    /* 0000e080   4  clr.w (a,A5) */
    c->pc = RC_ADDR(0x0000e080u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] + 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E084:
    /* 0000e084   4  move.w (8,A5),D2 */
    c->pc = RC_ADDR(0x0000e084u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E088:
    /* 0000e088   2  bpl 0000e0ba */
    c->pc = RC_ADDR(0x0000e088u);
    rc_step(c, m);
    if (rc_cond(c, 10)) goto L_E0BA;

L_E08A:
    /* 0000e08a   2  neg.w D2 */
    c->pc = RC_ADDR(0x0000e08au);
    rc_step(c, m);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_E08C:
    /* 0000e08c   2  move.w D2,D0 */
    c->pc = RC_ADDR(0x0000e08cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E08E:
    /* 0000e08e   2  lsr.w #4,D2 */
    c->pc = RC_ADDR(0x0000e08eu);
    rc_step(c, m);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W));

L_E090:
    /* 0000e090   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x0000e090u);
    rc_step(c, m);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_E092:
    /* 0000e092   2  cmp.w D1,D2 */
    c->pc = RC_ADDR(0x0000e092u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E094:
    /* 0000e094   4  bge 0000e2bc */
    c->pc = RC_ADDR(0x0000e094u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_E2BC;

L_E098:
    /* 0000e098   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x0000e098u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E09A:
    /* 0000e09a   2  add.w D2,D4 */
    c->pc = RC_ADDR(0x0000e09au);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_E09C:
    /* 0000e09c   2  subq.w #2,D2 */
    c->pc = RC_ADDR(0x0000e09cu);
    rc_step(c, m);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_E09E:
    /* 0000e09e   2  move.w D2,D3 */
    c->pc = RC_ADDR(0x0000e09eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E0A0:
    /* 0000e0a0   4  andi.w #f,D0 */
    c->pc = RC_ADDR(0x0000e0a0u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_E0A4:
    /* 0000e0a4   2  bne 0000e0ac */
    c->pc = RC_ADDR(0x0000e0a4u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_E0AC;

L_E0A6:
    /* 0000e0a6   4  clr.w (8,A5) */
    c->pc = RC_ADDR(0x0000e0a6u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] + 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E0AA:
    /* 0000e0aa   2  bra 0000e0e2 */
    c->pc = RC_ADDR(0x0000e0aau);
    rc_step(c, m);
    goto L_E0E2;

L_E0AC:
    /* 0000e0ac   2  moveq #fffffffe,D5 */
    c->pc = RC_ADDR(0x0000e0acu);
    rc_step(c, m);
    c->d[5] = 0xfffffffeu;
    rc_set_nzvc(c, c->d[5], RC_L);

L_E0AE:
    /* 0000e0ae   6  move.w #10,(8,A5) */
    c->pc = RC_ADDR(0x0000e0aeu);
    rc_step(c, m);
    t0 = 0x00000010u;
    rc_wr16(c, m, (c->a[5] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E0B4:
    /* 0000e0b4   4  sub.w D0,(8,A5) */
    c->pc = RC_ADDR(0x0000e0b4u);
    rc_step(c, m);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_E0B8:
    /* 0000e0b8   2  bra 0000e0e2 */
    c->pc = RC_ADDR(0x0000e0b8u);
    rc_step(c, m);
    goto L_E0E2;

L_E0BA:
    /* 0000e0ba   4  cmpi.w #13f,D2 */
    c->pc = RC_ADDR(0x0000e0bau);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x0000013fu);

L_E0BE:
    /* 0000e0be   4  bgt 0000e2bc */
    c->pc = RC_ADDR(0x0000e0beu);
    rc_step(c, m);
    if (rc_cond(c, 14)) goto L_E2BC;

L_E0C2:
    /* 0000e0c2   2  lsr.w #4,D2 */
    c->pc = RC_ADDR(0x0000e0c2u);
    rc_step(c, m);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W));

L_E0C4:
    /* 0000e0c4   2  lsl.w #1,D2 */
    c->pc = RC_ADDR(0x0000e0c4u);
    rc_step(c, m);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_E0C6:
    /* 0000e0c6   2  add.w D1,D2 */
    c->pc = RC_ADDR(0x0000e0c6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_E0C8:
    /* 0000e0c8   4  cmpi.w #26,D2 */
    c->pc = RC_ADDR(0x0000e0c8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000026u);

L_E0CC:
    /* 0000e0cc   2  ble 0000e0de */
    c->pc = RC_ADDR(0x0000e0ccu);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_E0DE;

L_E0CE:
    /* 0000e0ce   2  sub.w D1,D2 */
    c->pc = RC_ADDR(0x0000e0ceu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_E0D0:
    /* 0000e0d0   4  sub.w (fffff2ce,A4),D2 */
    c->pc = RC_ADDR(0x0000e0d0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_E0D4:
    /* 0000e0d4   2  neg.w D2 */
    c->pc = RC_ADDR(0x0000e0d4u);
    rc_step(c, m);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_E0D6:
    /* 0000e0d6   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x0000e0d6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E0D8:
    /* 0000e0d8   2  move.w D1,D3 */
    c->pc = RC_ADDR(0x0000e0d8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E0DA:
    /* 0000e0da   2  move.w D2,D1 */
    c->pc = RC_ADDR(0x0000e0dau);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E0DC:
    /* 0000e0dc   2  bra 0000e0e4 */
    c->pc = RC_ADDR(0x0000e0dcu);
    rc_step(c, m);
    goto L_E0E4;

L_E0DE:
    /* 0000e0de   4  move.w #fffe,D3 */
    c->pc = RC_ADDR(0x0000e0deu);
    rc_step(c, m);
    t0 = 0x0000fffeu;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E0E2:
    /* 0000e0e2   2  addq.w #2,D1 */
    c->pc = RC_ADDR(0x0000e0e2u);
    rc_step(c, m);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E0E4:
    /* 0000e0e4   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x0000e0e4u);
    rc_step(c, m);
    t4 = 0x00000006u;
    t3 = 0x00dff002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_E0EC:
    /* 0000e0ec   2  bne 0000e0e4 */
    c->pc = RC_ADDR(0x0000e0ecu);
    rc_step(c, m);
    if (rc_cond(c, 6)) { rc_tick(); goto L_E0E4; }

L_E0EE:
    /* 0000e0ee   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x0000e0eeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E0F0:
    /* 0000e0f0   4  move.w (fffff2ce,A4),D6 */
    c->pc = RC_ADDR(0x0000e0f0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E0F4:
    /* 0000e0f4   2  sub.w D1,D6 */
    c->pc = RC_ADDR(0x0000e0f4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_E0F6:
    /* 0000e0f6   6  move.w D6,(00dff064).l */
    c->pc = RC_ADDR(0x0000e0f6u);
    rc_step(c, m);
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E0FC:
    /* 0000e0fc   6  move.w D6,(00dff062).l */
    c->pc = RC_ADDR(0x0000e0fcu);
    rc_step(c, m);
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E102:
    /* 0000e102   6  move.w D6,(00dff060).l */
    c->pc = RC_ADDR(0x0000e102u);
    rc_step(c, m);
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff060u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E108:
    /* 0000e108   8  move.w #0,(00dff066).l */
    c->pc = RC_ADDR(0x0000e108u);
    rc_step(c, m);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E110:
    /* 0000e110   4  move.w (2,A0),D2 */
    c->pc = RC_ADDR(0x0000e110u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E114:
    /* 0000e114   2  sub.w D0,D2 */
    c->pc = RC_ADDR(0x0000e114u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_E116:
    /* 0000e116   2  lsl.w #6,D2 */
    c->pc = RC_ADDR(0x0000e116u);
    rc_step(c, m);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 2, RC_W), RC_W));

L_E118:
    /* 0000e118   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000e118u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_E11A:
    /* 0000e11a   2  or.w D1,D2 */
    c->pc = RC_ADDR(0x0000e11au);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 2, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 2, RC_W, t2);

L_E11C:
    /* 0000e11c   2  clr.l D1 */
    c->pc = RC_ADDR(0x0000e11cu);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_E11E:
    /* 0000e11e   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000e11eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E122:
    /* 0000e122   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x0000e122u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_E124:
    /* 0000e124   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x0000e124u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_E126:
    /* 0000e126   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x0000e126u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E12A:
    /* 0000e12a   4  mulu.w (fffff2ce,A4),D1 */
    c->pc = RC_ADDR(0x0000e12au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_mulu(c, 1, t0);

L_E12E:
    /* 0000e12e   2  add.w D0,D1 */
    c->pc = RC_ADDR(0x0000e12eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_E130:
    /* 0000e130   2  add.l D5,D1 */
    c->pc = RC_ADDR(0x0000e130u);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_E132:
    /* 0000e132   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x0000e132u);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E13A:
    /* 0000e13a   8  move.w #ffff,(00dff046).l */
    c->pc = RC_ADDR(0x0000e13au);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E142:
    /* 0000e142   4  lea (fffff326,A4),A1 */
    c->pc = RC_ADDR(0x0000e142u);
    rc_step(c, m);
    c->a[1] = (c->a[4] - 0xcdau);

L_E146:
    /* 0000e146   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x0000e146u);
    rc_step(c, m);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_E148:
    /* 0000e148   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x0000e148u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_E14A:
    /* 0000e14a   6  move.l A2,(00dff050).l */
    c->pc = RC_ADDR(0x0000e14au);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E150:
    /* 0000e150   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x0000e150u);
    rc_step(c, m);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_E152:
    /* 0000e152   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x0000e152u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_E154:
    /* 0000e154   6  move.l A2,(00dff04c).l */
    c->pc = RC_ADDR(0x0000e154u);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E15A:
    /* 0000e15a   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x0000e15au);
    rc_step(c, m);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_E15C:
    /* 0000e15c   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x0000e15cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_E15E:
    /* 0000e15e   6  move.l A2,(00dff048).l */
    c->pc = RC_ADDR(0x0000e15eu);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E164:
    /* 0000e164   8  move.l (474,A4),(00dff054).l */
    c->pc = RC_ADDR(0x0000e164u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x474u));
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E16C:
    /* 0000e16c   8  move.w #ffe,(00dff040).l */
    c->pc = RC_ADDR(0x0000e16cu);
    rc_step(c, m);
    t0 = 0x00000ffeu;
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E174:
    /* 0000e174   8  move.w #0,(00dff042).l */
    c->pc = RC_ADDR(0x0000e174u);
    rc_step(c, m);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff042u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E17C:
    /* 0000e17c   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x0000e17cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E182:
    /* 0000e182   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x0000e182u);
    rc_step(c, m);
    t4 = 0x00000006u;
    t3 = 0x00dff002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_E18A:
    /* 0000e18a   2  bne 0000e182 */
    c->pc = RC_ADDR(0x0000e18au);
    rc_step(c, m);
    if (rc_cond(c, 6)) { rc_tick(); goto L_E182; }

L_E18C:
    /* 0000e18c   8  move.w #0,(00dff064).l */
    c->pc = RC_ADDR(0x0000e18cu);
    rc_step(c, m);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E194:
    /* 0000e194   8  move.l (474,A4),(00dff050).l */
    c->pc = RC_ADDR(0x0000e194u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x474u));
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E19C:
    /* 0000e19c   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x0000e19cu);
    rc_step(c, m);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_E19E:
    /* 0000e19e   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x0000e19eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_E1A0:
    /* 0000e1a0   6  move.l A2,(00dff04c).l */
    c->pc = RC_ADDR(0x0000e1a0u);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E1A6:
    /* 0000e1a6   2  movea.l (A1),A2 */
    c->pc = RC_ADDR(0x0000e1a6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[2] = t0;

L_E1A8:
    /* 0000e1a8   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x0000e1a8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_E1AA:
    /* 0000e1aa   6  move.l A2,(00dff048).l */
    c->pc = RC_ADDR(0x0000e1aau);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E1B0:
    /* 0000e1b0   8  move.l (474,A4),(00dff054).l */
    c->pc = RC_ADDR(0x0000e1b0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x474u));
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E1B8:
    /* 0000e1b8   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x0000e1b8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E1BE:
    /* 0000e1be   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x0000e1beu);
    rc_step(c, m);
    t4 = 0x00000006u;
    t3 = 0x00dff002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_E1C6:
    /* 0000e1c6   2  bne 0000e1be */
    c->pc = RC_ADDR(0x0000e1c6u);
    rc_step(c, m);
    if (rc_cond(c, 6)) { rc_tick(); goto L_E1BE; }

L_E1C8:
    /* 0000e1c8   6  move.w D3,(00dff064).l */
    c->pc = RC_ADDR(0x0000e1c8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E1CE:
    /* 0000e1ce   8  move.w #0,(00dff062).l */
    c->pc = RC_ADDR(0x0000e1ceu);
    rc_step(c, m);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E1D6:
    /* 0000e1d6   8  move.l (24,A0),(00dff050).l */
    c->pc = RC_ADDR(0x0000e1d6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E1DE:
    /* 0000e1de   8  move.l (474,A4),(00dff04c).l */
    c->pc = RC_ADDR(0x0000e1deu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x474u));
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E1E6:
    /* 0000e1e6   8  move.l (474,A4),(00dff054).l */
    c->pc = RC_ADDR(0x0000e1e6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x474u));
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E1EE:
    /* 0000e1ee   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000e1eeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E1F2:
    /* 0000e1f2   2  lsl.w #6,D0 */
    c->pc = RC_ADDR(0x0000e1f2u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 0, RC_W), RC_W));

L_E1F4:
    /* 0000e1f4   2  lsl.w #6,D0 */
    c->pc = RC_ADDR(0x0000e1f4u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 0, RC_W), RC_W));

L_E1F6:
    /* 0000e1f6   4  ori.w #dc0,D0 */
    c->pc = RC_ADDR(0x0000e1f6u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 | 0x00000dc0u;
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_E1FA:
    /* 0000e1fa   6  move.w D0,(00dff040).l */
    c->pc = RC_ADDR(0x0000e1fau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E200:
    /* 0000e200   8  move.w #0,(00dff046).l */
    c->pc = RC_ADDR(0x0000e200u);
    rc_step(c, m);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E208:
    /* 0000e208   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x0000e208u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E20E:
    /* 0000e20e   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x0000e20eu);
    rc_step(c, m);
    t4 = 0x00000006u;
    t3 = 0x00dff002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_E216:
    /* 0000e216   2  bne 0000e20e */
    c->pc = RC_ADDR(0x0000e216u);
    rc_step(c, m);
    if (rc_cond(c, 6)) { rc_tick(); goto L_E20E; }

L_E218:
    /* 0000e218   8  move.w #0,(00dff064).l */
    c->pc = RC_ADDR(0x0000e218u);
    rc_step(c, m);
    t0 = 0x00000000u;
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E220:
    /* 0000e220   6  move.w D3,(00dff062).l */
    c->pc = RC_ADDR(0x0000e220u);
    rc_step(c, m);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff062u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E226:
    /* 0000e226   6  move.w D6,(00dff066).l */
    c->pc = RC_ADDR(0x0000e226u);
    rc_step(c, m);
    t0 = rc_d_get(c, 6, RC_W);
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E22C:
    /* 0000e22c   4  and.w #f000,D0 */
    c->pc = RC_ADDR(0x0000e22cu);
    rc_step(c, m);
    t0 = 0x0000f000u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_E230:
    /* 0000e230   6  move.w D0,(00dff042).l */
    c->pc = RC_ADDR(0x0000e230u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff042u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E236:
    /* 0000e236   4  movea.l (474,A4),A3 */
    c->pc = RC_ADDR(0x0000e236u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x474u));
    c->a[3] = t0;

L_E23A:
    /* 0000e23a   2  adda.l D4,A3 */
    c->pc = RC_ADDR(0x0000e23au);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[3] += t0;

L_E23C:
    /* 0000e23c   4  lea (fffff326,A4),A1 */
    c->pc = RC_ADDR(0x0000e23cu);
    rc_step(c, m);
    c->a[1] = (c->a[4] - 0xcdau);

L_E240:
    /* 0000e240   8  move.w #ffff,(00dff046).l */
    c->pc = RC_ADDR(0x0000e240u);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E248:
    /* 0000e248   2  clr.l D0 */
    c->pc = RC_ADDR(0x0000e248u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_E24A:
    /* 0000e24a   4  move.b (5,A0),D0 */
    c->pc = RC_ADDR(0x0000e24au);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_E24E:
    /* 0000e24e   2  subq.b #1,D0 */
    c->pc = RC_ADDR(0x0000e24eu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_E250:
    /* 0000e250   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x0000e250u);
    rc_step(c, m);
    c->a[0] += 0x00000008u;

L_E252:
    /* 0000e252   4  move.l (18,A0),D6 */
    c->pc = RC_ADDR(0x0000e252u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x18u));
    rc_d_set(c, 6, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E256:
    /* 0000e256   4  move.w #b0a,D3 */
    c->pc = RC_ADDR(0x0000e256u);
    rc_step(c, m);
    t0 = 0x00000b0au;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E25A:
    /* 0000e25a   2  move.b D6,D5 */
    c->pc = RC_ADDR(0x0000e25au);
    rc_step(c, m);
    t0 = rc_d_get(c, 6, RC_B);
    rc_d_set(c, 5, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_E25C:
    /* 0000e25c   2  lsr.l #4,D6 */
    c->pc = RC_ADDR(0x0000e25cu);
    rc_step(c, m);
    rc_d_set(c, 6, RC_L, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 6, RC_L), RC_L));

L_E25E:
    /* 0000e25e   4  andi.b #f,D5 */
    c->pc = RC_ADDR(0x0000e25eu);
    rc_step(c, m);
    t1 = rc_d_get(c, 5, RC_B);
    t2 = t1 & 0x0000000fu;
    rc_d_set(c, 5, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_E262:
    /* 0000e262   4  cmpi.b #8,D5 */
    c->pc = RC_ADDR(0x0000e262u);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000008u);

L_E266:
    /* 0000e266   2  blt 0000e274 */
    c->pc = RC_ADDR(0x0000e266u);
    rc_step(c, m);
    if (rc_cond(c, 13)) goto L_E274;

L_E268:
    /* 0000e268   4  btst #0,D5 */
    c->pc = RC_ADDR(0x0000e268u);
    rc_step(c, m);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 5, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_E26C:
    /* 0000e26c   2  beq 0000e278 */
    c->pc = RC_ADDR(0x0000e26cu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_E278;

L_E26E:
    /* 0000e26e   4  move.w #bfa,D3 */
    c->pc = RC_ADDR(0x0000e26eu);
    rc_step(c, m);
    t0 = 0x00000bfau;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E272:
    /* 0000e272   2  bra 0000e278 */
    c->pc = RC_ADDR(0x0000e272u);
    rc_step(c, m);
    goto L_E278;

L_E274:
    /* 0000e274   4  move.w #fca,D3 */
    c->pc = RC_ADDR(0x0000e274u);
    rc_step(c, m);
    t0 = 0x00000fcau;
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E278:
    /* 0000e278   6  move.w D3,(00dff040).l */
    c->pc = RC_ADDR(0x0000e278u);
    rc_step(c, m);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E27E:
    /* 0000e27e   6  move.l A3,(00dff050).l */
    c->pc = RC_ADDR(0x0000e27eu);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E284:
    /* 0000e284   2  move.l (A0)+,D5 */
    c->pc = RC_ADDR(0x0000e284u);
    rc_step(c, m);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E286:
    /* 0000e286   2  bpl 0000e290 */
    c->pc = RC_ADDR(0x0000e286u);
    rc_step(c, m);
    if (rc_cond(c, 10)) goto L_E290;

L_E288:
    /* 0000e288   6  move.l A3,(00dff04c).l */
    c->pc = RC_ADDR(0x0000e288u);
    rc_step(c, m);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E28E:
    /* 0000e28e   2  bra 0000e298 */
    c->pc = RC_ADDR(0x0000e28eu);
    rc_step(c, m);
    goto L_E298;

L_E290:
    /* 0000e290   2  add.l D4,D5 */
    c->pc = RC_ADDR(0x0000e290u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_E292:
    /* 0000e292   6  move.l D5,(00dff04c).l */
    c->pc = RC_ADDR(0x0000e292u);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_L);
    rc_wr32(c, m, 0x00dff04cu, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E298:
    /* 0000e298   2  movea.l (A1)+,A2 */
    c->pc = RC_ADDR(0x0000e298u);
    rc_step(c, m);
    t3 = c->a[1];
    c->a[1] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_E29A:
    /* 0000e29a   2  adda.l D1,A2 */
    c->pc = RC_ADDR(0x0000e29au);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[2] += t0;

L_E29C:
    /* 0000e29c   6  move.l A2,(00dff048).l */
    c->pc = RC_ADDR(0x0000e29cu);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff048u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E2A2:
    /* 0000e2a2   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x0000e2a2u);
    rc_step(c, m);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_E2A8:
    /* 0000e2a8   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x0000e2a8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E2AE:
    /* 0000e2ae   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x0000e2aeu);
    rc_step(c, m);
    t4 = 0x00000006u;
    t3 = 0x00dff002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_E2B6:
    /* 0000e2b6   2  bne 0000e2ae */
    c->pc = RC_ADDR(0x0000e2b6u);
    rc_step(c, m);
    if (rc_cond(c, 6)) { rc_tick(); goto L_E2AE; }

L_E2B8:
    /* 0000e2b8   4  dbf D0,0000e256 */
    c->pc = RC_ADDR(0x0000e2b8u);
    rc_step(c, m);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_E256; }
    }

L_E2BC:
    /* 0000e2bc   2  unlk A5 */
    c->pc = RC_ADDR(0x0000e2bcu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_E2BE:
    /* 0000e2be   2  rts */
    c->pc = RC_ADDR(0x0000e2beu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
