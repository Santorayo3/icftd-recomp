/* fn_0001e238 - 106 byte(s), 30 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001e238(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e238u): goto L_1E238;
    case RC_ADDR(0x0001e23cu): goto L_1E23C;
    case RC_ADDR(0x0001e23eu): goto L_1E23E;
    case RC_ADDR(0x0001e242u): goto L_1E242;
    case RC_ADDR(0x0001e246u): goto L_1E246;
    case RC_ADDR(0x0001e248u): goto L_1E248;
    case RC_ADDR(0x0001e24cu): goto L_1E24C;
    case RC_ADDR(0x0001e250u): goto L_1E250;
    case RC_ADDR(0x0001e254u): goto L_1E254;
    case RC_ADDR(0x0001e258u): goto L_1E258;
    case RC_ADDR(0x0001e25cu): goto L_1E25C;
    case RC_ADDR(0x0001e260u): goto L_1E260;
    case RC_ADDR(0x0001e264u): goto L_1E264;
    case RC_ADDR(0x0001e268u): goto L_1E268;
    case RC_ADDR(0x0001e26cu): goto L_1E26C;
    case RC_ADDR(0x0001e270u): goto L_1E270;
    case RC_ADDR(0x0001e274u): goto L_1E274;
    case RC_ADDR(0x0001e278u): goto L_1E278;
    case RC_ADDR(0x0001e27cu): goto L_1E27C;
    case RC_ADDR(0x0001e280u): goto L_1E280;
    case RC_ADDR(0x0001e284u): goto L_1E284;
    case RC_ADDR(0x0001e288u): goto L_1E288;
    case RC_ADDR(0x0001e28au): goto L_1E28A;
    case RC_ADDR(0x0001e28eu): goto L_1E28E;
    case RC_ADDR(0x0001e292u): goto L_1E292;
    case RC_ADDR(0x0001e294u): goto L_1E294;
    case RC_ADDR(0x0001e298u): goto L_1E298;
    case RC_ADDR(0x0001e29cu): goto L_1E29C;
    case RC_ADDR(0x0001e29eu): goto L_1E29E;
    case RC_ADDR(0x0001e2a0u): goto L_1E2A0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E238:
    /* 0001e238   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e238u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E23C:
    /* 0001e23c   2  bsr 0001e1e6 */
    c->pc = RC_ADDR(0x0001e23cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e23eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e1e6u);
    return;

L_1E23E:
    /* 0001e23e   4  pea (00000032).l */
    c->pc = RC_ADDR(0x0001e23eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000032u);

L_1E242:
    /* 0001e242   4  jsr (ffff8326,A4) */
    c->pc = RC_ADDR(0x0001e242u);
    rc_step(c, m, 18);
    /* vector 134 */
    rc_push32(c, m, RC_ADDR(0x0001e246u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e1cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234cau);
    return;

L_1E246:
    /* 0001e246   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001e246u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E248:
    /* 0001e248   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001e248u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E24C:
    /* 0001e24c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001e24cu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E250:
    /* 0001e250   4  move.l (2dd4,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e250u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dd4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E254:
    /* 0001e254   4  move.w (2dce,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e254u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2dceu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E258:
    /* 0001e258   4  move.l (2dc2,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e258u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dc2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E25C:
    /* 0001e25c   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0001e25cu);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001e260u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_1E260:
    /* 0001e260   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001e260u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1E264:
    /* 0001e264   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001e264u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E268:
    /* 0001e268   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001e268u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E26C:
    /* 0001e26c   4  move.l (2dd4,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e26cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dd4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E270:
    /* 0001e270   4  move.w (2dce,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e270u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2dceu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E274:
    /* 0001e274   4  move.l (2dc2,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e274u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dc2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E278:
    /* 0001e278   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0001e278u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001e27cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_1E27C:
    /* 0001e27c   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001e27cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1E280:
    /* 0001e280   4  pea (00000064).l */
    c->pc = RC_ADDR(0x0001e280u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000064u);

L_1E284:
    /* 0001e284   4  jsr (ffff8326,A4) */
    c->pc = RC_ADDR(0x0001e284u);
    rc_step(c, m, 18);
    /* vector 134 */
    rc_push32(c, m, RC_ADDR(0x0001e288u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e1cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000234cau);
    return;

L_1E288:
    /* 0001e288   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001e288u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1E28A:
    /* 0001e28a   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001e28au);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E28E:
    /* 0001e28e   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0001e28eu);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0001e292u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_1E292:
    /* 0001e292   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001e292u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1E294:
    /* 0001e294   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001e294u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E298:
    /* 0001e298   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0001e298u);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0001e29cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_1E29C:
    /* 0001e29c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001e29cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1E29E:
    /* 0001e29e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e29eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E2A0:
    /* 0001e2a0   2  rts */
    c->pc = RC_ADDR(0x0001e2a0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
