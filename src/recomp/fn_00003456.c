/* fn_00003456 - 44 byte(s), 15 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00003456(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00003456u): goto L_3456;
    case RC_ADDR(0x0000345au): goto L_345A;
    case RC_ADDR(0x0000345eu): goto L_345E;
    case RC_ADDR(0x00003462u): goto L_3462;
    case RC_ADDR(0x00003464u): goto L_3464;
    case RC_ADDR(0x00003468u): goto L_3468;
    case RC_ADDR(0x0000346cu): goto L_346C;
    case RC_ADDR(0x00003470u): goto L_3470;
    case RC_ADDR(0x00003472u): goto L_3472;
    case RC_ADDR(0x00003474u): goto L_3474;
    case RC_ADDR(0x00003476u): goto L_3476;
    case RC_ADDR(0x00003478u): goto L_3478;
    case RC_ADDR(0x0000347au): goto L_347A;
    case RC_ADDR(0x0000347cu): goto L_347C;
    case RC_ADDR(0x00003480u): goto L_3480;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3456:
    /* 00003456   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00003456u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_345A:
    /* 0000345a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000345au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_345E:
    /* 0000345e   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x0000345eu);
    rc_step(c, m);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x00003462u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c5cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_3462:
    /* 00003462   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003462u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3464:
    /* 00003464   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00003464u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3468:
    /* 00003468   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00003468u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_346C:
    /* 0000346c   4  jsr (ffff8212,A4) */
    c->pc = RC_ADDR(0x0000346cu);
    rc_step(c, m);
    /* vector 88 */
    rc_push32(c, m, RC_ADDR(0x00003470u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c68u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d642u);
    return;

L_3470:
    /* 00003470   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003470u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3472:
    /* 00003472   2  tst.w D0 */
    c->pc = RC_ADDR(0x00003472u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_3474:
    /* 00003474   2  bne 0000347c */
    c->pc = RC_ADDR(0x00003474u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_347C;

L_3476:
    /* 00003476   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00003476u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3478:
    /* 00003478   2  unlk A5 */
    c->pc = RC_ADDR(0x00003478u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_347A:
    /* 0000347a   2  rts */
    c->pc = RC_ADDR(0x0000347au);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_347C:
    /* 0000347c   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000347cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3480:
    /* 00003480   2  bra 00003478 */
    c->pc = RC_ADDR(0x00003480u);
    rc_step(c, m);
    rc_tick();
    goto L_3478;

}
