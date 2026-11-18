/* fn_000215c0 - 68 byte(s), 20 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000215c0(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000215c0u): goto L_215C0;
    case RC_ADDR(0x000215c4u): goto L_215C4;
    case RC_ADDR(0x000215c8u): goto L_215C8;
    case RC_ADDR(0x000215ccu): goto L_215CC;
    case RC_ADDR(0x000215ceu): goto L_215CE;
    case RC_ADDR(0x000215d0u): goto L_215D0;
    case RC_ADDR(0x000215d4u): goto L_215D4;
    case RC_ADDR(0x000215d6u): goto L_215D6;
    case RC_ADDR(0x000215dau): goto L_215DA;
    case RC_ADDR(0x000215dcu): goto L_215DC;
    case RC_ADDR(0x000215deu): goto L_215DE;
    case RC_ADDR(0x000215e2u): goto L_215E2;
    case RC_ADDR(0x000215e6u): goto L_215E6;
    case RC_ADDR(0x000215e8u): goto L_215E8;
    case RC_ADDR(0x000215ecu): goto L_215EC;
    case RC_ADDR(0x000215f0u): goto L_215F0;
    case RC_ADDR(0x000215f4u): goto L_215F4;
    case RC_ADDR(0x000215f6u): goto L_215F6;
    case RC_ADDR(0x000215fau): goto L_215FA;
    case RC_ADDR(0x00021600u): goto L_21600;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_215C0:
    /* 000215c0   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x000215c0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_215C4:
    /* 000215c4   4  movea.l (c,A0),A1 */
    c->pc = RC_ADDR(0x000215c4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[1] = t0;

L_215C8:
    /* 000215c8   4  movea.l (38,A1),A3 */
    c->pc = RC_ADDR(0x000215c8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x38u));
    c->a[3] = t0;

L_215CC:
    /* 000215cc   2  move.l A3,D0 */
    c->pc = RC_ADDR(0x000215ccu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_215CE:
    /* 000215ce   2  beq 000215de */
    c->pc = RC_ADDR(0x000215ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_215DE;

L_215D0:
    /* 000215d0   4  pea (8dc,A4) */
    c->pc = RC_ADDR(0x000215d0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x8dcu));

L_215D4:
    /* 000215d4   2  move.l A3,-(A7) */
    c->pc = RC_ADDR(0x000215d4u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_215D6:
    /* 000215d6   4  jsr (0001f918) */
    c->pc = RC_ADDR(0x000215d6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000215dau));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f918u);
    return;

L_215DA:
    /* 000215da   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000215dau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_215DC:
    /* 000215dc   2  bra 000215e8 */
    c->pc = RC_ADDR(0x000215dcu);
    rc_step(c, m, 10);
    goto L_215E8;

L_215DE:
    /* 000215de   4  pea (8dc,A4) */
    c->pc = RC_ADDR(0x000215deu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x8dcu));

L_215E2:
    /* 000215e2   4  jsr (0001f96c) */
    c->pc = RC_ADDR(0x000215e2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000215e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f96cu);
    return;

L_215E6:
    /* 000215e6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000215e6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_215E8:
    /* 000215e8   4  movea.l (a,A5),A0 */
    c->pc = RC_ADDR(0x000215e8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[0] = t0;

L_215EC:
    /* 000215ec   4  move.l (c,A0),-(A7) */
    c->pc = RC_ADDR(0x000215ecu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_215F0:
    /* 000215f0   4  jsr (0001fbdc) */
    c->pc = RC_ADDR(0x000215f0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000215f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fbdcu);
    return;

L_215F4:
    /* 000215f4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000215f4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_215F6:
    /* 000215f6   4  clr.w (91c,A4) */
    c->pc = RC_ADDR(0x000215f6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x91cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_215FA:
    /* 000215fa   6  move.w #1,(30ea,A4) */
    c->pc = RC_ADDR(0x000215fau);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x30eau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21600:
    /* 00021600   4  bra 00021950 */
    c->pc = RC_ADDR(0x00021600u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
