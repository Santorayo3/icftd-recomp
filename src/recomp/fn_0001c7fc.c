/* fn_0001c7fc - 50 byte(s), 14 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001c7fc(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001c7fcu): goto L_1C7FC;
    case RC_ADDR(0x0001c800u): goto L_1C800;
    case RC_ADDR(0x0001c804u): goto L_1C804;
    case RC_ADDR(0x0001c808u): goto L_1C808;
    case RC_ADDR(0x0001c80cu): goto L_1C80C;
    case RC_ADDR(0x0001c810u): goto L_1C810;
    case RC_ADDR(0x0001c814u): goto L_1C814;
    case RC_ADDR(0x0001c818u): goto L_1C818;
    case RC_ADDR(0x0001c81cu): goto L_1C81C;
    case RC_ADDR(0x0001c820u): goto L_1C820;
    case RC_ADDR(0x0001c824u): goto L_1C824;
    case RC_ADDR(0x0001c828u): goto L_1C828;
    case RC_ADDR(0x0001c82au): goto L_1C82A;
    case RC_ADDR(0x0001c82cu): goto L_1C82C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C7FC:
    /* 0001c7fc   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001c7fcu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1C800:
    /* 0001c800   4  pea (264c,A4) */
    c->pc = RC_ADDR(0x0001c800u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x264cu));

L_1C804:
    /* 0001c804   4  move.w #12,-(A7) */
    c->pc = RC_ADDR(0x0001c804u);
    rc_step(c, m);
    t0 = 0x00000012u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C808:
    /* 0001c808   4  pea (0001c82e) */
    c->pc = RC_ADDR(0x0001c808u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c82eu));

L_1C80C:
    /* 0001c80c   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x0001c80cu);
    rc_step(c, m);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x0001c810u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bd2u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_1C810:
    /* 0001c810   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001c810u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_1C814:
    /* 0001c814   4  pea (2694,A4) */
    c->pc = RC_ADDR(0x0001c814u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x2694u));

L_1C818:
    /* 0001c818   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001c818u);
    rc_step(c, m);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C81C:
    /* 0001c81c   4  pea (0001c833) */
    c->pc = RC_ADDR(0x0001c81cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c833u));

L_1C820:
    /* 0001c820   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x0001c820u);
    rc_step(c, m);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x0001c824u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bd2u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_1C824:
    /* 0001c824   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001c824u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_1C828:
    /* 0001c828   2  bsr 0001c7d2 */
    c->pc = RC_ADDR(0x0001c828u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c82au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001c7d2u);
    return;

L_1C82A:
    /* 0001c82a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001c82au);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C82C:
    /* 0001c82c   2  rts */
    c->pc = RC_ADDR(0x0001c82cu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
