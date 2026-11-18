/* fn_0001ec6a - 50 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001ec6a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001ec6au): goto L_1EC6A;
    case RC_ADDR(0x0001ec6eu): goto L_1EC6E;
    case RC_ADDR(0x0001ec74u): goto L_1EC74;
    case RC_ADDR(0x0001ec76u): goto L_1EC76;
    case RC_ADDR(0x0001ec7au): goto L_1EC7A;
    case RC_ADDR(0x0001ec7cu): goto L_1EC7C;
    case RC_ADDR(0x0001ec80u): goto L_1EC80;
    case RC_ADDR(0x0001ec84u): goto L_1EC84;
    case RC_ADDR(0x0001ec86u): goto L_1EC86;
    case RC_ADDR(0x0001ec8au): goto L_1EC8A;
    case RC_ADDR(0x0001ec8eu): goto L_1EC8E;
    case RC_ADDR(0x0001ec94u): goto L_1EC94;
    case RC_ADDR(0x0001ec98u): goto L_1EC98;
    case RC_ADDR(0x0001ec9au): goto L_1EC9A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1EC6A:
    /* 0001ec6a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001ec6au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1EC6E:
    /* 0001ec6e   6  cmpi.w #26,(fffff78c,A4) */
    c->pc = RC_ADDR(0x0001ec6eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_cmp(c, RC_W, t0, 0x00000026u);

L_1EC74:
    /* 0001ec74   2  bne 0001ec98 */
    c->pc = RC_ADDR(0x0001ec74u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1EC98;

L_1EC76:
    /* 0001ec76   4  tst.w (79a,A4) */
    c->pc = RC_ADDR(0x0001ec76u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x79au));
    rc_set_nzvc(c, t0, RC_W);

L_1EC7A:
    /* 0001ec7a   2  beq 0001ec98 */
    c->pc = RC_ADDR(0x0001ec7au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1EC98;

L_1EC7C:
    /* 0001ec7c   4  move.w #34,-(A7) */
    c->pc = RC_ADDR(0x0001ec7cu);
    rc_step(c, m, 12);
    t0 = 0x00000034u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EC80:
    /* 0001ec80   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x0001ec80u);
    rc_step(c, m, 18);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x0001ec84u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b7cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000803eu);
    return;

L_1EC84:
    /* 0001ec84   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001ec84u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1EC86:
    /* 0001ec86   4  jsr (ffff803e,A4) */
    c->pc = RC_ADDR(0x0001ec86u);
    rc_step(c, m, 18);
    /* vector 10 */
    rc_push32(c, m, RC_ADDR(0x0001ec8au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b34u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000026e4u);
    return;

L_1EC8A:
    /* 0001ec8a   4  jsr (ffff802c,A4) */
    c->pc = RC_ADDR(0x0001ec8au);
    rc_step(c, m, 18);
    /* vector 7 */
    rc_push32(c, m, RC_ADDR(0x0001ec8eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b22u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00001f26u);
    return;

L_1EC8E:
    /* 0001ec8e   6  move.w #1,(854,A4) */
    c->pc = RC_ADDR(0x0001ec8eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x854u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EC94:
    /* 0001ec94   4  clr.w (79a,A4) */
    c->pc = RC_ADDR(0x0001ec94u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x79au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EC98:
    /* 0001ec98   2  unlk A5 */
    c->pc = RC_ADDR(0x0001ec98u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1EC9A:
    /* 0001ec9a   2  rts */
    c->pc = RC_ADDR(0x0001ec9au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
