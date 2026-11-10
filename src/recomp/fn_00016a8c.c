/* fn_00016a8c - 56 byte(s), 18 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016a8c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00016a8cu): goto L_16A8C;
    case RC_ADDR(0x00016a90u): goto L_16A90;
    case RC_ADDR(0x00016a94u): goto L_16A94;
    case RC_ADDR(0x00016a98u): goto L_16A98;
    case RC_ADDR(0x00016a9au): goto L_16A9A;
    case RC_ADDR(0x00016a9eu): goto L_16A9E;
    case RC_ADDR(0x00016aa2u): goto L_16AA2;
    case RC_ADDR(0x00016aa6u): goto L_16AA6;
    case RC_ADDR(0x00016aa8u): goto L_16AA8;
    case RC_ADDR(0x00016aaeu): goto L_16AAE;
    case RC_ADDR(0x00016ab0u): goto L_16AB0;
    case RC_ADDR(0x00016ab2u): goto L_16AB2;
    case RC_ADDR(0x00016ab4u): goto L_16AB4;
    case RC_ADDR(0x00016ab6u): goto L_16AB6;
    case RC_ADDR(0x00016abau): goto L_16ABA;
    case RC_ADDR(0x00016abeu): goto L_16ABE;
    case RC_ADDR(0x00016ac0u): goto L_16AC0;
    case RC_ADDR(0x00016ac2u): goto L_16AC2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16A8C:
    /* 00016a8c   4  link.w A5,#ffffffc2 */
    c->pc = RC_ADDR(0x00016a8cu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x3eu;

L_16A90:
    /* 00016a90   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00016a90u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16A94:
    /* 00016a94   4  pea (ffffffc4,A5) */
    c->pc = RC_ADDR(0x00016a94u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x3cu));

L_16A98:
    /* 00016a98   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00016a98u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_16A9A:
    /* 00016a9a   4  jsr (ffff824e,A4) */
    c->pc = RC_ADDR(0x00016a9au);
    rc_step(c, m);
    /* vector 98 */
    rc_push32(c, m, RC_ADDR(0x00016a9eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ca4u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001ec42u);
    return;

L_16A9E:
    /* 00016a9e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00016a9eu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_16AA2:
    /* 00016aa2   4  move.w D0,(ffffffc2,A5) */
    c->pc = RC_ADDR(0x00016aa2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x3eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16AA6:
    /* 00016aa6   2  beq 00016ac2 */
    c->pc = RC_ADDR(0x00016aa6u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_16AC2;

L_16AA8:
    /* 00016aa8   6  cmpi.w #3039,(ffffffc2,A5) */
    c->pc = RC_ADDR(0x00016aa8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x3eu));
    rc_cmp(c, RC_W, t0, 0x00003039u);

L_16AAE:
    /* 00016aae   2  bne 00016ab6 */
    c->pc = RC_ADDR(0x00016aaeu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_16AB6;

L_16AB0:
    /* 00016ab0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00016ab0u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_16AB2:
    /* 00016ab2   2  unlk A5 */
    c->pc = RC_ADDR(0x00016ab2u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16AB4:
    /* 00016ab4   2  rts */
    c->pc = RC_ADDR(0x00016ab4u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_16AB6:
    /* 00016ab6   4  pea (ffffffc4,A5) */
    c->pc = RC_ADDR(0x00016ab6u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x3cu));

L_16ABA:
    /* 00016aba   4  jsr (00016978) */
    c->pc = RC_ADDR(0x00016abau);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00016abeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016978u);
    return;

L_16ABE:
    /* 00016abe   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00016abeu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_16AC0:
    /* 00016ac0   2  bra 00016ab2 */
    c->pc = RC_ADDR(0x00016ac0u);
    rc_step(c, m);
    rc_tick();
    goto L_16AB2;

L_16AC2:
    /* 00016ac2   2  bra 00016ab2 */
    c->pc = RC_ADDR(0x00016ac2u);
    rc_step(c, m);
    rc_tick();
    goto L_16AB2;

}
