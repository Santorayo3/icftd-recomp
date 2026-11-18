/* fn_000062ba - 20 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000062ba(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000062bau): goto L_62BA;
    case RC_ADDR(0x000062beu): goto L_62BE;
    case RC_ADDR(0x000062c2u): goto L_62C2;
    case RC_ADDR(0x000062c6u): goto L_62C6;
    case RC_ADDR(0x000062c8u): goto L_62C8;
    case RC_ADDR(0x000062cau): goto L_62CA;
    case RC_ADDR(0x000062ccu): goto L_62CC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_62BA:
    /* 000062ba   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000062bau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_62BE:
    /* 000062be   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000062beu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_62C2:
    /* 000062c2   4  jsr (00001f92) */
    c->pc = RC_ADDR(0x000062c2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000062c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001f92u);
    return;

L_62C6:
    /* 000062c6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000062c6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_62C8:
    /* 000062c8   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000062c8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_62CA:
    /* 000062ca   2  unlk A5 */
    c->pc = RC_ADDR(0x000062cau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_62CC:
    /* 000062cc   2  rts */
    c->pc = RC_ADDR(0x000062ccu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
