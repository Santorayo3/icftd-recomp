/* fn_0000af72 - 36 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000af72(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000af72u): goto L_AF72;
    case RC_ADDR(0x0000af76u): goto L_AF76;
    case RC_ADDR(0x0000af7au): goto L_AF7A;
    case RC_ADDR(0x0000af7cu): goto L_AF7C;
    case RC_ADDR(0x0000af7eu): goto L_AF7E;
    case RC_ADDR(0x0000af84u): goto L_AF84;
    case RC_ADDR(0x0000af86u): goto L_AF86;
    case RC_ADDR(0x0000af8au): goto L_AF8A;
    case RC_ADDR(0x0000af8cu): goto L_AF8C;
    case RC_ADDR(0x0000af92u): goto L_AF92;
    case RC_ADDR(0x0000af94u): goto L_AF94;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_AF72:
    /* 0000af72   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000af72u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_AF76:
    /* 0000af76   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000af76u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AF7A:
    /* 0000af7a   2  bsr 0000af96 */
    c->pc = RC_ADDR(0x0000af7au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000af7cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_AF7C:
    /* 0000af7c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000af7cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_AF7E:
    /* 0000af7e   6  movea.l #dff0a0,A0 */
    c->pc = RC_ADDR(0x0000af7eu);
    rc_step(c, m, 12);
    t0 = 0x00dff0a0u;
    c->a[0] = t0;

L_AF84:
    /* 0000af84   2  clr.l D0 */
    c->pc = RC_ADDR(0x0000af84u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_AF86:
    /* 0000af86   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000af86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AF8A:
    /* 0000af8a   2  lsl.w #4,D0 */
    c->pc = RC_ADDR(0x0000af8au);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_AF8C:
    /* 0000af8c   6  move.w #0,(8,A0,D0.w) */
    c->pc = RC_ADDR(0x0000af8cu);
    rc_step(c, m, 18);
    t0 = 0x00000000u;
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x8u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AF92:
    /* 0000af92   2  unlk A5 */
    c->pc = RC_ADDR(0x0000af92u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_AF94:
    /* 0000af94   2  rts */
    c->pc = RC_ADDR(0x0000af94u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
