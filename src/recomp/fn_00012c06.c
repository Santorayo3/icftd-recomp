/* fn_00012c06 - 46 byte(s), 14 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00012c06(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00012c06u): goto L_12C06;
    case RC_ADDR(0x00012c0au): goto L_12C0A;
    case RC_ADDR(0x00012c10u): goto L_12C10;
    case RC_ADDR(0x00012c12u): goto L_12C12;
    case RC_ADDR(0x00012c18u): goto L_12C18;
    case RC_ADDR(0x00012c1au): goto L_12C1A;
    case RC_ADDR(0x00012c20u): goto L_12C20;
    case RC_ADDR(0x00012c22u): goto L_12C22;
    case RC_ADDR(0x00012c28u): goto L_12C28;
    case RC_ADDR(0x00012c2au): goto L_12C2A;
    case RC_ADDR(0x00012c2cu): goto L_12C2C;
    case RC_ADDR(0x00012c2eu): goto L_12C2E;
    case RC_ADDR(0x00012c30u): goto L_12C30;
    case RC_ADDR(0x00012c32u): goto L_12C32;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12C06:
    /* 00012c06   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00012c06u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_12C0A:
    /* 00012c0a   6  cmpi.w #fff0,(8,A5) */
    c->pc = RC_ADDR(0x00012c0au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x0000fff0u);

L_12C10:
    /* 00012c10   2  blt 00012c30 */
    c->pc = RC_ADDR(0x00012c10u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_12C30;

L_12C12:
    /* 00012c12   6  cmpi.w #150,(8,A5) */
    c->pc = RC_ADDR(0x00012c12u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000150u);

L_12C18:
    /* 00012c18   2  bgt 00012c30 */
    c->pc = RC_ADDR(0x00012c18u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_12C30;

L_12C1A:
    /* 00012c1a   6  cmpi.w #ffea,(a,A5) */
    c->pc = RC_ADDR(0x00012c1au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ffeau);

L_12C20:
    /* 00012c20   2  blt 00012c30 */
    c->pc = RC_ADDR(0x00012c20u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_12C30;

L_12C22:
    /* 00012c22   6  cmpi.w #de,(a,A5) */
    c->pc = RC_ADDR(0x00012c22u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_cmp(c, RC_W, t0, 0x000000deu);

L_12C28:
    /* 00012c28   2  bgt 00012c30 */
    c->pc = RC_ADDR(0x00012c28u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_12C30;

L_12C2A:
    /* 00012c2a   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00012c2au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_12C2C:
    /* 00012c2c   2  unlk A5 */
    c->pc = RC_ADDR(0x00012c2cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_12C2E:
    /* 00012c2e   2  rts */
    c->pc = RC_ADDR(0x00012c2eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_12C30:
    /* 00012c30   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00012c30u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_12C32:
    /* 00012c32   2  bra 00012c2c */
    c->pc = RC_ADDR(0x00012c32u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_12C2C;

}
