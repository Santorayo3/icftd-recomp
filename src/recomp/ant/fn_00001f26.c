/* fn_00001f26 - 74 byte(s), 20 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00001f26(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00001f26u): goto L_1F26;
    case RC_ADDR(0x00001f2au): goto L_1F2A;
    case RC_ADDR(0x00001f2eu): goto L_1F2E;
    case RC_ADDR(0x00001f32u): goto L_1F32;
    case RC_ADDR(0x00001f36u): goto L_1F36;
    case RC_ADDR(0x00001f38u): goto L_1F38;
    case RC_ADDR(0x00001f3cu): goto L_1F3C;
    case RC_ADDR(0x00001f40u): goto L_1F40;
    case RC_ADDR(0x00001f44u): goto L_1F44;
    case RC_ADDR(0x00001f48u): goto L_1F48;
    case RC_ADDR(0x00001f4cu): goto L_1F4C;
    case RC_ADDR(0x00001f50u): goto L_1F50;
    case RC_ADDR(0x00001f54u): goto L_1F54;
    case RC_ADDR(0x00001f58u): goto L_1F58;
    case RC_ADDR(0x00001f5cu): goto L_1F5C;
    case RC_ADDR(0x00001f60u): goto L_1F60;
    case RC_ADDR(0x00001f64u): goto L_1F64;
    case RC_ADDR(0x00001f66u): goto L_1F66;
    case RC_ADDR(0x00001f6cu): goto L_1F6C;
    case RC_ADDR(0x00001f6eu): goto L_1F6E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F26:
    /* 00001f26   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00001f26u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1F2A:
    /* 00001f2a   4  jsr (00001af8) */
    c->pc = RC_ADDR(0x00001f2au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001f2eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00001af8u);
    return;

L_1F2E:
    /* 00001f2e   4  move.w (ffff8d98,A4),-(A7) */
    c->pc = RC_ADDR(0x00001f2eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7268u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F32:
    /* 00001f32   4  jsr (00008314) */
    c->pc = RC_ADDR(0x00001f32u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001f36u));
    rc_depth++;
    c->pc = RC_ADDR(0x00008314u);
    return;

L_1F36:
    /* 00001f36   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00001f36u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1F38:
    /* 00001f38   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001f38u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F3C:
    /* 00001f3c   4  jsr (000018d0) */
    c->pc = RC_ADDR(0x00001f3cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001f40u));
    rc_depth++;
    c->pc = RC_ADDR(0x000018d0u);
    return;

L_1F40:
    /* 00001f40   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00001f40u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F44:
    /* 00001f44   4  pea (00001f79) */
    c->pc = RC_ADDR(0x00001f44u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00001f79u));

L_1F48:
    /* 00001f48   4  pea (00001f70) */
    c->pc = RC_ADDR(0x00001f48u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00001f70u));

L_1F4C:
    /* 00001f4c   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x00001f4cu);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x00001f50u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_1F50:
    /* 00001f50   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00001f50u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1F54:
    /* 00001f54   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00001f54u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1F58:
    /* 00001f58   4  move.l (4,A0),-(A7) */
    c->pc = RC_ADDR(0x00001f58u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F5C:
    /* 00001f5c   4  pea (00001f85) */
    c->pc = RC_ADDR(0x00001f5cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00001f85u));

L_1F60:
    /* 00001f60   4  jsr (00001468) */
    c->pc = RC_ADDR(0x00001f60u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001f64u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001468u);
    return;

L_1F64:
    /* 00001f64   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001f64u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F66:
    /* 00001f66   6  move.w #1,(ffffd6f4,A4) */
    c->pc = RC_ADDR(0x00001f66u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x290cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F6C:
    /* 00001f6c   2  unlk A5 */
    c->pc = RC_ADDR(0x00001f6cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F6E:
    /* 00001f6e   2  rts */
    c->pc = RC_ADDR(0x00001f6eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
