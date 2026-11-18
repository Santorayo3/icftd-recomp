/* fn_000064c0 - 58 byte(s), 20 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000064c0(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000064c0u): goto L_64C0;
    case RC_ADDR(0x000064c4u): goto L_64C4;
    case RC_ADDR(0x000064c8u): goto L_64C8;
    case RC_ADDR(0x000064ccu): goto L_64CC;
    case RC_ADDR(0x000064ceu): goto L_64CE;
    case RC_ADDR(0x000064d2u): goto L_64D2;
    case RC_ADDR(0x000064d6u): goto L_64D6;
    case RC_ADDR(0x000064d8u): goto L_64D8;
    case RC_ADDR(0x000064dcu): goto L_64DC;
    case RC_ADDR(0x000064e0u): goto L_64E0;
    case RC_ADDR(0x000064e2u): goto L_64E2;
    case RC_ADDR(0x000064e6u): goto L_64E6;
    case RC_ADDR(0x000064eau): goto L_64EA;
    case RC_ADDR(0x000064ecu): goto L_64EC;
    case RC_ADDR(0x000064eeu): goto L_64EE;
    case RC_ADDR(0x000064f0u): goto L_64F0;
    case RC_ADDR(0x000064f2u): goto L_64F2;
    case RC_ADDR(0x000064f4u): goto L_64F4;
    case RC_ADDR(0x000064f6u): goto L_64F6;
    case RC_ADDR(0x000064f8u): goto L_64F8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_64C0:
    /* 000064c0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000064c0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_64C4:
    /* 000064c4   4  pea (000064fa) */
    c->pc = RC_ADDR(0x000064c4u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000064fau));

L_64C8:
    /* 000064c8   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x000064c8u);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x000064ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_64CC:
    /* 000064cc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000064ccu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_64CE:
    /* 000064ce   4  move.l D0,(ffff8496,A4) */
    c->pc = RC_ADDR(0x000064ceu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x7b6au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_64D2:
    /* 000064d2   4  tst.w (ffffd2a0,A4) */
    c->pc = RC_ADDR(0x000064d2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d60u));
    rc_set_nzvc(c, t0, RC_W);

L_64D6:
    /* 000064d6   2  beq 000064e2 */
    c->pc = RC_ADDR(0x000064d6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_64E2;

L_64D8:
    /* 000064d8   4  move.l (9f4,A4),-(A7) */
    c->pc = RC_ADDR(0x000064d8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x9f4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_64DC:
    /* 000064dc   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x000064dcu);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x000064e0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_64E0:
    /* 000064e0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000064e0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_64E2:
    /* 000064e2   4  move.l (ffff8496,A4),-(A7) */
    c->pc = RC_ADDR(0x000064e2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7b6au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_64E6:
    /* 000064e6   4  jsr (ffff8230,A4) */
    c->pc = RC_ADDR(0x000064e6u);
    rc_step(c, m, 18);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x000064eau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d26u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f6ccu);
    return;

L_64EA:
    /* 000064ea   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000064eau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_64EC:
    /* 000064ec   2  tst.w D0 */
    c->pc = RC_ADDR(0x000064ecu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_64EE:
    /* 000064ee   2  bne 000064f6 */
    c->pc = RC_ADDR(0x000064eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_64F6;

L_64F0:
    /* 000064f0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000064f0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_64F2:
    /* 000064f2   2  unlk A5 */
    c->pc = RC_ADDR(0x000064f2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_64F4:
    /* 000064f4   2  rts */
    c->pc = RC_ADDR(0x000064f4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_64F6:
    /* 000064f6   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000064f6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_64F8:
    /* 000064f8   2  bra 000064f2 */
    c->pc = RC_ADDR(0x000064f8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_64F2;

}
