/* fn_00018570 - 706 byte(s), 199 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00018570(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00018570u): goto L_18570;
    case RC_ADDR(0x00018574u): goto L_18574;
    case RC_ADDR(0x00018578u): goto L_18578;
    case RC_ADDR(0x0001857cu): goto L_1857C;
    case RC_ADDR(0x0001857eu): goto L_1857E;
    case RC_ADDR(0x00018580u): goto L_18580;
    case RC_ADDR(0x00018584u): goto L_18584;
    case RC_ADDR(0x0001858au): goto L_1858A;
    case RC_ADDR(0x0001858cu): goto L_1858C;
    case RC_ADDR(0x00018590u): goto L_18590;
    case RC_ADDR(0x00018592u): goto L_18592;
    case RC_ADDR(0x00018594u): goto L_18594;
    case RC_ADDR(0x00018598u): goto L_18598;
    case RC_ADDR(0x0001859eu): goto L_1859E;
    case RC_ADDR(0x000185a0u): goto L_185A0;
    case RC_ADDR(0x000185a4u): goto L_185A4;
    case RC_ADDR(0x000185a6u): goto L_185A6;
    case RC_ADDR(0x000185a8u): goto L_185A8;
    case RC_ADDR(0x000185acu): goto L_185AC;
    case RC_ADDR(0x000185b2u): goto L_185B2;
    case RC_ADDR(0x000185b4u): goto L_185B4;
    case RC_ADDR(0x000185b8u): goto L_185B8;
    case RC_ADDR(0x000185bau): goto L_185BA;
    case RC_ADDR(0x000185bcu): goto L_185BC;
    case RC_ADDR(0x000185c0u): goto L_185C0;
    case RC_ADDR(0x000185c6u): goto L_185C6;
    case RC_ADDR(0x000185cau): goto L_185CA;
    case RC_ADDR(0x000185ceu): goto L_185CE;
    case RC_ADDR(0x000185d0u): goto L_185D0;
    case RC_ADDR(0x000185d2u): goto L_185D2;
    case RC_ADDR(0x000185d6u): goto L_185D6;
    case RC_ADDR(0x000185dau): goto L_185DA;
    case RC_ADDR(0x000185deu): goto L_185DE;
    case RC_ADDR(0x000185e0u): goto L_185E0;
    case RC_ADDR(0x000185e4u): goto L_185E4;
    case RC_ADDR(0x000185e6u): goto L_185E6;
    case RC_ADDR(0x000185e8u): goto L_185E8;
    case RC_ADDR(0x000185ecu): goto L_185EC;
    case RC_ADDR(0x000185f0u): goto L_185F0;
    case RC_ADDR(0x000185f4u): goto L_185F4;
    case RC_ADDR(0x000185f6u): goto L_185F6;
    case RC_ADDR(0x000185f8u): goto L_185F8;
    case RC_ADDR(0x000185fcu): goto L_185FC;
    case RC_ADDR(0x00018602u): goto L_18602;
    case RC_ADDR(0x00018606u): goto L_18606;
    case RC_ADDR(0x00018608u): goto L_18608;
    case RC_ADDR(0x0001860au): goto L_1860A;
    case RC_ADDR(0x0001860eu): goto L_1860E;
    case RC_ADDR(0x00018612u): goto L_18612;
    case RC_ADDR(0x00018614u): goto L_18614;
    case RC_ADDR(0x00018616u): goto L_18616;
    case RC_ADDR(0x0001861au): goto L_1861A;
    case RC_ADDR(0x00018620u): goto L_18620;
    case RC_ADDR(0x00018624u): goto L_18624;
    case RC_ADDR(0x00018626u): goto L_18626;
    case RC_ADDR(0x00018628u): goto L_18628;
    case RC_ADDR(0x0001862cu): goto L_1862C;
    case RC_ADDR(0x00018630u): goto L_18630;
    case RC_ADDR(0x00018632u): goto L_18632;
    case RC_ADDR(0x00018634u): goto L_18634;
    case RC_ADDR(0x00018638u): goto L_18638;
    case RC_ADDR(0x0001863cu): goto L_1863C;
    case RC_ADDR(0x0001863eu): goto L_1863E;
    case RC_ADDR(0x00018640u): goto L_18640;
    case RC_ADDR(0x00018644u): goto L_18644;
    case RC_ADDR(0x00018648u): goto L_18648;
    case RC_ADDR(0x0001864cu): goto L_1864C;
    case RC_ADDR(0x00018650u): goto L_18650;
    case RC_ADDR(0x00018654u): goto L_18654;
    case RC_ADDR(0x00018658u): goto L_18658;
    case RC_ADDR(0x0001865au): goto L_1865A;
    case RC_ADDR(0x0001865cu): goto L_1865C;
    case RC_ADDR(0x00018660u): goto L_18660;
    case RC_ADDR(0x00018664u): goto L_18664;
    case RC_ADDR(0x00018668u): goto L_18668;
    case RC_ADDR(0x0001866au): goto L_1866A;
    case RC_ADDR(0x0001866cu): goto L_1866C;
    case RC_ADDR(0x00018670u): goto L_18670;
    case RC_ADDR(0x00018674u): goto L_18674;
    case RC_ADDR(0x00018676u): goto L_18676;
    case RC_ADDR(0x00018678u): goto L_18678;
    case RC_ADDR(0x0001867cu): goto L_1867C;
    case RC_ADDR(0x00018680u): goto L_18680;
    case RC_ADDR(0x00018682u): goto L_18682;
    case RC_ADDR(0x00018684u): goto L_18684;
    case RC_ADDR(0x00018688u): goto L_18688;
    case RC_ADDR(0x0001868cu): goto L_1868C;
    case RC_ADDR(0x00018690u): goto L_18690;
    case RC_ADDR(0x00018694u): goto L_18694;
    case RC_ADDR(0x00018698u): goto L_18698;
    case RC_ADDR(0x0001869cu): goto L_1869C;
    case RC_ADDR(0x0001869eu): goto L_1869E;
    case RC_ADDR(0x000186a0u): goto L_186A0;
    case RC_ADDR(0x000186a4u): goto L_186A4;
    case RC_ADDR(0x000186a8u): goto L_186A8;
    case RC_ADDR(0x000186acu): goto L_186AC;
    case RC_ADDR(0x000186aeu): goto L_186AE;
    case RC_ADDR(0x000186b0u): goto L_186B0;
    case RC_ADDR(0x000186b4u): goto L_186B4;
    case RC_ADDR(0x000186b8u): goto L_186B8;
    case RC_ADDR(0x000186bcu): goto L_186BC;
    case RC_ADDR(0x000186beu): goto L_186BE;
    case RC_ADDR(0x000186c0u): goto L_186C0;
    case RC_ADDR(0x000186c4u): goto L_186C4;
    case RC_ADDR(0x000186c8u): goto L_186C8;
    case RC_ADDR(0x000186ccu): goto L_186CC;
    case RC_ADDR(0x000186ceu): goto L_186CE;
    case RC_ADDR(0x000186d0u): goto L_186D0;
    case RC_ADDR(0x000186d4u): goto L_186D4;
    case RC_ADDR(0x000186d8u): goto L_186D8;
    case RC_ADDR(0x000186dcu): goto L_186DC;
    case RC_ADDR(0x000186deu): goto L_186DE;
    case RC_ADDR(0x000186e0u): goto L_186E0;
    case RC_ADDR(0x000186e4u): goto L_186E4;
    case RC_ADDR(0x000186e8u): goto L_186E8;
    case RC_ADDR(0x000186ecu): goto L_186EC;
    case RC_ADDR(0x000186eeu): goto L_186EE;
    case RC_ADDR(0x000186f0u): goto L_186F0;
    case RC_ADDR(0x000186f4u): goto L_186F4;
    case RC_ADDR(0x000186f8u): goto L_186F8;
    case RC_ADDR(0x000186fcu): goto L_186FC;
    case RC_ADDR(0x000186feu): goto L_186FE;
    case RC_ADDR(0x00018700u): goto L_18700;
    case RC_ADDR(0x00018704u): goto L_18704;
    case RC_ADDR(0x00018708u): goto L_18708;
    case RC_ADDR(0x0001870cu): goto L_1870C;
    case RC_ADDR(0x0001870eu): goto L_1870E;
    case RC_ADDR(0x00018710u): goto L_18710;
    case RC_ADDR(0x00018714u): goto L_18714;
    case RC_ADDR(0x00018718u): goto L_18718;
    case RC_ADDR(0x0001871cu): goto L_1871C;
    case RC_ADDR(0x0001871eu): goto L_1871E;
    case RC_ADDR(0x00018720u): goto L_18720;
    case RC_ADDR(0x00018724u): goto L_18724;
    case RC_ADDR(0x00018728u): goto L_18728;
    case RC_ADDR(0x0001872cu): goto L_1872C;
    case RC_ADDR(0x0001872eu): goto L_1872E;
    case RC_ADDR(0x00018730u): goto L_18730;
    case RC_ADDR(0x00018734u): goto L_18734;
    case RC_ADDR(0x0001873au): goto L_1873A;
    case RC_ADDR(0x0001873eu): goto L_1873E;
    case RC_ADDR(0x00018740u): goto L_18740;
    case RC_ADDR(0x00018742u): goto L_18742;
    case RC_ADDR(0x00018746u): goto L_18746;
    case RC_ADDR(0x0001874au): goto L_1874A;
    case RC_ADDR(0x0001874eu): goto L_1874E;
    case RC_ADDR(0x00018750u): goto L_18750;
    case RC_ADDR(0x00018752u): goto L_18752;
    case RC_ADDR(0x00018756u): goto L_18756;
    case RC_ADDR(0x0001875cu): goto L_1875C;
    case RC_ADDR(0x00018760u): goto L_18760;
    case RC_ADDR(0x00018762u): goto L_18762;
    case RC_ADDR(0x00018764u): goto L_18764;
    case RC_ADDR(0x00018768u): goto L_18768;
    case RC_ADDR(0x0001876cu): goto L_1876C;
    case RC_ADDR(0x00018770u): goto L_18770;
    case RC_ADDR(0x00018772u): goto L_18772;
    case RC_ADDR(0x00018774u): goto L_18774;
    case RC_ADDR(0x00018778u): goto L_18778;
    case RC_ADDR(0x0001877cu): goto L_1877C;
    case RC_ADDR(0x0001877eu): goto L_1877E;
    case RC_ADDR(0x00018780u): goto L_18780;
    case RC_ADDR(0x00018784u): goto L_18784;
    case RC_ADDR(0x0001878au): goto L_1878A;
    case RC_ADDR(0x0001878eu): goto L_1878E;
    case RC_ADDR(0x00018794u): goto L_18794;
    case RC_ADDR(0x00018798u): goto L_18798;
    case RC_ADDR(0x0001879eu): goto L_1879E;
    case RC_ADDR(0x000187a0u): goto L_187A0;
    case RC_ADDR(0x000187a6u): goto L_187A6;
    case RC_ADDR(0x000187acu): goto L_187AC;
    case RC_ADDR(0x000187b2u): goto L_187B2;
    case RC_ADDR(0x000187b8u): goto L_187B8;
    case RC_ADDR(0x000187beu): goto L_187BE;
    case RC_ADDR(0x000187c4u): goto L_187C4;
    case RC_ADDR(0x000187cau): goto L_187CA;
    case RC_ADDR(0x000187d0u): goto L_187D0;
    case RC_ADDR(0x000187d6u): goto L_187D6;
    case RC_ADDR(0x000187dcu): goto L_187DC;
    case RC_ADDR(0x000187e2u): goto L_187E2;
    case RC_ADDR(0x000187e8u): goto L_187E8;
    case RC_ADDR(0x000187eeu): goto L_187EE;
    case RC_ADDR(0x000187f0u): goto L_187F0;
    case RC_ADDR(0x000187f4u): goto L_187F4;
    case RC_ADDR(0x000187f8u): goto L_187F8;
    case RC_ADDR(0x000187fcu): goto L_187FC;
    case RC_ADDR(0x00018800u): goto L_18800;
    case RC_ADDR(0x00018804u): goto L_18804;
    case RC_ADDR(0x00018808u): goto L_18808;
    case RC_ADDR(0x0001880cu): goto L_1880C;
    case RC_ADDR(0x00018810u): goto L_18810;
    case RC_ADDR(0x00018814u): goto L_18814;
    case RC_ADDR(0x00018818u): goto L_18818;
    case RC_ADDR(0x0001881au): goto L_1881A;
    case RC_ADDR(0x0001881eu): goto L_1881E;
    case RC_ADDR(0x00018822u): goto L_18822;
    case RC_ADDR(0x00018828u): goto L_18828;
    case RC_ADDR(0x0001882eu): goto L_1882E;
    case RC_ADDR(0x00018830u): goto L_18830;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18570:
    /* 00018570   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00018570u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_18574:
    /* 00018574   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00018574u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18578:
    /* 00018578   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00018578u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1857C:
    /* 0001857c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001857cu);
    rc_ext_l(c, 0);

L_1857E:
    /* 0001857e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001857eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_18580:
    /* 00018580   4  lea (1ce8,A4),A0 */
    c->pc = RC_ADDR(0x00018580u);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_18584:
    /* 00018584   6  cmpi.w #180,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018584u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000180u);

L_1858A:
    /* 0001858a   2  blt 000185ca */
    c->pc = RC_ADDR(0x0001858au);
    if (rc_cond(c, 13)) goto L_185CA;

L_1858C:
    /* 0001858c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001858cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18590:
    /* 00018590   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018590u);
    rc_ext_l(c, 0);

L_18592:
    /* 00018592   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018592u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_18594:
    /* 00018594   4  lea (1ce8,A4),A0 */
    c->pc = RC_ADDR(0x00018594u);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_18598:
    /* 00018598   6  cmpi.w #1c8,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018598u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x000001c8u);

L_1859E:
    /* 0001859e   2  bgt 000185ca */
    c->pc = RC_ADDR(0x0001859eu);
    if (rc_cond(c, 14)) goto L_185CA;

L_185A0:
    /* 000185a0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000185a0u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_185A4:
    /* 000185a4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000185a4u);
    rc_ext_l(c, 0);

L_185A6:
    /* 000185a6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000185a6u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_185A8:
    /* 000185a8   4  lea (1d00,A4),A0 */
    c->pc = RC_ADDR(0x000185a8u);
    c->a[0] = (c->a[4] + 0x1d00u);

L_185AC:
    /* 000185ac   6  cmpi.w #c8,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000185acu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x000000c8u);

L_185B2:
    /* 000185b2   2  blt 000185ca */
    c->pc = RC_ADDR(0x000185b2u);
    if (rc_cond(c, 13)) goto L_185CA;

L_185B4:
    /* 000185b4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000185b4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_185B8:
    /* 000185b8   2  ext.l D0 */
    c->pc = RC_ADDR(0x000185b8u);
    rc_ext_l(c, 0);

L_185BA:
    /* 000185ba   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000185bau);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_185BC:
    /* 000185bc   4  lea (1d00,A4),A0 */
    c->pc = RC_ADDR(0x000185bcu);
    c->a[0] = (c->a[4] + 0x1d00u);

L_185C0:
    /* 000185c0   6  cmpi.w #140,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000185c0u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000140u);

L_185C6:
    /* 000185c6   4  blt 0001878a */
    c->pc = RC_ADDR(0x000185c6u);
    if (rc_cond(c, 13)) goto L_1878A;

L_185CA:
    /* 000185ca   4  move.w (1f40,A4),D0 */
    c->pc = RC_ADDR(0x000185cau);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_185CE:
    /* 000185ce   2  ext.l D0 */
    c->pc = RC_ADDR(0x000185ceu);
    rc_ext_l(c, 0);

L_185D0:
    /* 000185d0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000185d0u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_185D2:
    /* 000185d2   4  lea (ffffc64a,A4),A0 */
    c->pc = RC_ADDR(0x000185d2u);
    c->a[0] = (c->a[4] - 0x39b6u);

L_185D6:
    /* 000185d6   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x000185d6u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_185DA:
    /* 000185da   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x000185dau);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x000185deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_185DE:
    /* 000185de   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000185deu);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_185E0:
    /* 000185e0   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x000185e0u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_185E4:
    /* 000185e4   2  ext.l D1 */
    c->pc = RC_ADDR(0x000185e4u);
    rc_ext_l(c, 1);

L_185E6:
    /* 000185e6   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000185e6u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_185E8:
    /* 000185e8   4  lea (1ef8,A4),A0 */
    c->pc = RC_ADDR(0x000185e8u);
    c->a[0] = (c->a[4] + 0x1ef8u);

L_185EC:
    /* 000185ec   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000185ecu);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_185F0:
    /* 000185f0   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000185f0u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_185F4:
    /* 000185f4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000185f4u);
    rc_ext_l(c, 0);

L_185F6:
    /* 000185f6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000185f6u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_185F8:
    /* 000185f8   4  lea (1f28,A4),A0 */
    c->pc = RC_ADDR(0x000185f8u);
    c->a[0] = (c->a[4] + 0x1f28u);

L_185FC:
    /* 000185fc   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000185fcu);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18602:
    /* 00018602   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00018602u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18606:
    /* 00018606   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018606u);
    rc_ext_l(c, 0);

L_18608:
    /* 00018608   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018608u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1860A:
    /* 0001860a   4  lea (1ef8,A4),A0 */
    c->pc = RC_ADDR(0x0001860au);
    c->a[0] = (c->a[4] + 0x1ef8u);

L_1860E:
    /* 0001860e   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001860eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18612:
    /* 00018612   2  ext.l D1 */
    c->pc = RC_ADDR(0x00018612u);
    rc_ext_l(c, 1);

L_18614:
    /* 00018614   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00018614u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_18616:
    /* 00018616   4  lea (1f10,A4),A1 */
    c->pc = RC_ADDR(0x00018616u);
    c->a[1] = (c->a[4] + 0x1f10u);

L_1861A:
    /* 0001861a   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001861au);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18620:
    /* 00018620   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00018620u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18624:
    /* 00018624   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018624u);
    rc_ext_l(c, 0);

L_18626:
    /* 00018626   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018626u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_18628:
    /* 00018628   4  lea (1d78,A4),A0 */
    c->pc = RC_ADDR(0x00018628u);
    c->a[0] = (c->a[4] + 0x1d78u);

L_1862C:
    /* 0001862c   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001862cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18630:
    /* 00018630   2  ext.l D1 */
    c->pc = RC_ADDR(0x00018630u);
    rc_ext_l(c, 1);

L_18632:
    /* 00018632   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00018632u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_18634:
    /* 00018634   4  lea (1ef8,A4),A1 */
    c->pc = RC_ADDR(0x00018634u);
    c->a[1] = (c->a[4] + 0x1ef8u);

L_18638:
    /* 00018638   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00018638u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1863C:
    /* 0001863c   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001863cu);
    rc_ext_l(c, 2);

L_1863E:
    /* 0001863e   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x0001863eu);
    c->d[2] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L);

L_18640:
    /* 00018640   4  lea (13ce,A4),A1 */
    c->pc = RC_ADDR(0x00018640u);
    c->a[1] = (c->a[4] + 0x13ceu);

L_18644:
    /* 00018644   4  move.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x00018644u);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18648:
    /* 00018648   4  muls.w #30,D1 */
    c->pc = RC_ADDR(0x00018648u);
    t0 = 0x00000030u;
    rc_muls(c, 1, t0);

L_1864C:
    /* 0001864c   4  add.w #10,D1 */
    c->pc = RC_ADDR(0x0001864cu);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_18650:
    /* 00018650   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018650u);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18654:
    /* 00018654   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00018654u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18658:
    /* 00018658   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018658u);
    rc_ext_l(c, 0);

L_1865A:
    /* 0001865a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001865au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1865C:
    /* 0001865c   4  lea (1ce8,A4),A0 */
    c->pc = RC_ADDR(0x0001865cu);
    c->a[0] = (c->a[4] + 0x1ce8u);

L_18660:
    /* 00018660   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018660u);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18664:
    /* 00018664   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00018664u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18668:
    /* 00018668   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018668u);
    rc_ext_l(c, 0);

L_1866A:
    /* 0001866a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001866au);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_1866C:
    /* 0001866c   4  lea (1d90,A4),A0 */
    c->pc = RC_ADDR(0x0001866cu);
    c->a[0] = (c->a[4] + 0x1d90u);

L_18670:
    /* 00018670   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00018670u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18674:
    /* 00018674   2  ext.l D1 */
    c->pc = RC_ADDR(0x00018674u);
    rc_ext_l(c, 1);

L_18676:
    /* 00018676   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00018676u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_18678:
    /* 00018678   4  lea (1ef8,A4),A1 */
    c->pc = RC_ADDR(0x00018678u);
    c->a[1] = (c->a[4] + 0x1ef8u);

L_1867C:
    /* 0001867c   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001867cu);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18680:
    /* 00018680   2  ext.l D2 */
    c->pc = RC_ADDR(0x00018680u);
    rc_ext_l(c, 2);

L_18682:
    /* 00018682   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x00018682u);
    c->d[2] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L);

L_18684:
    /* 00018684   4  lea (13e6,A4),A1 */
    c->pc = RC_ADDR(0x00018684u);
    c->a[1] = (c->a[4] + 0x13e6u);

L_18688:
    /* 00018688   4  move.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x00018688u);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1868C:
    /* 0001868c   4  muls.w #28,D1 */
    c->pc = RC_ADDR(0x0001868cu);
    t0 = 0x00000028u;
    rc_muls(c, 1, t0);

L_18690:
    /* 00018690   4  add.w #f,D1 */
    c->pc = RC_ADDR(0x00018690u);
    t0 = 0x0000000fu;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_18694:
    /* 00018694   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018694u);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18698:
    /* 00018698   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00018698u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1869C:
    /* 0001869c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001869cu);
    rc_ext_l(c, 0);

L_1869E:
    /* 0001869e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001869eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_186A0:
    /* 000186a0   4  lea (1d00,A4),A0 */
    c->pc = RC_ADDR(0x000186a0u);
    c->a[0] = (c->a[4] + 0x1d00u);

L_186A4:
    /* 000186a4   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000186a4u);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_186A8:
    /* 000186a8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000186a8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_186AC:
    /* 000186ac   2  ext.l D0 */
    c->pc = RC_ADDR(0x000186acu);
    rc_ext_l(c, 0);

L_186AE:
    /* 000186ae   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000186aeu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_186B0:
    /* 000186b0   4  lea (1d48,A4),A0 */
    c->pc = RC_ADDR(0x000186b0u);
    c->a[0] = (c->a[4] + 0x1d48u);

L_186B4:
    /* 000186b4   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000186b4u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_186B8:
    /* 000186b8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000186b8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_186BC:
    /* 000186bc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000186bcu);
    rc_ext_l(c, 0);

L_186BE:
    /* 000186be   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000186beu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_186C0:
    /* 000186c0   4  lea (1d60,A4),A0 */
    c->pc = RC_ADDR(0x000186c0u);
    c->a[0] = (c->a[4] + 0x1d60u);

L_186C4:
    /* 000186c4   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000186c4u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_186C8:
    /* 000186c8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000186c8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_186CC:
    /* 000186cc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000186ccu);
    rc_ext_l(c, 0);

L_186CE:
    /* 000186ce   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000186ceu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_186D0:
    /* 000186d0   4  lea (1da8,A4),A0 */
    c->pc = RC_ADDR(0x000186d0u);
    c->a[0] = (c->a[4] + 0x1da8u);

L_186D4:
    /* 000186d4   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000186d4u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_186D8:
    /* 000186d8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000186d8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_186DC:
    /* 000186dc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000186dcu);
    rc_ext_l(c, 0);

L_186DE:
    /* 000186de   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000186deu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_186E0:
    /* 000186e0   4  lea (1df0,A4),A0 */
    c->pc = RC_ADDR(0x000186e0u);
    c->a[0] = (c->a[4] + 0x1df0u);

L_186E4:
    /* 000186e4   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000186e4u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_186E8:
    /* 000186e8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000186e8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_186EC:
    /* 000186ec   2  ext.l D0 */
    c->pc = RC_ADDR(0x000186ecu);
    rc_ext_l(c, 0);

L_186EE:
    /* 000186ee   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000186eeu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_186F0:
    /* 000186f0   4  lea (1d18,A4),A0 */
    c->pc = RC_ADDR(0x000186f0u);
    c->a[0] = (c->a[4] + 0x1d18u);

L_186F4:
    /* 000186f4   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x000186f4u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_186F8:
    /* 000186f8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000186f8u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_186FC:
    /* 000186fc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000186fcu);
    rc_ext_l(c, 0);

L_186FE:
    /* 000186fe   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000186feu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_18700:
    /* 00018700   4  lea (1d30,A4),A0 */
    c->pc = RC_ADDR(0x00018700u);
    c->a[0] = (c->a[4] + 0x1d30u);

L_18704:
    /* 00018704   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018704u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18708:
    /* 00018708   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00018708u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1870C:
    /* 0001870c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001870cu);
    rc_ext_l(c, 0);

L_1870E:
    /* 0001870e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001870eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_18710:
    /* 00018710   4  lea (1e68,A4),A0 */
    c->pc = RC_ADDR(0x00018710u);
    c->a[0] = (c->a[4] + 0x1e68u);

L_18714:
    /* 00018714   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018714u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18718:
    /* 00018718   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00018718u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1871C:
    /* 0001871c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001871cu);
    rc_ext_l(c, 0);

L_1871E:
    /* 0001871e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001871eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_18720:
    /* 00018720   4  lea (1e80,A4),A0 */
    c->pc = RC_ADDR(0x00018720u);
    c->a[0] = (c->a[4] + 0x1e80u);

L_18724:
    /* 00018724   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018724u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18728:
    /* 00018728   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00018728u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1872C:
    /* 0001872c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001872cu);
    rc_ext_l(c, 0);

L_1872E:
    /* 0001872e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001872eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_18730:
    /* 00018730   4  lea (1e98,A4),A0 */
    c->pc = RC_ADDR(0x00018730u);
    c->a[0] = (c->a[4] + 0x1e98u);

L_18734:
    /* 00018734   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018734u);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1873A:
    /* 0001873a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001873au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1873E:
    /* 0001873e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001873eu);
    rc_ext_l(c, 0);

L_18740:
    /* 00018740   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018740u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_18742:
    /* 00018742   4  lea (1eb0,A4),A0 */
    c->pc = RC_ADDR(0x00018742u);
    c->a[0] = (c->a[4] + 0x1eb0u);

L_18746:
    /* 00018746   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018746u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1874A:
    /* 0001874a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001874au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1874E:
    /* 0001874e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001874eu);
    rc_ext_l(c, 0);

L_18750:
    /* 00018750   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018750u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_18752:
    /* 00018752   4  lea (1ec8,A4),A0 */
    c->pc = RC_ADDR(0x00018752u);
    c->a[0] = (c->a[4] + 0x1ec8u);

L_18756:
    /* 00018756   6  move.w #63,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018756u);
    t0 = 0x00000063u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1875C:
    /* 0001875c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001875cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18760:
    /* 00018760   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018760u);
    rc_ext_l(c, 0);

L_18762:
    /* 00018762   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018762u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_18764:
    /* 00018764   4  lea (1ee0,A4),A0 */
    c->pc = RC_ADDR(0x00018764u);
    c->a[0] = (c->a[4] + 0x1ee0u);

L_18768:
    /* 00018768   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00018768u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1876C:
    /* 0001876c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001876cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18770:
    /* 00018770   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018770u);
    rc_ext_l(c, 0);

L_18772:
    /* 00018772   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00018772u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_18774:
    /* 00018774   4  lea (ffffc68e,A4),A0 */
    c->pc = RC_ADDR(0x00018774u);
    c->a[0] = (c->a[4] - 0x3972u);

L_18778:
    /* 00018778   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00018778u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1877C:
    /* 0001877c   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001877cu);
    rc_ext_l(c, 1);

L_1877E:
    /* 0001877e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001877eu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_18780:
    /* 00018780   4  lea (1cd0,A4),A1 */
    c->pc = RC_ADDR(0x00018780u);
    c->a[1] = (c->a[4] + 0x1cd0u);

L_18784:
    /* 00018784   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00018784u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1878A:
    /* 0001878a   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001878au);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1878E:
    /* 0001878e   6  cmpi.w #c,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001878eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_18794:
    /* 00018794   4  blt 00018578 */
    c->pc = RC_ADDR(0x00018794u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_18578; }

L_18798:
    /* 00018798   6  cmpi.w #1,(1f40,A4) */
    c->pc = RC_ADDR(0x00018798u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1f40u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1879E:
    /* 0001879e   2  bne 000187e8 */
    c->pc = RC_ADDR(0x0001879eu);
    if (rc_cond(c, 6)) goto L_187E8;

L_187A0:
    /* 000187a0   6  move.w #148,(1d78,A4) */
    c->pc = RC_ADDR(0x000187a0u);
    t0 = 0x00000148u;
    rc_wr16(c, m, (c->a[4] + 0x1d78u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_187A6:
    /* 000187a6   6  move.w #148,(1ce8,A4) */
    c->pc = RC_ADDR(0x000187a6u);
    t0 = 0x00000148u;
    rc_wr16(c, m, (c->a[4] + 0x1ce8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_187AC:
    /* 000187ac   6  move.w #1ae,(1d90,A4) */
    c->pc = RC_ADDR(0x000187acu);
    t0 = 0x000001aeu;
    rc_wr16(c, m, (c->a[4] + 0x1d90u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_187B2:
    /* 000187b2   6  move.w #1ae,(1d00,A4) */
    c->pc = RC_ADDR(0x000187b2u);
    t0 = 0x000001aeu;
    rc_wr16(c, m, (c->a[4] + 0x1d00u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_187B8:
    /* 000187b8   6  move.w #180,(1d7a,A4) */
    c->pc = RC_ADDR(0x000187b8u);
    t0 = 0x00000180u;
    rc_wr16(c, m, (c->a[4] + 0x1d7au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_187BE:
    /* 000187be   6  move.w #180,(1cea,A4) */
    c->pc = RC_ADDR(0x000187beu);
    t0 = 0x00000180u;
    rc_wr16(c, m, (c->a[4] + 0x1ceau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_187C4:
    /* 000187c4   6  move.w #1ae,(1d92,A4) */
    c->pc = RC_ADDR(0x000187c4u);
    t0 = 0x000001aeu;
    rc_wr16(c, m, (c->a[4] + 0x1d92u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_187CA:
    /* 000187ca   6  move.w #1ae,(1d02,A4) */
    c->pc = RC_ADDR(0x000187cau);
    t0 = 0x000001aeu;
    rc_wr16(c, m, (c->a[4] + 0x1d02u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_187D0:
    /* 000187d0   6  move.w #2,(1cd2,A4) */
    c->pc = RC_ADDR(0x000187d0u);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1cd2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_187D6:
    /* 000187d6   6  move.w #2,(1cd0,A4) */
    c->pc = RC_ADDR(0x000187d6u);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1cd0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_187DC:
    /* 000187dc   6  move.w #5,(1ee2,A4) */
    c->pc = RC_ADDR(0x000187dcu);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x1ee2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_187E2:
    /* 000187e2   6  move.w #5,(1ee0,A4) */
    c->pc = RC_ADDR(0x000187e2u);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[4] + 0x1ee0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_187E8:
    /* 000187e8   6  cmpi.w #1,(478,A4) */
    c->pc = RC_ADDR(0x000187e8u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x478u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_187EE:
    /* 000187ee   2  beq 000187f4 */
    c->pc = RC_ADDR(0x000187eeu);
    if (rc_cond(c, 7)) goto L_187F4;

L_187F0:
    /* 000187f0   4  jsr (0001a492) */
    c->pc = RC_ADDR(0x000187f0u);
    rc_push32(c, m, RC_ADDR(0x000187f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001a492u);
    return;

L_187F4:
    /* 000187f4   4  clr.w (1cbe,A4) */
    c->pc = RC_ADDR(0x000187f4u);
    rc_wr16(c, m, (c->a[4] + 0x1cbeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_187F8:
    /* 000187f8   4  clr.w (1cc0,A4) */
    c->pc = RC_ADDR(0x000187f8u);
    rc_wr16(c, m, (c->a[4] + 0x1cc0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_187FC:
    /* 000187fc   4  clr.w (1cc2,A4) */
    c->pc = RC_ADDR(0x000187fcu);
    rc_wr16(c, m, (c->a[4] + 0x1cc2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18800:
    /* 00018800   4  clr.w (1cc4,A4) */
    c->pc = RC_ADDR(0x00018800u);
    rc_wr16(c, m, (c->a[4] + 0x1cc4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18804:
    /* 00018804   4  clr.w (71a,A4) */
    c->pc = RC_ADDR(0x00018804u);
    rc_wr16(c, m, (c->a[4] + 0x71au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18808:
    /* 00018808   4  clr.w (1ccc,A4) */
    c->pc = RC_ADDR(0x00018808u);
    rc_wr16(c, m, (c->a[4] + 0x1cccu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1880C:
    /* 0001880c   4  clr.l (1f44,A4) */
    c->pc = RC_ADDR(0x0001880cu);
    rc_wr32(c, m, (c->a[4] + 0x1f44u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18810:
    /* 00018810   4  move.w #3b,-(A7) */
    c->pc = RC_ADDR(0x00018810u);
    t0 = 0x0000003bu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18814:
    /* 00018814   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00018814u);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x00018818u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_18818:
    /* 00018818   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00018818u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1881A:
    /* 0001881a   4  move.w D0,(1f4a,A4) */
    c->pc = RC_ADDR(0x0001881au);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1f4au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1881E:
    /* 0001881e   4  clr.w (1f4c,A4) */
    c->pc = RC_ADDR(0x0001881eu);
    rc_wr16(c, m, (c->a[4] + 0x1f4cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18822:
    /* 00018822   6  move.w #8c,(1f4e,A4) */
    c->pc = RC_ADDR(0x00018822u);
    t0 = 0x0000008cu;
    rc_wr16(c, m, (c->a[4] + 0x1f4eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18828:
    /* 00018828   6  move.w #50,(1f50,A4) */
    c->pc = RC_ADDR(0x00018828u);
    t0 = 0x00000050u;
    rc_wr16(c, m, (c->a[4] + 0x1f50u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1882E:
    /* 0001882e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001882eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18830:
    /* 00018830   2  rts */
    c->pc = RC_ADDR(0x00018830u);
    rc_ret(c, m);
    return;

}
