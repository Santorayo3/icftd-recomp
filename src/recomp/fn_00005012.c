/* fn_00005012 - 184 byte(s), 49 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00005012(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case 0x00005012u: goto L_5012;
    case 0x00005016u: goto L_5016;
    case 0x0000501au: goto L_501A;
    case 0x0000501eu: goto L_501E;
    case 0x00005020u: goto L_5020;
    case 0x00005024u: goto L_5024;
    case 0x00005028u: goto L_5028;
    case 0x0000502au: goto L_502A;
    case 0x0000502eu: goto L_502E;
    case 0x00005032u: goto L_5032;
    case 0x00005034u: goto L_5034;
    case 0x00005038u: goto L_5038;
    case 0x0000503cu: goto L_503C;
    case 0x0000503eu: goto L_503E;
    case 0x00005046u: goto L_5046;
    case 0x0000504cu: goto L_504C;
    case 0x00005052u: goto L_5052;
    case 0x0000505au: goto L_505A;
    case 0x0000505eu: goto L_505E;
    case 0x00005060u: goto L_5060;
    case 0x00005062u: goto L_5062;
    case 0x00005064u: goto L_5064;
    case 0x00005068u: goto L_5068;
    case 0x0000506cu: goto L_506C;
    case 0x0000506eu: goto L_506E;
    case 0x00005072u: goto L_5072;
    case 0x00005074u: goto L_5074;
    case 0x00005076u: goto L_5076;
    case 0x00005078u: goto L_5078;
    case 0x0000507cu: goto L_507C;
    case 0x0000507eu: goto L_507E;
    case 0x00005082u: goto L_5082;
    case 0x00005084u: goto L_5084;
    case 0x00005088u: goto L_5088;
    case 0x0000508cu: goto L_508C;
    case 0x00005090u: goto L_5090;
    case 0x00005092u: goto L_5092;
    case 0x00005096u: goto L_5096;
    case 0x0000509au: goto L_509A;
    case 0x0000509eu: goto L_509E;
    case 0x000050a2u: goto L_50A2;
    case 0x000050a6u: goto L_50A6;
    case 0x000050a8u: goto L_50A8;
    case 0x000050aeu: goto L_50AE;
    case 0x000050b4u: goto L_50B4;
    case 0x000050bau: goto L_50BA;
    case 0x000050beu: goto L_50BE;
    case 0x000050c6u: goto L_50C6;
    case 0x000050c8u: goto L_50C8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5012:
    /* 00005012   4  link.w A5,#fffffff6 */
    c->pc = 0x00005012u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_5016:
    /* 00005016   4  move.l (8,A5),-(A7) */
    c->pc = 0x00005016u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_501A:
    /* 0000501a   4  jsr (00004f5c) */
    c->pc = 0x0000501au;
    rc_push32(c, m, 0x0000501eu);
    rc_depth++;
    c->pc = 0x00004f5cu;
    return;

L_501E:
    /* 0000501e   2  addq.w #4,A7 */
    c->pc = 0x0000501eu;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_5020:
    /* 00005020   4  move.w D0,(fffffffe,A5) */
    c->pc = 0x00005020u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5024:
    /* 00005024   4  move.w (fffffec2,A4),D0 */
    c->pc = 0x00005024u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x13eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5028:
    /* 00005028   2  ext.l D0 */
    c->pc = 0x00005028u;
    rc_ext_l(c, 0);

L_502A:
    /* 0000502a   4  move.l D0,(fffffffa,A5) */
    c->pc = 0x0000502au;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_502E:
    /* 0000502e   4  move.w (fffffec4,A4),D0 */
    c->pc = 0x0000502eu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x13cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5032:
    /* 00005032   2  ext.l D0 */
    c->pc = 0x00005032u;
    rc_ext_l(c, 0);

L_5034:
    /* 00005034   4  move.l D0,(fffffff6,A5) */
    c->pc = 0x00005034u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5038:
    /* 00005038   4  tst.w (c,A4) */
    c->pc = 0x00005038u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_503C:
    /* 0000503c   2  beq 0000505a */
    c->pc = 0x0000503cu;
    if (rc_cond(c, 7)) goto L_505A;

L_503E:
    /* 0000503e   8  move.l #12e,(1a,A4) */
    c->pc = 0x0000503eu;
    t0 = 0x0000012eu;
    rc_wr32(c, m, (c->a[4] + 0x1au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5046:
    /* 00005046   6  move.w #16,(fffffec2,A4) */
    c->pc = 0x00005046u;
    t0 = 0x00000016u;
    rc_wr16(c, m, (c->a[4] - 0x13eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_504C:
    /* 0000504c   6  move.w #127,(fffffec4,A4) */
    c->pc = 0x0000504cu;
    t0 = 0x00000127u;
    rc_wr16(c, m, (c->a[4] - 0x13cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5052:
    /* 00005052   8  move.l #f,(16,A4) */
    c->pc = 0x00005052u;
    t0 = 0x0000000fu;
    rc_wr32(c, m, (c->a[4] + 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_505A:
    /* 0000505a   4  move.w (ffffcb04,A4),D0 */
    c->pc = 0x0000505au;
    t0 = rc_rd16(c, m, (c->a[4] - 0x34fcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_505E:
    /* 0000505e   2  subq.w #1,D0 */
    c->pc = 0x0000505eu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_5060:
    /* 00005060   2  ext.l D0 */
    c->pc = 0x00005060u;
    rc_ext_l(c, 0);

L_5062:
    /* 00005062   2  move.l D0,-(A7) */
    c->pc = 0x00005062u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5064:
    /* 00005064   4  move.l (1a,A4),-(A7) */
    c->pc = 0x00005064u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x1au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5068:
    /* 00005068   4  move.w (ffffcb04,A4),D0 */
    c->pc = 0x00005068u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x34fcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_506C:
    /* 0000506c   2  subq.w #3,D0 */
    c->pc = 0x0000506cu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_506E:
    /* 0000506e   4  sub.w (fffffffe,A5),D0 */
    c->pc = 0x0000506eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_5072:
    /* 00005072   2  moveq #0,D1 */
    c->pc = 0x00005072u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_5074:
    /* 00005074   2  move.w D0,D1 */
    c->pc = 0x00005074u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5076:
    /* 00005076   2  move.l D1,-(A7) */
    c->pc = 0x00005076u;
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5078:
    /* 00005078   4  move.l (16,A4),-(A7) */
    c->pc = 0x00005078u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x16u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_507C:
    /* 0000507c   2  moveq #0,D0 */
    c->pc = 0x0000507cu;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_507E:
    /* 0000507e   4  move.w (c,A5),D0 */
    c->pc = 0x0000507eu;
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5082:
    /* 00005082   2  move.l D0,-(A7) */
    c->pc = 0x00005082u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5084:
    /* 00005084   4  jsr (00004f9e) */
    c->pc = 0x00005084u;
    rc_push32(c, m, 0x00005088u);
    rc_depth++;
    c->pc = 0x00004f9eu;
    return;

L_5088:
    /* 00005088   4  lea (14,A7),A7 */
    c->pc = 0x00005088u;
    c->a[7] = (c->a[7] + 0x14u);

L_508C:
    /* 0000508c   4  move.w (ffffcb04,A4),D0 */
    c->pc = 0x0000508cu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x34fcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5090:
    /* 00005090   2  addq.w #6,D0 */
    c->pc = 0x00005090u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000006u;
    rc_flags_add(c, RC_W, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_5092:
    /* 00005092   4  sub.w (fffffffe,A5),D0 */
    c->pc = 0x00005092u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_5096:
    /* 00005096   4  move.w D0,(fffff272,A4) */
    c->pc = 0x00005096u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd8eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_509A:
    /* 0000509a   4  move.w (c,A5),-(A7) */
    c->pc = 0x0000509au;
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_509E:
    /* 0000509e   4  move.l (8,A5),-(A7) */
    c->pc = 0x0000509eu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_50A2:
    /* 000050a2   4  jsr (00004f0a) */
    c->pc = 0x000050a2u;
    rc_push32(c, m, 0x000050a6u);
    rc_depth++;
    c->pc = 0x00004f0au;
    return;

L_50A6:
    /* 000050a6   2  addq.w #6,A7 */
    c->pc = 0x000050a6u;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_50A8:
    /* 000050a8   6  move.w (fffffffc,A5),(fffffec2,A4) */
    c->pc = 0x000050a8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_wr16(c, m, (c->a[4] - 0x13eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_50AE:
    /* 000050ae   6  move.w (fffffff8,A5),(fffffec4,A4) */
    c->pc = 0x000050aeu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_wr16(c, m, (c->a[4] - 0x13cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_50B4:
    /* 000050b4   6  move.l (8,A5),(fffff278,A4) */
    c->pc = 0x000050b4u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0xd88u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_50BA:
    /* 000050ba   4  clr.l (16,A4) */
    c->pc = 0x000050bau;
    rc_wr32(c, m, (c->a[4] + 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_50BE:
    /* 000050be   8  move.l #13f,(1a,A4) */
    c->pc = 0x000050beu;
    t0 = 0x0000013fu;
    rc_wr32(c, m, (c->a[4] + 0x1au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_50C6:
    /* 000050c6   2  unlk A5 */
    c->pc = 0x000050c6u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_50C8:
    /* 000050c8   2  rts */
    c->pc = 0x000050c8u;
    rc_ret(c, m);
    return;

}
