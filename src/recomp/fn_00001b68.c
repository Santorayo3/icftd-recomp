/* fn_00001b68 - 74 byte(s), 20 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00001b68(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00001b68u): goto L_1B68;
    case RC_ADDR(0x00001b6cu): goto L_1B6C;
    case RC_ADDR(0x00001b70u): goto L_1B70;
    case RC_ADDR(0x00001b74u): goto L_1B74;
    case RC_ADDR(0x00001b78u): goto L_1B78;
    case RC_ADDR(0x00001b7au): goto L_1B7A;
    case RC_ADDR(0x00001b7eu): goto L_1B7E;
    case RC_ADDR(0x00001b82u): goto L_1B82;
    case RC_ADDR(0x00001b86u): goto L_1B86;
    case RC_ADDR(0x00001b8au): goto L_1B8A;
    case RC_ADDR(0x00001b8eu): goto L_1B8E;
    case RC_ADDR(0x00001b92u): goto L_1B92;
    case RC_ADDR(0x00001b96u): goto L_1B96;
    case RC_ADDR(0x00001b9au): goto L_1B9A;
    case RC_ADDR(0x00001b9eu): goto L_1B9E;
    case RC_ADDR(0x00001ba2u): goto L_1BA2;
    case RC_ADDR(0x00001ba6u): goto L_1BA6;
    case RC_ADDR(0x00001ba8u): goto L_1BA8;
    case RC_ADDR(0x00001baeu): goto L_1BAE;
    case RC_ADDR(0x00001bb0u): goto L_1BB0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B68:
    /* 00001b68   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00001b68u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1B6C:
    /* 00001b6c   4  jsr (00001742) */
    c->pc = RC_ADDR(0x00001b6cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00001b70u));
    rc_depth++;
    c->pc = RC_ADDR(0x00001742u);
    return;

L_1B70:
    /* 00001b70   4  move.w (ffff8b56,A4),-(A7) */
    c->pc = RC_ADDR(0x00001b70u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x74aau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B74:
    /* 00001b74   4  jsr (0000737e) */
    c->pc = RC_ADDR(0x00001b74u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00001b78u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000737eu);
    return;

L_1B78:
    /* 00001b78   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00001b78u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1B7A:
    /* 00001b7a   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00001b7au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B7E:
    /* 00001b7e   4  jsr (ffff8032,A4) */
    c->pc = RC_ADDR(0x00001b7eu);
    rc_step(c, m);
    /* vector 8 */
    rc_push32(c, m, RC_ADDR(0x00001b82u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a88u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000151au);
    return;

L_1B82:
    /* 00001b82   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00001b82u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B86:
    /* 00001b86   4  pea (00001bbb) */
    c->pc = RC_ADDR(0x00001b86u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00001bbbu));

L_1B8A:
    /* 00001b8a   4  pea (00001bb2) */
    c->pc = RC_ADDR(0x00001b8au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00001bb2u));

L_1B8E:
    /* 00001b8e   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x00001b8eu);
    rc_step(c, m);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x00001b92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a64u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000002f4u);
    return;

L_1B92:
    /* 00001b92   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00001b92u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_1B96:
    /* 00001b96   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00001b96u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1B9A:
    /* 00001b9a   4  move.l (4,A0),-(A7) */
    c->pc = RC_ADDR(0x00001b9au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B9E:
    /* 00001b9e   4  pea (00001bc6) */
    c->pc = RC_ADDR(0x00001b9eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00001bc6u));

L_1BA2:
    /* 00001ba2   4  jsr (ffff802c,A4) */
    c->pc = RC_ADDR(0x00001ba2u);
    rc_step(c, m);
    /* vector 7 */
    rc_push32(c, m, RC_ADDR(0x00001ba6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a82u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000010beu);
    return;

L_1BA6:
    /* 00001ba6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00001ba6u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1BA8:
    /* 00001ba8   6  move.w #1,(ffffcf4c,A4) */
    c->pc = RC_ADDR(0x00001ba8u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x30b4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1BAE:
    /* 00001bae   2  unlk A5 */
    c->pc = RC_ADDR(0x00001baeu);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1BB0:
    /* 00001bb0   2  rts */
    c->pc = RC_ADDR(0x00001bb0u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
