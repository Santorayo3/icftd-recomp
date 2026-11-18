/* fn_00014482 - 46 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00014482(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00014482u): goto L_14482;
    case RC_ADDR(0x00014486u): goto L_14486;
    case RC_ADDR(0x0001448cu): goto L_1448C;
    case RC_ADDR(0x0001448eu): goto L_1448E;
    case RC_ADDR(0x00014494u): goto L_14494;
    case RC_ADDR(0x00014496u): goto L_14496;
    case RC_ADDR(0x0001449cu): goto L_1449C;
    case RC_ADDR(0x0001449eu): goto L_1449E;
    case RC_ADDR(0x000144a4u): goto L_144A4;
    case RC_ADDR(0x000144a6u): goto L_144A6;
    case RC_ADDR(0x000144a8u): goto L_144A8;
    case RC_ADDR(0x000144aau): goto L_144AA;
    case RC_ADDR(0x000144acu): goto L_144AC;
    case RC_ADDR(0x000144aeu): goto L_144AE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14482:
    /* 00014482   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00014482u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_14486:
    /* 00014486   6  cmpi.w #fff0,(8,A5) */
    c->pc = RC_ADDR(0x00014486u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x0000fff0u);

L_1448C:
    /* 0001448c   2  blt 000144ac */
    c->pc = RC_ADDR(0x0001448cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_144AC;

L_1448E:
    /* 0001448e   6  cmpi.w #150,(8,A5) */
    c->pc = RC_ADDR(0x0001448eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000150u);

L_14494:
    /* 00014494   2  bgt 000144ac */
    c->pc = RC_ADDR(0x00014494u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_144AC;

L_14496:
    /* 00014496   6  cmpi.w #ffea,(a,A5) */
    c->pc = RC_ADDR(0x00014496u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_cmp(c, RC_W, t0, 0x0000ffeau);

L_1449C:
    /* 0001449c   2  blt 000144ac */
    c->pc = RC_ADDR(0x0001449cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_144AC;

L_1449E:
    /* 0001449e   6  cmpi.w #de,(a,A5) */
    c->pc = RC_ADDR(0x0001449eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_cmp(c, RC_W, t0, 0x000000deu);

L_144A4:
    /* 000144a4   2  bgt 000144ac */
    c->pc = RC_ADDR(0x000144a4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_144AC;

L_144A6:
    /* 000144a6   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000144a6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_144A8:
    /* 000144a8   2  unlk A5 */
    c->pc = RC_ADDR(0x000144a8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_144AA:
    /* 000144aa   2  rts */
    c->pc = RC_ADDR(0x000144aau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_144AC:
    /* 000144ac   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000144acu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_144AE:
    /* 000144ae   2  bra 000144a8 */
    c->pc = RC_ADDR(0x000144aeu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_144A8;

}
