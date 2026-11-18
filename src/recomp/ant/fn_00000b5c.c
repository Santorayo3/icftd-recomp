/* fn_00000b5c - 66 byte(s), 20 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00000b5c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00000b5cu): goto L_B5C;
    case RC_ADDR(0x00000b60u): goto L_B60;
    case RC_ADDR(0x00000b64u): goto L_B64;
    case RC_ADDR(0x00000b6au): goto L_B6A;
    case RC_ADDR(0x00000b6cu): goto L_B6C;
    case RC_ADDR(0x00000b70u): goto L_B70;
    case RC_ADDR(0x00000b74u): goto L_B74;
    case RC_ADDR(0x00000b76u): goto L_B76;
    case RC_ADDR(0x00000b78u): goto L_B78;
    case RC_ADDR(0x00000b7cu): goto L_B7C;
    case RC_ADDR(0x00000b80u): goto L_B80;
    case RC_ADDR(0x00000b82u): goto L_B82;
    case RC_ADDR(0x00000b86u): goto L_B86;
    case RC_ADDR(0x00000b8au): goto L_B8A;
    case RC_ADDR(0x00000b8cu): goto L_B8C;
    case RC_ADDR(0x00000b8eu): goto L_B8E;
    case RC_ADDR(0x00000b92u): goto L_B92;
    case RC_ADDR(0x00000b96u): goto L_B96;
    case RC_ADDR(0x00000b9au): goto L_B9A;
    case RC_ADDR(0x00000b9cu): goto L_B9C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B5C:
    /* 00000b5c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00000b5cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B60:
    /* 00000b60   4  movea.l (ffffd298,A4),A0 */
    c->pc = RC_ADDR(0x00000b60u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[0] = t0;

L_B64:
    /* 00000b64   6  move.l (ffffd33c,A4),(4,A0) */
    c->pc = RC_ADDR(0x00000b64u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B6A:
    /* 00000b6a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00000b6au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B6C:
    /* 00000b6c   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000b6cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B70:
    /* 00000b70   4  jsr (ffff83b6,A4) */
    c->pc = RC_ADDR(0x00000b70u);
    rc_step(c, m, 18);
    /* vector 158 */
    rc_push32(c, m, RC_ADDR(0x00000b74u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023eacu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002399cu);
    return;

L_B74:
    /* 00000b74   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000b74u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B76:
    /* 00000b76   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00000b76u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B78:
    /* 00000b78   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000b78u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B7C:
    /* 00000b7c   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x00000b7cu);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x00000b80u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_B80:
    /* 00000b80   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000b80u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B82:
    /* 00000b82   4  pea (000000c7).l */
    c->pc = RC_ADDR(0x00000b82u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000c7u);

L_B86:
    /* 00000b86   4  pea (0000013f).l */
    c->pc = RC_ADDR(0x00000b86u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000013fu);

L_B8A:
    /* 00000b8a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00000b8au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B8C:
    /* 00000b8c   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00000b8cu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B8E:
    /* 00000b8e   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00000b8eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B92:
    /* 00000b92   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x00000b92u);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x00000b96u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002397au);
    return;

L_B96:
    /* 00000b96   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00000b96u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_B9A:
    /* 00000b9a   2  unlk A5 */
    c->pc = RC_ADDR(0x00000b9au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B9C:
    /* 00000b9c   2  rts */
    c->pc = RC_ADDR(0x00000b9cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
