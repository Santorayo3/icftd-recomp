/* fn_0000518e - 40 byte(s), 12 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000518e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000518eu): goto L_518E;
    case RC_ADDR(0x00005192u): goto L_5192;
    case RC_ADDR(0x00005196u): goto L_5196;
    case RC_ADDR(0x0000519au): goto L_519A;
    case RC_ADDR(0x0000519cu): goto L_519C;
    case RC_ADDR(0x0000519eu): goto L_519E;
    case RC_ADDR(0x000051a2u): goto L_51A2;
    case RC_ADDR(0x000051a6u): goto L_51A6;
    case RC_ADDR(0x000051aau): goto L_51AA;
    case RC_ADDR(0x000051aeu): goto L_51AE;
    case RC_ADDR(0x000051b2u): goto L_51B2;
    case RC_ADDR(0x000051b4u): goto L_51B4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_518E:
    /* 0000518e   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000518eu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_5192:
    /* 00005192   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005192u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5196:
    /* 00005196   4  jsr (ffff82ae,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005196u);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x0000519au));
    rc_depth++;
    c->pc = RC_ADDR(0x00020820u);
    return;

L_519A:
    /* 0000519a   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000519au);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_519C:
    /* 0000519c   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000519cu);
    rc_ext_l(c, 0);

L_519E:
    /* 0000519e   4  add.l D0,(8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000519eu);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_51A2:
    /* 000051a2   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000051a2u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_51A6:
    /* 000051a6   4  addq.l #1,(8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000051a6u);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_51AA:
    /* 000051aa   4  move.b #20,(A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000051aau);
    t0 = 0x00000020u;
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_51AE:
    /* 000051ae   4  move.l (8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000051aeu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_51B2:
    /* 000051b2   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000051b2u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_51B4:
    /* 000051b4   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000051b4u);
    rc_ret(c, m);
    return;

}
