/* fn_000170f4 - 84 byte(s), 24 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000170f4(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000170f4u): goto L_170F4;
    case RC_ADDR(0x000170f8u): goto L_170F8;
    case RC_ADDR(0x000170fcu): goto L_170FC;
    case RC_ADDR(0x000170feu): goto L_170FE;
    case RC_ADDR(0x00017102u): goto L_17102;
    case RC_ADDR(0x00017104u): goto L_17104;
    case RC_ADDR(0x00017108u): goto L_17108;
    case RC_ADDR(0x0001710cu): goto L_1710C;
    case RC_ADDR(0x0001710eu): goto L_1710E;
    case RC_ADDR(0x00017114u): goto L_17114;
    case RC_ADDR(0x0001711au): goto L_1711A;
    case RC_ADDR(0x0001711cu): goto L_1711C;
    case RC_ADDR(0x00017120u): goto L_17120;
    case RC_ADDR(0x00017124u): goto L_17124;
    case RC_ADDR(0x00017126u): goto L_17126;
    case RC_ADDR(0x0001712cu): goto L_1712C;
    case RC_ADDR(0x00017132u): goto L_17132;
    case RC_ADDR(0x00017134u): goto L_17134;
    case RC_ADDR(0x00017138u): goto L_17138;
    case RC_ADDR(0x0001713au): goto L_1713A;
    case RC_ADDR(0x0001713cu): goto L_1713C;
    case RC_ADDR(0x00017140u): goto L_17140;
    case RC_ADDR(0x00017144u): goto L_17144;
    case RC_ADDR(0x00017146u): goto L_17146;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_170F4:
    /* 000170f4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000170f4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_170F8:
    /* 000170f8   4  tst.w (fffff27e,A4) */
    c->pc = RC_ADDR(0x000170f8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd82u));
    rc_set_nzvc(c, t0, RC_W);

L_170FC:
    /* 000170fc   2  bne 00017104 */
    c->pc = RC_ADDR(0x000170fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_17104;

L_170FE:
    /* 000170fe   4  tst.w (fffff280,A4) */
    c->pc = RC_ADDR(0x000170feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd80u));
    rc_set_nzvc(c, t0, RC_W);

L_17102:
    /* 00017102   2  beq 0001713c */
    c->pc = RC_ADDR(0x00017102u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1713C;

L_17104:
    /* 00017104   4  clr.w (fffffd9c,A4) */
    c->pc = RC_ADDR(0x00017104u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x264u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17108:
    /* 00017108   4  tst.w (fffff27e,A4) */
    c->pc = RC_ADDR(0x00017108u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd82u));
    rc_set_nzvc(c, t0, RC_W);

L_1710C:
    /* 0001710c   2  beq 0001711c */
    c->pc = RC_ADDR(0x0001710cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1711C;

L_1710E:
    /* 0001710e   6  bset #0,(fffffd9d,A4) */
    c->pc = RC_ADDR(0x0001710eu);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x263u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_17114:
    /* 00017114   6  move.w #1,(fffff286,A4) */
    c->pc = RC_ADDR(0x00017114u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd7au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1711A:
    /* 0001711a   2  bra 00017120 */
    c->pc = RC_ADDR(0x0001711au);
    rc_step(c, m, 10);
    goto L_17120;

L_1711C:
    /* 0001711c   4  clr.w (fffff286,A4) */
    c->pc = RC_ADDR(0x0001711cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xd7au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17120:
    /* 00017120   4  tst.w (fffff280,A4) */
    c->pc = RC_ADDR(0x00017120u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd80u));
    rc_set_nzvc(c, t0, RC_W);

L_17124:
    /* 00017124   2  beq 00017134 */
    c->pc = RC_ADDR(0x00017124u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17134;

L_17126:
    /* 00017126   6  bset #3,(fffffd9d,A4) */
    c->pc = RC_ADDR(0x00017126u);
    rc_step(c, m, 20);
    t3 = (c->a[4] - 0x263u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_1712C:
    /* 0001712c   6  move.w #1,(fffff288,A4) */
    c->pc = RC_ADDR(0x0001712cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17132:
    /* 00017132   2  bra 00017138 */
    c->pc = RC_ADDR(0x00017132u);
    rc_step(c, m, 10);
    goto L_17138;

L_17134:
    /* 00017134   4  clr.w (fffff288,A4) */
    c->pc = RC_ADDR(0x00017134u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xd78u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17138:
    /* 00017138   2  bsr 000170de */
    c->pc = RC_ADDR(0x00017138u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001713au));
    rc_depth++;
    c->pc = RC_ADDR(0x000170deu);
    return;

L_1713A:
    /* 0001713a   2  bra 000170f8 */
    c->pc = RC_ADDR(0x0001713au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_170F8;

L_1713C:
    /* 0001713c   4  clr.w (fffff288,A4) */
    c->pc = RC_ADDR(0x0001713cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xd78u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17140:
    /* 00017140   4  clr.w (fffff286,A4) */
    c->pc = RC_ADDR(0x00017140u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0xd7au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17144:
    /* 00017144   2  unlk A5 */
    c->pc = RC_ADDR(0x00017144u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_17146:
    /* 00017146   2  rts */
    c->pc = RC_ADDR(0x00017146u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
