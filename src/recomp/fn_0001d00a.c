/* fn_0001d00a - 370 byte(s), 111 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d00a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d00au): goto L_1D00A;
    case RC_ADDR(0x0001d00eu): goto L_1D00E;
    case RC_ADDR(0x0001d012u): goto L_1D012;
    case RC_ADDR(0x0001d014u): goto L_1D014;
    case RC_ADDR(0x0001d018u): goto L_1D018;
    case RC_ADDR(0x0001d01au): goto L_1D01A;
    case RC_ADDR(0x0001d01eu): goto L_1D01E;
    case RC_ADDR(0x0001d020u): goto L_1D020;
    case RC_ADDR(0x0001d024u): goto L_1D024;
    case RC_ADDR(0x0001d028u): goto L_1D028;
    case RC_ADDR(0x0001d02au): goto L_1D02A;
    case RC_ADDR(0x0001d02eu): goto L_1D02E;
    case RC_ADDR(0x0001d030u): goto L_1D030;
    case RC_ADDR(0x0001d032u): goto L_1D032;
    case RC_ADDR(0x0001d034u): goto L_1D034;
    case RC_ADDR(0x0001d038u): goto L_1D038;
    case RC_ADDR(0x0001d03cu): goto L_1D03C;
    case RC_ADDR(0x0001d040u): goto L_1D040;
    case RC_ADDR(0x0001d044u): goto L_1D044;
    case RC_ADDR(0x0001d048u): goto L_1D048;
    case RC_ADDR(0x0001d04cu): goto L_1D04C;
    case RC_ADDR(0x0001d050u): goto L_1D050;
    case RC_ADDR(0x0001d052u): goto L_1D052;
    case RC_ADDR(0x0001d056u): goto L_1D056;
    case RC_ADDR(0x0001d058u): goto L_1D058;
    case RC_ADDR(0x0001d05au): goto L_1D05A;
    case RC_ADDR(0x0001d05cu): goto L_1D05C;
    case RC_ADDR(0x0001d05eu): goto L_1D05E;
    case RC_ADDR(0x0001d062u): goto L_1D062;
    case RC_ADDR(0x0001d064u): goto L_1D064;
    case RC_ADDR(0x0001d066u): goto L_1D066;
    case RC_ADDR(0x0001d06au): goto L_1D06A;
    case RC_ADDR(0x0001d06cu): goto L_1D06C;
    case RC_ADDR(0x0001d06eu): goto L_1D06E;
    case RC_ADDR(0x0001d072u): goto L_1D072;
    case RC_ADDR(0x0001d074u): goto L_1D074;
    case RC_ADDR(0x0001d078u): goto L_1D078;
    case RC_ADDR(0x0001d07cu): goto L_1D07C;
    case RC_ADDR(0x0001d080u): goto L_1D080;
    case RC_ADDR(0x0001d082u): goto L_1D082;
    case RC_ADDR(0x0001d086u): goto L_1D086;
    case RC_ADDR(0x0001d088u): goto L_1D088;
    case RC_ADDR(0x0001d08au): goto L_1D08A;
    case RC_ADDR(0x0001d08eu): goto L_1D08E;
    case RC_ADDR(0x0001d090u): goto L_1D090;
    case RC_ADDR(0x0001d092u): goto L_1D092;
    case RC_ADDR(0x0001d096u): goto L_1D096;
    case RC_ADDR(0x0001d098u): goto L_1D098;
    case RC_ADDR(0x0001d09cu): goto L_1D09C;
    case RC_ADDR(0x0001d0a0u): goto L_1D0A0;
    case RC_ADDR(0x0001d0a4u): goto L_1D0A4;
    case RC_ADDR(0x0001d0a8u): goto L_1D0A8;
    case RC_ADDR(0x0001d0aau): goto L_1D0AA;
    case RC_ADDR(0x0001d0aeu): goto L_1D0AE;
    case RC_ADDR(0x0001d0b0u): goto L_1D0B0;
    case RC_ADDR(0x0001d0b4u): goto L_1D0B4;
    case RC_ADDR(0x0001d0b8u): goto L_1D0B8;
    case RC_ADDR(0x0001d0bcu): goto L_1D0BC;
    case RC_ADDR(0x0001d0beu): goto L_1D0BE;
    case RC_ADDR(0x0001d0c0u): goto L_1D0C0;
    case RC_ADDR(0x0001d0c2u): goto L_1D0C2;
    case RC_ADDR(0x0001d0c8u): goto L_1D0C8;
    case RC_ADDR(0x0001d0ceu): goto L_1D0CE;
    case RC_ADDR(0x0001d0d2u): goto L_1D0D2;
    case RC_ADDR(0x0001d0d6u): goto L_1D0D6;
    case RC_ADDR(0x0001d0dau): goto L_1D0DA;
    case RC_ADDR(0x0001d0deu): goto L_1D0DE;
    case RC_ADDR(0x0001d0e2u): goto L_1D0E2;
    case RC_ADDR(0x0001d0e6u): goto L_1D0E6;
    case RC_ADDR(0x0001d0eau): goto L_1D0EA;
    case RC_ADDR(0x0001d0eeu): goto L_1D0EE;
    case RC_ADDR(0x0001d0f2u): goto L_1D0F2;
    case RC_ADDR(0x0001d0f6u): goto L_1D0F6;
    case RC_ADDR(0x0001d0fau): goto L_1D0FA;
    case RC_ADDR(0x0001d0feu): goto L_1D0FE;
    case RC_ADDR(0x0001d102u): goto L_1D102;
    case RC_ADDR(0x0001d106u): goto L_1D106;
    case RC_ADDR(0x0001d10au): goto L_1D10A;
    case RC_ADDR(0x0001d10cu): goto L_1D10C;
    case RC_ADDR(0x0001d110u): goto L_1D110;
    case RC_ADDR(0x0001d112u): goto L_1D112;
    case RC_ADDR(0x0001d116u): goto L_1D116;
    case RC_ADDR(0x0001d11au): goto L_1D11A;
    case RC_ADDR(0x0001d11eu): goto L_1D11E;
    case RC_ADDR(0x0001d120u): goto L_1D120;
    case RC_ADDR(0x0001d122u): goto L_1D122;
    case RC_ADDR(0x0001d126u): goto L_1D126;
    case RC_ADDR(0x0001d128u): goto L_1D128;
    case RC_ADDR(0x0001d12cu): goto L_1D12C;
    case RC_ADDR(0x0001d130u): goto L_1D130;
    case RC_ADDR(0x0001d132u): goto L_1D132;
    case RC_ADDR(0x0001d136u): goto L_1D136;
    case RC_ADDR(0x0001d13au): goto L_1D13A;
    case RC_ADDR(0x0001d13cu): goto L_1D13C;
    case RC_ADDR(0x0001d140u): goto L_1D140;
    case RC_ADDR(0x0001d144u): goto L_1D144;
    case RC_ADDR(0x0001d148u): goto L_1D148;
    case RC_ADDR(0x0001d14au): goto L_1D14A;
    case RC_ADDR(0x0001d14cu): goto L_1D14C;
    case RC_ADDR(0x0001d150u): goto L_1D150;
    case RC_ADDR(0x0001d154u): goto L_1D154;
    case RC_ADDR(0x0001d158u): goto L_1D158;
    case RC_ADDR(0x0001d15au): goto L_1D15A;
    case RC_ADDR(0x0001d160u): goto L_1D160;
    case RC_ADDR(0x0001d164u): goto L_1D164;
    case RC_ADDR(0x0001d168u): goto L_1D168;
    case RC_ADDR(0x0001d16cu): goto L_1D16C;
    case RC_ADDR(0x0001d16eu): goto L_1D16E;
    case RC_ADDR(0x0001d172u): goto L_1D172;
    case RC_ADDR(0x0001d176u): goto L_1D176;
    case RC_ADDR(0x0001d178u): goto L_1D178;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D00A:
    /* 0001d00a   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001d00au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1D00E:
    /* 0001d00e   4  tst.w (ffffcb00,A4) */
    c->pc = RC_ADDR(0x0001d00eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3500u));
    rc_set_nzvc(c, t0, RC_W);

L_1D012:
    /* 0001d012   2  beq 0001d05c */
    c->pc = RC_ADDR(0x0001d012u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D05C;

L_1D014:
    /* 0001d014   4  tst.w (ffffcb0a,A4) */
    c->pc = RC_ADDR(0x0001d014u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34f6u));
    rc_set_nzvc(c, t0, RC_W);

L_1D018:
    /* 0001d018   2  bne 0001d052 */
    c->pc = RC_ADDR(0x0001d018u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D052;

L_1D01A:
    /* 0001d01a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001d01au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D01E:
    /* 0001d01e   2  bra 0001d048 */
    c->pc = RC_ADDR(0x0001d01eu);
    rc_step(c, m, 10);
    goto L_1D048;

L_1D020:
    /* 0001d020   4  pea (00000003).l */
    c->pc = RC_ADDR(0x0001d020u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000003u);

L_1D024:
    /* 0001d024   4  movea.l (ffffcbbc,A4),A0 */
    c->pc = RC_ADDR(0x0001d024u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[0] = t0;

L_1D028:
    /* 0001d028   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x0001d028u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D02A:
    /* 0001d02a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001d02au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D02E:
    /* 0001d02e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001d02eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1D030:
    /* 0001d030   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001d030u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1D032:
    /* 0001d032   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001d032u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1D034:
    /* 0001d034   4  adda.l (ffffcbbc,A4),A0 */
    c->pc = RC_ADDR(0x0001d034u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[0] += t0;

L_1D038:
    /* 0001d038   4  move.l (8,A0),-(A7) */
    c->pc = RC_ADDR(0x0001d038u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D03C:
    /* 0001d03c   4  jsr (000217a6) */
    c->pc = RC_ADDR(0x0001d03cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d040u));
    rc_depth++;
    c->pc = RC_ADDR(0x000217a6u);
    return;

L_1D040:
    /* 0001d040   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001d040u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1D044:
    /* 0001d044   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001d044u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D048:
    /* 0001d048   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001d048u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D04C:
    /* 0001d04c   4  cmp.w (ffffcb06,A4),D0 */
    c->pc = RC_ADDR(0x0001d04cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34fau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1D050:
    /* 0001d050   2  bcs 0001d020 */
    c->pc = RC_ADDR(0x0001d050u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1D020; }

L_1D052:
    /* 0001d052   4  addq.w #1,(ffffcb00,A4) */
    c->pc = RC_ADDR(0x0001d052u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x3500u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D056:
    /* 0001d056   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001d056u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D058:
    /* 0001d058   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d058u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D05A:
    /* 0001d05a   2  rts */
    c->pc = RC_ADDR(0x0001d05au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1D05C:
    /* 0001d05c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d05cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D05E:
    /* 0001d05e   4  move.w (ffffcb04,A4),D0 */
    c->pc = RC_ADDR(0x0001d05eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34fcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D062:
    /* 0001d062   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001d062u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D064:
    /* 0001d064   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d064u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D066:
    /* 0001d066   4  move.w (ffffcb02,A4),D0 */
    c->pc = RC_ADDR(0x0001d066u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34feu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D06A:
    /* 0001d06a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001d06au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D06C:
    /* 0001d06c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d06cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D06E:
    /* 0001d06e   4  move.w (ffffcb06,A4),D0 */
    c->pc = RC_ADDR(0x0001d06eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34fau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D072:
    /* 0001d072   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001d072u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D074:
    /* 0001d074   4  jsr (0001d3b8) */
    c->pc = RC_ADDR(0x0001d074u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d078u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d3b8u);
    return;

L_1D078:
    /* 0001d078   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001d078u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1D07C:
    /* 0001d07c   4  move.l D0,(ffffcbb8,A4) */
    c->pc = RC_ADDR(0x0001d07cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x3448u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D080:
    /* 0001d080   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d080u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D082:
    /* 0001d082   4  move.w (ffffcb04,A4),D0 */
    c->pc = RC_ADDR(0x0001d082u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34fcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D086:
    /* 0001d086   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001d086u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D088:
    /* 0001d088   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d088u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D08A:
    /* 0001d08a   4  move.w (ffffcb02,A4),D0 */
    c->pc = RC_ADDR(0x0001d08au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34feu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D08E:
    /* 0001d08e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001d08eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D090:
    /* 0001d090   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d090u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D092:
    /* 0001d092   4  move.w (ffffcb06,A4),D0 */
    c->pc = RC_ADDR(0x0001d092u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34fau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D096:
    /* 0001d096   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001d096u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D098:
    /* 0001d098   4  jsr (0001d3b8) */
    c->pc = RC_ADDR(0x0001d098u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d09cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d3b8u);
    return;

L_1D09C:
    /* 0001d09c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001d09cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1D0A0:
    /* 0001d0a0   4  move.l D0,(ffffcbbc,A4) */
    c->pc = RC_ADDR(0x0001d0a0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x3444u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D0A4:
    /* 0001d0a4   4  tst.l (ffffcbb8,A4) */
    c->pc = RC_ADDR(0x0001d0a4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    rc_set_nzvc(c, t0, RC_L);

L_1D0A8:
    /* 0001d0a8   2  beq 0001d0b0 */
    c->pc = RC_ADDR(0x0001d0a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D0B0;

L_1D0AA:
    /* 0001d0aa   4  tst.l (ffffcbbc,A4) */
    c->pc = RC_ADDR(0x0001d0aau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    rc_set_nzvc(c, t0, RC_L);

L_1D0AE:
    /* 0001d0ae   2  bne 0001d0c2 */
    c->pc = RC_ADDR(0x0001d0aeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D0C2;

L_1D0B0:
    /* 0001d0b0   4  jsr (0001d250) */
    c->pc = RC_ADDR(0x0001d0b0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d0b4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d250u);
    return;

L_1D0B4:
    /* 0001d0b4   4  pea (0001d17c) */
    c->pc = RC_ADDR(0x0001d0b4u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d17cu));

L_1D0B8:
    /* 0001d0b8   4  jsr (000201d4) */
    c->pc = RC_ADDR(0x0001d0b8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d0bcu));
    rc_depth++;
    c->pc = RC_ADDR(0x000201d4u);
    return;

L_1D0BC:
    /* 0001d0bc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d0bcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D0BE:
    /* 0001d0be   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d0beu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D0C0:
    /* 0001d0c0   2  bra 0001d058 */
    c->pc = RC_ADDR(0x0001d0c0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D058;

L_1D0C2:
    /* 0001d0c2   6  move.w #140,(ffffcb02,A4) */
    c->pc = RC_ADDR(0x0001d0c2u);
    rc_step(c, m, 16);
    t0 = 0x00000140u;
    rc_wr16(c, m, (c->a[4] - 0x34feu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D0C8:
    /* 0001d0c8   6  move.w #c8,(ffffcb04,A4) */
    c->pc = RC_ADDR(0x0001d0c8u);
    rc_step(c, m, 16);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0x34fcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D0CE:
    /* 0001d0ce   4  move.w (ffffcb08,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d0ceu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34f8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D0D2:
    /* 0001d0d2   4  move.w (ffffcb04,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d0d2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34fcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D0D6:
    /* 0001d0d6   4  move.w (ffffcb02,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d0d6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34feu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D0DA:
    /* 0001d0da   4  move.l (ffffcbb8,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d0dau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3448u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D0DE:
    /* 0001d0de   4  jsr (0001faec) */
    c->pc = RC_ADDR(0x0001d0deu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d0e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001faecu);
    return;

L_1D0E2:
    /* 0001d0e2   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001d0e2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1D0E6:
    /* 0001d0e6   4  move.l D0,(ffffcb0c,A4) */
    c->pc = RC_ADDR(0x0001d0e6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x34f4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D0EA:
    /* 0001d0ea   4  move.w (ffffcb08,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d0eau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34f8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D0EE:
    /* 0001d0ee   4  move.w (ffffcb04,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d0eeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34fcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D0F2:
    /* 0001d0f2   4  move.w (ffffcb02,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d0f2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34feu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D0F6:
    /* 0001d0f6   4  move.l (ffffcbbc,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d0f6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D0FA:
    /* 0001d0fa   4  jsr (0001faec) */
    c->pc = RC_ADDR(0x0001d0fau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d0feu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001faecu);
    return;

L_1D0FE:
    /* 0001d0fe   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001d0feu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1D102:
    /* 0001d102   4  move.l D0,(ffffcb10,A4) */
    c->pc = RC_ADDR(0x0001d102u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x34f0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D106:
    /* 0001d106   4  tst.l (ffffcb0c,A4) */
    c->pc = RC_ADDR(0x0001d106u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f4u));
    rc_set_nzvc(c, t0, RC_L);

L_1D10A:
    /* 0001d10a   2  beq 0001d112 */
    c->pc = RC_ADDR(0x0001d10au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D112;

L_1D10C:
    /* 0001d10c   4  tst.l (ffffcb10,A4) */
    c->pc = RC_ADDR(0x0001d10cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f0u));
    rc_set_nzvc(c, t0, RC_L);

L_1D110:
    /* 0001d110   2  bne 0001d126 */
    c->pc = RC_ADDR(0x0001d110u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D126;

L_1D112:
    /* 0001d112   4  jsr (0001d250) */
    c->pc = RC_ADDR(0x0001d112u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d116u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d250u);
    return;

L_1D116:
    /* 0001d116   4  pea (0001d19e) */
    c->pc = RC_ADDR(0x0001d116u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d19eu));

L_1D11A:
    /* 0001d11a   4  jsr (000201d4) */
    c->pc = RC_ADDR(0x0001d11au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d11eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000201d4u);
    return;

L_1D11E:
    /* 0001d11e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d11eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D120:
    /* 0001d120   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d120u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D122:
    /* 0001d122   4  bra 0001d058 */
    c->pc = RC_ADDR(0x0001d122u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D058;

L_1D126:
    /* 0001d126   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001d126u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D128:
    /* 0001d128   4  pea (00000064).l */
    c->pc = RC_ADDR(0x0001d128u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000064u);

L_1D12C:
    /* 0001d12c   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0001d12cu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0001d130u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_1D130:
    /* 0001d130   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001d130u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1D132:
    /* 0001d132   4  move.l D0,(ffffcb14,A4) */
    c->pc = RC_ADDR(0x0001d132u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x34ecu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D136:
    /* 0001d136   4  tst.l (ffffcb14,A4) */
    c->pc = RC_ADDR(0x0001d136u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    rc_set_nzvc(c, t0, RC_L);

L_1D13A:
    /* 0001d13a   2  bne 0001d150 */
    c->pc = RC_ADDR(0x0001d13au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D150;

L_1D13C:
    /* 0001d13c   4  jsr (0001d250) */
    c->pc = RC_ADDR(0x0001d13cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d140u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d250u);
    return;

L_1D140:
    /* 0001d140   4  pea (0001d1ba) */
    c->pc = RC_ADDR(0x0001d140u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d1bau));

L_1D144:
    /* 0001d144   4  jsr (000201d4) */
    c->pc = RC_ADDR(0x0001d144u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d148u));
    rc_depth++;
    c->pc = RC_ADDR(0x000201d4u);
    return;

L_1D148:
    /* 0001d148   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d148u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D14A:
    /* 0001d14a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001d14au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D14C:
    /* 0001d14c   4  bra 0001d058 */
    c->pc = RC_ADDR(0x0001d14cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D058;

L_1D150:
    /* 0001d150   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d150u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D154:
    /* 0001d154   4  jsr (ffff836e,A4) */
    c->pc = RC_ADDR(0x0001d154u);
    rc_step(c, m, 18);
    /* vector 146 */
    rc_push32(c, m, RC_ADDR(0x0001d158u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021862u);
    return;

L_1D158:
    /* 0001d158   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d158u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D15A:
    /* 0001d15a   6  move.w #1,(ffffcb2a,A4) */
    c->pc = RC_ADDR(0x0001d15au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x34d6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D160:
    /* 0001d160   4  clr.w (ffffcb2c,A4) */
    c->pc = RC_ADDR(0x0001d160u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x34d4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D164:
    /* 0001d164   4  move.l (ffffcb0c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001d164u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D168:
    /* 0001d168   4  jsr (ffff8374,A4) */
    c->pc = RC_ADDR(0x0001d168u);
    rc_step(c, m, 18);
    /* vector 147 */
    rc_push32(c, m, RC_ADDR(0x0001d16cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021898u);
    return;

L_1D16C:
    /* 0001d16c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d16cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D16E:
    /* 0001d16e   4  jsr (0001d7a0) */
    c->pc = RC_ADDR(0x0001d16eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d172u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d7a0u);
    return;

L_1D172:
    /* 0001d172   4  addq.w #1,(ffffcb00,A4) */
    c->pc = RC_ADDR(0x0001d172u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x3500u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1D176:
    /* 0001d176   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001d176u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D178:
    /* 0001d178   4  bra 0001d058 */
    c->pc = RC_ADDR(0x0001d178u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D058;

}
