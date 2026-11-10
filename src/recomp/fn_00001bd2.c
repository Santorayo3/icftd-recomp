/* fn_00001bd2 - 76 byte(s), 17 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001bd2(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00001bd2u): goto L_1BD2;
    case RC_ADDR(0x00001bd6u): goto L_1BD6;
    case RC_ADDR(0x00001bdau): goto L_1BDA;
    case RC_ADDR(0x00001bdeu): goto L_1BDE;
    case RC_ADDR(0x00001be2u): goto L_1BE2;
    case RC_ADDR(0x00001be8u): goto L_1BE8;
    case RC_ADDR(0x00001beeu): goto L_1BEE;
    case RC_ADDR(0x00001bf4u): goto L_1BF4;
    case RC_ADDR(0x00001bfau): goto L_1BFA;
    case RC_ADDR(0x00001bfeu): goto L_1BFE;
    case RC_ADDR(0x00001c02u): goto L_1C02;
    case RC_ADDR(0x00001c06u): goto L_1C06;
    case RC_ADDR(0x00001c0au): goto L_1C0A;
    case RC_ADDR(0x00001c0eu): goto L_1C0E;
    case RC_ADDR(0x00001c14u): goto L_1C14;
    case RC_ADDR(0x00001c18u): goto L_1C18;
    case RC_ADDR(0x00001c1cu): goto L_1C1C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1BD2:
    /* 00001bd2   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x00001bd2u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_1BD6:
    /* 00001bd6   4  jsr (00001742) */
    c->pc = RC_ADDR(0x00001bd6u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00001bdau));
    rc_depth++;
    c->pc = RC_ADDR(0x00001742u);
    return;

L_1BDA:
    /* 00001bda   4  clr.w (fffffebc,A4) */
    c->pc = RC_ADDR(0x00001bdau);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x144u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BDE:
    /* 00001bde   4  clr.w (ffffcf4a,A4) */
    c->pc = RC_ADDR(0x00001bdeu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x30b6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BE2:
    /* 00001be2   6  move.w #1,(ffffcf4c,A4) */
    c->pc = RC_ADDR(0x00001be2u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x30b4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BE8:
    /* 00001be8   6  move.w (ffffefe4,A4),(ffff83d4,A4) */
    c->pc = RC_ADDR(0x00001be8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_wr16(c, m, (c->a[4] - 0x7c2cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BEE:
    /* 00001bee   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001beeu);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BF4:
    /* 00001bf4   6  move.w #1,(ffffcf48,A4) */
    c->pc = RC_ADDR(0x00001bf4u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x30b8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BFA:
    /* 00001bfa   4  clr.w (ffff851a,A4) */
    c->pc = RC_ADDR(0x00001bfau);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x7ae6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1BFE:
    /* 00001bfe   4  jsr (ffff81dc,A4) */
    c->pc = RC_ADDR(0x00001bfeu);
    rc_step(c, m);
    /* vector 79 */
    rc_push32(c, m, RC_ADDR(0x00001c02u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c32u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001cbfcu);
    return;

L_1C02:
    /* 00001c02   4  tst.w (ffffcf4c,A4) */
    c->pc = RC_ADDR(0x00001c02u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x30b4u));
    rc_set_nzvc(c, t0, RC_W);

L_1C06:
    /* 00001c06   4  beq 00001e4e */
    c->pc = RC_ADDR(0x00001c06u);
    rc_step(c, m);
    if (rc_cond(c, 7))
    {
        c->pc = RC_ADDR(0x00001e4eu);
        return;
    }

L_1C0A:
    /* 00001c0a   4  clr.w (ffffcf4c,A4) */
    c->pc = RC_ADDR(0x00001c0au);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x30b4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C0E:
    /* 00001c0e   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x00001c0eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C14:
    /* 00001c14   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00001c14u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C18:
    /* 00001c18   4  jsr (00006c76) */
    c->pc = RC_ADDR(0x00001c18u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00001c1cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00006c76u);
    return;

L_1C1C:
    /* 00001c1c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001c1cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

    /* falls through into 00001c1e */
    c->pc = RC_ADDR(0x00001c1eu);
    return;
}
