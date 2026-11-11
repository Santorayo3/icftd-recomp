/* fn_0000996a - 26 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000996a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000996au): goto L_996A;
    case RC_ADDR(0x0000996eu): goto L_996E;
    case RC_ADDR(0x00009972u): goto L_9972;
    case RC_ADDR(0x00009976u): goto L_9976;
    case RC_ADDR(0x0000997au): goto L_997A;
    case RC_ADDR(0x0000997cu): goto L_997C;
    case RC_ADDR(0x00009980u): goto L_9980;
    case RC_ADDR(0x00009982u): goto L_9982;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_996A:
    /* 0000996a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000996au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_996E:
    /* 0000996e   4  pea (00000008).l */
    c->pc = RC_ADDR(0x0000996eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000008u);

L_9972:
    /* 00009972   4  move.l (2ec,A4),-(A7) */
    c->pc = RC_ADDR(0x00009972u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9976:
    /* 00009976   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00009976u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0000997au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_997A:
    /* 0000997a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000997au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_997C:
    /* 0000997c   4  jsr (00009bec) */
    c->pc = RC_ADDR(0x0000997cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00009980u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009becu);
    return;

L_9980:
    /* 00009980   2  unlk A5 */
    c->pc = RC_ADDR(0x00009980u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9982:
    /* 00009982   2  rts */
    c->pc = RC_ADDR(0x00009982u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
