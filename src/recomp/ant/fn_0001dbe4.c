/* fn_0001dbe4 - 112 byte(s), 29 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001dbe4(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001dbe4u): goto L_1DBE4;
    case RC_ADDR(0x0001dbe8u): goto L_1DBE8;
    case RC_ADDR(0x0001dbecu): goto L_1DBEC;
    case RC_ADDR(0x0001dbf0u): goto L_1DBF0;
    case RC_ADDR(0x0001dbf4u): goto L_1DBF4;
    case RC_ADDR(0x0001dbf8u): goto L_1DBF8;
    case RC_ADDR(0x0001dbfau): goto L_1DBFA;
    case RC_ADDR(0x0001dbfeu): goto L_1DBFE;
    case RC_ADDR(0x0001dc02u): goto L_1DC02;
    case RC_ADDR(0x0001dc08u): goto L_1DC08;
    case RC_ADDR(0x0001dc0cu): goto L_1DC0C;
    case RC_ADDR(0x0001dc12u): goto L_1DC12;
    case RC_ADDR(0x0001dc16u): goto L_1DC16;
    case RC_ADDR(0x0001dc1au): goto L_1DC1A;
    case RC_ADDR(0x0001dc1eu): goto L_1DC1E;
    case RC_ADDR(0x0001dc22u): goto L_1DC22;
    case RC_ADDR(0x0001dc26u): goto L_1DC26;
    case RC_ADDR(0x0001dc2au): goto L_1DC2A;
    case RC_ADDR(0x0001dc2eu): goto L_1DC2E;
    case RC_ADDR(0x0001dc32u): goto L_1DC32;
    case RC_ADDR(0x0001dc36u): goto L_1DC36;
    case RC_ADDR(0x0001dc3au): goto L_1DC3A;
    case RC_ADDR(0x0001dc3eu): goto L_1DC3E;
    case RC_ADDR(0x0001dc42u): goto L_1DC42;
    case RC_ADDR(0x0001dc44u): goto L_1DC44;
    case RC_ADDR(0x0001dc48u): goto L_1DC48;
    case RC_ADDR(0x0001dc4cu): goto L_1DC4C;
    case RC_ADDR(0x0001dc50u): goto L_1DC50;
    case RC_ADDR(0x0001dc52u): goto L_1DC52;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DBE4:
    /* 0001dbe4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001dbe4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1DBE8:
    /* 0001dbe8   4  move.l A4,(ffffd5ac,A4) */
    c->pc = RC_ADDR(0x0001dbe8u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 4, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2a54u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DBEC:
    /* 0001dbec   4  pea (00000001).l */
    c->pc = RC_ADDR(0x0001dbecu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_1DBF0:
    /* 0001dbf0   4  pea (00000016).l */
    c->pc = RC_ADDR(0x0001dbf0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000016u);

L_1DBF4:
    /* 0001dbf4   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x0001dbf4u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x0001dbf8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_1DBF8:
    /* 0001dbf8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001dbf8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DBFA:
    /* 0001dbfa   4  move.l D0,(2cae,A4) */
    c->pc = RC_ADDR(0x0001dbfau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x2caeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DBFE:
    /* 0001dbfe   4  movea.l (2cae,A4),A0 */
    c->pc = RC_ADDR(0x0001dbfeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2caeu));
    c->a[0] = t0;

L_1DC02:
    /* 0001dc02   6  move.b #2,(8,A0) */
    c->pc = RC_ADDR(0x0001dc02u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr8(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DC08:
    /* 0001dc08   4  movea.l (2cae,A4),A0 */
    c->pc = RC_ADDR(0x0001dc08u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2caeu));
    c->a[0] = t0;

L_1DC0C:
    /* 0001dc0c   6  move.b #c4,(9,A0) */
    c->pc = RC_ADDR(0x0001dc0cu);
    rc_step(c, m, 16);
    t0 = 0x000000c4u;
    rc_wr8(c, m, (c->a[0] + 0x9u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1DC12:
    /* 0001dc12   4  movea.l (2cae,A4),A0 */
    c->pc = RC_ADDR(0x0001dc12u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2caeu));
    c->a[0] = t0;

L_1DC16:
    /* 0001dc16   4  lea (0001dc54),A1 */
    c->pc = RC_ADDR(0x0001dc16u);
    rc_step(c, m, 8);
    c->a[1] = RC_ADDR(0x0001dc54u);

L_1DC1A:
    /* 0001dc1a   4  move.l A1,(a,A0) */
    c->pc = RC_ADDR(0x0001dc1au);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[0] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC1E:
    /* 0001dc1e   4  lea (ffffd5ac,A4),A0 */
    c->pc = RC_ADDR(0x0001dc1eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2a54u);

L_1DC22:
    /* 0001dc22   4  movea.l (2cae,A4),A1 */
    c->pc = RC_ADDR(0x0001dc22u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2caeu));
    c->a[1] = t0;

L_1DC26:
    /* 0001dc26   4  move.l A0,(e,A1) */
    c->pc = RC_ADDR(0x0001dc26u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC2A:
    /* 0001dc2a   4  lea (0001dbcc),A0 */
    c->pc = RC_ADDR(0x0001dc2au);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x0001dbccu);

L_1DC2E:
    /* 0001dc2e   4  movea.l (2cae,A4),A1 */
    c->pc = RC_ADDR(0x0001dc2eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2caeu));
    c->a[1] = t0;

L_1DC32:
    /* 0001dc32   4  move.l A0,(12,A1) */
    c->pc = RC_ADDR(0x0001dc32u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC36:
    /* 0001dc36   4  move.l (2cae,A4),-(A7) */
    c->pc = RC_ADDR(0x0001dc36u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2caeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DC3A:
    /* 0001dc3a   4  pea (00000005).l */
    c->pc = RC_ADDR(0x0001dc3au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000005u);

L_1DC3E:
    /* 0001dc3e   4  jsr (ffff8350,A4) */
    c->pc = RC_ADDR(0x0001dc3eu);
    rc_step(c, m, 18);
    /* vector 141 */
    rc_push32(c, m, RC_ADDR(0x0001dc42u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e46u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002355au);
    return;

L_1DC42:
    /* 0001dc42   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001dc42u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DC44:
    /* 0001dc44   4  clr.w (2cb6,A4) */
    c->pc = RC_ADDR(0x0001dc44u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2cb6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DC48:
    /* 0001dc48   4  clr.w (2cb4,A4) */
    c->pc = RC_ADDR(0x0001dc48u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2cb4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DC4C:
    /* 0001dc4c   4  clr.w (2cb2,A4) */
    c->pc = RC_ADDR(0x0001dc4cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2cb2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DC50:
    /* 0001dc50   2  unlk A5 */
    c->pc = RC_ADDR(0x0001dc50u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DC52:
    /* 0001dc52   2  rts */
    c->pc = RC_ADDR(0x0001dc52u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
