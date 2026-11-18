/* fn_00011efe - 88 byte(s), 24 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00011efe(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00011efeu): goto L_11EFE;
    case RC_ADDR(0x00011f02u): goto L_11F02;
    case RC_ADDR(0x00011f06u): goto L_11F06;
    case RC_ADDR(0x00011f0au): goto L_11F0A;
    case RC_ADDR(0x00011f0eu): goto L_11F0E;
    case RC_ADDR(0x00011f12u): goto L_11F12;
    case RC_ADDR(0x00011f16u): goto L_11F16;
    case RC_ADDR(0x00011f18u): goto L_11F18;
    case RC_ADDR(0x00011f1au): goto L_11F1A;
    case RC_ADDR(0x00011f1eu): goto L_11F1E;
    case RC_ADDR(0x00011f22u): goto L_11F22;
    case RC_ADDR(0x00011f26u): goto L_11F26;
    case RC_ADDR(0x00011f2au): goto L_11F2A;
    case RC_ADDR(0x00011f2eu): goto L_11F2E;
    case RC_ADDR(0x00011f32u): goto L_11F32;
    case RC_ADDR(0x00011f36u): goto L_11F36;
    case RC_ADDR(0x00011f3au): goto L_11F3A;
    case RC_ADDR(0x00011f3eu): goto L_11F3E;
    case RC_ADDR(0x00011f42u): goto L_11F42;
    case RC_ADDR(0x00011f46u): goto L_11F46;
    case RC_ADDR(0x00011f4au): goto L_11F4A;
    case RC_ADDR(0x00011f4eu): goto L_11F4E;
    case RC_ADDR(0x00011f52u): goto L_11F52;
    case RC_ADDR(0x00011f54u): goto L_11F54;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11EFE:
    /* 00011efe   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00011efeu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_11F02:
    /* 00011f02   4  pea (0000006e).l */
    c->pc = RC_ADDR(0x00011f02u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000006eu);

L_11F06:
    /* 00011f06   4  pea (000000e3).l */
    c->pc = RC_ADDR(0x00011f06u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000e3u);

L_11F0A:
    /* 00011f0a   4  pea (0000005a).l */
    c->pc = RC_ADDR(0x00011f0au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000005au);

L_11F0E:
    /* 00011f0e   4  pea (0000005c).l */
    c->pc = RC_ADDR(0x00011f0eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000005cu);

L_11F12:
    /* 00011f12   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00011f12u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_11F16:
    /* 00011f16   2  ext.l D0 */
    c->pc = RC_ADDR(0x00011f16u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_11F18:
    /* 00011f18   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00011f18u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11F1A:
    /* 00011f1a   4  jsr (ffff806e,A4) */
    c->pc = RC_ADDR(0x00011f1au);
    rc_step(c, m, 18);
    /* vector 18 */
    rc_push32(c, m, RC_ADDR(0x00011f1eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b64u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000055d8u);
    return;

L_11F1E:
    /* 00011f1e   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00011f1eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_11F22:
    /* 00011f22   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00011f22u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11F26:
    /* 00011f26   4  move.w #62,-(A7) */
    c->pc = RC_ADDR(0x00011f26u);
    rc_step(c, m, 12);
    t0 = 0x00000062u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11F2A:
    /* 00011f2a   4  move.w #5f,-(A7) */
    c->pc = RC_ADDR(0x00011f2au);
    rc_step(c, m, 12);
    t0 = 0x0000005fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11F2E:
    /* 00011f2e   4  pea (00011f56) */
    c->pc = RC_ADDR(0x00011f2eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00011f56u));

L_11F32:
    /* 00011f32   4  jsr (ffff8068,A4) */
    c->pc = RC_ADDR(0x00011f32u);
    rc_step(c, m, 18);
    /* vector 17 */
    rc_push32(c, m, RC_ADDR(0x00011f36u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00005404u);
    return;

L_11F36:
    /* 00011f36   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00011f36u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_11F3A:
    /* 00011f3a   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00011f3au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11F3E:
    /* 00011f3e   4  move.w #6c,-(A7) */
    c->pc = RC_ADDR(0x00011f3eu);
    rc_step(c, m, 12);
    t0 = 0x0000006cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11F42:
    /* 00011f42   4  move.w #5f,-(A7) */
    c->pc = RC_ADDR(0x00011f42u);
    rc_step(c, m, 12);
    t0 = 0x0000005fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_11F46:
    /* 00011f46   4  pea (00011f6e) */
    c->pc = RC_ADDR(0x00011f46u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00011f6eu));

L_11F4A:
    /* 00011f4a   4  jsr (ffff8068,A4) */
    c->pc = RC_ADDR(0x00011f4au);
    rc_step(c, m, 18);
    /* vector 17 */
    rc_push32(c, m, RC_ADDR(0x00011f4eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00005404u);
    return;

L_11F4E:
    /* 00011f4e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00011f4eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_11F52:
    /* 00011f52   2  unlk A5 */
    c->pc = RC_ADDR(0x00011f52u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11F54:
    /* 00011f54   2  rts */
    c->pc = RC_ADDR(0x00011f54u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
