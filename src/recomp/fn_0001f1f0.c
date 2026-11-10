/* fn_0001f1f0 - 70 byte(s), 24 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f1f0(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case 0x0001f1f0u: goto L_1F1F0;
    case 0x0001f1f4u: goto L_1F1F4;
    case 0x0001f1f6u: goto L_1F1F6;
    case 0x0001f1fau: goto L_1F1FA;
    case 0x0001f1feu: goto L_1F1FE;
    case 0x0001f200u: goto L_1F200;
    case 0x0001f204u: goto L_1F204;
    case 0x0001f206u: goto L_1F206;
    case 0x0001f208u: goto L_1F208;
    case 0x0001f20cu: goto L_1F20C;
    case 0x0001f20eu: goto L_1F20E;
    case 0x0001f212u: goto L_1F212;
    case 0x0001f216u: goto L_1F216;
    case 0x0001f218u: goto L_1F218;
    case 0x0001f21au: goto L_1F21A;
    case 0x0001f21cu: goto L_1F21C;
    case 0x0001f220u: goto L_1F220;
    case 0x0001f224u: goto L_1F224;
    case 0x0001f226u: goto L_1F226;
    case 0x0001f22au: goto L_1F22A;
    case 0x0001f22eu: goto L_1F22E;
    case 0x0001f230u: goto L_1F230;
    case 0x0001f232u: goto L_1F232;
    case 0x0001f234u: goto L_1F234;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F1F0:
    /* 0001f1f0   4  link.w A5,#0 */
    c->pc = 0x0001f1f0u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F1F4:
    /* 0001f1f4   2  move.l A2,-(A7) */
    c->pc = 0x0001f1f4u;
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F1F6:
    /* 0001f1f6   4  movea.l (8,A5),A2 */
    c->pc = 0x0001f1f6u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1F1FA:
    /* 0001f1fa   4  tst.l (1a,A2) */
    c->pc = 0x0001f1fau;
    t0 = rc_rd32(c, m, (c->a[2] + 0x1au));
    rc_set_nzvc(c, t0, RC_L);

L_1F1FE:
    /* 0001f1fe   2  beq 0001f208 */
    c->pc = 0x0001f1feu;
    if (rc_cond(c, 7)) goto L_1F208;

L_1F200:
    /* 0001f200   4  move.l (1a,A2),-(A7) */
    c->pc = 0x0001f200u;
    t0 = rc_rd32(c, m, (c->a[2] + 0x1au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F204:
    /* 0001f204   2  bsr 0001f1e0 */
    c->pc = 0x0001f204u;
    rc_push32(c, m, 0x0001f206u);
    rc_depth++;
    c->pc = 0x0001f1e0u;
    return;

L_1F206:
    /* 0001f206   2  addq.w #4,A7 */
    c->pc = 0x0001f206u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F208:
    /* 0001f208   4  tst.l (1e,A2) */
    c->pc = 0x0001f208u;
    t0 = rc_rd32(c, m, (c->a[2] + 0x1eu));
    rc_set_nzvc(c, t0, RC_L);

L_1F20C:
    /* 0001f20c   2  beq 0001f226 */
    c->pc = 0x0001f20cu;
    if (rc_cond(c, 7)) goto L_1F226;

L_1F20E:
    /* 0001f20e   4  move.w (22,A2),D0 */
    c->pc = 0x0001f20eu;
    t0 = rc_rd16(c, m, (c->a[2] + 0x22u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F212:
    /* 0001f212   4  mulu.w #12,D0 */
    c->pc = 0x0001f212u;
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_1F216:
    /* 0001f216   2  moveq #0,D1 */
    c->pc = 0x0001f216u;
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F218:
    /* 0001f218   2  move.w D0,D1 */
    c->pc = 0x0001f218u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F21A:
    /* 0001f21a   2  move.l D1,-(A7) */
    c->pc = 0x0001f21au;
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F21C:
    /* 0001f21c   4  move.l (1e,A2),-(A7) */
    c->pc = 0x0001f21cu;
    t0 = rc_rd32(c, m, (c->a[2] + 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F220:
    /* 0001f220   4  jsr (ffff8344,A4) */
    c->pc = 0x0001f220u;
    /* vector 139: exec.library -210 */
    c->pc = 0x0001f224u;
    rc_os_call(c, m, 0, -210);

L_1F224:
    /* 0001f224   2  addq.w #8,A7 */
    c->pc = 0x0001f224u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F226:
    /* 0001f226   4  clr.l (1e,A2) */
    c->pc = 0x0001f226u;
    rc_wr32(c, m, (c->a[2] + 0x1eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F22A:
    /* 0001f22a   4  clr.l (1a,A2) */
    c->pc = 0x0001f22au;
    rc_wr32(c, m, (c->a[2] + 0x1au), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F22E:
    /* 0001f22e   2  move.l A2,D0 */
    c->pc = 0x0001f22eu;
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F230:
    /* 0001f230   2  movea.l (A7)+,A2 */
    c->pc = 0x0001f230u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_1F232:
    /* 0001f232   2  unlk A5 */
    c->pc = 0x0001f232u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F234:
    /* 0001f234   2  rts */
    c->pc = 0x0001f234u;
    rc_ret(c, m);
    return;

}
