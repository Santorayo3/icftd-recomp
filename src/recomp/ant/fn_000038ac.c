/* fn_000038ac - 44 byte(s), 15 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000038ac(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000038acu): goto L_38AC;
    case RC_ADDR(0x000038b0u): goto L_38B0;
    case RC_ADDR(0x000038b4u): goto L_38B4;
    case RC_ADDR(0x000038b8u): goto L_38B8;
    case RC_ADDR(0x000038bau): goto L_38BA;
    case RC_ADDR(0x000038beu): goto L_38BE;
    case RC_ADDR(0x000038c2u): goto L_38C2;
    case RC_ADDR(0x000038c6u): goto L_38C6;
    case RC_ADDR(0x000038c8u): goto L_38C8;
    case RC_ADDR(0x000038cau): goto L_38CA;
    case RC_ADDR(0x000038ccu): goto L_38CC;
    case RC_ADDR(0x000038ceu): goto L_38CE;
    case RC_ADDR(0x000038d0u): goto L_38D0;
    case RC_ADDR(0x000038d2u): goto L_38D2;
    case RC_ADDR(0x000038d6u): goto L_38D6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_38AC:
    /* 000038ac   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000038acu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_38B0:
    /* 000038b0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000038b0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_38B4:
    /* 000038b4   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x000038b4u);
    rc_step(c, m, 18);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x000038b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f584u);
    return;

L_38B8:
    /* 000038b8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000038b8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_38BA:
    /* 000038ba   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000038bau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_38BE:
    /* 000038be   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000038beu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_38C2:
    /* 000038c2   4  jsr (ffff8230,A4) */
    c->pc = RC_ADDR(0x000038c2u);
    rc_step(c, m, 18);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x000038c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d26u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f6ccu);
    return;

L_38C6:
    /* 000038c6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000038c6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_38C8:
    /* 000038c8   2  tst.w D0 */
    c->pc = RC_ADDR(0x000038c8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_38CA:
    /* 000038ca   2  bne 000038d2 */
    c->pc = RC_ADDR(0x000038cau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_38D2;

L_38CC:
    /* 000038cc   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000038ccu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_38CE:
    /* 000038ce   2  unlk A5 */
    c->pc = RC_ADDR(0x000038ceu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_38D0:
    /* 000038d0   2  rts */
    c->pc = RC_ADDR(0x000038d0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_38D2:
    /* 000038d2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000038d2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_38D6:
    /* 000038d6   2  bra 000038ce */
    c->pc = RC_ADDR(0x000038d6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_38CE;

}
