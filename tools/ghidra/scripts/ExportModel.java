// ICFTD: export the *model* of the program as machine-readable data, instead of text.
//
// Output (arg 0 = output directory, default re/model):
//   functions.csv   addr,size,params,signature,thunk,external,insns,callers,callees
//   xrefs.csv       from,to,type,call,jump,read,write,flow,function
//   globals.csv     addr,size,name,type,refs        (data symbols with a size)
//   strings.csv     addr,refs,value                 (defined strings + who uses them)
//   types.json      every struct/union/enum in the database (the struct registry)
//
// This is the input for docs/functions.csv, docs/structs.md and structs.h.
//
//@category ICFTD
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressIterator;
import ghidra.program.model.data.Composite;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeComponent;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.Enum;
import ghidra.program.model.data.TypeDef;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.ReferenceManager;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;
import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

public class ExportModel extends GhidraScript {

    private PrintWriter w;

    private static String csv(String s) {
        if (s == null) return "";
        boolean q = s.indexOf(',') >= 0 || s.indexOf('"') >= 0 || s.indexOf('\n') >= 0;
        String t = s.replace("\"", "\"\"");
        return q ? "\"" + t + "\"" : t;
    }

    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        File dir = new File(a.length > 0 ? a[0] : "re/model");
        dir.mkdirs();

        ReferenceManager rm = currentProgram.getReferenceManager();
        FunctionManager fm = currentProgram.getFunctionManager();

        // ---- one pass over every reference: count them per target address ----------
        Map<Long, Integer> refCount = new HashMap<>();
        File xrefs = new File(dir, "xrefs.csv");
        w = new PrintWriter(xrefs, "UTF-8");
        w.println("from,to,type,call,jump,read,write,flow,function");
        int refs = 0;
        AddressIterator ai = rm.getReferenceSourceIterator(currentProgram.getMemory(), true);
        while (ai.hasNext()) {
            Address from = ai.next();
            Function owner = fm.getFunctionContaining(from);
            for (Reference r : rm.getReferencesFrom(from)) {
                Address to = r.getToAddress();
                long key = to.getOffset();
                Integer c = refCount.get(key);
                refCount.put(key, (c == null ? 1 : c + 1));
                w.println(String.format("%08x,%08x,%s,%d,%d,%d,%d,%d,%s",
                    from.getOffset(), to.getOffset(),
                    csv(r.getReferenceType().getName()),
                    r.getReferenceType().isCall() ? 1 : 0,
                    r.getReferenceType().isJump() ? 1 : 0,
                    r.getReferenceType().isRead() ? 1 : 0,
                    r.getReferenceType().isWrite() ? 1 : 0,
                    r.getReferenceType().isFlow() ? 1 : 0,
                    csv(owner == null ? "" : owner.getName())));
                refs++;
            }
        }
        w.close();
        println("ExportModel: " + refs + " references");

        // ---- functions --------------------------------------------------------------
        List<Function> functions = new ArrayList<>();
        for (Function f : fm.getFunctions(true)) functions.add(f);

        w = new PrintWriter(new File(dir, "functions.csv"), "UTF-8");
        w.println("addr,size,params,signature,thunk,external,insns,callers,callees");
        for (Function f : functions) {
            Address ep = f.getEntryPoint();
            StringBuilder params = new StringBuilder();
            for (Parameter p : f.getParameters()) {
                if (params.length() > 0) params.append(' ');
                params.append(p.getDataType().getName()).append(' ').append(p.getName());
            }
            StringBuilder callers = new StringBuilder();
            for (Reference r : getReferencesTo(ep)) {
                Function caller = fm.getFunctionContaining(r.getFromAddress());
                if (caller != null && callers.indexOf(caller.getName()) < 0)
                    callers.append(callers.length() > 0 ? " " : "").append(caller.getName());
            }
            StringBuilder callees = new StringBuilder();
            for (Function c : f.getCalledFunctions(monitor)) {
                if (callees.indexOf(c.getName()) < 0)
                    callees.append(callees.length() > 0 ? " " : "").append(c.getName());
            }
            int insns = 0;
            InstructionIterator it = currentProgram.getListing().getInstructions(f.getBody(), true);
            while (it.hasNext()) { it.next(); insns++; }

            w.println(String.format("%08x,%d,%d,%s,%d,%d,%d,%s,%s",
                ep.getOffset(), f.getBody().getNumAddresses(), f.getParameterCount(),
                csv(f.getReturnType().getName() + " " + f.getName() + "(" + params + ")"),
                f.isThunk() ? 1 : 0, f.isExternal() ? 1 : 0, insns,
                csv(callers.toString()), csv(callees.toString())));
        }
        w.close();
        println("ExportModel: " + functions.size() + " functions");

        // ---- data symbols and strings -------------------------------------------------
        SymbolTable st = currentProgram.getSymbolTable();
        File globals = new File(dir, "globals.csv");
        File strings = new File(dir, "strings.csv");
        PrintWriter gw = new PrintWriter(globals, "UTF-8");
        PrintWriter sw = new PrintWriter(strings, "UTF-8");
        gw.println("addr,size,name,type,refs");
        sw.println("addr,refs,value");
        int nsym = 0, nstr = 0;

        SymbolIterator si = st.getAllSymbols(true);
        while (si.hasNext()) {
            Symbol s = si.next();
            Address ad = s.getAddress();
            if (ad == null || !ad.isMemoryAddress() || s.isExternal()) continue;
            Integer rc = refCount.get(ad.getOffset());
            int nr = rc == null ? 0 : rc;
            Data d = currentProgram.getListing().getDataAt(ad);
            if (d == null) continue;
            Object v = d.getValue();
            if (v instanceof String) {
                sw.println(String.format("%08x,%d,%s", ad.getOffset(), nr, csv((String) v)));
                nstr++;
            }
            else if (d.getNumComponents() == 0 && d.getLength() > 0) {
                gw.println(String.format("%08x,%d,%s,%s,%d", ad.getOffset(), d.getLength(),
                    csv(s.getName()), csv(d.getDataType().getName()), nr));
                nsym++;
            }
        }
        gw.close();
        sw.close();
        println("ExportModel: " + nsym + " data symbols, " + nstr + " strings");

        // ---- types ---------------------------------------------------------------------
        DataTypeManager dtm = currentProgram.getDataTypeManager();
        w = new PrintWriter(new File(dir, "types.json"), "UTF-8");
        w.println("{");
        boolean first = true;
        Iterator<DataType> dtIt = dtm.getAllDataTypes();
        while (dtIt.hasNext()) {
            DataType dt = dtIt.next();
            DataType base = dt;
            if (base instanceof TypeDef) base = ((TypeDef) base).getBaseDataType();
            String kind = null;
            if (base instanceof ghidra.program.model.data.Structure) kind = "struct";
            else if (base instanceof ghidra.program.model.data.Union) kind = "union";
            else if (base instanceof Enum) kind = "enum";
            if (kind == null) continue;
            if (!first) w.println(",");
            first = false;
            w.print("  {\"name\":\"" + dt.getName().replace("\"", "\\\"")
                + "\",\"kind\":\"" + kind + "\",\"size\":" + dt.getLength() + ",\"members\":[");
            if (base instanceof Composite) {
                DataTypeComponent[] comps = ((Composite) base).getComponents();
                for (int i = 0; i < comps.length; i++) {
                    if (i > 0) w.print(",");
                    String fname = comps[i].getFieldName();
                    if (fname == null) fname = "field_" + Integer.toHexString(comps[i].getOffset());
                    w.print("{\"name\":\"" + fname.replace("\"", "\\\"")
                        + "\",\"offset\":" + comps[i].getOffset()
                        + ",\"length\":" + comps[i].getLength()
                        + ",\"type\":\"" + comps[i].getDataType().getName().replace("\"", "\\\"")
                        + "\"}");
                }
            }
            else {
                Enum e = (Enum) base;
                String[] names = e.getNames();
                long[] values = e.getValues();
                for (int i = 0; i < names.length; i++) {
                    if (i > 0) w.print(",");
                    w.print("{\"name\":\"" + names[i].replace("\"", "\\\"")
                        + "\",\"offset\":" + values[i] + ",\"length\":" + e.getLength()
                        + ",\"type\":\"enum\"}");
                }
            }
            w.print("]}");
        }
        w.println();
        w.println("}");
        w.close();
        println("ExportModel: types -> " + new File(dir, "types.json").getAbsolutePath());
    }
}
