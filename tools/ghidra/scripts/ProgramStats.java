// ICFTD: analysis coverage report - how much of each memory block is covered by
// instructions / defined data, which regions are still undefined, and the size
// distribution of the functions found.
//
// Output: arg 0 = report file.
//@category ICFTD
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.listing.CodeUnit;
import ghidra.program.model.listing.CodeUnitIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.mem.MemoryBlock;
import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;

public class ProgramStats extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        File out = new File(a.length > 0 ? a[0] : "re/stats.txt");
        out.getParentFile().mkdirs();

        try (PrintWriter w = new PrintWriter(out, "UTF-8")) {
            w.println("program   : " + currentProgram.getName());
            w.println("language  : " + currentProgram.getLanguageID());
            w.println();

            w.println("=== memory coverage ===");
            for (MemoryBlock b : currentProgram.getMemory().getBlocks()) {
                long size = b.getSize();
                long insn = 0, data = 0;
                AddressSet undef = new AddressSet(b.getStart(), b.getEnd());
                CodeUnitIterator it = currentProgram.getListing().getCodeUnits(b.getStart(), true);
                while (it.hasNext()) {
                    CodeUnit cu = it.next();
                    if (!b.contains(cu.getAddress())) break;
                    if (cu instanceof ghidra.program.model.listing.Instruction) insn += cu.getLength();
                    else data += cu.getLength();
                    undef.delete(cu.getAddress(), cu.getMaxAddress());
                }
                w.printf("%-10s %08x..%08x  %7d bytes: %6d code (%5.1f%%), %6d data, %6d undefined%n",
                    b.getName(), b.getStart().getOffset(), b.getEnd().getOffset(), size,
                    insn, 100.0 * insn / size, data, size - insn - data);
                if (b.getName().equals("dshell")) {
                    w.println("  undefined regions larger than 32 bytes:");
                    AddressSetView u = undef.intersect(new AddressSet(
                        currentProgram.getMemory().getMinAddress(), toAddr(0x21A58 - 1)));  // code hunk only
                    int n = 0;
                    for (var r : u.getAddressRanges()) {
                        long len = r.getLength();
                        if (len <= 32) continue;
                        if (n++ < 40) w.printf("    %s..%s  %d bytes%n", r.getMinAddress(), r.getMaxAddress(), len);
                    }
                    if (n == 0) w.println("    (none)");
                    long undefCode = 0;
                    for (var r : u.getAddressRanges()) undefCode += r.getLength();
                    w.printf("  undefined bytes in code hunk: %d of %d (%.2f%%)%n",
                        undefCode, 0x21A58L, 100.0 * undefCode / 0x21A58L);
                }
            }

            w.println();
            w.println("=== instructions outside any function ===");
            long orphan = 0;
            Address start = null, last = null;
            List<String> ranges = new ArrayList<>();
            CodeUnitIterator cu = currentProgram.getListing().getCodeUnits(true);
            while (cu.hasNext() && !monitor.isCancelled()) {
                CodeUnit c = cu.next();
                if (!(c instanceof ghidra.program.model.listing.Instruction)) continue;
                boolean inFn = currentProgram.getFunctionManager().getFunctionContaining(c.getAddress()) != null;
                if (!inFn) {
                    orphan += c.getLength();
                    if (start == null) start = c.getAddress();
                    last = c.getMaxAddress();
                }
                else if (start != null) {
                    ranges.add(String.format("%s..%s  %d bytes", start, last, last.subtract(start) + 1));
                    start = null;
                }
            }
            if (start != null)
                ranges.add(String.format("%s..%s  %d bytes", start, last, last.subtract(start) + 1));
            w.println("orphan instruction bytes: " + orphan + " in " + ranges.size() + " runs");
            for (int i = 0; i < ranges.size() && i < 40; i++) w.println("  " + ranges.get(i));

            w.println();
            w.println("=== functions ===");
            int total = 0, thunks = 0, noCallers = 0;
            long bytes = 0;
            List<Function> small = new ArrayList<>();
            FunctionIterator fit = currentProgram.getFunctionManager().getFunctions(true);
            while (fit.hasNext() && !monitor.isCancelled()) {
                Function f = fit.next();
                total++;
                if (f.isThunk()) thunks++;
                long sz = f.getBody().getNumAddresses();
                bytes += sz;
                if (sz <= 2) small.add(f);
                if (f.getEntryPoint().getOffset() != 0 && getReferencesTo(f.getEntryPoint()).length == 0)
                    noCallers++;
            }
            w.println("functions: " + total + " (" + thunks + " thunks, " + noCallers + " with no callers)");
            w.println("code inside functions: " + bytes + " bytes");
            w.println("functions <= 2 bytes: " + small.size());
            for (int i = 0; i < small.size() && i < 20; i++)
                w.println("  " + small.get(i).getEntryPoint() + " " + small.get(i).getName());
            w.println();
            w.println("=== types / symbols ===");
            w.println("symbols: " + currentProgram.getSymbolTable().getNumSymbols());
            w.println("data types used: " + currentProgram.getDataTypeManager().getDataTypeCount(true));
        }
        println("ProgramStats -> " + out.getAbsolutePath());
    }
}
