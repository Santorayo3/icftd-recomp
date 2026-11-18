/* fn_000197e8 - 66 byte(s), 17 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000197e8(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000197e8u): goto L_197E8;
    case RC_ADDR(0x000197ecu): goto L_197EC;
    case RC_ADDR(0x000197f0u): goto L_197F0;
    case RC_ADDR(0x000197f4u): goto L_197F4;
    case RC_ADDR(0x000197fau): goto L_197FA;
    case RC_ADDR(0x000197feu): goto L_197FE;
    case RC_ADDR(0x00019804u): goto L_19804;
    case RC_ADDR(0x00019808u): goto L_19808;
    case RC_ADDR(0x0001980eu): goto L_1980E;
    case RC_ADDR(0x00019812u): goto L_19812;
    case RC_ADDR(0x00019816u): goto L_19816;
    case RC_ADDR(0x00019818u): goto L_19818;
    case RC_ADDR(0x0001981cu): goto L_1981C;
    case RC_ADDR(0x00019820u): goto L_19820;
    case RC_ADDR(0x00019824u): goto L_19824;
    case RC_ADDR(0x00019826u): goto L_19826;
    case RC_ADDR(0x00019828u): goto L_19828;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_197E8:
    /* 000197e8   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000197e8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_197EC:
    /* 000197ec   4  jsr (000198b0) */
    c->pc = RC_ADDR(0x000197ecu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000197f0u));
    rc_depth++;
    c->pc = RC_ADDR(0x000198b0u);
    return;

L_197F0:
    /* 000197f0   4  movea.l (ffffd290,A4),A0 */
    c->pc = RC_ADDR(0x000197f0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d70u));
    c->a[0] = t0;

L_197F4:
    /* 000197f4   6  move.l (4,A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x000197f4u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_197FA:
    /* 000197fa   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000197fau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_197FE:
    /* 000197fe   6  move.l (182c,A4),(4,A0) */
    c->pc = RC_ADDR(0x000197feu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x182cu));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_19804:
    /* 00019804   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00019804u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_19808:
    /* 00019808   6  move.w (1830,A4),(8,A0) */
    c->pc = RC_ADDR(0x00019808u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1830u));
    rc_wr16(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1980E:
    /* 0001980e   4  move.l (ffffd290,A4),-(A7) */
    c->pc = RC_ADDR(0x0001980eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d70u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_19812:
    /* 00019812   4  jsr (ffff8398,A4) */
    c->pc = RC_ADDR(0x00019812u);
    rc_step(c, m, 18);
    /* vector 153 */
    rc_push32(c, m, RC_ADDR(0x00019816u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002393au);
    return;

L_19816:
    /* 00019816   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00019816u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_19818:
    /* 00019818   4  pea (00000190).l */
    c->pc = RC_ADDR(0x00019818u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000190u);

L_1981C:
    /* 0001981c   4  move.l (140c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001981cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_19820:
    /* 00019820   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00019820u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00019824u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_19824:
    /* 00019824   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00019824u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_19826:
    /* 00019826   2  unlk A5 */
    c->pc = RC_ADDR(0x00019826u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_19828:
    /* 00019828   2  rts */
    c->pc = RC_ADDR(0x00019828u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
