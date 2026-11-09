// ICFTD: attach orphaned code to functions.
//
// The aggressive instruction finder disassembles code that no call reaches (computed
// jumps, code after an early rts, engine entry tables). Without a function the decompiler
// and the C export skip it, so every run of contiguous instructions that sits outside all
// function bodies gets a function of its own. Headless re-analyses the new functions
// before the export scripts run.
//
// Output: arg 0 = report file (optional).
//@category ICFTD
import ghidra.app.plugin.core.analysis.AutoAnalysisManager;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.CodeUnit;
import ghidra.program.model.listing.CodeUnitIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;

public class FixOrphans extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        File report = a.length > 0 ? new File(a[0]) : null;
        FunctionManager fm = currentProgram.getFunctionManager();

        // Creating a function can leave a new tail orphaned (bodies are recalculated by the
        // re-analysis), so repeat until a pass creates nothing.
        int passes = 0, totalCreated = 0, totalFailed = 0;
        List<String> failures = new ArrayList<>();
        while (passes < 5) {
            passes++;
            Object[] res = fixPass(report, failures);
            int created = (Integer) res[0], failed = (Integer) res[1];
            totalCreated += created;
            totalFailed += failed;
            if (created == 0) break;
            AutoAnalysisManager mgr = AutoAnalysisManager.getAnalysisManager(currentProgram);
            mgr.startAnalysis(monitor);
        }

        String msg = String.format("orphan repair: %d passes, %d functions created, %d failed",
            passes, totalCreated, totalFailed);
        println("FixOrphans: " + msg);
        if (report != null) {
            report.getParentFile().mkdirs();
            try (PrintWriter w = new PrintWriter(report, "UTF-8")) {
                w.println(msg);
                for (String s : failures) w.println("  " + s);
            }
        }
    }

    /** One repair pass; returns {created, failed}. */
    Object[] fixPass(File report, List<String> failures) {
        FunctionManager fm = currentProgram.getFunctionManager();

        // Drop artifact functions that have no instruction at their entry (they come from
        // constant operands being mistaken for addresses).
        List<Function> empty = new ArrayList<>();
        for (Function f : fm.getFunctions(true)) {
            if (getInstructionAt(f.getEntryPoint()) == null) empty.add(f);
        }
        for (Function f : empty) {
            try { removeFunction(f); } catch (Exception e) { failures.add(f.getEntryPoint() + " (not removed)"); }
        }
        List<Address> starts = new ArrayList<>();
        Address runStart = null;
        CodeUnitIterator it = currentProgram.getListing().getCodeUnits(true);
        while (it.hasNext() && !monitor.isCancelled()) {
            CodeUnit cu = it.next();
            if (!(cu instanceof Instruction)) continue;
            boolean inFn = fm.getFunctionContaining(cu.getAddress()) != null;
            if (!inFn) {
                if (runStart == null) runStart = cu.getAddress();
            }
            else if (runStart != null) {
                starts.add(runStart);
                runStart = null;
            }
        }
        if (runStart != null) starts.add(runStart);

        int created = 0, failed = 0;
        for (Address start : starts) {
            if (fm.getFunctionAt(start) != null) continue;
            try {
                disassemble(start);
                Function f = createFunction(start, null);
                if (f == null) { failed++; failures.add(start + " (createFunction returned null)"); }
                else created++;
            }
            catch (Exception e) {
                failed++;
                failures.add(start + " (" + e.getMessage() + ")");
            }
        }
        return new Object[] { created, failed };
    }
}
