/* fn_0000c73c - 36 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000c73c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c73cu): goto L_C73C;
    case RC_ADDR(0x0000c740u): goto L_C740;
    case RC_ADDR(0x0000c744u): goto L_C744;
    case RC_ADDR(0x0000c748u): goto L_C748;
    case RC_ADDR(0x0000c74cu): goto L_C74C;
    case RC_ADDR(0x0000c750u): goto L_C750;
    case RC_ADDR(0x0000c754u): goto L_C754;
    case RC_ADDR(0x0000c758u): goto L_C758;
    case RC_ADDR(0x0000c75cu): goto L_C75C;
    case RC_ADDR(0x0000c75eu): goto L_C75E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C73C:
    /* 0000c73c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000c73cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_C740:
    /* 0000c740   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0000c740u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C744:
    /* 0000c744   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000c744u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C748:
    /* 0000c748   4  move.l (e00,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c748u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C74C:
    /* 0000c74c   4  move.w (df6,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c74cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdf6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C750:
    /* 0000c750   4  move.l (de2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c750u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xde2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C754:
    /* 0000c754   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0000c754u);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0000c758u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_C758:
    /* 0000c758   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000c758u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_C75C:
    /* 0000c75c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c75cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C75E:
    /* 0000c75e   2  rts */
    c->pc = RC_ADDR(0x0000c75eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
