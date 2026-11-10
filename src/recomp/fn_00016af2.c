/* fn_00016af2 - 66 byte(s), 21 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016af2(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00016af2u): goto L_16AF2;
    case RC_ADDR(0x00016af6u): goto L_16AF6;
    case RC_ADDR(0x00016afau): goto L_16AFA;
    case RC_ADDR(0x00016afeu): goto L_16AFE;
    case RC_ADDR(0x00016b02u): goto L_16B02;
    case RC_ADDR(0x00016b04u): goto L_16B04;
    case RC_ADDR(0x00016b08u): goto L_16B08;
    case RC_ADDR(0x00016b0au): goto L_16B0A;
    case RC_ADDR(0x00016b0eu): goto L_16B0E;
    case RC_ADDR(0x00016b12u): goto L_16B12;
    case RC_ADDR(0x00016b14u): goto L_16B14;
    case RC_ADDR(0x00016b18u): goto L_16B18;
    case RC_ADDR(0x00016b1cu): goto L_16B1C;
    case RC_ADDR(0x00016b1eu): goto L_16B1E;
    case RC_ADDR(0x00016b20u): goto L_16B20;
    case RC_ADDR(0x00016b24u): goto L_16B24;
    case RC_ADDR(0x00016b28u): goto L_16B28;
    case RC_ADDR(0x00016b2cu): goto L_16B2C;
    case RC_ADDR(0x00016b2eu): goto L_16B2E;
    case RC_ADDR(0x00016b30u): goto L_16B30;
    case RC_ADDR(0x00016b32u): goto L_16B32;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16AF2:
    /* 00016af2   4  link.w A5,#fffffff8 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016af2u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_16AF6:
    /* 00016af6   4  pea (000003ed).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016af6u);
    rc_push32(c, m, 0x000003edu);

L_16AFA:
    /* 00016afa   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016afau);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16AFE:
    /* 00016afe   4  jsr (ffff8290,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016afeu);
    /* vector 109 */
    rc_push32(c, m, RC_ADDR(0x00016b02u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020476u);
    return;

L_16B02:
    /* 00016b02   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016b02u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16B04:
    /* 00016b04   4  move.l D0,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016b04u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16B08:
    /* 00016b08   2  beq 00016b30 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016b08u);
    if (rc_cond(c, 7)) goto L_16B30;

L_16B0A:
    /* 00016b0a   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016b0au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16B0E:
    /* 00016b0e   4  jsr (ffff829c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016b0eu);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x00016b12u));
    rc_depth++;
    c->pc = RC_ADDR(0x000205e6u);
    return;

L_16B12:
    /* 00016b12   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016b12u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_16B14:
    /* 00016b14   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016b14u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16B18:
    /* 00016b18   4  jsr (ffff8296,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016b18u);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x00016b1cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020490u);
    return;

L_16B1C:
    /* 00016b1c   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016b1cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_16B1E:
    /* 00016b1e   2  bsr 00016ac4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016b1eu);
    rc_push32(c, m, RC_ADDR(0x00016b20u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016ac4u);
    return;

L_16B20:
    /* 00016b20   4  move.l D0,(fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016b20u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16B24:
    /* 00016b24   4  jsr (ffff82a2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016b24u);
    /* vector 112 */
    rc_push32(c, m, RC_ADDR(0x00016b28u));
    rc_depth++;
    c->pc = RC_ADDR(0x000207f0u);
    return;

L_16B28:
    /* 00016b28   4  move.l (fffffff8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016b28u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_16B2C:
    /* 00016b2c   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016b2cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16B2E:
    /* 00016b2e   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016b2eu);
    rc_ret(c, m);
    return;

L_16B30:
    /* 00016b30   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016b30u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_16B32:
    /* 00016b32   2  bra 00016b2c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016b32u);
    rc_tick();
    goto L_16B2C;

}
