/* fn_0000b97c - 354 byte(s), 103 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b97c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b97cu): goto L_B97C;
    case RC_ADDR(0x0000b980u): goto L_B980;
    case RC_ADDR(0x0000b984u): goto L_B984;
    case RC_ADDR(0x0000b986u): goto L_B986;
    case RC_ADDR(0x0000b98cu): goto L_B98C;
    case RC_ADDR(0x0000b98eu): goto L_B98E;
    case RC_ADDR(0x0000b992u): goto L_B992;
    case RC_ADDR(0x0000b994u): goto L_B994;
    case RC_ADDR(0x0000b998u): goto L_B998;
    case RC_ADDR(0x0000b99au): goto L_B99A;
    case RC_ADDR(0x0000b99eu): goto L_B99E;
    case RC_ADDR(0x0000b9a0u): goto L_B9A0;
    case RC_ADDR(0x0000b9a4u): goto L_B9A4;
    case RC_ADDR(0x0000b9a8u): goto L_B9A8;
    case RC_ADDR(0x0000b9aau): goto L_B9AA;
    case RC_ADDR(0x0000b9b0u): goto L_B9B0;
    case RC_ADDR(0x0000b9b2u): goto L_B9B2;
    case RC_ADDR(0x0000b9b6u): goto L_B9B6;
    case RC_ADDR(0x0000b9b8u): goto L_B9B8;
    case RC_ADDR(0x0000b9bcu): goto L_B9BC;
    case RC_ADDR(0x0000b9beu): goto L_B9BE;
    case RC_ADDR(0x0000b9c2u): goto L_B9C2;
    case RC_ADDR(0x0000b9c4u): goto L_B9C4;
    case RC_ADDR(0x0000b9c8u): goto L_B9C8;
    case RC_ADDR(0x0000b9ccu): goto L_B9CC;
    case RC_ADDR(0x0000b9ceu): goto L_B9CE;
    case RC_ADDR(0x0000b9d4u): goto L_B9D4;
    case RC_ADDR(0x0000b9d6u): goto L_B9D6;
    case RC_ADDR(0x0000b9dau): goto L_B9DA;
    case RC_ADDR(0x0000b9dcu): goto L_B9DC;
    case RC_ADDR(0x0000b9e0u): goto L_B9E0;
    case RC_ADDR(0x0000b9e2u): goto L_B9E2;
    case RC_ADDR(0x0000b9e6u): goto L_B9E6;
    case RC_ADDR(0x0000b9e8u): goto L_B9E8;
    case RC_ADDR(0x0000b9ecu): goto L_B9EC;
    case RC_ADDR(0x0000b9f0u): goto L_B9F0;
    case RC_ADDR(0x0000b9f2u): goto L_B9F2;
    case RC_ADDR(0x0000b9f8u): goto L_B9F8;
    case RC_ADDR(0x0000b9fau): goto L_B9FA;
    case RC_ADDR(0x0000b9feu): goto L_B9FE;
    case RC_ADDR(0x0000ba00u): goto L_BA00;
    case RC_ADDR(0x0000ba04u): goto L_BA04;
    case RC_ADDR(0x0000ba06u): goto L_BA06;
    case RC_ADDR(0x0000ba0au): goto L_BA0A;
    case RC_ADDR(0x0000ba0cu): goto L_BA0C;
    case RC_ADDR(0x0000ba10u): goto L_BA10;
    case RC_ADDR(0x0000ba14u): goto L_BA14;
    case RC_ADDR(0x0000ba16u): goto L_BA16;
    case RC_ADDR(0x0000ba1au): goto L_BA1A;
    case RC_ADDR(0x0000ba1cu): goto L_BA1C;
    case RC_ADDR(0x0000ba20u): goto L_BA20;
    case RC_ADDR(0x0000ba22u): goto L_BA22;
    case RC_ADDR(0x0000ba26u): goto L_BA26;
    case RC_ADDR(0x0000ba28u): goto L_BA28;
    case RC_ADDR(0x0000ba2cu): goto L_BA2C;
    case RC_ADDR(0x0000ba30u): goto L_BA30;
    case RC_ADDR(0x0000ba32u): goto L_BA32;
    case RC_ADDR(0x0000ba36u): goto L_BA36;
    case RC_ADDR(0x0000ba38u): goto L_BA38;
    case RC_ADDR(0x0000ba3cu): goto L_BA3C;
    case RC_ADDR(0x0000ba3eu): goto L_BA3E;
    case RC_ADDR(0x0000ba42u): goto L_BA42;
    case RC_ADDR(0x0000ba46u): goto L_BA46;
    case RC_ADDR(0x0000ba48u): goto L_BA48;
    case RC_ADDR(0x0000ba4cu): goto L_BA4C;
    case RC_ADDR(0x0000ba4eu): goto L_BA4E;
    case RC_ADDR(0x0000ba52u): goto L_BA52;
    case RC_ADDR(0x0000ba54u): goto L_BA54;
    case RC_ADDR(0x0000ba58u): goto L_BA58;
    case RC_ADDR(0x0000ba5au): goto L_BA5A;
    case RC_ADDR(0x0000ba5eu): goto L_BA5E;
    case RC_ADDR(0x0000ba62u): goto L_BA62;
    case RC_ADDR(0x0000ba64u): goto L_BA64;
    case RC_ADDR(0x0000ba68u): goto L_BA68;
    case RC_ADDR(0x0000ba6au): goto L_BA6A;
    case RC_ADDR(0x0000ba6eu): goto L_BA6E;
    case RC_ADDR(0x0000ba70u): goto L_BA70;
    case RC_ADDR(0x0000ba74u): goto L_BA74;
    case RC_ADDR(0x0000ba7au): goto L_BA7A;
    case RC_ADDR(0x0000ba7cu): goto L_BA7C;
    case RC_ADDR(0x0000ba82u): goto L_BA82;
    case RC_ADDR(0x0000ba88u): goto L_BA88;
    case RC_ADDR(0x0000ba8au): goto L_BA8A;
    case RC_ADDR(0x0000ba90u): goto L_BA90;
    case RC_ADDR(0x0000ba96u): goto L_BA96;
    case RC_ADDR(0x0000ba98u): goto L_BA98;
    case RC_ADDR(0x0000ba9eu): goto L_BA9E;
    case RC_ADDR(0x0000baa4u): goto L_BAA4;
    case RC_ADDR(0x0000baa6u): goto L_BAA6;
    case RC_ADDR(0x0000baacu): goto L_BAAC;
    case RC_ADDR(0x0000bab0u): goto L_BAB0;
    case RC_ADDR(0x0000bab4u): goto L_BAB4;
    case RC_ADDR(0x0000bab8u): goto L_BAB8;
    case RC_ADDR(0x0000babcu): goto L_BABC;
    case RC_ADDR(0x0000bac0u): goto L_BAC0;
    case RC_ADDR(0x0000bac4u): goto L_BAC4;
    case RC_ADDR(0x0000bac8u): goto L_BAC8;
    case RC_ADDR(0x0000bacau): goto L_BACA;
    case RC_ADDR(0x0000baceu): goto L_BACE;
    case RC_ADDR(0x0000bad2u): goto L_BAD2;
    case RC_ADDR(0x0000bad6u): goto L_BAD6;
    case RC_ADDR(0x0000badau): goto L_BADA;
    case RC_ADDR(0x0000badcu): goto L_BADC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B97C:
    /* 0000b97c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000b97cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B980:
    /* 0000b980   4  tst.w (ffffb02a,A4) */
    c->pc = RC_ADDR(0x0000b980u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_set_nzvc(c, t0, RC_W);

L_B984:
    /* 0000b984   2  ble 0000b9a4 */
    c->pc = RC_ADDR(0x0000b984u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_B9A4;

L_B986:
    /* 0000b986   6  cmpi.w #12c,(8a,A4) */
    c->pc = RC_ADDR(0x0000b986u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8au));
    rc_cmp(c, RC_W, t0, 0x0000012cu);

L_B98C:
    /* 0000b98c   2  bge 0000b994 */
    c->pc = RC_ADDR(0x0000b98cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_B994;

L_B98E:
    /* 0000b98e   4  addq.w #2,(8e,A4) */
    c->pc = RC_ADDR(0x0000b98eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_B992:
    /* 0000b992   2  bra 0000b9a4 */
    c->pc = RC_ADDR(0x0000b992u);
    rc_step(c, m, 10);
    goto L_B9A4;

L_B994:
    /* 0000b994   4  move.w (8e,A4),D0 */
    c->pc = RC_ADDR(0x0000b994u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B998:
    /* 0000b998   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000b998u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_B99A:
    /* 0000b99a   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x0000b99au);
    rc_step(c, m, 162);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_B99E:
    /* 0000b99e   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000b99eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_B9A0:
    /* 0000b9a0   4  sub.w D0,(8e,A4) */
    c->pc = RC_ADDR(0x0000b9a0u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_B9A4:
    /* 0000b9a4   4  tst.w (ffffb02a,A4) */
    c->pc = RC_ADDR(0x0000b9a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_set_nzvc(c, t0, RC_W);

L_B9A8:
    /* 0000b9a8   2  bge 0000b9c8 */
    c->pc = RC_ADDR(0x0000b9a8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_B9C8;

L_B9AA:
    /* 0000b9aa   6  cmpi.w #28,(8a,A4) */
    c->pc = RC_ADDR(0x0000b9aau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8au));
    rc_cmp(c, RC_W, t0, 0x00000028u);

L_B9B0:
    /* 0000b9b0   2  ble 0000b9b8 */
    c->pc = RC_ADDR(0x0000b9b0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_B9B8;

L_B9B2:
    /* 0000b9b2   4  subq.w #2,(8e,A4) */
    c->pc = RC_ADDR(0x0000b9b2u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_B9B6:
    /* 0000b9b6   2  bra 0000b9c8 */
    c->pc = RC_ADDR(0x0000b9b6u);
    rc_step(c, m, 10);
    goto L_B9C8;

L_B9B8:
    /* 0000b9b8   4  move.w (8e,A4),D0 */
    c->pc = RC_ADDR(0x0000b9b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B9BC:
    /* 0000b9bc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000b9bcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_B9BE:
    /* 0000b9be   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x0000b9beu);
    rc_step(c, m, 162);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_B9C2:
    /* 0000b9c2   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000b9c2u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_B9C4:
    /* 0000b9c4   4  sub.w D0,(8e,A4) */
    c->pc = RC_ADDR(0x0000b9c4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_B9C8:
    /* 0000b9c8   4  tst.w (ffffb02c,A4) */
    c->pc = RC_ADDR(0x0000b9c8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_set_nzvc(c, t0, RC_W);

L_B9CC:
    /* 0000b9cc   2  ble 0000b9ec */
    c->pc = RC_ADDR(0x0000b9ccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_B9EC;

L_B9CE:
    /* 0000b9ce   6  cmpi.w #f0,(8c,A4) */
    c->pc = RC_ADDR(0x0000b9ceu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8cu));
    rc_cmp(c, RC_W, t0, 0x000000f0u);

L_B9D4:
    /* 0000b9d4   2  bge 0000b9dc */
    c->pc = RC_ADDR(0x0000b9d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_B9DC;

L_B9D6:
    /* 0000b9d6   4  addq.w #2,(90,A4) */
    c->pc = RC_ADDR(0x0000b9d6u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_B9DA:
    /* 0000b9da   2  bra 0000b9ec */
    c->pc = RC_ADDR(0x0000b9dau);
    rc_step(c, m, 10);
    goto L_B9EC;

L_B9DC:
    /* 0000b9dc   4  move.w (90,A4),D0 */
    c->pc = RC_ADDR(0x0000b9dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B9E0:
    /* 0000b9e0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000b9e0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_B9E2:
    /* 0000b9e2   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x0000b9e2u);
    rc_step(c, m, 162);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_B9E6:
    /* 0000b9e6   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000b9e6u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_B9E8:
    /* 0000b9e8   4  sub.w D0,(90,A4) */
    c->pc = RC_ADDR(0x0000b9e8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_B9EC:
    /* 0000b9ec   4  tst.w (ffffb02c,A4) */
    c->pc = RC_ADDR(0x0000b9ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_set_nzvc(c, t0, RC_W);

L_B9F0:
    /* 0000b9f0   2  bge 0000ba10 */
    c->pc = RC_ADDR(0x0000b9f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_BA10;

L_B9F2:
    /* 0000b9f2   6  cmpi.w #a5,(8c,A4) */
    c->pc = RC_ADDR(0x0000b9f2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8cu));
    rc_cmp(c, RC_W, t0, 0x000000a5u);

L_B9F8:
    /* 0000b9f8   2  ble 0000ba00 */
    c->pc = RC_ADDR(0x0000b9f8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_BA00;

L_B9FA:
    /* 0000b9fa   4  subq.w #2,(90,A4) */
    c->pc = RC_ADDR(0x0000b9fau);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_B9FE:
    /* 0000b9fe   2  bra 0000ba10 */
    c->pc = RC_ADDR(0x0000b9feu);
    rc_step(c, m, 10);
    goto L_BA10;

L_BA00:
    /* 0000ba00   4  move.w (90,A4),D0 */
    c->pc = RC_ADDR(0x0000ba00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA04:
    /* 0000ba04   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ba04u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BA06:
    /* 0000ba06   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x0000ba06u);
    rc_step(c, m, 162);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_BA0A:
    /* 0000ba0a   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000ba0au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_BA0C:
    /* 0000ba0c   4  sub.w D0,(90,A4) */
    c->pc = RC_ADDR(0x0000ba0cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_BA10:
    /* 0000ba10   4  tst.w (ffffb02a,A4) */
    c->pc = RC_ADDR(0x0000ba10u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd6u));
    rc_set_nzvc(c, t0, RC_W);

L_BA14:
    /* 0000ba14   2  bne 0000ba42 */
    c->pc = RC_ADDR(0x0000ba14u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_BA42;

L_BA16:
    /* 0000ba16   4  tst.w (8e,A4) */
    c->pc = RC_ADDR(0x0000ba16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_set_nzvc(c, t0, RC_W);

L_BA1A:
    /* 0000ba1a   2  ble 0000ba2c */
    c->pc = RC_ADDR(0x0000ba1au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_BA2C;

L_BA1C:
    /* 0000ba1c   4  move.w (8e,A4),D0 */
    c->pc = RC_ADDR(0x0000ba1cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA20:
    /* 0000ba20   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ba20u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BA22:
    /* 0000ba22   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x0000ba22u);
    rc_step(c, m, 162);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_BA26:
    /* 0000ba26   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000ba26u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_BA28:
    /* 0000ba28   4  sub.w D0,(8e,A4) */
    c->pc = RC_ADDR(0x0000ba28u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_BA2C:
    /* 0000ba2c   4  tst.w (8e,A4) */
    c->pc = RC_ADDR(0x0000ba2cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_set_nzvc(c, t0, RC_W);

L_BA30:
    /* 0000ba30   2  bge 0000ba42 */
    c->pc = RC_ADDR(0x0000ba30u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_BA42;

L_BA32:
    /* 0000ba32   4  move.w (8e,A4),D0 */
    c->pc = RC_ADDR(0x0000ba32u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA36:
    /* 0000ba36   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ba36u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BA38:
    /* 0000ba38   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x0000ba38u);
    rc_step(c, m, 162);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_BA3C:
    /* 0000ba3c   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000ba3cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_BA3E:
    /* 0000ba3e   4  sub.w D0,(8e,A4) */
    c->pc = RC_ADDR(0x0000ba3eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x8eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_BA42:
    /* 0000ba42   4  tst.w (ffffb02c,A4) */
    c->pc = RC_ADDR(0x0000ba42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd4u));
    rc_set_nzvc(c, t0, RC_W);

L_BA46:
    /* 0000ba46   2  bne 0000ba74 */
    c->pc = RC_ADDR(0x0000ba46u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_BA74;

L_BA48:
    /* 0000ba48   4  tst.w (90,A4) */
    c->pc = RC_ADDR(0x0000ba48u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_set_nzvc(c, t0, RC_W);

L_BA4C:
    /* 0000ba4c   2  ble 0000ba5e */
    c->pc = RC_ADDR(0x0000ba4cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_BA5E;

L_BA4E:
    /* 0000ba4e   4  move.w (90,A4),D0 */
    c->pc = RC_ADDR(0x0000ba4eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA52:
    /* 0000ba52   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ba52u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BA54:
    /* 0000ba54   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x0000ba54u);
    rc_step(c, m, 162);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_BA58:
    /* 0000ba58   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000ba58u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_BA5A:
    /* 0000ba5a   4  sub.w D0,(90,A4) */
    c->pc = RC_ADDR(0x0000ba5au);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_BA5E:
    /* 0000ba5e   4  tst.w (90,A4) */
    c->pc = RC_ADDR(0x0000ba5eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_set_nzvc(c, t0, RC_W);

L_BA62:
    /* 0000ba62   2  bge 0000ba74 */
    c->pc = RC_ADDR(0x0000ba62u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_BA74;

L_BA64:
    /* 0000ba64   4  move.w (90,A4),D0 */
    c->pc = RC_ADDR(0x0000ba64u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA68:
    /* 0000ba68   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ba68u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BA6A:
    /* 0000ba6a   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x0000ba6au);
    rc_step(c, m, 162);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_BA6E:
    /* 0000ba6e   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000ba6eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_BA70:
    /* 0000ba70   4  sub.w D0,(90,A4) */
    c->pc = RC_ADDR(0x0000ba70u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x90u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_BA74:
    /* 0000ba74   6  cmpi.w #fff8,(8e,A4) */
    c->pc = RC_ADDR(0x0000ba74u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_cmp(c, RC_W, t0, 0x0000fff8u);

L_BA7A:
    /* 0000ba7a   2  bge 0000ba82 */
    c->pc = RC_ADDR(0x0000ba7au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_BA82;

L_BA7C:
    /* 0000ba7c   6  move.w #fff8,(8e,A4) */
    c->pc = RC_ADDR(0x0000ba7cu);
    rc_step(c, m, 16);
    t0 = 0x0000fff8u;
    rc_wr16(c, m, (c->a[4] + 0x8eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA82:
    /* 0000ba82   6  cmpi.w #8,(8e,A4) */
    c->pc = RC_ADDR(0x0000ba82u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_BA88:
    /* 0000ba88   2  ble 0000ba90 */
    c->pc = RC_ADDR(0x0000ba88u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_BA90;

L_BA8A:
    /* 0000ba8a   6  move.w #8,(8e,A4) */
    c->pc = RC_ADDR(0x0000ba8au);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0x8eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA90:
    /* 0000ba90   6  cmpi.w #fff8,(90,A4) */
    c->pc = RC_ADDR(0x0000ba90u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_cmp(c, RC_W, t0, 0x0000fff8u);

L_BA96:
    /* 0000ba96   2  bge 0000ba9e */
    c->pc = RC_ADDR(0x0000ba96u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_BA9E;

L_BA98:
    /* 0000ba98   6  move.w #fff8,(90,A4) */
    c->pc = RC_ADDR(0x0000ba98u);
    rc_step(c, m, 16);
    t0 = 0x0000fff8u;
    rc_wr16(c, m, (c->a[4] + 0x90u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BA9E:
    /* 0000ba9e   6  cmpi.w #8,(90,A4) */
    c->pc = RC_ADDR(0x0000ba9eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_BAA4:
    /* 0000baa4   2  ble 0000baac */
    c->pc = RC_ADDR(0x0000baa4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_BAAC;

L_BAA6:
    /* 0000baa6   6  move.w #8,(90,A4) */
    c->pc = RC_ADDR(0x0000baa6u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0x90u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BAAC:
    /* 0000baac   4  move.w (8e,A4),D0 */
    c->pc = RC_ADDR(0x0000baacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BAB0:
    /* 0000bab0   4  add.w D0,(8a,A4) */
    c->pc = RC_ADDR(0x0000bab0u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x8au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_BAB4:
    /* 0000bab4   4  move.w (90,A4),D0 */
    c->pc = RC_ADDR(0x0000bab4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x90u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BAB8:
    /* 0000bab8   4  add.w D0,(8c,A4) */
    c->pc = RC_ADDR(0x0000bab8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x8cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_BABC:
    /* 0000babc   4  move.w #1e,-(A7) */
    c->pc = RC_ADDR(0x0000babcu);
    rc_step(c, m, 12);
    t0 = 0x0000001eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BAC0:
    /* 0000bac0   4  move.w (8c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000bac0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8cu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BAC4:
    /* 0000bac4   4  move.w (8a,A4),-(A7) */
    c->pc = RC_ADDR(0x0000bac4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x8au));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BAC8:
    /* 0000bac8   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000bac8u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_BACA:
    /* 0000baca   4  move.l (80,A4),-(A7) */
    c->pc = RC_ADDR(0x0000bacau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x80u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BACE:
    /* 0000bace   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000baceu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_BAD2:
    /* 0000bad2   4  jsr (ffff8272,A4) */
    c->pc = RC_ADDR(0x0000bad2u);
    rc_step(c, m, 18);
    /* vector 104 */
    rc_push32(c, m, RC_ADDR(0x0000bad6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f914u);
    return;

L_BAD6:
    /* 0000bad6   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000bad6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_BADA:
    /* 0000bada   2  unlk A5 */
    c->pc = RC_ADDR(0x0000badau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_BADC:
    /* 0000badc   2  rts */
    c->pc = RC_ADDR(0x0000badcu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
