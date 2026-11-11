/* fn_000050ca - 68 byte(s), 17 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000050ca(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000050cau): goto L_50CA;
    case RC_ADDR(0x000050ceu): goto L_50CE;
    case RC_ADDR(0x000050d4u): goto L_50D4;
    case RC_ADDR(0x000050dau): goto L_50DA;
    case RC_ADDR(0x000050deu): goto L_50DE;
    case RC_ADDR(0x000050e2u): goto L_50E2;
    case RC_ADDR(0x000050e6u): goto L_50E6;
    case RC_ADDR(0x000050e8u): goto L_50E8;
    case RC_ADDR(0x000050ecu): goto L_50EC;
    case RC_ADDR(0x000050f0u): goto L_50F0;
    case RC_ADDR(0x000050f4u): goto L_50F4;
    case RC_ADDR(0x000050f8u): goto L_50F8;
    case RC_ADDR(0x000050fau): goto L_50FA;
    case RC_ADDR(0x000050feu): goto L_50FE;
    case RC_ADDR(0x00005104u): goto L_5104;
    case RC_ADDR(0x0000510au): goto L_510A;
    case RC_ADDR(0x0000510cu): goto L_510C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_50CA:
    /* 000050ca   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000050cau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_50CE:
    /* 000050ce   6  move.w #4,(fffffec2,A4) */
    c->pc = RC_ADDR(0x000050ceu);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] - 0x13eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_50D4:
    /* 000050d4   6  move.w #139,(fffffec4,A4) */
    c->pc = RC_ADDR(0x000050d4u);
    rc_step(c, m, 16);
    t0 = 0x00000139u;
    rc_wr16(c, m, (c->a[4] - 0x13cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_50DA:
    /* 000050da   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000050dau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_50DE:
    /* 000050de   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000050deu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_50E2:
    /* 000050e2   4  jsr (00005012) */
    c->pc = RC_ADDR(0x000050e2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000050e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005012u);
    return;

L_50E6:
    /* 000050e6   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000050e6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_50E8:
    /* 000050e8   4  jsr (ffff81ee,A4) */
    c->pc = RC_ADDR(0x000050e8u);
    rc_step(c, m, 18);
    /* vector 82 */
    rc_push32(c, m, RC_ADDR(0x000050ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c44u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d1dau);
    return;

L_50EC:
    /* 000050ec   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000050ecu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_50F0:
    /* 000050f0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000050f0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_50F4:
    /* 000050f4   4  jsr (00005012) */
    c->pc = RC_ADDR(0x000050f4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000050f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005012u);
    return;

L_50F8:
    /* 000050f8   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000050f8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_50FA:
    /* 000050fa   4  jsr (ffff804a,A4) */
    c->pc = RC_ADDR(0x000050fau);
    rc_step(c, m, 18);
    /* vector 12 */
    rc_push32(c, m, RC_ADDR(0x000050feu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021aa0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000330eu);
    return;

L_50FE:
    /* 000050fe   6  move.w #13,(fffffec2,A4) */
    c->pc = RC_ADDR(0x000050feu);
    rc_step(c, m, 16);
    t0 = 0x00000013u;
    rc_wr16(c, m, (c->a[4] - 0x13eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_5104:
    /* 00005104   6  move.w #12c,(fffffec4,A4) */
    c->pc = RC_ADDR(0x00005104u);
    rc_step(c, m, 16);
    t0 = 0x0000012cu;
    rc_wr16(c, m, (c->a[4] - 0x13cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_510A:
    /* 0000510a   2  unlk A5 */
    c->pc = RC_ADDR(0x0000510au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_510C:
    /* 0000510c   2  rts */
    c->pc = RC_ADDR(0x0000510cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
