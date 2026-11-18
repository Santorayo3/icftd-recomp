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
///
/// The defaults are the 1989 build. A second build of the engine (Antheads, docs\antheads.md) is
/// translated by naming its own image, hunk, model, output directory and vector-table base.
/// </summary>
public static class RecompCommand
{
    const string DefaultImagePath = "export/code/dshell/dshell.img";
    const string DefaultHunkPath = "export/disk1/dshell";
    const string DefaultModelPath = "re/model/functions.csv";
    const string DefaultOutDir = "src/recomp";

    public static int Run(string[] args)
    {
        string? outDir = null;
        string? reportPath = null;
        string? imageArg = null;
        string? hunkArg = null;
        string? modelArg = null;
        string? prefixArg = null;
        string? saveName = null;
        string? programName = null;
        uint saveBytes = 0;
        uint? a4Model = null;
        uint? entryModel = null;
        uint? codeEnd = null;
        uint vectorTableBase = Emitter.DefaultVectorTableBase;
        bool verbose = false;
        bool translateThunks = true;
        for (int i = 1; i < args.Length; i++)
        {
            switch (args[i])
            {
                case "--report": reportPath = args[++i]; break;
                case "--out": outDir = args[++i]; break;
                case "--image": imageArg = args[++i]; break;
                case "--hunk": hunkArg = args[++i]; break;
                case "--model": modelArg = args[++i]; break;
                case "--prefix": prefixArg = args[++i]; break;
                case "--save-name": saveName = args[++i]; break;
                case "--save-bytes": saveBytes = ParseAddress(args[++i]); break;
                case "--program-name": programName = args[++i]; break;
                case "--a4": a4Model = ParseAddress(args[++i]); break;
                case "--entry": entryModel = ParseAddress(args[++i]); break;
                case "--code-end": codeEnd = ParseAddress(args[++i]); break;
                case "--vector-base": vectorTableBase = ParseAddress(args[++i]); break;
                case "--no-thunks": translateThunks = false; break;
                case "-v": verbose = true; break;
                default: outDir ??= args[i]; break;
            }
        }
        outDir ??= DefaultOutDir;

        string root = FindRepoRoot() ?? throw new Exception("not inside the icftd-recomp repo");
        string imagePath = Path.Combine(root, ImagePath(imageArg ?? DefaultImagePath));
        string hunkPath = Path.Combine(root, ImagePath(hunkArg ?? DefaultHunkPath));
        string modelPath = Path.Combine(root, ImagePath(modelArg ?? DefaultModelPath));
        if (!File.Exists(imagePath)) throw new FileNotFoundException($"no image at {imagePath}");
        if (!File.Exists(hunkPath)) throw new FileNotFoundException($"no hunk file at {hunkPath}");
        if (!File.Exists(modelPath)) throw new FileNotFoundException($"no model at {modelPath}");
        outDir = Path.IsPathRooted(outDir) ? outDir : Path.Combine(root, outDir);
        Directory.CreateDirectory(outDir);
        codeEnd ??= vectorTableBase;

        byte[] image = File.ReadAllBytes(imagePath);

        // Which absolute-long operands are pointers is not a matter of taste: the linker recorded
        // every one of them in the hunk's reloc32 table, and the loader moves exactly those. The
        // hunk is parsed at base 0 because that is the layout of the image beside it.
        var hunk = new Hunk(File.ReadAllBytes(hunkPath));
        hunk.Parse(0);
        uint[] relocSites = hunk.Relocations.Where(r => r.Width == 4).Select(r => (uint)r.Site).ToArray();

        var functions = LoadModel(modelPath);
        var emitter = new Emitter(image, relocSites, vectorTableBase);

        // A second build of the engine shares the address space with the first, so both its file
        // contents and its table symbols carry a prefix: `ant_fn_0001dcb0`, `ant_functions`.
        string fnPrefix = prefixArg == null ? "" : prefixArg + "_";
        string sym = prefixArg ?? "rc";

        // The build as a program: where it runs (A4 and entry as image offsets - the emitted
        // descriptor applies RC_ADDR) and the save file its own save routine writes.
        uint a4 = a4Model ?? vectorTableBase + 0x7FFEu;
        uint entry = entryModel ?? 0u;
        string save = saveName ?? "ICFTD";
        uint saveSize = saveBytes != 0 ? saveBytes : 0x78u + 0x3024u;
        string program = programName ?? "It Came from the Desert";

        // The provenance line in every emitted file names the image it came from, so a second build
        // cannot be mistaken for the first.
        string label = Path.GetRelativePath(root, imagePath).Replace(Path.DirectorySeparatorChar, '\\');
        bool rcmp = vectorTableBase == Emitter.DefaultVectorTableBase;

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
        // following entry begins. A model entry can also sit *inside* a function's bytes - the
        // cstart's FPU-state stubs do - and then it owns those bytes itself.
        uint[] starts = functions.Select(f => f.Addr).OrderBy(a => a).ToArray();

        List<(uint Addr, int Size)> Nested(uint addr, int size)
        {
            var list = new List<(uint, int)>();
            int idx = Array.BinarySearch(starts, addr);
            for (int i = (idx >= 0 ? idx : ~idx) + 1; i < starts.Length && starts[i] < addr + (uint)size; i++)
            {
                var e = functions.First(f => f.Addr == starts[i]);
                list.Add((e.Addr, e.Size));
            }
            return list;
        }

        foreach (var (addr, size, expectedInsns, thunk) in functions)
        {
            totalBytes += size;
            if (thunk && !translateThunks) { thunks++; continue; }

            int at = Array.BinarySearch(starts, addr);
            uint limit = at + 1 < starts.Length ? starts[at + 1] : addr + (uint)size + 0x1000u;

            Emitter.Function f = emitter.Decode(addr, size, expectedInsns, limit, Nested(addr, size));
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
                    File.WriteAllText(path, Header(label, rcmp, f, body, fnPrefix) + body + "}\n", Utf8NoBom());
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
        // block so the dispatch resolves it instead of falling into the interpreter. A block ends
        // where the model's own instructions begin, so a case body cut off a modelled function hands
        // over to it instead of duplicating it.
        var blocks = new List<Emitter.Function>();
        var claimed = new HashSet<uint>();
        var work = new Queue<uint>();
        var code = new HashSet<uint>();
        foreach (Emitter.Function f in kept)
            foreach (Insn i in f.Insns) code.Add(i.Addr);
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

            Emitter.Function b = emitter.DecodeBlock(t, code.Contains);
            string? body = b.Why == null ? emitter.EmitBody(b) : null;
            if (body == null)
            {
                Count(reasons, "block: " + FirstLine(b.Why!));
                if (verbose) Console.WriteLine($"  reject {t:x8}  block: {b.Why}");
                continue;
            }
            File.WriteAllText(Path.Combine(outDir, $"fn_{t:x8}.c"), Header(label, rcmp, b, body, fnPrefix) + body + "}\n", Utf8NoBom());
            blocks.Add(b);
            foreach (Insn i in b.Insns) code.Add(i.Addr);
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

        WriteTable(Path.Combine(outDir, prefixArg == null ? "fn_table.c" : prefixArg + "_table.c"),
                   sym, fnPrefix, emitted,
                   new TableProgram((uint)image.Length, a4, entry, save, saveSize, program));

        var sb = new StringBuilder();
        sb.AppendLine($"recomp: {functions.Count} function(s), {totalBytes} byte(s) of code");
        sb.AppendLine($"  emitted       {modelEmitted,4} function(s), {bytes} byte(s), {insns} instruction(s)");
        sb.AppendLine($"  blocks        {blocks.Count,4} block(s) outside the model, {blockBytes} byte(s), {blockInsns} instruction(s)");
        sb.AppendLine($"  thunk/entry   {thunks,4} function(s) (a bare jmp: never called as a function)");
        sb.AppendLine($"  not emitted   {functions.Count - modelEmitted - thunks,4} function(s)");
        int codeRelocs = relocSites.Count(s => s < vectorTableBase);
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

    /// <summary>
    /// One emitted file's opening block. <paramref name="label"/> names the image the code came
    /// from; <paramref name="rcmp"/> says whether this is the build the interpreter harness models
    /// (the 1989 one) - a second build is checked against the oracle's machine state instead.
    /// </summary>
    static string Header(string label, bool rcmp, Emitter.Function f, string body, string fnPrefix)
    {
        var sb = new StringBuilder();
        sb.AppendLine($"/* fn_{f.Entry:x8} - {f.Size} byte(s), {f.Insns.Count} instruction(s).");
        sb.AppendLine(" * Generated from " + label + " by `recomp` - one C statement per 68000");
        sb.AppendLine(" * instruction, the original's control flow as labels. Hand edits belong in src\\recomp\\patches.");
        sb.AppendLine(" * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.");
        if (rcmp)
            sb.AppendLine(" * Verified against the interpreter as `rcmp` runs it: tools\\recomp-fixtures.ps1. */");
        else
            sb.AppendLine(" * Verified against the oracle's machine state: tools\\state-diff.ps1. */");
        sb.AppendLine("#include \"cpu.h\"");
        sb.AppendLine();
        sb.AppendLine($"void {fnPrefix}fn_{f.Entry:x8}(cpu_t *c, rt_machine *m)");
        sb.AppendLine("{");
        var used = new List<string>();
        foreach (string t in new[] { "t0", "t1", "t2", "t3", "t4" })
            if (body.Contains(t, StringComparison.Ordinal)) used.Add(t);
        if (used.Count > 0) sb.AppendLine("    u32 " + string.Join(", ", used) + ";");
        sb.AppendLine();
        return sb.ToString();
    }

    /// <summary>What the generated table says about its build beyond the functions themselves.</summary>
    sealed class TableProgram
    {
        public TableProgram(uint imageSize, uint a4, uint entry, string saveName, uint saveBytes,
                            string name)
        { ImageSize = imageSize; A4 = a4; Entry = entry; SaveName = saveName; SaveBytes = saveBytes; Name = name; }

        public uint ImageSize { get; }
        public uint A4 { get; }        // image offset; the emitted field is RC_ADDR()'d
        public uint Entry { get; }
        public string SaveName { get; }
        public uint SaveBytes { get; }
        public string Name { get; }
    }

    /// <summary>
    /// The function table of one engine build: the sorted <c>rc_entry</c> array, its count and the
    /// <c>rc_program</c> the front end runs it with. The count is an enumerator because a static
    /// initializer cannot read the <c>const unsigned</c>, and the array is declared with the
    /// enumerator's size, so the compiler checks the count against the emitted list.
    /// <paramref name="sym"/> is the symbol prefix: <c>rc</c> for the 1989 build's
    /// <c>fn_table.c</c> (and <c>rc_engine</c>), <c>ant</c> for a second build's
    /// <c>ant_table.c</c> (plus a matching <c>ant_table.h</c>, because the shared
    /// <c>fn_table.h</c> names the 1989 table).
    /// </summary>
    static void WriteTable(string path, string sym, string fnPrefix,
                           List<(uint Addr, int Bytes, int Insns)> emitted, TableProgram prog)
    {
        bool addon = fnPrefix.Length != 0;
        string decl = sym + "_DECL";
        string count = sym.ToUpperInvariant() + "_FUNCTION_COUNT";
        string what = addon ? $"the {sym} build" : "the 1989 build";
        var sb = new StringBuilder();
        sb.AppendLine($"/* The translated function table of {what}. Generated by `recomp`; sorted by address,");
        sb.AppendLine(" * so the lookup is a binary search. `end` lets a call that lands in the middle of a function");
        sb.AppendLine(" * find its owner. A call no table resolves reaches the interpreter second (rc_interpreter,");
        sb.AppendLine(" * set by the development build only). */");
        sb.AppendLine("#include \"fn_table.h\"");
        sb.AppendLine();
        if (addon)
        {
            sb.AppendLine($"#define {decl}(addr) extern void {fnPrefix}fn_##addr(cpu_t *c, rt_machine *m)");
            sb.AppendLine();
        }
        foreach (var f in emitted.OrderBy(x => x.Addr))
            sb.AppendLine($"{(addon ? decl : "RC_DECL")}({f.Addr:x8});");
        sb.AppendLine();
        sb.AppendLine($"enum {{ {count} = {emitted.Count} }};");
        sb.AppendLine();
        sb.AppendLine($"const rc_entry {sym}_functions[{count} + 1] =");
        sb.AppendLine("{");
        foreach (var f in emitted.OrderBy(x => x.Addr))
            sb.AppendLine($"    {{ RC_ADDR(0x{f.Addr:x8}u), RC_ADDR(0x{f.Addr + f.Bytes:x8}u), {fnPrefix}fn_{f.Addr:x8} }},");
        sb.AppendLine("    { 0x00000000u, 0x00000000u, 0 }");
        sb.AppendLine("};");
        sb.AppendLine();
        sb.AppendLine($"const unsigned {sym}_functionCount = {count};");
        sb.AppendLine();
        sb.AppendLine("/* This build as the runtime sees it. A4 and the entry are image offsets (the port's load");
        sb.AppendLine(" * address is added by RC_ADDR), and the save file is the one this build's own save routine");
        sb.AppendLine(" * writes, which is what tells a slot's saves apart (src\\runtime\\amiga\\machine.c). */");
        sb.AppendLine($"const rc_program {sym}_engine =");
        sb.AppendLine("{");
        sb.AppendLine($"    {sym}_functions, (unsigned){count}, 0x{prog.ImageSize:x8}u,");
        sb.AppendLine($"    RC_ADDR(0x{prog.A4:x8}u), RC_ADDR(0x{prog.Entry:x8}u),");
        sb.AppendLine($"    \"{prog.SaveName}\", 0x{prog.SaveBytes:x8}u,");
        sb.AppendLine($"    \"{prog.Name}\"");
        sb.AppendLine("};");
        File.WriteAllText(path, sb.ToString(), Utf8NoBom());
        if (!addon) return;

        // The second build's table needs its own header: fn_table.h names the 1989 one, and every
        // fn_*.c of this build includes only cpu.h.
        string guard = "ICFTD_RECOMP_" + sym.ToUpperInvariant() + "_TABLE_H";
        var h = new StringBuilder();
        h.AppendLine($"/* The translated function table of the {sym} build of the engine. Generated by `recomp`. */");
        h.AppendLine($"#ifndef {guard}");
        h.AppendLine($"#define {guard}");
        h.AppendLine();
        h.AppendLine("#include \"fn_table.h\"");
        h.AppendLine();
        h.AppendLine($"extern const rc_entry {sym}_functions[];");
        h.AppendLine($"extern const unsigned {sym}_functionCount;");
        h.AppendLine($"extern const rc_program {sym}_engine;");
        h.AppendLine();
        h.AppendLine("#endif");
        File.WriteAllText(Path.ChangeExtension(path, ".h"), h.ToString(), Utf8NoBom());
    }

    /// <summary>An address argument: <c>0x23AF8</c> or <c>0X23AF8</c> (hex is assumed).</summary>
    static uint ParseAddress(string text)
    {
        string t = text.Trim();
        if (t.StartsWith("0x", StringComparison.OrdinalIgnoreCase)) t = t[2..];
        return uint.Parse(t, NumberStyles.HexNumber, CultureInfo.InvariantCulture);
    }

    /// <summary>A path argument as a root-relative path with this repo's separators.</summary>
    static string ImagePath(string arg) => arg.Replace('/', Path.DirectorySeparatorChar);

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
