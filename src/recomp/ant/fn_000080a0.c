/* fn_000080a0 - 64 byte(s), 19 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000080a0(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000080a0u): goto L_80A0;
    case RC_ADDR(0x000080a4u): goto L_80A4;
    case RC_ADDR(0x000080a8u): goto L_80A8;
    case RC_ADDR(0x000080acu): goto L_80AC;
    case RC_ADDR(0x000080b0u): goto L_80B0;
    case RC_ADDR(0x000080b2u): goto L_80B2;
    case RC_ADDR(0x000080b8u): goto L_80B8;
    case RC_ADDR(0x000080bau): goto L_80BA;
    case RC_ADDR(0x000080c0u): goto L_80C0;
    case RC_ADDR(0x000080c2u): goto L_80C2;
    case RC_ADDR(0x000080c8u): goto L_80C8;
    case RC_ADDR(0x000080cau): goto L_80CA;
    case RC_ADDR(0x000080ceu): goto L_80CE;
    case RC_ADDR(0x000080d2u): goto L_80D2;
    case RC_ADDR(0x000080d6u): goto L_80D6;
    case RC_ADDR(0x000080d8u): goto L_80D8;
    case RC_ADDR(0x000080dau): goto L_80DA;
    case RC_ADDR(0x000080dcu): goto L_80DC;
    case RC_ADDR(0x000080deu): goto L_80DE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_80A0:
    /* 000080a0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000080a0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_80A4:
    /* 000080a4   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000080a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_80A8:
    /* 000080a8   4  lea (ffffd5cc,A4),A0 */
    c->pc = RC_ADDR(0x000080a8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2a34u);

L_80AC:
    /* 000080ac   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000080acu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_80B0:
    /* 000080b0   2  beq 000080dc */
    c->pc = RC_ADDR(0x000080b0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_80DC;

L_80B2:
    /* 000080b2   6  cmpi.w #f4,(8,A5) */
    c->pc = RC_ADDR(0x000080b2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x000000f4u);

L_80B8:
    /* 000080b8   2  bge 000080ca */
    c->pc = RC_ADDR(0x000080b8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_80CA;

L_80BA:
    /* 000080ba   6  cmpi.w #c2,(8,A5) */
    c->pc = RC_ADDR(0x000080bau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x000000c2u);

L_80C0:
    /* 000080c0   2  ble 000080d6 */
    c->pc = RC_ADDR(0x000080c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_80D6;

L_80C2:
    /* 000080c2   6  cmpi.w #c8,(8,A5) */
    c->pc = RC_ADDR(0x000080c2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x000000c8u);

L_80C8:
    /* 000080c8   2  bge 000080d6 */
    c->pc = RC_ADDR(0x000080c8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_80D6;

L_80CA:
    /* 000080ca   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000080cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_80CE:
    /* 000080ce   4  lea (ffffd5cc,A4),A0 */
    c->pc = RC_ADDR(0x000080ceu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2a34u);

L_80D2:
    /* 000080d2   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000080d2u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_80D6:
    /* 000080d6   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000080d6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_80D8:
    /* 000080d8   2  unlk A5 */
    c->pc = RC_ADDR(0x000080d8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_80DA:
    /* 000080da   2  rts */
    c->pc = RC_ADDR(0x000080dau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_80DC:
    /* 000080dc   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000080dcu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_80DE:
    /* 000080de   2  bra 000080d8 */
    c->pc = RC_ADDR(0x000080deu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_80D8;

}
