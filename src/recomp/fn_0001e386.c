/* fn_0001e386 - 112 byte(s), 33 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001e386(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e386u): goto L_1E386;
    case RC_ADDR(0x0001e38au): goto L_1E38A;
    case RC_ADDR(0x0001e38eu): goto L_1E38E;
    case RC_ADDR(0x0001e394u): goto L_1E394;
    case RC_ADDR(0x0001e398u): goto L_1E398;
    case RC_ADDR(0x0001e39cu): goto L_1E39C;
    case RC_ADDR(0x0001e39eu): goto L_1E39E;
    case RC_ADDR(0x0001e3a2u): goto L_1E3A2;
    case RC_ADDR(0x0001e3a4u): goto L_1E3A4;
    case RC_ADDR(0x0001e3a8u): goto L_1E3A8;
    case RC_ADDR(0x0001e3acu): goto L_1E3AC;
    case RC_ADDR(0x0001e3aeu): goto L_1E3AE;
    case RC_ADDR(0x0001e3b2u): goto L_1E3B2;
    case RC_ADDR(0x0001e3b6u): goto L_1E3B6;
    case RC_ADDR(0x0001e3bau): goto L_1E3BA;
    case RC_ADDR(0x0001e3beu): goto L_1E3BE;
    case RC_ADDR(0x0001e3c0u): goto L_1E3C0;
    case RC_ADDR(0x0001e3c4u): goto L_1E3C4;
    case RC_ADDR(0x0001e3c8u): goto L_1E3C8;
    case RC_ADDR(0x0001e3ccu): goto L_1E3CC;
    case RC_ADDR(0x0001e3ceu): goto L_1E3CE;
    case RC_ADDR(0x0001e3d0u): goto L_1E3D0;
    case RC_ADDR(0x0001e3d4u): goto L_1E3D4;
    case RC_ADDR(0x0001e3d8u): goto L_1E3D8;
    case RC_ADDR(0x0001e3dcu): goto L_1E3DC;
    case RC_ADDR(0x0001e3deu): goto L_1E3DE;
    case RC_ADDR(0x0001e3e2u): goto L_1E3E2;
    case RC_ADDR(0x0001e3e6u): goto L_1E3E6;
    case RC_ADDR(0x0001e3eau): goto L_1E3EA;
    case RC_ADDR(0x0001e3ecu): goto L_1E3EC;
    case RC_ADDR(0x0001e3f0u): goto L_1E3F0;
    case RC_ADDR(0x0001e3f2u): goto L_1E3F2;
    case RC_ADDR(0x0001e3f4u): goto L_1E3F4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E386:
    /* 0001e386   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e386u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E38A:
    /* 0001e38a   4  movem.l { D3 D4 D5 A0 A1 A2 A3 A4 A5 },-(SP) */
    c->pc = RC_ADDR(0x0001e38au);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    c->a[7] = t3;

L_1E38E:
    /* 0001e38e   6  jsr (0002098a).l */
    c->pc = RC_ADDR(0x0001e38eu);
    rc_step(c, m, 20);
    rc_push32(c, m, RC_ADDR(0x0001e394u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002098au);
    return;

L_1E394:
    /* 0001e394   4  addq.l #1,(ffffcb60,A4) */
    c->pc = RC_ADDR(0x0001e394u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x34a0u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1E398:
    /* 0001e398   4  tst.w (ffffcb00,A4) */
    c->pc = RC_ADDR(0x0001e398u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3500u));
    rc_set_nzvc(c, t0, RC_W);

L_1E39C:
    /* 0001e39c   2  beq 0001e3ec */
    c->pc = RC_ADDR(0x0001e39cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E3EC;

L_1E39E:
    /* 0001e39e   4  tst.w (fffffecc,A4) */
    c->pc = RC_ADDR(0x0001e39eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x134u));
    rc_set_nzvc(c, t0, RC_W);

L_1E3A2:
    /* 0001e3a2   2  beq 0001e3a8 */
    c->pc = RC_ADDR(0x0001e3a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E3A8;

L_1E3A4:
    /* 0001e3a4   4  jsr (0001d96e) */
    c->pc = RC_ADDR(0x0001e3a4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e3a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d96eu);
    return;

L_1E3A8:
    /* 0001e3a8   4  tst.w (28c0,A4) */
    c->pc = RC_ADDR(0x0001e3a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x28c0u));
    rc_set_nzvc(c, t0, RC_W);

L_1E3AC:
    /* 0001e3ac   2  beq 0001e3d0 */
    c->pc = RC_ADDR(0x0001e3acu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1E3D0;

L_1E3AE:
    /* 0001e3ae   4  jsr (0001da20) */
    c->pc = RC_ADDR(0x0001e3aeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e3b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001da20u);
    return;

L_1E3B2:
    /* 0001e3b2   4  pea (2880,A4) */
    c->pc = RC_ADDR(0x0001e3b2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2880u));

L_1E3B6:
    /* 0001e3b6   4  move.l (ffffcb0c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e3b6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E3BA:
    /* 0001e3ba   4  jsr (0001d9c8) */
    c->pc = RC_ADDR(0x0001e3bau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e3beu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d9c8u);
    return;

L_1E3BE:
    /* 0001e3be   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001e3beu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E3C0:
    /* 0001e3c0   4  pea (2880,A4) */
    c->pc = RC_ADDR(0x0001e3c0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2880u));

L_1E3C4:
    /* 0001e3c4   4  move.l (ffffcb10,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e3c4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E3C8:
    /* 0001e3c8   4  jsr (0001d9c8) */
    c->pc = RC_ADDR(0x0001e3c8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e3ccu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d9c8u);
    return;

L_1E3CC:
    /* 0001e3cc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001e3ccu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E3CE:
    /* 0001e3ce   2  bra 0001e3ec */
    c->pc = RC_ADDR(0x0001e3ceu);
    rc_step(c, m, 10);
    goto L_1E3EC;

L_1E3D0:
    /* 0001e3d0   4  pea (fffffe7c,A4) */
    c->pc = RC_ADDR(0x0001e3d0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x184u));

L_1E3D4:
    /* 0001e3d4   4  move.l (ffffcb0c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e3d4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E3D8:
    /* 0001e3d8   4  jsr (0001d9c8) */
    c->pc = RC_ADDR(0x0001e3d8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e3dcu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d9c8u);
    return;

L_1E3DC:
    /* 0001e3dc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001e3dcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E3DE:
    /* 0001e3de   4  pea (fffffe7c,A4) */
    c->pc = RC_ADDR(0x0001e3deu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x184u));

L_1E3E2:
    /* 0001e3e2   4  move.l (ffffcb10,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e3e2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34f0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E3E6:
    /* 0001e3e6   4  jsr (0001d9c8) */
    c->pc = RC_ADDR(0x0001e3e6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001e3eau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d9c8u);
    return;

L_1E3EA:
    /* 0001e3ea   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001e3eau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E3EC:
    /* 0001e3ec   4  movem.l (SP)+,{ D2 D3 D4 D5 D6 D7 A2 A3 A4 } */
    c->pc = RC_ADDR(0x0001e3ecu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1E3F0:
    /* 0001e3f0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001e3f0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

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
