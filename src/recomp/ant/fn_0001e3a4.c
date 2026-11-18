/* fn_0001e3a4 - 82 byte(s), 27 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001e3a4(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e3a4u): goto L_1E3A4;
    case RC_ADDR(0x0001e3a8u): goto L_1E3A8;
    case RC_ADDR(0x0001e3acu): goto L_1E3AC;
    case RC_ADDR(0x0001e3b0u): goto L_1E3B0;
    case RC_ADDR(0x0001e3b2u): goto L_1E3B2;
    case RC_ADDR(0x0001e3b6u): goto L_1E3B6;
    case RC_ADDR(0x0001e3bau): goto L_1E3BA;
    case RC_ADDR(0x0001e3bcu): goto L_1E3BC;
    case RC_ADDR(0x0001e3beu): goto L_1E3BE;
    case RC_ADDR(0x0001e3c2u): goto L_1E3C2;
    case RC_ADDR(0x0001e3c6u): goto L_1E3C6;
    case RC_ADDR(0x0001e3c8u): goto L_1E3C8;
    case RC_ADDR(0x0001e3ccu): goto L_1E3CC;
    case RC_ADDR(0x0001e3d0u): goto L_1E3D0;
    case RC_ADDR(0x0001e3d2u): goto L_1E3D2;
    case RC_ADDR(0x0001e3d4u): goto L_1E3D4;
    case RC_ADDR(0x0001e3d8u): goto L_1E3D8;
    case RC_ADDR(0x0001e3dcu): goto L_1E3DC;
    case RC_ADDR(0x0001e3deu): goto L_1E3DE;
    case RC_ADDR(0x0001e3e0u): goto L_1E3E0;
    case RC_ADDR(0x0001e3e4u): goto L_1E3E4;
    case RC_ADDR(0x0001e3e6u): goto L_1E3E6;
    case RC_ADDR(0x0001e3eau): goto L_1E3EA;
    case RC_ADDR(0x0001e3ecu): goto L_1E3EC;
    case RC_ADDR(0x0001e3eeu): goto L_1E3EE;
    case RC_ADDR(0x0001e3f2u): goto L_1E3F2;
    case RC_ADDR(0x0001e3f4u): goto L_1E3F4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E3A4:
    /* 0001e3a4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e3a4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E3A8:
    /* 0001e3a8   4  lea (ffffcf46,A4),A0 */
    c->pc = RC_ADDR(0x0001e3a8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x30bau);

L_1E3AC:
    /* 0001e3ac   4  cmpi.w #180,(A0)+ */
    c->pc = RC_ADDR(0x0001e3acu);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_cmp(c, RC_W, t0, 0x00000180u);

L_1E3B0:
    /* 0001e3b0   2  bne 0001e3ac */
    c->pc = RC_ADDR(0x0001e3b0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1E3AC; }

L_1E3B2:
    /* 0001e3b2   4  lea (2cf2,A4),A1 */
    c->pc = RC_ADDR(0x0001e3b2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2cf2u);

L_1E3B6:
    /* 0001e3b6   4  move.w #f,D0 */
    c->pc = RC_ADDR(0x0001e3b6u);
    rc_step(c, m, 8);
    t0 = 0x0000000fu;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E3BA:
    /* 0001e3ba   2  move.w (A1)+,(A0) */
    c->pc = RC_ADDR(0x0001e3bau);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E3BC:
    /* 0001e3bc   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x0001e3bcu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_1E3BE:
    /* 0001e3be   4  dbf D0,0001e3ba */
    c->pc = RC_ADDR(0x0001e3beu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1E3BA; }
    }

L_1E3C2:
    /* 0001e3c2   4  cmpi.w #180,(A0)+ */
    c->pc = RC_ADDR(0x0001e3c2u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_cmp(c, RC_W, t0, 0x00000180u);

L_1E3C6:
    /* 0001e3c6   2  bne 0001e3c2 */
    c->pc = RC_ADDR(0x0001e3c6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1E3C2; }

L_1E3C8:
    /* 0001e3c8   4  lea (2d32,A4),A1 */
    c->pc = RC_ADDR(0x0001e3c8u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2d32u);

L_1E3CC:
    /* 0001e3cc   4  move.w #7,D0 */
    c->pc = RC_ADDR(0x0001e3ccu);
    rc_step(c, m, 8);
    t0 = 0x00000007u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E3D0:
    /* 0001e3d0   2  move.w (A1)+,(A0) */
    c->pc = RC_ADDR(0x0001e3d0u);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E3D2:
    /* 0001e3d2   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x0001e3d2u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_1E3D4:
    /* 0001e3d4   4  dbf D0,0001e3d0 */
    c->pc = RC_ADDR(0x0001e3d4u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1E3D0; }
    }

L_1E3D8:
    /* 0001e3d8   4  cmpi.w #180,(A0)+ */
    c->pc = RC_ADDR(0x0001e3d8u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_cmp(c, RC_W, t0, 0x00000180u);

L_1E3DC:
    /* 0001e3dc   2  bne 0001e3d8 */
    c->pc = RC_ADDR(0x0001e3dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1E3D8; }

L_1E3DE:
    /* 0001e3de   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x0001e3deu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_1E3E0:
    /* 0001e3e0   4  lea (2d72,A4),A1 */
    c->pc = RC_ADDR(0x0001e3e0u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x2d72u);

L_1E3E4:
    /* 0001e3e4   2  addq.l #2,A1 */
    c->pc = RC_ADDR(0x0001e3e4u);
    rc_step(c, m, 8);
    c->a[1] += 0x00000002u;

L_1E3E6:
    /* 0001e3e6   4  move.w #1a,D0 */
    c->pc = RC_ADDR(0x0001e3e6u);
    rc_step(c, m, 8);
    t0 = 0x0000001au;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E3EA:
    /* 0001e3ea   2  move.w (A1)+,(A0) */
    c->pc = RC_ADDR(0x0001e3eau);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1E3EC:
    /* 0001e3ec   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x0001e3ecu);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_1E3EE:
    /* 0001e3ee   4  dbf D0,0001e3ea */
    c->pc = RC_ADDR(0x0001e3eeu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_1E3EA; }
    }

L_1E3F2:
    /* 0001e3f2   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e3f2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E3F4:
    /* 0001e3f4   2  rts */
    c->pc = RC_ADDR(0x0001e3f4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
