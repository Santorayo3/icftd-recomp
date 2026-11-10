/* fn_0000d376 - 76 byte(s), 24 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000d376(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000d376u): goto L_D376;
    case RC_ADDR(0x0000d37au): goto L_D37A;
    case RC_ADDR(0x0000d37cu): goto L_D37C;
    case RC_ADDR(0x0000d380u): goto L_D380;
    case RC_ADDR(0x0000d384u): goto L_D384;
    case RC_ADDR(0x0000d386u): goto L_D386;
    case RC_ADDR(0x0000d38au): goto L_D38A;
    case RC_ADDR(0x0000d38cu): goto L_D38C;
    case RC_ADDR(0x0000d38eu): goto L_D38E;
    case RC_ADDR(0x0000d394u): goto L_D394;
    case RC_ADDR(0x0000d398u): goto L_D398;
    case RC_ADDR(0x0000d39cu): goto L_D39C;
    case RC_ADDR(0x0000d39eu): goto L_D39E;
    case RC_ADDR(0x0000d3a0u): goto L_D3A0;
    case RC_ADDR(0x0000d3a4u): goto L_D3A4;
    case RC_ADDR(0x0000d3a8u): goto L_D3A8;
    case RC_ADDR(0x0000d3acu): goto L_D3AC;
    case RC_ADDR(0x0000d3aeu): goto L_D3AE;
    case RC_ADDR(0x0000d3b4u): goto L_D3B4;
    case RC_ADDR(0x0000d3b8u): goto L_D3B8;
    case RC_ADDR(0x0000d3bau): goto L_D3BA;
    case RC_ADDR(0x0000d3bcu): goto L_D3BC;
    case RC_ADDR(0x0000d3beu): goto L_D3BE;
    case RC_ADDR(0x0000d3c0u): goto L_D3C0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_D376:
    /* 0000d376   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000d376u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_D37A:
    /* 0000d37a   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x0000d37au);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D37C:
    /* 0000d37c   4  move.w (714,A4),D0 */
    c->pc = RC_ADDR(0x0000d37cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x714u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D380:
    /* 0000d380   4  cmp.w (712,A4),D0 */
    c->pc = RC_ADDR(0x0000d380u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x712u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_D384:
    /* 0000d384   2  beq 0000d3c0 */
    c->pc = RC_ADDR(0x0000d384u);
    if (rc_cond(c, 7)) goto L_D3C0;

L_D386:
    /* 0000d386   4  jsr (0000d57c) */
    c->pc = RC_ADDR(0x0000d386u);
    rc_push32(c, m, RC_ADDR(0x0000d38au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000d57cu);
    return;

L_D38A:
    /* 0000d38a   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000d38au);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_D38C:
    /* 0000d38c   2  beq 0000d3ba */
    c->pc = RC_ADDR(0x0000d38cu);
    if (rc_cond(c, 7)) goto L_D3BA;

L_D38E:
    /* 0000d38e   6  move.w (714,A4),(712,A4) */
    c->pc = RC_ADDR(0x0000d38eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x714u));
    rc_wr16(c, m, (c->a[4] + 0x712u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D394:
    /* 0000d394   4  jsr (0000df1e) */
    c->pc = RC_ADDR(0x0000d394u);
    rc_push32(c, m, RC_ADDR(0x0000d398u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000df1eu);
    return;

L_D398:
    /* 0000d398   4  move.w (712,A4),D0 */
    c->pc = RC_ADDR(0x0000d398u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x712u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D39C:
    /* 0000d39c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d39cu);
    rc_ext_l(c, 0);

L_D39E:
    /* 0000d39e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d39eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_D3A0:
    /* 0000d3a0   4  lea (fffff376,A4),A0 */
    c->pc = RC_ADDR(0x0000d3a0u);
    c->a[0] = (c->a[4] - 0xc8au);

L_D3A4:
    /* 0000d3a4   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000d3a4u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D3A8:
    /* 0000d3a8   4  jsr (0000dec4) */
    c->pc = RC_ADDR(0x0000d3a8u);
    rc_push32(c, m, RC_ADDR(0x0000d3acu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000dec4u);
    return;

L_D3AC:
    /* 0000d3ac   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d3acu);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D3AE:
    /* 0000d3ae   6  move.w #2,(736,A4) */
    c->pc = RC_ADDR(0x0000d3aeu);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x736u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D3B4:
    /* 0000d3b4   4  jsr (0000c1ac) */
    c->pc = RC_ADDR(0x0000d3b4u);
    rc_push32(c, m, RC_ADDR(0x0000d3b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c1acu);
    return;

L_D3B8:
    /* 0000d3b8   2  bra 0000d3c0 */
    c->pc = RC_ADDR(0x0000d3b8u);
    goto L_D3C0;

L_D3BA:
    /* 0000d3ba   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x0000d3bau);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D3BC:
    /* 0000d3bc   2  unlk A5 */
    c->pc = RC_ADDR(0x0000d3bcu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_D3BE:
    /* 0000d3be   2  rts */
    c->pc = RC_ADDR(0x0000d3beu);
    rc_ret(c, m);
    return;

L_D3C0:
    /* 0000d3c0   2  bra 0000d3ba */
    c->pc = RC_ADDR(0x0000d3c0u);
    rc_tick();
    goto L_D3BA;

}
