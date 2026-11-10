/* fn_00004d76 - 84 byte(s), 25 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00004d76(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00004d76u): goto L_4D76;
    case RC_ADDR(0x00004d7au): goto L_4D7A;
    case RC_ADDR(0x00004d7eu): goto L_4D7E;
    case RC_ADDR(0x00004d84u): goto L_4D84;
    case RC_ADDR(0x00004d88u): goto L_4D88;
    case RC_ADDR(0x00004d8au): goto L_4D8A;
    case RC_ADDR(0x00004d8cu): goto L_4D8C;
    case RC_ADDR(0x00004d90u): goto L_4D90;
    case RC_ADDR(0x00004d94u): goto L_4D94;
    case RC_ADDR(0x00004d96u): goto L_4D96;
    case RC_ADDR(0x00004d9au): goto L_4D9A;
    case RC_ADDR(0x00004d9cu): goto L_4D9C;
    case RC_ADDR(0x00004d9eu): goto L_4D9E;
    case RC_ADDR(0x00004da2u): goto L_4DA2;
    case RC_ADDR(0x00004da4u): goto L_4DA4;
    case RC_ADDR(0x00004da6u): goto L_4DA6;
    case RC_ADDR(0x00004daau): goto L_4DAA;
    case RC_ADDR(0x00004daeu): goto L_4DAE;
    case RC_ADDR(0x00004db2u): goto L_4DB2;
    case RC_ADDR(0x00004db6u): goto L_4DB6;
    case RC_ADDR(0x00004dbau): goto L_4DBA;
    case RC_ADDR(0x00004dbeu): goto L_4DBE;
    case RC_ADDR(0x00004dc2u): goto L_4DC2;
    case RC_ADDR(0x00004dc6u): goto L_4DC6;
    case RC_ADDR(0x00004dc8u): goto L_4DC8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4D76:
    /* 00004d76   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d76u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_4D7A:
    /* 00004d7a   4  movea.l (ffffcb14,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d7au);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[0] = t0;

L_4D7E:
    /* 00004d7e   6  move.l (ffffcbbc,A4),(4,A0) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d7eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3444u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4D84:
    /* 00004d84   4  move.w (10,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d84u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4D88:
    /* 00004d88   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d88u);
    rc_ext_l(c, 0);

L_4D8A:
    /* 00004d8a   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d8au);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4D8C:
    /* 00004d8c   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d8cu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4D90:
    /* 00004d90   4  jsr (ffff838c,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d90u);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x00004d94u));
    rc_depth++;
    c->pc = RC_ADDR(0x000218eau);
    return;

L_4D94:
    /* 00004d94   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d94u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_4D96:
    /* 00004d96   4  move.w (e,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d96u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4D9A:
    /* 00004d9a   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d9au);
    rc_ext_l(c, 0);

L_4D9C:
    /* 00004d9c   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d9cu);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4D9E:
    /* 00004d9e   4  move.w (c,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004d9eu);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4DA2:
    /* 00004da2   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004da2u);
    rc_ext_l(c, 0);

L_4DA4:
    /* 00004da4   2  move.l D0,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004da4u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4DA6:
    /* 00004da6   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004da6u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4DAA:
    /* 00004daa   4  jsr (ffff837a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004daau);
    /* vector 148 */
    rc_push32(c, m, RC_ADDR(0x00004daeu));
    rc_depth++;
    c->pc = RC_ADDR(0x000218b2u);
    return;

L_4DAE:
    /* 00004dae   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004daeu);
    c->a[7] = (c->a[7] + 0xcu);

L_4DB2:
    /* 00004db2   4  move.l (12,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004db2u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x12u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4DB6:
    /* 00004db6   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004db6u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4DBA:
    /* 00004dba   4  move.l (ffffcb14,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004dbau);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4DBE:
    /* 00004dbe   4  jsr (ffff839e,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004dbeu);
    /* vector 154 */
    rc_push32(c, m, RC_ADDR(0x00004dc2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002191au);
    return;

L_4DC2:
    /* 00004dc2   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004dc2u);
    c->a[7] = (c->a[7] + 0xcu);

L_4DC6:
    /* 00004dc6   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004dc6u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4DC8:
    /* 00004dc8   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00004dc8u);
    rc_ret(c, m);
    return;

}
