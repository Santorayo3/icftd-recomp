// ICFTD: dump every program option category and entry (used to learn the analyzer
// option names in this Ghidra version).
//@category ICFTD
import ghidra.app.script.GhidraScript;
import ghidra.framework.options.Options;
import java.io.File;
import java.io.PrintWriter;

public class DumpOptions extends GhidraScript {
    @Override
    public void run() throws Exception {
        File out = new File(getScriptArgs().length > 0 ? getScriptArgs()[0] : "re/program-options.txt");
        out.getParentFile().mkdirs();
        try (PrintWriter w = new PrintWriter(out, "UTF-8")) {
            Object[] categories = { "Analyzers", "Analysis", "Decompiler", "Functions" };
            for (Object cat : categories) {
                Options o = currentProgram.getOptions(cat.toString());
                w.println("[" + cat + "]");
                if (o == null) { w.println("  (null)"); continue; }
                for (String n : o.getOptionNames()) {
                    String v;
                    try { v = o.getValueAsString(n); } catch (Exception e) { v = "<" + e + ">"; }
                    w.println("  " + n + " = " + v);
                }
            }
        }
        println("options -> " + out.getAbsolutePath());
    }
}
