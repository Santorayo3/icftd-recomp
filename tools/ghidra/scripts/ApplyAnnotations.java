// ICFTD: apply docs/structs.csv and docs/annotations.csv to the Ghidra database.
//
// This is the "semantics" half of the model: ExportModel/FieldMap read the program, this
// script writes the knowledge back so the decompiler stops printing raw casts and DAT_.
//
//   args[0] = structs.csv
//   args[1] = annotations.csv
//
// Structures are created in a category named after the project so they survive in the .rep.
// Run it before DecompileAll, then re-measure with tools/decompile-quality.ps1.
//
//@category ICFTD
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.ArrayDataType;
import ghidra.program.model.data.ByteDataType;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeConflictHandler;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.DWordDataType;
import ghidra.program.model.data.IntegerDataType;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.data.ShortDataType;
import ghidra.program.model.data.SignedByteDataType;
import ghidra.program.model.data.Structure;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.VoidDataType;
import ghidra.program.model.data.WordDataType;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.listing.Variable;
import ghidra.program.model.symbol.SourceType;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class ApplyAnnotations extends GhidraScript {

    private DataTypeManager dtm;
    private final Map<String, Structure> structs = new HashMap<>();
    private int nStruct = 0, nField = 0, nFunc = 0, nGlobal = 0, nSkip = 0;

    /** Split a CSV line, honouring double quotes. */
    private static List<String> split(String line) {
        List<String> out = new ArrayList<>();
        StringBuilder cur = new StringBuilder();
        boolean q = false;
        for (int i = 0; i < line.length(); i++) {
            char c = line.charAt(i);
            if (q) {
                if (c == '"') {
                    if (i + 1 < line.length() && line.charAt(i + 1) == '"') { cur.append('"'); i++; }
                    else q = false;
                }
                else cur.append(c);
            }
            else if (c == '"') q = true;
            else if (c == ',') { out.add(cur.toString().trim()); cur.setLength(0); }
            else cur.append(c);
        }
        out.add(cur.toString().trim());
        return out;
    }

    private static List<List<String>> readCsv(File f) throws Exception {
        List<List<String>> rows = new ArrayList<>();
        BufferedReader r = new BufferedReader(new FileReader(f));
        try {
            String line;
            while ((line = r.readLine()) != null) {
                if (line.trim().length() == 0 || line.trim().startsWith("#")) continue;
                if (line.startsWith("struct,") || line.startsWith("addr,")) continue;
                rows.add(split(line));
            }
        }
        finally { r.close(); }
        return rows;
    }

    /** Resolve a type expression: "u16", "u16[32]", "move_node*", "s32". */
    private DataType type(String expr) {
        if (expr == null) return null;
        expr = expr.trim();
        if (expr.length() == 0) return null;

        int br = expr.indexOf('[');
        if (br > 0 && expr.endsWith("]")) {
            String baseName = expr.substring(0, br);
            int count = Integer.decode(expr.substring(br + 1, expr.length() - 1));
            DataType base = type(baseName);
            if (base == null) return null;
            return new ArrayDataType(base, count, base.getLength());
        }
        if (expr.endsWith("*")) {
            DataType base = type(expr.substring(0, expr.length() - 1));
            if (base == null) return null;
            return new PointerDataType(base, dtm);
        }
        if (expr.equals("u8")) return new ByteDataType();
        if (expr.equals("s8")) return new SignedByteDataType();
        if (expr.equals("u16")) return new WordDataType();
        if (expr.equals("s16")) return new ShortDataType();
        if (expr.equals("u32")) return new DWordDataType();
        if (expr.equals("s32")) return new IntegerDataType();
        if (expr.equals("void")) return new VoidDataType();
        Structure s = structs.get(expr);
        if (s != null) return s;
        println("ApplyAnnotations: unknown type '" + expr + "'");
        return null;
    }

    private static final CategoryPath CAT = new CategoryPath("/icftd");

    private void defineStructs(File f) throws Exception {
        List<List<String>> rows = readCsv(f);

        // pass 1: create every structure so pointers can reference each other. They live in
        // /icftd so a re-run replaces them by name instead of accumulating _conflict copies.
        Map<String, Integer> size = new LinkedHashMap<>();
        for (List<String> r : rows) {
            if (r.size() < 2) continue;
            String name = r.get(0);
            int sz = Integer.decode(r.get(1));
            if (!structs.containsKey(name)) {
                StructureDataType sd = new StructureDataType(CAT, name, 0, dtm);
                sd.growStructure(sz);
                Structure live = (Structure) dtm.addDataType(sd, DataTypeConflictHandler.REPLACE_HANDLER);
                structs.put(name, live);
                size.put(name, sz);
                nStruct++;
            }
        }

        // pass 2: fill the fields
        for (List<String> r : rows) {
            if (r.size() < 4) continue;
            Structure s = structs.get(r.get(0));
            if (s == null) continue;
            int off = Integer.decode(r.get(2));
            DataType dt = type(r.get(3));
            if (dt == null) { nSkip++; continue; }
            String nm = r.size() > 4 && r.get(4).length() > 0 ? r.get(4) : null;
            String cm = r.size() > 5 && r.get(5).length() > 0 ? r.get(5) : null;
            try {
                s.replaceAtOffset(off, dt, dt.getLength(), nm, cm);
                nField++;
            }
            catch (Exception e) {
                println("ApplyAnnotations: field " + r.get(0) + "+0x"
                    + Integer.toHexString(off) + " failed: " + e.getMessage());
                nSkip++;
            }
        }
        for (Map.Entry<String, Structure> e : structs.entrySet())
            println("ApplyAnnotations: struct " + e.getKey() + " = "
                + e.getValue().getLength() + " bytes, " + e.getValue().getNumComponents() + " fields");
    }

    private void applyAnnotations(File f) throws Exception {
        FunctionManager fm = currentProgram.getFunctionManager();
        for (List<String> r : readCsv(f)) {
            if (r.size() < 4) continue;
            Address a;
            try { a = toAddr(r.get(0)); }
            catch (Exception e) { println("ApplyAnnotations: bad address " + r.get(0)); nSkip++; continue; }
            String kind = r.get(1);
            String name = r.get(2);

            if (kind.equals("func")) {
                Function fn = fm.getFunctionAt(a);
                if (fn == null) { println("ApplyAnnotations: no function at " + r.get(0)); nSkip++; continue; }
                DataType ret = type(r.get(3));
                StringBuilder params = new StringBuilder();
                if (r.size() > 4 && r.get(4).length() > 0) {
                    String[] parts = r.get(4).split("\\|");
                    for (int i = 0; i < parts.length; i++) {
                        DataType dt = type(parts[i]);
                        if (dt == null) { params.append("?"); continue; }
                        params.append(params.length() > 0 ? ", " : "").append(dt.getName());
                        Parameter p = i < fn.getParameterCount() ? fn.getParameter(i) : null;
                        if (p != null) {
                            Variable v = p;
                            v.setDataType(dt, SourceType.USER_DEFINED);
                        }
                        else println("ApplyAnnotations: " + name + " has no parameter " + i);
                    }
                }
                if (ret != null) fn.setReturnType(ret, SourceType.USER_DEFINED);
                fn.setName(name, SourceType.USER_DEFINED);
                if (r.size() > 6 && r.get(6).length() > 0) fn.setComment(r.get(6));
                println("ApplyAnnotations: func " + name + "(" + params + ")");
                nFunc++;
            }
            else if (kind.equals("global")) {
                DataType dt = type(r.get(3));
                if (dt == null) { nSkip++; continue; }
                try {
                    // the analyzer defined these as individual words; an array or a pointer
                    // needs the range cleared first or createData reports a conflict
                    clearListing(a, a.add(dt.getLength() - 1));
                    createLabel(a, name, true, SourceType.USER_DEFINED);
                    createData(a, dt);
                    if (r.size() > 5 && r.get(5).length() > 0) setPlateComment(a, r.get(5));
                    nGlobal++;
                }
                catch (Exception e) {
                    println("ApplyAnnotations: global " + name + " failed: " + e.getMessage());
                    nSkip++;
                }
            }
        }
    }

    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        if (a.length < 2) throw new Exception("usage: ApplyAnnotations.java <structs.csv> <annotations.csv>");
        dtm = currentProgram.getDataTypeManager();

        int tx = currentProgram.startTransaction("ICFTD annotations");
        boolean ok = false;
        try {
            defineStructs(new File(a[0]));
            applyAnnotations(new File(a[1]));
            ok = true;
        }
        finally {
            currentProgram.endTransaction(tx, ok);
        }
        println("ApplyAnnotations: " + nStruct + " structs, " + nField + " fields, "
            + nFunc + " functions, " + nGlobal + " globals, " + nSkip + " skipped");
    }
}
