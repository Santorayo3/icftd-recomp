/* fn_0001200c - 168 byte(s), 49 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001200c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0001200cu: goto L_1200C;
    case 0x00012010u: goto L_12010;
    case 0x00012014u: goto L_12014;
    case 0x00012016u: goto L_12016;
    case 0x0001201au: goto L_1201A;
    case 0x0001201cu: goto L_1201C;
    case 0x00012020u: goto L_12020;
    case 0x00012022u: goto L_12022;
    case 0x00012026u: goto L_12026;
    case 0x00012028u: goto L_12028;
    case 0x0001202cu: goto L_1202C;
    case 0x00012030u: goto L_12030;
    case 0x00012036u: goto L_12036;
    case 0x0001203au: goto L_1203A;
    case 0x0001203cu: goto L_1203C;
    case 0x00012040u: goto L_12040;
    case 0x00012042u: goto L_12042;
    case 0x00012046u: goto L_12046;
    case 0x00012048u: goto L_12048;
    case 0x0001204cu: goto L_1204C;
    case 0x0001204eu: goto L_1204E;
    case 0x00012052u: goto L_12052;
    case 0x00012056u: goto L_12056;
    case 0x0001205cu: goto L_1205C;
    case 0x00012060u: goto L_12060;
    case 0x00012064u: goto L_12064;
    case 0x0001206au: goto L_1206A;
    case 0x0001206cu: goto L_1206C;
    case 0x00012070u: goto L_12070;
    case 0x00012074u: goto L_12074;
    case 0x0001207au: goto L_1207A;
    case 0x0001207eu: goto L_1207E;
    case 0x00012080u: goto L_12080;
    case 0x00012084u: goto L_12084;
    case 0x00012086u: goto L_12086;
    case 0x00012088u: goto L_12088;
    case 0x0001208au: goto L_1208A;
    case 0x0001208eu: goto L_1208E;
    case 0x00012092u: goto L_12092;
    case 0x00012096u: goto L_12096;
    case 0x0001209cu: goto L_1209C;
    case 0x000120a0u: goto L_120A0;
    case 0x000120a2u: goto L_120A2;
    case 0x000120a6u: goto L_120A6;
    case 0x000120a8u: goto L_120A8;
    case 0x000120aau: goto L_120AA;
    case 0x000120acu: goto L_120AC;
    case 0x000120b0u: goto L_120B0;
    case 0x000120b2u: goto L_120B2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1200C:
    /* 0001200c   4  link.w A5,#fffffffe */
    c->pc = 0x0001200cu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_12010:
    /* 00012010   4  clr.w (fffffffe,A5) */
    c->pc = 0x00012010u;
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12014:
    /* 00012014   2  moveq #0,D0 */
    c->pc = 0x00012014u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_12016:
    /* 00012016   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x00012016u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1201A:
    /* 0001201a   2  asl.l #2,D0 */
    c->pc = 0x0001201au;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1201C:
    /* 0001201c   4  lea (e08,A4),A0 */
    c->pc = 0x0001201cu;
    c->a[0] = (c->a[4] + 0xe08u);

L_12020:
    /* 00012020   2  moveq #0,D1 */
    c->pc = 0x00012020u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_12022:
    /* 00012022   4  move.w (fffffffe,A5),D1 */
    c->pc = 0x00012022u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12026:
    /* 00012026   2  asl.l #2,D1 */
    c->pc = 0x00012026u;
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_12028:
    /* 00012028   4  lea (fffff326,A4),A1 */
    c->pc = 0x00012028u;
    c->a[1] = (c->a[4] - 0xcdau);

L_1202C:
    /* 0001202c   4  movea.l (0,A1,D1.w),A6 */
    c->pc = 0x0001202cu;
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    c->a[6] = t0;

L_12030:
    /* 00012030   6  adda.l #190,A6 */
    c->pc = 0x00012030u;
    t0 = 0x00000190u;
    c->a[6] += t0;

L_12036:
    /* 00012036   4  move.l A6,(0,A0,D0.w) */
    c->pc = 0x00012036u;
    t0 = rc_a_get(c, 6, RC_L);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1203A:
    /* 0001203a   2  moveq #0,D0 */
    c->pc = 0x0001203au;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1203C:
    /* 0001203c   4  move.w (fffffffe,A5),D0 */
    c->pc = 0x0001203cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12040:
    /* 00012040   2  asl.l #2,D0 */
    c->pc = 0x00012040u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_12042:
    /* 00012042   4  lea (e1c,A4),A0 */
    c->pc = 0x00012042u;
    c->a[0] = (c->a[4] + 0xe1cu);

L_12046:
    /* 00012046   2  moveq #0,D1 */
    c->pc = 0x00012046u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_12048:
    /* 00012048   4  move.w (fffffffe,A5),D1 */
    c->pc = 0x00012048u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1204C:
    /* 0001204c   2  asl.l #2,D1 */
    c->pc = 0x0001204cu;
    c->d[1] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L);

L_1204E:
    /* 0001204e   4  lea (fffff33a,A4),A1 */
    c->pc = 0x0001204eu;
    c->a[1] = (c->a[4] - 0xcc6u);

L_12052:
    /* 00012052   4  movea.l (0,A1,D1.w),A6 */
    c->pc = 0x00012052u;
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    c->a[6] = t0;

L_12056:
    /* 00012056   6  adda.l #190,A6 */
    c->pc = 0x00012056u;
    t0 = 0x00000190u;
    c->a[6] += t0;

L_1205C:
    /* 0001205c   4  move.l A6,(0,A0,D0.w) */
    c->pc = 0x0001205cu;
    t0 = rc_a_get(c, 6, RC_L);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_12060:
    /* 00012060   4  addq.w #1,(fffffffe,A5) */
    c->pc = 0x00012060u;
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_12064:
    /* 00012064   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = 0x00012064u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1206A:
    /* 0001206a   2  bcs 00012014 */
    c->pc = 0x0001206au;
    if (rc_cond(c, 5)) { rc_tick(); goto L_12014; }

L_1206C:
    /* 0001206c   4  lea (e08,A4),A0 */
    c->pc = 0x0001206cu;
    c->a[0] = (c->a[4] + 0xe08u);

L_12070:
    /* 00012070   4  movea.l (e04,A4),A1 */
    c->pc = 0x00012070u;
    t0 = rc_rd32(c, m, (c->a[4] + 0xe04u));
    c->a[1] = t0;

L_12074:
    /* 00012074   6  adda.l #2a,A1 */
    c->pc = 0x00012074u;
    t0 = 0x0000002au;
    c->a[1] += t0;

L_1207A:
    /* 0001207a   4  move.w #4,D1 */
    c->pc = 0x0001207au;
    t0 = 0x00000004u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1207E:
    /* 0001207e   2  move.l (A0)+,D0 */
    c->pc = 0x0001207eu;
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12080:
    /* 00012080   4  move.w D0,(4,A1) */
    c->pc = 0x00012080u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12084:
    /* 00012084   2  swap D0 */
    c->pc = 0x00012084u;
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_12086:
    /* 00012086   2  move.w D0,(A1) */
    c->pc = 0x00012086u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12088:
    /* 00012088   2  addq.l #8,A1 */
    c->pc = 0x00012088u;
    c->a[1] += 0x00000008u;

L_1208A:
    /* 0001208a   4  dbf D1,0001207e */
    c->pc = 0x0001208au;
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1207E; }
    }

L_1208E:
    /* 0001208e   4  lea (e38,A4),A0 */
    c->pc = 0x0001208eu;
    c->a[0] = (c->a[4] + 0xe38u);

L_12092:
    /* 00012092   4  movea.l (e04,A4),A1 */
    c->pc = 0x00012092u;
    t0 = rc_rd32(c, m, (c->a[4] + 0xe04u));
    c->a[1] = t0;

L_12096:
    /* 00012096   6  adda.l #e2,A1 */
    c->pc = 0x00012096u;
    t0 = 0x000000e2u;
    c->a[1] += t0;

L_1209C:
    /* 0001209c   4  move.w #4,D1 */
    c->pc = 0x0001209cu;
    t0 = 0x00000004u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_120A0:
    /* 000120a0   2  move.l (A0)+,D0 */
    c->pc = 0x000120a0u;
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_120A2:
    /* 000120a2   4  move.w D0,(4,A1) */
    c->pc = 0x000120a2u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_120A6:
    /* 000120a6   2  swap D0 */
    c->pc = 0x000120a6u;
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_120A8:
    /* 000120a8   2  move.w D0,(A1) */
    c->pc = 0x000120a8u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_W);

L_120AA:
    /* 000120aa   2  addq.l #8,A1 */
    c->pc = 0x000120aau;
    c->a[1] += 0x00000008u;

L_120AC:
    /* 000120ac   4  dbf D1,000120a0 */
    c->pc = 0x000120acu;
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_120A0; }
    }

L_120B0:
    /* 000120b0   2  unlk A5 */
    c->pc = 0x000120b0u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_120B2:
    /* 000120b2   2  rts */
    c->pc = 0x000120b2u;
    rc_ret(c, m);
    return;

}
