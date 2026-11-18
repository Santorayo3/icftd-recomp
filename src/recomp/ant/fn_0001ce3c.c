/* fn_0001ce3c - 82 byte(s), 23 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001ce3c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x0001ce3cu): goto L_1CE3C;
    case RC_ADDR(0x0001ce40u): goto L_1CE40;
    case RC_ADDR(0x0001ce44u): goto L_1CE44;
    case RC_ADDR(0x0001ce48u): goto L_1CE48;
    case RC_ADDR(0x0001ce4au): goto L_1CE4A;
    case RC_ADDR(0x0001ce4eu): goto L_1CE4E;
    case RC_ADDR(0x0001ce50u): goto L_1CE50;
    case RC_ADDR(0x0001ce54u): goto L_1CE54;
    case RC_ADDR(0x0001ce58u): goto L_1CE58;
    case RC_ADDR(0x0001ce5cu): goto L_1CE5C;
    case RC_ADDR(0x0001ce60u): goto L_1CE60;
    case RC_ADDR(0x0001ce64u): goto L_1CE64;
    case RC_ADDR(0x0001ce68u): goto L_1CE68;
    case RC_ADDR(0x0001ce6cu): goto L_1CE6C;
    case RC_ADDR(0x0001ce6eu): goto L_1CE6E;
    case RC_ADDR(0x0001ce72u): goto L_1CE72;
    case RC_ADDR(0x0001ce76u): goto L_1CE76;
    case RC_ADDR(0x0001ce7au): goto L_1CE7A;
    case RC_ADDR(0x0001ce7eu): goto L_1CE7E;
    case RC_ADDR(0x0001ce82u): goto L_1CE82;
    case RC_ADDR(0x0001ce86u): goto L_1CE86;
    case RC_ADDR(0x0001ce8au): goto L_1CE8A;
    case RC_ADDR(0x0001ce8cu): goto L_1CE8C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1CE3C:
    /* 0001ce3c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001ce3cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1CE40:
    /* 0001ce40   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x0001ce40u);
    rc_step(c, m, 12);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CE44:
    /* 0001ce44   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0001ce44u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0001ce48u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_1CE48:
    /* 0001ce48   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001ce48u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1CE4A:
    /* 0001ce4a   4  cmp.w #1f4,D0 */
    c->pc = RC_ADDR(0x0001ce4au);
    rc_step(c, m, 8);
    t0 = 0x000001f4u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1CE4E:
    /* 0001ce4e   2  bge 0001ce6e */
    c->pc = RC_ADDR(0x0001ce4eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1CE6E;

L_1CE50:
    /* 0001ce50   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001ce50u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CE54:
    /* 0001ce54   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001ce54u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CE58:
    /* 0001ce58   4  move.l (2c8e,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ce58u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c8eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CE5C:
    /* 0001ce5c   4  move.w (2c7e,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ce5cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2c7eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CE60:
    /* 0001ce60   4  move.l (2c6a,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ce60u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c6au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CE64:
    /* 0001ce64   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0001ce64u);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0001ce68u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_1CE68:
    /* 0001ce68   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001ce68u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1CE6C:
    /* 0001ce6c   2  bra 0001ce8a */
    c->pc = RC_ADDR(0x0001ce6cu);
    rc_step(c, m, 10);
    goto L_1CE8A;

L_1CE6E:
    /* 0001ce6e   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001ce6eu);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CE72:
    /* 0001ce72   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001ce72u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CE76:
    /* 0001ce76   4  move.l (2c92,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ce76u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c92u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CE7A:
    /* 0001ce7a   4  move.w (2c80,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ce7au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2c80u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CE7E:
    /* 0001ce7e   4  move.l (2c6e,A4),-(A7) */
    c->pc = RC_ADDR(0x0001ce7eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c6eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CE82:
    /* 0001ce82   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0001ce82u);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0001ce86u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_1CE86:
    /* 0001ce86   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001ce86u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1CE8A:
    /* 0001ce8a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001ce8au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1CE8C:
    /* 0001ce8c   2  rts */
    c->pc = RC_ADDR(0x0001ce8cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
