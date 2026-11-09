// ICFTD: dump the complete disassembly with symbols and comments (every instruction in the
// program, not just the ones inside a function body), plus all defined data.
//
// Output: arg 0 = listing file, arg 1 = optional data dump file.
//@category ICFTD
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.listing.CodeUnit;
import ghidra.program.model.listing.CodeUnitIterator;
import ghidra.program.model.listing.CommentType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.Symbol;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

public class DumpListing extends GhidraScript {

    String bytes(Instruction insn) throws Exception {
        byte[] b = insn.getBytes();
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < b.length && i < 8; i++) sb.append(String.format("%02x", b[i]));
        return sb.toString();
    }

    String symbolAt(Address a) {
        Symbol s = null;
        for (Symbol x : currentProgram.getSymbolTable().getSymbols(a)) {
            if (s == null || x.isPrimary()) s = x;
            if (x.isPrimary()) break;
        }
        return s == null ? "" : s.getName();
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File listing = new File(args.length > 0 ? args[0] : "re/disasm/dshell.asm");
        listing.getParentFile().mkdirs();
        FunctionManager fm = currentProgram.getFunctionManager();

        try (PrintWriter w = new PrintWriter(new BufferedWriter(new FileWriter(listing), 1 << 20))) {
            w.println("; " + currentProgram.getName() + " disassembly - Ghidra " + getGhidraVersion());
            w.println("; image base " + currentProgram.getImageBase() + "  language " + currentProgram.getLanguageID());
            w.println("; every code unit of the program; function entries are marked");
            w.println();

            Address prevEnd = null;
            CodeUnitIterator it = currentProgram.getListing().getCodeUnits(true);
            while (it.hasNext() && !monitor.isCancelled()) {
                CodeUnit cu = it.next();
                Address a = cu.getAddress();
                Function f = fm.getFunctionAt(a);
                if (f != null) {
                    StringBuilder callers = new StringBuilder();
                    for (Reference r : getReferencesTo(a)) {
                        Function c = fm.getFunctionContaining(r.getFromAddress());
                        if (c != null && callers.indexOf(c.getName()) < 0)
                            callers.append(callers.length() > 0 ? "," : "").append(c.getName());
                    }
                    w.println();
                    w.println("; ---- " + a + " " + f.getName() + " (" + f.getBody().getNumAddresses()
                        + " bytes) callers: [" + callers + "]");
                }
                prevEnd = cu.getMaxAddress();

                if (!(cu instanceof Instruction)) {
                    Data d = (Data) cu;
                    String v = d.getValue() == null ? "" : d.getValue().toString().replace('\n', ' ');
                    if (v.length() > 60) v = v.substring(0, 60) + "...";
                    w.printf("; %s  %-20s %s%n", a, d.getDataType().getName(), v);
                    continue;
                }
                Instruction insn = (Instruction) cu;
                String eol = insn.getComment(CommentType.EOL);
                String pre = insn.getComment(CommentType.PRE);
                StringBuilder refs = new StringBuilder();
                for (Reference r : insn.getReferencesFrom()) {
                    Address to = r.getToAddress();
                    String sym = symbolAt(to);
                    refs.append(refs.length() > 0 ? "," : "").append(to);
                    if (!sym.isEmpty()) refs.append('<').append(sym).append('>');
                }
                Function owner = fm.getFunctionContaining(a);
                w.printf("%s  %-16s %-42s %s%s%s%s%n", a, bytes(insn), insn.toString(),
                    refs.length() == 0 ? "" : "refs=" + refs,
                    (pre == null || pre.isEmpty()) ? "" : "  ; " + pre,
                    (eol == null || eol.isEmpty()) ? "" : "  ; " + eol,
                    owner == null ? "  ; (orphan)" : "");
            }
        }

        if (args.length > 1) {
            File dataFile = new File(args[1]);
            try (PrintWriter w = new PrintWriter(new BufferedWriter(new FileWriter(dataFile), 1 << 20))) {
                var it = currentProgram.getListing().getDefinedData(true);
                while (it.hasNext() && !monitor.isCancelled()) {
                    Data d = it.next();
                    if (d == null) continue;
                    DataType dt = d.getDataType();
                    String value = d.getValue() == null ? "" : d.getValue().toString();
                    if (value.length() > 120) value = value.substring(0, 120) + "...";
                    w.printf("%s  %-24s %s%n", d.getAddress(), dt.getName(), value.replace('\n', ' '));
                }
            }
        }
        println("DumpListing written");
    }
}
