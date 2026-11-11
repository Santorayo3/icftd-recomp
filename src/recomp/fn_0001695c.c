/* fn_0001695c - 28 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001695c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001695cu): goto L_1695C;
    case RC_ADDR(0x00016960u): goto L_16960;
    case RC_ADDR(0x00016966u): goto L_16966;
    case RC_ADDR(0x0001696au): goto L_1696A;
    case RC_ADDR(0x00016970u): goto L_16970;
    case RC_ADDR(0x00016974u): goto L_16974;
    case RC_ADDR(0x00016976u): goto L_16976;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1695C:
    /* 0001695c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001695cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_16960:
    /* 00016960   6  move.w #1,(12de,A4) */
    c->pc = RC_ADDR(0x00016960u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x12deu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16966:
    /* 00016966   4  movea.l (e04,A4),A0 */
    c->pc = RC_ADDR(0x00016966u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe04u));
    c->a[0] = t0;

L_1696A:
    /* 0001696a   6  adda.l #d8,A0 */
    c->pc = RC_ADDR(0x0001696au);
    rc_step(c, m, 16);
    t0 = 0x000000d8u;
    c->a[0] += t0;

L_16970:
    /* 00016970   4  move.b #ca,(A0) */
    c->pc = RC_ADDR(0x00016970u);
    rc_step(c, m, 12);
    t0 = 0x000000cau;
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_16974:
    /* 00016974   2  unlk A5 */
    c->pc = RC_ADDR(0x00016974u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16976:
    /* 00016976   2  rts */
    c->pc = RC_ADDR(0x00016976u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
