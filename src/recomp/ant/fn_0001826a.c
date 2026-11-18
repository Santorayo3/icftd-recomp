/* fn_0001826a - 28 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001826a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001826au): goto L_1826A;
    case RC_ADDR(0x0001826eu): goto L_1826E;
    case RC_ADDR(0x00018274u): goto L_18274;
    case RC_ADDR(0x00018278u): goto L_18278;
    case RC_ADDR(0x0001827eu): goto L_1827E;
    case RC_ADDR(0x00018282u): goto L_18282;
    case RC_ADDR(0x00018284u): goto L_18284;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1826A:
    /* 0001826a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001826au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1826E:
    /* 0001826e   6  move.w #1,(1cd8,A4) */
    c->pc = RC_ADDR(0x0001826eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1cd8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18274:
    /* 00018274   4  movea.l (17fe,A4),A0 */
    c->pc = RC_ADDR(0x00018274u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17feu));
    c->a[0] = t0;

L_18278:
    /* 00018278   6  adda.l #d8,A0 */
    c->pc = RC_ADDR(0x00018278u);
    rc_step(c, m, 16);
    t0 = 0x000000d8u;
    c->a[0] += t0;

L_1827E:
    /* 0001827e   4  move.b #ca,(A0) */
    c->pc = RC_ADDR(0x0001827eu);
    rc_step(c, m, 12);
    t0 = 0x000000cau;
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_18282:
    /* 00018282   2  unlk A5 */
    c->pc = RC_ADDR(0x00018282u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18284:
    /* 00018284   2  rts */
    c->pc = RC_ADDR(0x00018284u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
