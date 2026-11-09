// ICFTD: derive a *field map* from the decompiler's P-code.
//
// For every memory access the decompiler emits, this records
//     base + constant offset,  access size,  read or write
// which is exactly what we otherwise reconstruct by reading assembly: "object + 0x38
// is passed to the blitter", "param_2 + 0x34 is the plane mask", "global 0x2c4d6 gates
// the palette".
//
// Output (arg 0 = output directory, default re/model; arg 1 = decompiler timeout, 60):
//   fields.csv        function,base,offset,size,kind,count,addresses
//   fieldsummary.csv  base,offset,size,functions,reads,writes
//
// "base" is the decompiler's name for the pointer (param_2, this->, reg:A0, ...) or
// "mem" when the address is constant (a global).
//
//@category ICFTD
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.HighSymbol;
import ghidra.program.model.pcode.HighVariable;
import ghidra.program.model.pcode.PcodeOp;
import ghidra.program.model.pcode.PcodeOpAST;
import ghidra.program.model.pcode.Varnode;
import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

public class FieldMap extends GhidraScript {

    private static String vkey(Varnode vn) {
        return vn.getAddress() + ":" + vn.getSize();
    }

    private static class Hit {
        long count = 0;
        long reads = 0;
        long writes = 0;
        String base = "";
        long off = 0;
        int size = 0;
        boolean write = false;
        StringBuilder addrs = new StringBuilder();
    }

    private static class Res {
        String base;
        long off;
        boolean ok;
        Res(String b, long o, boolean k) { base = b; off = o; ok = k; }
    }

    // A stable name for storage the decompiler did not name. Two accesses through the
    // same unnamed pointer then land in the same bucket, which is all we need to read
    // off a struct layout.
    private static String idName(Varnode vn) {
        if (vn.isRegister()) return "reg";
        return "tmp" + Long.toHexString(vn.getAddress().getOffset());
    }

    // Peel the arithmetic the decompiler wraps addresses in until we reach either a
    // constant (a global address) or a named storage location (a parameter, this->field).
    private static Res peel(Varnode vn, Map<String, String> names, int depth) {
        if (vn == null || depth > 8) return new Res(null, 0, false);
        if (vn.isConstant()) return new Res("mem", vn.getOffset(), true);

        String nm = names.get(vkey(vn));
        PcodeOp def = vn.getDef();
        if (def == null) return new Res(nm != null ? nm : idName(vn), 0, true);

        switch (def.getOpcode()) {
            case PcodeOp.COPY:
            case PcodeOp.CAST:
            case PcodeOp.INT_ZEXT:
            case PcodeOp.INT_SEXT:
                return peel(def.getInput(0), names, depth + 1);

            case PcodeOp.INT_ADD:
            case PcodeOp.INT_SUB: {
                Res a = peel(def.getInput(0), names, depth + 1);
                Res b = peel(def.getInput(1), names, depth + 1);
                boolean neg = def.getOpcode() == PcodeOp.INT_SUB;
                boolean aConst = a.ok && "mem".equals(a.base);
                boolean bConst = b.ok && "mem".equals(b.base);
                if (aConst && bConst)
                    return new Res("mem", a.off + (neg ? -b.off : b.off), true);
                if (aConst) return b.ok ? addTo(b, neg ? -a.off : a.off) : b;
                if (bConst) return a.ok ? addTo(a, neg ? -b.off : b.off) : a;
                if (a.ok) return a;
                return b;
            }

            case PcodeOp.PTRSUB: {
                Res a = peel(def.getInput(0), names, depth + 1);
                Varnode sub = def.getInput(1);
                if (a.ok && sub.isConstant()) a.off += sub.getOffset();
                return a;
            }

            case PcodeOp.PTRADD:
            case PcodeOp.SEGMENTOP:
                // base + index*scale: the index is a variable, so only the base survives
                return peel(def.getInput(0), names, depth + 1);

            case PcodeOp.SUBPIECE:
                if (def.getInput(1).isConstant() && def.getInput(1).getOffset() == 0)
                    return peel(def.getInput(0), names, depth + 1);
                return new Res(null, 0, false);

            case PcodeOp.MULTIEQUAL: {
                for (int i = 0; i < def.getNumInputs(); i++) {
                    Res a = peel(def.getInput(i), names, depth + 1);
                    if (a.ok) return a;
                }
                return new Res(null, 0, false);
            }

            default:
                if (nm != null) return new Res(nm, 0, true);
                return new Res(idName(vn), 0, true);
        }
    }

    private static Res addTo(Res r, long delta) {
        return new Res(r.base, r.off + delta, r.ok);
    }

    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        File dir = new File(a.length > 0 ? a[0] : "re/model");
        dir.mkdirs();
        int timeout = a.length > 1 ? Integer.parseInt(a[1]) : 60;

        DecompileOptions opts = new DecompileOptions();
        opts.grabFromProgram(currentProgram);
        DecompInterface di = new DecompInterface();        di.setOptions(opts);
        di.setSimplificationStyle("decompile");
        if (!di.openProgram(currentProgram)) throw new Exception("decompiler could not open the program");

        FunctionManager fm = currentProgram.getFunctionManager();
        List<Function> functions = new ArrayList<>();
        for (Function f : fm.getFunctions(true))
            if (!f.isThunk() && !f.isExternal() && f.getBody() != null) functions.add(f);

        PrintWriter detail = new PrintWriter(new File(dir, "fields.csv"), "UTF-8");
        detail.println("function,base,offset,size,kind,count,addresses");

        Map<String, Hit> summary = new HashMap<>();
        Map<Integer, Integer> opHist = new HashMap<>();
        int ok = 0, failed = 0, accesses = 0;
        int nLoad = 0, nStore = 0, nUnresolved = 0;
        List<String> failedNames = new ArrayList<>();

        try {
            for (Function f : functions) {
                DecompileResults res = di.decompileFunction(f, timeout, monitor);
                if (res == null || !res.decompileCompleted() || res.getHighFunction() == null) {
                    failed++;
                    if (failedNames.size() < 20) failedNames.add(f.getName());
                    continue;
                }
                ok++;
                HighFunction hf = res.getHighFunction();

                // varnode -> decompiler name (param_1, this->field, local_x, ...)
                Map<String, String> names = new HashMap<>();
                Iterator<HighSymbol> sit = hf.getLocalSymbolMap().getSymbols();
                while (sit.hasNext()) {
                    HighSymbol sym = sit.next();
                    String name = sym.getName();
                    if (name == null || name.length() == 0) continue;
                    HighVariable hv = sym.getHighVariable();
                    if (hv == null) continue;
                    for (Varnode inst : hv.getInstances()) names.put(vkey(inst), name);
                }

                Map<String, Hit> local = new HashMap<>();
                Iterator<PcodeOpAST> ops = hf.getPcodeOps();
                while (ops.hasNext()) {
                    PcodeOp op = ops.next();
                    int code = op.getOpcode();
                    Integer hc = opHist.get(code);
                    opHist.put(code, hc == null ? 1 : hc + 1);
                    Varnode addrVn;
                    int size;
                    boolean write;
                    if (code == PcodeOp.LOAD && op.getNumInputs() >= 2 && op.getOutput() != null) {
                        addrVn = op.getInput(1);
                        size = op.getOutput().getSize();
                        write = false;
                        nLoad++;
                    }
                    else if (code == PcodeOp.STORE && op.getNumInputs() >= 3) {
                        addrVn = op.getInput(1);
                        size = op.getInput(2).getSize();
                        write = true;
                        nStore++;
                    }
                    else continue;

                    String base = null;
                    long off = 0;
                    Res r = peel(addrVn, names, 0);
                    if (r.ok) { base = r.base; off = r.off; }
                    else nUnresolved++;
                    if (base == null) continue;

                    String addrs = "";
                    Address ia = op.getSeqnum() != null ? op.getSeqnum().getTarget() : null;
                    if (ia != null) addrs = String.format("%08x", ia.getOffset());

                    String key = base + "@" + String.format("%x", off) + ":" + size + (write ? "w" : "r");
                    Hit h = local.get(key);
                    if (h == null) {
                        h = new Hit();
                        h.base = base; h.off = off; h.size = size; h.write = write;
                        local.put(key, h);
                    }
                    h.count++;
                    if (write) h.writes++; else h.reads++;
                    if (h.addrs.length() < 400) h.addrs.append(h.addrs.length() > 0 ? " " : "").append(addrs);

                    String skey = base + "\t" + String.format("%04x", off) + "\t" + size;
                    Hit sh = summary.get(skey);
                    if (sh == null) { sh = new Hit(); summary.put(skey, sh); }
                    sh.count++;
                    if (write) sh.writes++; else sh.reads++;
                }

                for (Map.Entry<String, Hit> e : local.entrySet()) {
                    Hit h = e.getValue();
                    detail.println(String.format("%s,%s,0x%x,%d,%s,%d,%s",
                        f.getName(), h.base, h.off, h.size,
                        h.write ? "w" : "r", h.count, h.addrs.toString()));
                    accesses += h.count;
                }
                if (ok % 100 == 0) println("FieldMap: " + ok + " functions, " + accesses + " accesses");
            }
        }
        finally {
            detail.close();
            di.dispose();
        }

        List<Map.Entry<String, Hit>> rows = new ArrayList<>(summary.entrySet());
        Collections.sort(rows, new Comparator<Map.Entry<String, Hit>>() {
            @Override
            public int compare(Map.Entry<String, Hit> x, Map.Entry<String, Hit> y) {
                return Long.compare(y.getValue().count, x.getValue().count);
            }
        });
        PrintWriter sum = new PrintWriter(new File(dir, "fieldsummary.csv"), "UTF-8");
        sum.println("base,offset,size,accesses,reads,writes");
        for (Map.Entry<String, Hit> e : rows) {
            String[] p = e.getKey().split("\t");
            Hit h = e.getValue();
            sum.println(p[0] + ",0x" + p[1] + "," + p[2] + "," + h.count + "," + h.reads + "," + h.writes);
        }
        sum.close();
        List<Map.Entry<Integer, Integer>> hist = new ArrayList<>(opHist.entrySet());
        Collections.sort(hist, new Comparator<Map.Entry<Integer, Integer>>() {
            @Override
            public int compare(Map.Entry<Integer, Integer> x, Map.Entry<Integer, Integer> y) {
                return Integer.compare(y.getValue(), x.getValue());
            }
        });
        StringBuilder hb = new StringBuilder();
        for (int i = 0; i < hist.size() && i < 14; i++)
            hb.append(" ").append(PcodeOp.getMnemonic(hist.get(i).getKey()))
              .append("=").append(hist.get(i).getValue());
        println("FieldMap: opcodes:" + hb);
        println("FieldMap: load=" + nLoad + " store=" + nStore + " unresolved=" + nUnresolved);
        if (!failedNames.isEmpty()) println("FieldMap: failed: " + failedNames);
        println("FieldMap: " + ok + " function(s) decompiled, " + failed + " failed, "
            + accesses + " typed accesses, " + rows.size() + " distinct base/offset/size -> "
            + new File(dir, "fieldsummary.csv").getAbsolutePath());
    }
}
