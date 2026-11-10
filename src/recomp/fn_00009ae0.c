/* fn_00009ae0 - 128 byte(s), 37 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009ae0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00009ae0u): goto L_9AE0;
    case RC_ADDR(0x00009ae4u): goto L_9AE4;
    case RC_ADDR(0x00009ae8u): goto L_9AE8;
    case RC_ADDR(0x00009aeau): goto L_9AEA;
    case RC_ADDR(0x00009aeeu): goto L_9AEE;
    case RC_ADDR(0x00009af2u): goto L_9AF2;
    case RC_ADDR(0x00009af6u): goto L_9AF6;
    case RC_ADDR(0x00009afau): goto L_9AFA;
    case RC_ADDR(0x00009afeu): goto L_9AFE;
    case RC_ADDR(0x00009b04u): goto L_9B04;
    case RC_ADDR(0x00009b06u): goto L_9B06;
    case RC_ADDR(0x00009b0au): goto L_9B0A;
    case RC_ADDR(0x00009b0eu): goto L_9B0E;
    case RC_ADDR(0x00009b12u): goto L_9B12;
    case RC_ADDR(0x00009b16u): goto L_9B16;
    case RC_ADDR(0x00009b1au): goto L_9B1A;
    case RC_ADDR(0x00009b1cu): goto L_9B1C;
    case RC_ADDR(0x00009b1eu): goto L_9B1E;
    case RC_ADDR(0x00009b20u): goto L_9B20;
    case RC_ADDR(0x00009b22u): goto L_9B22;
    case RC_ADDR(0x00009b24u): goto L_9B24;
    case RC_ADDR(0x00009b26u): goto L_9B26;
    case RC_ADDR(0x00009b2au): goto L_9B2A;
    case RC_ADDR(0x00009b2eu): goto L_9B2E;
    case RC_ADDR(0x00009b32u): goto L_9B32;
    case RC_ADDR(0x00009b36u): goto L_9B36;
    case RC_ADDR(0x00009b3au): goto L_9B3A;
    case RC_ADDR(0x00009b40u): goto L_9B40;
    case RC_ADDR(0x00009b42u): goto L_9B42;
    case RC_ADDR(0x00009b46u): goto L_9B46;
    case RC_ADDR(0x00009b4au): goto L_9B4A;
    case RC_ADDR(0x00009b4cu): goto L_9B4C;
    case RC_ADDR(0x00009b50u): goto L_9B50;
    case RC_ADDR(0x00009b54u): goto L_9B54;
    case RC_ADDR(0x00009b58u): goto L_9B58;
    case RC_ADDR(0x00009b5cu): goto L_9B5C;
    case RC_ADDR(0x00009b5eu): goto L_9B5E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9AE0:
    /* 00009ae0   4  link.w A5,#fffffff2 */
    c->pc = RC_ADDR(0x00009ae0u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xeu;

L_9AE4:
    /* 00009ae4   4  tst.w (fffffff2,A5) */
    c->pc = RC_ADDR(0x00009ae4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_set_nzvc(c, t0, RC_W);

L_9AE8:
    /* 00009ae8   2  beq 00009b5e */
    c->pc = RC_ADDR(0x00009ae8u);
    if (rc_cond(c, 7)) goto L_9B5E;

L_9AEA:
    /* 00009aea   4  pea (00000004).l */
    c->pc = RC_ADDR(0x00009aeau);
    rc_push32(c, m, RC_ADDR(0x00000004u));

L_9AEE:
    /* 00009aee   4  move.l (ffff9308,A4),-(A7) */
    c->pc = RC_ADDR(0x00009aeeu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6cf8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9AF2:
    /* 00009af2   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00009af2u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9AF6:
    /* 00009af6   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x00009af6u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00009afau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_9AFA:
    /* 00009afa   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00009afau);
    c->a[7] = (c->a[7] + 0xcu);

L_9AFE:
    /* 00009afe   6  cmp.l #4,D0 */
    c->pc = RC_ADDR(0x00009afeu);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_9B04:
    /* 00009b04   2  seq D0 */
    c->pc = RC_ADDR(0x00009b04u);
    rc_d_set(c, 0, RC_B, (rc_cond(c, 7) ? 0xFFu : 0u));

L_9B06:
    /* 00009b06   4  and.w #1,D0 */
    c->pc = RC_ADDR(0x00009b06u);
    t0 = 0x00000001u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_9B0A:
    /* 00009b0a   4  move.w D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00009b0au);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9B0E:
    /* 00009b0e   4  move.l (ffff9308,A4),-(A7) */
    c->pc = RC_ADDR(0x00009b0eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6cf8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B12:
    /* 00009b12   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00009b12u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B16:
    /* 00009b16   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x00009b16u);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x00009b1au));
    rc_depth++;
    c->pc = RC_ADDR(0x000208e8u);
    return;

L_9B1A:
    /* 00009b1a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009b1au);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9B1C:
    /* 00009b1c   2  tst.w D0 */
    c->pc = RC_ADDR(0x00009b1cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_9B1E:
    /* 00009b1e   2  bne 00009b26 */
    c->pc = RC_ADDR(0x00009b1eu);
    if (rc_cond(c, 6)) goto L_9B26;

L_9B20:
    /* 00009b20   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00009b20u);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_9B22:
    /* 00009b22   2  unlk A5 */
    c->pc = RC_ADDR(0x00009b22u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9B24:
    /* 00009b24   2  rts */
    c->pc = RC_ADDR(0x00009b24u);
    rc_ret(c, m);
    return;

L_9B26:
    /* 00009b26   4  pea (00000004).l */
    c->pc = RC_ADDR(0x00009b26u);
    rc_push32(c, m, RC_ADDR(0x00000004u));

L_9B2A:
    /* 00009b2a   4  pea (fffffffc,A5) */
    c->pc = RC_ADDR(0x00009b2au);
    rc_push32(c, m, (c->a[5] - 0x4u));

L_9B2E:
    /* 00009b2e   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00009b2eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B32:
    /* 00009b32   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x00009b32u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00009b36u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_9B36:
    /* 00009b36   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00009b36u);
    c->a[7] = (c->a[7] + 0xcu);

L_9B3A:
    /* 00009b3a   6  cmp.l #4,D0 */
    c->pc = RC_ADDR(0x00009b3au);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_9B40:
    /* 00009b40   2  seq D0 */
    c->pc = RC_ADDR(0x00009b40u);
    rc_d_set(c, 0, RC_B, (rc_cond(c, 7) ? 0xFFu : 0u));

L_9B42:
    /* 00009b42   4  and.w #1,D0 */
    c->pc = RC_ADDR(0x00009b42u);
    t0 = 0x00000001u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_9B46:
    /* 00009b46   4  move.w D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00009b46u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9B4A:
    /* 00009b4a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00009b4au);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9B4C:
    /* 00009b4c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00009b4cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B50:
    /* 00009b50   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00009b50u);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9B54:
    /* 00009b54   4  jsr (ffff831a,A4) */
    c->pc = RC_ADDR(0x00009b54u);
    /* vector 132 */
    rc_push32(c, m, RC_ADDR(0x00009b58u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021488u);
    return;

L_9B58:
    /* 00009b58   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00009b58u);
    c->a[7] = (c->a[7] + 0xcu);

L_9B5C:
    /* 00009b5c   2  bra 00009ae4 */
    c->pc = RC_ADDR(0x00009b5cu);
    rc_tick();
    goto L_9AE4;

L_9B5E:
    /* 00009b5e   2  bra 00009b22 */
    c->pc = RC_ADDR(0x00009b5eu);
    rc_tick();
    goto L_9B22;

}
