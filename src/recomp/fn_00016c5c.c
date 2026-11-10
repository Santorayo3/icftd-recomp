/* fn_00016c5c - 204 byte(s), 52 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00016c5c(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00016c5cu): goto L_16C5C;
    case RC_ADDR(0x00016c60u): goto L_16C60;
    case RC_ADDR(0x00016c64u): goto L_16C64;
    case RC_ADDR(0x00016c68u): goto L_16C68;
    case RC_ADDR(0x00016c6cu): goto L_16C6C;
    case RC_ADDR(0x00016c70u): goto L_16C70;
    case RC_ADDR(0x00016c74u): goto L_16C74;
    case RC_ADDR(0x00016c7au): goto L_16C7A;
    case RC_ADDR(0x00016c7cu): goto L_16C7C;
    case RC_ADDR(0x00016c80u): goto L_16C80;
    case RC_ADDR(0x00016c84u): goto L_16C84;
    case RC_ADDR(0x00016c88u): goto L_16C88;
    case RC_ADDR(0x00016c8cu): goto L_16C8C;
    case RC_ADDR(0x00016c90u): goto L_16C90;
    case RC_ADDR(0x00016c94u): goto L_16C94;
    case RC_ADDR(0x00016c98u): goto L_16C98;
    case RC_ADDR(0x00016c9cu): goto L_16C9C;
    case RC_ADDR(0x00016ca0u): goto L_16CA0;
    case RC_ADDR(0x00016ca4u): goto L_16CA4;
    case RC_ADDR(0x00016ca8u): goto L_16CA8;
    case RC_ADDR(0x00016cacu): goto L_16CAC;
    case RC_ADDR(0x00016cb2u): goto L_16CB2;
    case RC_ADDR(0x00016cb4u): goto L_16CB4;
    case RC_ADDR(0x00016cb8u): goto L_16CB8;
    case RC_ADDR(0x00016cbcu): goto L_16CBC;
    case RC_ADDR(0x00016cc0u): goto L_16CC0;
    case RC_ADDR(0x00016cc4u): goto L_16CC4;
    case RC_ADDR(0x00016cc8u): goto L_16CC8;
    case RC_ADDR(0x00016cccu): goto L_16CCC;
    case RC_ADDR(0x00016cd2u): goto L_16CD2;
    case RC_ADDR(0x00016cd4u): goto L_16CD4;
    case RC_ADDR(0x00016cd8u): goto L_16CD8;
    case RC_ADDR(0x00016cdcu): goto L_16CDC;
    case RC_ADDR(0x00016ce0u): goto L_16CE0;
    case RC_ADDR(0x00016ce4u): goto L_16CE4;
    case RC_ADDR(0x00016ce8u): goto L_16CE8;
    case RC_ADDR(0x00016cecu): goto L_16CEC;
    case RC_ADDR(0x00016cf2u): goto L_16CF2;
    case RC_ADDR(0x00016cf4u): goto L_16CF4;
    case RC_ADDR(0x00016cf8u): goto L_16CF8;
    case RC_ADDR(0x00016cfcu): goto L_16CFC;
    case RC_ADDR(0x00016d00u): goto L_16D00;
    case RC_ADDR(0x00016d04u): goto L_16D04;
    case RC_ADDR(0x00016d08u): goto L_16D08;
    case RC_ADDR(0x00016d0cu): goto L_16D0C;
    case RC_ADDR(0x00016d10u): goto L_16D10;
    case RC_ADDR(0x00016d14u): goto L_16D14;
    case RC_ADDR(0x00016d18u): goto L_16D18;
    case RC_ADDR(0x00016d1cu): goto L_16D1C;
    case RC_ADDR(0x00016d20u): goto L_16D20;
    case RC_ADDR(0x00016d24u): goto L_16D24;
    case RC_ADDR(0x00016d26u): goto L_16D26;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16C5C:
    /* 00016c5c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00016c5cu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_16C60:
    /* 00016c60   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00016c60u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16C64:
    /* 00016c64   4  pea (00016d34) */
    c->pc = RC_ADDR(0x00016c64u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00016d34u));

L_16C68:
    /* 00016c68   4  pea (00016d28) */
    c->pc = RC_ADDR(0x00016c68u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00016d28u));

L_16C6C:
    /* 00016c6c   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x00016c6cu);
    rc_step(c, m);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x00016c70u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021a64u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000002f4u);
    return;

L_16C70:
    /* 00016c70   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00016c70u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_16C74:
    /* 00016c74   6  btst #1,(9,A5) */
    c->pc = RC_ADDR(0x00016c74u);
    rc_step(c, m);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_16C7A:
    /* 00016c7a   2  beq 00016c94 */
    c->pc = RC_ADDR(0x00016c7au);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_16C94;

L_16C7C:
    /* 00016c7c   4  pea (fffffd54,A4) */
    c->pc = RC_ADDR(0x00016c7cu);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] - 0x2acu));

L_16C80:
    /* 00016c80   4  pea (fffffd52,A4) */
    c->pc = RC_ADDR(0x00016c80u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] - 0x2aeu));

L_16C84:
    /* 00016c84   4  pea (00016d39) */
    c->pc = RC_ADDR(0x00016c84u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00016d39u));

L_16C88:
    /* 00016c88   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x00016c88u);
    rc_step(c, m);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x00016c8cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_16C8C:
    /* 00016c8c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00016c8cu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_16C90:
    /* 00016c90   4  move.l D0,(fffffd4e,A4) */
    c->pc = RC_ADDR(0x00016c90u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2b2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16C94:
    /* 00016c94   4  pea (2de,A4) */
    c->pc = RC_ADDR(0x00016c94u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x2deu));

L_16C98:
    /* 00016c98   4  pea (afe,A4) */
    c->pc = RC_ADDR(0x00016c98u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0xafeu));

L_16C9C:
    /* 00016c9c   4  pea (00016d3e) */
    c->pc = RC_ADDR(0x00016c9cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00016d3eu));

L_16CA0:
    /* 00016ca0   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x00016ca0u);
    rc_step(c, m);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x00016ca4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_16CA4:
    /* 00016ca4   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00016ca4u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_16CA8:
    /* 00016ca8   4  move.l D0,(ffffb150,A4) */
    c->pc = RC_ADDR(0x00016ca8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x4eb0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16CAC:
    /* 00016cac   6  btst #0,(9,A5) */
    c->pc = RC_ADDR(0x00016cacu);
    rc_step(c, m);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_16CB2:
    /* 00016cb2   2  beq 00016ccc */
    c->pc = RC_ADDR(0x00016cb2u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_16CCC;

L_16CB4:
    /* 00016cb4   4  pea (1198,A4) */
    c->pc = RC_ADDR(0x00016cb4u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x1198u));

L_16CB8:
    /* 00016cb8   4  pea (1196,A4) */
    c->pc = RC_ADDR(0x00016cb8u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x1196u));

L_16CBC:
    /* 00016cbc   4  pea (00016d42) */
    c->pc = RC_ADDR(0x00016cbcu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00016d42u));

L_16CC0:
    /* 00016cc0   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x00016cc0u);
    rc_step(c, m);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x00016cc4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_16CC4:
    /* 00016cc4   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00016cc4u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_16CC8:
    /* 00016cc8   4  move.l D0,(ffffb1d4,A4) */
    c->pc = RC_ADDR(0x00016cc8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x4e2cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16CCC:
    /* 00016ccc   6  btst #2,(9,A5) */
    c->pc = RC_ADDR(0x00016cccu);
    rc_step(c, m);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_16CD2:
    /* 00016cd2   2  beq 00016cec */
    c->pc = RC_ADDR(0x00016cd2u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_16CEC;

L_16CD4:
    /* 00016cd4   4  pea (113a,A4) */
    c->pc = RC_ADDR(0x00016cd4u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x113au));

L_16CD8:
    /* 00016cd8   4  pea (1138,A4) */
    c->pc = RC_ADDR(0x00016cd8u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x1138u));

L_16CDC:
    /* 00016cdc   4  pea (00016d46) */
    c->pc = RC_ADDR(0x00016cdcu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00016d46u));

L_16CE0:
    /* 00016ce0   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x00016ce0u);
    rc_step(c, m);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x00016ce4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_16CE4:
    /* 00016ce4   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00016ce4u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_16CE8:
    /* 00016ce8   4  move.l D0,(ffffb166,A4) */
    c->pc = RC_ADDR(0x00016ce8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x4e9au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16CEC:
    /* 00016cec   6  btst #3,(9,A5) */
    c->pc = RC_ADDR(0x00016cecu);
    rc_step(c, m);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_16CF2:
    /* 00016cf2   2  beq 00016d24 */
    c->pc = RC_ADDR(0x00016cf2u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_16D24;

L_16CF4:
    /* 00016cf4   4  pea (129e,A4) */
    c->pc = RC_ADDR(0x00016cf4u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x129eu));

L_16CF8:
    /* 00016cf8   4  pea (129a,A4) */
    c->pc = RC_ADDR(0x00016cf8u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x129au));

L_16CFC:
    /* 00016cfc   4  pea (00016d4e) */
    c->pc = RC_ADDR(0x00016cfcu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00016d4eu));

L_16D00:
    /* 00016d00   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x00016d00u);
    rc_step(c, m);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x00016d04u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_16D04:
    /* 00016d04   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00016d04u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_16D08:
    /* 00016d08   4  move.l D0,(1292,A4) */
    c->pc = RC_ADDR(0x00016d08u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1292u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16D0C:
    /* 00016d0c   4  pea (12a2,A4) */
    c->pc = RC_ADDR(0x00016d0cu);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x12a2u));

L_16D10:
    /* 00016d10   4  pea (129c,A4) */
    c->pc = RC_ADDR(0x00016d10u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x129cu));

L_16D14:
    /* 00016d14   4  pea (00016d53) */
    c->pc = RC_ADDR(0x00016d14u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00016d53u));

L_16D18:
    /* 00016d18   4  jsr (ffff80b0,A4) */
    c->pc = RC_ADDR(0x00016d18u);
    rc_step(c, m);
    /* vector 29 */
    rc_push32(c, m, RC_ADDR(0x00016d1cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b06u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00009984u);
    return;

L_16D1C:
    /* 00016d1c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00016d1cu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_16D20:
    /* 00016d20   4  move.l D0,(1296,A4) */
    c->pc = RC_ADDR(0x00016d20u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1296u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_16D24:
    /* 00016d24   2  unlk A5 */
    c->pc = RC_ADDR(0x00016d24u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16D26:
    /* 00016d26   2  rts */
    c->pc = RC_ADDR(0x00016d26u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
