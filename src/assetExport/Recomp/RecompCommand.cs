using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text;

namespace ICFTD.AmigaExport.Recomp;

/// <summary>
/// <c>recomp &lt;outDir&gt;</c>: translates every function of the base-0 load image to C.
///
/// Function boundaries and the instruction count of each come from <c>re\model\functions.csv</c>
/// (Ghidra's model). A function is emitted when the emitter can prove its decode - see
/// <see cref="Emitter"/> - and is otherwise reported with the reason, so the next session knows
/// exactly which construct is missing. Nothing is guessed: an unemitted function keeps the
/// interpreter fallback and still runs.
/// </summary>
public static class RecompCommand
{
    const string ImagePath = "export/code/dshell/dshell.img";
    const string HunkPath = "export/disk1/dshell";
    const string ModelPath = "re/model/functions.csv";
    const string OutDir = "src/recomp";

    public static int Run(string[] args)
    {
        string? outDir = null;
        string? reportPath = null;
        bool verbose = false;
        bool translateThunks = true;
        for (int i = 1; i < args.Length; i++)
        {
            switch (args[i])
            {
                case "--report": reportPath = args[++i]; break;
                case "--out": outDir = args[++i]; break;
                case "--no-thunks": translateThunks = false; break;
                case "-v": verbose = true; break;
                default: outDir ??= args[i]; break;
            }
        }
        outDir ??= OutDir;

        string root = FindRepoRoot() ?? throw new Exception("not inside the icftd-recomp repo");
        string imagePath = Path.Combine(root, ImagePath.Replace('/', Path.DirectorySeparatorChar));
        string hunkPath = Path.Combine(root, HunkPath.Replace('/', Path.DirectorySeparatorChar));
        string modelPath = Path.Combine(root, ModelPath.Replace('/', Path.DirectorySeparatorChar));
        if (!File.Exists(imagePath)) throw new FileNotFoundException($"no image at {imagePath}");
        if (!File.Exists(hunkPath)) throw new FileNotFoundException($"no hunk file at {hunkPath}");
        if (!File.Exists(modelPath)) throw new FileNotFoundException($"no model at {modelPath}");
        outDir = Path.IsPathRooted(outDir) ? outDir : Path.Combine(root, outDir);
        Directory.CreateDirectory(outDir);

        byte[] image = File.ReadAllBytes(imagePath);

        // Which absolute-long operands are pointers is not a matter of taste: the linker recorded
        // every one of them in the hunk's reloc32 table, and the loader moves exactly those. The
        // hunk is parsed at base 0 because that is the layout of the image beside it.
        var hunk = new Hunk(File.ReadAllBytes(hunkPath));
        hunk.Parse(0);
        uint[] relocSites = hunk.Relocations.Where(r => r.Width == 4).Select(r => (uint)r.Site).ToArray();

        var functions = LoadModel(modelPath);
        var emitter = new Emitter(image, relocSites);

        // The output is generated: stale files would claim functions that no longer qualify.
        foreach (string stale in Directory.GetFiles(outDir, "fn_*.c"))
        {
            if (!functions.Any(f => Path.GetFileName(stale).Equals($"fn_{f.Addr:x8}.c", StringComparison.Ordinal)))
                File.Delete(stale);
        }

        var emitted = new List<(uint Addr, int Bytes, int Insns)>();
        var kept = new List<Emitter.Function>();
        var reasons = new Dictionary<string, int>();
        int bytes = 0, insns = 0, totalBytes = 0, thunks = 0;

        // A function's decode may not run past the next function: embedded data ends where the
        // following entry begins.
        uint[] starts = functions.Select(f => f.Addr).OrderBy(a => a).ToArray();

        foreach (var (addr, size, expectedInsns, thunk) in functions)
        {
            totalBytes += size;
            if (thunk && !translateThunks) { thunks++; continue; }

            int at = Array.BinarySearch(starts, addr);
            uint limit = at + 1 < starts.Length ? starts[at + 1] : addr + (uint)size + 0x1000u;

            Emitter.Function f = emitter.Decode(addr, size, expectedInsns, limit);
            if (f.Why == null)
            {
                string? body = emitter.EmitBody(f);
                if (body == null)
                {
                    Count(reasons, FirstLine(f.Why!));
                    if (verbose) Console.WriteLine($"  reject {addr:x8}  {f.Why}");
                }
                else
                {
                    string path = Path.Combine(outDir, $"fn_{addr:x8}.c");
                    File.WriteAllText(path, Header(f, body) + body + "}\n", Utf8NoBom());
                    /* The model's size is the sum of instruction bytes; a function with an embedded
                     * switch table spans further than that (the table sits between instructions),
                     * and a jsr return address can land after the size boundary. The table entry
                     * must own every instruction the body dispatches on. */
                    emitted.Add((addr, Span(f), f.Insns.Count));
                    kept.Add(f);
                    bytes += size;
                    insns += f.Insns.Count;
                    if (verbose) Console.WriteLine($"emitted {addr:x8}  {size,5} B  {f.Insns.Count,4} insn");
                }
            }
            else
            {
                Count(reasons, FirstLine(f.Why));
                if (verbose) Console.WriteLine($"  reject {addr:x8}  {f.Why}");
            }
        }

        // Code outside every modelled function that translated code transfers to - a shared epilogue,
        // for instance, which the model records as a label rather than a function. Emitted as its own
        // block so the dispatch resolves it instead of falling into the interpreter.
        var blocks = new List<Emitter.Function>();
        var claimed = new HashSet<uint>();
        var work = new Queue<uint>();
        foreach (Emitter.Function f in kept)
            foreach (uint t in emitter.Targets(f)) work.Enqueue(t);
        while (work.Count > 0)
        {
            uint t = work.Dequeue();
            if (t < 2u || t >= (uint)image.Length || claimed.Contains(t)) continue;
            if (InModel(starts, functions, t)) continue;
            if (emitted.Any(e => t >= e.Addr && t < e.Addr + (uint)e.Bytes)) continue;
            if (blocks.Any(b => t >= b.Entry && t < b.Entry + (uint)b.Size)) continue;
            claimed.Add(t);

            int at = Array.BinarySearch(starts, t);
            if (at < 0) at = ~at;
            uint limit = at < starts.Length ? starts[at] : (uint)image.Length;

            Emitter.Function b = emitter.DecodeBlock(t, limit);
            string? body = b.Why == null ? emitter.EmitBody(b) : null;
            if (body == null)
            {
                Count(reasons, "block: " + FirstLine(b.Why!));
                if (verbose) Console.WriteLine($"  reject {t:x8}  block: {b.Why}");
                continue;
            }
            File.WriteAllText(Path.Combine(outDir, $"fn_{t:x8}.c"), Header(b, body) + body + "}\n", Utf8NoBom());
            blocks.Add(b);
            if (verbose) Console.WriteLine($"block   {t:x8}  {b.Size,5} B  {b.Insns.Count,4} insn");
            foreach (uint u in emitter.Targets(b)) work.Enqueue(u);
        }
        int modelEmitted = emitted.Count;
        int blockBytes = 0, blockInsns = 0;
        foreach (Emitter.Function b in blocks)
        {
            emitted.Add((b.Entry, b.Size, b.Insns.Count));
            blockBytes += b.Size;
            blockInsns += b.Insns.Count;
        }

        WriteTable(Path.Combine(outDir, "fn_table.c"), emitted);

        var sb = new StringBuilder();
        sb.AppendLine($"recomp: {functions.Count} function(s), {totalBytes} byte(s) of code");
        sb.AppendLine($"  emitted       {modelEmitted,4} function(s), {bytes} byte(s), {insns} instruction(s)");
        sb.AppendLine($"  blocks        {blocks.Count,4} block(s) outside the model, {blockBytes} byte(s), {blockInsns} instruction(s)");
        sb.AppendLine($"  thunk/entry   {thunks,4} function(s) (a bare jmp: never called as a function)");
        sb.AppendLine($"  not emitted   {functions.Count - modelEmitted - thunks,4} function(s)");
        int codeRelocs = relocSites.Count(s => s < Emitter.VectorTableBase);
        sb.AppendLine($"  relocations   {relocSites.Length,4} longword(s) in the hunk, {codeRelocs} inside the code hunk");
        if (reasons.Count > 0)
        {
            sb.AppendLine("  reasons:");
            foreach (var kv in reasons.OrderByDescending(k => k.Value))
                sb.AppendLine($"    {kv.Value,4}  {kv.Key}");
        }
        string report = sb.ToString();
        Console.Write(report);
        if (reportPath != null)
        {
            string p = Path.IsPathRooted(reportPath) ? reportPath : Path.Combine(root, reportPath);
            Directory.CreateDirectory(Path.GetDirectoryName(p)!);
            File.WriteAllText(p, report, Utf8NoBom());
        }
        return 0;
    }

    static void Count(Dictionary<string, int> d, string key)
    {
        d[key] = d.TryGetValue(key, out int n) ? n + 1 : 1;
    }

    /// <summary>The bytes a decoded function covers, including any embedded data between its
    /// instructions (the model's size counts only instruction bytes).</summary>
    static int Span(Emitter.Function f)
    {
        uint end = f.Entry;
        foreach (Insn insn in f.Insns)
        {
            uint after = insn.Addr + (uint)insn.Len;
            if (after > end) end = after;
        }
        return (int)(end - f.Entry);
    }

    /// <summary>True when `addr` falls inside a modelled function's byte range.</summary>
    static bool InModel(uint[] starts, List<(uint Addr, int Size, int Insns, bool Thunk)> functions, uint addr)
    {
        int lo = 0, hi = starts.Length;
        while (lo < hi)
        {
            int mid = (lo + hi) / 2;
            if (starts[mid] <= addr) lo = mid + 1; else hi = mid;
        }
        if (lo == 0) return false;
        int i = lo - 1;
        return addr < starts[i] + (uint)functions.First(f => f.Addr == starts[i]).Size;
    }

    /// <summary>The reason without the address, so the report groups by construct.</summary>
    static string FirstLine(string why)
    {
        int at = why.IndexOf(": ", StringComparison.Ordinal);
        return at > 0 && at < 12 ? why[(at + 2)..] : why;
    }

    static string Header(Emitter.Function f, string body)
    {
        var sb = new StringBuilder();
        sb.AppendLine($"/* fn_{f.Entry:x8} - {f.Size} byte(s), {f.Insns.Count} instruction(s).");
        sb.AppendLine(" * Generated from export\\code\\dshell\\dshell.img by `recomp` - one C statement per 68000");
        sb.AppendLine(" * instruction, the original's control flow as labels. Hand edits belong in src\\recomp\\patches.");
        sb.AppendLine(" * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.");
        sb.AppendLine(" * Verified against the interpreter as `rcmp` runs it: tools\\recomp-fixtures.ps1. */");
        sb.AppendLine("#include \"cpu.h\"");
        sb.AppendLine();
        sb.AppendLine($"void fn_{f.Entry:x8}(cpu_t *c, rt_machine *m)");
        sb.AppendLine("{");
        var used = new List<string>();
        foreach (string t in new[] { "t0", "t1", "t2", "t3", "t4" })
            if (body.Contains(t, StringComparison.Ordinal)) used.Add(t);
        if (used.Count > 0) sb.AppendLine("    u32 " + string.Join(", ", used) + ";");
        sb.AppendLine();
        return sb.ToString();
    }

    static void WriteTable(string path, List<(uint Addr, int Bytes, int Insns)> emitted)
    {
        var sb = new StringBuilder();
        sb.AppendLine("/* The translated function table. Generated by `recomp`; sorted by address, so the lookup is");
        sb.AppendLine(" * a binary search. `end` lets a call that lands in the middle of a function find its owner." );
        sb.AppendLine(" * A call the table cannot resolve reaches the interpreter second (rc_interpreter, set by the");
        sb.AppendLine(" * development build only). */");
        sb.AppendLine("#include \"fn_table.h\"");
        sb.AppendLine();
        foreach (var f in emitted.OrderBy(x => x.Addr))
            sb.AppendLine($"RC_DECL({f.Addr:x8});");
        sb.AppendLine();
        sb.AppendLine("const rc_entry rc_functions[] =");
        sb.AppendLine("{");
        foreach (var f in emitted.OrderBy(x => x.Addr))
            sb.AppendLine($"    {{ RC_ADDR(0x{f.Addr:x8}u), RC_ADDR(0x{f.Addr + f.Bytes:x8}u), fn_{f.Addr:x8} }},");
        sb.AppendLine("    { 0x00000000u, 0x00000000u, 0 }");
        sb.AppendLine("};");
        sb.AppendLine();
        sb.AppendLine("const unsigned rc_functionCount = sizeof(rc_functions) / sizeof(rc_functions[0]) - 1u;");
        sb.AppendLine();
        sb.AppendLine("rc_fn rc_lookup(u32 addr)");
        sb.AppendLine("{");
        sb.AppendLine("    unsigned lo = 0, hi = rc_functionCount;");
        sb.AppendLine();
        sb.AppendLine("    while (lo < hi)");
        sb.AppendLine("    {");
        sb.AppendLine("        unsigned mid = (lo + hi) / 2u;");
        sb.AppendLine("        if (rc_functions[mid].addr == addr) return rc_functions[mid].fn;");
        sb.AppendLine("        if (rc_functions[mid].addr < addr) lo = mid + 1u;");
        sb.AppendLine("        else hi = mid;");
        sb.AppendLine("    }");
        sb.AppendLine("    return 0;");
        sb.AppendLine("}");
        sb.AppendLine();
        sb.AppendLine("/* The function that owns an address: a call can land in the middle of a body, which is how the");
        sb.AppendLine(" * engine's own opcode and jump tables work. Every instruction is a dispatch case there. */");
        sb.AppendLine("const rc_entry *rc_containing(u32 addr)");
        sb.AppendLine("{");
        sb.AppendLine("    unsigned lo = 0, hi = rc_functionCount;");
        sb.AppendLine();
        sb.AppendLine("    while (lo < hi)");
        sb.AppendLine("    {");
        sb.AppendLine("        unsigned mid = (lo + hi) / 2u;");
        sb.AppendLine("        if (rc_functions[mid].addr <= addr) lo = mid + 1u;");
        sb.AppendLine("        else hi = mid;");
        sb.AppendLine("    }");
        sb.AppendLine("    if (lo == 0) return 0;");
        sb.AppendLine("    const rc_entry *e = &rc_functions[lo - 1u];");
        sb.AppendLine("    return addr < e->end ? e : 0;");
        sb.AppendLine("}");
        File.WriteAllText(path, sb.ToString(), Utf8NoBom());
    }

    static List<(uint Addr, int Size, int Insns, bool Thunk)> LoadModel(string path)
    {
        var list = new List<(uint, int, int, bool)>();
        var lines = File.ReadAllLines(path);
        for (int i = 1; i < lines.Length; i++)
        {
            string[] f = lines[i].Split(',');
            if (f.Length < 7) continue;
            uint addr = uint.Parse(f[0], NumberStyles.HexNumber, CultureInfo.InvariantCulture);
            int size = int.Parse(f[1], CultureInfo.InvariantCulture);
            int insns = int.Parse(f[6], CultureInfo.InvariantCulture);
            bool thunk = f[4].Trim() == "1";
            if (size <= 0) continue;
            list.Add((addr, size, insns, thunk));
        }
        list.Sort((a, b) => a.Item1.CompareTo(b.Item1));
        return list;
    }

    static Encoding Utf8NoBom() => new UTF8Encoding(false);

    static string? FindRepoRoot()
    {
        foreach (string start in new[] { Directory.GetCurrentDirectory(), AppContext.BaseDirectory })
        {
            var dir = new DirectoryInfo(start);
            for (int i = 0; i < 8 && dir != null; i++, dir = dir.Parent)
            {
                if (File.Exists(Path.Combine(dir.FullName, "docs", "next-session.md")) ||
                    (Directory.Exists(Path.Combine(dir.FullName, "export", "code", "dshell")) &&
                     Directory.Exists(Path.Combine(dir.FullName, "src", "assetExport"))))
                    return dir.FullName;
            }
        }
        return null;
    }
}
