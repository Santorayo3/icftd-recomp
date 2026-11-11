/* fn_00011f1a - 36 byte(s), 11 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00011f1a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00011f1au): goto L_11F1A;
    case RC_ADDR(0x00011f1eu): goto L_11F1E;
    case RC_ADDR(0x00011f22u): goto L_11F22;
    case RC_ADDR(0x00011f26u): goto L_11F26;
    case RC_ADDR(0x00011f2au): goto L_11F2A;
    case RC_ADDR(0x00011f2cu): goto L_11F2C;
    case RC_ADDR(0x00011f30u): goto L_11F30;
    case RC_ADDR(0x00011f34u): goto L_11F34;
    case RC_ADDR(0x00011f38u): goto L_11F38;
    case RC_ADDR(0x00011f3au): goto L_11F3A;
    case RC_ADDR(0x00011f3cu): goto L_11F3C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_11F1A:
    /* 00011f1a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00011f1au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_11F1E:
    /* 00011f1e   4  move.l (e00,A4),-(A7) */
    c->pc = RC_ADDR(0x00011f1eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11F22:
    /* 00011f22   4  pea (00000005).l */
    c->pc = RC_ADDR(0x00011f22u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000005u);

L_11F26:
    /* 00011f26   4  jsr (ffff8356,A4) */
    c->pc = RC_ADDR(0x00011f26u);
    rc_step(c, m, 18);
    /* vector 142 */
    rc_push32(c, m, RC_ADDR(0x00011f2au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021dacu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021744u);
    return;

L_11F2A:
    /* 00011f2a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00011f2au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_11F2C:
    /* 00011f2c   4  pea (00000016).l */
    c->pc = RC_ADDR(0x00011f2cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000016u);

L_11F30:
    /* 00011f30   4  move.l (e00,A4),-(A7) */
    c->pc = RC_ADDR(0x00011f30u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe00u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_11F34:
    /* 00011f34   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00011f34u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x00011f38u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_11F38:
    /* 00011f38   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00011f38u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_11F3A:
    /* 00011f3a   2  unlk A5 */
    c->pc = RC_ADDR(0x00011f3au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_11F3C:
    /* 00011f3c   2  rts */
    c->pc = RC_ADDR(0x00011f3cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
