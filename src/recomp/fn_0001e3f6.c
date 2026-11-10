/* fn_0001e3f6 - 62 byte(s), 17 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001e3f6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e3f6u): goto L_1E3F6;
    case RC_ADDR(0x0001e3fau): goto L_1E3FA;
    case RC_ADDR(0x0001e3feu): goto L_1E3FE;
    case RC_ADDR(0x0001e402u): goto L_1E402;
    case RC_ADDR(0x0001e406u): goto L_1E406;
    case RC_ADDR(0x0001e40au): goto L_1E40A;
    case RC_ADDR(0x0001e40eu): goto L_1E40E;
    case RC_ADDR(0x0001e414u): goto L_1E414;
    case RC_ADDR(0x0001e418u): goto L_1E418;
    case RC_ADDR(0x0001e41cu): goto L_1E41C;
    case RC_ADDR(0x0001e420u): goto L_1E420;
    case RC_ADDR(0x0001e424u): goto L_1E424;
    case RC_ADDR(0x0001e428u): goto L_1E428;
    case RC_ADDR(0x0001e42cu): goto L_1E42C;
    case RC_ADDR(0x0001e42eu): goto L_1E42E;
    case RC_ADDR(0x0001e430u): goto L_1E430;
    case RC_ADDR(0x0001e432u): goto L_1E432;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E3F6:
    /* 0001e3f6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001e3f6u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1E3FA:
    /* 0001e3fa   4  clr.l (ffffce08,A4) */
    c->pc = RC_ADDR(0x0001e3fau);
    rc_wr32(c, m, (c->a[4] - 0x31f8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E3FE:
    /* 0001e3fe   4  lea (0001e386),A0 */
    c->pc = RC_ADDR(0x0001e3feu);
    c->a[0] = RC_ADDR(0x0001e386u);

L_1E402:
    /* 0001e402   4  move.l A0,(ffffce0c,A4) */
    c->pc = RC_ADDR(0x0001e402u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x31f4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E406:
    /* 0001e406   4  clr.l (ffffcdfa,A4) */
    c->pc = RC_ADDR(0x0001e406u);
    rc_wr32(c, m, (c->a[4] - 0x3206u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E40A:
    /* 0001e40a   4  clr.l (ffffcdfe,A4) */
    c->pc = RC_ADDR(0x0001e40au);
    rc_wr32(c, m, (c->a[4] - 0x3202u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1E40E:
    /* 0001e40e   6  move.b #2,(ffffce02,A4) */
    c->pc = RC_ADDR(0x0001e40eu);
    t0 = 0x00000002u;
    rc_wr8(c, m, (c->a[4] - 0x31feu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1E414:
    /* 0001e414   4  clr.b (ffffce03,A4) */
    c->pc = RC_ADDR(0x0001e414u);
    rc_wr8(c, m, (c->a[4] - 0x31fdu), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_1E418:
    /* 0001e418   4  lea (0001e434),A0 */
    c->pc = RC_ADDR(0x0001e418u);
    c->a[0] = RC_ADDR(0x0001e434u);

L_1E41C:
    /* 0001e41c   4  move.l A0,(ffffce04,A4) */
    c->pc = RC_ADDR(0x0001e41cu);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x31fcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E420:
    /* 0001e420   4  pea (ffffcdfa,A4) */
    c->pc = RC_ADDR(0x0001e420u);
    rc_push32(c, m, (c->a[4] - 0x3206u));

L_1E424:
    /* 0001e424   4  pea (00000005).l */
    c->pc = RC_ADDR(0x0001e424u);
    rc_push32(c, m, RC_ADDR(0x00000005u));

L_1E428:
    /* 0001e428   4  jsr (ffff832c,A4) */
    c->pc = RC_ADDR(0x0001e428u);
    /* vector 135: exec.library -168 */
    c->pc = RC_ADDR(0x0001e42cu);
    rc_os_call(c, m, 0, -168);

L_1E42C:
    /* 0001e42c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001e42cu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E42E:
    /* 0001e42e   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001e42eu);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1E430:
    /* 0001e430   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e430u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E432:
    /* 0001e432   2  rts */
    c->pc = RC_ADDR(0x0001e432u);
    rc_ret(c, m);
    return;

}
