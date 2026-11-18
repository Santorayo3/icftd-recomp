/* fn_0000f880 - 40 byte(s), 12 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000f880(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f880u): goto L_F880;
    case RC_ADDR(0x0000f884u): goto L_F884;
    case RC_ADDR(0x0000f888u): goto L_F888;
    case RC_ADDR(0x0000f88cu): goto L_F88C;
    case RC_ADDR(0x0000f890u): goto L_F890;
    case RC_ADDR(0x0000f894u): goto L_F894;
    case RC_ADDR(0x0000f896u): goto L_F896;
    case RC_ADDR(0x0000f89au): goto L_F89A;
    case RC_ADDR(0x0000f89eu): goto L_F89E;
    case RC_ADDR(0x0000f8a2u): goto L_F8A2;
    case RC_ADDR(0x0000f8a4u): goto L_F8A4;
    case RC_ADDR(0x0000f8a6u): goto L_F8A6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F880:
    /* 0000f880   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000f880u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_F884:
    /* 0000f884   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x0000f884u);
    rc_step(c, m, 18);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x0000f888u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afb8u);
    return;

L_F888:
    /* 0000f888   4  move.l (112a,A4),-(A7) */
    c->pc = RC_ADDR(0x0000f888u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x112au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F88C:
    /* 0000f88c   4  move.l (111e,A4),-(A7) */
    c->pc = RC_ADDR(0x0000f88cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x111eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F890:
    /* 0000f890   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000f890u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000f894u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_F894:
    /* 0000f894   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000f894u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F896:
    /* 0000f896   4  move.l (112e,A4),-(A7) */
    c->pc = RC_ADDR(0x0000f896u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x112eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F89A:
    /* 0000f89a   4  move.l (1122,A4),-(A7) */
    c->pc = RC_ADDR(0x0000f89au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1122u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F89E:
    /* 0000f89e   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000f89eu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000f8a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_F8A2:
    /* 0000f8a2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000f8a2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F8A4:
    /* 0000f8a4   2  unlk A5 */
    c->pc = RC_ADDR(0x0000f8a4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_F8A6:
    /* 0000f8a6   2  rts */
    c->pc = RC_ADDR(0x0000f8a6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
