/* fn_00020064 - 50 byte(s), 17 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020064(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00020064u): goto L_20064;
    case RC_ADDR(0x00020068u): goto L_20068;
    case RC_ADDR(0x0002006au): goto L_2006A;
    case RC_ADDR(0x0002006eu): goto L_2006E;
    case RC_ADDR(0x00020072u): goto L_20072;
    case RC_ADDR(0x00020076u): goto L_20076;
    case RC_ADDR(0x0002007au): goto L_2007A;
    case RC_ADDR(0x0002007eu): goto L_2007E;
    case RC_ADDR(0x00020080u): goto L_20080;
    case RC_ADDR(0x00020086u): goto L_20086;
    case RC_ADDR(0x00020088u): goto L_20088;
    case RC_ADDR(0x0002008au): goto L_2008A;
    case RC_ADDR(0x0002008cu): goto L_2008C;
    case RC_ADDR(0x0002008eu): goto L_2008E;
    case RC_ADDR(0x00020090u): goto L_20090;
    case RC_ADDR(0x00020092u): goto L_20092;
    case RC_ADDR(0x00020094u): goto L_20094;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20064:
    /* 00020064   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x00020064u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_20068:
    /* 00020068   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00020068u);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2006A:
    /* 0002006a   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0002006au);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2006E:
    /* 0002006e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0002006eu);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20072:
    /* 00020072   4  jsr (ffff824e,A4) */
    c->pc = RC_ADDR(0x00020072u);
    /* vector 98 */
    rc_push32(c, m, RC_ADDR(0x00020076u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001ec42u);
    return;

L_20076:
    /* 00020076   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00020076u);
    c->a[7] = (c->a[7] + 0xau);

L_2007A:
    /* 0002007a   4  move.w D0,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0002007au);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2007E:
    /* 0002007e   2  beq 00020092 */
    c->pc = RC_ADDR(0x0002007eu);
    if (rc_cond(c, 7)) goto L_20092;

L_20080:
    /* 00020080   6  cmpi.w #3039,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00020080u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_cmp(c, RC_W, t0, 0x00003039u);

L_20086:
    /* 00020086   2  bne 0002008e */
    c->pc = RC_ADDR(0x00020086u);
    if (rc_cond(c, 6)) goto L_2008E;

L_20088:
    /* 00020088   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00020088u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2008A:
    /* 0002008a   2  unlk A5 */
    c->pc = RC_ADDR(0x0002008au);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2008C:
    /* 0002008c   2  rts */
    c->pc = RC_ADDR(0x0002008cu);
    rc_ret(c, m);
    return;

L_2008E:
    /* 0002008e   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0002008eu);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20090:
    /* 00020090   2  bra 0002008a */
    c->pc = RC_ADDR(0x00020090u);
    rc_tick();
    goto L_2008A;

L_20092:
    /* 00020092   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00020092u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20094:
    /* 00020094   2  bra 0002008a */
    c->pc = RC_ADDR(0x00020094u);
    rc_tick();
    goto L_2008A;

}
