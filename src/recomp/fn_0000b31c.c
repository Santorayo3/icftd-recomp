/* fn_0000b31c - 190 byte(s), 54 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b31c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b31cu): goto L_B31C;
    case RC_ADDR(0x0000b320u): goto L_B320;
    case RC_ADDR(0x0000b324u): goto L_B324;
    case RC_ADDR(0x0000b328u): goto L_B328;
    case RC_ADDR(0x0000b32cu): goto L_B32C;
    case RC_ADDR(0x0000b330u): goto L_B330;
    case RC_ADDR(0x0000b334u): goto L_B334;
    case RC_ADDR(0x0000b338u): goto L_B338;
    case RC_ADDR(0x0000b33cu): goto L_B33C;
    case RC_ADDR(0x0000b340u): goto L_B340;
    case RC_ADDR(0x0000b344u): goto L_B344;
    case RC_ADDR(0x0000b348u): goto L_B348;
    case RC_ADDR(0x0000b34cu): goto L_B34C;
    case RC_ADDR(0x0000b350u): goto L_B350;
    case RC_ADDR(0x0000b354u): goto L_B354;
    case RC_ADDR(0x0000b358u): goto L_B358;
    case RC_ADDR(0x0000b35cu): goto L_B35C;
    case RC_ADDR(0x0000b360u): goto L_B360;
    case RC_ADDR(0x0000b364u): goto L_B364;
    case RC_ADDR(0x0000b368u): goto L_B368;
    case RC_ADDR(0x0000b36au): goto L_B36A;
    case RC_ADDR(0x0000b36eu): goto L_B36E;
    case RC_ADDR(0x0000b372u): goto L_B372;
    case RC_ADDR(0x0000b376u): goto L_B376;
    case RC_ADDR(0x0000b37au): goto L_B37A;
    case RC_ADDR(0x0000b37eu): goto L_B37E;
    case RC_ADDR(0x0000b382u): goto L_B382;
    case RC_ADDR(0x0000b384u): goto L_B384;
    case RC_ADDR(0x0000b388u): goto L_B388;
    case RC_ADDR(0x0000b38cu): goto L_B38C;
    case RC_ADDR(0x0000b390u): goto L_B390;
    case RC_ADDR(0x0000b394u): goto L_B394;
    case RC_ADDR(0x0000b398u): goto L_B398;
    case RC_ADDR(0x0000b39cu): goto L_B39C;
    case RC_ADDR(0x0000b39eu): goto L_B39E;
    case RC_ADDR(0x0000b3a2u): goto L_B3A2;
    case RC_ADDR(0x0000b3a6u): goto L_B3A6;
    case RC_ADDR(0x0000b3aau): goto L_B3AA;
    case RC_ADDR(0x0000b3aeu): goto L_B3AE;
    case RC_ADDR(0x0000b3b2u): goto L_B3B2;
    case RC_ADDR(0x0000b3b6u): goto L_B3B6;
    case RC_ADDR(0x0000b3b8u): goto L_B3B8;
    case RC_ADDR(0x0000b3bcu): goto L_B3BC;
    case RC_ADDR(0x0000b3c0u): goto L_B3C0;
    case RC_ADDR(0x0000b3c2u): goto L_B3C2;
    case RC_ADDR(0x0000b3c6u): goto L_B3C6;
    case RC_ADDR(0x0000b3cau): goto L_B3CA;
    case RC_ADDR(0x0000b3ccu): goto L_B3CC;
    case RC_ADDR(0x0000b3ceu): goto L_B3CE;
    case RC_ADDR(0x0000b3d0u): goto L_B3D0;
    case RC_ADDR(0x0000b3d2u): goto L_B3D2;
    case RC_ADDR(0x0000b3d4u): goto L_B3D4;
    case RC_ADDR(0x0000b3d6u): goto L_B3D6;
    case RC_ADDR(0x0000b3d8u): goto L_B3D8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B31C:
    /* 0000b31c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000b31cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B320:
    /* 0000b320   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000b320u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B324:
    /* 0000b324   4  pea (0000b3e6) */
    c->pc = RC_ADDR(0x0000b324u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b3e6u));

L_B328:
    /* 0000b328   4  pea (0000b3da) */
    c->pc = RC_ADDR(0x0000b328u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b3dau));

L_B32C:
    /* 0000b32c   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0000b32cu);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0000b330u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a64u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000002f4u);
    return;

L_B330:
    /* 0000b330   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000b330u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_B334:
    /* 0000b334   4  pea (402,A4) */
    c->pc = RC_ADDR(0x0000b334u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x402u));

L_B338:
    /* 0000b338   4  pea (3f8,A4) */
    c->pc = RC_ADDR(0x0000b338u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x3f8u));

L_B33C:
    /* 0000b33c   4  pea (0000b3ec) */
    c->pc = RC_ADDR(0x0000b33cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b3ecu));

L_B340:
    /* 0000b340   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x0000b340u);
    rc_step(c, m, 18);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0000b344u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_B344:
    /* 0000b344   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000b344u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_B348:
    /* 0000b348   4  move.l D0,(3e4,A4) */
    c->pc = RC_ADDR(0x0000b348u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3e4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B34C:
    /* 0000b34c   4  beq 0000b3d6 */
    c->pc = RC_ADDR(0x0000b34cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_B3D6;

L_B350:
    /* 0000b350   4  pea (406,A4) */
    c->pc = RC_ADDR(0x0000b350u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x406u));

L_B354:
    /* 0000b354   4  pea (3fa,A4) */
    c->pc = RC_ADDR(0x0000b354u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x3fau));

L_B358:
    /* 0000b358   4  pea (0000b3f2) */
    c->pc = RC_ADDR(0x0000b358u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b3f2u));

L_B35C:
    /* 0000b35c   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x0000b35cu);
    rc_step(c, m, 18);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0000b360u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_B360:
    /* 0000b360   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000b360u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_B364:
    /* 0000b364   4  move.l D0,(3e8,A4) */
    c->pc = RC_ADDR(0x0000b364u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3e8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B368:
    /* 0000b368   2  beq 0000b3d6 */
    c->pc = RC_ADDR(0x0000b368u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_B3D6;

L_B36A:
    /* 0000b36a   4  pea (40a,A4) */
    c->pc = RC_ADDR(0x0000b36au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x40au));

L_B36E:
    /* 0000b36e   4  pea (3fc,A4) */
    c->pc = RC_ADDR(0x0000b36eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x3fcu));

L_B372:
    /* 0000b372   4  pea (0000b3f8) */
    c->pc = RC_ADDR(0x0000b372u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b3f8u));

L_B376:
    /* 0000b376   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x0000b376u);
    rc_step(c, m, 18);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0000b37au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_B37A:
    /* 0000b37a   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000b37au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_B37E:
    /* 0000b37e   4  move.l D0,(3ec,A4) */
    c->pc = RC_ADDR(0x0000b37eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3ecu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B382:
    /* 0000b382   2  beq 0000b3d6 */
    c->pc = RC_ADDR(0x0000b382u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_B3D6;

L_B384:
    /* 0000b384   4  pea (40e,A4) */
    c->pc = RC_ADDR(0x0000b384u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x40eu));

L_B388:
    /* 0000b388   4  pea (3fe,A4) */
    c->pc = RC_ADDR(0x0000b388u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x3feu));

L_B38C:
    /* 0000b38c   4  pea (0000b3fe) */
    c->pc = RC_ADDR(0x0000b38cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b3feu));

L_B390:
    /* 0000b390   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x0000b390u);
    rc_step(c, m, 18);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0000b394u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_B394:
    /* 0000b394   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000b394u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_B398:
    /* 0000b398   4  move.l D0,(3f0,A4) */
    c->pc = RC_ADDR(0x0000b398u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3f0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B39C:
    /* 0000b39c   2  beq 0000b3d6 */
    c->pc = RC_ADDR(0x0000b39cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_B3D6;

L_B39E:
    /* 0000b39e   4  pea (412,A4) */
    c->pc = RC_ADDR(0x0000b39eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x412u));

L_B3A2:
    /* 0000b3a2   4  pea (400,A4) */
    c->pc = RC_ADDR(0x0000b3a2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x400u));

L_B3A6:
    /* 0000b3a6   4  pea (0000b404) */
    c->pc = RC_ADDR(0x0000b3a6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b404u));

L_B3AA:
    /* 0000b3aa   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x0000b3aau);
    rc_step(c, m, 18);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x0000b3aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_B3AE:
    /* 0000b3ae   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000b3aeu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_B3B2:
    /* 0000b3b2   4  move.l D0,(3f4,A4) */
    c->pc = RC_ADDR(0x0000b3b2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x3f4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B3B6:
    /* 0000b3b6   2  beq 0000b3d6 */
    c->pc = RC_ADDR(0x0000b3b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_B3D6;

L_B3B8:
    /* 0000b3b8   4  pea (0000b40b) */
    c->pc = RC_ADDR(0x0000b3b8u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b40bu));

L_B3BC:
    /* 0000b3bc   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000b3bcu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000b3c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ce0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000202c4u);
    return;

L_B3C0:
    /* 0000b3c0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b3c0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B3C2:
    /* 0000b3c2   4  pea (0000b419) */
    c->pc = RC_ADDR(0x0000b3c2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b419u));

L_B3C6:
    /* 0000b3c6   4  jsr (ffff8230,A4) */
    c->pc = RC_ADDR(0x0000b3c6u);
    rc_step(c, m, 18);
    /* vector 93 */
    rc_push32(c, m, RC_ADDR(0x0000b3cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c86u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001de7au);
    return;

L_B3CA:
    /* 0000b3ca   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b3cau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B3CC:
    /* 0000b3cc   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000b3ccu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_B3CE:
    /* 0000b3ce   2  beq 0000b3d6 */
    c->pc = RC_ADDR(0x0000b3ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_B3D6;

L_B3D0:
    /* 0000b3d0   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000b3d0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_B3D2:
    /* 0000b3d2   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b3d2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B3D4:
    /* 0000b3d4   2  rts */
    c->pc = RC_ADDR(0x0000b3d4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_B3D6:
    /* 0000b3d6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000b3d6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_B3D8:
    /* 0000b3d8   2  bra 0000b3d2 */
    c->pc = RC_ADDR(0x0000b3d8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_B3D2;

}
