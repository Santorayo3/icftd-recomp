/* fn_000053b0 - 84 byte(s), 25 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000053b0(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000053b0u): goto L_53B0;
    case RC_ADDR(0x000053b4u): goto L_53B4;
    case RC_ADDR(0x000053b8u): goto L_53B8;
    case RC_ADDR(0x000053beu): goto L_53BE;
    case RC_ADDR(0x000053c2u): goto L_53C2;
    case RC_ADDR(0x000053c4u): goto L_53C4;
    case RC_ADDR(0x000053c6u): goto L_53C6;
    case RC_ADDR(0x000053cau): goto L_53CA;
    case RC_ADDR(0x000053ceu): goto L_53CE;
    case RC_ADDR(0x000053d0u): goto L_53D0;
    case RC_ADDR(0x000053d4u): goto L_53D4;
    case RC_ADDR(0x000053d6u): goto L_53D6;
    case RC_ADDR(0x000053d8u): goto L_53D8;
    case RC_ADDR(0x000053dcu): goto L_53DC;
    case RC_ADDR(0x000053deu): goto L_53DE;
    case RC_ADDR(0x000053e0u): goto L_53E0;
    case RC_ADDR(0x000053e4u): goto L_53E4;
    case RC_ADDR(0x000053e8u): goto L_53E8;
    case RC_ADDR(0x000053ecu): goto L_53EC;
    case RC_ADDR(0x000053f0u): goto L_53F0;
    case RC_ADDR(0x000053f4u): goto L_53F4;
    case RC_ADDR(0x000053f8u): goto L_53F8;
    case RC_ADDR(0x000053fcu): goto L_53FC;
    case RC_ADDR(0x00005400u): goto L_5400;
    case RC_ADDR(0x00005402u): goto L_5402;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_53B0:
    /* 000053b0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000053b0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_53B4:
    /* 000053b4   4  movea.l (ffffd298,A4),A0 */
    c->pc = RC_ADDR(0x000053b4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[0] = t0;

L_53B8:
    /* 000053b8   6  move.l (ffffd340,A4),(4,A0) */
    c->pc = RC_ADDR(0x000053b8u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_53BE:
    /* 000053be   4  move.w (10,A5),D0 */
    c->pc = RC_ADDR(0x000053beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_53C2:
    /* 000053c2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000053c2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_53C4:
    /* 000053c4   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000053c4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_53C6:
    /* 000053c6   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x000053c6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_53CA:
    /* 000053ca   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x000053cau);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x000053ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_53CE:
    /* 000053ce   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000053ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_53D0:
    /* 000053d0   4  move.w (e,A5),D0 */
    c->pc = RC_ADDR(0x000053d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_53D4:
    /* 000053d4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000053d4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_53D6:
    /* 000053d6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000053d6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_53D8:
    /* 000053d8   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x000053d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_53DC:
    /* 000053dc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000053dcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_53DE:
    /* 000053de   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000053deu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_53E0:
    /* 000053e0   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x000053e0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_53E4:
    /* 000053e4   4  jsr (ffff839e,A4) */
    c->pc = RC_ADDR(0x000053e4u);
    rc_step(c, m, 18);
    /* vector 154 */
    rc_push32(c, m, RC_ADDR(0x000053e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e94u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023954u);
    return;

L_53E8:
    /* 000053e8   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000053e8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_53EC:
    /* 000053ec   4  move.l (12,A5),-(A7) */
    c->pc = RC_ADDR(0x000053ecu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x12u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_53F0:
    /* 000053f0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000053f0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_53F4:
    /* 000053f4   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x000053f4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_53F8:
    /* 000053f8   4  jsr (ffff83c2,A4) */
    c->pc = RC_ADDR(0x000053f8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000053fcu));
    rc_depth++;
    t3 = (c->a[4] - 0x7c3eu);
    c->pc = t3;
    return;

L_53FC:
    /* 000053fc   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000053fcu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_5400:
    /* 00005400   2  unlk A5 */
    c->pc = RC_ADDR(0x00005400u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5402:
    /* 00005402   2  rts */
    c->pc = RC_ADDR(0x00005402u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
