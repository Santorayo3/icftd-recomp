/* fn_0000af96 - 34 byte(s), 9 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000af96(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000af96u): goto L_AF96;
    case RC_ADDR(0x0000af9au): goto L_AF9A;
    case RC_ADDR(0x0000af9eu): goto L_AF9E;
    case RC_ADDR(0x0000afa2u): goto L_AFA2;
    case RC_ADDR(0x0000afa4u): goto L_AFA4;
    case RC_ADDR(0x0000afaau): goto L_AFAA;
    case RC_ADDR(0x0000afaeu): goto L_AFAE;
    case RC_ADDR(0x0000afb4u): goto L_AFB4;
    case RC_ADDR(0x0000afb6u): goto L_AFB6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_AF96:
    /* 0000af96   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000af96u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_AF9A:
    /* 0000af9a   4  move.l (cea,A4),D1 */
    c->pc = RC_ADDR(0x0000af9au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xceau));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_AF9E:
    /* 0000af9e   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000af9eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AFA2:
    /* 0000afa2   2  lsl.w #4,D0 */
    c->pc = RC_ADDR(0x0000afa2u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_AFA4:
    /* 0000afa4   6  movea.l #dff0a0,A0 */
    c->pc = RC_ADDR(0x0000afa4u);
    rc_step(c, m, 12);
    t0 = 0x00dff0a0u;
    c->a[0] = t0;

L_AFAA:
    /* 0000afaa   4  move.l D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000afaau);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 1, RC_L);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_AFAE:
    /* 0000afae   6  move.w #2,(4,A0,D0.w) */
    c->pc = RC_ADDR(0x0000afaeu);
    rc_step(c, m, 18);
    t0 = 0x00000002u;
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x4u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AFB4:
    /* 0000afb4   2  unlk A5 */
    c->pc = RC_ADDR(0x0000afb4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_AFB6:
    /* 0000afb6   2  rts */
    c->pc = RC_ADDR(0x0000afb6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
