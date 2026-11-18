/* fn_00021fba - 182 byte(s), 65 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021fba(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00021fbau): goto L_21FBA;
    case RC_ADDR(0x00021fbeu): goto L_21FBE;
    case RC_ADDR(0x00021fc2u): goto L_21FC2;
    case RC_ADDR(0x00021fc6u): goto L_21FC6;
    case RC_ADDR(0x00021fcau): goto L_21FCA;
    case RC_ADDR(0x00021fccu): goto L_21FCC;
    case RC_ADDR(0x00021fceu): goto L_21FCE;
    case RC_ADDR(0x00021fd0u): goto L_21FD0;
    case RC_ADDR(0x00021fd2u): goto L_21FD2;
    case RC_ADDR(0x00021fd4u): goto L_21FD4;
    case RC_ADDR(0x00021fd8u): goto L_21FD8;
    case RC_ADDR(0x00021fdau): goto L_21FDA;
    case RC_ADDR(0x00021fdcu): goto L_21FDC;
    case RC_ADDR(0x00021fe0u): goto L_21FE0;
    case RC_ADDR(0x00021fe6u): goto L_21FE6;
    case RC_ADDR(0x00021fe8u): goto L_21FE8;
    case RC_ADDR(0x00021fecu): goto L_21FEC;
    case RC_ADDR(0x00021ff2u): goto L_21FF2;
    case RC_ADDR(0x00021ff4u): goto L_21FF4;
    case RC_ADDR(0x00021ff6u): goto L_21FF6;
    case RC_ADDR(0x00021ff8u): goto L_21FF8;
    case RC_ADDR(0x00021ffcu): goto L_21FFC;
    case RC_ADDR(0x00021ffeu): goto L_21FFE;
    case RC_ADDR(0x00022000u): goto L_22000;
    case RC_ADDR(0x00022002u): goto L_22002;
    case RC_ADDR(0x00022004u): goto L_22004;
    case RC_ADDR(0x00022006u): goto L_22006;
    case RC_ADDR(0x00022008u): goto L_22008;
    case RC_ADDR(0x0002200cu): goto L_2200C;
    case RC_ADDR(0x0002200eu): goto L_2200E;
    case RC_ADDR(0x00022012u): goto L_22012;
    case RC_ADDR(0x00022014u): goto L_22014;
    case RC_ADDR(0x00022016u): goto L_22016;
    case RC_ADDR(0x00022018u): goto L_22018;
    case RC_ADDR(0x0002201au): goto L_2201A;
    case RC_ADDR(0x0002201cu): goto L_2201C;
    case RC_ADDR(0x0002201eu): goto L_2201E;
    case RC_ADDR(0x00022022u): goto L_22022;
    case RC_ADDR(0x00022028u): goto L_22028;
    case RC_ADDR(0x0002202au): goto L_2202A;
    case RC_ADDR(0x0002202eu): goto L_2202E;
    case RC_ADDR(0x00022030u): goto L_22030;
    case RC_ADDR(0x00022034u): goto L_22034;
    case RC_ADDR(0x00022036u): goto L_22036;
    case RC_ADDR(0x00022038u): goto L_22038;
    case RC_ADDR(0x0002203au): goto L_2203A;
    case RC_ADDR(0x00022040u): goto L_22040;
    case RC_ADDR(0x00022044u): goto L_22044;
    case RC_ADDR(0x00022046u): goto L_22046;
    case RC_ADDR(0x00022048u): goto L_22048;
    case RC_ADDR(0x0002204au): goto L_2204A;
    case RC_ADDR(0x0002204eu): goto L_2204E;
    case RC_ADDR(0x00022050u): goto L_22050;
    case RC_ADDR(0x00022052u): goto L_22052;
    case RC_ADDR(0x00022054u): goto L_22054;
    case RC_ADDR(0x00022056u): goto L_22056;
    case RC_ADDR(0x0002205au): goto L_2205A;
    case RC_ADDR(0x0002205cu): goto L_2205C;
    case RC_ADDR(0x0002205eu): goto L_2205E;
    case RC_ADDR(0x00022060u): goto L_22060;
    case RC_ADDR(0x00022062u): goto L_22062;
    case RC_ADDR(0x00022066u): goto L_22066;
    case RC_ADDR(0x00022068u): goto L_22068;
    case RC_ADDR(0x0002206au): goto L_2206A;
    case RC_ADDR(0x0002206cu): goto L_2206C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21FBA:
    /* 00021fba   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00021fbau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_21FBE:
    /* 00021fbe   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x00021fbeu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_21FC2:
    /* 00021fc2   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x00021fc2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_21FC6:
    /* 00021fc6   4  movea.l (c,A5),A3 */
    c->pc = RC_ADDR(0x00021fc6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[3] = t0;

L_21FCA:
    /* 00021fca   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x00021fcau);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21FCC:
    /* 00021fcc   2  beq 00021fd2 */
    c->pc = RC_ADDR(0x00021fccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21FD2;

L_21FCE:
    /* 00021fce   2  move.l A3,D0 */
    c->pc = RC_ADDR(0x00021fceu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21FD0:
    /* 00021fd0   2  bne 00021fdc */
    c->pc = RC_ADDR(0x00021fd0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21FDC;

L_21FD2:
    /* 00021fd2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021fd2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21FD4:
    /* 00021fd4   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x00021fd4u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_21FD8:
    /* 00021fd8   2  unlk A5 */
    c->pc = RC_ADDR(0x00021fd8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21FDA:
    /* 00021fda   2  rts */
    c->pc = RC_ADDR(0x00021fdau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_21FDC:
    /* 00021fdc   4  movea.l (4,A2),A0 */
    c->pc = RC_ADDR(0x00021fdcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[0] = t0;

L_21FE0:
    /* 00021fe0   6  btst #0,(b,A0) */
    c->pc = RC_ADDR(0x00021fe0u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_21FE6:
    /* 00021fe6   2  beq 0002201e */
    c->pc = RC_ADDR(0x00021fe6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2201E;

L_21FE8:
    /* 00021fe8   4  movea.l (4,A3),A0 */
    c->pc = RC_ADDR(0x00021fe8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0x4u));
    c->a[0] = t0;

L_21FEC:
    /* 00021fec   6  btst #0,(b,A0) */
    c->pc = RC_ADDR(0x00021fecu);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_21FF2:
    /* 00021ff2   2  beq 00022008 */
    c->pc = RC_ADDR(0x00021ff2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22008;

L_21FF4:
    /* 00021ff4   2  move.l A3,-(A7) */
    c->pc = RC_ADDR(0x00021ff4u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21FF6:
    /* 00021ff6   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00021ff6u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21FF8:
    /* 00021ff8   4  jsr (00021ef0) */
    c->pc = RC_ADDR(0x00021ff8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021ffcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ef0u);
    return;

L_21FFC:
    /* 00021ffc   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00021ffcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_21FFE:
    /* 00021ffe   2  tst.w D0 */
    c->pc = RC_ADDR(0x00021ffeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_22000:
    /* 00022000   2  beq 00022006 */
    c->pc = RC_ADDR(0x00022000u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22006;

L_22002:
    /* 00022002   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00022002u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_22004:
    /* 00022004   2  bra 00021fd4 */
    c->pc = RC_ADDR(0x00022004u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21FD4;

L_22006:
    /* 00022006   2  bra 0002201c */
    c->pc = RC_ADDR(0x00022006u);
    rc_step(c, m, 10);
    goto L_2201C;

L_22008:
    /* 00022008   4  move.l (2c,A3),-(A7) */
    c->pc = RC_ADDR(0x00022008u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[3] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2200C:
    /* 0002200c   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0002200cu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2200E:
    /* 0002200e   4  jsr (00021f66) */
    c->pc = RC_ADDR(0x0002200eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022012u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021f66u);
    return;

L_22012:
    /* 00022012   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022012u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22014:
    /* 00022014   2  tst.w D0 */
    c->pc = RC_ADDR(0x00022014u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_22016:
    /* 00022016   2  beq 0002201c */
    c->pc = RC_ADDR(0x00022016u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2201C;

L_22018:
    /* 00022018   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00022018u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2201A:
    /* 0002201a   2  bra 00021fd4 */
    c->pc = RC_ADDR(0x0002201au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21FD4;

L_2201C:
    /* 0002201c   2  bra 0002206a */
    c->pc = RC_ADDR(0x0002201cu);
    rc_step(c, m, 10);
    goto L_2206A;

L_2201E:
    /* 0002201e   4  movea.l (4,A3),A0 */
    c->pc = RC_ADDR(0x0002201eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0x4u));
    c->a[0] = t0;

L_22022:
    /* 00022022   6  btst #0,(b,A0) */
    c->pc = RC_ADDR(0x00022022u);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0xbu);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_22028:
    /* 00022028   2  beq 0002204a */
    c->pc = RC_ADDR(0x00022028u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2204A;

L_2202A:
    /* 0002202a   4  move.l (2c,A2),-(A7) */
    c->pc = RC_ADDR(0x0002202au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2202E:
    /* 0002202e   2  move.l A3,-(A7) */
    c->pc = RC_ADDR(0x0002202eu);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22030:
    /* 00022030   4  jsr (00021f66) */
    c->pc = RC_ADDR(0x00022030u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022034u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021f66u);
    return;

L_22034:
    /* 00022034   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022034u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22036:
    /* 00022036   2  tst.w D0 */
    c->pc = RC_ADDR(0x00022036u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_22038:
    /* 00022038   2  beq 00022048 */
    c->pc = RC_ADDR(0x00022038u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22048;

L_2203A:
    /* 0002203a   6  move.l (ffffd49e,A4),(ffffd49a,A4) */
    c->pc = RC_ADDR(0x0002203au);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2b62u));
    rc_wr32(c, m, (c->a[4] - 0x2b66u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22040:
    /* 00022040   4  move.l A3,(ffffd49e,A4) */
    c->pc = RC_ADDR(0x00022040u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2b62u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22044:
    /* 00022044   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00022044u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_22046:
    /* 00022046   2  bra 00021fd4 */
    c->pc = RC_ADDR(0x00022046u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21FD4;

L_22048:
    /* 00022048   2  bra 0002206a */
    c->pc = RC_ADDR(0x00022048u);
    rc_step(c, m, 10);
    goto L_2206A;

L_2204A:
    /* 0002204a   4  movea.l (2c,A2),A2 */
    c->pc = RC_ADDR(0x0002204au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x2cu));
    c->a[2] = t0;

L_2204E:
    /* 0002204e   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x0002204eu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22050:
    /* 00022050   2  beq 0002206a */
    c->pc = RC_ADDR(0x00022050u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2206A;

L_22052:
    /* 00022052   2  move.l A3,-(A7) */
    c->pc = RC_ADDR(0x00022052u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22054:
    /* 00022054   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00022054u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22056:
    /* 00022056   4  jsr (00021fba) */
    c->pc = RC_ADDR(0x00022056u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002205au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021fbau);
    return;

L_2205A:
    /* 0002205a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0002205au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2205C:
    /* 0002205c   2  tst.w D0 */
    c->pc = RC_ADDR(0x0002205cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2205E:
    /* 0002205e   2  beq 00022066 */
    c->pc = RC_ADDR(0x0002205eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22066;

L_22060:
    /* 00022060   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00022060u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_22062:
    /* 00022062   4  bra 00021fd4 */
    c->pc = RC_ADDR(0x00022062u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21FD4;

L_22066:
    /* 00022066   2  movea.l (A2),A2 */
    c->pc = RC_ADDR(0x00022066u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[2] = t0;

L_22068:
    /* 00022068   2  bra 0002204e */
    c->pc = RC_ADDR(0x00022068u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_2204E;

L_2206A:
    /* 0002206a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0002206au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2206C:
    /* 0002206c   4  bra 00021fd4 */
    c->pc = RC_ADDR(0x0002206cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21FD4;

}
