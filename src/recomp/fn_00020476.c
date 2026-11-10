/* fn_00020476 - 26 byte(s), 9 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020476(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00020476u): goto L_20476;
    case RC_ADDR(0x0002047au): goto L_2047A;
    case RC_ADDR(0x0002047cu): goto L_2047C;
    case RC_ADDR(0x00020480u): goto L_20480;
    case RC_ADDR(0x00020484u): goto L_20484;
    case RC_ADDR(0x00020486u): goto L_20486;
    case RC_ADDR(0x00020488u): goto L_20488;
    case RC_ADDR(0x0002048au): goto L_2048A;
    case RC_ADDR(0x0002048cu): goto L_2048C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20476:
    /* 00020476   4  tst.w (2ad8,A4) */
    c->pc = RC_ADDR(0x00020476u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ad8u));
    rc_set_nzvc(c, t0, RC_W);

L_2047A:
    /* 0002047a   2  beq 0002048c */
    c->pc = RC_ADDR(0x0002047au);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_2048C;

L_2047C:
    /* 0002047c   4  move.l (4,A7),-(A7) */
    c->pc = RC_ADDR(0x0002047cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20480:
    /* 00020480   4  jsr (000203de) */
    c->pc = RC_ADDR(0x00020480u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00020484u));
    rc_depth++;
    c->pc = RC_ADDR(0x000203deu);
    return;

L_20484:
    /* 00020484   2  addq.l #4,A7 */
    c->pc = RC_ADDR(0x00020484u);
    rc_step(c, m);
    c->a[7] += 0x00000004u;

L_20486:
    /* 00020486   2  tst.l D0 */
    c->pc = RC_ADDR(0x00020486u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_20488:
    /* 00020488   2  beq 0002048c */
    c->pc = RC_ADDR(0x00020488u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_2048C;

L_2048A:
    /* 0002048a   2  rts */
    c->pc = RC_ADDR(0x0002048au);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_2048C:
    /* 0002048c   4  jmp (0002145c) */
    c->pc = RC_ADDR(0x0002048cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002145cu);
    return;

}
