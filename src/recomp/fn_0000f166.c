/* fn_0000f166 - 42 byte(s), 14 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f166(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f166u): goto L_F166;
    case RC_ADDR(0x0000f16au): goto L_F16A;
    case RC_ADDR(0x0000f16eu): goto L_F16E;
    case RC_ADDR(0x0000f170u): goto L_F170;
    case RC_ADDR(0x0000f174u): goto L_F174;
    case RC_ADDR(0x0000f178u): goto L_F178;
    case RC_ADDR(0x0000f17au): goto L_F17A;
    case RC_ADDR(0x0000f17cu): goto L_F17C;
    case RC_ADDR(0x0000f17eu): goto L_F17E;
    case RC_ADDR(0x0000f182u): goto L_F182;
    case RC_ADDR(0x0000f184u): goto L_F184;
    case RC_ADDR(0x0000f188u): goto L_F188;
    case RC_ADDR(0x0000f18au): goto L_F18A;
    case RC_ADDR(0x0000f18eu): goto L_F18E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F166:
    /* 0000f166   4  movem.l { D7 A7 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f166u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_F16A:
    /* 0000f16a   4  tst.w (a,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f16au);
    t0 = rc_rd16(c, m, (c->a[6] + 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_F16E:
    /* 0000f16e   2  beq 0000f18a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f16eu);
    if (rc_cond(c, 7)) goto L_F18A;

L_F170:
    /* 0000f170   4  clr.w (a,A6) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f170u);
    rc_wr16(c, m, (c->a[6] + 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F174:
    /* 0000f174   4  lea (26,A6),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f174u);
    c->a[0] = (c->a[6] + 0x26u);

L_F178:
    /* 0000f178   2  clr.b D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f178u);
    rc_d_set(c, 0, RC_B, 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_F17A:
    /* 0000f17a   2  tst.l (A0)+ */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f17au);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_set_nzvc(c, t0, RC_L);

L_F17C:
    /* 0000f17c   2  beq 0000f182 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f17cu);
    if (rc_cond(c, 7)) goto L_F182;

L_F17E:
    /* 0000f17e   4  bsr 0000f57e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f17eu);
    rc_push32(c, m, RC_ADDR(0x0000f182u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f57eu);
    return;

L_F182:
    /* 0000f182   2  addq.b #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f182u);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_B, t2);

L_F184:
    /* 0000f184   4  cmpi.b #4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f184u);
    t0 = rc_d_get(c, 0, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000004u);

L_F188:
    /* 0000f188   2  bne 0000f17a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f188u);
    if (rc_cond(c, 6)) { rc_tick(); goto L_F17A; }

L_F18A:
    /* 0000f18a   4  movem.l (SP)+,{ D0 A0 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f18au);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_F18E:
    /* 0000f18e   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f18eu);
    rc_ret(c, m);
    return;

}
