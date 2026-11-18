/* fn_0001394a - 62 byte(s), 16 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001394a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001394au): goto L_1394A;
    case RC_ADDR(0x0001394eu): goto L_1394E;
    case RC_ADDR(0x00013952u): goto L_13952;
    case RC_ADDR(0x00013958u): goto L_13958;
    case RC_ADDR(0x0001395cu): goto L_1395C;
    case RC_ADDR(0x00013962u): goto L_13962;
    case RC_ADDR(0x00013966u): goto L_13966;
    case RC_ADDR(0x0001396cu): goto L_1396C;
    case RC_ADDR(0x00013970u): goto L_13970;
    case RC_ADDR(0x00013974u): goto L_13974;
    case RC_ADDR(0x00013976u): goto L_13976;
    case RC_ADDR(0x0001397au): goto L_1397A;
    case RC_ADDR(0x0001397eu): goto L_1397E;
    case RC_ADDR(0x00013982u): goto L_13982;
    case RC_ADDR(0x00013984u): goto L_13984;
    case RC_ADDR(0x00013986u): goto L_13986;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1394A:
    /* 0001394a   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001394au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1394E:
    /* 0001394e   4  movea.l (ffffd290,A4),A0 */
    c->pc = RC_ADDR(0x0001394eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d70u));
    c->a[0] = t0;

L_13952:
    /* 00013952   6  move.l (4,A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00013952u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13958:
    /* 00013958   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013958u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1395C:
    /* 0001395c   6  move.l (182c,A4),(4,A0) */
    c->pc = RC_ADDR(0x0001395cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x182cu));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13962:
    /* 00013962   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00013962u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13966:
    /* 00013966   6  move.w (1830,A4),(8,A0) */
    c->pc = RC_ADDR(0x00013966u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1830u));
    rc_wr16(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1396C:
    /* 0001396c   4  move.l (ffffd290,A4),-(A7) */
    c->pc = RC_ADDR(0x0001396cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d70u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13970:
    /* 00013970   4  jsr (ffff8398,A4) */
    c->pc = RC_ADDR(0x00013970u);
    rc_step(c, m, 18);
    /* vector 153 */
    rc_push32(c, m, RC_ADDR(0x00013974u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002393au);
    return;

L_13974:
    /* 00013974   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00013974u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_13976:
    /* 00013976   4  pea (00000190).l */
    c->pc = RC_ADDR(0x00013976u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000190u);

L_1397A:
    /* 0001397a   4  move.l (17fe,A4),-(A7) */
    c->pc = RC_ADDR(0x0001397au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17feu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1397E:
    /* 0001397e   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001397eu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00013982u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_13982:
    /* 00013982   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00013982u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_13984:
    /* 00013984   2  unlk A5 */
    c->pc = RC_ADDR(0x00013984u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13986:
    /* 00013986   2  rts */
    c->pc = RC_ADDR(0x00013986u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
