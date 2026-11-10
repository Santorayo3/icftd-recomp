/* fn_0001f236 - 72 byte(s), 26 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f236(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x0001f236u: goto L_1F236;
    case 0x0001f23au: goto L_1F23A;
    case 0x0001f23cu: goto L_1F23C;
    case 0x0001f240u: goto L_1F240;
    case 0x0001f242u: goto L_1F242;
    case 0x0001f246u: goto L_1F246;
    case 0x0001f24au: goto L_1F24A;
    case 0x0001f24cu: goto L_1F24C;
    case 0x0001f24eu: goto L_1F24E;
    case 0x0001f250u: goto L_1F250;
    case 0x0001f252u: goto L_1F252;
    case 0x0001f256u: goto L_1F256;
    case 0x0001f25au: goto L_1F25A;
    case 0x0001f25cu: goto L_1F25C;
    case 0x0001f25eu: goto L_1F25E;
    case 0x0001f260u: goto L_1F260;
    case 0x0001f262u: goto L_1F262;
    case 0x0001f266u: goto L_1F266;
    case 0x0001f26au: goto L_1F26A;
    case 0x0001f26cu: goto L_1F26C;
    case 0x0001f270u: goto L_1F270;
    case 0x0001f272u: goto L_1F272;
    case 0x0001f276u: goto L_1F276;
    case 0x0001f278u: goto L_1F278;
    case 0x0001f27au: goto L_1F27A;
    case 0x0001f27cu: goto L_1F27C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F236:
    /* 0001f236   4  link.w A5,#0 */
    c->pc = 0x0001f236u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F23A:
    /* 0001f23a   2  move.l A2,-(A7) */
    c->pc = 0x0001f23au;
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F23C:
    /* 0001f23c   4  movea.l (8,A5),A2 */
    c->pc = 0x0001f23cu;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1F240:
    /* 0001f240   2  move.l A2,-(A7) */
    c->pc = 0x0001f240u;
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F242:
    /* 0001f242   4  pea (ffffcce6,A4) */
    c->pc = 0x0001f242u;
    rc_push32(c, m, (c->a[4] - 0x331au));

L_1F246:
    /* 0001f246   4  jsr (0001e452) */
    c->pc = 0x0001f246u;
    rc_push32(c, m, 0x0001f24au);
    rc_depth++;
    c->pc = 0x0001e452u;
    return;

L_1F24A:
    /* 0001f24a   2  addq.w #8,A7 */
    c->pc = 0x0001f24au;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F24C:
    /* 0001f24c   2  move.l A2,-(A7) */
    c->pc = 0x0001f24cu;
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F24E:
    /* 0001f24e   2  bsr 0001f1f0 */
    c->pc = 0x0001f24eu;
    rc_push32(c, m, 0x0001f250u);
    rc_depth++;
    c->pc = 0x0001f1f0u;
    return;

L_1F250:
    /* 0001f250   2  addq.w #4,A7 */
    c->pc = 0x0001f250u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F252:
    /* 0001f252   4  move.l (4,A2),-(A7) */
    c->pc = 0x0001f252u;
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F256:
    /* 0001f256   4  jsr (ffff82ae,A4) */
    c->pc = 0x0001f256u;
    /* vector 114 */
    rc_push32(c, m, 0x0001f25au);
    rc_depth++;
    c->pc = 0x00020820u;
    return;

L_1F25A:
    /* 0001f25a   2  addq.w #4,A7 */
    c->pc = 0x0001f25au;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F25C:
    /* 0001f25c   2  ext.l D0 */
    c->pc = 0x0001f25cu;
    rc_ext_l(c, 0);

L_1F25E:
    /* 0001f25e   2  addq.l #1,D0 */
    c->pc = 0x0001f25eu;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1F260:
    /* 0001f260   2  move.l D0,-(A7) */
    c->pc = 0x0001f260u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F262:
    /* 0001f262   4  move.l (4,A2),-(A7) */
    c->pc = 0x0001f262u;
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F266:
    /* 0001f266   4  jsr (ffff8344,A4) */
    c->pc = 0x0001f266u;
    /* vector 139: exec.library -210 */
    c->pc = 0x0001f26au;
    rc_os_call(c, m, 0, -210);

L_1F26A:
    /* 0001f26a   2  addq.w #8,A7 */
    c->pc = 0x0001f26au;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F26C:
    /* 0001f26c   4  pea (00000026).l */
    c->pc = 0x0001f26cu;
    rc_push32(c, m, 0x00000026u);

L_1F270:
    /* 0001f270   2  move.l A2,-(A7) */
    c->pc = 0x0001f270u;
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F272:
    /* 0001f272   4  jsr (ffff8344,A4) */
    c->pc = 0x0001f272u;
    /* vector 139: exec.library -210 */
    c->pc = 0x0001f276u;
    rc_os_call(c, m, 0, -210);

L_1F276:
    /* 0001f276   2  addq.w #8,A7 */
    c->pc = 0x0001f276u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F278:
    /* 0001f278   2  movea.l (A7)+,A2 */
    c->pc = 0x0001f278u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1F27A:
    /* 0001f27a   2  unlk A5 */
    c->pc = 0x0001f27au;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F27C:
    /* 0001f27c   2  rts */
    c->pc = 0x0001f27cu;
    rc_ret(c, m);
    return;

}
