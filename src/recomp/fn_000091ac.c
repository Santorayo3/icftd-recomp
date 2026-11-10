/* fn_000091ac - 82 byte(s), 23 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000091ac(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000091acu): goto L_91AC;
    case RC_ADDR(0x000091b0u): goto L_91B0;
    case RC_ADDR(0x000091b4u): goto L_91B4;
    case RC_ADDR(0x000091bau): goto L_91BA;
    case RC_ADDR(0x000091beu): goto L_91BE;
    case RC_ADDR(0x000091c2u): goto L_91C2;
    case RC_ADDR(0x000091c4u): goto L_91C4;
    case RC_ADDR(0x000091c6u): goto L_91C6;
    case RC_ADDR(0x000091cau): goto L_91CA;
    case RC_ADDR(0x000091ceu): goto L_91CE;
    case RC_ADDR(0x000091d2u): goto L_91D2;
    case RC_ADDR(0x000091d8u): goto L_91D8;
    case RC_ADDR(0x000091dau): goto L_91DA;
    case RC_ADDR(0x000091deu): goto L_91DE;
    case RC_ADDR(0x000091e2u): goto L_91E2;
    case RC_ADDR(0x000091e4u): goto L_91E4;
    case RC_ADDR(0x000091e6u): goto L_91E6;
    case RC_ADDR(0x000091eau): goto L_91EA;
    case RC_ADDR(0x000091eeu): goto L_91EE;
    case RC_ADDR(0x000091f2u): goto L_91F2;
    case RC_ADDR(0x000091f8u): goto L_91F8;
    case RC_ADDR(0x000091fau): goto L_91FA;
    case RC_ADDR(0x000091fcu): goto L_91FC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_91AC:
    /* 000091ac   4  link.w A5,#fffffffe */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091acu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_91B0:
    /* 000091b0   4  clr.w (ffffefa8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091b0u);
    rc_wr16(c, m, (c->a[4] - 0x1058u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_91B4:
    /* 000091b4   6  move.w #d,(ffffefd6,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091b4u);
    t0 = 0x0000000du;
    rc_wr16(c, m, (c->a[4] - 0x102au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_91BA:
    /* 000091ba   4  clr.w (fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091bau);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_91BE:
    /* 000091be   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091beu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_91C2:
    /* 000091c2   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091c2u);
    rc_ext_l(c, 0);

L_91C4:
    /* 000091c4   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091c4u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_91C6:
    /* 000091c6   4  lea (ffffefaa,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091c6u);
    c->a[0] = (c->a[4] - 0x1056u);

L_91CA:
    /* 000091ca   4  clr.w (0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091cau);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_91CE:
    /* 000091ce   4  addq.w #1,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091ceu);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_91D2:
    /* 000091d2   6  cmpi.w #10,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091d2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000010u);

L_91D8:
    /* 000091d8   2  blt 000091be */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091d8u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_91BE; }

L_91DA:
    /* 000091da   4  clr.w (fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091dau);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_91DE:
    /* 000091de   4  move.w (fffffffe,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091deu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_91E2:
    /* 000091e2   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091e2u);
    rc_ext_l(c, 0);

L_91E4:
    /* 000091e4   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091e4u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_91E6:
    /* 000091e6   4  lea (ffffefca,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091e6u);
    c->a[0] = (c->a[4] - 0x1036u);

L_91EA:
    /* 000091ea   4  clr.w (0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091eau);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_91EE:
    /* 000091ee   4  addq.w #1,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091eeu);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_91F2:
    /* 000091f2   6  cmpi.w #5,(fffffffe,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091f2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_91F8:
    /* 000091f8   2  blt 000091de */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091f8u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_91DE; }

L_91FA:
    /* 000091fa   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091fau);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_91FC:
    /* 000091fc   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x000091fcu);
    rc_ret(c, m);
    return;

}
