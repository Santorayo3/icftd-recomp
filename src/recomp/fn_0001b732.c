/* fn_0001b732 - 500 byte(s), 149 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001b732(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001b732u): goto L_1B732;
    case RC_ADDR(0x0001b736u): goto L_1B736;
    case RC_ADDR(0x0001b73au): goto L_1B73A;
    case RC_ADDR(0x0001b73eu): goto L_1B73E;
    case RC_ADDR(0x0001b742u): goto L_1B742;
    case RC_ADDR(0x0001b744u): goto L_1B744;
    case RC_ADDR(0x0001b748u): goto L_1B748;
    case RC_ADDR(0x0001b74cu): goto L_1B74C;
    case RC_ADDR(0x0001b750u): goto L_1B750;
    case RC_ADDR(0x0001b754u): goto L_1B754;
    case RC_ADDR(0x0001b758u): goto L_1B758;
    case RC_ADDR(0x0001b75cu): goto L_1B75C;
    case RC_ADDR(0x0001b760u): goto L_1B760;
    case RC_ADDR(0x0001b764u): goto L_1B764;
    case RC_ADDR(0x0001b768u): goto L_1B768;
    case RC_ADDR(0x0001b76cu): goto L_1B76C;
    case RC_ADDR(0x0001b770u): goto L_1B770;
    case RC_ADDR(0x0001b774u): goto L_1B774;
    case RC_ADDR(0x0001b778u): goto L_1B778;
    case RC_ADDR(0x0001b77cu): goto L_1B77C;
    case RC_ADDR(0x0001b780u): goto L_1B780;
    case RC_ADDR(0x0001b784u): goto L_1B784;
    case RC_ADDR(0x0001b788u): goto L_1B788;
    case RC_ADDR(0x0001b78cu): goto L_1B78C;
    case RC_ADDR(0x0001b790u): goto L_1B790;
    case RC_ADDR(0x0001b794u): goto L_1B794;
    case RC_ADDR(0x0001b798u): goto L_1B798;
    case RC_ADDR(0x0001b79cu): goto L_1B79C;
    case RC_ADDR(0x0001b7a0u): goto L_1B7A0;
    case RC_ADDR(0x0001b7a2u): goto L_1B7A2;
    case RC_ADDR(0x0001b7a6u): goto L_1B7A6;
    case RC_ADDR(0x0001b7a8u): goto L_1B7A8;
    case RC_ADDR(0x0001b7aau): goto L_1B7AA;
    case RC_ADDR(0x0001b7acu): goto L_1B7AC;
    case RC_ADDR(0x0001b7aeu): goto L_1B7AE;
    case RC_ADDR(0x0001b7b0u): goto L_1B7B0;
    case RC_ADDR(0x0001b7b4u): goto L_1B7B4;
    case RC_ADDR(0x0001b7bau): goto L_1B7BA;
    case RC_ADDR(0x0001b7beu): goto L_1B7BE;
    case RC_ADDR(0x0001b7c2u): goto L_1B7C2;
    case RC_ADDR(0x0001b7c4u): goto L_1B7C4;
    case RC_ADDR(0x0001b7c8u): goto L_1B7C8;
    case RC_ADDR(0x0001b7ceu): goto L_1B7CE;
    case RC_ADDR(0x0001b7d2u): goto L_1B7D2;
    case RC_ADDR(0x0001b7d6u): goto L_1B7D6;
    case RC_ADDR(0x0001b7d8u): goto L_1B7D8;
    case RC_ADDR(0x0001b7dcu): goto L_1B7DC;
    case RC_ADDR(0x0001b7e0u): goto L_1B7E0;
    case RC_ADDR(0x0001b7e4u): goto L_1B7E4;
    case RC_ADDR(0x0001b7e6u): goto L_1B7E6;
    case RC_ADDR(0x0001b7e8u): goto L_1B7E8;
    case RC_ADDR(0x0001b7eau): goto L_1B7EA;
    case RC_ADDR(0x0001b7ecu): goto L_1B7EC;
    case RC_ADDR(0x0001b7f0u): goto L_1B7F0;
    case RC_ADDR(0x0001b7f4u): goto L_1B7F4;
    case RC_ADDR(0x0001b7f8u): goto L_1B7F8;
    case RC_ADDR(0x0001b7fcu): goto L_1B7FC;
    case RC_ADDR(0x0001b800u): goto L_1B800;
    case RC_ADDR(0x0001b804u): goto L_1B804;
    case RC_ADDR(0x0001b806u): goto L_1B806;
    case RC_ADDR(0x0001b80au): goto L_1B80A;
    case RC_ADDR(0x0001b80cu): goto L_1B80C;
    case RC_ADDR(0x0001b810u): goto L_1B810;
    case RC_ADDR(0x0001b814u): goto L_1B814;
    case RC_ADDR(0x0001b818u): goto L_1B818;
    case RC_ADDR(0x0001b81au): goto L_1B81A;
    case RC_ADDR(0x0001b81eu): goto L_1B81E;
    case RC_ADDR(0x0001b820u): goto L_1B820;
    case RC_ADDR(0x0001b824u): goto L_1B824;
    case RC_ADDR(0x0001b828u): goto L_1B828;
    case RC_ADDR(0x0001b82au): goto L_1B82A;
    case RC_ADDR(0x0001b82cu): goto L_1B82C;
    case RC_ADDR(0x0001b830u): goto L_1B830;
    case RC_ADDR(0x0001b834u): goto L_1B834;
    case RC_ADDR(0x0001b838u): goto L_1B838;
    case RC_ADDR(0x0001b83au): goto L_1B83A;
    case RC_ADDR(0x0001b83cu): goto L_1B83C;
    case RC_ADDR(0x0001b840u): goto L_1B840;
    case RC_ADDR(0x0001b846u): goto L_1B846;
    case RC_ADDR(0x0001b84au): goto L_1B84A;
    case RC_ADDR(0x0001b84eu): goto L_1B84E;
    case RC_ADDR(0x0001b852u): goto L_1B852;
    case RC_ADDR(0x0001b854u): goto L_1B854;
    case RC_ADDR(0x0001b858u): goto L_1B858;
    case RC_ADDR(0x0001b85cu): goto L_1B85C;
    case RC_ADDR(0x0001b860u): goto L_1B860;
    case RC_ADDR(0x0001b864u): goto L_1B864;
    case RC_ADDR(0x0001b866u): goto L_1B866;
    case RC_ADDR(0x0001b86au): goto L_1B86A;
    case RC_ADDR(0x0001b86eu): goto L_1B86E;
    case RC_ADDR(0x0001b872u): goto L_1B872;
    case RC_ADDR(0x0001b874u): goto L_1B874;
    case RC_ADDR(0x0001b878u): goto L_1B878;
    case RC_ADDR(0x0001b87cu): goto L_1B87C;
    case RC_ADDR(0x0001b880u): goto L_1B880;
    case RC_ADDR(0x0001b882u): goto L_1B882;
    case RC_ADDR(0x0001b886u): goto L_1B886;
    case RC_ADDR(0x0001b888u): goto L_1B888;
    case RC_ADDR(0x0001b88au): goto L_1B88A;
    case RC_ADDR(0x0001b88eu): goto L_1B88E;
    case RC_ADDR(0x0001b892u): goto L_1B892;
    case RC_ADDR(0x0001b894u): goto L_1B894;
    case RC_ADDR(0x0001b898u): goto L_1B898;
    case RC_ADDR(0x0001b89au): goto L_1B89A;
    case RC_ADDR(0x0001b89cu): goto L_1B89C;
    case RC_ADDR(0x0001b8a0u): goto L_1B8A0;
    case RC_ADDR(0x0001b8a4u): goto L_1B8A4;
    case RC_ADDR(0x0001b8a6u): goto L_1B8A6;
    case RC_ADDR(0x0001b8a8u): goto L_1B8A8;
    case RC_ADDR(0x0001b8acu): goto L_1B8AC;
    case RC_ADDR(0x0001b8b0u): goto L_1B8B0;
    case RC_ADDR(0x0001b8b2u): goto L_1B8B2;
    case RC_ADDR(0x0001b8b4u): goto L_1B8B4;
    case RC_ADDR(0x0001b8b8u): goto L_1B8B8;
    case RC_ADDR(0x0001b8bau): goto L_1B8BA;
    case RC_ADDR(0x0001b8beu): goto L_1B8BE;
    case RC_ADDR(0x0001b8c0u): goto L_1B8C0;
    case RC_ADDR(0x0001b8c2u): goto L_1B8C2;
    case RC_ADDR(0x0001b8c6u): goto L_1B8C6;
    case RC_ADDR(0x0001b8cau): goto L_1B8CA;
    case RC_ADDR(0x0001b8ccu): goto L_1B8CC;
    case RC_ADDR(0x0001b8d0u): goto L_1B8D0;
    case RC_ADDR(0x0001b8d4u): goto L_1B8D4;
    case RC_ADDR(0x0001b8d8u): goto L_1B8D8;
    case RC_ADDR(0x0001b8dau): goto L_1B8DA;
    case RC_ADDR(0x0001b8deu): goto L_1B8DE;
    case RC_ADDR(0x0001b8e0u): goto L_1B8E0;
    case RC_ADDR(0x0001b8e2u): goto L_1B8E2;
    case RC_ADDR(0x0001b8e4u): goto L_1B8E4;
    case RC_ADDR(0x0001b8e8u): goto L_1B8E8;
    case RC_ADDR(0x0001b8ecu): goto L_1B8EC;
    case RC_ADDR(0x0001b8f0u): goto L_1B8F0;
    case RC_ADDR(0x0001b8f4u): goto L_1B8F4;
    case RC_ADDR(0x0001b8f8u): goto L_1B8F8;
    case RC_ADDR(0x0001b8fcu): goto L_1B8FC;
    case RC_ADDR(0x0001b900u): goto L_1B900;
    case RC_ADDR(0x0001b904u): goto L_1B904;
    case RC_ADDR(0x0001b908u): goto L_1B908;
    case RC_ADDR(0x0001b90cu): goto L_1B90C;
    case RC_ADDR(0x0001b90eu): goto L_1B90E;
    case RC_ADDR(0x0001b910u): goto L_1B910;
    case RC_ADDR(0x0001b912u): goto L_1B912;
    case RC_ADDR(0x0001b916u): goto L_1B916;
    case RC_ADDR(0x0001b918u): goto L_1B918;
    case RC_ADDR(0x0001b91cu): goto L_1B91C;
    case RC_ADDR(0x0001b91eu): goto L_1B91E;
    case RC_ADDR(0x0001b920u): goto L_1B920;
    case RC_ADDR(0x0001b922u): goto L_1B922;
    case RC_ADDR(0x0001b924u): goto L_1B924;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B732:
    /* 0001b732   4  link.w A5,#fffffff0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b732u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x10u;

L_1B736:
    /* 0001b736   4  pea (000003ed).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b736u);
    rc_push32(c, m, 0x000003edu);

L_1B73A:
    /* 0001b73a   4  move.l (8,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b73au);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B73E:
    /* 0001b73e   4  jsr (ffff8290,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b73eu);
    /* vector 109 */
    rc_push32(c, m, RC_ADDR(0x0001b742u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020476u);
    return;

L_1B742:
    /* 0001b742   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b742u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B744:
    /* 0001b744   4  move.l D0,(fffffffc,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b744u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B748:
    /* 0001b748   4  beq 0001b922 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b748u);
    if (rc_cond(c, 7)) goto L_1B922;

L_1B74C:
    /* 0001b74c   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b74cu);
    rc_push32(c, m, 0x00000002u);

L_1B750:
    /* 0001b750   4  pea (fffff2ec,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b750u);
    rc_push32(c, m, (c->a[4] - 0xd14u));

L_1B754:
    /* 0001b754   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b754u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B758:
    /* 0001b758   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b758u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x0001b75cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_1B75C:
    /* 0001b75c   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b75cu);
    c->a[7] = (c->a[7] + 0xcu);

L_1B760:
    /* 0001b760   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b760u);
    rc_push32(c, m, 0x00000002u);

L_1B764:
    /* 0001b764   4  pea (fffff2ee,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b764u);
    rc_push32(c, m, (c->a[4] - 0xd12u));

L_1B768:
    /* 0001b768   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b768u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B76C:
    /* 0001b76c   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b76cu);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x0001b770u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_1B770:
    /* 0001b770   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b770u);
    c->a[7] = (c->a[7] + 0xcu);

L_1B774:
    /* 0001b774   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b774u);
    rc_push32(c, m, 0x00000002u);

L_1B778:
    /* 0001b778   4  pea (fffff2f0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b778u);
    rc_push32(c, m, (c->a[4] - 0xd10u));

L_1B77C:
    /* 0001b77c   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b77cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B780:
    /* 0001b780   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b780u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x0001b784u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_1B784:
    /* 0001b784   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b784u);
    c->a[7] = (c->a[7] + 0xcu);

L_1B788:
    /* 0001b788   4  pea (00000002).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b788u);
    rc_push32(c, m, 0x00000002u);

L_1B78C:
    /* 0001b78c   4  pea (fffff2f2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b78cu);
    rc_push32(c, m, (c->a[4] - 0xd0eu));

L_1B790:
    /* 0001b790   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b790u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B794:
    /* 0001b794   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b794u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x0001b798u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_1B798:
    /* 0001b798   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b798u);
    c->a[7] = (c->a[7] + 0xcu);

L_1B79C:
    /* 0001b79c   4  move.w (fffff2f0,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b79cu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B7A0:
    /* 0001b7a0   2  addq.w #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7a0u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B7A2:
    /* 0001b7a2   4  move.w (fffff2f2,A4),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7a2u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0eu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B7A6:
    /* 0001b7a6   2  addq.w #2,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7a6u);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1B7A8:
    /* 0001b7a8   2  mulu.w D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7a8u);
    t0 = rc_d_get(c, 1, RC_W);
    rc_mulu(c, 0, t0);

L_1B7AA:
    /* 0001b7aa   2  asl.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7aau);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_1B7AC:
    /* 0001b7ac   2  moveq #0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7acu);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1B7AE:
    /* 0001b7ae   2  move.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7aeu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B7B0:
    /* 0001b7b0   4  move.l D1,(a1a,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7b0u);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xa1au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B7B4:
    /* 0001b7b4   6  pea (00010001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7b4u);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_1B7BA:
    /* 0001b7ba   4  move.l (a1a,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7bau);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa1au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B7BE:
    /* 0001b7be   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7beu);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0001b7c2u);
    rc_os_call(c, m, 0, -198);

L_1B7C2:
    /* 0001b7c2   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7c2u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B7C4:
    /* 0001b7c4   4  move.l D0,(fffff2f8,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7c4u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xd08u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B7C8:
    /* 0001b7c8   6  pea (00010001).l */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7c8u);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_1B7CE:
    /* 0001b7ce   4  move.l (a1a,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7ceu);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa1au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B7D2:
    /* 0001b7d2   4  jsr (ffff8338,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7d2u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0001b7d6u);
    rc_os_call(c, m, 0, -198);

L_1B7D6:
    /* 0001b7d6   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7d6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B7D8:
    /* 0001b7d8   4  move.l D0,(fffffff0,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7d8u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B7DC:
    /* 0001b7dc   4  move.w (fffff2f0,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7dcu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B7E0:
    /* 0001b7e0   4  mulu.w (fffff2f2,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7e0u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0eu));
    rc_mulu(c, 0, t0);

L_1B7E4:
    /* 0001b7e4   2  asl.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7e4u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_1B7E6:
    /* 0001b7e6   2  moveq #0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7e6u);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1B7E8:
    /* 0001b7e8   2  move.w D0,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7e8u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B7EA:
    /* 0001b7ea   2  move.l D1,-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7eau);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B7EC:
    /* 0001b7ec   4  move.l (fffffff0,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7ecu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B7F0:
    /* 0001b7f0   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7f0u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B7F4:
    /* 0001b7f4   4  jsr (ffff8314,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7f4u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x0001b7f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_1B7F8:
    /* 0001b7f8   4  lea (c,A7),A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7f8u);
    c->a[7] = (c->a[7] + 0xcu);

L_1B7FC:
    /* 0001b7fc   4  move.l (fffffffc,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b7fcu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B800:
    /* 0001b800   4  jsr (ffff8296,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b800u);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0001b804u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020490u);
    return;

L_1B804:
    /* 0001b804   2  addq.w #4,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b804u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1B806:
    /* 0001b806   4  move.w (fffff2f2,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b806u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B80A:
    /* 0001b80a   2  addq.w #3,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b80au);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B80C:
    /* 0001b80c   4  move.w D0,(fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b80cu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B810:
    /* 0001b810   4  clr.w (fffffff4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b810u);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B814:
    /* 0001b814   4  clr.w (fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b814u);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B818:
    /* 0001b818   2  bra 0001b85c */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b818u);
    goto L_1B85C;

L_1B81A:
    /* 0001b81a   4  clr.w (fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b81au);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B81E:
    /* 0001b81e   2  bra 0001b84a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b81eu);
    goto L_1B84A;

L_1B820:
    /* 0001b820   4  move.w (fffffff4,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b820u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B824:
    /* 0001b824   4  addq.w #1,(fffffff4,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b824u);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B828:
    /* 0001b828   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b828u);
    rc_ext_l(c, 0);

L_1B82A:
    /* 0001b82a   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b82au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1B82C:
    /* 0001b82c   4  movea.l (fffffff0,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b82cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[0] = t0;

L_1B830:
    /* 0001b830   4  move.w (fffffff6,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b830u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B834:
    /* 0001b834   4  addq.w #1,(fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b834u);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B838:
    /* 0001b838   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b838u);
    rc_ext_l(c, 1);

L_1B83A:
    /* 0001b83a   2  asl.l #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b83au);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_1B83C:
    /* 0001b83c   4  movea.l (fffff2f8,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b83cu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[1] = t0;

L_1B840:
    /* 0001b840   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b840u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B846:
    /* 0001b846   4  addq.w #1,(fffffff8,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b846u);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B84A:
    /* 0001b84a   4  move.w (fffffff8,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b84au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B84E:
    /* 0001b84e   4  cmp.w (fffff2f2,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b84eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0eu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B852:
    /* 0001b852   2  bcs 0001b820 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b852u);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1B820; }

L_1B854:
    /* 0001b854   4  addq.w #2,(fffffff6,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b854u);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B858:
    /* 0001b858   4  addq.w #1,(fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b858u);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B85C:
    /* 0001b85c   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b85cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B860:
    /* 0001b860   4  cmp.w (fffff2f0,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b860u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd10u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B864:
    /* 0001b864   2  bcs 0001b81a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b864u);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1B81A; }

L_1B866:
    /* 0001b866   4  move.l (a1a,A4),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b866u);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa1au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B86A:
    /* 0001b86a   4  move.l (fffffff0,A5),-(A7) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b86au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B86E:
    /* 0001b86e   4  jsr (ffff8344,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b86eu);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x0001b872u);
    rc_os_call(c, m, 0, -210);

L_1B872:
    /* 0001b872   2  addq.w #8,A7 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b872u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1B874:
    /* 0001b874   4  addq.w #2,(fffff2f2,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b874u);
    t3 = (c->a[4] - 0xd0eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B878:
    /* 0001b878   4  addq.w #2,(fffff2f0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b878u);
    t3 = (c->a[4] - 0xd10u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B87C:
    /* 0001b87c   4  clr.w (fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b87cu);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B880:
    /* 0001b880   2  bra 0001b8d4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b880u);
    goto L_1B8D4;

L_1B882:
    /* 0001b882   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b882u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B886:
    /* 0001b886   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b886u);
    rc_ext_l(c, 0);

L_1B888:
    /* 0001b888   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b888u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1B88A:
    /* 0001b88a   4  movea.l (fffff2f8,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b88au);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_1B88E:
    /* 0001b88e   4  tst.w (0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b88eu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_1B892:
    /* 0001b892   2  beq 0001b8ba */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b892u);
    if (rc_cond(c, 7)) goto L_1B8BA;

L_1B894:
    /* 0001b894   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b894u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B898:
    /* 0001b898   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b898u);
    rc_ext_l(c, 0);

L_1B89A:
    /* 0001b89a   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b89au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1B89C:
    /* 0001b89c   4  movea.l (fffff2f8,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b89cu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_1B8A0:
    /* 0001b8a0   4  move.w (fffffffa,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8a0u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B8A4:
    /* 0001b8a4   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8a4u);
    rc_ext_l(c, 1);

L_1B8A6:
    /* 0001b8a6   2  asl.l #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8a6u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_1B8A8:
    /* 0001b8a8   4  movea.l (fffff2f8,A4),A1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8a8u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[1] = t0;

L_1B8AC:
    /* 0001b8ac   4  move.w (0,A1,D1.w),D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8acu);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B8B0:
    /* 0001b8b0   2  subq.w #1,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8b0u);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_1B8B2:
    /* 0001b8b2   2  asl.w #1,D2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8b2u);
    c->d[2] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W);

L_1B8B4:
    /* 0001b8b4   4  move.w D2,(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8b4u);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B8B8:
    /* 0001b8b8   2  bra 0001b8d0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8b8u);
    goto L_1B8D0;

L_1B8BA:
    /* 0001b8ba   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8bau);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B8BE:
    /* 0001b8be   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8beu);
    rc_ext_l(c, 0);

L_1B8C0:
    /* 0001b8c0   2  asl.l #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8c0u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1B8C2:
    /* 0001b8c2   4  movea.l (fffff2f8,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8c2u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_1B8C6:
    /* 0001b8c6   4  move.w (74c,A4),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8c6u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x74cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B8CA:
    /* 0001b8ca   2  asl.w #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8cau);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_1B8CC:
    /* 0001b8cc   4  move.w D1,(0,A0,D0.w) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8ccu);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B8D0:
    /* 0001b8d0   4  addq.w #1,(fffffffa,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8d0u);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B8D4:
    /* 0001b8d4   4  move.w (fffffffa,A5),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8d4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B8D8:
    /* 0001b8d8   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8d8u);
    rc_ext_l(c, 0);

L_1B8DA:
    /* 0001b8da   4  move.l (a1a,A4),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8dau);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa1au));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B8DE:
    /* 0001b8de   2  lsr.l #1,D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8deu);
    c->d[1] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_1B8E0:
    /* 0001b8e0   2  cmp.l D1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8e0u);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1B8E2:
    /* 0001b8e2   2  bcs 0001b882 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8e2u);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1B882; }

L_1B8E4:
    /* 0001b8e4   4  subq.w #1,(fffff2f0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8e4u);
    t3 = (c->a[4] - 0xd10u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B8E8:
    /* 0001b8e8   4  move.w (fffff2f0,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8e8u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B8EC:
    /* 0001b8ec   4  mulu.w (fffff2ec,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8ecu);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd14u));
    rc_mulu(c, 0, t0);

L_1B8F0:
    /* 0001b8f0   4  move.w D0,(fffff2f0,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8f0u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B8F4:
    /* 0001b8f4   4  move.w (fffff2ec,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8f4u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B8F8:
    /* 0001b8f8   4  mulu.w #2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8f8u);
    t0 = 0x00000002u;
    rc_mulu(c, 0, t0);

L_1B8FC:
    /* 0001b8fc   4  move.w D0,(fffff2ec,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b8fcu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0xd14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B900:
    /* 0001b900   4  move.w (fffff2f2,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b900u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd0eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B904:
    /* 0001b904   4  mulu.w (fffff2ee,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b904u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd12u));
    rc_mulu(c, 0, t0);

L_1B908:
    /* 0001b908   4  sub.w (742,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b908u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x742u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B90C:
    /* 0001b90c   2  swap D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b90cu);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1B90E:
    /* 0001b90e   2  clr.w D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b90eu);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B910:
    /* 0001b910   2  swap D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b910u);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1B912:
    /* 0001b912   4  divu.w (74a,A4),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b912u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x74au));
    rc_divu(c, m, 0, t0);

L_1B916:
    /* 0001b916   2  addq.w #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b916u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1B918:
    /* 0001b918   4  move.w D0,(13cc,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b918u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x13ccu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B91C:
    /* 0001b91c   2  moveq #1,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b91cu);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1B91E:
    /* 0001b91e   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b91eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B920:
    /* 0001b920   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b920u);
    rc_ret(c, m);
    return;

L_1B922:
    /* 0001b922   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b922u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1B924:
    /* 0001b924   2  bra 0001b91e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001b924u);
    rc_tick();
    goto L_1B91E;

}
