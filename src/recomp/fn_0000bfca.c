/* fn_0000bfca - 404 byte(s), 105 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000bfca(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000bfcau): goto L_BFCA;
    case RC_ADDR(0x0000bfceu): goto L_BFCE;
    case RC_ADDR(0x0000bfd2u): goto L_BFD2;
    case RC_ADDR(0x0000bfd4u): goto L_BFD4;
    case RC_ADDR(0x0000bfd8u): goto L_BFD8;
    case RC_ADDR(0x0000bfdau): goto L_BFDA;
    case RC_ADDR(0x0000bfdeu): goto L_BFDE;
    case RC_ADDR(0x0000bfe2u): goto L_BFE2;
    case RC_ADDR(0x0000bfe6u): goto L_BFE6;
    case RC_ADDR(0x0000bfeau): goto L_BFEA;
    case RC_ADDR(0x0000bfeeu): goto L_BFEE;
    case RC_ADDR(0x0000bff2u): goto L_BFF2;
    case RC_ADDR(0x0000bff6u): goto L_BFF6;
    case RC_ADDR(0x0000bffau): goto L_BFFA;
    case RC_ADDR(0x0000bffcu): goto L_BFFC;
    case RC_ADDR(0x0000c000u): goto L_C000;
    case RC_ADDR(0x0000c004u): goto L_C004;
    case RC_ADDR(0x0000c008u): goto L_C008;
    case RC_ADDR(0x0000c00cu): goto L_C00C;
    case RC_ADDR(0x0000c010u): goto L_C010;
    case RC_ADDR(0x0000c012u): goto L_C012;
    case RC_ADDR(0x0000c016u): goto L_C016;
    case RC_ADDR(0x0000c01au): goto L_C01A;
    case RC_ADDR(0x0000c01eu): goto L_C01E;
    case RC_ADDR(0x0000c022u): goto L_C022;
    case RC_ADDR(0x0000c026u): goto L_C026;
    case RC_ADDR(0x0000c028u): goto L_C028;
    case RC_ADDR(0x0000c02eu): goto L_C02E;
    case RC_ADDR(0x0000c034u): goto L_C034;
    case RC_ADDR(0x0000c03au): goto L_C03A;
    case RC_ADDR(0x0000c042u): goto L_C042;
    case RC_ADDR(0x0000c048u): goto L_C048;
    case RC_ADDR(0x0000c04eu): goto L_C04E;
    case RC_ADDR(0x0000c052u): goto L_C052;
    case RC_ADDR(0x0000c056u): goto L_C056;
    case RC_ADDR(0x0000c05cu): goto L_C05C;
    case RC_ADDR(0x0000c062u): goto L_C062;
    case RC_ADDR(0x0000c066u): goto L_C066;
    case RC_ADDR(0x0000c068u): goto L_C068;
    case RC_ADDR(0x0000c06au): goto L_C06A;
    case RC_ADDR(0x0000c06eu): goto L_C06E;
    case RC_ADDR(0x0000c072u): goto L_C072;
    case RC_ADDR(0x0000c076u): goto L_C076;
    case RC_ADDR(0x0000c078u): goto L_C078;
    case RC_ADDR(0x0000c07cu): goto L_C07C;
    case RC_ADDR(0x0000c080u): goto L_C080;
    case RC_ADDR(0x0000c084u): goto L_C084;
    case RC_ADDR(0x0000c088u): goto L_C088;
    case RC_ADDR(0x0000c08au): goto L_C08A;
    case RC_ADDR(0x0000c08eu): goto L_C08E;
    case RC_ADDR(0x0000c092u): goto L_C092;
    case RC_ADDR(0x0000c096u): goto L_C096;
    case RC_ADDR(0x0000c09cu): goto L_C09C;
    case RC_ADDR(0x0000c0a2u): goto L_C0A2;
    case RC_ADDR(0x0000c0a6u): goto L_C0A6;
    case RC_ADDR(0x0000c0aau): goto L_C0AA;
    case RC_ADDR(0x0000c0acu): goto L_C0AC;
    case RC_ADDR(0x0000c0aeu): goto L_C0AE;
    case RC_ADDR(0x0000c0b2u): goto L_C0B2;
    case RC_ADDR(0x0000c0b4u): goto L_C0B4;
    case RC_ADDR(0x0000c0b8u): goto L_C0B8;
    case RC_ADDR(0x0000c0bcu): goto L_C0BC;
    case RC_ADDR(0x0000c0beu): goto L_C0BE;
    case RC_ADDR(0x0000c0c2u): goto L_C0C2;
    case RC_ADDR(0x0000c0c6u): goto L_C0C6;
    case RC_ADDR(0x0000c0c8u): goto L_C0C8;
    case RC_ADDR(0x0000c0ccu): goto L_C0CC;
    case RC_ADDR(0x0000c0d0u): goto L_C0D0;
    case RC_ADDR(0x0000c0d4u): goto L_C0D4;
    case RC_ADDR(0x0000c0d8u): goto L_C0D8;
    case RC_ADDR(0x0000c0dcu): goto L_C0DC;
    case RC_ADDR(0x0000c0e0u): goto L_C0E0;
    case RC_ADDR(0x0000c0e4u): goto L_C0E4;
    case RC_ADDR(0x0000c0e8u): goto L_C0E8;
    case RC_ADDR(0x0000c0ecu): goto L_C0EC;
    case RC_ADDR(0x0000c0eeu): goto L_C0EE;
    case RC_ADDR(0x0000c0f2u): goto L_C0F2;
    case RC_ADDR(0x0000c0f6u): goto L_C0F6;
    case RC_ADDR(0x0000c0fau): goto L_C0FA;
    case RC_ADDR(0x0000c0feu): goto L_C0FE;
    case RC_ADDR(0x0000c102u): goto L_C102;
    case RC_ADDR(0x0000c106u): goto L_C106;
    case RC_ADDR(0x0000c10au): goto L_C10A;
    case RC_ADDR(0x0000c10eu): goto L_C10E;
    case RC_ADDR(0x0000c112u): goto L_C112;
    case RC_ADDR(0x0000c116u): goto L_C116;
    case RC_ADDR(0x0000c11au): goto L_C11A;
    case RC_ADDR(0x0000c11cu): goto L_C11C;
    case RC_ADDR(0x0000c120u): goto L_C120;
    case RC_ADDR(0x0000c126u): goto L_C126;
    case RC_ADDR(0x0000c12au): goto L_C12A;
    case RC_ADDR(0x0000c12eu): goto L_C12E;
    case RC_ADDR(0x0000c132u): goto L_C132;
    case RC_ADDR(0x0000c136u): goto L_C136;
    case RC_ADDR(0x0000c13au): goto L_C13A;
    case RC_ADDR(0x0000c13eu): goto L_C13E;
    case RC_ADDR(0x0000c142u): goto L_C142;
    case RC_ADDR(0x0000c146u): goto L_C146;
    case RC_ADDR(0x0000c14au): goto L_C14A;
    case RC_ADDR(0x0000c14eu): goto L_C14E;
    case RC_ADDR(0x0000c152u): goto L_C152;
    case RC_ADDR(0x0000c156u): goto L_C156;
    case RC_ADDR(0x0000c158u): goto L_C158;
    case RC_ADDR(0x0000c15au): goto L_C15A;
    case RC_ADDR(0x0000c15cu): goto L_C15C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_BFCA:
    /* 0000bfca   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000bfcau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_BFCE:
    /* 0000bfce   4  move.w (fffffd82,A4),D0 */
    c->pc = RC_ADDR(0x0000bfceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x27eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BFD2:
    /* 0000bfd2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000bfd2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_BFD4:
    /* 0000bfd4   4  divs.w #32,D0 */
    c->pc = RC_ADDR(0x0000bfd4u);
    rc_step(c, m, 162);
    t0 = 0x00000032u;
    rc_divs(c, m, 0, t0);

L_BFD8:
    /* 0000bfd8   2  addq.w #3,D0 */
    c->pc = RC_ADDR(0x0000bfd8u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_BFDA:
    /* 0000bfda   4  move.w D0,(73a,A4) */
    c->pc = RC_ADDR(0x0000bfdau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x73au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BFDE:
    /* 0000bfde   4  move.w (ffff8432,A4),D0 */
    c->pc = RC_ADDR(0x0000bfdeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7bceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_BFE2:
    /* 0000bfe2   4  muls.w #32,D0 */
    c->pc = RC_ADDR(0x0000bfe2u);
    rc_step(c, m, 42);
    t0 = 0x00000032u;
    rc_muls(c, 0, t0);

L_BFE6:
    /* 0000bfe6   4  add.w #190,D0 */
    c->pc = RC_ADDR(0x0000bfe6u);
    rc_step(c, m, 10);
    t0 = 0x00000190u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_BFEA:
    /* 0000bfea   4  move.w D0,(73c,A4) */
    c->pc = RC_ADDR(0x0000bfeau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x73cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_BFEE:
    /* 0000bfee   4  pea (00000002).l */
    c->pc = RC_ADDR(0x0000bfeeu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_BFF2:
    /* 0000bff2   4  pea (000003e8).l */
    c->pc = RC_ADDR(0x0000bff2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003e8u);

L_BFF6:
    /* 0000bff6   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0000bff6u);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0000bffau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_BFFA:
    /* 0000bffa   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000bffau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_BFFC:
    /* 0000bffc   4  move.l D0,(474,A4) */
    c->pc = RC_ADDR(0x0000bffcu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x474u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_C000:
    /* 0000c000   4  clr.w (73e,A4) */
    c->pc = RC_ADDR(0x0000c000u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x73eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_C004:
    /* 0000c004   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x0000c004u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_C008:
    /* 0000c008   4  pea (ffffa12e,A4) */
    c->pc = RC_ADDR(0x0000c008u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x5ed2u));

L_C00C:
    /* 0000c00c   4  jsr (00009cf2) */
    c->pc = RC_ADDR(0x0000c00cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c010u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009cf2u);
    return;

L_C010:
    /* 0000c010   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c010u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C012:
    /* 0000c012   4  movea.l (ffffa208,A4),A0 */
    c->pc = RC_ADDR(0x0000c012u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df8u));
    c->a[0] = t0;

L_C016:
    /* 0000c016   4  move.w #64,(A0) */
    c->pc = RC_ADDR(0x0000c016u);
    rc_step(c, m, 12);
    t0 = 0x00000064u;
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C01A:
    /* 0000c01a   4  jsr (0000df88) */
    c->pc = RC_ADDR(0x0000c01au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c01eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000df88u);
    return;

L_C01E:
    /* 0000c01e   4  pea (0000c15e) */
    c->pc = RC_ADDR(0x0000c01eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000c15eu));

L_C022:
    /* 0000c022   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000c022u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x0000c026u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ce0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000202c4u);
    return;

L_C026:
    /* 0000c026   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000c026u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_C028:
    /* 0000c028   6  move.w #140,(740,A4) */
    c->pc = RC_ADDR(0x0000c028u);
    rc_step(c, m, 16);
    t0 = 0x00000140u;
    rc_wr16(c, m, (c->a[4] + 0x740u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C02E:
    /* 0000c02e   6  move.w #d8,(742,A4) */
    c->pc = RC_ADDR(0x0000c02eu);
    rc_step(c, m, 16);
    t0 = 0x000000d8u;
    rc_wr16(c, m, (c->a[4] + 0x742u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C034:
    /* 0000c034   6  move.w #5,(744,A4) */
    c->pc = RC_ADDR(0x0000c034u);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x744u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C03A:
    /* 0000c03a   8  move.l #21c0,(746,A4) */
    c->pc = RC_ADDR(0x0000c03au);
    rc_step(c, m, 24);
    t0 = 0x000021c0u;
    rc_wr32(c, m, (c->a[4] + 0x746u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_C042:
    /* 0000c042   6  move.w #9,(74a,A4) */
    c->pc = RC_ADDR(0x0000c042u);
    rc_step(c, m, 16);
    t0 = 0x00000009u;
    rc_wr16(c, m, (c->a[4] + 0x74au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C048:
    /* 0000c048   6  move.w #65,(74c,A4) */
    c->pc = RC_ADDR(0x0000c048u);
    rc_step(c, m, 16);
    t0 = 0x00000065u;
    rc_wr16(c, m, (c->a[4] + 0x74cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C04E:
    /* 0000c04e   4  jsr (ffff81c4,A4) */
    c->pc = RC_ADDR(0x0000c04eu);
    rc_step(c, m, 18);
    /* vector 75 */
    rc_push32(c, m, RC_ADDR(0x0000c052u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c1au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001b94au);
    return;

L_C052:
    /* 0000c052   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000c052u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000c056u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c20u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001b9a4u);
    return;

L_C056:
    /* 0000c056   6  move.w #1,(714,A4) */
    c->pc = RC_ADDR(0x0000c056u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x714u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C05C:
    /* 0000c05c   6  move.w #1,(712,A4) */
    c->pc = RC_ADDR(0x0000c05cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x712u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C062:
    /* 0000c062   4  move.w (712,A4),D0 */
    c->pc = RC_ADDR(0x0000c062u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x712u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C066:
    /* 0000c066   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c066u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C068:
    /* 0000c068   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000c068u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_C06A:
    /* 0000c06a   4  lea (fffff376,A4),A0 */
    c->pc = RC_ADDR(0x0000c06au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xc8au);

L_C06E:
    /* 0000c06e   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000c06eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C072:
    /* 0000c072   4  jsr (0000dec4) */
    c->pc = RC_ADDR(0x0000c072u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c076u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000dec4u);
    return;

L_C076:
    /* 0000c076   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000c076u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C078:
    /* 0000c078   4  move.w #5,-(A7) */
    c->pc = RC_ADDR(0x0000c078u);
    rc_step(c, m, 12);
    t0 = 0x00000005u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C07C:
    /* 0000c07c   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x0000c07cu);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C080:
    /* 0000c080   4  pea (0000c16c) */
    c->pc = RC_ADDR(0x0000c080u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000c16cu));

L_C084:
    /* 0000c084   4  jsr (ffff81b2,A4) */
    c->pc = RC_ADDR(0x0000c084u);
    rc_step(c, m, 18);
    /* vector 72 */
    rc_push32(c, m, RC_ADDR(0x0000c088u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c08u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001b62eu);
    return;

L_C088:
    /* 0000c088   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c088u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C08A:
    /* 0000c08a   4  jsr (0000df34) */
    c->pc = RC_ADDR(0x0000c08au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c08eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000df34u);
    return;

L_C08E:
    /* 0000c08e   4  jsr (ffff818e,A4) */
    c->pc = RC_ADDR(0x0000c08eu);
    rc_step(c, m, 18);
    /* vector 66 */
    rc_push32(c, m, RC_ADDR(0x0000c092u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021be4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00017f34u);
    return;

L_C092:
    /* 0000c092   4  jsr (0000c176) */
    c->pc = RC_ADDR(0x0000c092u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c096u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c176u);
    return;

L_C096:
    /* 0000c096   6  move.w #2,(736,A4) */
    c->pc = RC_ADDR(0x0000c096u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x736u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C09C:
    /* 0000c09c   6  cmpi.w #8,(71a,A4) */
    c->pc = RC_ADDR(0x0000c09cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x71au));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_C0A2:
    /* 0000c0a2   4  bge 0000c12a */
    c->pc = RC_ADDR(0x0000c0a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_C12A;

L_C0A6:
    /* 0000c0a6   4  tst.w (fffff28a,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x0000c0a6u), 12,
                RC_ADDR(0x0000c0aau), 10, 7,
                RC_ADDR(0x0000c0acu), 10,
                (c->a[4] - 0xd76u), RC_W))
        goto L_C0AE;
    c->pc = RC_ADDR(0x0000c0a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd76u));
    rc_set_nzvc(c, t0, RC_W);

L_C0AA:
    /* 0000c0aa   2  beq 0000c0ae */
    c->pc = RC_ADDR(0x0000c0aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C0AE;

L_C0AC:
    /* 0000c0ac   2  bra 0000c0a6 */
    c->pc = RC_ADDR(0x0000c0acu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_C0A6;

L_C0AE:
    /* 0000c0ae   4  tst.w (736,A4) */
    c->pc = RC_ADDR(0x0000c0aeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x736u));
    rc_set_nzvc(c, t0, RC_W);

L_C0B2:
    /* 0000c0b2   2  beq 0000c0c2 */
    c->pc = RC_ADDR(0x0000c0b2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C0C2;

L_C0B4:
    /* 0000c0b4   4  subq.w #1,(736,A4) */
    c->pc = RC_ADDR(0x0000c0b4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x736u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C0B8:
    /* 0000c0b8   4  tst.w (736,A4) */
    c->pc = RC_ADDR(0x0000c0b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x736u));
    rc_set_nzvc(c, t0, RC_W);

L_C0BC:
    /* 0000c0bc   2  bne 0000c0c2 */
    c->pc = RC_ADDR(0x0000c0bcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C0C2;

L_C0BE:
    /* 0000c0be   4  jsr (ffff819a,A4) */
    c->pc = RC_ADDR(0x0000c0beu);
    rc_step(c, m, 18);
    /* vector 68 */
    rc_push32(c, m, RC_ADDR(0x0000c0c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bf0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001806eu);
    return;

L_C0C2:
    /* 0000c0c2   4  move.w (74e,A4),D0 */
    c->pc = RC_ADDR(0x0000c0c2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x74eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C0C6:
    /* 0000c0c6   2  asl.w #4,D0 */
    c->pc = RC_ADDR(0x0000c0c6u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_C0C8:
    /* 0000c0c8   4  sub.w #20,D0 */
    c->pc = RC_ADDR(0x0000c0c8u);
    rc_step(c, m, 10);
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C0CC:
    /* 0000c0cc   4  move.w D0,(470,A4) */
    c->pc = RC_ADDR(0x0000c0ccu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x470u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C0D0:
    /* 0000c0d0   4  move.w (750,A4),D0 */
    c->pc = RC_ADDR(0x0000c0d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x750u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C0D4:
    /* 0000c0d4   4  muls.w #9,D0 */
    c->pc = RC_ADDR(0x0000c0d4u);
    rc_step(c, m, 42);
    t0 = 0x00000009u;
    rc_muls(c, 0, t0);

L_C0D8:
    /* 0000c0d8   4  sub.w #1b,D0 */
    c->pc = RC_ADDR(0x0000c0d8u);
    rc_step(c, m, 10);
    t0 = 0x0000001bu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C0DC:
    /* 0000c0dc   4  move.w D0,(472,A4) */
    c->pc = RC_ADDR(0x0000c0dcu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x472u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C0E0:
    /* 0000c0e0   4  jsr (ffff816a,A4) */
    c->pc = RC_ADDR(0x0000c0e0u);
    rc_step(c, m, 18);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x0000c0e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_C0E4:
    /* 0000c0e4   4  move.w #e,-(A7) */
    c->pc = RC_ADDR(0x0000c0e4u);
    rc_step(c, m, 12);
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C0E8:
    /* 0000c0e8   4  jsr (ffff813a,A4) */
    c->pc = RC_ADDR(0x0000c0e8u);
    rc_step(c, m, 18);
    /* vector 52 */
    rc_push32(c, m, RC_ADDR(0x0000c0ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b90u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001075au);
    return;

L_C0EC:
    /* 0000c0ec   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000c0ecu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C0EE:
    /* 0000c0ee   4  jsr (0000c390) */
    c->pc = RC_ADDR(0x0000c0eeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c0f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c390u);
    return;

L_C0F2:
    /* 0000c0f2   4  jsr (0000c75e) */
    c->pc = RC_ADDR(0x0000c0f2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c0f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c75eu);
    return;

L_C0F6:
    /* 0000c0f6   4  jsr (0000ca5e) */
    c->pc = RC_ADDR(0x0000c0f6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c0fau));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ca5eu);
    return;

L_C0FA:
    /* 0000c0fa   4  jsr (0000c310) */
    c->pc = RC_ADDR(0x0000c0fau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c0feu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c310u);
    return;

L_C0FE:
    /* 0000c0fe   4  jsr (ffff815e,A4) */
    c->pc = RC_ADDR(0x0000c0feu);
    rc_step(c, m, 18);
    /* vector 58 */
    rc_push32(c, m, RC_ADDR(0x0000c102u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bb4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011512u);
    return;

L_C102:
    /* 0000c102   4  jsr (0000d5e8) */
    c->pc = RC_ADDR(0x0000c102u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c106u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000d5e8u);
    return;

L_C106:
    /* 0000c106   4  jsr (0000beda) */
    c->pc = RC_ADDR(0x0000c106u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c10au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000bedau);
    return;

L_C10A:
    /* 0000c10a   4  jsr (0000d376) */
    c->pc = RC_ADDR(0x0000c10au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c10eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000d376u);
    return;

L_C10E:
    /* 0000c10e   4  jsr (ffff80da,A4) */
    c->pc = RC_ADDR(0x0000c10eu);
    rc_step(c, m, 18);
    /* vector 36 */
    rc_push32(c, m, RC_ADDR(0x0000c112u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b30u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009c72u);
    return;

L_C112:
    /* 0000c112   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x0000c112u);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x0000c116u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021e00u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021948u);
    return;

L_C116:
    /* 0000c116   4  tst.w (71a,A4) */
    c->pc = RC_ADDR(0x0000c116u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x71au));
    rc_set_nzvc(c, t0, RC_W);

L_C11A:
    /* 0000c11a   2  beq 0000c120 */
    c->pc = RC_ADDR(0x0000c11au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C120;

L_C11C:
    /* 0000c11c   4  addq.w #1,(71a,A4) */
    c->pc = RC_ADDR(0x0000c11cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x71au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C120:
    /* 0000c120   6  move.w #1,(fffff28a,A4) */
    c->pc = RC_ADDR(0x0000c120u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0xd76u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C126:
    /* 0000c126   4  bra 0000c09c */
    c->pc = RC_ADDR(0x0000c126u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_C09C;

L_C12A:
    /* 0000c12a   4  jsr (ffff8110,A4) */
    c->pc = RC_ADDR(0x0000c12au);
    rc_step(c, m, 18);
    /* vector 45 */
    rc_push32(c, m, RC_ADDR(0x0000c12eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ec8au);
    return;

L_C12E:
    /* 0000c12e   4  jsr (0000e014) */
    c->pc = RC_ADDR(0x0000c12eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c132u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000e014u);
    return;

L_C132:
    /* 0000c132   4  jsr (ffff8284,A4) */
    c->pc = RC_ADDR(0x0000c132u);
    rc_step(c, m, 18);
    /* vector 107 */
    rc_push32(c, m, RC_ADDR(0x0000c136u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cdau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020266u);
    return;

L_C136:
    /* 0000c136   4  jsr (ffff81be,A4) */
    c->pc = RC_ADDR(0x0000c136u);
    rc_step(c, m, 18);
    /* vector 74 */
    rc_push32(c, m, RC_ADDR(0x0000c13au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c14u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001b926u);
    return;

L_C13A:
    /* 0000c13a   4  jsr (00011be0) */
    c->pc = RC_ADDR(0x0000c13au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c13eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00011be0u);
    return;

L_C13E:
    /* 0000c13e   4  jsr (ffff81a0,A4) */
    c->pc = RC_ADDR(0x0000c13eu);
    rc_step(c, m, 18);
    /* vector 69 */
    rc_push32(c, m, RC_ADDR(0x0000c142u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bf6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000180aeu);
    return;

L_C142:
    /* 0000c142   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x0000c142u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x0000c146u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bccu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016b34u);
    return;

L_C146:
    /* 0000c146   4  jsr (ffff81d0,A4) */
    c->pc = RC_ADDR(0x0000c146u);
    rc_step(c, m, 18);
    /* vector 77 */
    rc_push32(c, m, RC_ADDR(0x0000c14au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c26u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ba1au);
    return;

L_C14A:
    /* 0000c14a   4  pea (000003e8).l */
    c->pc = RC_ADDR(0x0000c14au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003e8u);

L_C14E:
    /* 0000c14e   4  move.l (474,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c14eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x474u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C152:
    /* 0000c152   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x0000c152u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x0000c156u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_C156:
    /* 0000c156   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c156u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C158:
    /* 0000c158   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000c158u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_C15A:
    /* 0000c15a   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c15au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C15C:
    /* 0000c15c   2  rts */
    c->pc = RC_ADDR(0x0000c15cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
