/* fn_0000b41e - 78 byte(s), 23 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b41e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b41eu): goto L_B41E;
    case RC_ADDR(0x0000b422u): goto L_B422;
    case RC_ADDR(0x0000b426u): goto L_B426;
    case RC_ADDR(0x0000b42au): goto L_B42A;
    case RC_ADDR(0x0000b42eu): goto L_B42E;
    case RC_ADDR(0x0000b430u): goto L_B430;
    case RC_ADDR(0x0000b434u): goto L_B434;
    case RC_ADDR(0x0000b438u): goto L_B438;
    case RC_ADDR(0x0000b43cu): goto L_B43C;
    case RC_ADDR(0x0000b43eu): goto L_B43E;
    case RC_ADDR(0x0000b442u): goto L_B442;
    case RC_ADDR(0x0000b446u): goto L_B446;
    case RC_ADDR(0x0000b44au): goto L_B44A;
    case RC_ADDR(0x0000b44cu): goto L_B44C;
    case RC_ADDR(0x0000b450u): goto L_B450;
    case RC_ADDR(0x0000b454u): goto L_B454;
    case RC_ADDR(0x0000b458u): goto L_B458;
    case RC_ADDR(0x0000b45au): goto L_B45A;
    case RC_ADDR(0x0000b45eu): goto L_B45E;
    case RC_ADDR(0x0000b462u): goto L_B462;
    case RC_ADDR(0x0000b466u): goto L_B466;
    case RC_ADDR(0x0000b468u): goto L_B468;
    case RC_ADDR(0x0000b46au): goto L_B46A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B41E:
    /* 0000b41e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000b41eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B422:
    /* 0000b422   4  move.l (402,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b422u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x402u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B426:
    /* 0000b426   4  move.l (3e4,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b426u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3e4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B42A:
    /* 0000b42a   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0000b42au);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0000b42eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_B42E:
    /* 0000b42e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000b42eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B430:
    /* 0000b430   4  move.l (406,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b430u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x406u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B434:
    /* 0000b434   4  move.l (3e8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b434u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3e8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B438:
    /* 0000b438   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0000b438u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0000b43cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_B43C:
    /* 0000b43c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000b43cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B43E:
    /* 0000b43e   4  move.l (40a,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b43eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x40au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B442:
    /* 0000b442   4  move.l (3ec,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b442u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B446:
    /* 0000b446   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0000b446u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0000b44au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_B44A:
    /* 0000b44a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000b44au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B44C:
    /* 0000b44c   4  move.l (40e,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b44cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x40eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B450:
    /* 0000b450   4  move.l (3f0,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b450u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3f0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B454:
    /* 0000b454   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0000b454u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0000b458u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_B458:
    /* 0000b458   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000b458u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B45A:
    /* 0000b45a   4  move.l (412,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b45au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x412u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B45E:
    /* 0000b45e   4  move.l (3f4,A4),-(A7) */
    c->pc = RC_ADDR(0x0000b45eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3f4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B462:
    /* 0000b462   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0000b462u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0000b466u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_B466:
    /* 0000b466   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000b466u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B468:
    /* 0000b468   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b468u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B46A:
    /* 0000b46a   2  rts */
    c->pc = RC_ADDR(0x0000b46au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
