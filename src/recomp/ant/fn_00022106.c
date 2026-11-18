/* fn_00022106 - 50 byte(s), 17 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022106(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00022106u): goto L_22106;
    case RC_ADDR(0x0002210au): goto L_2210A;
    case RC_ADDR(0x0002210cu): goto L_2210C;
    case RC_ADDR(0x00022110u): goto L_22110;
    case RC_ADDR(0x00022114u): goto L_22114;
    case RC_ADDR(0x00022118u): goto L_22118;
    case RC_ADDR(0x0002211cu): goto L_2211C;
    case RC_ADDR(0x00022120u): goto L_22120;
    case RC_ADDR(0x00022122u): goto L_22122;
    case RC_ADDR(0x00022128u): goto L_22128;
    case RC_ADDR(0x0002212au): goto L_2212A;
    case RC_ADDR(0x0002212cu): goto L_2212C;
    case RC_ADDR(0x0002212eu): goto L_2212E;
    case RC_ADDR(0x00022130u): goto L_22130;
    case RC_ADDR(0x00022132u): goto L_22132;
    case RC_ADDR(0x00022134u): goto L_22134;
    case RC_ADDR(0x00022136u): goto L_22136;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22106:
    /* 00022106   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x00022106u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_2210A:
    /* 0002210a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0002210au);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2210C:
    /* 0002210c   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0002210cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22110:
    /* 00022110   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00022110u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22114:
    /* 00022114   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x00022114u);
    rc_step(c, m, 18);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x00022118u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d68u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020cbau);
    return;

L_22118:
    /* 00022118   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00022118u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_2211C:
    /* 0002211c   4  move.w D0,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0002211cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22120:
    /* 00022120   2  beq 00022134 */
    c->pc = RC_ADDR(0x00022120u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22134;

L_22122:
    /* 00022122   6  cmpi.w #3039,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00022122u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_cmp(c, RC_W, t0, 0x00003039u);

L_22128:
    /* 00022128   2  bne 00022130 */
    c->pc = RC_ADDR(0x00022128u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22130;

L_2212A:
    /* 0002212a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0002212au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2212C:
    /* 0002212c   2  unlk A5 */
    c->pc = RC_ADDR(0x0002212cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2212E:
    /* 0002212e   2  rts */
    c->pc = RC_ADDR(0x0002212eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_22130:
    /* 00022130   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00022130u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_22132:
    /* 00022132   2  bra 0002212c */
    c->pc = RC_ADDR(0x00022132u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2212C;

L_22134:
    /* 00022134   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00022134u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_22136:
    /* 00022136   2  bra 0002212c */
    c->pc = RC_ADDR(0x00022136u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2212C;

}
