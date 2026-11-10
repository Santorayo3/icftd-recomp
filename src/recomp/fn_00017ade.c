/* fn_00017ade - 68 byte(s), 20 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00017ade(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00017adeu): goto L_17ADE;
    case RC_ADDR(0x00017ae2u): goto L_17AE2;
    case RC_ADDR(0x00017ae6u): goto L_17AE6;
    case RC_ADDR(0x00017aeau): goto L_17AEA;
    case RC_ADDR(0x00017aecu): goto L_17AEC;
    case RC_ADDR(0x00017aeeu): goto L_17AEE;
    case RC_ADDR(0x00017af0u): goto L_17AF0;
    case RC_ADDR(0x00017af4u): goto L_17AF4;
    case RC_ADDR(0x00017af8u): goto L_17AF8;
    case RC_ADDR(0x00017afcu): goto L_17AFC;
    case RC_ADDR(0x00017b00u): goto L_17B00;
    case RC_ADDR(0x00017b04u): goto L_17B04;
    case RC_ADDR(0x00017b08u): goto L_17B08;
    case RC_ADDR(0x00017b0cu): goto L_17B0C;
    case RC_ADDR(0x00017b10u): goto L_17B10;
    case RC_ADDR(0x00017b14u): goto L_17B14;
    case RC_ADDR(0x00017b18u): goto L_17B18;
    case RC_ADDR(0x00017b1cu): goto L_17B1C;
    case RC_ADDR(0x00017b1eu): goto L_17B1E;
    case RC_ADDR(0x00017b20u): goto L_17B20;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_17ADE:
    /* 00017ade   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00017adeu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_17AE2:
    /* 00017ae2   4  move.w #31,-(A7) */
    c->pc = RC_ADDR(0x00017ae2u);
    t0 = 0x00000031u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17AE6:
    /* 00017ae6   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x00017ae6u);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x00017aeau));
    rc_depth++;
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_17AEA:
    /* 00017aea   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00017aeau);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_17AEC:
    /* 00017aec   2  tst.w D0 */
    c->pc = RC_ADDR(0x00017aecu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_17AEE:
    /* 00017aee   2  beq 00017b1e */
    c->pc = RC_ADDR(0x00017aeeu);
    if (rc_cond(c, 7)) goto L_17B1E;

L_17AF0:
    /* 00017af0   4  move.w (ffffb3b8,A4),D0 */
    c->pc = RC_ADDR(0x00017af0u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c48u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17AF4:
    /* 00017af4   4  sub.w (dfa,A4),D0 */
    c->pc = RC_ADDR(0x00017af4u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17AF8:
    /* 00017af8   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00017af8u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17AFC:
    /* 00017afc   4  move.w (ffffb3ba,A4),D0 */
    c->pc = RC_ADDR(0x00017afcu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B00:
    /* 00017b00   4  sub.w (dfc,A4),D0 */
    c->pc = RC_ADDR(0x00017b00u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17B04:
    /* 00017b04   4  add.w #c8,D0 */
    c->pc = RC_ADDR(0x00017b04u);
    t0 = 0x000000c8u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17B08:
    /* 00017b08   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00017b08u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B0C:
    /* 00017b0c   4  move.l (13b8,A4),-(A7) */
    c->pc = RC_ADDR(0x00017b0cu);
    t0 = rc_rd32(c, m, (c->a[4] + 0x13b8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17B10:
    /* 00017b10   4  move.w (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00017b10u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B14:
    /* 00017b14   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x00017b14u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_17B18:
    /* 00017b18   4  jsr (ffff8158,A4) */
    c->pc = RC_ADDR(0x00017b18u);
    /* vector 57 */
    rc_push32(c, m, RC_ADDR(0x00017b1cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00011208u);
    return;

L_17B1C:
    /* 00017b1c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00017b1cu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_17B1E:
    /* 00017b1e   2  unlk A5 */
    c->pc = RC_ADDR(0x00017b1eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_17B20:
    /* 00017b20   2  rts */
    c->pc = RC_ADDR(0x00017b20u);
    rc_ret(c, m);
    return;

}
