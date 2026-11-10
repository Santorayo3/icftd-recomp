/* fn_0001c4d2 - 768 byte(s), 203 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001c4d2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001c4d2u): goto L_1C4D2;
    case RC_ADDR(0x0001c4d6u): goto L_1C4D6;
    case RC_ADDR(0x0001c4dau): goto L_1C4DA;
    case RC_ADDR(0x0001c4dcu): goto L_1C4DC;
    case RC_ADDR(0x0001c4e0u): goto L_1C4E0;
    case RC_ADDR(0x0001c4e4u): goto L_1C4E4;
    case RC_ADDR(0x0001c4e8u): goto L_1C4E8;
    case RC_ADDR(0x0001c4eau): goto L_1C4EA;
    case RC_ADDR(0x0001c4f0u): goto L_1C4F0;
    case RC_ADDR(0x0001c4f4u): goto L_1C4F4;
    case RC_ADDR(0x0001c4f8u): goto L_1C4F8;
    case RC_ADDR(0x0001c4fau): goto L_1C4FA;
    case RC_ADDR(0x0001c4feu): goto L_1C4FE;
    case RC_ADDR(0x0001c502u): goto L_1C502;
    case RC_ADDR(0x0001c506u): goto L_1C506;
    case RC_ADDR(0x0001c50au): goto L_1C50A;
    case RC_ADDR(0x0001c50eu): goto L_1C50E;
    case RC_ADDR(0x0001c512u): goto L_1C512;
    case RC_ADDR(0x0001c516u): goto L_1C516;
    case RC_ADDR(0x0001c518u): goto L_1C518;
    case RC_ADDR(0x0001c51cu): goto L_1C51C;
    case RC_ADDR(0x0001c520u): goto L_1C520;
    case RC_ADDR(0x0001c522u): goto L_1C522;
    case RC_ADDR(0x0001c526u): goto L_1C526;
    case RC_ADDR(0x0001c52au): goto L_1C52A;
    case RC_ADDR(0x0001c52cu): goto L_1C52C;
    case RC_ADDR(0x0001c530u): goto L_1C530;
    case RC_ADDR(0x0001c534u): goto L_1C534;
    case RC_ADDR(0x0001c538u): goto L_1C538;
    case RC_ADDR(0x0001c53au): goto L_1C53A;
    case RC_ADDR(0x0001c53eu): goto L_1C53E;
    case RC_ADDR(0x0001c542u): goto L_1C542;
    case RC_ADDR(0x0001c544u): goto L_1C544;
    case RC_ADDR(0x0001c548u): goto L_1C548;
    case RC_ADDR(0x0001c550u): goto L_1C550;
    case RC_ADDR(0x0001c552u): goto L_1C552;
    case RC_ADDR(0x0001c55au): goto L_1C55A;
    case RC_ADDR(0x0001c55eu): goto L_1C55E;
    case RC_ADDR(0x0001c560u): goto L_1C560;
    case RC_ADDR(0x0001c564u): goto L_1C564;
    case RC_ADDR(0x0001c56cu): goto L_1C56C;
    case RC_ADDR(0x0001c56eu): goto L_1C56E;
    case RC_ADDR(0x0001c576u): goto L_1C576;
    case RC_ADDR(0x0001c57au): goto L_1C57A;
    case RC_ADDR(0x0001c57cu): goto L_1C57C;
    case RC_ADDR(0x0001c580u): goto L_1C580;
    case RC_ADDR(0x0001c584u): goto L_1C584;
    case RC_ADDR(0x0001c586u): goto L_1C586;
    case RC_ADDR(0x0001c58au): goto L_1C58A;
    case RC_ADDR(0x0001c58cu): goto L_1C58C;
    case RC_ADDR(0x0001c590u): goto L_1C590;
    case RC_ADDR(0x0001c592u): goto L_1C592;
    case RC_ADDR(0x0001c594u): goto L_1C594;
    case RC_ADDR(0x0001c598u): goto L_1C598;
    case RC_ADDR(0x0001c5a0u): goto L_1C5A0;
    case RC_ADDR(0x0001c5a2u): goto L_1C5A2;
    case RC_ADDR(0x0001c5aau): goto L_1C5AA;
    case RC_ADDR(0x0001c5b2u): goto L_1C5B2;
    case RC_ADDR(0x0001c5b4u): goto L_1C5B4;
    case RC_ADDR(0x0001c5b6u): goto L_1C5B6;
    case RC_ADDR(0x0001c5b8u): goto L_1C5B8;
    case RC_ADDR(0x0001c5bcu): goto L_1C5BC;
    case RC_ADDR(0x0001c5beu): goto L_1C5BE;
    case RC_ADDR(0x0001c5c0u): goto L_1C5C0;
    case RC_ADDR(0x0001c5c8u): goto L_1C5C8;
    case RC_ADDR(0x0001c5cau): goto L_1C5CA;
    case RC_ADDR(0x0001c5d2u): goto L_1C5D2;
    case RC_ADDR(0x0001c5d6u): goto L_1C5D6;
    case RC_ADDR(0x0001c5d8u): goto L_1C5D8;
    case RC_ADDR(0x0001c5dcu): goto L_1C5DC;
    case RC_ADDR(0x0001c5deu): goto L_1C5DE;
    case RC_ADDR(0x0001c5e2u): goto L_1C5E2;
    case RC_ADDR(0x0001c5e4u): goto L_1C5E4;
    case RC_ADDR(0x0001c5e6u): goto L_1C5E6;
    case RC_ADDR(0x0001c5eau): goto L_1C5EA;
    case RC_ADDR(0x0001c5ecu): goto L_1C5EC;
    case RC_ADDR(0x0001c5f4u): goto L_1C5F4;
    case RC_ADDR(0x0001c5fcu): goto L_1C5FC;
    case RC_ADDR(0x0001c5feu): goto L_1C5FE;
    case RC_ADDR(0x0001c602u): goto L_1C602;
    case RC_ADDR(0x0001c606u): goto L_1C606;
    case RC_ADDR(0x0001c608u): goto L_1C608;
    case RC_ADDR(0x0001c60eu): goto L_1C60E;
    case RC_ADDR(0x0001c614u): goto L_1C614;
    case RC_ADDR(0x0001c616u): goto L_1C616;
    case RC_ADDR(0x0001c61au): goto L_1C61A;
    case RC_ADDR(0x0001c61cu): goto L_1C61C;
    case RC_ADDR(0x0001c620u): goto L_1C620;
    case RC_ADDR(0x0001c622u): goto L_1C622;
    case RC_ADDR(0x0001c626u): goto L_1C626;
    case RC_ADDR(0x0001c62au): goto L_1C62A;
    case RC_ADDR(0x0001c62cu): goto L_1C62C;
    case RC_ADDR(0x0001c62eu): goto L_1C62E;
    case RC_ADDR(0x0001c630u): goto L_1C630;
    case RC_ADDR(0x0001c634u): goto L_1C634;
    case RC_ADDR(0x0001c638u): goto L_1C638;
    case RC_ADDR(0x0001c63cu): goto L_1C63C;
    case RC_ADDR(0x0001c640u): goto L_1C640;
    case RC_ADDR(0x0001c644u): goto L_1C644;
    case RC_ADDR(0x0001c64au): goto L_1C64A;
    case RC_ADDR(0x0001c64eu): goto L_1C64E;
    case RC_ADDR(0x0001c650u): goto L_1C650;
    case RC_ADDR(0x0001c654u): goto L_1C654;
    case RC_ADDR(0x0001c656u): goto L_1C656;
    case RC_ADDR(0x0001c65au): goto L_1C65A;
    case RC_ADDR(0x0001c662u): goto L_1C662;
    case RC_ADDR(0x0001c664u): goto L_1C664;
    case RC_ADDR(0x0001c66cu): goto L_1C66C;
    case RC_ADDR(0x0001c670u): goto L_1C670;
    case RC_ADDR(0x0001c672u): goto L_1C672;
    case RC_ADDR(0x0001c678u): goto L_1C678;
    case RC_ADDR(0x0001c67au): goto L_1C67A;
    case RC_ADDR(0x0001c67eu): goto L_1C67E;
    case RC_ADDR(0x0001c680u): goto L_1C680;
    case RC_ADDR(0x0001c684u): goto L_1C684;
    case RC_ADDR(0x0001c688u): goto L_1C688;
    case RC_ADDR(0x0001c68cu): goto L_1C68C;
    case RC_ADDR(0x0001c68eu): goto L_1C68E;
    case RC_ADDR(0x0001c692u): goto L_1C692;
    case RC_ADDR(0x0001c694u): goto L_1C694;
    case RC_ADDR(0x0001c698u): goto L_1C698;
    case RC_ADDR(0x0001c69au): goto L_1C69A;
    case RC_ADDR(0x0001c69eu): goto L_1C69E;
    case RC_ADDR(0x0001c6a6u): goto L_1C6A6;
    case RC_ADDR(0x0001c6a8u): goto L_1C6A8;
    case RC_ADDR(0x0001c6b0u): goto L_1C6B0;
    case RC_ADDR(0x0001c6b4u): goto L_1C6B4;
    case RC_ADDR(0x0001c6b6u): goto L_1C6B6;
    case RC_ADDR(0x0001c6bcu): goto L_1C6BC;
    case RC_ADDR(0x0001c6beu): goto L_1C6BE;
    case RC_ADDR(0x0001c6c2u): goto L_1C6C2;
    case RC_ADDR(0x0001c6c4u): goto L_1C6C4;
    case RC_ADDR(0x0001c6c8u): goto L_1C6C8;
    case RC_ADDR(0x0001c6ccu): goto L_1C6CC;
    case RC_ADDR(0x0001c6d0u): goto L_1C6D0;
    case RC_ADDR(0x0001c6d2u): goto L_1C6D2;
    case RC_ADDR(0x0001c6d6u): goto L_1C6D6;
    case RC_ADDR(0x0001c6dau): goto L_1C6DA;
    case RC_ADDR(0x0001c6dcu): goto L_1C6DC;
    case RC_ADDR(0x0001c6e0u): goto L_1C6E0;
    case RC_ADDR(0x0001c6e4u): goto L_1C6E4;
    case RC_ADDR(0x0001c6e6u): goto L_1C6E6;
    case RC_ADDR(0x0001c6eau): goto L_1C6EA;
    case RC_ADDR(0x0001c6ecu): goto L_1C6EC;
    case RC_ADDR(0x0001c6f2u): goto L_1C6F2;
    case RC_ADDR(0x0001c6f6u): goto L_1C6F6;
    case RC_ADDR(0x0001c6fau): goto L_1C6FA;
    case RC_ADDR(0x0001c6feu): goto L_1C6FE;
    case RC_ADDR(0x0001c702u): goto L_1C702;
    case RC_ADDR(0x0001c704u): goto L_1C704;
    case RC_ADDR(0x0001c708u): goto L_1C708;
    case RC_ADDR(0x0001c70cu): goto L_1C70C;
    case RC_ADDR(0x0001c710u): goto L_1C710;
    case RC_ADDR(0x0001c714u): goto L_1C714;
    case RC_ADDR(0x0001c718u): goto L_1C718;
    case RC_ADDR(0x0001c71cu): goto L_1C71C;
    case RC_ADDR(0x0001c720u): goto L_1C720;
    case RC_ADDR(0x0001c724u): goto L_1C724;
    case RC_ADDR(0x0001c728u): goto L_1C728;
    case RC_ADDR(0x0001c72cu): goto L_1C72C;
    case RC_ADDR(0x0001c730u): goto L_1C730;
    case RC_ADDR(0x0001c734u): goto L_1C734;
    case RC_ADDR(0x0001c738u): goto L_1C738;
    case RC_ADDR(0x0001c73cu): goto L_1C73C;
    case RC_ADDR(0x0001c740u): goto L_1C740;
    case RC_ADDR(0x0001c744u): goto L_1C744;
    case RC_ADDR(0x0001c748u): goto L_1C748;
    case RC_ADDR(0x0001c74cu): goto L_1C74C;
    case RC_ADDR(0x0001c750u): goto L_1C750;
    case RC_ADDR(0x0001c754u): goto L_1C754;
    case RC_ADDR(0x0001c758u): goto L_1C758;
    case RC_ADDR(0x0001c75cu): goto L_1C75C;
    case RC_ADDR(0x0001c760u): goto L_1C760;
    case RC_ADDR(0x0001c764u): goto L_1C764;
    case RC_ADDR(0x0001c768u): goto L_1C768;
    case RC_ADDR(0x0001c76cu): goto L_1C76C;
    case RC_ADDR(0x0001c770u): goto L_1C770;
    case RC_ADDR(0x0001c772u): goto L_1C772;
    case RC_ADDR(0x0001c776u): goto L_1C776;
    case RC_ADDR(0x0001c77au): goto L_1C77A;
    case RC_ADDR(0x0001c77eu): goto L_1C77E;
    case RC_ADDR(0x0001c780u): goto L_1C780;
    case RC_ADDR(0x0001c784u): goto L_1C784;
    case RC_ADDR(0x0001c788u): goto L_1C788;
    case RC_ADDR(0x0001c78cu): goto L_1C78C;
    case RC_ADDR(0x0001c790u): goto L_1C790;
    case RC_ADDR(0x0001c794u): goto L_1C794;
    case RC_ADDR(0x0001c798u): goto L_1C798;
    case RC_ADDR(0x0001c79cu): goto L_1C79C;
    case RC_ADDR(0x0001c7a0u): goto L_1C7A0;
    case RC_ADDR(0x0001c7a4u): goto L_1C7A4;
    case RC_ADDR(0x0001c7a8u): goto L_1C7A8;
    case RC_ADDR(0x0001c7acu): goto L_1C7AC;
    case RC_ADDR(0x0001c7b0u): goto L_1C7B0;
    case RC_ADDR(0x0001c7b2u): goto L_1C7B2;
    case RC_ADDR(0x0001c7b4u): goto L_1C7B4;
    case RC_ADDR(0x0001c7b8u): goto L_1C7B8;
    case RC_ADDR(0x0001c7bcu): goto L_1C7BC;
    case RC_ADDR(0x0001c7c0u): goto L_1C7C0;
    case RC_ADDR(0x0001c7c4u): goto L_1C7C4;
    case RC_ADDR(0x0001c7c8u): goto L_1C7C8;
    case RC_ADDR(0x0001c7cau): goto L_1C7CA;
    case RC_ADDR(0x0001c7ceu): goto L_1C7CE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C4D2:
    /* 0001c4d2   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001c4d2u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1C4D6:
    /* 0001c4d6   4  move.w (2288,A4),D0 */
    c->pc = RC_ADDR(0x0001c4d6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2288u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C4DA:
    /* 0001c4da   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c4dau);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1C4DC:
    /* 0001c4dc   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x0001c4dcu);
    rc_step(c, m);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_1C4E0:
    /* 0001c4e0   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c4e0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C4E4:
    /* 0001c4e4   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c4e4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_1C4E8:
    /* 0001c4e8   2  bne 0001c4f0 */
    c->pc = RC_ADDR(0x0001c4e8u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1C4F0;

L_1C4EA:
    /* 0001c4ea   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c4eau);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C4F0:
    /* 0001c4f0   4  pea (229a,A4) */
    c->pc = RC_ADDR(0x0001c4f0u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x229au));

L_1C4F4:
    /* 0001c4f4   4  jsr (ffff8164,A4) */
    c->pc = RC_ADDR(0x0001c4f4u);
    rc_step(c, m);
    /* vector 59 */
    rc_push32(c, m, RC_ADDR(0x0001c4f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bbau);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00011b90u);
    return;

L_1C4F8:
    /* 0001c4f8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001c4f8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1C4FA:
    /* 0001c4fa   4  tst.w (264a,A4) */
    c->pc = RC_ADDR(0x0001c4fau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x264au));
    rc_set_nzvc(c, t0, RC_W);

L_1C4FE:
    /* 0001c4fe   4  beq 0001c602 */
    c->pc = RC_ADDR(0x0001c4feu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1C602;

L_1C502:
    /* 0001c502   4  move.w (264a,A4),D0 */
    c->pc = RC_ADDR(0x0001c502u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x264au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C506:
    /* 0001c506   4  addq.w #1,(264a,A4) */
    c->pc = RC_ADDR(0x0001c506u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x264au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1C50A:
    /* 0001c50a   4  cmp.w #12,D0 */
    c->pc = RC_ADDR(0x0001c50au);
    rc_step(c, m);
    t0 = 0x00000012u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1C50E:
    /* 0001c50e   4  bge 0001c5ec */
    c->pc = RC_ADDR(0x0001c50eu);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_1C5EC;

L_1C512:
    /* 0001c512   4  move.w (2274,A4),D0 */
    c->pc = RC_ADDR(0x0001c512u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2274u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C516:
    /* 0001c516   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c516u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1C518:
    /* 0001c518   4  sub.l D0,(263a,A4) */
    c->pc = RC_ADDR(0x0001c518u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x263au);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1C51C:
    /* 0001c51c   4  move.w (2274,A4),D0 */
    c->pc = RC_ADDR(0x0001c51cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2274u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C520:
    /* 0001c520   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c520u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1C522:
    /* 0001c522   4  sub.l D0,(263e,A4) */
    c->pc = RC_ADDR(0x0001c522u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x263eu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1C526:
    /* 0001c526   4  move.w (2274,A4),D0 */
    c->pc = RC_ADDR(0x0001c526u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2274u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C52A:
    /* 0001c52a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c52au);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1C52C:
    /* 0001c52c   4  sub.l D0,(2646,A4) */
    c->pc = RC_ADDR(0x0001c52cu);
    rc_step(c, m);
    t3 = (c->a[4] + 0x2646u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1C530:
    /* 0001c530   4  move.w (2274,A4),D0 */
    c->pc = RC_ADDR(0x0001c530u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2274u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C534:
    /* 0001c534   4  muls.w #3,D0 */
    c->pc = RC_ADDR(0x0001c534u);
    rc_step(c, m);
    t0 = 0x00000003u;
    rc_muls(c, 0, t0);

L_1C538:
    /* 0001c538   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c538u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1C53A:
    /* 0001c53a   4  sub.l D0,(2642,A4) */
    c->pc = RC_ADDR(0x0001c53au);
    rc_step(c, m);
    t3 = (c->a[4] + 0x2642u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1C53E:
    /* 0001c53e   4  tst.l (2646,A4) */
    c->pc = RC_ADDR(0x0001c53eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2646u));
    rc_set_nzvc(c, t0, RC_L);

L_1C542:
    /* 0001c542   2  bge 0001c548 */
    c->pc = RC_ADDR(0x0001c542u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_1C548;

L_1C544:
    /* 0001c544   4  clr.l (2646,A4) */
    c->pc = RC_ADDR(0x0001c544u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] + 0x2646u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1C548:
    /* 0001c548   8  cmpi.l #16f,(2646,A4) */
    c->pc = RC_ADDR(0x0001c548u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2646u));
    rc_cmp(c, RC_L, t0, 0x0000016fu);

L_1C550:
    /* 0001c550   2  ble 0001c55a */
    c->pc = RC_ADDR(0x0001c550u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_1C55A;

L_1C552:
    /* 0001c552   8  move.l #16f,(2646,A4) */
    c->pc = RC_ADDR(0x0001c552u);
    rc_step(c, m);
    t0 = 0x0000016fu;
    rc_wr32(c, m, (c->a[4] + 0x2646u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C55A:
    /* 0001c55a   4  tst.l (2642,A4) */
    c->pc = RC_ADDR(0x0001c55au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2642u));
    rc_set_nzvc(c, t0, RC_L);

L_1C55E:
    /* 0001c55e   2  bge 0001c564 */
    c->pc = RC_ADDR(0x0001c55eu);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_1C564;

L_1C560:
    /* 0001c560   4  clr.l (2642,A4) */
    c->pc = RC_ADDR(0x0001c560u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] + 0x2642u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1C564:
    /* 0001c564   8  cmpi.l #16b,(2642,A4) */
    c->pc = RC_ADDR(0x0001c564u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2642u));
    rc_cmp(c, RC_L, t0, 0x0000016bu);

L_1C56C:
    /* 0001c56c   2  ble 0001c576 */
    c->pc = RC_ADDR(0x0001c56cu);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_1C576;

L_1C56E:
    /* 0001c56e   8  move.l #16b,(2642,A4) */
    c->pc = RC_ADDR(0x0001c56eu);
    rc_step(c, m);
    t0 = 0x0000016bu;
    rc_wr32(c, m, (c->a[4] + 0x2642u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C576:
    /* 0001c576   4  tst.l (263a,A4) */
    c->pc = RC_ADDR(0x0001c576u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x263au));
    rc_set_nzvc(c, t0, RC_L);

L_1C57A:
    /* 0001c57a   2  bge 0001c5aa */
    c->pc = RC_ADDR(0x0001c57au);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_1C5AA;

L_1C57C:
    /* 0001c57c   4  clr.l (263a,A4) */
    c->pc = RC_ADDR(0x0001c57cu);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] + 0x263au), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1C580:
    /* 0001c580   4  move.w (2274,A4),D0 */
    c->pc = RC_ADDR(0x0001c580u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2274u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C584:
    /* 0001c584   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c584u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1C586:
    /* 0001c586   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x0001c586u);
    rc_step(c, m);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_1C58A:
    /* 0001c58a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001c58au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C58C:
    /* 0001c58c   4  jsr (ffff8170,A4) */
    c->pc = RC_ADDR(0x0001c58cu);
    rc_step(c, m);
    /* vector 61 */
    rc_push32(c, m, RC_ADDR(0x0001c590u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bc6u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00012132u);
    return;

L_1C590:
    /* 0001c590   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001c590u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1C592:
    /* 0001c592   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c592u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1C594:
    /* 0001c594   4  sub.l D0,(2632,A4) */
    c->pc = RC_ADDR(0x0001c594u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x2632u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1C598:
    /* 0001c598   8  cmpi.l #1,(2632,A4) */
    c->pc = RC_ADDR(0x0001c598u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2632u));
    rc_cmp(c, RC_L, t0, 0x00000001u);

L_1C5A0:
    /* 0001c5a0   2  bge 0001c5aa */
    c->pc = RC_ADDR(0x0001c5a0u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_1C5AA;

L_1C5A2:
    /* 0001c5a2   8  move.l #1,(2632,A4) */
    c->pc = RC_ADDR(0x0001c5a2u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr32(c, m, (c->a[4] + 0x2632u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C5AA:
    /* 0001c5aa   8  cmpi.l #16f,(263a,A4) */
    c->pc = RC_ADDR(0x0001c5aau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x263au));
    rc_cmp(c, RC_L, t0, 0x0000016fu);

L_1C5B2:
    /* 0001c5b2   2  ble 0001c5b8 */
    c->pc = RC_ADDR(0x0001c5b2u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_1C5B8;

L_1C5B4:
    /* 0001c5b4   2  unlk A5 */
    c->pc = RC_ADDR(0x0001c5b4u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C5B6:
    /* 0001c5b6   2  rts */
    c->pc = RC_ADDR(0x0001c5b6u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_1C5B8:
    /* 0001c5b8   4  tst.l (263e,A4) */
    c->pc = RC_ADDR(0x0001c5b8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x263eu));
    rc_set_nzvc(c, t0, RC_L);

L_1C5BC:
    /* 0001c5bc   2  bge 0001c5c0 */
    c->pc = RC_ADDR(0x0001c5bcu);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_1C5C0;

L_1C5BE:
    /* 0001c5be   2  bra 0001c5b4 */
    c->pc = RC_ADDR(0x0001c5beu);
    rc_step(c, m);
    rc_tick();
    goto L_1C5B4;

L_1C5C0:
    /* 0001c5c0   8  cmpi.l #16f,(263e,A4) */
    c->pc = RC_ADDR(0x0001c5c0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x263eu));
    rc_cmp(c, RC_L, t0, 0x0000016fu);

L_1C5C8:
    /* 0001c5c8   2  ble 0001c5ea */
    c->pc = RC_ADDR(0x0001c5c8u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_1C5EA;

L_1C5CA:
    /* 0001c5ca   8  move.l #16f,(263e,A4) */
    c->pc = RC_ADDR(0x0001c5cau);
    rc_step(c, m);
    t0 = 0x0000016fu;
    rc_wr32(c, m, (c->a[4] + 0x263eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C5D2:
    /* 0001c5d2   4  move.w (2274,A4),D0 */
    c->pc = RC_ADDR(0x0001c5d2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2274u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C5D6:
    /* 0001c5d6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c5d6u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1C5D8:
    /* 0001c5d8   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x0001c5d8u);
    rc_step(c, m);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_1C5DC:
    /* 0001c5dc   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001c5dcu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C5DE:
    /* 0001c5de   4  jsr (ffff8170,A4) */
    c->pc = RC_ADDR(0x0001c5deu);
    rc_step(c, m);
    /* vector 61 */
    rc_push32(c, m, RC_ADDR(0x0001c5e2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bc6u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00012132u);
    return;

L_1C5E2:
    /* 0001c5e2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001c5e2u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1C5E4:
    /* 0001c5e4   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c5e4u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1C5E6:
    /* 0001c5e6   4  sub.l D0,(2636,A4) */
    c->pc = RC_ADDR(0x0001c5e6u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x2636u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1C5EA:
    /* 0001c5ea   2  bra 0001c5fe */
    c->pc = RC_ADDR(0x0001c5eau);
    rc_step(c, m);
    goto L_1C5FE;

L_1C5EC:
    /* 0001c5ec   8  move.l #2710,(2642,A4) */
    c->pc = RC_ADDR(0x0001c5ecu);
    rc_step(c, m);
    t0 = 0x00002710u;
    rc_wr32(c, m, (c->a[4] + 0x2642u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C5F4:
    /* 0001c5f4   8  move.l #2710,(2646,A4) */
    c->pc = RC_ADDR(0x0001c5f4u);
    rc_step(c, m);
    t0 = 0x00002710u;
    rc_wr32(c, m, (c->a[4] + 0x2646u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C5FC:
    /* 0001c5fc   2  bra 0001c5b4 */
    c->pc = RC_ADDR(0x0001c5fcu);
    rc_step(c, m);
    rc_tick();
    goto L_1C5B4;

L_1C5FE:
    /* 0001c5fe   4  bra 0001c6f2 */
    c->pc = RC_ADDR(0x0001c5feu);
    rc_step(c, m);
    goto L_1C6F2;

L_1C602:
    /* 0001c602   4  tst.w (2278,A4) */
    c->pc = RC_ADDR(0x0001c602u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2278u));
    rc_set_nzvc(c, t0, RC_W);

L_1C606:
    /* 0001c606   2  beq 0001c616 */
    c->pc = RC_ADDR(0x0001c606u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1C616;

L_1C608:
    /* 0001c608   6  move.w (2288,A4),(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001c608u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2288u));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C60E:
    /* 0001c60e   6  move.w (262e,A4),(ffffb02a,A4) */
    c->pc = RC_ADDR(0x0001c60eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x262eu));
    rc_wr16(c, m, (c->a[4] - 0x4fd6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C614:
    /* 0001c614   2  bra 0001c634 */
    c->pc = RC_ADDR(0x0001c614u);
    rc_step(c, m);
    goto L_1C634;

L_1C616:
    /* 0001c616   4  tst.w (ffffb02a,A4) */
    c->pc = RC_ADDR(0x0001c616u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_set_nzvc(c, t0, RC_W);

L_1C61A:
    /* 0001c61a   2  bne 0001c634 */
    c->pc = RC_ADDR(0x0001c61au);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_1C634;

L_1C61C:
    /* 0001c61c   4  tst.w (2288,A4) */
    c->pc = RC_ADDR(0x0001c61cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2288u));
    rc_set_nzvc(c, t0, RC_W);

L_1C620:
    /* 0001c620   2  beq 0001c634 */
    c->pc = RC_ADDR(0x0001c620u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1C634;

L_1C622:
    /* 0001c622   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001c622u);
    rc_step(c, m);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C626:
    /* 0001c626   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0001c626u);
    rc_step(c, m);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0001c62au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_1C62A:
    /* 0001c62a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001c62au);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1C62C:
    /* 0001c62c   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x0001c62cu);
    rc_step(c, m);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1C62E:
    /* 0001c62e   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x0001c62eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1C630:
    /* 0001c630   4  move.w D1,(ffffb02a,A4) */
    c->pc = RC_ADDR(0x0001c630u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x4fd6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C634:
    /* 0001c634   4  tst.w (ffffb02a,A4) */
    c->pc = RC_ADDR(0x0001c634u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_set_nzvc(c, t0, RC_W);

L_1C638:
    /* 0001c638   4  beq 0001c6ec */
    c->pc = RC_ADDR(0x0001c638u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1C6EC;

L_1C63C:
    /* 0001c63c   4  tst.w (2288,A4) */
    c->pc = RC_ADDR(0x0001c63cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2288u));
    rc_set_nzvc(c, t0, RC_W);

L_1C640:
    /* 0001c640   4  beq 0001c6ec */
    c->pc = RC_ADDR(0x0001c640u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1C6EC;

L_1C644:
    /* 0001c644   6  move.w (ffffb02a,A4),(262e,A4) */
    c->pc = RC_ADDR(0x0001c644u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_wr16(c, m, (c->a[4] + 0x262eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C64A:
    /* 0001c64a   4  tst.w (ffffb02a,A4) */
    c->pc = RC_ADDR(0x0001c64au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_set_nzvc(c, t0, RC_W);

L_1C64E:
    /* 0001c64e   2  bge 0001c694 */
    c->pc = RC_ADDR(0x0001c64eu);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_1C694;

L_1C650:
    /* 0001c650   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001c650u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C654:
    /* 0001c654   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c654u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1C656:
    /* 0001c656   4  add.l D0,(2632,A4) */
    c->pc = RC_ADDR(0x0001c656u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x2632u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1C65A:
    /* 0001c65a   8  cmpi.l #69,(2632,A4) */
    c->pc = RC_ADDR(0x0001c65au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2632u));
    rc_cmp(c, RC_L, t0, 0x00000069u);

L_1C662:
    /* 0001c662   2  ble 0001c67a */
    c->pc = RC_ADDR(0x0001c662u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_1C67A;

L_1C664:
    /* 0001c664   8  move.l #69,(2632,A4) */
    c->pc = RC_ADDR(0x0001c664u);
    rc_step(c, m);
    t0 = 0x00000069u;
    rc_wr32(c, m, (c->a[4] + 0x2632u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C66C:
    /* 0001c66c   4  tst.w (2278,A4) */
    c->pc = RC_ADDR(0x0001c66cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2278u));
    rc_set_nzvc(c, t0, RC_W);

L_1C670:
    /* 0001c670   2  beq 0001c678 */
    c->pc = RC_ADDR(0x0001c670u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1C678;

L_1C672:
    /* 0001c672   6  move.w #1,(264a,A4) */
    c->pc = RC_ADDR(0x0001c672u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x264au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C678:
    /* 0001c678   2  bra 0001c692 */
    c->pc = RC_ADDR(0x0001c678u);
    rc_step(c, m);
    goto L_1C692;

L_1C67A:
    /* 0001c67a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001c67au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C67E:
    /* 0001c67e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c67eu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1C680:
    /* 0001c680   4  sub.l D0,(2636,A4) */
    c->pc = RC_ADDR(0x0001c680u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x2636u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1C684:
    /* 0001c684   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001c684u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C688:
    /* 0001c688   4  muls.w #5,D0 */
    c->pc = RC_ADDR(0x0001c688u);
    rc_step(c, m);
    t0 = 0x00000005u;
    rc_muls(c, 0, t0);

L_1C68C:
    /* 0001c68c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c68cu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1C68E:
    /* 0001c68e   4  add.l D0,(2642,A4) */
    c->pc = RC_ADDR(0x0001c68eu);
    rc_step(c, m);
    t3 = (c->a[4] + 0x2642u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1C692:
    /* 0001c692   2  bra 0001c6d6 */
    c->pc = RC_ADDR(0x0001c692u);
    rc_step(c, m);
    goto L_1C6D6;

L_1C694:
    /* 0001c694   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001c694u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C698:
    /* 0001c698   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c698u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1C69A:
    /* 0001c69a   4  add.l D0,(2636,A4) */
    c->pc = RC_ADDR(0x0001c69au);
    rc_step(c, m);
    t3 = (c->a[4] + 0x2636u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1C69E:
    /* 0001c69e   8  cmpi.l #69,(2636,A4) */
    c->pc = RC_ADDR(0x0001c69eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2636u));
    rc_cmp(c, RC_L, t0, 0x00000069u);

L_1C6A6:
    /* 0001c6a6   2  ble 0001c6be */
    c->pc = RC_ADDR(0x0001c6a6u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_1C6BE;

L_1C6A8:
    /* 0001c6a8   8  move.l #69,(2636,A4) */
    c->pc = RC_ADDR(0x0001c6a8u);
    rc_step(c, m);
    t0 = 0x00000069u;
    rc_wr32(c, m, (c->a[4] + 0x2636u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C6B0:
    /* 0001c6b0   4  tst.w (2278,A4) */
    c->pc = RC_ADDR(0x0001c6b0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2278u));
    rc_set_nzvc(c, t0, RC_W);

L_1C6B4:
    /* 0001c6b4   2  beq 0001c6bc */
    c->pc = RC_ADDR(0x0001c6b4u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_1C6BC;

L_1C6B6:
    /* 0001c6b6   6  move.w #1,(264a,A4) */
    c->pc = RC_ADDR(0x0001c6b6u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x264au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C6BC:
    /* 0001c6bc   2  bra 0001c6d6 */
    c->pc = RC_ADDR(0x0001c6bcu);
    rc_step(c, m);
    goto L_1C6D6;

L_1C6BE:
    /* 0001c6be   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001c6beu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C6C2:
    /* 0001c6c2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c6c2u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1C6C4:
    /* 0001c6c4   4  sub.l D0,(2632,A4) */
    c->pc = RC_ADDR(0x0001c6c4u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x2632u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1C6C8:
    /* 0001c6c8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001c6c8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C6CC:
    /* 0001c6cc   4  muls.w #5,D0 */
    c->pc = RC_ADDR(0x0001c6ccu);
    rc_step(c, m);
    t0 = 0x00000005u;
    rc_muls(c, 0, t0);

L_1C6D0:
    /* 0001c6d0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c6d0u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_1C6D2:
    /* 0001c6d2   4  sub.l D0,(2642,A4) */
    c->pc = RC_ADDR(0x0001c6d2u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x2642u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_1C6D6:
    /* 0001c6d6   4  tst.l (2632,A4) */
    c->pc = RC_ADDR(0x0001c6d6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2632u));
    rc_set_nzvc(c, t0, RC_L);

L_1C6DA:
    /* 0001c6da   2  bge 0001c6e0 */
    c->pc = RC_ADDR(0x0001c6dau);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_1C6E0;

L_1C6DC:
    /* 0001c6dc   4  clr.l (2632,A4) */
    c->pc = RC_ADDR(0x0001c6dcu);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] + 0x2632u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1C6E0:
    /* 0001c6e0   4  tst.l (2636,A4) */
    c->pc = RC_ADDR(0x0001c6e0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2636u));
    rc_set_nzvc(c, t0, RC_L);

L_1C6E4:
    /* 0001c6e4   2  bge 0001c6ea */
    c->pc = RC_ADDR(0x0001c6e4u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_1C6EA;

L_1C6E6:
    /* 0001c6e6   4  clr.l (2636,A4) */
    c->pc = RC_ADDR(0x0001c6e6u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] + 0x2636u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1C6EA:
    /* 0001c6ea   2  bra 0001c6f2 */
    c->pc = RC_ADDR(0x0001c6eau);
    rc_step(c, m);
    goto L_1C6F2;

L_1C6EC:
    /* 0001c6ec   6  move.w #1,(262e,A4) */
    c->pc = RC_ADDR(0x0001c6ecu);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x262eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C6F2:
    /* 0001c6f2   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x0001c6f2u);
    rc_step(c, m);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x0001c6f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021e00u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021948u);
    return;

L_1C6F6:
    /* 0001c6f6   4  pea (0000001c).l */
    c->pc = RC_ADDR(0x0001c6f6u);
    rc_step(c, m);
    rc_push32(c, m, 0x0000001cu);

L_1C6FA:
    /* 0001c6fa   4  pea (23b2,A4) */
    c->pc = RC_ADDR(0x0001c6fau);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23b2u));

L_1C6FE:
    /* 0001c6fe   4  jsr (ffff838c,A4) */
    c->pc = RC_ADDR(0x0001c6feu);
    rc_step(c, m);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x0001c702u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021de2u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218eau);
    return;

L_1C702:
    /* 0001c702   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001c702u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1C704:
    /* 0001c704   4  pea (00000001).l */
    c->pc = RC_ADDR(0x0001c704u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000001u);

L_1C708:
    /* 0001c708   4  move.l (2646,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c708u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2646u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C70C:
    /* 0001c70c   4  pea (23b2,A4) */
    c->pc = RC_ADDR(0x0001c70cu);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23b2u));

L_1C710:
    /* 0001c710   4  jsr (00021794) */
    c->pc = RC_ADDR(0x0001c710u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c714u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021794u);
    return;

L_1C714:
    /* 0001c714   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001c714u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_1C718:
    /* 0001c718   4  move.l (2632,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c718u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2632u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C71C:
    /* 0001c71c   4  move.l (263a,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c71cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x263au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C720:
    /* 0001c720   4  pea (23b2,A4) */
    c->pc = RC_ADDR(0x0001c720u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23b2u));

L_1C724:
    /* 0001c724   4  jsr (00021776) */
    c->pc = RC_ADDR(0x0001c724u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c728u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021776u);
    return;

L_1C728:
    /* 0001c728   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001c728u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_1C72C:
    /* 0001c72c   4  pea (0000006f).l */
    c->pc = RC_ADDR(0x0001c72cu);
    rc_step(c, m);
    rc_push32(c, m, 0x0000006fu);

L_1C730:
    /* 0001c730   4  move.l (263a,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c730u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x263au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C734:
    /* 0001c734   4  pea (23b2,A4) */
    c->pc = RC_ADDR(0x0001c734u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23b2u));

L_1C738:
    /* 0001c738   4  jsr (00021776) */
    c->pc = RC_ADDR(0x0001c738u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c73cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021776u);
    return;

L_1C73C:
    /* 0001c73c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001c73cu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_1C740:
    /* 0001c740   4  pea (0000006f).l */
    c->pc = RC_ADDR(0x0001c740u);
    rc_step(c, m);
    rc_push32(c, m, 0x0000006fu);

L_1C744:
    /* 0001c744   4  move.l (263e,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c744u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x263eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C748:
    /* 0001c748   4  pea (23b2,A4) */
    c->pc = RC_ADDR(0x0001c748u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23b2u));

L_1C74C:
    /* 0001c74c   4  jsr (00021776) */
    c->pc = RC_ADDR(0x0001c74cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c750u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021776u);
    return;

L_1C750:
    /* 0001c750   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001c750u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_1C754:
    /* 0001c754   4  move.l (2636,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c754u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2636u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C758:
    /* 0001c758   4  move.l (263e,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c758u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x263eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C75C:
    /* 0001c75c   4  pea (23b2,A4) */
    c->pc = RC_ADDR(0x0001c75cu);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23b2u));

L_1C760:
    /* 0001c760   4  jsr (00021776) */
    c->pc = RC_ADDR(0x0001c760u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c764u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021776u);
    return;

L_1C764:
    /* 0001c764   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001c764u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_1C768:
    /* 0001c768   4  pea (23b2,A4) */
    c->pc = RC_ADDR(0x0001c768u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23b2u));

L_1C76C:
    /* 0001c76c   4  jsr (00021788) */
    c->pc = RC_ADDR(0x0001c76cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c770u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021788u);
    return;

L_1C770:
    /* 0001c770   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001c770u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1C772:
    /* 0001c772   4  pea (0000001e).l */
    c->pc = RC_ADDR(0x0001c772u);
    rc_step(c, m);
    rc_push32(c, m, 0x0000001eu);

L_1C776:
    /* 0001c776   4  pea (23b2,A4) */
    c->pc = RC_ADDR(0x0001c776u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23b2u));

L_1C77A:
    /* 0001c77a   4  jsr (ffff838c,A4) */
    c->pc = RC_ADDR(0x0001c77au);
    rc_step(c, m);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x0001c77eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021de2u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218eau);
    return;

L_1C77E:
    /* 0001c77e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001c77eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1C780:
    /* 0001c780   4  pea (00000001).l */
    c->pc = RC_ADDR(0x0001c780u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000001u);

L_1C784:
    /* 0001c784   4  move.l (2646,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c784u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2646u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C788:
    /* 0001c788   4  pea (23b2,A4) */
    c->pc = RC_ADDR(0x0001c788u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23b2u));

L_1C78C:
    /* 0001c78c   4  jsr (00021794) */
    c->pc = RC_ADDR(0x0001c78cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c790u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021794u);
    return;

L_1C790:
    /* 0001c790   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001c790u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_1C794:
    /* 0001c794   4  pea (0000006f).l */
    c->pc = RC_ADDR(0x0001c794u);
    rc_step(c, m);
    rc_push32(c, m, 0x0000006fu);

L_1C798:
    /* 0001c798   4  move.l (2642,A4),-(A7) */
    c->pc = RC_ADDR(0x0001c798u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2642u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C79C:
    /* 0001c79c   4  pea (23b2,A4) */
    c->pc = RC_ADDR(0x0001c79cu);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23b2u));

L_1C7A0:
    /* 0001c7a0   4  jsr (00021776) */
    c->pc = RC_ADDR(0x0001c7a0u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c7a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021776u);
    return;

L_1C7A4:
    /* 0001c7a4   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001c7a4u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_1C7A8:
    /* 0001c7a8   4  pea (0000006f).l */
    c->pc = RC_ADDR(0x0001c7a8u);
    rc_step(c, m);
    rc_push32(c, m, 0x0000006fu);

L_1C7AC:
    /* 0001c7ac   4  move.l (2642,A4),D0 */
    c->pc = RC_ADDR(0x0001c7acu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2642u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C7B0:
    /* 0001c7b0   2  addq.l #4,D0 */
    c->pc = RC_ADDR(0x0001c7b0u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1C7B2:
    /* 0001c7b2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001c7b2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C7B4:
    /* 0001c7b4   4  pea (23b2,A4) */
    c->pc = RC_ADDR(0x0001c7b4u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23b2u));

L_1C7B8:
    /* 0001c7b8   4  jsr (00021776) */
    c->pc = RC_ADDR(0x0001c7b8u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c7bcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021776u);
    return;

L_1C7BC:
    /* 0001c7bc   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001c7bcu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_1C7C0:
    /* 0001c7c0   4  pea (23b2,A4) */
    c->pc = RC_ADDR(0x0001c7c0u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] + 0x23b2u));

L_1C7C4:
    /* 0001c7c4   4  jsr (00021788) */
    c->pc = RC_ADDR(0x0001c7c4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0001c7c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021788u);
    return;

L_1C7C8:
    /* 0001c7c8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001c7c8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1C7CA:
    /* 0001c7ca   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x0001c7cau);
    rc_step(c, m);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x0001c7ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021e00u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021948u);
    return;

L_1C7CE:
    /* 0001c7ce   4  bra 0001c5b4 */
    c->pc = RC_ADDR(0x0001c7ceu);
    rc_step(c, m);
    rc_tick();
    goto L_1C5B4;

}
