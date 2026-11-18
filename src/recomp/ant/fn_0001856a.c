/* fn_0001856a - 204 byte(s), 52 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001856a(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001856au): goto L_1856A;
    case RC_ADDR(0x0001856eu): goto L_1856E;
    case RC_ADDR(0x00018572u): goto L_18572;
    case RC_ADDR(0x00018576u): goto L_18576;
    case RC_ADDR(0x0001857au): goto L_1857A;
    case RC_ADDR(0x0001857eu): goto L_1857E;
    case RC_ADDR(0x00018582u): goto L_18582;
    case RC_ADDR(0x00018588u): goto L_18588;
    case RC_ADDR(0x0001858au): goto L_1858A;
    case RC_ADDR(0x0001858eu): goto L_1858E;
    case RC_ADDR(0x00018592u): goto L_18592;
    case RC_ADDR(0x00018596u): goto L_18596;
    case RC_ADDR(0x0001859au): goto L_1859A;
    case RC_ADDR(0x0001859eu): goto L_1859E;
    case RC_ADDR(0x000185a2u): goto L_185A2;
    case RC_ADDR(0x000185a6u): goto L_185A6;
    case RC_ADDR(0x000185aau): goto L_185AA;
    case RC_ADDR(0x000185aeu): goto L_185AE;
    case RC_ADDR(0x000185b2u): goto L_185B2;
    case RC_ADDR(0x000185b6u): goto L_185B6;
    case RC_ADDR(0x000185bau): goto L_185BA;
    case RC_ADDR(0x000185c0u): goto L_185C0;
    case RC_ADDR(0x000185c2u): goto L_185C2;
    case RC_ADDR(0x000185c6u): goto L_185C6;
    case RC_ADDR(0x000185cau): goto L_185CA;
    case RC_ADDR(0x000185ceu): goto L_185CE;
    case RC_ADDR(0x000185d2u): goto L_185D2;
    case RC_ADDR(0x000185d6u): goto L_185D6;
    case RC_ADDR(0x000185dau): goto L_185DA;
    case RC_ADDR(0x000185e0u): goto L_185E0;
    case RC_ADDR(0x000185e2u): goto L_185E2;
    case RC_ADDR(0x000185e6u): goto L_185E6;
    case RC_ADDR(0x000185eau): goto L_185EA;
    case RC_ADDR(0x000185eeu): goto L_185EE;
    case RC_ADDR(0x000185f2u): goto L_185F2;
    case RC_ADDR(0x000185f6u): goto L_185F6;
    case RC_ADDR(0x000185fau): goto L_185FA;
    case RC_ADDR(0x00018600u): goto L_18600;
    case RC_ADDR(0x00018602u): goto L_18602;
    case RC_ADDR(0x00018606u): goto L_18606;
    case RC_ADDR(0x0001860au): goto L_1860A;
    case RC_ADDR(0x0001860eu): goto L_1860E;
    case RC_ADDR(0x00018612u): goto L_18612;
    case RC_ADDR(0x00018616u): goto L_18616;
    case RC_ADDR(0x0001861au): goto L_1861A;
    case RC_ADDR(0x0001861eu): goto L_1861E;
    case RC_ADDR(0x00018622u): goto L_18622;
    case RC_ADDR(0x00018626u): goto L_18626;
    case RC_ADDR(0x0001862au): goto L_1862A;
    case RC_ADDR(0x0001862eu): goto L_1862E;
    case RC_ADDR(0x00018632u): goto L_18632;
    case RC_ADDR(0x00018634u): goto L_18634;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1856A:
    /* 0001856a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001856au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1856E:
    /* 0001856e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0001856eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18572:
    /* 00018572   4  pea (00018642) */
    c->pc = RC_ADDR(0x00018572u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00018642u));

L_18576:
    /* 00018576   4  pea (00018636) */
    c->pc = RC_ADDR(0x00018576u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00018636u));

L_1857A:
    /* 0001857a   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0001857au);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0001857eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_1857E:
    /* 0001857e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001857eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_18582:
    /* 00018582   6  btst #1,(9,A5) */
    c->pc = RC_ADDR(0x00018582u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_18588:
    /* 00018588   2  beq 000185a2 */
    c->pc = RC_ADDR(0x00018588u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_185A2;

L_1858A:
    /* 0001858a   4  pea (6b4,A4) */
    c->pc = RC_ADDR(0x0001858au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x6b4u));

L_1858E:
    /* 0001858e   4  pea (6b2,A4) */
    c->pc = RC_ADDR(0x0001858eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x6b2u));

L_18592:
    /* 00018592   4  pea (00018647) */
    c->pc = RC_ADDR(0x00018592u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00018647u));

L_18596:
    /* 00018596   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x00018596u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0001859au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_1859A:
    /* 0001859a   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001859au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1859E:
    /* 0001859e   4  move.l D0,(6ae,A4) */
    c->pc = RC_ADDR(0x0001859eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x6aeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_185A2:
    /* 000185a2   4  pea (cde,A4) */
    c->pc = RC_ADDR(0x000185a2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xcdeu));

L_185A6:
    /* 000185a6   4  pea (14f8,A4) */
    c->pc = RC_ADDR(0x000185a6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x14f8u));

L_185AA:
    /* 000185aa   4  pea (0001864c) */
    c->pc = RC_ADDR(0x000185aau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001864cu));

L_185AE:
    /* 000185ae   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x000185aeu);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x000185b2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_185B2:
    /* 000185b2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000185b2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_185B6:
    /* 000185b6   4  move.l D0,(ffffb370,A4) */
    c->pc = RC_ADDR(0x000185b6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x4c90u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_185BA:
    /* 000185ba   6  btst #0,(9,A5) */
    c->pc = RC_ADDR(0x000185bau);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_185C0:
    /* 000185c0   2  beq 000185da */
    c->pc = RC_ADDR(0x000185c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_185DA;

L_185C2:
    /* 000185c2   4  pea (1b92,A4) */
    c->pc = RC_ADDR(0x000185c2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1b92u));

L_185C6:
    /* 000185c6   4  pea (1b90,A4) */
    c->pc = RC_ADDR(0x000185c6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1b90u));

L_185CA:
    /* 000185ca   4  pea (00018650) */
    c->pc = RC_ADDR(0x000185cau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00018650u));

L_185CE:
    /* 000185ce   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x000185ceu);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x000185d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_185D2:
    /* 000185d2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000185d2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_185D6:
    /* 000185d6   4  move.l D0,(ffffb3f4,A4) */
    c->pc = RC_ADDR(0x000185d6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x4c0cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_185DA:
    /* 000185da   6  btst #2,(9,A5) */
    c->pc = RC_ADDR(0x000185dau);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_185E0:
    /* 000185e0   2  beq 000185fa */
    c->pc = RC_ADDR(0x000185e0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_185FA;

L_185E2:
    /* 000185e2   4  pea (1b34,A4) */
    c->pc = RC_ADDR(0x000185e2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1b34u));

L_185E6:
    /* 000185e6   4  pea (1b32,A4) */
    c->pc = RC_ADDR(0x000185e6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1b32u));

L_185EA:
    /* 000185ea   4  pea (00018654) */
    c->pc = RC_ADDR(0x000185eau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00018654u));

L_185EE:
    /* 000185ee   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x000185eeu);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x000185f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_185F2:
    /* 000185f2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000185f2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_185F6:
    /* 000185f6   4  move.l D0,(ffffb386,A4) */
    c->pc = RC_ADDR(0x000185f6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x4c7au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_185FA:
    /* 000185fa   6  btst #3,(9,A5) */
    c->pc = RC_ADDR(0x000185fau);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x9u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_18600:
    /* 00018600   2  beq 00018632 */
    c->pc = RC_ADDR(0x00018600u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_18632;

L_18602:
    /* 00018602   4  pea (1c98,A4) */
    c->pc = RC_ADDR(0x00018602u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1c98u));

L_18606:
    /* 00018606   4  pea (1c94,A4) */
    c->pc = RC_ADDR(0x00018606u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1c94u));

L_1860A:
    /* 0001860a   4  pea (0001865c) */
    c->pc = RC_ADDR(0x0001860au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001865cu));

L_1860E:
    /* 0001860e   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0001860eu);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x00018612u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_18612:
    /* 00018612   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00018612u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_18616:
    /* 00018616   4  move.l D0,(1c8c,A4) */
    c->pc = RC_ADDR(0x00018616u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1c8cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1861A:
    /* 0001861a   4  pea (1c9c,A4) */
    c->pc = RC_ADDR(0x0001861au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1c9cu));

L_1861E:
    /* 0001861e   4  pea (1c96,A4) */
    c->pc = RC_ADDR(0x0001861eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1c96u));

L_18622:
    /* 00018622   4  pea (00018661) */
    c->pc = RC_ADDR(0x00018622u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00018661u));

L_18626:
    /* 00018626   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x00018626u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0001862au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_1862A:
    /* 0001862a   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001862au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1862E:
    /* 0001862e   4  move.l D0,(1c90,A4) */
    c->pc = RC_ADDR(0x0001862eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1c90u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18632:
    /* 00018632   2  unlk A5 */
    c->pc = RC_ADDR(0x00018632u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18634:
    /* 00018634   2  rts */
    c->pc = RC_ADDR(0x00018634u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
