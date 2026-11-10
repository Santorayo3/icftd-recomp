/* fn_0001c174 - 82 byte(s), 23 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001c174(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001c174u): goto L_1C174;
    case RC_ADDR(0x0001c178u): goto L_1C178;
    case RC_ADDR(0x0001c17au): goto L_1C17A;
    case RC_ADDR(0x0001c17eu): goto L_1C17E;
    case RC_ADDR(0x0001c180u): goto L_1C180;
    case RC_ADDR(0x0001c184u): goto L_1C184;
    case RC_ADDR(0x0001c188u): goto L_1C188;
    case RC_ADDR(0x0001c18au): goto L_1C18A;
    case RC_ADDR(0x0001c18eu): goto L_1C18E;
    case RC_ADDR(0x0001c192u): goto L_1C192;
    case RC_ADDR(0x0001c196u): goto L_1C196;
    case RC_ADDR(0x0001c19au): goto L_1C19A;
    case RC_ADDR(0x0001c19eu): goto L_1C19E;
    case RC_ADDR(0x0001c1a2u): goto L_1C1A2;
    case RC_ADDR(0x0001c1a6u): goto L_1C1A6;
    case RC_ADDR(0x0001c1aau): goto L_1C1AA;
    case RC_ADDR(0x0001c1aeu): goto L_1C1AE;
    case RC_ADDR(0x0001c1b2u): goto L_1C1B2;
    case RC_ADDR(0x0001c1b6u): goto L_1C1B6;
    case RC_ADDR(0x0001c1bau): goto L_1C1BA;
    case RC_ADDR(0x0001c1beu): goto L_1C1BE;
    case RC_ADDR(0x0001c1c2u): goto L_1C1C2;
    case RC_ADDR(0x0001c1c4u): goto L_1C1C4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C174:
    /* 0001c174   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001c174u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1C178:
    /* 0001c178   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001c178u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1C17A:
    /* 0001c17a   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0001c17au);
    rc_step(c, m);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001c17eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b18u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_1C17E:
    /* 0001c17e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001c17eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1C180:
    /* 0001c180   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001c180u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C184:
    /* 0001c184   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x0001c184u);
    rc_step(c, m);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x0001c188u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b18u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_1C188:
    /* 0001c188   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001c188u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1C18A:
    /* 0001c18a   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001c18au);
    rc_step(c, m);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C18E:
    /* 0001c18e   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001c18eu);
    rc_step(c, m);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C192:
    /* 0001c192   4  move.l (23ae,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c192u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x23aeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C196:
    /* 0001c196   4  move.w (23a4,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c196u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x23a4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C19A:
    /* 0001c19a   4  move.l (239c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c19au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x239cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C19E:
    /* 0001c19e   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x0001c19eu);
    rc_step(c, m);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x0001c1a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_1C1A2:
    /* 0001c1a2   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001c1a2u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_1C1A6:
    /* 0001c1a6   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001c1a6u);
    rc_step(c, m);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C1AA:
    /* 0001c1aa   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001c1aau);
    rc_step(c, m);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C1AE:
    /* 0001c1ae   4  move.l (23ae,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c1aeu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x23aeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C1B2:
    /* 0001c1b2   4  move.w (23a4,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c1b2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x23a4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C1B6:
    /* 0001c1b6   4  move.l (239c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c1b6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x239cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C1BA:
    /* 0001c1ba   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x0001c1bau);
    rc_step(c, m);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x0001c1beu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_1C1BE:
    /* 0001c1be   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001c1beu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_1C1C2:
    /* 0001c1c2   2  unlk A5 */
    c->pc = RC_ADDR(0x0001c1c2u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C1C4:
    /* 0001c1c4   2  rts */
    c->pc = RC_ADDR(0x0001c1c4u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
