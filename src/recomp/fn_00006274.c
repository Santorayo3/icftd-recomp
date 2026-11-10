/* fn_00006274 - 22 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00006274(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00006274u): goto L_6274;
    case RC_ADDR(0x00006278u): goto L_6278;
    case RC_ADDR(0x0000627cu): goto L_627C;
    case RC_ADDR(0x00006280u): goto L_6280;
    case RC_ADDR(0x00006284u): goto L_6284;
    case RC_ADDR(0x00006286u): goto L_6286;
    case RC_ADDR(0x00006288u): goto L_6288;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6274:
    /* 00006274   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00006274u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_6278:
    /* 00006278   4  move.l (fffff066,A4),-(A7) */
    c->pc = RC_ADDR(0x00006278u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf9au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_627C:
    /* 0000627c   4  move.l (fffff06a,A4),-(A7) */
    c->pc = RC_ADDR(0x0000627cu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xf96u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6280:
    /* 00006280   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00006280u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x00006284u);
    rc_os_call(c, m, 0, -210);

L_6284:
    /* 00006284   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00006284u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6286:
    /* 00006286   2  unlk A5 */
    c->pc = RC_ADDR(0x00006286u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_6288:
    /* 00006288   2  rts */
    c->pc = RC_ADDR(0x00006288u);
    rc_ret(c, m);
    return;

}
