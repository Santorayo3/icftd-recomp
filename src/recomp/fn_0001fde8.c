/* fn_0001fde8 - 102 byte(s), 27 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001fde8(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fde8u): goto L_1FDE8;
    case RC_ADDR(0x0001fdecu): goto L_1FDEC;
    case RC_ADDR(0x0001fdf0u): goto L_1FDF0;
    case RC_ADDR(0x0001fdf4u): goto L_1FDF4;
    case RC_ADDR(0x0001fdf8u): goto L_1FDF8;
    case RC_ADDR(0x0001fdfcu): goto L_1FDFC;
    case RC_ADDR(0x0001fe00u): goto L_1FE00;
    case RC_ADDR(0x0001fe04u): goto L_1FE04;
    case RC_ADDR(0x0001fe08u): goto L_1FE08;
    case RC_ADDR(0x0001fe0cu): goto L_1FE0C;
    case RC_ADDR(0x0001fe10u): goto L_1FE10;
    case RC_ADDR(0x0001fe14u): goto L_1FE14;
    case RC_ADDR(0x0001fe16u): goto L_1FE16;
    case RC_ADDR(0x0001fe1au): goto L_1FE1A;
    case RC_ADDR(0x0001fe20u): goto L_1FE20;
    case RC_ADDR(0x0001fe22u): goto L_1FE22;
    case RC_ADDR(0x0001fe26u): goto L_1FE26;
    case RC_ADDR(0x0001fe2au): goto L_1FE2A;
    case RC_ADDR(0x0001fe2eu): goto L_1FE2E;
    case RC_ADDR(0x0001fe32u): goto L_1FE32;
    case RC_ADDR(0x0001fe36u): goto L_1FE36;
    case RC_ADDR(0x0001fe3au): goto L_1FE3A;
    case RC_ADDR(0x0001fe3eu): goto L_1FE3E;
    case RC_ADDR(0x0001fe42u): goto L_1FE42;
    case RC_ADDR(0x0001fe46u): goto L_1FE46;
    case RC_ADDR(0x0001fe4au): goto L_1FE4A;
    case RC_ADDR(0x0001fe4cu): goto L_1FE4C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FDE8:
    /* 0001fde8   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001fde8u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1FDEC:
    /* 0001fdec   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fdecu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FDF0:
    /* 0001fdf0   4  move.w (12,A0),-(A7) */
    c->pc = RC_ADDR(0x0001fdf0u);
    t0 = rc_rd16(c, m, (c->a[0] + 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FDF4:
    /* 0001fdf4   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fdf4u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FDF8:
    /* 0001fdf8   4  pea (14,A0) */
    c->pc = RC_ADDR(0x0001fdf8u);
    rc_push32(c, m, (c->a[0] + 0x14u));

L_1FDFC:
    /* 0001fdfc   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fdfcu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FE00:
    /* 0001fe00   4  move.l (4,A0),-(A7) */
    c->pc = RC_ADDR(0x0001fe00u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FE04:
    /* 0001fe04   4  jsr (0001fd7a) */
    c->pc = RC_ADDR(0x0001fe04u);
    rc_push32(c, m, RC_ADDR(0x0001fe08u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fd7au);
    return;

L_1FE08:
    /* 0001fe08   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001fe08u);
    c->a[7] = (c->a[7] + 0xau);

L_1FE0C:
    /* 0001fe0c   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001fe0cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FE10:
    /* 0001fe10   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001fe10u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_1FE14:
    /* 0001fe14   2  beq 0001fe46 */
    c->pc = RC_ADDR(0x0001fe14u);
    if (rc_cond(c, 7)) goto L_1FE46;

L_1FE16:
    /* 0001fe16   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fe16u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FE1A:
    /* 0001fe1a   6  btst #2,(11,A0) */
    c->pc = RC_ADDR(0x0001fe1au);
    t4 = 0x00000002u;
    t3 = (c->a[0] + 0x11u);
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1FE20:
    /* 0001fe20   2  beq 0001fe46 */
    c->pc = RC_ADDR(0x0001fe20u);
    if (rc_cond(c, 7)) goto L_1FE46;

L_1FE22:
    /* 0001fe22   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fe22u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FE26:
    /* 0001fe26   4  move.w (12,A0),-(A7) */
    c->pc = RC_ADDR(0x0001fe26u);
    t0 = rc_rd16(c, m, (c->a[0] + 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FE2A:
    /* 0001fe2a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fe2au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FE2E:
    /* 0001fe2e   4  pea (94,A0) */
    c->pc = RC_ADDR(0x0001fe2eu);
    rc_push32(c, m, (c->a[0] + 0x94u));

L_1FE32:
    /* 0001fe32   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fe32u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FE36:
    /* 0001fe36   4  move.l (8,A0),-(A7) */
    c->pc = RC_ADDR(0x0001fe36u);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FE3A:
    /* 0001fe3a   4  jsr (0001fd7a) */
    c->pc = RC_ADDR(0x0001fe3au);
    rc_push32(c, m, RC_ADDR(0x0001fe3eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fd7au);
    return;

L_1FE3E:
    /* 0001fe3e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001fe3eu);
    c->a[7] = (c->a[7] + 0xau);

L_1FE42:
    /* 0001fe42   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001fe42u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FE46:
    /* 0001fe46   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001fe46u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FE4A:
    /* 0001fe4a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001fe4au);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FE4C:
    /* 0001fe4c   2  rts */
    c->pc = RC_ADDR(0x0001fe4cu);
    rc_ret(c, m);
    return;

}
