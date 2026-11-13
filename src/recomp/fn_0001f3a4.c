/* fn_0001f3a4 - 58 byte(s), 16 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f3a4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f3a4u): goto L_1F3A4;
    case RC_ADDR(0x0001f3a6u): goto L_1F3A6;
    case RC_ADDR(0x0001f3aau): goto L_1F3AA;
    case RC_ADDR(0x0001f3acu): goto L_1F3AC;
    case RC_ADDR(0x0001f3b0u): goto L_1F3B0;
    case RC_ADDR(0x0001f3b4u): goto L_1F3B4;
    case RC_ADDR(0x0001f3b8u): goto L_1F3B8;
    case RC_ADDR(0x0001f3bcu): goto L_1F3BC;
    case RC_ADDR(0x0001f3c0u): goto L_1F3C0;
    case RC_ADDR(0x0001f3c2u): goto L_1F3C2;
    case RC_ADDR(0x0001f3c4u): goto L_1F3C4;
    case RC_ADDR(0x0001f3c6u): goto L_1F3C6;
    case RC_ADDR(0x0001f3ccu): goto L_1F3CC;
    case RC_ADDR(0x0001f3d2u): goto L_1F3D2;
    case RC_ADDR(0x0001f3d6u): goto L_1F3D6;
    case RC_ADDR(0x0001f3dau): goto L_1F3DA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F3A4:
    /* 0001f3a4   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f3a4u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F3A6:
    /* 0001f3a6   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x0001f3a6u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F3AA:
    /* 0001f3aa   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001f3aau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F3AC:
    /* 0001f3ac   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f3acu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F3B0:
    /* 0001f3b0   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0001f3b0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_1F3B4:
    /* 0001f3b4   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0001f3b4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F3B8:
    /* 0001f3b8   4  jsr (ffff822a,A4) */
    c->pc = RC_ADDR(0x0001f3b8u);
    rc_step(c, m, 18);
    /* vector 92 */
    rc_push32(c, m, RC_ADDR(0x0001f3bcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001dd6eu);
    return;

L_1F3BC:
    /* 0001f3bc   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001f3bcu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1F3C0:
    /* 0001f3c0   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x0001f3c0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_1F3C2:
    /* 0001f3c2   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0001f3c2u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F3C4:
    /* 0001f3c4   2  beq 0001f3da */
    c->pc = RC_ADDR(0x0001f3c4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F3DA;

L_1F3C6:
    /* 0001f3c6   6  move.l (10,A5),(18,A2) */
    c->pc = RC_ADDR(0x0001f3c6u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_wr32(c, m, (c->a[2] + 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F3CC:
    /* 0001f3cc   6  move.l (14,A5),(1c,A2) */
    c->pc = RC_ADDR(0x0001f3ccu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_wr32(c, m, (c->a[2] + 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F3D2:
    /* 0001f3d2   4  clr.l (24,A2) */
    c->pc = RC_ADDR(0x0001f3d2u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0x24u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F3D6:
    /* 0001f3d6   4  clr.l (20,A2) */
    c->pc = RC_ADDR(0x0001f3d6u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0x20u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F3DA:
    /* 0001f3da   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f3dau);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
