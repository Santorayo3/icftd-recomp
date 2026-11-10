/* fn_00014210 - 218 byte(s), 57 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00014210(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case 0x00014210u: goto L_14210;
    case 0x00014214u: goto L_14214;
    case 0x0001421au: goto L_1421A;
    case 0x00014220u: goto L_14220;
    case 0x00014226u: goto L_14226;
    case 0x0001422au: goto L_1422A;
    case 0x0001422cu: goto L_1422C;
    case 0x00014230u: goto L_14230;
    case 0x00014234u: goto L_14234;
    case 0x00014238u: goto L_14238;
    case 0x0001423cu: goto L_1423C;
    case 0x00014240u: goto L_14240;
    case 0x00014244u: goto L_14244;
    case 0x00014246u: goto L_14246;
    case 0x00014248u: goto L_14248;
    case 0x0001424au: goto L_1424A;
    case 0x0001424eu: goto L_1424E;
    case 0x00014252u: goto L_14252;
    case 0x00014256u: goto L_14256;
    case 0x0001425au: goto L_1425A;
    case 0x0001425cu: goto L_1425C;
    case 0x0001425eu: goto L_1425E;
    case 0x00014260u: goto L_14260;
    case 0x00014264u: goto L_14264;
    case 0x00014266u: goto L_14266;
    case 0x0001426au: goto L_1426A;
    case 0x0001426eu: goto L_1426E;
    case 0x00014272u: goto L_14272;
    case 0x00014276u: goto L_14276;
    case 0x00014278u: goto L_14278;
    case 0x0001427eu: goto L_1427E;
    case 0x00014280u: goto L_14280;
    case 0x00014286u: goto L_14286;
    case 0x00014288u: goto L_14288;
    case 0x0001428eu: goto L_1428E;
    case 0x00014290u: goto L_14290;
    case 0x00014296u: goto L_14296;
    case 0x00014298u: goto L_14298;
    case 0x0001429eu: goto L_1429E;
    case 0x000142a2u: goto L_142A2;
    case 0x000142a4u: goto L_142A4;
    case 0x000142a6u: goto L_142A6;
    case 0x000142a8u: goto L_142A8;
    case 0x000142acu: goto L_142AC;
    case 0x000142aeu: goto L_142AE;
    case 0x000142b2u: goto L_142B2;
    case 0x000142b4u: goto L_142B4;
    case 0x000142bau: goto L_142BA;
    case 0x000142c0u: goto L_142C0;
    case 0x000142c6u: goto L_142C6;
    case 0x000142cau: goto L_142CA;
    case 0x000142ccu: goto L_142CC;
    case 0x000142d2u: goto L_142D2;
    case 0x000142d8u: goto L_142D8;
    case 0x000142deu: goto L_142DE;
    case 0x000142e4u: goto L_142E4;
    case 0x000142e8u: goto L_142E8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14210:
    /* 00014210   4  link.w A5,#0 */
    c->pc = 0x00014210u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_14214:
    /* 00014214   6  move.w #1,(e4c,A4) */
    c->pc = 0x00014214u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe4cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1421A:
    /* 0001421a   6  move.w #1,(fffffd84,A4) */
    c->pc = 0x0001421au;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x27cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14220:
    /* 00014220   6  move.w #1,(af8,A4) */
    c->pc = 0x00014220u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xaf8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14226:
    /* 00014226   4  move.w (fffffd98,A4),D0 */
    c->pc = 0x00014226u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1422A:
    /* 0001422a   2  lsr.w #4,D0 */
    c->pc = 0x0001422au;
    c->d[0] = rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W);

L_1422C:
    /* 0001422c   4  add.w (74e,A4),D0 */
    c->pc = 0x0001422cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x74eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14230:
    /* 00014230   4  move.w D0,(10d6,A4) */
    c->pc = 0x00014230u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x10d6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14234:
    /* 00014234   4  move.w (fffffd98,A4),D0 */
    c->pc = 0x00014234u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14238:
    /* 00014238   4  and.w #f,D0 */
    c->pc = 0x00014238u;
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1423C:
    /* 0001423c   4  move.w D0,(10da,A4) */
    c->pc = 0x0001423cu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x10dau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14240:
    /* 00014240   4  move.w (fffffd9a,A4),D0 */
    c->pc = 0x00014240u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14244:
    /* 00014244   2  swap D0 */
    c->pc = 0x00014244u;
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_14246:
    /* 00014246   2  clr.w D0 */
    c->pc = 0x00014246u;
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14248:
    /* 00014248   2  swap D0 */
    c->pc = 0x00014248u;
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1424A:
    /* 0001424a   4  divu.w #a,D0 */
    c->pc = 0x0001424au;
    t0 = 0x0000000au;
    rc_divu(c, m, 0, t0);

L_1424E:
    /* 0001424e   4  add.w (750,A4),D0 */
    c->pc = 0x0001424eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x750u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_14252:
    /* 00014252   4  move.w D0,(10d8,A4) */
    c->pc = 0x00014252u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x10d8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14256:
    /* 00014256   4  move.w (fffffd9a,A4),D0 */
    c->pc = 0x00014256u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1425A:
    /* 0001425a   2  swap D0 */
    c->pc = 0x0001425au;
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1425C:
    /* 0001425c   2  clr.w D0 */
    c->pc = 0x0001425cu;
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1425E:
    /* 0001425e   2  swap D0 */
    c->pc = 0x0001425eu;
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_14260:
    /* 00014260   4  divu.w #a,D0 */
    c->pc = 0x00014260u;
    t0 = 0x0000000au;
    rc_divu(c, m, 0, t0);

L_14264:
    /* 00014264   2  swap D0 */
    c->pc = 0x00014264u;
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_14266:
    /* 00014266   4  move.w D0,(10dc,A4) */
    c->pc = 0x00014266u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x10dcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1426A:
    /* 0001426a   4  jsr (00016946) */
    c->pc = 0x0001426au;
    rc_push32(c, m, 0x0001426eu);
    rc_depth++;
    c->pc = 0x00016946u;
    return;

L_1426E:
    /* 0001426e   4  move.w #2,-(A7) */
    c->pc = 0x0001426eu;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14272:
    /* 00014272   4  jsr (ffff80c2,A4) */
    c->pc = 0x00014272u;
    /* vector 32 */
    rc_push32(c, m, 0x00014276u);
    rc_depth++;
    c->pc = 0x00009bcau;
    return;

L_14276:
    /* 00014276   2  addq.w #2,A7 */
    c->pc = 0x00014276u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_14278:
    /* 00014278   6  cmpi.w #2bca,(fffffd8a,A4) */
    c->pc = 0x00014278u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x276u));
    rc_cmp(c, RC_W, t0, 0x00002bcau);

L_1427E:
    /* 0001427e   2  bls 0001429e */
    c->pc = 0x0001427eu;
    if (rc_cond(c, 3)) goto L_1429E;

L_14280:
    /* 00014280   6  cmpi.w #2e4a,(fffffd8a,A4) */
    c->pc = 0x00014280u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x276u));
    rc_cmp(c, RC_W, t0, 0x00002e4au);

L_14286:
    /* 00014286   2  bcc 0001429e */
    c->pc = 0x00014286u;
    if (rc_cond(c, 4)) goto L_1429E;

L_14288:
    /* 00014288   6  cmpi.w #1446,(fffffd8c,A4) */
    c->pc = 0x00014288u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x274u));
    rc_cmp(c, RC_W, t0, 0x00001446u);

L_1428E:
    /* 0001428e   2  bls 0001429e */
    c->pc = 0x0001428eu;
    if (rc_cond(c, 3)) goto L_1429E;

L_14290:
    /* 00014290   6  cmpi.w #1766,(fffffd8c,A4) */
    c->pc = 0x00014290u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x274u));
    rc_cmp(c, RC_W, t0, 0x00001766u);

L_14296:
    /* 00014296   2  bcc 0001429e */
    c->pc = 0x00014296u;
    if (rc_cond(c, 4)) goto L_1429E;

L_14298:
    /* 00014298   6  move.w #1,(114a,A4) */
    c->pc = 0x00014298u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x114au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1429E:
    /* 0001429e   4  tst.w (10e2,A4) */
    c->pc = 0x0001429eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x10e2u));
    rc_set_nzvc(c, t0, RC_W);

L_142A2:
    /* 000142a2   2  beq 000142a8 */
    c->pc = 0x000142a2u;
    if (rc_cond(c, 7)) goto L_142A8;

L_142A4:
    /* 000142a4   2  unlk A5 */
    c->pc = 0x000142a4u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_142A6:
    /* 000142a6   2  rts */
    c->pc = 0x000142a6u;
    rc_ret(c, m);
    return;

L_142A8:
    /* 000142a8   4  tst.w (114a,A4) */
    c->pc = 0x000142a8u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x114au));
    rc_set_nzvc(c, t0, RC_W);

L_142AC:
    /* 000142ac   2  beq 000142c6 */
    c->pc = 0x000142acu;
    if (rc_cond(c, 7)) goto L_142C6;

L_142AE:
    /* 000142ae   4  tst.w (114c,A4) */
    c->pc = 0x000142aeu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x114cu));
    rc_set_nzvc(c, t0, RC_W);

L_142B2:
    /* 000142b2   2  beq 000142c6 */
    c->pc = 0x000142b2u;
    if (rc_cond(c, 7)) goto L_142C6;

L_142B4:
    /* 000142b4   6  move.w #1,(1146,A4) */
    c->pc = 0x000142b4u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1146u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_142BA:
    /* 000142ba   6  move.w #1,(aee,A4) */
    c->pc = 0x000142bau;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xaeeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_142C0:
    /* 000142c0   6  move.w #1,(fffffec8,A4) */
    c->pc = 0x000142c0u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x138u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_142C6:
    /* 000142c6   4  tst.w (1132,A4) */
    c->pc = 0x000142c6u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1132u));
    rc_set_nzvc(c, t0, RC_W);

L_142CA:
    /* 000142ca   2  bne 000142d8 */
    c->pc = 0x000142cau;
    if (rc_cond(c, 6)) goto L_142D8;

L_142CC:
    /* 000142cc   6  move.w #1,(aee,A4) */
    c->pc = 0x000142ccu;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xaeeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_142D2:
    /* 000142d2   6  move.w #1,(1148,A4) */
    c->pc = 0x000142d2u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1148u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_142D8:
    /* 000142d8   6  move.w (fffffd8a,A4),(fffffd8e,A4) */
    c->pc = 0x000142d8u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x276u));
    rc_wr16(c, m, (c->a[4] - 0x272u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_142DE:
    /* 000142de   6  move.w (fffffd8c,A4),(fffffd90,A4) */
    c->pc = 0x000142deu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x274u));
    rc_wr16(c, m, (c->a[4] - 0x270u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_142E4:
    /* 000142e4   4  clr.w (af6,A4) */
    c->pc = 0x000142e4u;
    rc_wr16(c, m, (c->a[4] + 0xaf6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_142E8:
    /* 000142e8   2  bra 000142a4 */
    c->pc = 0x000142e8u;
    rc_tick();
    goto L_142A4;

}
