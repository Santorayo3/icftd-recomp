/* fn_0000b952 - 108 byte(s), 30 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000b952(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b952u): goto L_B952;
    case RC_ADDR(0x0000b956u): goto L_B956;
    case RC_ADDR(0x0000b95cu): goto L_B95C;
    case RC_ADDR(0x0000b960u): goto L_B960;
    case RC_ADDR(0x0000b962u): goto L_B962;
    case RC_ADDR(0x0000b966u): goto L_B966;
    case RC_ADDR(0x0000b96au): goto L_B96A;
    case RC_ADDR(0x0000b96cu): goto L_B96C;
    case RC_ADDR(0x0000b970u): goto L_B970;
    case RC_ADDR(0x0000b974u): goto L_B974;
    case RC_ADDR(0x0000b978u): goto L_B978;
    case RC_ADDR(0x0000b97cu): goto L_B97C;
    case RC_ADDR(0x0000b980u): goto L_B980;
    case RC_ADDR(0x0000b984u): goto L_B984;
    case RC_ADDR(0x0000b988u): goto L_B988;
    case RC_ADDR(0x0000b98au): goto L_B98A;
    case RC_ADDR(0x0000b98eu): goto L_B98E;
    case RC_ADDR(0x0000b992u): goto L_B992;
    case RC_ADDR(0x0000b996u): goto L_B996;
    case RC_ADDR(0x0000b99au): goto L_B99A;
    case RC_ADDR(0x0000b99eu): goto L_B99E;
    case RC_ADDR(0x0000b9a0u): goto L_B9A0;
    case RC_ADDR(0x0000b9a4u): goto L_B9A4;
    case RC_ADDR(0x0000b9a8u): goto L_B9A8;
    case RC_ADDR(0x0000b9aau): goto L_B9AA;
    case RC_ADDR(0x0000b9aeu): goto L_B9AE;
    case RC_ADDR(0x0000b9b2u): goto L_B9B2;
    case RC_ADDR(0x0000b9b6u): goto L_B9B6;
    case RC_ADDR(0x0000b9bau): goto L_B9BA;
    case RC_ADDR(0x0000b9bcu): goto L_B9BC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B952:
    /* 0000b952   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000b952u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_B956:
    /* 0000b956   6  move.w #1,(9c6,A4) */
    c->pc = RC_ADDR(0x0000b956u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x9c6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B95C:
    /* 0000b95c   4  tst.w (8,A5) */
    c->pc = RC_ADDR(0x0000b95cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_B960:
    /* 0000b960   2  beq 0000b96c */
    c->pc = RC_ADDR(0x0000b960u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_B96C;

L_B962:
    /* 0000b962   4  lea (0000b9be),A0 */
    c->pc = RC_ADDR(0x0000b962u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x0000b9beu);

L_B966:
    /* 0000b966   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000b966u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B96A:
    /* 0000b96a   2  bra 0000b974 */
    c->pc = RC_ADDR(0x0000b96au);
    rc_step(c, m, 10);
    goto L_B974;

L_B96C:
    /* 0000b96c   4  lea (0000b9c3),A0 */
    c->pc = RC_ADDR(0x0000b96cu);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x0000b9c3u);

L_B970:
    /* 0000b970   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000b970u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B974:
    /* 0000b974   4  jsr (ffff80d4,A4) */
    c->pc = RC_ADDR(0x0000b974u);
    rc_step(c, m, 18);
    /* vector 35 */
    rc_push32(c, m, RC_ADDR(0x0000b978u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bcau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000afb8u);
    return;

L_B978:
    /* 0000b978   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x0000b978u);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x0000b97cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_B97C:
    /* 0000b97c   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x0000b97cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_B980:
    /* 0000b980   4  pea (ffff9d82,A4) */
    c->pc = RC_ADDR(0x0000b980u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x627eu));

L_B984:
    /* 0000b984   4  jsr (0000b0be) */
    c->pc = RC_ADDR(0x0000b984u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000b988u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b0beu);
    return;

L_B988:
    /* 0000b988   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000b988u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B98A:
    /* 0000b98a   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x0000b98au);
    rc_step(c, m, 18);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x0000b98eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d32u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f814u);
    return;

L_B98E:
    /* 0000b98e   4  jsr (ffff8284,A4) */
    c->pc = RC_ADDR(0x0000b98eu);
    rc_step(c, m, 18);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x0000b992u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d7au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021320u);
    return;

L_B992:
    /* 0000b992   4  clr.w (ffffd2a4,A4) */
    c->pc = RC_ADDR(0x0000b992u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2d5cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B996:
    /* 0000b996   4  pea (0000b9c8) */
    c->pc = RC_ADDR(0x0000b996u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b9c8u));

L_B99A:
    /* 0000b99a   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x0000b99au);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x0000b99eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_B99E:
    /* 0000b99e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000b99eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_B9A0:
    /* 0000b9a0   4  pea (0000b8aa) */
    c->pc = RC_ADDR(0x0000b9a0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b8aau));

L_B9A4:
    /* 0000b9a4   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000b9a4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B9A8:
    /* 0000b9a8   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000b9a8u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B9AA:
    /* 0000b9aa   4  pea (0000b9d5) */
    c->pc = RC_ADDR(0x0000b9aau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000b9d5u));

L_B9AE:
    /* 0000b9ae   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0000b9aeu);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000b9b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d5cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020c0cu);
    return;

L_B9B2:
    /* 0000b9b2   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x0000b9b2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x10u);

L_B9B6:
    /* 0000b9b6   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x0000b9b6u);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x0000b9bau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022308u);
    return;

L_B9BA:
    /* 0000b9ba   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b9bau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B9BC:
    /* 0000b9bc   2  rts */
    c->pc = RC_ADDR(0x0000b9bcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
