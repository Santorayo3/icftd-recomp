/* fn_00018254 - 22 byte(s), 6 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00018254(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00018254u): goto L_18254;
    case RC_ADDR(0x00018258u): goto L_18258;
    case RC_ADDR(0x0001825cu): goto L_1825C;
    case RC_ADDR(0x00018262u): goto L_18262;
    case RC_ADDR(0x00018266u): goto L_18266;
    case RC_ADDR(0x00018268u): goto L_18268;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18254:
    /* 00018254   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00018254u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_18258:
    /* 00018258   4  movea.l (17fe,A4),A0 */
    c->pc = RC_ADDR(0x00018258u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17feu));
    c->a[0] = t0;

L_1825C:
    /* 0001825c   6  adda.l #d8,A0 */
    c->pc = RC_ADDR(0x0001825cu);
    rc_step(c, m, 16);
    t0 = 0x000000d8u;
    c->a[0] += t0;

L_18262:
    /* 00018262   4  move.b #e0,(A0) */
    c->pc = RC_ADDR(0x00018262u);
    rc_step(c, m, 12);
    t0 = 0x000000e0u;
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_18266:
    /* 00018266   2  unlk A5 */
    c->pc = RC_ADDR(0x00018266u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18268:
    /* 00018268   2  rts */
    c->pc = RC_ADDR(0x00018268u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
