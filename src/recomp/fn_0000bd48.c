/* fn_0000bd48 - 140 byte(s), 43 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000bd48(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case 0x0000bd48u: goto L_BD48;
    case 0x0000bd4cu: goto L_BD4C;
    case 0x0000bd50u: goto L_BD50;
    case 0x0000bd54u: goto L_BD54;
    case 0x0000bd58u: goto L_BD58;
    case 0x0000bd5au: goto L_BD5A;
    case 0x0000bd5eu: goto L_BD5E;
    case 0x0000bd62u: goto L_BD62;
    case 0x0000bd64u: goto L_BD64;
    case 0x0000bd68u: goto L_BD68;
    case 0x0000bd6cu: goto L_BD6C;
    case 0x0000bd70u: goto L_BD70;
    case 0x0000bd72u: goto L_BD72;
    case 0x0000bd76u: goto L_BD76;
    case 0x0000bd7au: goto L_BD7A;
    case 0x0000bd7cu: goto L_BD7C;
    case 0x0000bd80u: goto L_BD80;
    case 0x0000bd84u: goto L_BD84;
    case 0x0000bd88u: goto L_BD88;
    case 0x0000bd8au: goto L_BD8A;
    case 0x0000bd8eu: goto L_BD8E;
    case 0x0000bd92u: goto L_BD92;
    case 0x0000bd94u: goto L_BD94;
    case 0x0000bd98u: goto L_BD98;
    case 0x0000bd9cu: goto L_BD9C;
    case 0x0000bd9eu: goto L_BD9E;
    case 0x0000bda2u: goto L_BDA2;
    case 0x0000bda6u: goto L_BDA6;
    case 0x0000bda8u: goto L_BDA8;
    case 0x0000bdaau: goto L_BDAA;
    case 0x0000bdacu: goto L_BDAC;
    case 0x0000bdb0u: goto L_BDB0;
    case 0x0000bdb4u: goto L_BDB4;
    case 0x0000bdb8u: goto L_BDB8;
    case 0x0000bdbcu: goto L_BDBC;
    case 0x0000bdc0u: goto L_BDC0;
    case 0x0000bdc4u: goto L_BDC4;
    case 0x0000bdc6u: goto L_BDC6;
    case 0x0000bdc8u: goto L_BDC8;
    case 0x0000bdccu: goto L_BDCC;
    case 0x0000bdceu: goto L_BDCE;
    case 0x0000bdd0u: goto L_BDD0;
    case 0x0000bdd2u: goto L_BDD2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_BD48:
    /* 0000bd48   4  link.w A5,#fffffffc */
    c->pc = 0x0000bd48u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_BD4C:
    /* 0000bd4c   4  movem.l { A2 A3 },-(SP) */
    c->pc = 0x0000bd4cu;
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_BD50:
    /* 0000bd50   4  pea (0000bdd4) */
    c->pc = 0x0000bd50u;
    rc_push32(c, m, 0x0000bdd4u);

L_BD54:
    /* 0000bd54   4  jsr (ffff828a,A4) */
    c->pc = 0x0000bd54u;
    /* vector 108 */
    rc_push32(c, m, 0x0000bd58u);
    rc_depth++;
    c->pc = 0x000202c4u;
    return;

L_BD58:
    /* 0000bd58   2  addq.w #4,A7 */
    c->pc = 0x0000bd58u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BD5A:
    /* 0000bd5a   4  pea (0000bde3) */
    c->pc = 0x0000bd5au;
    rc_push32(c, m, 0x0000bde3u);

L_BD5E:
    /* 0000bd5e   4  jsr (ffff8230,A4) */
    c->pc = 0x0000bd5eu;
    /* vector 93 */
    rc_push32(c, m, 0x0000bd62u);
    rc_depth++;
    c->pc = 0x0001de7au;
    return;

L_BD62:
    /* 0000bd62   2  addq.w #4,A7 */
    c->pc = 0x0000bd62u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BD64:
    /* 0000bd64   4  jsr (ffff8050,A4) */
    c->pc = 0x0000bd64u;
    /* vector 13 */
    rc_push32(c, m, 0x0000bd68u);
    rc_depth++;
    c->pc = 0x00003532u;
    return;

L_BD68:
    /* 0000bd68   4  pea (0000bde8) */
    c->pc = 0x0000bd68u;
    rc_push32(c, m, 0x0000bde8u);

L_BD6C:
    /* 0000bd6c   4  jsr (ffff828a,A4) */
    c->pc = 0x0000bd6cu;
    /* vector 108 */
    rc_push32(c, m, 0x0000bd70u);
    rc_depth++;
    c->pc = 0x000202c4u;
    return;

L_BD70:
    /* 0000bd70   2  addq.w #4,A7 */
    c->pc = 0x0000bd70u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BD72:
    /* 0000bd72   4  pea (0000bdf6) */
    c->pc = 0x0000bd72u;
    rc_push32(c, m, 0x0000bdf6u);

L_BD76:
    /* 0000bd76   4  jsr (ffff8200,A4) */
    c->pc = 0x0000bd76u;
    /* vector 85 */
    rc_push32(c, m, 0x0000bd7au);
    rc_depth++;
    c->pc = 0x0001d476u;
    return;

L_BD7A:
    /* 0000bd7a   2  addq.w #4,A7 */
    c->pc = 0x0000bd7au;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BD7C:
    /* 0000bd7c   4  move.l D0,(fffffffc,A5) */
    c->pc = 0x0000bd7cu;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BD80:
    /* 0000bd80   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x0000bd80u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BD84:
    /* 0000bd84   4  jsr (ffff8212,A4) */
    c->pc = 0x0000bd84u;
    /* vector 88 */
    rc_push32(c, m, 0x0000bd88u);
    rc_depth++;
    c->pc = 0x0001d642u;
    return;

L_BD88:
    /* 0000bd88   2  addq.w #4,A7 */
    c->pc = 0x0000bd88u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BD8A:
    /* 0000bd8a   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x0000bd8au;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BD8E:
    /* 0000bd8e   4  jsr (ffff820c,A4) */
    c->pc = 0x0000bd8eu;
    /* vector 87 */
    rc_push32(c, m, 0x0000bd92u);
    rc_depth++;
    c->pc = 0x0001d564u;
    return;

L_BD92:
    /* 0000bd92   2  addq.w #4,A7 */
    c->pc = 0x0000bd92u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BD94:
    /* 0000bd94   4  pea (0000bdfb) */
    c->pc = 0x0000bd94u;
    rc_push32(c, m, 0x0000bdfbu);

L_BD98:
    /* 0000bd98   4  jsr (ffff828a,A4) */
    c->pc = 0x0000bd98u;
    /* vector 108 */
    rc_push32(c, m, 0x0000bd9cu);
    rc_depth++;
    c->pc = 0x000202c4u;
    return;

L_BD9C:
    /* 0000bd9c   2  addq.w #4,A7 */
    c->pc = 0x0000bd9cu;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BD9E:
    /* 0000bd9e   4  pea (0000be08) */
    c->pc = 0x0000bd9eu;
    rc_push32(c, m, 0x0000be08u);

L_BDA2:
    /* 0000bda2   4  jsr (ffff8230,A4) */
    c->pc = 0x0000bda2u;
    /* vector 93 */
    rc_push32(c, m, 0x0000bda6u);
    rc_depth++;
    c->pc = 0x0001de7au;
    return;

L_BDA6:
    /* 0000bda6   2  addq.w #4,A7 */
    c->pc = 0x0000bda6u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BDA8:
    /* 0000bda8   2  tst.l D0 */
    c->pc = 0x0000bda8u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_BDAA:
    /* 0000bdaa   2  beq 0000bdd0 */
    c->pc = 0x0000bdaau;
    if (rc_cond(c, 7)) goto L_BDD0;

L_BDAC:
    /* 0000bdac   4  pea (46c,A4) */
    c->pc = 0x0000bdacu;
    rc_push32(c, m, (c->a[4] + 0x46cu));

L_BDB0:
    /* 0000bdb0   4  pea (46a,A4) */
    c->pc = 0x0000bdb0u;
    rc_push32(c, m, (c->a[4] + 0x46au));

L_BDB4:
    /* 0000bdb4   4  pea (0000be0d) */
    c->pc = 0x0000bdb4u;
    rc_push32(c, m, 0x0000be0du);

L_BDB8:
    /* 0000bdb8   4  jsr (ffff80b0,A4) */
    c->pc = 0x0000bdb8u;
    /* vector 29 */
    rc_push32(c, m, 0x0000bdbcu);
    rc_depth++;
    c->pc = 0x00009984u;
    return;

L_BDBC:
    /* 0000bdbc   4  lea (c,A7),A7 */
    c->pc = 0x0000bdbcu;
    c->a[7] = (c->a[7] + 0xcu);

L_BDC0:
    /* 0000bdc0   4  move.l D0,(466,A4) */
    c->pc = 0x0000bdc0u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x466u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BDC4:
    /* 0000bdc4   2  beq 0000bdd0 */
    c->pc = 0x0000bdc4u;
    if (rc_cond(c, 7)) goto L_BDD0;

L_BDC6:
    /* 0000bdc6   2  moveq #1,D0 */
    c->pc = 0x0000bdc6u;
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_BDC8:
    /* 0000bdc8   4  movem.l (SP)+,{ D4 D5 } */
    c->pc = 0x0000bdc8u;
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_BDCC:
    /* 0000bdcc   2  unlk A5 */
    c->pc = 0x0000bdccu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_BDCE:
    /* 0000bdce   2  rts */
    c->pc = 0x0000bdceu;
    rc_ret(c, m);
    return;

L_BDD0:
    /* 0000bdd0   2  moveq #0,D0 */
    c->pc = 0x0000bdd0u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_BDD2:
    /* 0000bdd2   2  bra 0000bdc8 */
    c->pc = 0x0000bdd2u;
    rc_tick();
    goto L_BDC8;

}
