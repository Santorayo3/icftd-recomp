// ICFTD: export the decompiled C of every function plus an index of the whole program.
//
// Output (arg 0 = output directory):
//   ALL.c              every function, address order, one block per function
//   functions/*.c      one file per function
//   INDEX.txt          address, name, size, parameters, callers, callees
//
//@category ICFTD
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.decompiler.DecompiledFunction;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.Reference;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;

public class DecompileAll extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        File outDir = new File(a.length > 0 ? a[0] : "re/decomp_all/dshell");
        File perDir = new File(outDir, "functions");
        perDir.mkdirs();
        // Old outputs must not survive a re-run: the function set changes when the
        // analysis changes, and stale files make the folder lie about the program.
        File[] stale = perDir.listFiles();
        if (stale != null) for (File s : stale) if (s.getName().endsWith(".c")) s.delete();

        DecompileOptions opts = new DecompileOptions();
        opts.grabFromProgram(currentProgram);
        DecompInterface di = new DecompInterface();
        di.setOptions(opts);
        di.toggleCCode(true);
        di.toggleSyntaxTree(false);
        di.setSimplificationStyle("decompile");
        if (!di.openProgram(currentProgram))
            throw new Exception("decompiler could not open the program");

        FunctionManager fm = currentProgram.getFunctionManager();
        List<Function> functions = new ArrayList<>();
        for (Function f : fm.getFunctions(true)) functions.add(f);
        println("exporting " + functions.size() + " functions");

        int ok = 0, failed = 0;
        File allFile = new File(outDir, "ALL.c");
        try (PrintWriter all = new PrintWriter(new BufferedWriter(new FileWriter(allFile), 1 << 20));
             PrintWriter index = new PrintWriter(new BufferedWriter(new FileWriter(new File(outDir, "INDEX.txt")), 1 << 16))) {

            all.println("// " + currentProgram.getName() + " - decompiled with Ghidra "
                + getGhidraVersion() + " (" + currentProgram.getLanguageID() + ", "
                + currentProgram.getCompilerSpec().getCompilerSpecID() + ")");
            all.println("// image base " + currentProgram.getImageBase() + ", " + functions.size() + " functions");
            all.println("// calling convention: Amiga/68k - args on stack, return in D0, D0/D1/A0/A1 volatile");
            all.println();

            index.println("# addr      size   params  name                                  callers -> callees");

            for (Function f : functions) {
                String name = f.getName();
                Address ep = f.getEntryPoint();
                long size = f.getBody().getNumAddresses();
                StringBuilder params = new StringBuilder();
                for (Parameter p : f.getParameters()) {
                    if (params.length() > 0) params.append(", ");
                    params.append(p.getDataType().getName()).append(' ').append(p.getName());
                }
                StringBuilder callers = new StringBuilder();
                for (Reference r : getReferencesTo(ep)) {
                    Function caller = fm.getFunctionContaining(r.getFromAddress());
                    if (caller != null && callers.indexOf(caller.getName()) < 0)
                        callers.append(callers.length() > 0 ? "," : "").append(caller.getName());
                }
                StringBuilder callees = new StringBuilder();
                for (Function c : f.getCalledFunctions(monitor)) {
                    if (callees.indexOf(c.getName()) < 0)
                        callees.append(callees.length() > 0 ? "," : "").append(c.getName());
                }

                index.printf("%08x  %6d  %-6s  %-36s  [%s] -> [%s]%n",
                    ep.getOffset(), size, String.valueOf(f.getParameterCount()), name, callers, callees);

                String body;
                DecompileResults res = di.decompileFunction(f, 300, monitor);
                if (res != null && res.decompileCompleted() && res.getDecompiledFunction() != null) {
                    body = res.getDecompiledFunction().getC();
                    ok++;
                }
                else {
                    body = "// decompilation failed: " + (res == null ? "no result" : res.getErrorMessage());
                    failed++;
                }

                String header = "// ---- " + String.format("%06x", ep.getOffset()) + "  " + name
                    + "  (" + size + " bytes)  callers: [" + callers + "]";
                all.println(header);
                all.println(body);
                all.println();

                String safe = name.replaceAll("[^A-Za-z0-9_.$-]", "_");
                File per = new File(perDir, String.format("%06x_%s.c", ep.getOffset(), safe));
                try (PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter(per)))) {
                    pw.println("// " + header);
                    pw.println(body);
                }
            }
        }
        finally {
            di.dispose();
        }
        println("DecompileAll: " + ok + " ok, " + failed + " failed -> " + allFile.getAbsolutePath());
    }
}
