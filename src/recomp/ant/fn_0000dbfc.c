/* fn_0000dbfc - 974 byte(s), 283 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000dbfc(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000dbfcu): goto L_DBFC;
    case RC_ADDR(0x0000dc00u): goto L_DC00;
    case RC_ADDR(0x0000dc04u): goto L_DC04;
    case RC_ADDR(0x0000dc08u): goto L_DC08;
    case RC_ADDR(0x0000dc0cu): goto L_DC0C;
    case RC_ADDR(0x0000dc10u): goto L_DC10;
    case RC_ADDR(0x0000dc14u): goto L_DC14;
    case RC_ADDR(0x0000dc18u): goto L_DC18;
    case RC_ADDR(0x0000dc1cu): goto L_DC1C;
    case RC_ADDR(0x0000dc20u): goto L_DC20;
    case RC_ADDR(0x0000dc24u): goto L_DC24;
    case RC_ADDR(0x0000dc28u): goto L_DC28;
    case RC_ADDR(0x0000dc2cu): goto L_DC2C;
    case RC_ADDR(0x0000dc30u): goto L_DC30;
    case RC_ADDR(0x0000dc34u): goto L_DC34;
    case RC_ADDR(0x0000dc38u): goto L_DC38;
    case RC_ADDR(0x0000dc3cu): goto L_DC3C;
    case RC_ADDR(0x0000dc40u): goto L_DC40;
    case RC_ADDR(0x0000dc44u): goto L_DC44;
    case RC_ADDR(0x0000dc48u): goto L_DC48;
    case RC_ADDR(0x0000dc4cu): goto L_DC4C;
    case RC_ADDR(0x0000dc50u): goto L_DC50;
    case RC_ADDR(0x0000dc54u): goto L_DC54;
    case RC_ADDR(0x0000dc58u): goto L_DC58;
    case RC_ADDR(0x0000dc5cu): goto L_DC5C;
    case RC_ADDR(0x0000dc60u): goto L_DC60;
    case RC_ADDR(0x0000dc64u): goto L_DC64;
    case RC_ADDR(0x0000dc66u): goto L_DC66;
    case RC_ADDR(0x0000dc6au): goto L_DC6A;
    case RC_ADDR(0x0000dc6eu): goto L_DC6E;
    case RC_ADDR(0x0000dc70u): goto L_DC70;
    case RC_ADDR(0x0000dc74u): goto L_DC74;
    case RC_ADDR(0x0000dc76u): goto L_DC76;
    case RC_ADDR(0x0000dc7au): goto L_DC7A;
    case RC_ADDR(0x0000dc7eu): goto L_DC7E;
    case RC_ADDR(0x0000dc80u): goto L_DC80;
    case RC_ADDR(0x0000dc84u): goto L_DC84;
    case RC_ADDR(0x0000dc88u): goto L_DC88;
    case RC_ADDR(0x0000dc8cu): goto L_DC8C;
    case RC_ADDR(0x0000dc90u): goto L_DC90;
    case RC_ADDR(0x0000dc94u): goto L_DC94;
    case RC_ADDR(0x0000dc96u): goto L_DC96;
    case RC_ADDR(0x0000dc9au): goto L_DC9A;
    case RC_ADDR(0x0000dc9eu): goto L_DC9E;
    case RC_ADDR(0x0000dca2u): goto L_DCA2;
    case RC_ADDR(0x0000dca6u): goto L_DCA6;
    case RC_ADDR(0x0000dca8u): goto L_DCA8;
    case RC_ADDR(0x0000dcacu): goto L_DCAC;
    case RC_ADDR(0x0000dcb0u): goto L_DCB0;
    case RC_ADDR(0x0000dcb2u): goto L_DCB2;
    case RC_ADDR(0x0000dcb6u): goto L_DCB6;
    case RC_ADDR(0x0000dcb8u): goto L_DCB8;
    case RC_ADDR(0x0000dcbau): goto L_DCBA;
    case RC_ADDR(0x0000dcbeu): goto L_DCBE;
    case RC_ADDR(0x0000dcc4u): goto L_DCC4;
    case RC_ADDR(0x0000dcc8u): goto L_DCC8;
    case RC_ADDR(0x0000dcccu): goto L_DCCC;
    case RC_ADDR(0x0000dcd0u): goto L_DCD0;
    case RC_ADDR(0x0000dcd2u): goto L_DCD2;
    case RC_ADDR(0x0000dcd8u): goto L_DCD8;
    case RC_ADDR(0x0000dcdau): goto L_DCDA;
    case RC_ADDR(0x0000dcdeu): goto L_DCDE;
    case RC_ADDR(0x0000dce2u): goto L_DCE2;
    case RC_ADDR(0x0000dce4u): goto L_DCE4;
    case RC_ADDR(0x0000dce8u): goto L_DCE8;
    case RC_ADDR(0x0000dcecu): goto L_DCEC;
    case RC_ADDR(0x0000dcf0u): goto L_DCF0;
    case RC_ADDR(0x0000dcf4u): goto L_DCF4;
    case RC_ADDR(0x0000dcf6u): goto L_DCF6;
    case RC_ADDR(0x0000dcfcu): goto L_DCFC;
    case RC_ADDR(0x0000dcfeu): goto L_DCFE;
    case RC_ADDR(0x0000dd02u): goto L_DD02;
    case RC_ADDR(0x0000dd06u): goto L_DD06;
    case RC_ADDR(0x0000dd08u): goto L_DD08;
    case RC_ADDR(0x0000dd0cu): goto L_DD0C;
    case RC_ADDR(0x0000dd10u): goto L_DD10;
    case RC_ADDR(0x0000dd14u): goto L_DD14;
    case RC_ADDR(0x0000dd16u): goto L_DD16;
    case RC_ADDR(0x0000dd1au): goto L_DD1A;
    case RC_ADDR(0x0000dd1eu): goto L_DD1E;
    case RC_ADDR(0x0000dd22u): goto L_DD22;
    case RC_ADDR(0x0000dd24u): goto L_DD24;
    case RC_ADDR(0x0000dd2au): goto L_DD2A;
    case RC_ADDR(0x0000dd2cu): goto L_DD2C;
    case RC_ADDR(0x0000dd30u): goto L_DD30;
    case RC_ADDR(0x0000dd32u): goto L_DD32;
    case RC_ADDR(0x0000dd34u): goto L_DD34;
    case RC_ADDR(0x0000dd38u): goto L_DD38;
    case RC_ADDR(0x0000dd3cu): goto L_DD3C;
    case RC_ADDR(0x0000dd40u): goto L_DD40;
    case RC_ADDR(0x0000dd42u): goto L_DD42;
    case RC_ADDR(0x0000dd46u): goto L_DD46;
    case RC_ADDR(0x0000dd48u): goto L_DD48;
    case RC_ADDR(0x0000dd4cu): goto L_DD4C;
    case RC_ADDR(0x0000dd4eu): goto L_DD4E;
    case RC_ADDR(0x0000dd52u): goto L_DD52;
    case RC_ADDR(0x0000dd54u): goto L_DD54;
    case RC_ADDR(0x0000dd56u): goto L_DD56;
    case RC_ADDR(0x0000dd5au): goto L_DD5A;
    case RC_ADDR(0x0000dd5eu): goto L_DD5E;
    case RC_ADDR(0x0000dd62u): goto L_DD62;
    case RC_ADDR(0x0000dd64u): goto L_DD64;
    case RC_ADDR(0x0000dd68u): goto L_DD68;
    case RC_ADDR(0x0000dd6au): goto L_DD6A;
    case RC_ADDR(0x0000dd6eu): goto L_DD6E;
    case RC_ADDR(0x0000dd70u): goto L_DD70;
    case RC_ADDR(0x0000dd76u): goto L_DD76;
    case RC_ADDR(0x0000dd7au): goto L_DD7A;
    case RC_ADDR(0x0000dd7eu): goto L_DD7E;
    case RC_ADDR(0x0000dd80u): goto L_DD80;
    case RC_ADDR(0x0000dd82u): goto L_DD82;
    case RC_ADDR(0x0000dd86u): goto L_DD86;
    case RC_ADDR(0x0000dd8au): goto L_DD8A;
    case RC_ADDR(0x0000dd8eu): goto L_DD8E;
    case RC_ADDR(0x0000dd90u): goto L_DD90;
    case RC_ADDR(0x0000dd94u): goto L_DD94;
    case RC_ADDR(0x0000dd96u): goto L_DD96;
    case RC_ADDR(0x0000dd9au): goto L_DD9A;
    case RC_ADDR(0x0000dd9cu): goto L_DD9C;
    case RC_ADDR(0x0000dda0u): goto L_DDA0;
    case RC_ADDR(0x0000dda2u): goto L_DDA2;
    case RC_ADDR(0x0000dda4u): goto L_DDA4;
    case RC_ADDR(0x0000dda8u): goto L_DDA8;
    case RC_ADDR(0x0000ddacu): goto L_DDAC;
    case RC_ADDR(0x0000ddb0u): goto L_DDB0;
    case RC_ADDR(0x0000ddb2u): goto L_DDB2;
    case RC_ADDR(0x0000ddb6u): goto L_DDB6;
    case RC_ADDR(0x0000ddb8u): goto L_DDB8;
    case RC_ADDR(0x0000ddbcu): goto L_DDBC;
    case RC_ADDR(0x0000ddbeu): goto L_DDBE;
    case RC_ADDR(0x0000ddc4u): goto L_DDC4;
    case RC_ADDR(0x0000ddc6u): goto L_DDC6;
    case RC_ADDR(0x0000ddccu): goto L_DDCC;
    case RC_ADDR(0x0000ddd0u): goto L_DDD0;
    case RC_ADDR(0x0000ddd4u): goto L_DDD4;
    case RC_ADDR(0x0000ddd8u): goto L_DDD8;
    case RC_ADDR(0x0000dddau): goto L_DDDA;
    case RC_ADDR(0x0000dddcu): goto L_DDDC;
    case RC_ADDR(0x0000dde0u): goto L_DDE0;
    case RC_ADDR(0x0000dde4u): goto L_DDE4;
    case RC_ADDR(0x0000dde8u): goto L_DDE8;
    case RC_ADDR(0x0000ddeau): goto L_DDEA;
    case RC_ADDR(0x0000ddeeu): goto L_DDEE;
    case RC_ADDR(0x0000ddf0u): goto L_DDF0;
    case RC_ADDR(0x0000ddf4u): goto L_DDF4;
    case RC_ADDR(0x0000ddf6u): goto L_DDF6;
    case RC_ADDR(0x0000ddfau): goto L_DDFA;
    case RC_ADDR(0x0000ddfcu): goto L_DDFC;
    case RC_ADDR(0x0000ddfeu): goto L_DDFE;
    case RC_ADDR(0x0000de02u): goto L_DE02;
    case RC_ADDR(0x0000de06u): goto L_DE06;
    case RC_ADDR(0x0000de0au): goto L_DE0A;
    case RC_ADDR(0x0000de0eu): goto L_DE0E;
    case RC_ADDR(0x0000de10u): goto L_DE10;
    case RC_ADDR(0x0000de12u): goto L_DE12;
    case RC_ADDR(0x0000de16u): goto L_DE16;
    case RC_ADDR(0x0000de18u): goto L_DE18;
    case RC_ADDR(0x0000de1cu): goto L_DE1C;
    case RC_ADDR(0x0000de1eu): goto L_DE1E;
    case RC_ADDR(0x0000de24u): goto L_DE24;
    case RC_ADDR(0x0000de26u): goto L_DE26;
    case RC_ADDR(0x0000de2cu): goto L_DE2C;
    case RC_ADDR(0x0000de30u): goto L_DE30;
    case RC_ADDR(0x0000de34u): goto L_DE34;
    case RC_ADDR(0x0000de36u): goto L_DE36;
    case RC_ADDR(0x0000de3cu): goto L_DE3C;
    case RC_ADDR(0x0000de40u): goto L_DE40;
    case RC_ADDR(0x0000de44u): goto L_DE44;
    case RC_ADDR(0x0000de46u): goto L_DE46;
    case RC_ADDR(0x0000de48u): goto L_DE48;
    case RC_ADDR(0x0000de4au): goto L_DE4A;
    case RC_ADDR(0x0000de4eu): goto L_DE4E;
    case RC_ADDR(0x0000de54u): goto L_DE54;
    case RC_ADDR(0x0000de56u): goto L_DE56;
    case RC_ADDR(0x0000de58u): goto L_DE58;
    case RC_ADDR(0x0000de5au): goto L_DE5A;
    case RC_ADDR(0x0000de5eu): goto L_DE5E;
    case RC_ADDR(0x0000de64u): goto L_DE64;
    case RC_ADDR(0x0000de66u): goto L_DE66;
    case RC_ADDR(0x0000de68u): goto L_DE68;
    case RC_ADDR(0x0000de6au): goto L_DE6A;
    case RC_ADDR(0x0000de6eu): goto L_DE6E;
    case RC_ADDR(0x0000de72u): goto L_DE72;
    case RC_ADDR(0x0000de76u): goto L_DE76;
    case RC_ADDR(0x0000de78u): goto L_DE78;
    case RC_ADDR(0x0000de7cu): goto L_DE7C;
    case RC_ADDR(0x0000de7eu): goto L_DE7E;
    case RC_ADDR(0x0000de82u): goto L_DE82;
    case RC_ADDR(0x0000de84u): goto L_DE84;
    case RC_ADDR(0x0000de86u): goto L_DE86;
    case RC_ADDR(0x0000de88u): goto L_DE88;
    case RC_ADDR(0x0000de8cu): goto L_DE8C;
    case RC_ADDR(0x0000de90u): goto L_DE90;
    case RC_ADDR(0x0000de94u): goto L_DE94;
    case RC_ADDR(0x0000de96u): goto L_DE96;
    case RC_ADDR(0x0000de9au): goto L_DE9A;
    case RC_ADDR(0x0000de9cu): goto L_DE9C;
    case RC_ADDR(0x0000dea0u): goto L_DEA0;
    case RC_ADDR(0x0000dea2u): goto L_DEA2;
    case RC_ADDR(0x0000dea6u): goto L_DEA6;
    case RC_ADDR(0x0000deaau): goto L_DEAA;
    case RC_ADDR(0x0000deacu): goto L_DEAC;
    case RC_ADDR(0x0000deaeu): goto L_DEAE;
    case RC_ADDR(0x0000deb4u): goto L_DEB4;
    case RC_ADDR(0x0000deb6u): goto L_DEB6;
    case RC_ADDR(0x0000debcu): goto L_DEBC;
    case RC_ADDR(0x0000debeu): goto L_DEBE;
    case RC_ADDR(0x0000dec2u): goto L_DEC2;
    case RC_ADDR(0x0000dec8u): goto L_DEC8;
    case RC_ADDR(0x0000deccu): goto L_DECC;
    case RC_ADDR(0x0000ded0u): goto L_DED0;
    case RC_ADDR(0x0000ded2u): goto L_DED2;
    case RC_ADDR(0x0000ded4u): goto L_DED4;
    case RC_ADDR(0x0000ded8u): goto L_DED8;
    case RC_ADDR(0x0000dedcu): goto L_DEDC;
    case RC_ADDR(0x0000dedeu): goto L_DEDE;
    case RC_ADDR(0x0000dee2u): goto L_DEE2;
    case RC_ADDR(0x0000dee4u): goto L_DEE4;
    case RC_ADDR(0x0000dee8u): goto L_DEE8;
    case RC_ADDR(0x0000deeau): goto L_DEEA;
    case RC_ADDR(0x0000def0u): goto L_DEF0;
    case RC_ADDR(0x0000def2u): goto L_DEF2;
    case RC_ADDR(0x0000def8u): goto L_DEF8;
    case RC_ADDR(0x0000defau): goto L_DEFA;
    case RC_ADDR(0x0000defeu): goto L_DEFE;
    case RC_ADDR(0x0000df00u): goto L_DF00;
    case RC_ADDR(0x0000df04u): goto L_DF04;
    case RC_ADDR(0x0000df06u): goto L_DF06;
    case RC_ADDR(0x0000df0au): goto L_DF0A;
    case RC_ADDR(0x0000df0eu): goto L_DF0E;
    case RC_ADDR(0x0000df10u): goto L_DF10;
    case RC_ADDR(0x0000df14u): goto L_DF14;
    case RC_ADDR(0x0000df18u): goto L_DF18;
    case RC_ADDR(0x0000df1au): goto L_DF1A;
    case RC_ADDR(0x0000df20u): goto L_DF20;
    case RC_ADDR(0x0000df22u): goto L_DF22;
    case RC_ADDR(0x0000df26u): goto L_DF26;
    case RC_ADDR(0x0000df28u): goto L_DF28;
    case RC_ADDR(0x0000df2cu): goto L_DF2C;
    case RC_ADDR(0x0000df2eu): goto L_DF2E;
    case RC_ADDR(0x0000df30u): goto L_DF30;
    case RC_ADDR(0x0000df34u): goto L_DF34;
    case RC_ADDR(0x0000df36u): goto L_DF36;
    case RC_ADDR(0x0000df38u): goto L_DF38;
    case RC_ADDR(0x0000df3au): goto L_DF3A;
    case RC_ADDR(0x0000df3cu): goto L_DF3C;
    case RC_ADDR(0x0000df40u): goto L_DF40;
    case RC_ADDR(0x0000df44u): goto L_DF44;
    case RC_ADDR(0x0000df48u): goto L_DF48;
    case RC_ADDR(0x0000df4cu): goto L_DF4C;
    case RC_ADDR(0x0000df50u): goto L_DF50;
    case RC_ADDR(0x0000df52u): goto L_DF52;
    case RC_ADDR(0x0000df56u): goto L_DF56;
    case RC_ADDR(0x0000df5au): goto L_DF5A;
    case RC_ADDR(0x0000df5cu): goto L_DF5C;
    case RC_ADDR(0x0000df60u): goto L_DF60;
    case RC_ADDR(0x0000df64u): goto L_DF64;
    case RC_ADDR(0x0000df66u): goto L_DF66;
    case RC_ADDR(0x0000df6au): goto L_DF6A;
    case RC_ADDR(0x0000df6eu): goto L_DF6E;
    case RC_ADDR(0x0000df70u): goto L_DF70;
    case RC_ADDR(0x0000df74u): goto L_DF74;
    case RC_ADDR(0x0000df78u): goto L_DF78;
    case RC_ADDR(0x0000df7au): goto L_DF7A;
    case RC_ADDR(0x0000df7eu): goto L_DF7E;
    case RC_ADDR(0x0000df82u): goto L_DF82;
    case RC_ADDR(0x0000df84u): goto L_DF84;
    case RC_ADDR(0x0000df8au): goto L_DF8A;
    case RC_ADDR(0x0000df8cu): goto L_DF8C;
    case RC_ADDR(0x0000df92u): goto L_DF92;
    case RC_ADDR(0x0000df96u): goto L_DF96;
    case RC_ADDR(0x0000df98u): goto L_DF98;
    case RC_ADDR(0x0000df9eu): goto L_DF9E;
    case RC_ADDR(0x0000dfa2u): goto L_DFA2;
    case RC_ADDR(0x0000dfa4u): goto L_DFA4;
    case RC_ADDR(0x0000dfaau): goto L_DFAA;
    case RC_ADDR(0x0000dfaeu): goto L_DFAE;
    case RC_ADDR(0x0000dfb0u): goto L_DFB0;
    case RC_ADDR(0x0000dfb6u): goto L_DFB6;
    case RC_ADDR(0x0000dfbcu): goto L_DFBC;
    case RC_ADDR(0x0000dfc2u): goto L_DFC2;
    case RC_ADDR(0x0000dfc6u): goto L_DFC6;
    case RC_ADDR(0x0000dfc8u): goto L_DFC8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_DBFC:
    /* 0000dbfc   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x0000dbfcu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_DC00:
    /* 0000dc00   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000dc00u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_DC04:
    /* 0000dc04   4  tst.w (e74,A4) */
    c->pc = RC_ADDR(0x0000dc04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe74u));
    rc_set_nzvc(c, t0, RC_W);

L_DC08:
    /* 0000dc08   4  bne 0000dca2 */
    c->pc = RC_ADDR(0x0000dc08u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_DCA2;

L_DC0C:
    /* 0000dc0c   4  move.w (ffffb24a,A4),D0 */
    c->pc = RC_ADDR(0x0000dc0cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC10:
    /* 0000dc10   4  muls.w (e7a,A4),D0 */
    c->pc = RC_ADDR(0x0000dc10u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7au));
    rc_muls(c, 0, t0);

L_DC14:
    /* 0000dc14   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000dc14u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC18:
    /* 0000dc18   4  move.w (ffffb24c,A4),D0 */
    c->pc = RC_ADDR(0x0000dc18u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC1C:
    /* 0000dc1c   4  muls.w (e7c,A4),D0 */
    c->pc = RC_ADDR(0x0000dc1cu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7cu));
    rc_muls(c, 0, t0);

L_DC20:
    /* 0000dc20   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000dc20u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC24:
    /* 0000dc24   4  move.w (e76,A4),D0 */
    c->pc = RC_ADDR(0x0000dc24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC28:
    /* 0000dc28   4  add.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000dc28u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DC2C:
    /* 0000dc2c   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000dc2cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC30:
    /* 0000dc30   4  move.w (e78,A4),D0 */
    c->pc = RC_ADDR(0x0000dc30u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC34:
    /* 0000dc34   4  add.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000dc34u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DC38:
    /* 0000dc38   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000dc38u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC3C:
    /* 0000dc3c   4  clr.w (1108,A4) */
    c->pc = RC_ADDR(0x0000dc3cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1108u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DC40:
    /* 0000dc40   4  clr.w (110a,A4) */
    c->pc = RC_ADDR(0x0000dc40u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x110au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DC44:
    /* 0000dc44   4  move.w (1108,A4),D0 */
    c->pc = RC_ADDR(0x0000dc44u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC48:
    /* 0000dc48   4  muls.w (e7a,A4),D0 */
    c->pc = RC_ADDR(0x0000dc48u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7au));
    rc_muls(c, 0, t0);

L_DC4C:
    /* 0000dc4c   4  add.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000dc4cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_DC50:
    /* 0000dc50   4  move.w (110a,A4),D0 */
    c->pc = RC_ADDR(0x0000dc50u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC54:
    /* 0000dc54   4  muls.w (e7c,A4),D0 */
    c->pc = RC_ADDR(0x0000dc54u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7cu));
    rc_muls(c, 0, t0);

L_DC58:
    /* 0000dc58   4  add.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000dc58u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_DC5C:
    /* 0000dc5c   4  move.w (e78,A4),D0 */
    c->pc = RC_ADDR(0x0000dc5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC60:
    /* 0000dc60   4  add.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000dc60u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DC64:
    /* 0000dc64   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000dc64u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC66:
    /* 0000dc66   4  move.w (e76,A4),D0 */
    c->pc = RC_ADDR(0x0000dc66u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC6A:
    /* 0000dc6a   4  add.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000dc6au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DC6E:
    /* 0000dc6e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000dc6eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC70:
    /* 0000dc70   4  jsr (0000f432) */
    c->pc = RC_ADDR(0x0000dc70u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000dc74u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000f432u);
    return;

L_DC74:
    /* 0000dc74   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000dc74u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_DC76:
    /* 0000dc76   4  move.w (fffffffe,A5),-(A7) */
    c->pc = RC_ADDR(0x0000dc76u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC7A:
    /* 0000dc7a   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000dc7au);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000dc7eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_DC7E:
    /* 0000dc7e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000dc7eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_DC80:
    /* 0000dc80   4  muls.w (1108,A4),D0 */
    c->pc = RC_ADDR(0x0000dc80u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1108u));
    rc_muls(c, 0, t0);

L_DC84:
    /* 0000dc84   4  add.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000dc84u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DC88:
    /* 0000dc88   4  add.w D0,(e76,A4) */
    c->pc = RC_ADDR(0x0000dc88u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe76u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_DC8C:
    /* 0000dc8c   4  move.w (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0000dc8cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC90:
    /* 0000dc90   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000dc90u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000dc94u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_DC94:
    /* 0000dc94   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000dc94u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_DC96:
    /* 0000dc96   4  muls.w (110a,A4),D0 */
    c->pc = RC_ADDR(0x0000dc96u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110au));
    rc_muls(c, 0, t0);

L_DC9A:
    /* 0000dc9a   4  add.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000dc9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DC9E:
    /* 0000dc9e   4  add.w D0,(e78,A4) */
    c->pc = RC_ADDR(0x0000dc9eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe78u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_DCA2:
    /* 0000dca2   4  move.w (e74,A4),D0 */
    c->pc = RC_ADDR(0x0000dca2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe74u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DCA6:
    /* 0000dca6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000dca6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_DCA8:
    /* 0000dca8   4  bra 0000df2e */
    c->pc = RC_ADDR(0x0000dca8u);
    rc_step(c, m, 10);
    goto L_DF2E;

L_DCAC:
    /* 0000dcac   4  tst.w (ffffb250,A4) */
    c->pc = RC_ADDR(0x0000dcacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_set_nzvc(c, t0, RC_W);

L_DCB0:
    /* 0000dcb0   2  beq 0000dce4 */
    c->pc = RC_ADDR(0x0000dcb0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_DCE4;

L_DCB2:
    /* 0000dcb2   4  move.w (ffffb250,A4),D0 */
    c->pc = RC_ADDR(0x0000dcb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DCB6:
    /* 0000dcb6   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000dcb6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_DCB8:
    /* 0000dcb8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000dcb8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DCBA:
    /* 0000dcba   4  lea (ffff9bfc,A4),A0 */
    c->pc = RC_ADDR(0x0000dcbau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6404u);

L_DCBE:
    /* 0000dcbe   6  move.w (0,A0,D0.w),(e84,A4) */
    c->pc = RC_ADDR(0x0000dcbeu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[4] + 0xe84u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DCC4:
    /* 0000dcc4   4  move.w (e80,A4),D0 */
    c->pc = RC_ADDR(0x0000dcc4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe80u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DCC8:
    /* 0000dcc8   4  add.w D0,(e7e,A4) */
    c->pc = RC_ADDR(0x0000dcc8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe7eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_DCCC:
    /* 0000dccc   4  tst.w (e7e,A4) */
    c->pc = RC_ADDR(0x0000dcccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7eu));
    rc_set_nzvc(c, t0, RC_W);

L_DCD0:
    /* 0000dcd0   2  beq 0000dcda */
    c->pc = RC_ADDR(0x0000dcd0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_DCDA;

L_DCD2:
    /* 0000dcd2   6  cmpi.w #3,(e7e,A4) */
    c->pc = RC_ADDR(0x0000dcd2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7eu));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_DCD8:
    /* 0000dcd8   2  bne 0000dcde */
    c->pc = RC_ADDR(0x0000dcd8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_DCDE;

L_DCDA:
    /* 0000dcda   4  neg.w (e80,A4) */
    c->pc = RC_ADDR(0x0000dcdau);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe80u);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_DCDE:
    /* 0000dcde   4  clr.w (f06,A4) */
    c->pc = RC_ADDR(0x0000dcdeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xf06u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DCE2:
    /* 0000dce2   2  bra 0000dcf0 */
    c->pc = RC_ADDR(0x0000dce2u);
    rc_step(c, m, 10);
    goto L_DCF0;

L_DCE4:
    /* 0000dce4   4  move.w (e82,A4),D0 */
    c->pc = RC_ADDR(0x0000dce4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe82u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DCE8:
    /* 0000dce8   4  and.w #e,D0 */
    c->pc = RC_ADDR(0x0000dce8u);
    rc_step(c, m, 10);
    t0 = 0x0000000eu;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_DCEC:
    /* 0000dcec   4  move.w D0,(e84,A4) */
    c->pc = RC_ADDR(0x0000dcecu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xe84u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DCF0:
    /* 0000dcf0   4  tst.w (ee2,A4) */
    c->pc = RC_ADDR(0x0000dcf0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xee2u));
    rc_set_nzvc(c, t0, RC_W);

L_DCF4:
    /* 0000dcf4   2  bne 0000dcfe */
    c->pc = RC_ADDR(0x0000dcf4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_DCFE;

L_DCF6:
    /* 0000dcf6   6  move.w (e84,A4),(e82,A4) */
    c->pc = RC_ADDR(0x0000dcf6u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe84u));
    rc_wr16(c, m, (c->a[4] + 0xe82u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DCFC:
    /* 0000dcfc   2  bra 0000dd1e */
    c->pc = RC_ADDR(0x0000dcfcu);
    rc_step(c, m, 10);
    goto L_DD1E;

L_DCFE:
    /* 0000dcfe   4  move.w (e82,A4),D0 */
    c->pc = RC_ADDR(0x0000dcfeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe82u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD02:
    /* 0000dd02   4  cmp.w (e84,A4),D0 */
    c->pc = RC_ADDR(0x0000dd02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe84u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_DD06:
    /* 0000dd06   2  beq 0000dd1e */
    c->pc = RC_ADDR(0x0000dd06u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_DD1E;

L_DD08:
    /* 0000dd08   4  move.w (e84,A4),-(A7) */
    c->pc = RC_ADDR(0x0000dd08u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe84u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD0C:
    /* 0000dd0c   4  move.w (e82,A4),-(A7) */
    c->pc = RC_ADDR(0x0000dd0cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe82u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD10:
    /* 0000dd10   4  jsr (0000ed8a) */
    c->pc = RC_ADDR(0x0000dd10u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000dd14u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ed8au);
    return;

L_DD14:
    /* 0000dd14   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000dd14u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_DD16:
    /* 0000dd16   4  move.w D0,(e82,A4) */
    c->pc = RC_ADDR(0x0000dd16u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xe82u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD1A:
    /* 0000dd1a   4  clr.w (f06,A4) */
    c->pc = RC_ADDR(0x0000dd1au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xf06u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DD1E:
    /* 0000dd1e   4  tst.w (1112,A4) */
    c->pc = RC_ADDR(0x0000dd1eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1112u));
    rc_set_nzvc(c, t0, RC_W);

L_DD22:
    /* 0000dd22   2  bne 0000dd7a */
    c->pc = RC_ADDR(0x0000dd22u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_DD7A;

L_DD24:
    /* 0000dd24   6  cmpi.w #2,(110e,A4) */
    c->pc = RC_ADDR(0x0000dd24u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110eu));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_DD2A:
    /* 0000dd2a   2  bne 0000dd7a */
    c->pc = RC_ADDR(0x0000dd2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_DD7A;

L_DD2C:
    /* 0000dd2c   4  move.w (110c,A4),D0 */
    c->pc = RC_ADDR(0x0000dd2cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD30:
    /* 0000dd30   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000dd30u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_DD32:
    /* 0000dd32   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000dd32u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DD34:
    /* 0000dd34   4  lea (ffff9930,A4),A0 */
    c->pc = RC_ADDR(0x0000dd34u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x66d0u);

L_DD38:
    /* 0000dd38   4  move.w (e76,A4),D1 */
    c->pc = RC_ADDR(0x0000dd38u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD3C:
    /* 0000dd3c   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000dd3cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DD40:
    /* 0000dd40   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000dd40u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD42:
    /* 0000dd42   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000dd42u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000dd46u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_DD46:
    /* 0000dd46   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000dd46u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_DD48:
    /* 0000dd48   4  cmp.w #40,D0 */
    c->pc = RC_ADDR(0x0000dd48u);
    rc_step(c, m, 8);
    t0 = 0x00000040u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_DD4C:
    /* 0000dd4c   2  bgt 0000dd7a */
    c->pc = RC_ADDR(0x0000dd4cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_DD7A;

L_DD4E:
    /* 0000dd4e   4  move.w (110c,A4),D0 */
    c->pc = RC_ADDR(0x0000dd4eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD52:
    /* 0000dd52   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000dd52u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_DD54:
    /* 0000dd54   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000dd54u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DD56:
    /* 0000dd56   4  lea (ffff993c,A4),A0 */
    c->pc = RC_ADDR(0x0000dd56u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x66c4u);

L_DD5A:
    /* 0000dd5a   4  move.w (e78,A4),D1 */
    c->pc = RC_ADDR(0x0000dd5au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD5E:
    /* 0000dd5e   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000dd5eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DD62:
    /* 0000dd62   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000dd62u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD64:
    /* 0000dd64   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000dd64u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000dd68u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_DD68:
    /* 0000dd68   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000dd68u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_DD6A:
    /* 0000dd6a   4  cmp.w #40,D0 */
    c->pc = RC_ADDR(0x0000dd6au);
    rc_step(c, m, 8);
    t0 = 0x00000040u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_DD6E:
    /* 0000dd6e   2  bgt 0000dd7a */
    c->pc = RC_ADDR(0x0000dd6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_DD7A;

L_DD70:
    /* 0000dd70   6  move.w #1,(1112,A4) */
    c->pc = RC_ADDR(0x0000dd70u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1112u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD76:
    /* 0000dd76   4  jsr (ffff812e,A4) */
    c->pc = RC_ADDR(0x0000dd76u);
    rc_step(c, m, 18);
    /* vector 50 */
    rc_push32(c, m, RC_ADDR(0x0000dd7au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c24u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000104f6u);
    return;

L_DD7A:
    /* 0000dd7a   4  move.w (110c,A4),D0 */
    c->pc = RC_ADDR(0x0000dd7au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD7E:
    /* 0000dd7e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000dd7eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_DD80:
    /* 0000dd80   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000dd80u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DD82:
    /* 0000dd82   4  lea (ffff9930,A4),A0 */
    c->pc = RC_ADDR(0x0000dd82u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x66d0u);

L_DD86:
    /* 0000dd86   4  move.w (e76,A4),D1 */
    c->pc = RC_ADDR(0x0000dd86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD8A:
    /* 0000dd8a   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000dd8au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DD8E:
    /* 0000dd8e   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000dd8eu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD90:
    /* 0000dd90   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000dd90u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000dd94u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_DD94:
    /* 0000dd94   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000dd94u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_DD96:
    /* 0000dd96   4  cmp.w #8,D0 */
    c->pc = RC_ADDR(0x0000dd96u);
    rc_step(c, m, 8);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_DD9A:
    /* 0000dd9a   2  bgt 0000ddd4 */
    c->pc = RC_ADDR(0x0000dd9au);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_DDD4;

L_DD9C:
    /* 0000dd9c   4  move.w (110c,A4),D0 */
    c->pc = RC_ADDR(0x0000dd9cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DDA0:
    /* 0000dda0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000dda0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_DDA2:
    /* 0000dda2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000dda2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DDA4:
    /* 0000dda4   4  lea (ffff993c,A4),A0 */
    c->pc = RC_ADDR(0x0000dda4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x66c4u);

L_DDA8:
    /* 0000dda8   4  move.w (e78,A4),D1 */
    c->pc = RC_ADDR(0x0000dda8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DDAC:
    /* 0000ddac   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000ddacu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DDB0:
    /* 0000ddb0   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000ddb0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DDB2:
    /* 0000ddb2   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000ddb2u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000ddb6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_DDB6:
    /* 0000ddb6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000ddb6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_DDB8:
    /* 0000ddb8   4  cmp.w #8,D0 */
    c->pc = RC_ADDR(0x0000ddb8u);
    rc_step(c, m, 8);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_DDBC:
    /* 0000ddbc   2  bgt 0000ddd4 */
    c->pc = RC_ADDR(0x0000ddbcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_DDD4;

L_DDBE:
    /* 0000ddbe   6  cmpi.w #2,(110e,A4) */
    c->pc = RC_ADDR(0x0000ddbeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110eu));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_DDC4:
    /* 0000ddc4   2  bge 0000ddd4 */
    c->pc = RC_ADDR(0x0000ddc4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_DDD4;

L_DDC6:
    /* 0000ddc6   6  move.w #1,(e74,A4) */
    c->pc = RC_ADDR(0x0000ddc6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DDCC:
    /* 0000ddcc   4  clr.w (e7e,A4) */
    c->pc = RC_ADDR(0x0000ddccu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe7eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DDD0:
    /* 0000ddd0   4  bra 0000df3c */
    c->pc = RC_ADDR(0x0000ddd0u);
    rc_step(c, m, 10);
    goto L_DF3C;

L_DDD4:
    /* 0000ddd4   4  move.w (110c,A4),D0 */
    c->pc = RC_ADDR(0x0000ddd4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DDD8:
    /* 0000ddd8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ddd8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_DDDA:
    /* 0000ddda   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000dddau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DDDC:
    /* 0000dddc   4  lea (ffff9918,A4),A0 */
    c->pc = RC_ADDR(0x0000dddcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x66e8u);

L_DDE0:
    /* 0000dde0   4  move.w (e76,A4),D1 */
    c->pc = RC_ADDR(0x0000dde0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DDE4:
    /* 0000dde4   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000dde4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DDE8:
    /* 0000dde8   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000dde8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DDEA:
    /* 0000ddea   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000ddeau);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000ddeeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_DDEE:
    /* 0000ddee   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000ddeeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_DDF0:
    /* 0000ddf0   4  cmp.w #4,D0 */
    c->pc = RC_ADDR(0x0000ddf0u);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_DDF4:
    /* 0000ddf4   2  bgt 0000de44 */
    c->pc = RC_ADDR(0x0000ddf4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_DE44;

L_DDF6:
    /* 0000ddf6   4  move.w (110c,A4),D0 */
    c->pc = RC_ADDR(0x0000ddf6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DDFA:
    /* 0000ddfa   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ddfau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_DDFC:
    /* 0000ddfc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ddfcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DDFE:
    /* 0000ddfe   4  lea (ffff9924,A4),A0 */
    c->pc = RC_ADDR(0x0000ddfeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x66dcu);

L_DE02:
    /* 0000de02   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000de02u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE06:
    /* 0000de06   4  add.w #a,D1 */
    c->pc = RC_ADDR(0x0000de06u);
    rc_step(c, m, 10);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DE0A:
    /* 0000de0a   4  move.w (e78,A4),D0 */
    c->pc = RC_ADDR(0x0000de0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE0E:
    /* 0000de0e   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x0000de0eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DE10:
    /* 0000de10   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000de10u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE12:
    /* 0000de12   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000de12u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000de16u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_DE16:
    /* 0000de16   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000de16u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_DE18:
    /* 0000de18   4  cmp.w #4,D0 */
    c->pc = RC_ADDR(0x0000de18u);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_DE1C:
    /* 0000de1c   2  bgt 0000de44 */
    c->pc = RC_ADDR(0x0000de1cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_DE44;

L_DE1E:
    /* 0000de1e   6  cmpi.w #2,(110e,A4) */
    c->pc = RC_ADDR(0x0000de1eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110eu));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_DE24:
    /* 0000de24   2  blt 0000de44 */
    c->pc = RC_ADDR(0x0000de24u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_DE44;

L_DE26:
    /* 0000de26   6  move.w #2,(e74,A4) */
    c->pc = RC_ADDR(0x0000de26u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0xe74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE2C:
    /* 0000de2c   4  clr.w (e7e,A4) */
    c->pc = RC_ADDR(0x0000de2cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xe7eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DE30:
    /* 0000de30   4  tst.w (1112,A4) */
    c->pc = RC_ADDR(0x0000de30u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1112u));
    rc_set_nzvc(c, t0, RC_W);

L_DE34:
    /* 0000de34   2  beq 0000de44 */
    c->pc = RC_ADDR(0x0000de34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_DE44;

L_DE36:
    /* 0000de36   6  move.w #1,(856,A4) */
    c->pc = RC_ADDR(0x0000de36u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x856u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE3C:
    /* 0000de3c   4  addq.w #1,(1116,A4) */
    c->pc = RC_ADDR(0x0000de3cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1116u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_DE40:
    /* 0000de40   4  bra 0000df3c */
    c->pc = RC_ADDR(0x0000de40u);
    rc_step(c, m, 10);
    goto L_DF3C;

L_DE44:
    /* 0000de44   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000de44u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_DE46:
    /* 0000de46   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000de46u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DE48:
    /* 0000de48   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000de48u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DE4A:
    /* 0000de4a   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000de4au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_DE4E:
    /* 0000de4e   6  cmpi.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000de4eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_DE54:
    /* 0000de54   2  blt 0000deac */
    c->pc = RC_ADDR(0x0000de54u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_DEAC;

L_DE56:
    /* 0000de56   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000de56u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DE58:
    /* 0000de58   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000de58u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DE5A:
    /* 0000de5a   4  lea (c96,A4),A0 */
    c->pc = RC_ADDR(0x0000de5au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc96u);

L_DE5E:
    /* 0000de5e   6  cmpi.w #7,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000de5eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_DE64:
    /* 0000de64   2  bge 0000deac */
    c->pc = RC_ADDR(0x0000de64u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_DEAC;

L_DE66:
    /* 0000de66   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000de66u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DE68:
    /* 0000de68   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000de68u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DE6A:
    /* 0000de6a   4  lea (b04,A4),A0 */
    c->pc = RC_ADDR(0x0000de6au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb04u);

L_DE6E:
    /* 0000de6e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000de6eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE72:
    /* 0000de72   4  sub.w (e76,A4),D1 */
    c->pc = RC_ADDR(0x0000de72u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DE76:
    /* 0000de76   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000de76u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE78:
    /* 0000de78   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000de78u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000de7cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_DE7C:
    /* 0000de7c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000de7cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_DE7E:
    /* 0000de7e   4  cmp.w #8,D0 */
    c->pc = RC_ADDR(0x0000de7eu);
    rc_step(c, m, 8);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_DE82:
    /* 0000de82   2  bgt 0000deac */
    c->pc = RC_ADDR(0x0000de82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_DEAC;

L_DE84:
    /* 0000de84   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000de84u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DE86:
    /* 0000de86   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000de86u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DE88:
    /* 0000de88   4  lea (b14,A4),A0 */
    c->pc = RC_ADDR(0x0000de88u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xb14u);

L_DE8C:
    /* 0000de8c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000de8cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE90:
    /* 0000de90   4  sub.w (e78,A4),D1 */
    c->pc = RC_ADDR(0x0000de90u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DE94:
    /* 0000de94   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000de94u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE96:
    /* 0000de96   4  jsr (ffff81ca,A4) */
    c->pc = RC_ADDR(0x0000de96u);
    rc_step(c, m, 18);
    /* vector 76 */
    rc_push32(c, m, RC_ADDR(0x0000de9au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001bd70u);
    return;

L_DE9A:
    /* 0000de9a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000de9au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_DE9C:
    /* 0000de9c   4  cmp.w #8,D0 */
    c->pc = RC_ADDR(0x0000de9cu);
    rc_step(c, m, 8);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_DEA0:
    /* 0000dea0   2  bgt 0000deac */
    c->pc = RC_ADDR(0x0000dea0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_DEAC;

L_DEA2:
    /* 0000dea2   4  clr.w (856,A4) */
    c->pc = RC_ADDR(0x0000dea2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x856u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DEA6:
    /* 0000dea6   4  addq.w #1,(1116,A4) */
    c->pc = RC_ADDR(0x0000dea6u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1116u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_DEAA:
    /* 0000deaa   2  bra 0000deb6 */
    c->pc = RC_ADDR(0x0000deaau);
    rc_step(c, m, 10);
    goto L_DEB6;

L_DEAC:
    /* 0000deac   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000deacu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_DEAE:
    /* 0000deae   6  cmp.l #8,D4 */
    c->pc = RC_ADDR(0x0000deaeu);
    rc_step(c, m, 14);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_DEB4:
    /* 0000deb4   2  blt 0000de46 */
    c->pc = RC_ADDR(0x0000deb4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_DE46; }

L_DEB6:
    /* 0000deb6   6  cmpi.w #4,(e8a,A4) */
    c->pc = RC_ADDR(0x0000deb6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe8au));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_DEBC:
    /* 0000debc   2  ble 0000decc */
    c->pc = RC_ADDR(0x0000debcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_DECC;

L_DEBE:
    /* 0000debe   4  clr.w (856,A4) */
    c->pc = RC_ADDR(0x0000debeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x856u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DEC2:
    /* 0000dec2   6  move.w #1,(111a,A4) */
    c->pc = RC_ADDR(0x0000dec2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x111au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DEC8:
    /* 0000dec8   4  addq.w #1,(1116,A4) */
    c->pc = RC_ADDR(0x0000dec8u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1116u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_DECC:
    /* 0000decc   4  move.w (e82,A4),D0 */
    c->pc = RC_ADDR(0x0000deccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe82u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DED0:
    /* 0000ded0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ded0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_DED2:
    /* 0000ded2   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000ded2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_DED4:
    /* 0000ded4   4  lea (ffff9c12,A4),A0 */
    c->pc = RC_ADDR(0x0000ded4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x63eeu);

L_DED8:
    /* 0000ded8   4  move.w (e7e,A4),D1 */
    c->pc = RC_ADDR(0x0000ded8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7eu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DEDC:
    /* 0000dedc   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000dedcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_DEDE:
    /* 0000dede   4  move.l (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0000dedeu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DEE2:
    /* 0000dee2   2  add.l D1,D2 */
    c->pc = RC_ADDR(0x0000dee2u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_DEE4:
    /* 0000dee4   4  move.w D2,(e86,A4) */
    c->pc = RC_ADDR(0x0000dee4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xe86u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DEE8:
    /* 0000dee8   2  bra 0000df3c */
    c->pc = RC_ADDR(0x0000dee8u);
    rc_step(c, m, 10);
    goto L_DF3C;

L_DEEA:
    /* 0000deea   6  cmpi.w #7,(e7e,A4) */
    c->pc = RC_ADDR(0x0000deeau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7eu));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_DEF0:
    /* 0000def0   2  bne 0000df06 */
    c->pc = RC_ADDR(0x0000def0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_DF06;

L_DEF2:
    /* 0000def2   6  cmpi.w #2,(110e,A4) */
    c->pc = RC_ADDR(0x0000def2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110eu));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_DEF8:
    /* 0000def8   2  bge 0000df04 */
    c->pc = RC_ADDR(0x0000def8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_DF04;

L_DEFA:
    /* 0000defa   4  move.w (110e,A4),D0 */
    c->pc = RC_ADDR(0x0000defau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DEFE:
    /* 0000defe   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000defeu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DF00:
    /* 0000df00   4  move.w D0,(1110,A4) */
    c->pc = RC_ADDR(0x0000df00u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1110u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DF04:
    /* 0000df04   2  bra 0000df3c */
    c->pc = RC_ADDR(0x0000df04u);
    rc_step(c, m, 10);
    goto L_DF3C;

L_DF06:
    /* 0000df06   4  addq.w #1,(e7e,A4) */
    c->pc = RC_ADDR(0x0000df06u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xe7eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_DF0A:
    /* 0000df0a   4  move.w (e7e,A4),D0 */
    c->pc = RC_ADDR(0x0000df0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DF0E:
    /* 0000df0e   2  asr.w #2,D0 */
    c->pc = RC_ADDR(0x0000df0eu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 0, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_DF10:
    /* 0000df10   4  add.w #20,D0 */
    c->pc = RC_ADDR(0x0000df10u);
    rc_step(c, m, 10);
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DF14:
    /* 0000df14   4  move.w D0,(e86,A4) */
    c->pc = RC_ADDR(0x0000df14u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xe86u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DF18:
    /* 0000df18   2  bra 0000df3c */
    c->pc = RC_ADDR(0x0000df18u);
    rc_step(c, m, 10);
    goto L_DF3C;

L_DF1A:
    /* 0000df1a   6  cmpi.w #2,(110e,A4) */
    c->pc = RC_ADDR(0x0000df1au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110eu));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_DF20:
    /* 0000df20   2  blt 0000df2c */
    c->pc = RC_ADDR(0x0000df20u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_DF2C;

L_DF22:
    /* 0000df22   4  move.w (110e,A4),D0 */
    c->pc = RC_ADDR(0x0000df22u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DF26:
    /* 0000df26   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000df26u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DF28:
    /* 0000df28   4  move.w D0,(1110,A4) */
    c->pc = RC_ADDR(0x0000df28u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1110u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DF2C:
    /* 0000df2c   2  bra 0000df3c */
    c->pc = RC_ADDR(0x0000df2cu);
    rc_step(c, m, 10);
    goto L_DF3C;

L_DF2E:
    /* 0000df2e   2  tst.l D0 */
    c->pc = RC_ADDR(0x0000df2eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_DF30:
    /* 0000df30   4  beq 0000dcac */
    c->pc = RC_ADDR(0x0000df30u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_DCAC; }

L_DF34:
    /* 0000df34   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000df34u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_DF36:
    /* 0000df36   2  beq 0000deea */
    c->pc = RC_ADDR(0x0000df36u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_DEEA; }

L_DF38:
    /* 0000df38   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0000df38u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_DF3A:
    /* 0000df3a   2  beq 0000df1a */
    c->pc = RC_ADDR(0x0000df3au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_DF1A; }

L_DF3C:
    /* 0000df3c   4  move.w (e76,A4),D5 */
    c->pc = RC_ADDR(0x0000df3cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DF40:
    /* 0000df40   4  sub.w (e6c,A4),D5 */
    c->pc = RC_ADDR(0x0000df40u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_DF44:
    /* 0000df44   4  move.w (e78,A4),D6 */
    c->pc = RC_ADDR(0x0000df44u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DF48:
    /* 0000df48   4  sub.w (e6e,A4),D6 */
    c->pc = RC_ADDR(0x0000df48u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6eu));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_DF4C:
    /* 0000df4c   4  tst.w (1118,A4) */
    c->pc = RC_ADDR(0x0000df4cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1118u));
    rc_set_nzvc(c, t0, RC_W);

L_DF50:
    /* 0000df50   2  beq 0000df7a */
    c->pc = RC_ADDR(0x0000df50u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_DF7A;

L_DF52:
    /* 0000df52   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000df52u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DF56:
    /* 0000df56   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0000df56u);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0000df5au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_DF5A:
    /* 0000df5a   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000df5au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_DF5C:
    /* 0000df5c   4  muls.w #320,D0 */
    c->pc = RC_ADDR(0x0000df5cu);
    rc_step(c, m, 42);
    t0 = 0x00000320u;
    rc_muls(c, 0, t0);

L_DF60:
    /* 0000df60   4  sub.w #320,D0 */
    c->pc = RC_ADDR(0x0000df60u);
    rc_step(c, m, 10);
    t0 = 0x00000320u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DF64:
    /* 0000df64   2  add.w D0,D5 */
    c->pc = RC_ADDR(0x0000df64u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_DF66:
    /* 0000df66   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000df66u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DF6A:
    /* 0000df6a   4  jsr (ffff81a6,A4) */
    c->pc = RC_ADDR(0x0000df6au);
    rc_step(c, m, 18);
    /* vector 70 */
    rc_push32(c, m, RC_ADDR(0x0000df6eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c9cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000187eeu);
    return;

L_DF6E:
    /* 0000df6e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000df6eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_DF70:
    /* 0000df70   4  muls.w #190,D0 */
    c->pc = RC_ADDR(0x0000df70u);
    rc_step(c, m, 42);
    t0 = 0x00000190u;
    rc_muls(c, 0, t0);

L_DF74:
    /* 0000df74   4  sub.w #190,D0 */
    c->pc = RC_ADDR(0x0000df74u);
    rc_step(c, m, 10);
    t0 = 0x00000190u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DF78:
    /* 0000df78   2  add.w D0,D6 */
    c->pc = RC_ADDR(0x0000df78u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_DF7A:
    /* 0000df7a   4  clr.w (700,A4) */
    c->pc = RC_ADDR(0x0000df7au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x700u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DF7E:
    /* 0000df7e   4  cmp.w #c8,D5 */
    c->pc = RC_ADDR(0x0000df7eu);
    rc_step(c, m, 8);
    t0 = 0x000000c8u;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_DF82:
    /* 0000df82   2  ble 0000df92 */
    c->pc = RC_ADDR(0x0000df82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_DF92;

L_DF84:
    /* 0000df84   6  cmpi.w #520,(e6c,A4) */
    c->pc = RC_ADDR(0x0000df84u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe6cu));
    rc_cmp(c, RC_W, t0, 0x00000520u);

L_DF8A:
    /* 0000df8a   2  bge 0000df92 */
    c->pc = RC_ADDR(0x0000df8au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_DF92;

L_DF8C:
    /* 0000df8c   6  bset #0,(701,A4) */
    c->pc = RC_ADDR(0x0000df8cu);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_DF92:
    /* 0000df92   4  cmp.w #78,D5 */
    c->pc = RC_ADDR(0x0000df92u);
    rc_step(c, m, 8);
    t0 = 0x00000078u;
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_DF96:
    /* 0000df96   2  bge 0000df9e */
    c->pc = RC_ADDR(0x0000df96u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_DF9E;

L_DF98:
    /* 0000df98   6  bset #1,(701,A4) */
    c->pc = RC_ADDR(0x0000df98u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000001u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_DF9E:
    /* 0000df9e   4  cmp.w #82,D6 */
    c->pc = RC_ADDR(0x0000df9eu);
    rc_step(c, m, 8);
    t0 = 0x00000082u;
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_DFA2:
    /* 0000dfa2   2  ble 0000dfaa */
    c->pc = RC_ADDR(0x0000dfa2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_DFAA;

L_DFA4:
    /* 0000dfa4   6  bset #2,(701,A4) */
    c->pc = RC_ADDR(0x0000dfa4u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_DFAA:
    /* 0000dfaa   4  cmp.w #46,D6 */
    c->pc = RC_ADDR(0x0000dfaau);
    rc_step(c, m, 8);
    t0 = 0x00000046u;
    t1 = rc_d_get(c, 6, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_DFAE:
    /* 0000dfae   2  bge 0000dfb6 */
    c->pc = RC_ADDR(0x0000dfaeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_DFB6;

L_DFB0:
    /* 0000dfb0   6  bset #3,(701,A4) */
    c->pc = RC_ADDR(0x0000dfb0u);
    rc_step(c, m, 20);
    t3 = (c->a[4] + 0x701u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_wr8(c, m, t3, t2);

L_DFB6:
    /* 0000dfb6   6  move.w (e7a,A4),(fffffa2e,A4) */
    c->pc = RC_ADDR(0x0000dfb6u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7au));
    rc_wr16(c, m, (c->a[4] - 0x5d2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DFBC:
    /* 0000dfbc   6  move.w (e7c,A4),(fffffa30,A4) */
    c->pc = RC_ADDR(0x0000dfbcu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe7cu));
    rc_wr16(c, m, (c->a[4] - 0x5d0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DFC2:
    /* 0000dfc2   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = RC_ADDR(0x0000dfc2u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_DFC6:
    /* 0000dfc6   2  unlk A5 */
    c->pc = RC_ADDR(0x0000dfc6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_DFC8:
    /* 0000dfc8   2  rts */
    c->pc = RC_ADDR(0x0000dfc8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
