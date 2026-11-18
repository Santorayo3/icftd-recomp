/* fn_00004952 - 220 byte(s), 61 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00004952(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00004952u): goto L_4952;
    case RC_ADDR(0x00004956u): goto L_4956;
    case RC_ADDR(0x0000495au): goto L_495A;
    case RC_ADDR(0x0000495eu): goto L_495E;
    case RC_ADDR(0x00004962u): goto L_4962;
    case RC_ADDR(0x00004966u): goto L_4966;
    case RC_ADDR(0x0000496au): goto L_496A;
    case RC_ADDR(0x0000496eu): goto L_496E;
    case RC_ADDR(0x00004970u): goto L_4970;
    case RC_ADDR(0x00004972u): goto L_4972;
    case RC_ADDR(0x00004974u): goto L_4974;
    case RC_ADDR(0x0000497au): goto L_497A;
    case RC_ADDR(0x0000497eu): goto L_497E;
    case RC_ADDR(0x00004982u): goto L_4982;
    case RC_ADDR(0x00004984u): goto L_4984;
    case RC_ADDR(0x00004986u): goto L_4986;
    case RC_ADDR(0x00004988u): goto L_4988;
    case RC_ADDR(0x0000498eu): goto L_498E;
    case RC_ADDR(0x00004992u): goto L_4992;
    case RC_ADDR(0x00004996u): goto L_4996;
    case RC_ADDR(0x0000499au): goto L_499A;
    case RC_ADDR(0x0000499eu): goto L_499E;
    case RC_ADDR(0x000049a2u): goto L_49A2;
    case RC_ADDR(0x000049a6u): goto L_49A6;
    case RC_ADDR(0x000049aau): goto L_49AA;
    case RC_ADDR(0x000049aeu): goto L_49AE;
    case RC_ADDR(0x000049b2u): goto L_49B2;
    case RC_ADDR(0x000049b6u): goto L_49B6;
    case RC_ADDR(0x000049b8u): goto L_49B8;
    case RC_ADDR(0x000049bcu): goto L_49BC;
    case RC_ADDR(0x000049c2u): goto L_49C2;
    case RC_ADDR(0x000049c6u): goto L_49C6;
    case RC_ADDR(0x000049cau): goto L_49CA;
    case RC_ADDR(0x000049ccu): goto L_49CC;
    case RC_ADDR(0x000049d0u): goto L_49D0;
    case RC_ADDR(0x000049d4u): goto L_49D4;
    case RC_ADDR(0x000049d6u): goto L_49D6;
    case RC_ADDR(0x000049dau): goto L_49DA;
    case RC_ADDR(0x000049deu): goto L_49DE;
    case RC_ADDR(0x000049e2u): goto L_49E2;
    case RC_ADDR(0x000049e6u): goto L_49E6;
    case RC_ADDR(0x000049ecu): goto L_49EC;
    case RC_ADDR(0x000049f0u): goto L_49F0;
    case RC_ADDR(0x000049f4u): goto L_49F4;
    case RC_ADDR(0x000049f8u): goto L_49F8;
    case RC_ADDR(0x000049fau): goto L_49FA;
    case RC_ADDR(0x000049feu): goto L_49FE;
    case RC_ADDR(0x00004a02u): goto L_4A02;
    case RC_ADDR(0x00004a04u): goto L_4A04;
    case RC_ADDR(0x00004a08u): goto L_4A08;
    case RC_ADDR(0x00004a0cu): goto L_4A0C;
    case RC_ADDR(0x00004a0eu): goto L_4A0E;
    case RC_ADDR(0x00004a12u): goto L_4A12;
    case RC_ADDR(0x00004a16u): goto L_4A16;
    case RC_ADDR(0x00004a1au): goto L_4A1A;
    case RC_ADDR(0x00004a1cu): goto L_4A1C;
    case RC_ADDR(0x00004a20u): goto L_4A20;
    case RC_ADDR(0x00004a24u): goto L_4A24;
    case RC_ADDR(0x00004a26u): goto L_4A26;
    case RC_ADDR(0x00004a2au): goto L_4A2A;
    case RC_ADDR(0x00004a2cu): goto L_4A2C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4952:
    /* 00004952   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00004952u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_4956:
    /* 00004956   4  tst.w (fffff96e,A4) */
    c->pc = RC_ADDR(0x00004956u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x692u));
    rc_set_nzvc(c, t0, RC_W);

L_495A:
    /* 0000495a   4  bne 000049e6 */
    c->pc = RC_ADDR(0x0000495au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_49E6;

L_495E:
    /* 0000495e   4  tst.w (ffff85aa,A4) */
    c->pc = RC_ADDR(0x0000495eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a56u));
    rc_set_nzvc(c, t0, RC_W);

L_4962:
    /* 00004962   4  bne 000049e6 */
    c->pc = RC_ADDR(0x00004962u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_49E6;

L_4966:
    /* 00004966   4  move.w #e9,-(A7) */
    c->pc = RC_ADDR(0x00004966u);
    rc_step(c, m, 12);
    t0 = 0x000000e9u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_496A:
    /* 0000496a   4  jsr (ffff808c,A4) */
    c->pc = RC_ADDR(0x0000496au);
    rc_step(c, m, 18);
    /* vector 23 */
    rc_push32(c, m, RC_ADDR(0x0000496eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000080a0u);
    return;

L_496E:
    /* 0000496e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000496eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_4970:
    /* 00004970   2  tst.w D0 */
    c->pc = RC_ADDR(0x00004970u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_4972:
    /* 00004972   2  beq 000049e6 */
    c->pc = RC_ADDR(0x00004972u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_49E6;

L_4974:
    /* 00004974   6  move.w #1,(ffff85aa,A4) */
    c->pc = RC_ADDR(0x00004974u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7a56u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_497A:
    /* 0000497a   4  move.w #ea,-(A7) */
    c->pc = RC_ADDR(0x0000497au);
    rc_step(c, m, 12);
    t0 = 0x000000eau;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_497E:
    /* 0000497e   4  jsr (ffff808c,A4) */
    c->pc = RC_ADDR(0x0000497eu);
    rc_step(c, m, 18);
    /* vector 23 */
    rc_push32(c, m, RC_ADDR(0x00004982u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b82u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000080a0u);
    return;

L_4982:
    /* 00004982   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00004982u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_4984:
    /* 00004984   2  tst.w D0 */
    c->pc = RC_ADDR(0x00004984u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_4986:
    /* 00004986   2  bne 0000498e */
    c->pc = RC_ADDR(0x00004986u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_498E;

L_4988:
    /* 00004988   6  move.w #1,(ffff85ac,A4) */
    c->pc = RC_ADDR(0x00004988u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7a54u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_498E:
    /* 0000498e   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x0000498eu);
    rc_step(c, m, 18);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x00004992u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d32u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f814u);
    return;

L_4992:
    /* 00004992   4  jsr (ffff8284,A4) */
    c->pc = RC_ADDR(0x00004992u);
    rc_step(c, m, 18);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x00004996u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d7au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021320u);
    return;

L_4996:
    /* 00004996   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00004996u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_499A:
    /* 0000499a   4  pea (00004a37) */
    c->pc = RC_ADDR(0x0000499au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00004a37u));

L_499E:
    /* 0000499e   4  pea (00004a2e) */
    c->pc = RC_ADDR(0x0000499eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00004a2eu));

L_49A2:
    /* 000049a2   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x000049a2u);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x000049a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_49A6:
    /* 000049a6   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000049a6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_49AA:
    /* 000049aa   4  move.w #5a,-(A7) */
    c->pc = RC_ADDR(0x000049aau);
    rc_step(c, m, 12);
    t0 = 0x0000005au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_49AE:
    /* 000049ae   4  pea (00004a43) */
    c->pc = RC_ADDR(0x000049aeu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00004a43u));

L_49B2:
    /* 000049b2   4  jsr (00000f0c) */
    c->pc = RC_ADDR(0x000049b2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000049b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000f0cu);
    return;

L_49B6:
    /* 000049b6   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000049b6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_49B8:
    /* 000049b8   4  jsr (0000a956) */
    c->pc = RC_ADDR(0x000049b8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000049bcu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a956u);
    return;

L_49BC:
    /* 000049bc   6  move.w #1,(9c6,A4) */
    c->pc = RC_ADDR(0x000049bcu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x9c6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_49C2:
    /* 000049c2   4  pea (00004a4f) */
    c->pc = RC_ADDR(0x000049c2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00004a4fu));

L_49C6:
    /* 000049c6   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x000049c6u);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x000049cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_49CA:
    /* 000049ca   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000049cau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_49CC:
    /* 000049cc   4  pea (000048e2) */
    c->pc = RC_ADDR(0x000049ccu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000048e2u));

L_49D0:
    /* 000049d0   4  pea (00004a65) */
    c->pc = RC_ADDR(0x000049d0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00004a65u));

L_49D4:
    /* 000049d4   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000049d4u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_49D6:
    /* 000049d6   4  pea (00004a5c) */
    c->pc = RC_ADDR(0x000049d6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00004a5cu));

L_49DA:
    /* 000049da   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x000049dau);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x000049deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d5cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020c0cu);
    return;

L_49DE:
    /* 000049de   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x000049deu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x10u);

L_49E2:
    /* 000049e2   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x000049e2u);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x000049e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022308u);
    return;

L_49E6:
    /* 000049e6   6  move.w #1,(fffff78e,A4) */
    c->pc = RC_ADDR(0x000049e6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x872u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_49EC:
    /* 000049ec   4  jsr (00003a90) */
    c->pc = RC_ADDR(0x000049ecu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000049f0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003a90u);
    return;

L_49F0:
    /* 000049f0   4  pea (00004a6a) */
    c->pc = RC_ADDR(0x000049f0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00004a6au));

L_49F4:
    /* 000049f4   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x000049f4u);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x000049f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_49F8:
    /* 000049f8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000049f8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_49FA:
    /* 000049fa   4  pea (00004a73) */
    c->pc = RC_ADDR(0x000049fau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00004a73u));

L_49FE:
    /* 000049fe   4  jsr (ffff824e,A4) */
    c->pc = RC_ADDR(0x000049feu);
    rc_step(c, m, 18);
    /* vector 98 */
    rc_push32(c, m, RC_ADDR(0x00004a02u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d44u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ff16u);
    return;

L_4A02:
    /* 00004a02   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004a02u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4A04:
    /* 00004a04   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00004a04u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4A08:
    /* 00004a08   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00004a08u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_4A0C:
    /* 00004a0c   2  beq 00004a1c */
    c->pc = RC_ADDR(0x00004a0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4A1C;

L_4A0E:
    /* 00004a0e   4  pea (00003f9e) */
    c->pc = RC_ADDR(0x00004a0eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00003f9eu));

L_4A12:
    /* 00004a12   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00004a12u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4A16:
    /* 00004a16   4  jsr (ffff8218,A4) */
    c->pc = RC_ADDR(0x00004a16u);
    rc_step(c, m, 18);
    /* vector 89 */
    rc_push32(c, m, RC_ADDR(0x00004a1au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d0eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f34cu);
    return;

L_4A1A:
    /* 00004a1a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00004a1au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_4A1C:
    /* 00004a1c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00004a1cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4A20:
    /* 00004a20   4  jsr (ffff827e,A4) */
    c->pc = RC_ADDR(0x00004a20u);
    rc_step(c, m, 18);
    /* vector 106 */
    rc_push32(c, m, RC_ADDR(0x00004a24u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d74u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000212c8u);
    return;

L_4A24:
    /* 00004a24   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004a24u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4A26:
    /* 00004a26   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x00004a26u);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x00004a2au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022308u);
    return;

L_4A2A:
    /* 00004a2a   2  unlk A5 */
    c->pc = RC_ADDR(0x00004a2au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_4A2C:
    /* 00004a2c   2  rts */
    c->pc = RC_ADDR(0x00004a2cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
