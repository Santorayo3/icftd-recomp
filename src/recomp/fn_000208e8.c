/* fn_000208e8 - 44 byte(s), 18 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000208e8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000208e8u): goto L_208E8;
    case RC_ADDR(0x000208ecu): goto L_208EC;
    case RC_ADDR(0x000208f2u): goto L_208F2;
    case RC_ADDR(0x000208f4u): goto L_208F4;
    case RC_ADDR(0x000208f6u): goto L_208F6;
    case RC_ADDR(0x000208fau): goto L_208FA;
    case RC_ADDR(0x000208feu): goto L_208FE;
    case RC_ADDR(0x00020900u): goto L_20900;
    case RC_ADDR(0x00020902u): goto L_20902;
    case RC_ADDR(0x00020904u): goto L_20904;
    case RC_ADDR(0x00020906u): goto L_20906;
    case RC_ADDR(0x0002090au): goto L_2090A;
    case RC_ADDR(0x0002090cu): goto L_2090C;
    case RC_ADDR(0x0002090eu): goto L_2090E;
    case RC_ADDR(0x00020910u): goto L_20910;
    case RC_ADDR(0x00020912u): goto L_20912;
    case RC_ADDR(0x00020914u): goto L_20914;
    case RC_ADDR(0x00020916u): goto L_20916;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_208E8:
    /* 000208e8   4  move.w #7fff,D0 */
    c->pc = RC_ADDR(0x000208e8u);
    rc_step(c, m, 8);
    t0 = 0x00007fffu;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_208EC:
    /* 000208ec   2  bra 000208f2 */
    c->pc = RC_ADDR(0x000208ecu);
    rc_step(c, m, 10);
    goto L_208F2;

L_208F2:
    /* 000208f2   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x000208f2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_208F4:
    /* 000208f4   2  bmi 0002090a */
    c->pc = RC_ADDR(0x000208f4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 11)) goto L_2090A;

L_208F6:
    /* 000208f6   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x000208f6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_208FA:
    /* 000208fa   4  movea.l (8,A7),A1 */
    c->pc = RC_ADDR(0x000208fau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    c->a[1] = t0;

L_208FE:
    /* 000208fe   2  cmpm.b (A1)+,(A0)+ */
    c->pc = RC_ADDR(0x000208feu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    c->a[0] += 1u;
    t1 = rc_rd8(c, m, c->a[1]);
    c->a[1] += 1u;
    rc_cmp(c, RC_B, t0, t1);

L_20900:
    /* 00020900   2  bne 0002090e */
    c->pc = RC_ADDR(0x00020900u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2090E;

L_20902:
    /* 00020902   2  subq.w #1,A0 */
    c->pc = RC_ADDR(0x00020902u);
    rc_step(c, m, 8);
    c->a[0] -= rc_ext(0x00000001u, RC_W);

L_20904:
    /* 00020904   2  tst.b (A0)+ */
    c->pc = RC_ADDR(0x00020904u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_set_nzvc(c, t0, RC_B);

L_20906:
    /* 00020906   4  dbeq D0,000208fe */
    c->pc = RC_ADDR(0x00020906u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 7)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_208FE; }
    }

L_2090A:
    /* 0002090a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0002090au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2090C:
    /* 0002090c   2  rts */
    c->pc = RC_ADDR(0x0002090cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_2090E:
    /* 0002090e   2  bls 00020914 */
    c->pc = RC_ADDR(0x0002090eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_20914;

L_20910:
    /* 00020910   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00020910u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20912:
    /* 00020912   2  rts */
    c->pc = RC_ADDR(0x00020912u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_20914:
    /* 00020914   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00020914u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20916:
    /* 00020916   2  rts */
    c->pc = RC_ADDR(0x00020916u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
