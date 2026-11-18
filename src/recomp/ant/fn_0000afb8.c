/* fn_0000afb8 - 46 byte(s), 16 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000afb8(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000afb8u): goto L_AFB8;
    case RC_ADDR(0x0000afbcu): goto L_AFBC;
    case RC_ADDR(0x0000afbeu): goto L_AFBE;
    case RC_ADDR(0x0000afc0u): goto L_AFC0;
    case RC_ADDR(0x0000afc2u): goto L_AFC2;
    case RC_ADDR(0x0000afc6u): goto L_AFC6;
    case RC_ADDR(0x0000afc8u): goto L_AFC8;
    case RC_ADDR(0x0000afcau): goto L_AFCA;
    case RC_ADDR(0x0000afceu): goto L_AFCE;
    case RC_ADDR(0x0000afd0u): goto L_AFD0;
    case RC_ADDR(0x0000afd2u): goto L_AFD2;
    case RC_ADDR(0x0000afd6u): goto L_AFD6;
    case RC_ADDR(0x0000afd8u): goto L_AFD8;
    case RC_ADDR(0x0000afdau): goto L_AFDA;
    case RC_ADDR(0x0000afe2u): goto L_AFE2;
    case RC_ADDR(0x0000afe4u): goto L_AFE4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_AFB8:
    /* 0000afb8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000afb8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_AFBC:
    /* 0000afbc   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000afbcu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_AFBE:
    /* 0000afbe   2  bsr 0000af96 */
    c->pc = RC_ADDR(0x0000afbeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000afc0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_AFC0:
    /* 0000afc0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000afc0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_AFC2:
    /* 0000afc2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000afc2u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AFC6:
    /* 0000afc6   2  bsr 0000af96 */
    c->pc = RC_ADDR(0x0000afc6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000afc8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_AFC8:
    /* 0000afc8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000afc8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_AFCA:
    /* 0000afca   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000afcau);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AFCE:
    /* 0000afce   2  bsr 0000af96 */
    c->pc = RC_ADDR(0x0000afceu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000afd0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_AFD0:
    /* 0000afd0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000afd0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_AFD2:
    /* 0000afd2   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000afd2u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_AFD6:
    /* 0000afd6   2  bsr 0000af96 */
    c->pc = RC_ADDR(0x0000afd6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000afd8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_AFD8:
    /* 0000afd8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000afd8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_AFDA:
    /* 0000afda   8  move.w #f,(00dff096).l */
    c->pc = RC_ADDR(0x0000afdau);
    rc_step(c, m, 20);
    t0 = 0x0000000fu;
    rc_wr16(c, m, 0x00dff096u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AFE2:
    /* 0000afe2   2  unlk A5 */
    c->pc = RC_ADDR(0x0000afe2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_AFE4:
    /* 0000afe4   2  rts */
    c->pc = RC_ADDR(0x0000afe4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
