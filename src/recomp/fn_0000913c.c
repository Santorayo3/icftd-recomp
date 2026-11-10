/* fn_0000913c - 112 byte(s), 34 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000913c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000913cu): goto L_913C;
    case RC_ADDR(0x00009140u): goto L_9140;
    case RC_ADDR(0x00009144u): goto L_9144;
    case RC_ADDR(0x00009148u): goto L_9148;
    case RC_ADDR(0x0000914au): goto L_914A;
    case RC_ADDR(0x0000914eu): goto L_914E;
    case RC_ADDR(0x00009152u): goto L_9152;
    case RC_ADDR(0x00009154u): goto L_9154;
    case RC_ADDR(0x00009158u): goto L_9158;
    case RC_ADDR(0x0000915au): goto L_915A;
    case RC_ADDR(0x0000915cu): goto L_915C;
    case RC_ADDR(0x0000915eu): goto L_915E;
    case RC_ADDR(0x00009162u): goto L_9162;
    case RC_ADDR(0x00009166u): goto L_9166;
    case RC_ADDR(0x0000916au): goto L_916A;
    case RC_ADDR(0x0000916eu): goto L_916E;
    case RC_ADDR(0x00009170u): goto L_9170;
    case RC_ADDR(0x00009174u): goto L_9174;
    case RC_ADDR(0x00009176u): goto L_9176;
    case RC_ADDR(0x0000917au): goto L_917A;
    case RC_ADDR(0x0000917eu): goto L_917E;
    case RC_ADDR(0x00009180u): goto L_9180;
    case RC_ADDR(0x00009186u): goto L_9186;
    case RC_ADDR(0x00009188u): goto L_9188;
    case RC_ADDR(0x0000918cu): goto L_918C;
    case RC_ADDR(0x00009190u): goto L_9190;
    case RC_ADDR(0x00009192u): goto L_9192;
    case RC_ADDR(0x00009198u): goto L_9198;
    case RC_ADDR(0x0000919au): goto L_919A;
    case RC_ADDR(0x0000919eu): goto L_919E;
    case RC_ADDR(0x000091a2u): goto L_91A2;
    case RC_ADDR(0x000091a4u): goto L_91A4;
    case RC_ADDR(0x000091a8u): goto L_91A8;
    case RC_ADDR(0x000091aau): goto L_91AA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_913C:
    /* 0000913c   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000913cu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_9140:
    /* 00009140   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00009140u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9144:
    /* 00009144   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00009144u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9148:
    /* 00009148   2  bra 00009166 */
    c->pc = RC_ADDR(0x00009148u);
    rc_step(c, m);
    goto L_9166;

L_914A:
    /* 0000914a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000914au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_914E:
    /* 0000914e   4  add.w #e1,D0 */
    c->pc = RC_ADDR(0x0000914eu);
    rc_step(c, m);
    t0 = 0x000000e1u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_9152:
    /* 00009152   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00009152u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9154:
    /* 00009154   4  jsr (ffff8086,A4) */
    c->pc = RC_ADDR(0x00009154u);
    rc_step(c, m);
    /* vector 22 */
    rc_push32(c, m, RC_ADDR(0x00009158u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021adcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000711cu);
    return;

L_9158:
    /* 00009158   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00009158u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_915A:
    /* 0000915a   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000915au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_915C:
    /* 0000915c   2  beq 00009162 */
    c->pc = RC_ADDR(0x0000915cu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_9162;

L_915E:
    /* 0000915e   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000915eu);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_9162:
    /* 00009162   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00009162u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_9166:
    /* 00009166   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00009166u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_916A:
    /* 0000916a   4  cmp.w (fffff0b4,A4),D0 */
    c->pc = RC_ADDR(0x0000916au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf4cu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_916E:
    /* 0000916e   2  blt 0000914a */
    c->pc = RC_ADDR(0x0000916eu);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_914A; }

L_9170:
    /* 00009170   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00009170u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_9174:
    /* 00009174   2  beq 00009180 */
    c->pc = RC_ADDR(0x00009174u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_9180;

L_9176:
    /* 00009176   4  move.w #e8,-(A7) */
    c->pc = RC_ADDR(0x00009176u);
    rc_step(c, m);
    t0 = 0x000000e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_917A:
    /* 0000917a   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x0000917au);
    rc_step(c, m);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x0000917eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad6u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000070cau);
    return;

L_917E:
    /* 0000917e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000917eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_9180:
    /* 00009180   6  cmpi.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009180u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_9186:
    /* 00009186   2  ble 00009192 */
    c->pc = RC_ADDR(0x00009186u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_9192;

L_9188:
    /* 00009188   4  move.w #96,-(A7) */
    c->pc = RC_ADDR(0x00009188u);
    rc_step(c, m);
    t0 = 0x00000096u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_918C:
    /* 0000918c   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x0000918cu);
    rc_step(c, m);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x00009190u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad6u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000070cau);
    return;

L_9190:
    /* 00009190   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00009190u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_9192:
    /* 00009192   6  cmpi.w #4,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009192u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_9198:
    /* 00009198   2  bne 000091a4 */
    c->pc = RC_ADDR(0x00009198u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_91A4;

L_919A:
    /* 0000919a   4  move.w #ea,-(A7) */
    c->pc = RC_ADDR(0x0000919au);
    rc_step(c, m);
    t0 = 0x000000eau;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_919E:
    /* 0000919e   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x0000919eu);
    rc_step(c, m);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x000091a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ad6u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000070cau);
    return;

L_91A2:
    /* 000091a2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000091a2u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_91A4:
    /* 000091a4   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000091a4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_91A8:
    /* 000091a8   2  unlk A5 */
    c->pc = RC_ADDR(0x000091a8u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_91AA:
    /* 000091aa   2  rts */
    c->pc = RC_ADDR(0x000091aau);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
