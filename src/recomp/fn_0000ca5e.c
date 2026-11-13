/* fn_0000ca5e - 2112 byte(s), 608 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000ca5e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000ca5eu): goto L_CA5E;
    case RC_ADDR(0x0000ca62u): goto L_CA62;
    case RC_ADDR(0x0000ca66u): goto L_CA66;
    case RC_ADDR(0x0000ca68u): goto L_CA68;
    case RC_ADDR(0x0000ca6au): goto L_CA6A;
    case RC_ADDR(0x0000ca6eu): goto L_CA6E;
    case RC_ADDR(0x0000ca72u): goto L_CA72;
    case RC_ADDR(0x0000ca76u): goto L_CA76;
    case RC_ADDR(0x0000ca7au): goto L_CA7A;
    case RC_ADDR(0x0000ca7eu): goto L_CA7E;
    case RC_ADDR(0x0000ca80u): goto L_CA80;
    case RC_ADDR(0x0000ca82u): goto L_CA82;
    case RC_ADDR(0x0000ca86u): goto L_CA86;
    case RC_ADDR(0x0000ca8au): goto L_CA8A;
    case RC_ADDR(0x0000ca8eu): goto L_CA8E;
    case RC_ADDR(0x0000ca92u): goto L_CA92;
    case RC_ADDR(0x0000ca96u): goto L_CA96;
    case RC_ADDR(0x0000ca98u): goto L_CA98;
    case RC_ADDR(0x0000ca9cu): goto L_CA9C;
    case RC_ADDR(0x0000caa0u): goto L_CAA0;
    case RC_ADDR(0x0000caa4u): goto L_CAA4;
    case RC_ADDR(0x0000caa8u): goto L_CAA8;
    case RC_ADDR(0x0000caaau): goto L_CAAA;
    case RC_ADDR(0x0000caaeu): goto L_CAAE;
    case RC_ADDR(0x0000cab0u): goto L_CAB0;
    case RC_ADDR(0x0000cab4u): goto L_CAB4;
    case RC_ADDR(0x0000cab6u): goto L_CAB6;
    case RC_ADDR(0x0000cabau): goto L_CABA;
    case RC_ADDR(0x0000cabeu): goto L_CABE;
    case RC_ADDR(0x0000cac2u): goto L_CAC2;
    case RC_ADDR(0x0000cac4u): goto L_CAC4;
    case RC_ADDR(0x0000cac6u): goto L_CAC6;
    case RC_ADDR(0x0000cacau): goto L_CACA;
    case RC_ADDR(0x0000caceu): goto L_CACE;
    case RC_ADDR(0x0000cad2u): goto L_CAD2;
    case RC_ADDR(0x0000cad6u): goto L_CAD6;
    case RC_ADDR(0x0000cadau): goto L_CADA;
    case RC_ADDR(0x0000cadcu): goto L_CADC;
    case RC_ADDR(0x0000cae0u): goto L_CAE0;
    case RC_ADDR(0x0000cae2u): goto L_CAE2;
    case RC_ADDR(0x0000cae6u): goto L_CAE6;
    case RC_ADDR(0x0000cae8u): goto L_CAE8;
    case RC_ADDR(0x0000caecu): goto L_CAEC;
    case RC_ADDR(0x0000caf0u): goto L_CAF0;
    case RC_ADDR(0x0000caf4u): goto L_CAF4;
    case RC_ADDR(0x0000caf6u): goto L_CAF6;
    case RC_ADDR(0x0000cafau): goto L_CAFA;
    case RC_ADDR(0x0000cafcu): goto L_CAFC;
    case RC_ADDR(0x0000cb00u): goto L_CB00;
    case RC_ADDR(0x0000cb02u): goto L_CB02;
    case RC_ADDR(0x0000cb06u): goto L_CB06;
    case RC_ADDR(0x0000cb0au): goto L_CB0A;
    case RC_ADDR(0x0000cb0eu): goto L_CB0E;
    case RC_ADDR(0x0000cb12u): goto L_CB12;
    case RC_ADDR(0x0000cb16u): goto L_CB16;
    case RC_ADDR(0x0000cb18u): goto L_CB18;
    case RC_ADDR(0x0000cb1au): goto L_CB1A;
    case RC_ADDR(0x0000cb1eu): goto L_CB1E;
    case RC_ADDR(0x0000cb22u): goto L_CB22;
    case RC_ADDR(0x0000cb24u): goto L_CB24;
    case RC_ADDR(0x0000cb28u): goto L_CB28;
    case RC_ADDR(0x0000cb2cu): goto L_CB2C;
    case RC_ADDR(0x0000cb30u): goto L_CB30;
    case RC_ADDR(0x0000cb32u): goto L_CB32;
    case RC_ADDR(0x0000cb36u): goto L_CB36;
    case RC_ADDR(0x0000cb3au): goto L_CB3A;
    case RC_ADDR(0x0000cb3eu): goto L_CB3E;
    case RC_ADDR(0x0000cb42u): goto L_CB42;
    case RC_ADDR(0x0000cb46u): goto L_CB46;
    case RC_ADDR(0x0000cb4au): goto L_CB4A;
    case RC_ADDR(0x0000cb4eu): goto L_CB4E;
    case RC_ADDR(0x0000cb52u): goto L_CB52;
    case RC_ADDR(0x0000cb54u): goto L_CB54;
    case RC_ADDR(0x0000cb58u): goto L_CB58;
    case RC_ADDR(0x0000cb5cu): goto L_CB5C;
    case RC_ADDR(0x0000cb60u): goto L_CB60;
    case RC_ADDR(0x0000cb62u): goto L_CB62;
    case RC_ADDR(0x0000cb66u): goto L_CB66;
    case RC_ADDR(0x0000cb68u): goto L_CB68;
    case RC_ADDR(0x0000cb6cu): goto L_CB6C;
    case RC_ADDR(0x0000cb70u): goto L_CB70;
    case RC_ADDR(0x0000cb74u): goto L_CB74;
    case RC_ADDR(0x0000cb76u): goto L_CB76;
    case RC_ADDR(0x0000cb7au): goto L_CB7A;
    case RC_ADDR(0x0000cb7eu): goto L_CB7E;
    case RC_ADDR(0x0000cb82u): goto L_CB82;
    case RC_ADDR(0x0000cb84u): goto L_CB84;
    case RC_ADDR(0x0000cb88u): goto L_CB88;
    case RC_ADDR(0x0000cb8au): goto L_CB8A;
    case RC_ADDR(0x0000cb8eu): goto L_CB8E;
    case RC_ADDR(0x0000cb90u): goto L_CB90;
    case RC_ADDR(0x0000cb94u): goto L_CB94;
    case RC_ADDR(0x0000cb9cu): goto L_CB9C;
    case RC_ADDR(0x0000cb9eu): goto L_CB9E;
    case RC_ADDR(0x0000cba2u): goto L_CBA2;
    case RC_ADDR(0x0000cba4u): goto L_CBA4;
    case RC_ADDR(0x0000cba8u): goto L_CBA8;
    case RC_ADDR(0x0000cbaeu): goto L_CBAE;
    case RC_ADDR(0x0000cbb2u): goto L_CBB2;
    case RC_ADDR(0x0000cbb4u): goto L_CBB4;
    case RC_ADDR(0x0000cbb8u): goto L_CBB8;
    case RC_ADDR(0x0000cbbeu): goto L_CBBE;
    case RC_ADDR(0x0000cbc2u): goto L_CBC2;
    case RC_ADDR(0x0000cbc4u): goto L_CBC4;
    case RC_ADDR(0x0000cbc8u): goto L_CBC8;
    case RC_ADDR(0x0000cbceu): goto L_CBCE;
    case RC_ADDR(0x0000cbd2u): goto L_CBD2;
    case RC_ADDR(0x0000cbd4u): goto L_CBD4;
    case RC_ADDR(0x0000cbd8u): goto L_CBD8;
    case RC_ADDR(0x0000cbdcu): goto L_CBDC;
    case RC_ADDR(0x0000cbe0u): goto L_CBE0;
    case RC_ADDR(0x0000cbe2u): goto L_CBE2;
    case RC_ADDR(0x0000cbe6u): goto L_CBE6;
    case RC_ADDR(0x0000cbecu): goto L_CBEC;
    case RC_ADDR(0x0000cbf0u): goto L_CBF0;
    case RC_ADDR(0x0000cbf2u): goto L_CBF2;
    case RC_ADDR(0x0000cbf6u): goto L_CBF6;
    case RC_ADDR(0x0000cbfcu): goto L_CBFC;
    case RC_ADDR(0x0000cc00u): goto L_CC00;
    case RC_ADDR(0x0000cc04u): goto L_CC04;
    case RC_ADDR(0x0000cc06u): goto L_CC06;
    case RC_ADDR(0x0000cc0au): goto L_CC0A;
    case RC_ADDR(0x0000cc0eu): goto L_CC0E;
    case RC_ADDR(0x0000cc12u): goto L_CC12;
    case RC_ADDR(0x0000cc14u): goto L_CC14;
    case RC_ADDR(0x0000cc16u): goto L_CC16;
    case RC_ADDR(0x0000cc1au): goto L_CC1A;
    case RC_ADDR(0x0000cc1cu): goto L_CC1C;
    case RC_ADDR(0x0000cc20u): goto L_CC20;
    case RC_ADDR(0x0000cc26u): goto L_CC26;
    case RC_ADDR(0x0000cc2au): goto L_CC2A;
    case RC_ADDR(0x0000cc2cu): goto L_CC2C;
    case RC_ADDR(0x0000cc30u): goto L_CC30;
    case RC_ADDR(0x0000cc34u): goto L_CC34;
    case RC_ADDR(0x0000cc38u): goto L_CC38;
    case RC_ADDR(0x0000cc3cu): goto L_CC3C;
    case RC_ADDR(0x0000cc3eu): goto L_CC3E;
    case RC_ADDR(0x0000cc42u): goto L_CC42;
    case RC_ADDR(0x0000cc44u): goto L_CC44;
    case RC_ADDR(0x0000cc48u): goto L_CC48;
    case RC_ADDR(0x0000cc4eu): goto L_CC4E;
    case RC_ADDR(0x0000cc52u): goto L_CC52;
    case RC_ADDR(0x0000cc54u): goto L_CC54;
    case RC_ADDR(0x0000cc58u): goto L_CC58;
    case RC_ADDR(0x0000cc5cu): goto L_CC5C;
    case RC_ADDR(0x0000cc60u): goto L_CC60;
    case RC_ADDR(0x0000cc64u): goto L_CC64;
    case RC_ADDR(0x0000cc68u): goto L_CC68;
    case RC_ADDR(0x0000cc6au): goto L_CC6A;
    case RC_ADDR(0x0000cc6eu): goto L_CC6E;
    case RC_ADDR(0x0000cc72u): goto L_CC72;
    case RC_ADDR(0x0000cc74u): goto L_CC74;
    case RC_ADDR(0x0000cc78u): goto L_CC78;
    case RC_ADDR(0x0000cc7au): goto L_CC7A;
    case RC_ADDR(0x0000cc7eu): goto L_CC7E;
    case RC_ADDR(0x0000cc82u): goto L_CC82;
    case RC_ADDR(0x0000cc84u): goto L_CC84;
    case RC_ADDR(0x0000cc88u): goto L_CC88;
    case RC_ADDR(0x0000cc8cu): goto L_CC8C;
    case RC_ADDR(0x0000cc90u): goto L_CC90;
    case RC_ADDR(0x0000cc92u): goto L_CC92;
    case RC_ADDR(0x0000cc96u): goto L_CC96;
    case RC_ADDR(0x0000cc98u): goto L_CC98;
    case RC_ADDR(0x0000cc9cu): goto L_CC9C;
    case RC_ADDR(0x0000cc9eu): goto L_CC9E;
    case RC_ADDR(0x0000cca2u): goto L_CCA2;
    case RC_ADDR(0x0000cca4u): goto L_CCA4;
    case RC_ADDR(0x0000cca8u): goto L_CCA8;
    case RC_ADDR(0x0000ccacu): goto L_CCAC;
    case RC_ADDR(0x0000ccaeu): goto L_CCAE;
    case RC_ADDR(0x0000ccb2u): goto L_CCB2;
    case RC_ADDR(0x0000ccb6u): goto L_CCB6;
    case RC_ADDR(0x0000ccbau): goto L_CCBA;
    case RC_ADDR(0x0000ccbcu): goto L_CCBC;
    case RC_ADDR(0x0000ccc0u): goto L_CCC0;
    case RC_ADDR(0x0000ccc2u): goto L_CCC2;
    case RC_ADDR(0x0000ccc6u): goto L_CCC6;
    case RC_ADDR(0x0000ccc8u): goto L_CCC8;
    case RC_ADDR(0x0000ccccu): goto L_CCCC;
    case RC_ADDR(0x0000ccceu): goto L_CCCE;
    case RC_ADDR(0x0000ccd2u): goto L_CCD2;
    case RC_ADDR(0x0000ccd8u): goto L_CCD8;
    case RC_ADDR(0x0000ccdcu): goto L_CCDC;
    case RC_ADDR(0x0000cce0u): goto L_CCE0;
    case RC_ADDR(0x0000cce8u): goto L_CCE8;
    case RC_ADDR(0x0000ccecu): goto L_CCEC;
    case RC_ADDR(0x0000ccf0u): goto L_CCF0;
    case RC_ADDR(0x0000ccf2u): goto L_CCF2;
    case RC_ADDR(0x0000ccf6u): goto L_CCF6;
    case RC_ADDR(0x0000ccfcu): goto L_CCFC;
    case RC_ADDR(0x0000cd00u): goto L_CD00;
    case RC_ADDR(0x0000cd04u): goto L_CD04;
    case RC_ADDR(0x0000cd06u): goto L_CD06;
    case RC_ADDR(0x0000cd08u): goto L_CD08;
    case RC_ADDR(0x0000cd0cu): goto L_CD0C;
    case RC_ADDR(0x0000cd12u): goto L_CD12;
    case RC_ADDR(0x0000cd18u): goto L_CD18;
    case RC_ADDR(0x0000cd1cu): goto L_CD1C;
    case RC_ADDR(0x0000cd1eu): goto L_CD1E;
    case RC_ADDR(0x0000cd22u): goto L_CD22;
    case RC_ADDR(0x0000cd26u): goto L_CD26;
    case RC_ADDR(0x0000cd2au): goto L_CD2A;
    case RC_ADDR(0x0000cd2cu): goto L_CD2C;
    case RC_ADDR(0x0000cd30u): goto L_CD30;
    case RC_ADDR(0x0000cd32u): goto L_CD32;
    case RC_ADDR(0x0000cd36u): goto L_CD36;
    case RC_ADDR(0x0000cd38u): goto L_CD38;
    case RC_ADDR(0x0000cd3cu): goto L_CD3C;
    case RC_ADDR(0x0000cd3eu): goto L_CD3E;
    case RC_ADDR(0x0000cd42u): goto L_CD42;
    case RC_ADDR(0x0000cd48u): goto L_CD48;
    case RC_ADDR(0x0000cd4cu): goto L_CD4C;
    case RC_ADDR(0x0000cd4eu): goto L_CD4E;
    case RC_ADDR(0x0000cd52u): goto L_CD52;
    case RC_ADDR(0x0000cd56u): goto L_CD56;
    case RC_ADDR(0x0000cd5au): goto L_CD5A;
    case RC_ADDR(0x0000cd5cu): goto L_CD5C;
    case RC_ADDR(0x0000cd60u): goto L_CD60;
    case RC_ADDR(0x0000cd62u): goto L_CD62;
    case RC_ADDR(0x0000cd66u): goto L_CD66;
    case RC_ADDR(0x0000cd68u): goto L_CD68;
    case RC_ADDR(0x0000cd6cu): goto L_CD6C;
    case RC_ADDR(0x0000cd6eu): goto L_CD6E;
    case RC_ADDR(0x0000cd72u): goto L_CD72;
    case RC_ADDR(0x0000cd78u): goto L_CD78;
    case RC_ADDR(0x0000cd7cu): goto L_CD7C;
    case RC_ADDR(0x0000cd7eu): goto L_CD7E;
    case RC_ADDR(0x0000cd82u): goto L_CD82;
    case RC_ADDR(0x0000cd86u): goto L_CD86;
    case RC_ADDR(0x0000cd8au): goto L_CD8A;
    case RC_ADDR(0x0000cd8cu): goto L_CD8C;
    case RC_ADDR(0x0000cd92u): goto L_CD92;
    case RC_ADDR(0x0000cd96u): goto L_CD96;
    case RC_ADDR(0x0000cd98u): goto L_CD98;
    case RC_ADDR(0x0000cd9cu): goto L_CD9C;
    case RC_ADDR(0x0000cda0u): goto L_CDA0;
    case RC_ADDR(0x0000cda4u): goto L_CDA4;
    case RC_ADDR(0x0000cda6u): goto L_CDA6;
    case RC_ADDR(0x0000cdaau): goto L_CDAA;
    case RC_ADDR(0x0000cdaeu): goto L_CDAE;
    case RC_ADDR(0x0000cdb0u): goto L_CDB0;
    case RC_ADDR(0x0000cdb4u): goto L_CDB4;
    case RC_ADDR(0x0000cdb8u): goto L_CDB8;
    case RC_ADDR(0x0000cdbcu): goto L_CDBC;
    case RC_ADDR(0x0000cdbeu): goto L_CDBE;
    case RC_ADDR(0x0000cdc4u): goto L_CDC4;
    case RC_ADDR(0x0000cdc8u): goto L_CDC8;
    case RC_ADDR(0x0000cdcau): goto L_CDCA;
    case RC_ADDR(0x0000cdceu): goto L_CDCE;
    case RC_ADDR(0x0000cdd2u): goto L_CDD2;
    case RC_ADDR(0x0000cdd6u): goto L_CDD6;
    case RC_ADDR(0x0000cdd8u): goto L_CDD8;
    case RC_ADDR(0x0000cddcu): goto L_CDDC;
    case RC_ADDR(0x0000cddeu): goto L_CDDE;
    case RC_ADDR(0x0000cde2u): goto L_CDE2;
    case RC_ADDR(0x0000cde6u): goto L_CDE6;
    case RC_ADDR(0x0000cde8u): goto L_CDE8;
    case RC_ADDR(0x0000cdecu): goto L_CDEC;
    case RC_ADDR(0x0000cdf0u): goto L_CDF0;
    case RC_ADDR(0x0000cdf4u): goto L_CDF4;
    case RC_ADDR(0x0000cdf6u): goto L_CDF6;
    case RC_ADDR(0x0000cdfau): goto L_CDFA;
    case RC_ADDR(0x0000cdfeu): goto L_CDFE;
    case RC_ADDR(0x0000ce00u): goto L_CE00;
    case RC_ADDR(0x0000ce02u): goto L_CE02;
    case RC_ADDR(0x0000ce06u): goto L_CE06;
    case RC_ADDR(0x0000ce08u): goto L_CE08;
    case RC_ADDR(0x0000ce0au): goto L_CE0A;
    case RC_ADDR(0x0000ce0cu): goto L_CE0C;
    case RC_ADDR(0x0000ce10u): goto L_CE10;
    case RC_ADDR(0x0000ce14u): goto L_CE14;
    case RC_ADDR(0x0000ce18u): goto L_CE18;
    case RC_ADDR(0x0000ce1au): goto L_CE1A;
    case RC_ADDR(0x0000ce1eu): goto L_CE1E;
    case RC_ADDR(0x0000ce22u): goto L_CE22;
    case RC_ADDR(0x0000ce26u): goto L_CE26;
    case RC_ADDR(0x0000ce28u): goto L_CE28;
    case RC_ADDR(0x0000ce2cu): goto L_CE2C;
    case RC_ADDR(0x0000ce2eu): goto L_CE2E;
    case RC_ADDR(0x0000ce32u): goto L_CE32;
    case RC_ADDR(0x0000ce36u): goto L_CE36;
    case RC_ADDR(0x0000ce3au): goto L_CE3A;
    case RC_ADDR(0x0000ce3cu): goto L_CE3C;
    case RC_ADDR(0x0000ce40u): goto L_CE40;
    case RC_ADDR(0x0000ce44u): goto L_CE44;
    case RC_ADDR(0x0000ce46u): goto L_CE46;
    case RC_ADDR(0x0000ce48u): goto L_CE48;
    case RC_ADDR(0x0000ce4cu): goto L_CE4C;
    case RC_ADDR(0x0000ce50u): goto L_CE50;
    case RC_ADDR(0x0000ce52u): goto L_CE52;
    case RC_ADDR(0x0000ce56u): goto L_CE56;
    case RC_ADDR(0x0000ce5au): goto L_CE5A;
    case RC_ADDR(0x0000ce5cu): goto L_CE5C;
    case RC_ADDR(0x0000ce5eu): goto L_CE5E;
    case RC_ADDR(0x0000ce62u): goto L_CE62;
    case RC_ADDR(0x0000ce66u): goto L_CE66;
    case RC_ADDR(0x0000ce68u): goto L_CE68;
    case RC_ADDR(0x0000ce6cu): goto L_CE6C;
    case RC_ADDR(0x0000ce6eu): goto L_CE6E;
    case RC_ADDR(0x0000ce72u): goto L_CE72;
    case RC_ADDR(0x0000ce76u): goto L_CE76;
    case RC_ADDR(0x0000ce7au): goto L_CE7A;
    case RC_ADDR(0x0000ce7eu): goto L_CE7E;
    case RC_ADDR(0x0000ce80u): goto L_CE80;
    case RC_ADDR(0x0000ce84u): goto L_CE84;
    case RC_ADDR(0x0000ce88u): goto L_CE88;
    case RC_ADDR(0x0000ce8au): goto L_CE8A;
    case RC_ADDR(0x0000ce8cu): goto L_CE8C;
    case RC_ADDR(0x0000ce90u): goto L_CE90;
    case RC_ADDR(0x0000ce94u): goto L_CE94;
    case RC_ADDR(0x0000ce96u): goto L_CE96;
    case RC_ADDR(0x0000ce9au): goto L_CE9A;
    case RC_ADDR(0x0000ce9cu): goto L_CE9C;
    case RC_ADDR(0x0000cea0u): goto L_CEA0;
    case RC_ADDR(0x0000cea4u): goto L_CEA4;
    case RC_ADDR(0x0000cea8u): goto L_CEA8;
    case RC_ADDR(0x0000ceb0u): goto L_CEB0;
    case RC_ADDR(0x0000ceb4u): goto L_CEB4;
    case RC_ADDR(0x0000ceb8u): goto L_CEB8;
    case RC_ADDR(0x0000cebau): goto L_CEBA;
    case RC_ADDR(0x0000cebeu): goto L_CEBE;
    case RC_ADDR(0x0000cec2u): goto L_CEC2;
    case RC_ADDR(0x0000cec6u): goto L_CEC6;
    case RC_ADDR(0x0000cec8u): goto L_CEC8;
    case RC_ADDR(0x0000ceccu): goto L_CECC;
    case RC_ADDR(0x0000ced0u): goto L_CED0;
    case RC_ADDR(0x0000ced4u): goto L_CED4;
    case RC_ADDR(0x0000ced8u): goto L_CED8;
    case RC_ADDR(0x0000cedau): goto L_CEDA;
    case RC_ADDR(0x0000cedeu): goto L_CEDE;
    case RC_ADDR(0x0000cee2u): goto L_CEE2;
    case RC_ADDR(0x0000cee4u): goto L_CEE4;
    case RC_ADDR(0x0000cee8u): goto L_CEE8;
    case RC_ADDR(0x0000ceeau): goto L_CEEA;
    case RC_ADDR(0x0000ceeeu): goto L_CEEE;
    case RC_ADDR(0x0000cef2u): goto L_CEF2;
    case RC_ADDR(0x0000cef6u): goto L_CEF6;
    case RC_ADDR(0x0000cef8u): goto L_CEF8;
    case RC_ADDR(0x0000cefcu): goto L_CEFC;
    case RC_ADDR(0x0000cf00u): goto L_CF00;
    case RC_ADDR(0x0000cf04u): goto L_CF04;
    case RC_ADDR(0x0000cf08u): goto L_CF08;
    case RC_ADDR(0x0000cf0au): goto L_CF0A;
    case RC_ADDR(0x0000cf0eu): goto L_CF0E;
    case RC_ADDR(0x0000cf12u): goto L_CF12;
    case RC_ADDR(0x0000cf14u): goto L_CF14;
    case RC_ADDR(0x0000cf18u): goto L_CF18;
    case RC_ADDR(0x0000cf1au): goto L_CF1A;
    case RC_ADDR(0x0000cf1eu): goto L_CF1E;
    case RC_ADDR(0x0000cf20u): goto L_CF20;
    case RC_ADDR(0x0000cf24u): goto L_CF24;
    case RC_ADDR(0x0000cf26u): goto L_CF26;
    case RC_ADDR(0x0000cf2au): goto L_CF2A;
    case RC_ADDR(0x0000cf30u): goto L_CF30;
    case RC_ADDR(0x0000cf32u): goto L_CF32;
    case RC_ADDR(0x0000cf36u): goto L_CF36;
    case RC_ADDR(0x0000cf38u): goto L_CF38;
    case RC_ADDR(0x0000cf3cu): goto L_CF3C;
    case RC_ADDR(0x0000cf42u): goto L_CF42;
    case RC_ADDR(0x0000cf44u): goto L_CF44;
    case RC_ADDR(0x0000cf48u): goto L_CF48;
    case RC_ADDR(0x0000cf4au): goto L_CF4A;
    case RC_ADDR(0x0000cf4eu): goto L_CF4E;
    case RC_ADDR(0x0000cf54u): goto L_CF54;
    case RC_ADDR(0x0000cf58u): goto L_CF58;
    case RC_ADDR(0x0000cf5au): goto L_CF5A;
    case RC_ADDR(0x0000cf5eu): goto L_CF5E;
    case RC_ADDR(0x0000cf64u): goto L_CF64;
    case RC_ADDR(0x0000cf68u): goto L_CF68;
    case RC_ADDR(0x0000cf6cu): goto L_CF6C;
    case RC_ADDR(0x0000cf6eu): goto L_CF6E;
    case RC_ADDR(0x0000cf72u): goto L_CF72;
    case RC_ADDR(0x0000cf76u): goto L_CF76;
    case RC_ADDR(0x0000cf78u): goto L_CF78;
    case RC_ADDR(0x0000cf7cu): goto L_CF7C;
    case RC_ADDR(0x0000cf80u): goto L_CF80;
    case RC_ADDR(0x0000cf82u): goto L_CF82;
    case RC_ADDR(0x0000cf86u): goto L_CF86;
    case RC_ADDR(0x0000cf8au): goto L_CF8A;
    case RC_ADDR(0x0000cf8eu): goto L_CF8E;
    case RC_ADDR(0x0000cf92u): goto L_CF92;
    case RC_ADDR(0x0000cf9au): goto L_CF9A;
    case RC_ADDR(0x0000cf9eu): goto L_CF9E;
    case RC_ADDR(0x0000cfa2u): goto L_CFA2;
    case RC_ADDR(0x0000cfa4u): goto L_CFA4;
    case RC_ADDR(0x0000cfa8u): goto L_CFA8;
    case RC_ADDR(0x0000cfacu): goto L_CFAC;
    case RC_ADDR(0x0000cfb0u): goto L_CFB0;
    case RC_ADDR(0x0000cfb2u): goto L_CFB2;
    case RC_ADDR(0x0000cfb6u): goto L_CFB6;
    case RC_ADDR(0x0000cfbau): goto L_CFBA;
    case RC_ADDR(0x0000cfbeu): goto L_CFBE;
    case RC_ADDR(0x0000cfc0u): goto L_CFC0;
    case RC_ADDR(0x0000cfc4u): goto L_CFC4;
    case RC_ADDR(0x0000cfc8u): goto L_CFC8;
    case RC_ADDR(0x0000cfccu): goto L_CFCC;
    case RC_ADDR(0x0000cfd0u): goto L_CFD0;
    case RC_ADDR(0x0000cfd4u): goto L_CFD4;
    case RC_ADDR(0x0000cfd6u): goto L_CFD6;
    case RC_ADDR(0x0000cfdau): goto L_CFDA;
    case RC_ADDR(0x0000cfdeu): goto L_CFDE;
    case RC_ADDR(0x0000cfe2u): goto L_CFE2;
    case RC_ADDR(0x0000cfe4u): goto L_CFE4;
    case RC_ADDR(0x0000cfe8u): goto L_CFE8;
    case RC_ADDR(0x0000cfeau): goto L_CFEA;
    case RC_ADDR(0x0000cfeeu): goto L_CFEE;
    case RC_ADDR(0x0000cff2u): goto L_CFF2;
    case RC_ADDR(0x0000cff6u): goto L_CFF6;
    case RC_ADDR(0x0000cff8u): goto L_CFF8;
    case RC_ADDR(0x0000cffcu): goto L_CFFC;
    case RC_ADDR(0x0000cffeu): goto L_CFFE;
    case RC_ADDR(0x0000d002u): goto L_D002;
    case RC_ADDR(0x0000d006u): goto L_D006;
    case RC_ADDR(0x0000d008u): goto L_D008;
    case RC_ADDR(0x0000d00cu): goto L_D00C;
    case RC_ADDR(0x0000d00eu): goto L_D00E;
    case RC_ADDR(0x0000d010u): goto L_D010;
    case RC_ADDR(0x0000d012u): goto L_D012;
    case RC_ADDR(0x0000d016u): goto L_D016;
    case RC_ADDR(0x0000d018u): goto L_D018;
    case RC_ADDR(0x0000d01au): goto L_D01A;
    case RC_ADDR(0x0000d01cu): goto L_D01C;
    case RC_ADDR(0x0000d01eu): goto L_D01E;
    case RC_ADDR(0x0000d022u): goto L_D022;
    case RC_ADDR(0x0000d026u): goto L_D026;
    case RC_ADDR(0x0000d02au): goto L_D02A;
    case RC_ADDR(0x0000d02cu): goto L_D02C;
    case RC_ADDR(0x0000d030u): goto L_D030;
    case RC_ADDR(0x0000d034u): goto L_D034;
    case RC_ADDR(0x0000d038u): goto L_D038;
    case RC_ADDR(0x0000d03au): goto L_D03A;
    case RC_ADDR(0x0000d03eu): goto L_D03E;
    case RC_ADDR(0x0000d040u): goto L_D040;
    case RC_ADDR(0x0000d044u): goto L_D044;
    case RC_ADDR(0x0000d048u): goto L_D048;
    case RC_ADDR(0x0000d04cu): goto L_D04C;
    case RC_ADDR(0x0000d04eu): goto L_D04E;
    case RC_ADDR(0x0000d052u): goto L_D052;
    case RC_ADDR(0x0000d054u): goto L_D054;
    case RC_ADDR(0x0000d058u): goto L_D058;
    case RC_ADDR(0x0000d05au): goto L_D05A;
    case RC_ADDR(0x0000d05eu): goto L_D05E;
    case RC_ADDR(0x0000d060u): goto L_D060;
    case RC_ADDR(0x0000d064u): goto L_D064;
    case RC_ADDR(0x0000d066u): goto L_D066;
    case RC_ADDR(0x0000d06au): goto L_D06A;
    case RC_ADDR(0x0000d06cu): goto L_D06C;
    case RC_ADDR(0x0000d070u): goto L_D070;
    case RC_ADDR(0x0000d074u): goto L_D074;
    case RC_ADDR(0x0000d076u): goto L_D076;
    case RC_ADDR(0x0000d07au): goto L_D07A;
    case RC_ADDR(0x0000d07cu): goto L_D07C;
    case RC_ADDR(0x0000d080u): goto L_D080;
    case RC_ADDR(0x0000d084u): goto L_D084;
    case RC_ADDR(0x0000d088u): goto L_D088;
    case RC_ADDR(0x0000d08au): goto L_D08A;
    case RC_ADDR(0x0000d08eu): goto L_D08E;
    case RC_ADDR(0x0000d094u): goto L_D094;
    case RC_ADDR(0x0000d096u): goto L_D096;
    case RC_ADDR(0x0000d09au): goto L_D09A;
    case RC_ADDR(0x0000d09cu): goto L_D09C;
    case RC_ADDR(0x0000d0a0u): goto L_D0A0;
    case RC_ADDR(0x0000d0a4u): goto L_D0A4;
    case RC_ADDR(0x0000d0aau): goto L_D0AA;
    case RC_ADDR(0x0000d0aeu): goto L_D0AE;
    case RC_ADDR(0x0000d0b2u): goto L_D0B2;
    case RC_ADDR(0x0000d0b4u): goto L_D0B4;
    case RC_ADDR(0x0000d0b8u): goto L_D0B8;
    case RC_ADDR(0x0000d0bcu): goto L_D0BC;
    case RC_ADDR(0x0000d0c0u): goto L_D0C0;
    case RC_ADDR(0x0000d0c2u): goto L_D0C2;
    case RC_ADDR(0x0000d0c6u): goto L_D0C6;
    case RC_ADDR(0x0000d0c8u): goto L_D0C8;
    case RC_ADDR(0x0000d0ccu): goto L_D0CC;
    case RC_ADDR(0x0000d0ceu): goto L_D0CE;
    case RC_ADDR(0x0000d0d2u): goto L_D0D2;
    case RC_ADDR(0x0000d0d4u): goto L_D0D4;
    case RC_ADDR(0x0000d0d8u): goto L_D0D8;
    case RC_ADDR(0x0000d0dcu): goto L_D0DC;
    case RC_ADDR(0x0000d0e0u): goto L_D0E0;
    case RC_ADDR(0x0000d0e2u): goto L_D0E2;
    case RC_ADDR(0x0000d0e6u): goto L_D0E6;
    case RC_ADDR(0x0000d0e8u): goto L_D0E8;
    case RC_ADDR(0x0000d0ecu): goto L_D0EC;
    case RC_ADDR(0x0000d0eeu): goto L_D0EE;
    case RC_ADDR(0x0000d0f2u): goto L_D0F2;
    case RC_ADDR(0x0000d0f4u): goto L_D0F4;
    case RC_ADDR(0x0000d0f8u): goto L_D0F8;
    case RC_ADDR(0x0000d0feu): goto L_D0FE;
    case RC_ADDR(0x0000d102u): goto L_D102;
    case RC_ADDR(0x0000d104u): goto L_D104;
    case RC_ADDR(0x0000d108u): goto L_D108;
    case RC_ADDR(0x0000d10eu): goto L_D10E;
    case RC_ADDR(0x0000d112u): goto L_D112;
    case RC_ADDR(0x0000d114u): goto L_D114;
    case RC_ADDR(0x0000d118u): goto L_D118;
    case RC_ADDR(0x0000d11eu): goto L_D11E;
    case RC_ADDR(0x0000d122u): goto L_D122;
    case RC_ADDR(0x0000d124u): goto L_D124;
    case RC_ADDR(0x0000d128u): goto L_D128;
    case RC_ADDR(0x0000d12eu): goto L_D12E;
    case RC_ADDR(0x0000d132u): goto L_D132;
    case RC_ADDR(0x0000d134u): goto L_D134;
    case RC_ADDR(0x0000d138u): goto L_D138;
    case RC_ADDR(0x0000d13cu): goto L_D13C;
    case RC_ADDR(0x0000d140u): goto L_D140;
    case RC_ADDR(0x0000d144u): goto L_D144;
    case RC_ADDR(0x0000d148u): goto L_D148;
    case RC_ADDR(0x0000d14cu): goto L_D14C;
    case RC_ADDR(0x0000d14eu): goto L_D14E;
    case RC_ADDR(0x0000d152u): goto L_D152;
    case RC_ADDR(0x0000d154u): goto L_D154;
    case RC_ADDR(0x0000d156u): goto L_D156;
    case RC_ADDR(0x0000d15au): goto L_D15A;
    case RC_ADDR(0x0000d15eu): goto L_D15E;
    case RC_ADDR(0x0000d160u): goto L_D160;
    case RC_ADDR(0x0000d162u): goto L_D162;
    case RC_ADDR(0x0000d164u): goto L_D164;
    case RC_ADDR(0x0000d166u): goto L_D166;
    case RC_ADDR(0x0000d16au): goto L_D16A;
    case RC_ADDR(0x0000d16cu): goto L_D16C;
    case RC_ADDR(0x0000d170u): goto L_D170;
    case RC_ADDR(0x0000d176u): goto L_D176;
    case RC_ADDR(0x0000d178u): goto L_D178;
    case RC_ADDR(0x0000d17cu): goto L_D17C;
    case RC_ADDR(0x0000d17eu): goto L_D17E;
    case RC_ADDR(0x0000d182u): goto L_D182;
    case RC_ADDR(0x0000d186u): goto L_D186;
    case RC_ADDR(0x0000d18au): goto L_D18A;
    case RC_ADDR(0x0000d18cu): goto L_D18C;
    case RC_ADDR(0x0000d190u): goto L_D190;
    case RC_ADDR(0x0000d194u): goto L_D194;
    case RC_ADDR(0x0000d198u): goto L_D198;
    case RC_ADDR(0x0000d19au): goto L_D19A;
    case RC_ADDR(0x0000d19cu): goto L_D19C;
    case RC_ADDR(0x0000d1a0u): goto L_D1A0;
    case RC_ADDR(0x0000d1a2u): goto L_D1A2;
    case RC_ADDR(0x0000d1a6u): goto L_D1A6;
    case RC_ADDR(0x0000d1acu): goto L_D1AC;
    case RC_ADDR(0x0000d1b0u): goto L_D1B0;
    case RC_ADDR(0x0000d1b2u): goto L_D1B2;
    case RC_ADDR(0x0000d1b6u): goto L_D1B6;
    case RC_ADDR(0x0000d1bcu): goto L_D1BC;
    case RC_ADDR(0x0000d1c0u): goto L_D1C0;
    case RC_ADDR(0x0000d1c4u): goto L_D1C4;
    case RC_ADDR(0x0000d1c6u): goto L_D1C6;
    case RC_ADDR(0x0000d1cau): goto L_D1CA;
    case RC_ADDR(0x0000d1d0u): goto L_D1D0;
    case RC_ADDR(0x0000d1d2u): goto L_D1D2;
    case RC_ADDR(0x0000d1d6u): goto L_D1D6;
    case RC_ADDR(0x0000d1d8u): goto L_D1D8;
    case RC_ADDR(0x0000d1dcu): goto L_D1DC;
    case RC_ADDR(0x0000d1e2u): goto L_D1E2;
    case RC_ADDR(0x0000d1e4u): goto L_D1E4;
    case RC_ADDR(0x0000d1e8u): goto L_D1E8;
    case RC_ADDR(0x0000d1eau): goto L_D1EA;
    case RC_ADDR(0x0000d1eeu): goto L_D1EE;
    case RC_ADDR(0x0000d1f2u): goto L_D1F2;
    case RC_ADDR(0x0000d1f6u): goto L_D1F6;
    case RC_ADDR(0x0000d1fau): goto L_D1FA;
    case RC_ADDR(0x0000d1fcu): goto L_D1FC;
    case RC_ADDR(0x0000d200u): goto L_D200;
    case RC_ADDR(0x0000d204u): goto L_D204;
    case RC_ADDR(0x0000d206u): goto L_D206;
    case RC_ADDR(0x0000d20au): goto L_D20A;
    case RC_ADDR(0x0000d20cu): goto L_D20C;
    case RC_ADDR(0x0000d210u): goto L_D210;
    case RC_ADDR(0x0000d216u): goto L_D216;
    case RC_ADDR(0x0000d218u): goto L_D218;
    case RC_ADDR(0x0000d21cu): goto L_D21C;
    case RC_ADDR(0x0000d21eu): goto L_D21E;
    case RC_ADDR(0x0000d222u): goto L_D222;
    case RC_ADDR(0x0000d226u): goto L_D226;
    case RC_ADDR(0x0000d228u): goto L_D228;
    case RC_ADDR(0x0000d22cu): goto L_D22C;
    case RC_ADDR(0x0000d22eu): goto L_D22E;
    case RC_ADDR(0x0000d232u): goto L_D232;
    case RC_ADDR(0x0000d236u): goto L_D236;
    case RC_ADDR(0x0000d23au): goto L_D23A;
    case RC_ADDR(0x0000d23cu): goto L_D23C;
    case RC_ADDR(0x0000d240u): goto L_D240;
    case RC_ADDR(0x0000d242u): goto L_D242;
    case RC_ADDR(0x0000d246u): goto L_D246;
    case RC_ADDR(0x0000d248u): goto L_D248;
    case RC_ADDR(0x0000d24cu): goto L_D24C;
    case RC_ADDR(0x0000d24eu): goto L_D24E;
    case RC_ADDR(0x0000d252u): goto L_D252;
    case RC_ADDR(0x0000d256u): goto L_D256;
    case RC_ADDR(0x0000d25au): goto L_D25A;
    case RC_ADDR(0x0000d25cu): goto L_D25C;
    case RC_ADDR(0x0000d260u): goto L_D260;
    case RC_ADDR(0x0000d262u): goto L_D262;
    case RC_ADDR(0x0000d266u): goto L_D266;
    case RC_ADDR(0x0000d268u): goto L_D268;
    case RC_ADDR(0x0000d26cu): goto L_D26C;
    case RC_ADDR(0x0000d26eu): goto L_D26E;
    case RC_ADDR(0x0000d272u): goto L_D272;
    case RC_ADDR(0x0000d276u): goto L_D276;
    case RC_ADDR(0x0000d288u): goto L_D288;
    case RC_ADDR(0x0000d28eu): goto L_D28E;
    case RC_ADDR(0x0000d290u): goto L_D290;
    case RC_ADDR(0x0000d292u): goto L_D292;
    case RC_ADDR(0x0000d296u): goto L_D296;
    case RC_ADDR(0x0000d29au): goto L_D29A;
    case RC_ADDR(0x0000d29eu): goto L_D29E;
    case RC_ADDR(0x0000d2a6u): goto L_D2A6;
    case RC_ADDR(0x0000d2aau): goto L_D2AA;
    case RC_ADDR(0x0000d2acu): goto L_D2AC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_CA5E:
    /* 0000ca5e   4  link.w A5,#fffffff0 */
    c->pc = RC_ADDR(0x0000ca5eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x10u;

L_CA62:
    /* 0000ca62   4  move.w (486,A4),D0 */
    c->pc = RC_ADDR(0x0000ca62u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x486u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA66:
    /* 0000ca66   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ca66u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_CA68:
    /* 0000ca68   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ca68u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CA6A:
    /* 0000ca6a   4  lea (ffff97a4,A4),A0 */
    c->pc = RC_ADDR(0x0000ca6au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x685cu);

L_CA6E:
    /* 0000ca6e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000ca6eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA72:
    /* 0000ca72   4  add.w (47a,A4),D1 */
    c->pc = RC_ADDR(0x0000ca72u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_CA76:
    /* 0000ca76   4  move.w D1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0000ca76u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA7A:
    /* 0000ca7a   4  move.w (486,A4),D0 */
    c->pc = RC_ADDR(0x0000ca7au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x486u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA7E:
    /* 0000ca7e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000ca7eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_CA80:
    /* 0000ca80   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ca80u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CA82:
    /* 0000ca82   4  lea (ffff97c4,A4),A0 */
    c->pc = RC_ADDR(0x0000ca82u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x683cu);

L_CA86:
    /* 0000ca86   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000ca86u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA8A:
    /* 0000ca8a   4  add.w (47c,A4),D1 */
    c->pc = RC_ADDR(0x0000ca8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_CA8E:
    /* 0000ca8e   4  move.w D1,(fffffff0,A5) */
    c->pc = RC_ADDR(0x0000ca8eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CA92:
    /* 0000ca92   4  tst.w (720,A4) */
    c->pc = RC_ADDR(0x0000ca92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x720u));
    rc_set_nzvc(c, t0, RC_W);

L_CA96:
    /* 0000ca96   2  beq 0000caa0 */
    c->pc = RC_ADDR(0x0000ca96u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_CAA0;

L_CA98:
    /* 0000ca98   4  subq.w #1,(720,A4) */
    c->pc = RC_ADDR(0x0000ca98u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x720u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_CA9C:
    /* 0000ca9c   4  bra 0000d2aa */
    c->pc = RC_ADDR(0x0000ca9cu);
    rc_step(c, m, 10);
    goto L_D2AA;

L_CAA0:
    /* 0000caa0   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000caa0u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_CAA4:
    /* 0000caa4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000caa4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CAA8:
    /* 0000caa8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000caa8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CAAA:
    /* 0000caaa   4  lea (256,A4),A0 */
    c->pc = RC_ADDR(0x0000caaau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x256u);

L_CAAE:
    /* 0000caae   2  move.l D0,D1 */
    c->pc = RC_ADDR(0x0000caaeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CAB0:
    /* 0000cab0   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000cab0u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CAB4:
    /* 0000cab4   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000cab4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_CAB6:
    /* 0000cab6   4  bra 0000d288 */
    c->pc = RC_ADDR(0x0000cab6u);
    rc_step(c, m, 10);
    goto L_D288;

L_CABA:
    /* 0000caba   4  move.w (73a,A4),-(A7) */
    c->pc = RC_ADDR(0x0000cabau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x73au));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CABE:
    /* 0000cabe   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0000cabeu);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000cac2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_CAC2:
    /* 0000cac2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000cac2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_CAC4:
    /* 0000cac4   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000cac4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_CAC6:
    /* 0000cac6   4  bne 0000cbfc */
    c->pc = RC_ADDR(0x0000cac6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_CBFC;

L_CACA:
    /* 0000caca   4  tst.w (716,A4) */
    c->pc = RC_ADDR(0x0000cacau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x716u));
    rc_set_nzvc(c, t0, RC_W);

L_CACE:
    /* 0000cace   4  bne 0000cbfc */
    c->pc = RC_ADDR(0x0000caceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_CBFC;

L_CAD2:
    /* 0000cad2   4  move.w #a,-(A7) */
    c->pc = RC_ADDR(0x0000cad2u);
    rc_step(c, m, 12);
    t0 = 0x0000000au;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CAD6:
    /* 0000cad6   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0000cad6u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000cadau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_CADA:
    /* 0000cada   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000cadau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_CADC:
    /* 0000cadc   4  move.w (470,A4),D1 */
    c->pc = RC_ADDR(0x0000cadcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CAE0:
    /* 0000cae0   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000cae0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_CAE2:
    /* 0000cae2   4  divs.w #20,D1 */
    c->pc = RC_ADDR(0x0000cae2u);
    rc_step(c, m, 162);
    t0 = 0x00000020u;
    rc_divs(c, m, 1, t0);

L_CAE6:
    /* 0000cae6   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x0000cae6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_CAE8:
    /* 0000cae8   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000cae8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CAEC:
    /* 0000caec   4  move.w #7,-(A7) */
    c->pc = RC_ADDR(0x0000caecu);
    rc_step(c, m, 12);
    t0 = 0x00000007u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CAF0:
    /* 0000caf0   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0000caf0u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000caf4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_CAF4:
    /* 0000caf4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000caf4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_CAF6:
    /* 0000caf6   4  move.w (472,A4),D1 */
    c->pc = RC_ADDR(0x0000caf6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CAFA:
    /* 0000cafa   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000cafau);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_CAFC:
    /* 0000cafc   4  divs.w #1b,D1 */
    c->pc = RC_ADDR(0x0000cafcu);
    rc_step(c, m, 162);
    t0 = 0x0000001bu;
    rc_divs(c, m, 1, t0);

L_CB00:
    /* 0000cb00   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x0000cb00u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_CB02:
    /* 0000cb02   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000cb02u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CB06:
    /* 0000cb06   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0000cb06u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CB0A:
    /* 0000cb0a   4  muls.w #27,D0 */
    c->pc = RC_ADDR(0x0000cb0au);
    rc_step(c, m, 42);
    t0 = 0x00000027u;
    rc_muls(c, 0, t0);

L_CB0E:
    /* 0000cb0e   4  add.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0000cb0eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_CB12:
    /* 0000cb12   4  add.w #28,D0 */
    c->pc = RC_ADDR(0x0000cb12u);
    rc_step(c, m, 10);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_CB16:
    /* 0000cb16   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000cb16u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_CB18:
    /* 0000cb18   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cb18u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CB1A:
    /* 0000cb1a   4  movea.l (fffff2f8,A4),A0 */
    c->pc = RC_ADDR(0x0000cb1au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_CB1E:
    /* 0000cb1e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000cb1eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CB22:
    /* 0000cb22   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000cb22u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_CB24:
    /* 0000cb24   4  cmp.w #29,D1 */
    c->pc = RC_ADDR(0x0000cb24u);
    rc_step(c, m, 8);
    t0 = 0x00000029u;
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_CB28:
    /* 0000cb28   4  bne 0000cbfc */
    c->pc = RC_ADDR(0x0000cb28u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_CBFC;

L_CB2C:
    /* 0000cb2c   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0000cb2cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CB30:
    /* 0000cb30   2  asl.w #5,D0 */
    c->pc = RC_ADDR(0x0000cb30u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W));

L_CB32:
    /* 0000cb32   4  add.w #10,D0 */
    c->pc = RC_ADDR(0x0000cb32u);
    rc_step(c, m, 10);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_CB36:
    /* 0000cb36   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000cb36u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CB3A:
    /* 0000cb3a   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0000cb3au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CB3E:
    /* 0000cb3e   4  muls.w #1b,D0 */
    c->pc = RC_ADDR(0x0000cb3eu);
    rc_step(c, m, 42);
    t0 = 0x0000001bu;
    rc_muls(c, 0, t0);

L_CB42:
    /* 0000cb42   4  add.w #e,D0 */
    c->pc = RC_ADDR(0x0000cb42u);
    rc_step(c, m, 10);
    t0 = 0x0000000eu;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_CB46:
    /* 0000cb46   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000cb46u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CB4A:
    /* 0000cb4a   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000cb4au);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_CB4E:
    /* 0000cb4e   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000cb4eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CB52:
    /* 0000cb52   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cb52u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CB54:
    /* 0000cb54   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000cb54u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_CB58:
    /* 0000cb58   4  move.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x0000cb58u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CB5C:
    /* 0000cb5c   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000cb5cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_CB60:
    /* 0000cb60   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000cb60u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CB62:
    /* 0000cb62   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x0000cb62u);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x0000cb66u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_CB66:
    /* 0000cb66   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000cb66u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_CB68:
    /* 0000cb68   4  cmp.w #14,D0 */
    c->pc = RC_ADDR(0x0000cb68u);
    rc_step(c, m, 8);
    t0 = 0x00000014u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_CB6C:
    /* 0000cb6c   4  blt 0000cbfc */
    c->pc = RC_ADDR(0x0000cb6cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_CBFC;

L_CB70:
    /* 0000cb70   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000cb70u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CB74:
    /* 0000cb74   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cb74u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CB76:
    /* 0000cb76   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000cb76u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_CB7A:
    /* 0000cb7a   4  move.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x0000cb7au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CB7E:
    /* 0000cb7e   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000cb7eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_CB82:
    /* 0000cb82   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000cb82u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CB84:
    /* 0000cb84   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x0000cb84u);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x0000cb88u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_CB88:
    /* 0000cb88   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000cb88u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_CB8A:
    /* 0000cb8a   4  cmp.w #14,D0 */
    c->pc = RC_ADDR(0x0000cb8au);
    rc_step(c, m, 8);
    t0 = 0x00000014u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_CB8E:
    /* 0000cb8e   2  blt 0000cbfc */
    c->pc = RC_ADDR(0x0000cb8eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_CBFC;

L_CB90:
    /* 0000cb90   4  addq.l #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000cb90u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_CB94:
    /* 0000cb94   8  cmpi.l #8,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000cb94u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x00000008u);

L_CB9C:
    /* 0000cb9c   2  blt 0000cb4e */
    c->pc = RC_ADDR(0x0000cb9cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_CB4E; }

L_CB9E:
    /* 0000cb9e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cb9eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CBA2:
    /* 0000cba2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cba2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CBA4:
    /* 0000cba4   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000cba4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_CBA8:
    /* 0000cba8   6  move.w (fffffff6,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cba8u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CBAE:
    /* 0000cbae   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cbaeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CBB2:
    /* 0000cbb2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cbb2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CBB4:
    /* 0000cbb4   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000cbb4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_CBB8:
    /* 0000cbb8   6  move.w (fffffff4,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cbb8u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CBBE:
    /* 0000cbbe   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cbbeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CBC2:
    /* 0000cbc2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cbc2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CBC4:
    /* 0000cbc4   4  lea (256,A4),A0 */
    c->pc = RC_ADDR(0x0000cbc4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x256u);

L_CBC8:
    /* 0000cbc8   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cbc8u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CBCE:
    /* 0000cbce   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cbceu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CBD2:
    /* 0000cbd2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cbd2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CBD4:
    /* 0000cbd4   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000cbd4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_CBD8:
    /* 0000cbd8   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cbd8u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CBDC:
    /* 0000cbdc   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cbdcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CBE0:
    /* 0000cbe0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cbe0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CBE2:
    /* 0000cbe2   4  lea (4b0,A4),A0 */
    c->pc = RC_ADDR(0x0000cbe2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4b0u);

L_CBE6:
    /* 0000cbe6   6  move.w #e,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cbe6u);
    rc_step(c, m, 18);
    t0 = 0x0000000eu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CBEC:
    /* 0000cbec   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cbecu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CBF0:
    /* 0000cbf0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cbf0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CBF2:
    /* 0000cbf2   4  lea (e6,A4),A0 */
    c->pc = RC_ADDR(0x0000cbf2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xe6u);

L_CBF6:
    /* 0000cbf6   6  move.w #3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cbf6u);
    rc_step(c, m, 18);
    t0 = 0x00000003u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CBFC:
    /* 0000cbfc   4  bra 0000d29a */
    c->pc = RC_ADDR(0x0000cbfcu);
    rc_step(c, m, 10);
    goto L_D29A;

L_CC00:
    /* 0000cc00   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cc00u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CC04:
    /* 0000cc04   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cc04u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CC06:
    /* 0000cc06   4  lea (e6,A4),A0 */
    c->pc = RC_ADDR(0x0000cc06u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xe6u);

L_CC0A:
    /* 0000cc0a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000cc0au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC0E:
    /* 0000cc0e   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cc0eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_CC12:
    /* 0000cc12   2  tst.w D1 */
    c->pc = RC_ADDR(0x0000cc12u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_CC14:
    /* 0000cc14   2  bne 0000cc5c */
    c->pc = RC_ADDR(0x0000cc14u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_CC5C;

L_CC16:
    /* 0000cc16   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cc16u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CC1A:
    /* 0000cc1a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cc1au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CC1C:
    /* 0000cc1c   4  lea (e6,A4),A0 */
    c->pc = RC_ADDR(0x0000cc1cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xe6u);

L_CC20:
    /* 0000cc20   6  move.w #3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cc20u);
    rc_step(c, m, 18);
    t0 = 0x00000003u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC26:
    /* 0000cc26   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cc26u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CC2A:
    /* 0000cc2a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cc2au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CC2C:
    /* 0000cc2c   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000cc2cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_CC30:
    /* 0000cc30   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000cc30u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC34:
    /* 0000cc34   4  addq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cc34u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_CC38:
    /* 0000cc38   4  cmp.w #2,D1 */
    c->pc = RC_ADDR(0x0000cc38u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_CC3C:
    /* 0000cc3c   2  bne 0000cc5c */
    c->pc = RC_ADDR(0x0000cc3cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_CC5C;

L_CC3E:
    /* 0000cc3e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cc3eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CC42:
    /* 0000cc42   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cc42u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CC44:
    /* 0000cc44   4  lea (256,A4),A0 */
    c->pc = RC_ADDR(0x0000cc44u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x256u);

L_CC48:
    /* 0000cc48   6  move.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cc48u);
    rc_step(c, m, 18);
    t0 = 0x00000002u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC4E:
    /* 0000cc4e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cc4eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CC52:
    /* 0000cc52   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cc52u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CC54:
    /* 0000cc54   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000cc54u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_CC58:
    /* 0000cc58   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cc58u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CC5C:
    /* 0000cc5c   4  bra 0000d29a */
    c->pc = RC_ADDR(0x0000cc5cu);
    rc_step(c, m, 10);
    goto L_D29A;

L_CC60:
    /* 0000cc60   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000cc60u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_CC64:
    /* 0000cc64   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000cc64u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CC68:
    /* 0000cc68   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cc68u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CC6A:
    /* 0000cc6a   4  lea (4ea,A4),A0 */
    c->pc = RC_ADDR(0x0000cc6au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4eau);

L_CC6E:
    /* 0000cc6e   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cc6eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_CC72:
    /* 0000cc72   2  beq 0000ccdc */
    c->pc = RC_ADDR(0x0000cc72u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_CCDC;

L_CC74:
    /* 0000cc74   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000cc74u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CC78:
    /* 0000cc78   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cc78u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CC7A:
    /* 0000cc7a   4  lea (4f2,A4),A0 */
    c->pc = RC_ADDR(0x0000cc7au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4f2u);

L_CC7E:
    /* 0000cc7e   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0000cc7eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CC82:
    /* 0000cc82   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000cc82u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_CC84:
    /* 0000cc84   4  lea (c4,A4),A1 */
    c->pc = RC_ADDR(0x0000cc84u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0xc4u);

L_CC88:
    /* 0000cc88   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0000cc88u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC8C:
    /* 0000cc8c   4  sub.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0000cc8cu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_CC90:
    /* 0000cc90   2  move.w D2,-(A7) */
    c->pc = RC_ADDR(0x0000cc90u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CC92:
    /* 0000cc92   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x0000cc92u);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x0000cc96u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_CC96:
    /* 0000cc96   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000cc96u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_CC98:
    /* 0000cc98   4  cmp.w #8,D0 */
    c->pc = RC_ADDR(0x0000cc98u);
    rc_step(c, m, 8);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_CC9C:
    /* 0000cc9c   2  bge 0000ccdc */
    c->pc = RC_ADDR(0x0000cc9cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_CCDC;

L_CC9E:
    /* 0000cc9e   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000cc9eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CCA2:
    /* 0000cca2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cca2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CCA4:
    /* 0000cca4   4  lea (4fa,A4),A0 */
    c->pc = RC_ADDR(0x0000cca4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4fau);

L_CCA8:
    /* 0000cca8   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0000cca8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CCAC:
    /* 0000ccac   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000ccacu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_CCAE:
    /* 0000ccae   4  lea (d4,A4),A1 */
    c->pc = RC_ADDR(0x0000ccaeu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0xd4u);

L_CCB2:
    /* 0000ccb2   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0000ccb2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CCB6:
    /* 0000ccb6   4  sub.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0000ccb6u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_CCBA:
    /* 0000ccba   2  move.w D2,-(A7) */
    c->pc = RC_ADDR(0x0000ccbau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 2, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CCBC:
    /* 0000ccbc   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x0000ccbcu);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x0000ccc0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_CCC0:
    /* 0000ccc0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000ccc0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_CCC2:
    /* 0000ccc2   4  cmp.w #8,D0 */
    c->pc = RC_ADDR(0x0000ccc2u);
    rc_step(c, m, 8);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_CCC6:
    /* 0000ccc6   2  bge 0000ccdc */
    c->pc = RC_ADDR(0x0000ccc6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_CCDC;

L_CCC8:
    /* 0000ccc8   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ccc8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CCCC:
    /* 0000cccc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ccccu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CCCE:
    /* 0000ccce   4  lea (256,A4),A0 */
    c->pc = RC_ADDR(0x0000ccceu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x256u);

L_CCD2:
    /* 0000ccd2   6  move.w #3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ccd2u);
    rc_step(c, m, 18);
    t0 = 0x00000003u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CCD8:
    /* 0000ccd8   4  bra 0000d076 */
    c->pc = RC_ADDR(0x0000ccd8u);
    rc_step(c, m, 10);
    goto L_D076;

L_CCDC:
    /* 0000ccdc   4  addq.l #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000ccdcu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_CCE0:
    /* 0000cce0   8  cmpi.l #4,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000cce0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x00000004u);

L_CCE8:
    /* 0000cce8   4  blt 0000cc64 */
    c->pc = RC_ADDR(0x0000cce8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_CC64; }

L_CCEC:
    /* 0000ccec   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ccecu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CCF0:
    /* 0000ccf0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ccf0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CCF2:
    /* 0000ccf2   4  lea (256,A4),A0 */
    c->pc = RC_ADDR(0x0000ccf2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x256u);

L_CCF6:
    /* 0000ccf6   6  move.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000ccf6u);
    rc_step(c, m, 18);
    t0 = 0x00000002u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CCFC:
    /* 0000ccfc   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x0000ccfcu);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CD00:
    /* 0000cd00   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0000cd00u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000cd04u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_CD04:
    /* 0000cd04   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000cd04u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_CD06:
    /* 0000cd06   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000cd06u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_CD08:
    /* 0000cd08   4  beq 0000cdde */
    c->pc = RC_ADDR(0x0000cd08u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_CDDE;

L_CD0C:
    /* 0000cd0c   6  move.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000cd0cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CD12:
    /* 0000cd12   6  move.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000cd12u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CD18:
    /* 0000cd18   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cd18u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CD1C:
    /* 0000cd1c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cd1cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CD1E:
    /* 0000cd1e   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000cd1eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_CD22:
    /* 0000cd22   4  move.w (47a,A4),D1 */
    c->pc = RC_ADDR(0x0000cd22u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CD26:
    /* 0000cd26   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000cd26u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_CD2A:
    /* 0000cd2a   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000cd2au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CD2C:
    /* 0000cd2c   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x0000cd2cu);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x0000cd30u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_CD30:
    /* 0000cd30   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000cd30u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_CD32:
    /* 0000cd32   4  cmp.w #2,D0 */
    c->pc = RC_ADDR(0x0000cd32u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_CD36:
    /* 0000cd36   2  bge 0000cd48 */
    c->pc = RC_ADDR(0x0000cd36u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_CD48;

L_CD38:
    /* 0000cd38   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cd38u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CD3C:
    /* 0000cd3c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cd3cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CD3E:
    /* 0000cd3e   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000cd3eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_CD42:
    /* 0000cd42   6  move.w (47a,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cd42u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CD48:
    /* 0000cd48   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cd48u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CD4C:
    /* 0000cd4c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cd4cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CD4E:
    /* 0000cd4e   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000cd4eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_CD52:
    /* 0000cd52   4  move.w (47c,A4),D1 */
    c->pc = RC_ADDR(0x0000cd52u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CD56:
    /* 0000cd56   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000cd56u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_CD5A:
    /* 0000cd5a   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000cd5au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CD5C:
    /* 0000cd5c   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x0000cd5cu);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x0000cd60u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_CD60:
    /* 0000cd60   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000cd60u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_CD62:
    /* 0000cd62   4  cmp.w #2,D0 */
    c->pc = RC_ADDR(0x0000cd62u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_CD66:
    /* 0000cd66   2  bge 0000cd78 */
    c->pc = RC_ADDR(0x0000cd66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_CD78;

L_CD68:
    /* 0000cd68   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cd68u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CD6C:
    /* 0000cd6c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cd6cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CD6E:
    /* 0000cd6e   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000cd6eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_CD72:
    /* 0000cd72   6  move.w (47c,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cd72u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CD78:
    /* 0000cd78   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cd78u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CD7C:
    /* 0000cd7c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cd7cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CD7E:
    /* 0000cd7e   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000cd7eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_CD82:
    /* 0000cd82   4  move.w (47a,A4),D1 */
    c->pc = RC_ADDR(0x0000cd82u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CD86:
    /* 0000cd86   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000cd86u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_CD8A:
    /* 0000cd8a   2  ble 0000cd92 */
    c->pc = RC_ADDR(0x0000cd8au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_CD92;

L_CD8C:
    /* 0000cd8c   6  move.w #2,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000cd8cu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CD92:
    /* 0000cd92   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cd92u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CD96:
    /* 0000cd96   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cd96u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CD98:
    /* 0000cd98   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000cd98u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_CD9C:
    /* 0000cd9c   4  move.w (47a,A4),D1 */
    c->pc = RC_ADDR(0x0000cd9cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CDA0:
    /* 0000cda0   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000cda0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_CDA4:
    /* 0000cda4   2  bge 0000cdaa */
    c->pc = RC_ADDR(0x0000cda4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_CDAA;

L_CDA6:
    /* 0000cda6   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x0000cda6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CDAA:
    /* 0000cdaa   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cdaau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CDAE:
    /* 0000cdae   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cdaeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CDB0:
    /* 0000cdb0   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000cdb0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_CDB4:
    /* 0000cdb4   4  move.w (47c,A4),D1 */
    c->pc = RC_ADDR(0x0000cdb4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CDB8:
    /* 0000cdb8   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000cdb8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_CDBC:
    /* 0000cdbc   2  ble 0000cdc4 */
    c->pc = RC_ADDR(0x0000cdbcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_CDC4;

L_CDBE:
    /* 0000cdbe   6  move.w #2,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000cdbeu);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CDC4:
    /* 0000cdc4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cdc4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CDC8:
    /* 0000cdc8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cdc8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CDCA:
    /* 0000cdca   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000cdcau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_CDCE:
    /* 0000cdce   4  move.w (47c,A4),D1 */
    c->pc = RC_ADDR(0x0000cdceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CDD2:
    /* 0000cdd2   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000cdd2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_CDD6:
    /* 0000cdd6   2  bge 0000cddc */
    c->pc = RC_ADDR(0x0000cdd6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_CDDC;

L_CDD8:
    /* 0000cdd8   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x0000cdd8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CDDC:
    /* 0000cddc   2  bra 0000cdfa */
    c->pc = RC_ADDR(0x0000cddcu);
    rc_step(c, m, 10);
    goto L_CDFA;

L_CDDE:
    /* 0000cdde   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000cddeu);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CDE2:
    /* 0000cde2   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0000cde2u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000cde6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_CDE6:
    /* 0000cde6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000cde6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_CDE8:
    /* 0000cde8   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000cde8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CDEC:
    /* 0000cdec   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000cdecu);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CDF0:
    /* 0000cdf0   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0000cdf0u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000cdf4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_CDF4:
    /* 0000cdf4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000cdf4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_CDF6:
    /* 0000cdf6   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000cdf6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CDFA:
    /* 0000cdfa   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0000cdfau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CDFE:
    /* 0000cdfe   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000cdfeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_CE00:
    /* 0000ce00   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x0000ce00u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_CE02:
    /* 0000ce02   4  move.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x0000ce02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE06:
    /* 0000ce06   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000ce06u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_CE08:
    /* 0000ce08   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000ce08u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_CE0A:
    /* 0000ce0a   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0000ce0au);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_CE0C:
    /* 0000ce0c   4  lea (ffff9728,A4),A0 */
    c->pc = RC_ADDR(0x0000ce0cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x68d8u);

L_CE10:
    /* 0000ce10   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000ce10u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE14:
    /* 0000ce14   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ce14u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CE18:
    /* 0000ce18   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ce18u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CE1A:
    /* 0000ce1a   4  lea (4b0,A4),A0 */
    c->pc = RC_ADDR(0x0000ce1au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4b0u);

L_CE1E:
    /* 0000ce1e   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000ce1eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE22:
    /* 0000ce22   4  jsr (0000d51e) */
    c->pc = RC_ADDR(0x0000ce22u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ce26u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000d51eu);
    return;

L_CE26:
    /* 0000ce26   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000ce26u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_CE28:
    /* 0000ce28   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0000ce28u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CE2C:
    /* 0000ce2c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000ce2cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_CE2E:
    /* 0000ce2e   4  lea (4b0,A4),A0 */
    c->pc = RC_ADDR(0x0000ce2eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4b0u);

L_CE32:
    /* 0000ce32   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0000ce32u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE36:
    /* 0000ce36   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ce36u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CE3A:
    /* 0000ce3a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ce3au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CE3C:
    /* 0000ce3c   4  lea (4b0,A4),A0 */
    c->pc = RC_ADDR(0x0000ce3cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4b0u);

L_CE40:
    /* 0000ce40   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000ce40u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE44:
    /* 0000ce44   2  asr.w #1,D1 */
    c->pc = RC_ADDR(0x0000ce44u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_CE46:
    /* 0000ce46   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000ce46u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_CE48:
    /* 0000ce48   4  move.l D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000ce48u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CE4C:
    /* 0000ce4c   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ce4cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CE50:
    /* 0000ce50   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ce50u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CE52:
    /* 0000ce52   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000ce52u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_CE56:
    /* 0000ce56   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000ce56u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE5A:
    /* 0000ce5a   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000ce5au);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_CE5C:
    /* 0000ce5c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000ce5cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_CE5E:
    /* 0000ce5e   4  lea (ffff9798,A4),A0 */
    c->pc = RC_ADDR(0x0000ce5eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6868u);

L_CE62:
    /* 0000ce62   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000ce62u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE66:
    /* 0000ce66   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000ce66u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_CE68:
    /* 0000ce68   4  move.l (fffffff8,A5),D1 */
    c->pc = RC_ADDR(0x0000ce68u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CE6C:
    /* 0000ce6c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000ce6cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_CE6E:
    /* 0000ce6e   4  lea (ffff9748,A4),A0 */
    c->pc = RC_ADDR(0x0000ce6eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x68b8u);

L_CE72:
    /* 0000ce72   4  muls.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000ce72u);
    rc_step(c, m, 48);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_muls(c, 0, t0);

L_CE76:
    /* 0000ce76   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000ce76u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE7A:
    /* 0000ce7a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ce7au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CE7E:
    /* 0000ce7e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ce7eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CE80:
    /* 0000ce80   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000ce80u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_CE84:
    /* 0000ce84   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000ce84u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE88:
    /* 0000ce88   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000ce88u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_CE8A:
    /* 0000ce8a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000ce8au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_CE8C:
    /* 0000ce8c   4  lea (ffff9798,A4),A0 */
    c->pc = RC_ADDR(0x0000ce8cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6868u);

L_CE90:
    /* 0000ce90   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000ce90u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE94:
    /* 0000ce94   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000ce94u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_CE96:
    /* 0000ce96   4  move.l (fffffff8,A5),D1 */
    c->pc = RC_ADDR(0x0000ce96u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CE9A:
    /* 0000ce9a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000ce9au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_CE9C:
    /* 0000ce9c   4  lea (ffff9758,A4),A0 */
    c->pc = RC_ADDR(0x0000ce9cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x68a8u);

L_CEA0:
    /* 0000cea0   4  muls.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000cea0u);
    rc_step(c, m, 48);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_muls(c, 0, t0);

L_CEA4:
    /* 0000cea4   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000cea4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CEA8:
    /* 0000cea8   8  cmpi.l #7,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000cea8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000007u);

L_CEB0:
    /* 0000ceb0   4  beq 0000cf9e */
    c->pc = RC_ADDR(0x0000ceb0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_CF9E;

L_CEB4:
    /* 0000ceb4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000ceb4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CEB8:
    /* 0000ceb8   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x0000ceb8u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_CEBA:
    /* 0000ceba   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000cebau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CEBE:
    /* 0000cebe   4  bra 0000cf92 */
    c->pc = RC_ADDR(0x0000cebeu);
    rc_step(c, m, 10);
    goto L_CF92;

L_CEC2:
    /* 0000cec2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cec2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CEC6:
    /* 0000cec6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cec6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CEC8:
    /* 0000cec8   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000cec8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_CECC:
    /* 0000cecc   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000ceccu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CED0:
    /* 0000ced0   4  add.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x0000ced0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_CED4:
    /* 0000ced4   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000ced4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CED8:
    /* 0000ced8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000ced8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CEDA:
    /* 0000ceda   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000cedau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_CEDE:
    /* 0000cede   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000cedeu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_CEE2:
    /* 0000cee2   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000cee2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CEE4:
    /* 0000cee4   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x0000cee4u);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x0000cee8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_CEE8:
    /* 0000cee8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000cee8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_CEEA:
    /* 0000ceea   4  cmp.w #18,D0 */
    c->pc = RC_ADDR(0x0000ceeau);
    rc_step(c, m, 8);
    t0 = 0x00000018u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_CEEE:
    /* 0000ceee   4  bge 0000cf8e */
    c->pc = RC_ADDR(0x0000ceeeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_CF8E;

L_CEF2:
    /* 0000cef2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cef2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CEF6:
    /* 0000cef6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cef6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CEF8:
    /* 0000cef8   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000cef8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_CEFC:
    /* 0000cefc   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000cefcu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CF00:
    /* 0000cf00   4  add.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x0000cf00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_CF04:
    /* 0000cf04   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000cf04u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CF08:
    /* 0000cf08   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cf08u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CF0A:
    /* 0000cf0a   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000cf0au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_CF0E:
    /* 0000cf0e   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000cf0eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_CF12:
    /* 0000cf12   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000cf12u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CF14:
    /* 0000cf14   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x0000cf14u);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x0000cf18u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_CF18:
    /* 0000cf18   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000cf18u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_CF1A:
    /* 0000cf1a   4  cmp.w #18,D0 */
    c->pc = RC_ADDR(0x0000cf1au);
    rc_step(c, m, 8);
    t0 = 0x00000018u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_CF1E:
    /* 0000cf1e   2  bge 0000cf8e */
    c->pc = RC_ADDR(0x0000cf1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_CF8E;

L_CF20:
    /* 0000cf20   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000cf20u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CF24:
    /* 0000cf24   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cf24u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CF26:
    /* 0000cf26   4  lea (256,A4),A0 */
    c->pc = RC_ADDR(0x0000cf26u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x256u);

L_CF2A:
    /* 0000cf2a   6  cmpi.w #7,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cf2au);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_CF30:
    /* 0000cf30   2  beq 0000cf8e */
    c->pc = RC_ADDR(0x0000cf30u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_CF8E;

L_CF32:
    /* 0000cf32   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000cf32u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CF36:
    /* 0000cf36   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cf36u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CF38:
    /* 0000cf38   4  lea (256,A4),A0 */
    c->pc = RC_ADDR(0x0000cf38u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x256u);

L_CF3C:
    /* 0000cf3c   6  cmpi.w #5,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cf3cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_CF42:
    /* 0000cf42   2  blt 0000cf68 */
    c->pc = RC_ADDR(0x0000cf42u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_CF68;

L_CF44:
    /* 0000cf44   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cf44u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CF48:
    /* 0000cf48   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cf48u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CF4A:
    /* 0000cf4a   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000cf4au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_CF4E:
    /* 0000cf4e   6  move.w (0,A0,D0.w),(fffffff2,A5) */
    c->pc = RC_ADDR(0x0000cf4eu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CF54:
    /* 0000cf54   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cf54u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CF58:
    /* 0000cf58   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cf58u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CF5A:
    /* 0000cf5a   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000cf5au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_CF5E:
    /* 0000cf5e   6  move.w (0,A0,D0.w),(fffffff0,A5) */
    c->pc = RC_ADDR(0x0000cf5eu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CF64:
    /* 0000cf64   4  bra 0000d0ee */
    c->pc = RC_ADDR(0x0000cf64u);
    rc_step(c, m, 10);
    goto L_D0EE;

L_CF68:
    /* 0000cf68   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x0000cf68u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CF6C:
    /* 0000cf6c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cf6cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CF6E:
    /* 0000cf6e   4  lea (4b0,A4),A0 */
    c->pc = RC_ADDR(0x0000cf6eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4b0u);

L_CF72:
    /* 0000cf72   4  move.l (fffffff8,A5),D1 */
    c->pc = RC_ADDR(0x0000cf72u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CF76:
    /* 0000cf76   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000cf76u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_CF78:
    /* 0000cf78   4  lea (4b0,A4),A1 */
    c->pc = RC_ADDR(0x0000cf78u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x4b0u);

L_CF7C:
    /* 0000cf7c   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0000cf7cu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CF80:
    /* 0000cf80   2  addq.w #2,D2 */
    c->pc = RC_ADDR(0x0000cf80u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_CF82:
    /* 0000cf82   4  and.w #f,D2 */
    c->pc = RC_ADDR(0x0000cf82u);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 2, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 2, RC_W, t2);

L_CF86:
    /* 0000cf86   4  move.w D2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000cf86u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 2, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_CF8A:
    /* 0000cf8a   4  bra 0000d0a4 */
    c->pc = RC_ADDR(0x0000cf8au);
    rc_step(c, m, 10);
    goto L_D0A4;

L_CF8E:
    /* 0000cf8e   4  addq.l #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000cf8eu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_CF92:
    /* 0000cf92   8  cmpi.l #8,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000cf92u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x00000008u);

L_CF9A:
    /* 0000cf9a   4  blt 0000cec2 */
    c->pc = RC_ADDR(0x0000cf9au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_CEC2; }

L_CF9E:
    /* 0000cf9e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cf9eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CFA2:
    /* 0000cfa2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cfa2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CFA4:
    /* 0000cfa4   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000cfa4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_CFA8:
    /* 0000cfa8   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000cfa8u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFAC:
    /* 0000cfac   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cfacu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CFB0:
    /* 0000cfb0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cfb0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CFB2:
    /* 0000cfb2   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000cfb2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_CFB6:
    /* 0000cfb6   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000cfb6u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFBA:
    /* 0000cfba   4  jsr (0000dc74) */
    c->pc = RC_ADDR(0x0000cfbau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000cfbeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000dc74u);
    return;

L_CFBE:
    /* 0000cfbe   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000cfbeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_CFC0:
    /* 0000cfc0   4  move.w (70c,A4),D0 */
    c->pc = RC_ADDR(0x0000cfc0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFC4:
    /* 0000cfc4   4  add.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000cfc4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_CFC8:
    /* 0000cfc8   4  move.w (70e,A4),D0 */
    c->pc = RC_ADDR(0x0000cfc8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFCC:
    /* 0000cfcc   4  add.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x0000cfccu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_CFD0:
    /* 0000cfd0   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cfd0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CFD4:
    /* 0000cfd4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cfd4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CFD6:
    /* 0000cfd6   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000cfd6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_CFDA:
    /* 0000cfda   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000cfdau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFDE:
    /* 0000cfde   4  add.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x0000cfdeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_CFE2:
    /* 0000cfe2   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000cfe2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFE4:
    /* 0000cfe4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000cfe4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_CFE8:
    /* 0000cfe8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000cfe8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_CFEA:
    /* 0000cfea   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000cfeau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_CFEE:
    /* 0000cfee   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000cfeeu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFF2:
    /* 0000cff2   4  add.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x0000cff2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_CFF6:
    /* 0000cff6   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000cff6u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CFF8:
    /* 0000cff8   4  jsr (0000dc74) */
    c->pc = RC_ADDR(0x0000cff8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000cffcu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000dc74u);
    return;

L_CFFC:
    /* 0000cffc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000cffcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_CFFE:
    /* 0000cffe   4  move.w (70c,A4),D0 */
    c->pc = RC_ADDR(0x0000cffeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D002:
    /* 0000d002   4  or.w (70e,A4),D0 */
    c->pc = RC_ADDR(0x0000d002u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    t2 = t0 | rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_D006:
    /* 0000d006   2  beq 0000d048 */
    c->pc = RC_ADDR(0x0000d006u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D048;

L_D008:
    /* 0000d008   4  move.w (70c,A4),D0 */
    c->pc = RC_ADDR(0x0000d008u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D00C:
    /* 0000d00c   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x0000d00cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D00E:
    /* 0000d00e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000d00eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_D010:
    /* 0000d010   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x0000d010u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_D012:
    /* 0000d012   4  move.w (70e,A4),D1 */
    c->pc = RC_ADDR(0x0000d012u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D016:
    /* 0000d016   2  addq.w #1,D1 */
    c->pc = RC_ADDR(0x0000d016u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D018:
    /* 0000d018   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000d018u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_D01A:
    /* 0000d01a   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000d01au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_D01C:
    /* 0000d01c   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x0000d01cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_D01E:
    /* 0000d01e   4  lea (ffff9728,A4),A0 */
    c->pc = RC_ADDR(0x0000d01eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x68d8u);

L_D022:
    /* 0000d022   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000d022u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D026:
    /* 0000d026   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d026u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D02A:
    /* 0000d02a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d02au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D02C:
    /* 0000d02c   4  lea (4b0,A4),A0 */
    c->pc = RC_ADDR(0x0000d02cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4b0u);

L_D030:
    /* 0000d030   4  move.w (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000d030u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D034:
    /* 0000d034   4  jsr (0000d51e) */
    c->pc = RC_ADDR(0x0000d034u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000d038u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000d51eu);
    return;

L_D038:
    /* 0000d038   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000d038u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_D03A:
    /* 0000d03a   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0000d03au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D03E:
    /* 0000d03e   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000d03eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_D040:
    /* 0000d040   4  lea (4b0,A4),A0 */
    c->pc = RC_ADDR(0x0000d040u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4b0u);

L_D044:
    /* 0000d044   4  move.w D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x0000d044u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 0, RC_W);
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D048:
    /* 0000d048   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d048u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D04C:
    /* 0000d04c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d04cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D04E:
    /* 0000d04e   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000d04eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_D052:
    /* 0000d052   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0000d052u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_D054:
    /* 0000d054   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0000d054u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D058:
    /* 0000d058   2  add.w D0,(A0) */
    c->pc = RC_ADDR(0x0000d058u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_D05A:
    /* 0000d05a   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d05au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D05E:
    /* 0000d05e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d05eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D060:
    /* 0000d060   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000d060u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_D064:
    /* 0000d064   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0000d064u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_D066:
    /* 0000d066   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0000d066u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D06A:
    /* 0000d06a   2  add.w D0,(A0) */
    c->pc = RC_ADDR(0x0000d06au);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_D06C:
    /* 0000d06c   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x0000d06cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D070:
    /* 0000d070   4  or.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0000d070u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t2 = t0 | rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_D074:
    /* 0000d074   2  beq 0000d0a4 */
    c->pc = RC_ADDR(0x0000d074u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D0A4;

L_D076:
    /* 0000d076   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d076u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D07A:
    /* 0000d07a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d07au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D07C:
    /* 0000d07c   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000d07cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_D080:
    /* 0000d080   4  addq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d080u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D084:
    /* 0000d084   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d084u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D088:
    /* 0000d088   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d088u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D08A:
    /* 0000d08a   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000d08au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_D08E:
    /* 0000d08e   6  cmpi.w #6,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d08eu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_D094:
    /* 0000d094   2  blt 0000d0a4 */
    c->pc = RC_ADDR(0x0000d094u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_D0A4;

L_D096:
    /* 0000d096   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d096u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D09A:
    /* 0000d09a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d09au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D09C:
    /* 0000d09c   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000d09cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_D0A0:
    /* 0000d0a0   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d0a0u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D0A4:
    /* 0000d0a4   6  cmpi.w #3,(4e6,A4) */
    c->pc = RC_ADDR(0x0000d0a4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4e6u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_D0AA:
    /* 0000d0aa   4  ble 0000d144 */
    c->pc = RC_ADDR(0x0000d0aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_D144;

L_D0AE:
    /* 0000d0ae   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d0aeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D0B2:
    /* 0000d0b2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d0b2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D0B4:
    /* 0000d0b4   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000d0b4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_D0B8:
    /* 0000d0b8   4  move.w (fffffff2,A5),D1 */
    c->pc = RC_ADDR(0x0000d0b8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D0BC:
    /* 0000d0bc   4  sub.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d0bcu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D0C0:
    /* 0000d0c0   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000d0c0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D0C2:
    /* 0000d0c2   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x0000d0c2u);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x0000d0c6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_D0C6:
    /* 0000d0c6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d0c6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D0C8:
    /* 0000d0c8   4  cmp.w #c,D0 */
    c->pc = RC_ADDR(0x0000d0c8u);
    rc_step(c, m, 8);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_D0CC:
    /* 0000d0cc   2  bgt 0000d144 */
    c->pc = RC_ADDR(0x0000d0ccu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_D144;

L_D0CE:
    /* 0000d0ce   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d0ceu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D0D2:
    /* 0000d0d2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d0d2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D0D4:
    /* 0000d0d4   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000d0d4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_D0D8:
    /* 0000d0d8   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d0d8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D0DC:
    /* 0000d0dc   4  sub.w (fffffff0,A5),D1 */
    c->pc = RC_ADDR(0x0000d0dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D0E0:
    /* 0000d0e0   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000d0e0u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D0E2:
    /* 0000d0e2   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x0000d0e2u);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x0000d0e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_D0E6:
    /* 0000d0e6   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d0e6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D0E8:
    /* 0000d0e8   4  cmp.w #c,D0 */
    c->pc = RC_ADDR(0x0000d0e8u);
    rc_step(c, m, 8);
    t0 = 0x0000000cu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_D0EC:
    /* 0000d0ec   2  bgt 0000d144 */
    c->pc = RC_ADDR(0x0000d0ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_D144;

L_D0EE:
    /* 0000d0ee   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d0eeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D0F2:
    /* 0000d0f2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d0f2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D0F4:
    /* 0000d0f4   4  lea (256,A4),A0 */
    c->pc = RC_ADDR(0x0000d0f4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x256u);

L_D0F8:
    /* 0000d0f8   6  move.w #4,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d0f8u);
    rc_step(c, m, 18);
    t0 = 0x00000004u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D0FE:
    /* 0000d0fe   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d0feu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D102:
    /* 0000d102   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d102u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D104:
    /* 0000d104   4  lea (490,A4),A0 */
    c->pc = RC_ADDR(0x0000d104u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x490u);

L_D108:
    /* 0000d108   6  move.w (fffffff2,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d108u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D10E:
    /* 0000d10e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d10eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D112:
    /* 0000d112   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d112u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D114:
    /* 0000d114   4  lea (4a0,A4),A0 */
    c->pc = RC_ADDR(0x0000d114u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4a0u);

L_D118:
    /* 0000d118   6  move.w (fffffff0,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d118u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D11E:
    /* 0000d11e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d11eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D122:
    /* 0000d122   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d122u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D124:
    /* 0000d124   4  lea (e6,A4),A0 */
    c->pc = RC_ADDR(0x0000d124u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xe6u);

L_D128:
    /* 0000d128   6  move.w #14,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d128u);
    rc_step(c, m, 18);
    t0 = 0x00000014u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D12E:
    /* 0000d12e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d12eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D132:
    /* 0000d132   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d132u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D134:
    /* 0000d134   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000d134u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_D138:
    /* 0000d138   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d138u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D13C:
    /* 0000d13c   4  clr.w (50a,A4) */
    c->pc = RC_ADDR(0x0000d13cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x50au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D140:
    /* 0000d140   4  bra 0000d29a */
    c->pc = RC_ADDR(0x0000d140u);
    rc_step(c, m, 10);
    goto L_D29A;

L_D144:
    /* 0000d144   4  bra 0000d29a */
    c->pc = RC_ADDR(0x0000d144u);
    rc_step(c, m, 10);
    goto L_D29A;

L_D148:
    /* 0000d148   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d148u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D14C:
    /* 0000d14c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d14cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D14E:
    /* 0000d14e   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000d14eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_D152:
    /* 0000d152   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x0000d152u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_D154:
    /* 0000d154   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x0000d154u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_D156:
    /* 0000d156   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000d156u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D15A:
    /* 0000d15a   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0000d15au);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0000d15eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bdeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_D15E:
    /* 0000d15e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d15eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D160:
    /* 0000d160   2  addq.w #2,D0 */
    c->pc = RC_ADDR(0x0000d160u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D162:
    /* 0000d162   2  movea.l (A7)+,A0 */
    c->pc = RC_ADDR(0x0000d162u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_D164:
    /* 0000d164   2  add.w D0,(A0) */
    c->pc = RC_ADDR(0x0000d164u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_D166:
    /* 0000d166   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d166u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D16A:
    /* 0000d16a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d16au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D16C:
    /* 0000d16c   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000d16cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_D170:
    /* 0000d170   6  cmpi.w #6,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d170u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_D176:
    /* 0000d176   2  blt 0000d186 */
    c->pc = RC_ADDR(0x0000d176u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_D186;

L_D178:
    /* 0000d178   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d178u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D17C:
    /* 0000d17c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d17cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D17E:
    /* 0000d17e   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000d17eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_D182:
    /* 0000d182   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d182u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D186:
    /* 0000d186   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d186u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D18A:
    /* 0000d18a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d18au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D18C:
    /* 0000d18c   4  lea (e6,A4),A0 */
    c->pc = RC_ADDR(0x0000d18cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xe6u);

L_D190:
    /* 0000d190   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d190u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D194:
    /* 0000d194   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d194u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D198:
    /* 0000d198   2  tst.w D1 */
    c->pc = RC_ADDR(0x0000d198u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_D19A:
    /* 0000d19a   2  bne 0000d1bc */
    c->pc = RC_ADDR(0x0000d19au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_D1BC;

L_D19C:
    /* 0000d19c   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d19cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D1A0:
    /* 0000d1a0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d1a0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D1A2:
    /* 0000d1a2   4  lea (256,A4),A0 */
    c->pc = RC_ADDR(0x0000d1a2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x256u);

L_D1A6:
    /* 0000d1a6   6  move.w #5,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d1a6u);
    rc_step(c, m, 18);
    t0 = 0x00000005u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D1AC:
    /* 0000d1ac   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d1acu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D1B0:
    /* 0000d1b0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d1b0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D1B2:
    /* 0000d1b2   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000d1b2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_D1B6:
    /* 0000d1b6   6  move.w #2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d1b6u);
    rc_step(c, m, 18);
    t0 = 0x00000002u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D1BC:
    /* 0000d1bc   4  bra 0000d29a */
    c->pc = RC_ADDR(0x0000d1bcu);
    rc_step(c, m, 10);
    goto L_D29A;

L_D1C0:
    /* 0000d1c0   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d1c0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D1C4:
    /* 0000d1c4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d1c4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D1C6:
    /* 0000d1c6   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000d1c6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_D1CA:
    /* 0000d1ca   6  cmpi.w #4,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d1cau);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_D1D0:
    /* 0000d1d0   2  bne 0000d1e4 */
    c->pc = RC_ADDR(0x0000d1d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_D1E4;

L_D1D2:
    /* 0000d1d2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d1d2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D1D6:
    /* 0000d1d6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d1d6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D1D8:
    /* 0000d1d8   4  lea (256,A4),A0 */
    c->pc = RC_ADDR(0x0000d1d8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x256u);

L_D1DC:
    /* 0000d1dc   6  move.w #6,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d1dcu);
    rc_step(c, m, 18);
    t0 = 0x00000006u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D1E2:
    /* 0000d1e2   2  bra 0000d1f2 */
    c->pc = RC_ADDR(0x0000d1e2u);
    rc_step(c, m, 10);
    goto L_D1F2;

L_D1E4:
    /* 0000d1e4   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d1e4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D1E8:
    /* 0000d1e8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d1e8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D1EA:
    /* 0000d1ea   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000d1eau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_D1EE:
    /* 0000d1ee   4  addq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d1eeu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D1F2:
    /* 0000d1f2   4  bra 0000d29a */
    c->pc = RC_ADDR(0x0000d1f2u);
    rc_step(c, m, 10);
    goto L_D29A;

L_D1F6:
    /* 0000d1f6   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d1f6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D1FA:
    /* 0000d1fa   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d1fau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D1FC:
    /* 0000d1fc   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000d1fcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_D200:
    /* 0000d200   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d200u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_D204:
    /* 0000d204   2  bne 0000d218 */
    c->pc = RC_ADDR(0x0000d204u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_D218;

L_D206:
    /* 0000d206   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d206u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D20A:
    /* 0000d20a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d20au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D20C:
    /* 0000d20c   4  lea (256,A4),A0 */
    c->pc = RC_ADDR(0x0000d20cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x256u);

L_D210:
    /* 0000d210   6  move.w #7,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d210u);
    rc_step(c, m, 18);
    t0 = 0x00000007u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D216:
    /* 0000d216   2  bra 0000d226 */
    c->pc = RC_ADDR(0x0000d216u);
    rc_step(c, m, 10);
    goto L_D226;

L_D218:
    /* 0000d218   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d218u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D21C:
    /* 0000d21c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d21cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D21E:
    /* 0000d21e   4  lea (4c0,A4),A0 */
    c->pc = RC_ADDR(0x0000d21eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x4c0u);

L_D222:
    /* 0000d222   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d222u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D226:
    /* 0000d226   2  bra 0000d29a */
    c->pc = RC_ADDR(0x0000d226u);
    rc_step(c, m, 10);
    goto L_D29A;

L_D228:
    /* 0000d228   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d228u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D22C:
    /* 0000d22c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d22cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D22E:
    /* 0000d22e   4  lea (c4,A4),A0 */
    c->pc = RC_ADDR(0x0000d22eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xc4u);

L_D232:
    /* 0000d232   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d232u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D236:
    /* 0000d236   4  sub.w (47a,A4),D1 */
    c->pc = RC_ADDR(0x0000d236u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D23A:
    /* 0000d23a   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000d23au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D23C:
    /* 0000d23c   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x0000d23cu);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x0000d240u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_D240:
    /* 0000d240   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d240u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D242:
    /* 0000d242   4  cmp.w #190,D0 */
    c->pc = RC_ADDR(0x0000d242u);
    rc_step(c, m, 8);
    t0 = 0x00000190u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_D246:
    /* 0000d246   2  bgt 0000d268 */
    c->pc = RC_ADDR(0x0000d246u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_D268;

L_D248:
    /* 0000d248   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d248u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D24C:
    /* 0000d24c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d24cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D24E:
    /* 0000d24e   4  lea (d4,A4),A0 */
    c->pc = RC_ADDR(0x0000d24eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xd4u);

L_D252:
    /* 0000d252   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000d252u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D256:
    /* 0000d256   4  sub.w (47c,A4),D1 */
    c->pc = RC_ADDR(0x0000d256u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_D25A:
    /* 0000d25a   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000d25au);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D25C:
    /* 0000d25c   4  jsr (ffff81ac,A4) */
    c->pc = RC_ADDR(0x0000d25cu);
    rc_step(c, m, 18);
    /* vector 71 */
    rc_push32(c, m, RC_ADDR(0x0000d260u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001a47cu);
    return;

L_D260:
    /* 0000d260   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000d260u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_D262:
    /* 0000d262   4  cmp.w #12c,D0 */
    c->pc = RC_ADDR(0x0000d262u);
    rc_step(c, m, 8);
    t0 = 0x0000012cu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_D266:
    /* 0000d266   2  ble 0000d276 */
    c->pc = RC_ADDR(0x0000d266u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_D276;

L_D268:
    /* 0000d268   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000d268u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_D26C:
    /* 0000d26c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d26cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D26E:
    /* 0000d26e   4  lea (256,A4),A0 */
    c->pc = RC_ADDR(0x0000d26eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x256u);

L_D272:
    /* 0000d272   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000d272u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D276:
    /* 0000d276   2  bra 0000d29a */
    c->pc = RC_ADDR(0x0000d276u);
    rc_step(c, m, 10);
    goto L_D29A;

L_D288:
    /* 0000d288   6  cmp.l #8,D0 */
    c->pc = RC_ADDR(0x0000d288u);
    rc_step(c, m, 14);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_D28E:
    /* 0000d28e   2  bcc 0000d29a */
    c->pc = RC_ADDR(0x0000d28eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_D29A;

L_D290:
    /* 0000d290   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000d290u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_D292:
    /* 0000d292   4  move.w (0000d278),D0 */
    c->pc = RC_ADDR(0x0000d292u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x0000d278u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D296:
    /* 0000d296   4  jmp (0000d298) */
    c->pc = RC_ADDR(0x0000d296u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x0000d298u) + t4);
    c->pc = t3;
    return;

L_D29A:
    /* 0000d29a   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000d29au);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_D29E:
    /* 0000d29e   8  cmpi.l #8,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000d29eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000008u);

L_D2A6:
    /* 0000d2a6   4  blt 0000caa4 */
    c->pc = RC_ADDR(0x0000d2a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_CAA4; }

L_D2AA:
    /* 0000d2aa   2  unlk A5 */
    c->pc = RC_ADDR(0x0000d2aau);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_D2AC:
    /* 0000d2ac   2  rts */
    c->pc = RC_ADDR(0x0000d2acu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
