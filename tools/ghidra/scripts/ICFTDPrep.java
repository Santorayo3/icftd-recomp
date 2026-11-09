// ICFTD: prepare a freshly imported dshell image for analysis.
//
// 1. Create the entry function (the image starts with the hunk entry stub, a plain jmp).
// 2. Turn every hunk relocation inside the DATA hunk into a real pointer, so the analyzers
//    and the decompiler see the tables/vectors/strings the code uses.
// 3. Force the analyzers that make the decompiled output complete and detailed.
// 4. Write a report of every analyzer option plus the list of code-hunk reloc targets
//    (prime candidates for functions nothing calls directly).
//
// Runs as a PRE script: the program is imported but not analysed yet.
//@category ICFTD
import ghidra.app.script.GhidraScript;
import ghidra.framework.options.Options;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.mem.Memory;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;
import java.util.TreeSet;

public class ICFTDPrep extends GhidraScript {

    static final String ENTRY_NAME = "entry";

    // Exact option names as registered by Ghidra 12.2 under the "Analyzers" category.
    static final String[][] OPT_BOOL = {
        { "Decompiler Parameter ID", "true" },                                        // signatures from call sites
        { "Decompiler Parameter ID.Commit Void Return Values", "true" },
        { "Aggressive Instruction Finder", "true" },                                  // unreferenced code
        { "Create Address Tables", "true" },                                          // jump/lookup tables
        { "Create Address Tables.Relocation Table Guide", "true" },
        { "Function Start Search", "true" },                                          // prologue patterns
        { "Shared Return Calls", "true" },
        { "Stack", "true" },
        { "Non-Returning Functions - Discovered", "true" },
        { "Decompiler Switch Analysis", "true" },
        // off: treats every stack displacement as an address and invents functions such as
        // 0xFFC4 (from "pea (-0x3c,A5)") in the middle of the code hunk.
        { "Scalar Operand References", "false" },
        { "Data Reference.Subroutine References", "true" },
        { "Data Reference.References to Pointers", "true" },
        { "68000 Constant Reference Analyzer.Switch Table Recovery", "true" },
        { "68000 Constant Reference Analyzer.Stored Value Pointer analysis", "true" },
        { "68000 Constant Reference Analyzer.Function parameter/return Pointer analysis", "true" },
    };

    static final String[][] OPT_INT = {
        { "Decompiler Parameter ID.Analysis Decompiler Timeout (sec)", "600" },
        { "Call Convention ID.Analysis Decompiler Timeout (sec)", "300" },
        { "Decompiler Switch Analysis.Analysis Decompiler Timeout (sec)", "300" },
    };

    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        File relFile = a.length > 0 ? new File(a[0]) : null;
        long codeEnd = a.length > 1 ? Long.decode(a[1]) : 0L;
        File report = a.length > 2 ? new File(a[2]) : new File("icftd-prep-report.txt");
        File targetFile = a.length > 3 ? new File(a[3]) : null;

        PrintWriter log = new PrintWriter(report, "UTF-8");
        try {
            log.println("program: " + currentProgram.getName());
            log.println("imageBase: " + currentProgram.getImageBase());
            log.println("language: " + currentProgram.getLanguageID());
            log.println("compilerSpec: " + currentProgram.getCompilerSpec().getCompilerSpecID());
            for (var b : currentProgram.getMemory().getBlocks())
                log.println("block " + b.getName() + " " + b.getStart() + ".." + b.getEnd() + " " + b.getSize());

            // --- entry stub ------------------------------------------------------------
            Address entry = currentProgram.getImageBase();
            if (getInstructionAt(entry) == null) disassemble(entry);
            if (getFunctionAt(entry) == null) createFunction(entry, ENTRY_NAME);
            log.println("entry function: " + (getFunctionAt(entry) == null ? "FAILED" : "ok at " + entry));

            // --- data hunk pointers ----------------------------------------------------
            int ptrs = 0, inCode = 0, failed = 0;
            TreeSet<Long> targets = new TreeSet<>();
            if (relFile != null && relFile.isFile()) {
                Memory mem = currentProgram.getMemory();
                try (BufferedReader br = new BufferedReader(new FileReader(relFile))) {
                    String line;
                    while ((line = br.readLine()) != null) {
                        line = line.trim();
                        if (line.isEmpty()) continue;
                        String[] t = line.split("\\s+");
                        long site = Long.parseUnsignedLong(t[0], 16);
                        int width = Integer.parseInt(t[1]);
                        long target = Long.parseUnsignedLong(t[2], 16);
                        if (width != 4) continue;
                        if (!mem.contains(toAddr(site))) { failed++; continue; }
                        targets.add(target);
                        if (site < codeEnd) { inCode++; continue; }
                        Instruction insn = getInstructionAt(toAddr(site));
                        if (insn != null) { inCode++; continue; }
                        Data d = getDataAt(toAddr(site));
                        if (d != null && d.isDefined()) continue;
                        try {
                            createData(toAddr(site), PointerDataType.dataType);
                            ptrs++;
                        }
                        catch (Exception e) {
                            failed++;
                        }
                    }
                }
            }
            log.println("data pointers created: " + ptrs + " (left alone in code: " + inCode
                + ", outside memory: " + failed + ")");

            // Targets that point into the code hunk: candidates for functions that are only
            // reached through a vector table or an interrupt hook.
            List<Address> codeTargets = new ArrayList<>();
            for (long t : targets) {
                if (t <= 0 || t >= codeEnd) continue;
                Address addr = toAddr(t);
                if (!currentProgram.getMemory().contains(addr)) continue;
                if (getFunctionAt(addr) != null) continue;
                codeTargets.add(addr);
            }
            log.println("code-hunk reloc targets: " + codeTargets.size()
                + (targetFile == null ? "" : " -> " + targetFile.getName()));
            if (targetFile != null) {
                targetFile.getParentFile().mkdirs();
                try (PrintWriter tf = new PrintWriter(targetFile, "UTF-8")) {
                    for (Address addr : codeTargets) tf.println(addr.toString());
                }
            }

            // --- small data base -------------------------------------------------------
            // The program keeps its globals in A4-relative memory (A4 = end of the data
            // hunk + 0x3236). A4 is set once by a "lea (abs).l,A4" and never changed, so
            // the value can be pinned as register context: the decompiler then folds every
            // "(off,A4)" access into a named global instead of an unknown base pointer.
            long a4 = findLeaToA4();
            if (a4 > 0) {
                currentProgram.getProgramContext().setValue(currentProgram.getRegister("A4"),
                    entry, toAddr(codeEnd), java.math.BigInteger.valueOf(a4));
                log.println(String.format("A4 (small data base) pinned to 0x%X over %s..%s",
                    a4, entry, toAddr(codeEnd)));
            }
            else {
                log.println("A4 base not found");
            }

            // --- library calls ---------------------------------------------------------
            // "jsr (d16,A6)" is a library call through whatever base A6 holds; record the
            // offsets so the calling code can be identified later.
            java.util.TreeMap<Integer, Integer> lvos = new java.util.TreeMap<>();
            Memory bmem = currentProgram.getMemory();
            for (Address p = entry; p.compareTo(toAddr(codeEnd)) < 0; p = p.add(2)) {
                try {
                    if ((bmem.getByte(p) & 0xFF) == 0x4E && (bmem.getByte(p.add(1)) & 0xFF) == 0xAE) {
                        short d16 = bmem.getShort(p.add(2));
                        lvos.merge((int) d16, 1, Integer::sum);
                    }
                }
                catch (Exception e) { break; }
            }
            log.println("jsr (d16,A6) call sites: " + lvos.size() + " distinct offsets");
            if (targetFile != null) {
                File lvoFile = new File(targetFile.getParentFile(), "lvo-offsets.txt");
                try (PrintWriter lw = new PrintWriter(lvoFile, "UTF-8")) {
                    for (var e : lvos.entrySet())
                        lw.println(String.format("%6d  0x%04X  %3d sites", e.getKey(),
                            e.getKey() & 0xFFFF, e.getValue()));
                }
            }

            // --- analyzer options ------------------------------------------------------
            Options an = currentProgram.getOptions("Analyzers");
            for (String[] pair : OPT_BOOL) {
                if (!an.contains(pair[0])) { log.println("MISSING  " + pair[0]); continue; }
                boolean v = Boolean.parseBoolean(pair[1]);
                an.setBoolean(pair[0], v);
                log.println((v ? "ON       " : "OFF      ") + pair[0]);
            }
            for (String[] pair : OPT_INT) {
                if (!an.contains(pair[0])) { log.println("MISSING  " + pair[0]); continue; }
                an.setInt(pair[0], Integer.parseInt(pair[1]));
                log.println("SET      " + pair[0] + " = " + pair[1]);
            }

            log.println();
            log.println("--- analyzer options as configured ---");
            for (String n : an.getOptionNames()) log.println("  " + n + " = " + an.getValueAsString(n));
        }
        finally {
            log.close();
        }
        println("ICFTDPrep: report written to " + report.getAbsolutePath());
    }

    /// <summary>Finds "lea (imm).l,A4" (4E F9 style opcode 0x49F9) and returns the immediate.</summary>
    long findLeaToA4() throws Exception {
        Memory mem = currentProgram.getMemory();
        Address start = currentProgram.getMemory().getMinAddress();
        Address end = currentProgram.getMemory().getMaxAddress();
        for (Address p = start; p.compareTo(end) < 0; p = p.add(2)) {
            if ((mem.getByte(p) & 0xFF) != 0x49 || (mem.getByte(p.add(1)) & 0xFF) != 0xF9) continue;
            long v = (mem.getInt(p.add(2))) & 0xFFFFFFFFL;
            if (v >= currentProgram.getMemory().getMinAddress().getOffset()
                && v < currentProgram.getMemory().getMaxAddress().getOffset())
                return v;
        }
        return 0;
    }
}
