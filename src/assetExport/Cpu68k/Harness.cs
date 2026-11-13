using System.Globalization;
using System.Text;

namespace ICFTD.AmigaExport.Cpu68k;

/// <summary>
/// The differential runner: loads the original dshell hunk, applies a fixture, executes one
/// function and prints everything that changed. Two commands share the machinery:
/// <c>rcmp</c> (run once, report) and <c>rrun</c> (scripted single stepping).
/// </summary>
internal static class Harness
{
    const string ImageRelative = "export/code/dshell/dshell.img";
    const string FixtureDirRelative = "ref/fixtures";

    // ---- entry points --------------------------------------------------------

    public static int Rcmp(string[] args)
    {
        if (args.Length < 2) return Usage("rcmp <addr> [--fixture f.json] [--seed n] [--max-insns n] " +
                                         "[--dump out.txt] [--emit-raw out.fx] [--trace] [--regs D0=0x..,A0=0x..] [--save f.json]");

        uint entry = Fixture.ParseHex(args[1]);
        string? fixturePath = Option(args, "--fixture");
        string? imagePath = Option(args, "--image");
        string? dumpPath = Option(args, "--dump");
        string? savePath = Option(args, "--save");
        bool trace = HasFlag(args, "--trace");
        bool writeLog = HasFlag(args, "--writes");
        uint logLo = Option(args, "--writes-in") is string wi ? Fixture.ParseHex(wi.Split(':')[0]) : 0;
        uint logHi = Option(args, "--writes-in") is string wj && wj.Contains(':') ? logLo + Fixture.ParseHex(wj.Split(':')[1]) : 0xFFFF_FFFFu;

        Fixture fixture;
        string fixtureName;
        if (fixturePath is not null)
        {
            fixture = Fixture.Load(fixturePath);
            fixtureName = Path.GetFileName(fixturePath);
            if (fixture.Entry == 0) fixture.Entry = entry;
        }
        else
        {
            string? auto = AutoFixturePath(entry);
            if (auto is not null)
            {
                fixture = Fixture.Load(auto);
                fixtureName = Path.GetFileName(auto);
            }
            else
            {
                fixture = Fixture.Create(entry);
                fixtureName = "(default)";
            }
            fixture.Entry = entry;
        }

        if (Option(args, "--seed") is string seedText) fixture.Seed = int.Parse(seedText, CultureInfo.InvariantCulture);
        if (Option(args, "--max-insns") is string maxText) fixture.MaxInsns = long.Parse(maxText, CultureInfo.InvariantCulture);
        if (Option(args, "--regs") is string regText) ApplyRegisterOption(fixture, regText);
        if (Option(args, "--rand") is string randText) AddRandomRanges(fixture, randText);
        if (HasFlag(args, "--os-basic")) { fixture.AllowOsStubs = true; fixture.BasicOs = true; }

        Memory mem = LoadImage(imagePath);
        var cpu = new Cpu68k(mem)
        {
            StopOnRts = fixture.StopOnRts,
            AllowOsStubs = fixture.AllowOsStubs,
            TraceInstructions = trace || fixture.TraceInstructions,
        };
        if (savePath is not null)
        {
            // Pin the resolved starting state: registers + every fixture block, nothing else.
            var saved = new Fixture
            {
                Entry = fixture.Entry,
                Seed = fixture.Seed,
                MaxInsns = fixture.MaxInsns,
                StopOnRts = fixture.StopOnRts,
                AllowOsStubs = fixture.AllowOsStubs,
            };
            saved.Regs["A4"] = Fixture.DefaultA4;
            saved.Regs["A7"] = Fixture.DefaultSp;
            foreach (var kv in fixture.Regs) saved.Regs[kv.Key] = kv.Value;
            saved.Mem.AddRange(fixture.Mem);
            foreach (var kv in fixture.Stubs) saved.Stubs[kv.Key] = kv.Value;
            saved.Save(savePath);
        }

        var stubs = new StubModels(mem, fixture.Stubs, entry, fixture.BasicOs);
        cpu.StubHost = stubs.TryCall;
        fixture.ApplyTo(cpu);

        if (Option(args, "--emit-raw") is string rawPath)
        {
            WriteRawFixture(rawPath, entry, cpu, fixture);
            Console.WriteLine($"raw fixture: {rawPath}");
        }

        mem.TraceWrites = writeLog;
        mem.Snapshot();
        RunResult result = cpu.Run(fixture.MaxInsns);
        if (writeLog)
        {
            int shown = 0;
            foreach (var w in mem.Writes)
                if (w.Addr >= logLo && w.Addr < logHi)
                {
                    Console.WriteLine($"write {w.Pc:x6} -> {w.Addr:x8} {w.Size} {w.Value:x8}");
                    if (++shown >= 4000) { Console.WriteLine("write log truncated"); break; }
                }
        }

        string report = FormatReport(entry, fixture, fixtureName, result, mem, stubs);
        Console.Write(report);
        if (Option(args, "--dump-mem") is string dm)
        {
            string[] parts = dm.Split(':');
            uint at = Fixture.ParseHex(parts[0]);
            int len = parts.Length > 1 ? (int)Fixture.ParseHex(parts[1]) : 256;
            DumpMemory(mem, at, len);
        }
        if (dumpPath is not null)
        {
            File.WriteAllText(dumpPath, FormatCanonical(entry, result, mem));
            Console.WriteLine($"result dump: {dumpPath}");
        }

        return result.Stop switch
        {
            StopReason.Rts => 0,
            StopReason.MaxInsns => 2,
            _ => 3,
        };
    }

    /// <summary>
    /// Runs a list of entry addresses (one per line, extra columns ignored) in one go and
    /// prints a verdict per entry. A function that completes gets its fixture saved, so the
    /// whole sweep becomes reproducible and later runs replay exactly the same start state.
    /// </summary>
    public static int Rleaf(string[] args)
    {
        if (args.Length < 2) return Usage("rleaf <addrListFile> [--max-insns n] [--image path] [--save] [--quiet]");

        string listPath = args[1];
        string? imagePath = Option(args, "--image");
        long maxInsns = Option(args, "--max-insns") is string m ? long.Parse(m, CultureInfo.InvariantCulture) : 20_000;
        bool save = HasFlag(args, "--save");
        bool quiet = HasFlag(args, "--quiet");
        bool basicOs = HasFlag(args, "--os-basic");
        bool traceReads = HasFlag(args, "--reads");

        Memory mem = LoadImage(imagePath);
        byte[] image = File.ReadAllBytes(imagePath ?? FindImage());
        var lines = new List<string>();
        var ledger = new List<string>();
        int ok = 0, pure = 0, deferred = 0, incomplete = 0;

        foreach (string raw in File.ReadAllLines(listPath))
        {
            string line = raw.Trim();
            if (line.Length == 0 || line.StartsWith('#')) continue;
            string first = line.Split(new[] { ',', ' ', '\t' }, StringSplitOptions.RemoveEmptyEntries)[0];
            uint entry;
            try { entry = Fixture.ParseHex(first); }
            catch { continue; }

            string? fixturePath = AutoFixturePath(entry);
            Fixture fixture = fixturePath is not null ? Fixture.Load(fixturePath) : Fixture.Create(entry);
            fixture.Entry = entry;
            if (fixture.MaxInsns <= 0) fixture.MaxInsns = maxInsns;
            if (basicOs) { fixture.AllowOsStubs = true; fixture.BasicOs = true; }

            var cpu = new Cpu68k(mem) { StopOnRts = true, AllowOsStubs = fixture.AllowOsStubs };
            cpu.StubHost = new StubModels(mem, fixture.Stubs, entry, fixture.BasicOs).TryCall;
            mem.Clear();
            mem.TraceReads = traceReads;
            mem.Load(0, image);
            fixture.ApplyTo(cpu);
            mem.Snapshot();
            RunResult r = cpu.Run(fixture.MaxInsns);
            mem.TraceWrites = false;

            string verdict = r.Stop switch
            {
                StopReason.Rts => "pure",
                StopReason.MaxInsns => "budget",
                _ => "ERR",
            };
            string note = r.Stop == StopReason.Rts ? "" : Shorten(r.Message);
            var mods = mem.Modified();
            int ranges = mods.Count;
            if (r.Stop == StopReason.Rts)
            {
                if (TouchesHardware(mods)) { verdict = "HW"; note = "writes custom-chip registers"; }
                else if (TouchesEngineState(mods)) { verdict = "state"; note = "writes engine globals"; }
                else
                {
                    int osStubs = r.Stubs.Count(s => s.Note.StartsWith("os-stub", StringComparison.Ordinal));
                    if (osStubs > 0) { verdict = "os"; note = $"{osStubs} modelled exec call(s)"; }
                }
            }

            if (r.Stop == StopReason.Rts)
            {
                ok++;
                if (verdict == "pure") pure++;
                if (save && fixturePath is null)
                {
                    fixture.Regs["A4"] = Fixture.DefaultA4;
                    fixture.Regs["A7"] = Fixture.DefaultSp;
                    string dir = Path.Combine(FindRepoRoot() ?? ".", FixtureDirRelative);
                    Directory.CreateDirectory(dir);
                    fixture.Save(Path.Combine(dir, $"{entry:x8}.json"));
                }
            }
            else if (r.Stop == StopReason.MaxInsns) incomplete++;
            else deferred++;

            lines.Add($"{entry:x8}  {verdict,-7} insns {r.Insns,6}  ranges {ranges,3}  d0 {r.D[0]:x8}  " +
                      $"{(fixturePath is not null ? "*" : " ")} {note}");

            // The engine-state window is what a port has to name; the rest is stack and locals.
            string stateWrites = string.Join(';', mods
                .Where(x => x.Addr is >= EngineStateLow and < EngineStateHigh)
                .Take(64)
                .Select(x => $"{x.Addr:x6}:{x.Bytes.Length:x}"));
            string stateReads = traceReads
                ? string.Join(';', mem.Reads.Where(a => a is >= EngineStateLow and < EngineStateHigh)
                    .OrderBy(a => a).Take(64).Select(a => $"{a:x6}"))
                : "";
            ledger.Add($"{entry:x8},{verdict},{r.Insns},{ranges},{r.D[0]:x8},\u0022{note.Replace("\"", "'")}\u0022,\u0022{stateWrites}\u0022,\u0022{stateReads}\u0022");
        }

        string report = string.Join(Environment.NewLine, lines);
        if (!quiet) Console.WriteLine(report);
        Console.WriteLine($"rleaf: {ok} returned ({pure} pure, {ok - pure} touch engine state or hardware), " +
                          $"{incomplete} hit the step budget, {deferred} named failures ({lines.Count} entries)");

        if (Option(args, "--out") is string outPath) File.WriteAllText(outPath, report + Environment.NewLine);
        if (Option(args, "--ledger") is string ledgerPath)
            File.WriteAllLines(ledgerPath, new[] { "addr,verdict,insns,ranges,d0,note,writes,reads" }.Concat(ledger));
        return deferred == 0 ? 0 : 3;
    }

    /// <summary>
    /// Binary form of a fixture for the C replay (src\recomp\check.c): magic "ICFX", version 2,
    /// entry, flags, D0-D7/A0-A7, SR, the memory blocks and the stub models. Little-endian, host
    /// only.
    ///
    /// The bytes are read back out of the CPU, not out of the fixture, so randomised ranges
    /// (--rand/--seed) are part of the state the C side replays. Only declared and randomised
    /// ranges are emitted: a port that needs more memory must ask the fixture for it.
    ///
    /// The stub models are resolved from vector-slot numbers to (library, LVO), because the
    /// translated code calls `rt_os_call()` with an LVO and never sees a slot.
    /// </summary>
    static void WriteRawFixture(string path, uint entry, Cpu68k cpu, Fixture fixture)
    {
        var ranges = new List<(uint Addr, int Len)>();
        foreach (var (addr, data) in fixture.Mem) ranges.Add((addr, data.Length));
        foreach (var (addr, len) in fixture.Random) ranges.Add((addr, len));
        ranges.Sort((a, b) => a.Addr.CompareTo(b.Addr));

        var merged = new List<(uint Addr, int Len)>();
        foreach (var r in ranges)
        {
            if (merged.Count > 0)
            {
                var last = merged[^1];
                if (r.Addr <= last.Addr + (uint)last.Len)
                {
                    int end = (int)Math.Max(last.Addr + (uint)last.Len, r.Addr + (uint)r.Len) - (int)last.Addr;
                    merged[^1] = (last.Addr, end);
                    continue;
                }
            }
            merged.Add(r);
        }

        using var w = new BinaryWriter(File.Create(path));
        w.Write(new byte[] { (byte)'I', (byte)'C', (byte)'F', (byte)'X' });
        w.Write(2u);
        w.Write(entry);
        w.Write(fixture.AllowOsStubs ? 1u : 0u);      // bit 0: an unmodelled call answers 0
        for (int i = 0; i < 8; i++) w.Write(cpu.D[i]);
        for (int i = 0; i < 8; i++) w.Write(cpu.A[i]);
        w.Write(cpu.SR);
        w.Write((uint)merged.Count);
        foreach (var (addr, len) in merged)
        {
            w.Write(addr);
            w.Write((uint)len);
            w.Write(cpu.Mem.Slice(addr, len));
        }

        var stubs = ResolveStubs(cpu.Mem, fixture);
        w.Write((uint)stubs.Count);
        foreach (var s in stubs)
        {
            w.Write((uint)s.Lib);
            w.Write((uint)s.Lvo);
            w.Write((uint)s.Slot);
            w.Write(s.Model);
            w.Write(s.Base);
        }
    }

    /// <summary>One stub model as the C replay needs it: a library index and an LVO.</summary>
    readonly record struct RawStub(int Lib, int Lvo, int Slot, uint Model, uint Base);

    const uint ExecBaseGlobal = 0x0002_D54A;      // A4+0x3AF4, where the cstart stores AbsExecBase

    /// <summary>Model ids understood by src\recomp\check.c.</summary>
    static uint ModelId(string model) => model.ToLowerInvariant() switch
    {
        "allocmem" => 1,
        "freemem" => 2,
        _ => 0,
    };

    static List<RawStub> ResolveStubs(Memory mem, Fixture fixture)
    {
        var list = new List<RawStub>();
        foreach (var kv in fixture.Stubs)
        {
            var resolved = kv.Key >= 0 ? ResolveSlot(mem, kv.Key) : (kv.Key, 0);
            list.Add(new RawStub(resolved.Item2, resolved.Item1, kv.Key, ModelId(kv.Value.Model), kv.Value.Base));
        }
        if (fixture.BasicOs)
        {
            // --os-basic models these six exec calls; a fixture saved from such a run names none.
            foreach (var (lvo, model) in new[] { (-132, "zero"), (-138, "zero"), (-204, "zero"),
                                                (-216, "zero"), (-198, "allocmem"), (-210, "freemem") })
            {
                if (fixture.Stubs.ContainsKey(lvo)) continue;
                uint b = model == "zero" ? 0u : 0x0080_0000u;   // StubModels.BasicHeap
                list.Add(new RawStub(0, lvo, -1, ModelId(model), b));
            }
        }
        return list;
    }

    /// <summary>
    /// Follows a vector-table slot to the library call it makes: stub -> (jmp chain) -> a thunk
    /// that loads a library base into A6 and tails into `jmp (d16,A6)`. Returns (lvo, lib); lib is
    /// -1 when the base is not one this build knows (the C side then matches on the LVO alone).
    /// </summary>
    static (int lvo, int lib) ResolveSlot(Memory mem, int slot)
    {
        if (slot < 0 || slot >= Cpu68k.VectorTableSlots) return (0, -1);
        uint at = Cpu68k.VectorTableBase + (uint)slot * 6;
        if (mem.Read16(at) != 0x4EF9) return (0, -1);          // the stubs are `jmp abs.l`
        uint target = mem.Read32(at + 2);
        uint baseGlobal = 0;

        for (int hop = 0; hop < 8; hop++)
        {
            ushort op = mem.Read16(target);
            if (op == 0x4EFA) { target = target + 2 + (uint)(short)mem.Read16(target + 2); continue; }
            if (op == 0x4EF9) { target = mem.Read32(target + 2); continue; }
            if (op == 0x4CEE || op == 0x4CEF) { target += 6; continue; }        // movem.l (d16,SP),mask
            if (op == 0x2C6C) { baseGlobal = Fixture.DefaultA4 + (uint)(short)mem.Read16(target + 2); target += 4; continue; }
            if (op == 0x2C7C) { baseGlobal = (uint)(short)mem.Read16(target + 2); target += 4; continue; }
            if (op == 0x206F || op == 0x226F) { target += 4; continue; }        // movea.l (d16,SP),A0/A1
            if (op == 0x202F || op == 0x222F) { target += 4; continue; }        // move.l (d16,SP),D0/D1
            if (op == 0x4EEE || op == 0x4EAE)                                    // jmp/jsr (d16,A6)
            {
                int lvo = (short)mem.Read16(target + 2);
                int lib = (baseGlobal == 0 || baseGlobal == ExecBaseGlobal) ? 0 : -1;
                return (lvo, lib);
            }
            return (0, -1);
        }
        return (0, -1);
    }

    static string Shorten(string message)
    {
        int at = message.IndexOf(" at 0x", StringComparison.Ordinal);
        return at > 0 ? message[..at] : message;
    }

    // The Amiga custom chip registers are plain memory here, so a write to them is silently
    // "successful". A run that does so is not pure: it needs a hardware model before it can
    // count as ported.
    const uint HardwareBase = 0x00DF_F000;
    const uint HardwareEnd = 0x00DF_F200;

    // The data hunk: every engine global lives here. Touching it means the function reads or
    // writes program state, which is a different (bigger) port than a pure helper.
    const uint DataHunkBase = 0x0002_1A58;
    const uint DataHunkEnd = 0x0002_D598;

    const uint EngineStateLow = DataHunkBase;
    const uint EngineStateHigh = DataHunkEnd;

    static bool TouchesHardware(List<MemRange> mods) =>
        mods.Any(m => m.Addr < HardwareEnd && m.Addr + (uint)m.Bytes.Length > HardwareBase);

    static bool TouchesEngineState(List<MemRange> mods) =>
        mods.Any(m => m.Addr < DataHunkEnd && m.Addr + (uint)m.Bytes.Length > DataHunkBase);

    public static int Rrun(string[] args)
    {        if (args.Length < 2) return Usage("rrun <addr> [--fixture f.json] --script steps.txt [--image path]");

        uint entry = Fixture.ParseHex(args[1]);
        string? fixturePath = Option(args, "--fixture");
        string? scriptPath = Option(args, "--script");
        string? imagePath = Option(args, "--image");
        if (scriptPath is null) return Usage("rrun needs --script <steps.txt>");

        Fixture fixture = fixturePath is not null ? Fixture.Load(fixturePath)
                        : AutoFixturePath(entry) is string auto ? Fixture.Load(auto)
                        : Fixture.Create(entry);
        fixture.Entry = entry;
        if (Option(args, "--regs") is string regText) ApplyRegisterOption(fixture, regText);

        Memory mem = LoadImage(imagePath);
        var cpu = new Cpu68k(mem)
        {
            StopOnRts = fixture.StopOnRts,
            AllowOsStubs = fixture.AllowOsStubs,
        };
        var stubs = new StubModels(mem, fixture.Stubs, entry);
        cpu.StubHost = stubs.TryCall;
        fixture.ApplyTo(cpu);

        Console.WriteLine($"rrun {entry:x8}  fixture {fixturePath ?? "(default)"}");
        Console.WriteLine($"A4={cpu.A[4]:x8} A7={cpu.A[7]:x8}");

        foreach (string raw in File.ReadAllLines(scriptPath))
        {
            string line = raw.Trim();
            if (line.Length == 0 || line.StartsWith('#') || line.StartsWith(';')) continue;
            string[] p = line.Split((char[]?)null, StringSplitOptions.RemoveEmptyEntries);
            try
            {
                switch (p[0].ToLowerInvariant())
                {
                    case "step":
                        DoSteps(cpu, p.Length > 1 ? int.Parse(p[1], CultureInfo.InvariantCulture) : 1, trace: false);
                        break;
                    case "run":
                        DoSteps(cpu, p.Length > 1 ? int.Parse(p[1], CultureInfo.InvariantCulture) : 100000, trace: false);
                        break;
                    case "trace":
                        DoSteps(cpu, p.Length > 1 ? int.Parse(p[1], CultureInfo.InvariantCulture) : 1, trace: true);
                        break;
                    case "until":
                    {
                        uint target = Fixture.ParseHex(p[1]);
                        long guard = 0;
                        while (cpu.PC != target)
                        {
                            DoSteps(cpu, 1, trace: false);
                            if (++guard > 10_000_000) { Console.WriteLine("until: gave up after 10M steps"); break; }
                        }
                        Console.WriteLine($"at {cpu.PC:x8}");
                        break;
                    }
                    case "regs":
                        DumpRegisters(cpu);
                        break;
                    case "mem":
                    {
                        uint addr = Fixture.ParseHex(p[1]);
                        int len = p.Length > 2 ? (int)Fixture.ParseHex(p[2]) : 16;
                        DumpMemory(mem, addr, len);
                        break;
                    }
                    case "set":
                        SetRegister(cpu, p[1], Fixture.ParseHex(p[2]));
                        break;
                    case "patch":
                        mem.Load(Fixture.ParseHex(p[1]), Fixture.FromHex(p[2]));
                        break;
                    case "stubs":
                        cpu.AllowOsStubs = p[1].Equals("on", StringComparison.OrdinalIgnoreCase);
                        break;
                    case "quit":
                        return 0;
                    default:
                        Console.WriteLine($"unknown script command '{line}'");
                        return 1;
                }
            }
            catch (Cpu68kException ex)
            {
                Console.WriteLine($"STOP at {ex.Pc:x8}: {ex.Message}");
                return 3;
            }
        }
        DumpRegisters(cpu);
        return 0;
    }

    static void DoSteps(Cpu68k cpu, int count, bool trace)
    {
        cpu.TraceInstructions = trace;
        for (int i = 0; i < count; i++)
        {
            cpu.Step();
            if (trace) continue;
        }
        cpu.TraceInstructions = false;
        DumpRegisters(cpu);
    }

    static void DumpRegisters(Cpu68k cpu)
    {
        Console.WriteLine($"PC={cpu.PC:x8} SR={cpu.SR:x4}  " +
                          $"N={B(cpu.N)} Z={B(cpu.Z)} V={B(cpu.V)} C={B(cpu.C)} X={B(cpu.X)}  insns={cpu.Insns}");
        Console.WriteLine(string.Join(' ', cpu.D.Select((v, i) => $"D{i}={v:x8}")));
        Console.WriteLine(string.Join(' ', cpu.A.Select((v, i) => $"A{i}={v:x8}")));
        Console.WriteLine($"last EA {cpu.LastEa} @ {cpu.LastEaAddr:x8}");
    }

    static string B(bool b) => b ? "1" : "0";

    static void DumpMemory(Memory mem, uint addr, int len)
    {
        for (int r = 0; r < len; r += 16)
        {
            int n = Math.Min(16, len - r);
            var bytes = mem.Slice(addr + (uint)r, n);
            Console.WriteLine($"{addr + (uint)r:x8}  {Fixture.ToHex(bytes)}");
        }
    }

    static void SetRegister(Cpu68k cpu, string reg, uint value)
    {
        string r = reg.ToUpperInvariant();
        if (r == "SR") { cpu.SR = value; return; }
        int i = int.Parse(r[1..], CultureInfo.InvariantCulture);
        switch (r[0])
        {
            case 'D': cpu.D[i] = value; break;
            case 'A': cpu.A[i] = value; break;
            case 'P': cpu.PC = value; break;
            case 'S': cpu.SR = value; break;
            default: throw new FormatException($"bad register '{reg}'");
        }
    }

    // ---- reporting -----------------------------------------------------------

    static string FormatReport(uint entry, Fixture fixture, string fixtureName, RunResult r,
                               Memory mem, StubModels stubs)
    {
        var sb = new StringBuilder();
        var mods = mem.Modified();

        sb.AppendLine($"rcmp {entry:x8}  fixture {fixtureName}  seed {fixture.Seed}");
        sb.AppendLine($"stop {StopName(r.Stop)} after {r.Insns} instruction{(r.Insns == 1 ? "" : "s")} - {r.Message}");
        sb.AppendLine($"next PC {r.Pc:x8}   SR {r.Sr:x4}  N={B((r.Sr & Cpu68k.FlagN) != 0)} Z={B((r.Sr & Cpu68k.FlagZ) != 0)} " +
                      $"V={B((r.Sr & Cpu68k.FlagV) != 0)} C={B((r.Sr & Cpu68k.FlagC) != 0)} X={B((r.Sr & Cpu68k.FlagX) != 0)}");
        sb.AppendLine("registers");
        sb.AppendLine("  " + string.Join(' ', r.D.Select((v, i) => $"D{i}={v:x8}")));
        sb.AppendLine("  " + string.Join(' ', r.A.Select((v, i) => $"A{i}={v:x8}")));

        if (r.Stubs.Count > 0)
        {
            sb.AppendLine($"os calls ({r.Stubs.Count}{(r.PurityUnknown ? ", purity unknown" : "")})");
            foreach (var s in r.Stubs)
            {
                string args = string.Join(' ', s.Args.Select(a => $"{a:x8}"));
                string note = s.Note.Length > 0 ? $"  [{s.Note}]" : "";
                string where = s.Slot >= 0 ? $"slot {s.Slot,3}" : $"lvo {s.Lvo,5}";
                sb.AppendLine($"  {where} {s.Name,-10} args {args} -> {s.Result:x8}{note}");
            }
        }
        else sb.AppendLine("os calls none");

        long total = mods.Sum(m => (long)m.Bytes.Length);
        sb.AppendLine($"memory {mods.Count} range{(mods.Count == 1 ? "" : "s")}, {total} bytes, {mem.WriteCount} writes");
        if (TouchesHardware(mods))
            sb.AppendLine("hardware: this run writes custom-chip registers (0xDFF000..0xDFF200)");
        foreach (var m in mods)
        {
            sb.AppendLine($"  {m.Addr:x8}  {m.Bytes.Length,6}B  {Preview(m.Bytes)}");
            AppendHexLines(sb, m.Addr, m.Bytes);
        }
        if (stubs.HeapHigh != 0)
            sb.AppendLine($"allocmem heap: base {stubs.HeapBase:x8}, high water {stubs.HeapHigh:x8}");
        return sb.ToString();
    }

    static void AppendHexLines(StringBuilder sb, uint addr, byte[] bytes)
    {
        for (int i = 0; i < bytes.Length; i += 16)
        {
            int n = Math.Min(16, bytes.Length - i);
            var line = new byte[n];
            Array.Copy(bytes, i, line, 0, n);
            sb.AppendLine($"    {addr + (uint)i:x8}  {Fixture.ToHex(line)}");
        }
    }

    static string Preview(byte[] b)
    {
        int n = Math.Min(16, b.Length);
        return Fixture.ToHex(b.AsSpan(0, n)) + (b.Length > n ? "..." : "");
    }

    static string StopName(StopReason s) => s switch
    {
        StopReason.Rts => "RTS",
        StopReason.Rte => "RTE",
        StopReason.MaxInsns => "budget",
        StopReason.Break => "break",
        _ => "ERROR",
    };

    /// <summary>Stable text form of a result, for diffing against a C port.</summary>
    static string FormatCanonical(uint entry, RunResult r, Memory mem)
    {
        var sb = new StringBuilder();
        sb.AppendLine("rcmp 1");
        sb.AppendLine($"entry {entry:x8}");
        sb.AppendLine($"stop {StopName(r.Stop).ToLowerInvariant()}");
        sb.AppendLine($"insns {r.Insns}");
        sb.AppendLine($"pc {r.Pc:x8}");
        for (int i = 0; i < 8; i++) sb.AppendLine($"d{i} {r.D[i]:x8}");
        for (int i = 0; i < 8; i++) sb.AppendLine($"a{i} {r.A[i]:x8}");
        sb.AppendLine($"sr {r.Sr:x4}");
        foreach (var m in mem.Modified()) sb.AppendLine($"mem {m.Addr:x8} {Fixture.ToHex(m.Bytes)}");
        return sb.ToString();
    }

    // ---- OS stubs ------------------------------------------------------------

    /// <summary>Models the vector-table slots a fixture asks for; everything else is unmodelled.</summary>
    sealed class StubModels
    {
        static readonly Dictionary<int, string> KnownNames = new()
        {
            [137] = "AllocMem",
            [139] = "FreeMem",
        };

        // exec.library calls whose effect is unambiguous. Only used in the diagnostic
        // `--os basic` mode, and never for anything that changes timing (Wait stays unmodelled).
        static readonly Dictionary<int, string> BasicModels = new()
        {
            [-132] = "zero",     // Forbid
            [-138] = "zero",     // Permit
            [-204] = "zero",     // Disable
            [-216] = "zero",     // Enable
            [-198] = "allocmem",
            [-210] = "freemem",
        };

        const uint BasicHeap = 0x0080_0000;   // above the image and the default stack

        readonly Memory _mem;
        readonly Dictionary<int, StubSpec> _specs;
        readonly bool _basicOs;
        readonly Dictionary<int, uint> _next = new();
        readonly Dictionary<uint, int> _blocks = new();

        public uint HeapBase { get; private set; }
        public uint HeapHigh { get; private set; }

        /// <summary>exec.library LVOs (public ABI); the wrappers are proven by their jmp (d16,A6).</summary>
        static string LibraryName(int lvo) => lvo switch
        {
            -132 => "Forbid",
            -198 => "AllocMem",
            -210 => "FreeMem",
            -414 => "Wait",
            _ => $"lvo{lvo}",
        };

        public StubModels(Memory mem, Dictionary<int, StubSpec> specs, uint entry, bool basicOs = false)
        {
            _mem = mem;
            _specs = new Dictionary<int, StubSpec>(specs);
            _basicOs = basicOs;
            /* A library wrapper runs (see Cpu68k.DoStub), so a model pinned to a slot arrives named
             * by its LVO instead. Register the slot's model under both keys. */
            foreach (var kv in specs)
            {
                if (kv.Key < 0) continue;
                var (lvo, _) = ResolveSlot(mem, kv.Key);
                if (lvo != 0 && !_specs.ContainsKey(lvo)) _specs[lvo] = kv.Value;
            }
        }

        public bool TryCall(StubCall call)
        {
            call.Name = call.Slot >= 0
                ? (KnownNames.TryGetValue(call.Slot, out string? n) ? n : $"slot{call.Slot}")
                : LibraryName(call.Lvo);

            StubSpec? spec = null;
            bool fromBasic = false;
            if (!_specs.TryGetValue(call.Key, out spec))
            {
                if (!_basicOs || !BasicModels.TryGetValue(call.Key, out string? basic)) return false;
                spec = new StubSpec { Model = basic, Base = BasicHeap };
                fromBasic = true;
            }

            switch (spec.Model.ToLowerInvariant())
            {
                case "allocmem":
                {
                    uint baseAddr = spec.Base != 0 ? spec.Base : 0x0003_0000;
                    if (HeapBase == 0) HeapBase = baseAddr;
                    if (!_next.TryGetValue(call.Slot, out uint at)) at = baseAddr;
                    uint size = call.Args[0];
                    uint flags = call.Args[1];
                    uint block = at;
                    uint next = (at + size + 7) & ~7u;   // AllocMem returns 8-byte aligned blocks
                    _next[call.Slot] = next;
                    _blocks[block] = (int)size;
                    if (flags != 0) _mem.Fill(block, (int)size, 0);
                    if (next > HeapHigh) HeapHigh = next;
                    call.Result = block;
                    call.Handled = true;
                    call.Note = $"size {size:x} flags {flags:x}";
                    break;
                }
                case "freemem":
                    call.Result = 0;
                    call.Handled = true;
                    call.Note = _blocks.TryGetValue(call.Args[0], out int len) ? $"block {len:x} bytes" : "unknown block";
                    break;
                case "zero":
                    call.Result = 0;
                    call.Handled = true;
                    break;
                default:
                    throw new Cpu68kException(call.ReturnAddress,
                        $"fixture asks for unknown stub model '{spec.Model}' on slot {call.Slot}");
            }
            if (fromBasic) call.Note = ("os-stub " + call.Note).Trim();
            return true;
        }
    }

    // ---- plumbing ------------------------------------------------------------

    static Memory LoadImage(string? explicitPath)
    {
        string path = explicitPath ?? FindImage();
        var mem = new Memory();
        mem.Load(0, File.ReadAllBytes(path));
        return mem;
    }

    static string FindImage()
    {
        string? root = FindRepoRoot();
        if (root is null) throw new FileNotFoundException($"dshell.img not found - pass --image <path>");
        string p = Path.Combine(root, ImageRelative.Replace('/', Path.DirectorySeparatorChar));
        if (!File.Exists(p)) throw new FileNotFoundException($"dshell.img not found at {p} - pass --image <path>");
        return p;
    }

    static string? AutoFixturePath(uint entry)
    {
        string? root = FindRepoRoot();
        if (root is null) return null;
        string p = Path.Combine(root, FixtureDirRelative.Replace('/', Path.DirectorySeparatorChar), $"{entry:x8}.json");
        return File.Exists(p) ? p : null;
    }

    static string? FindRepoRoot()
    {
        foreach (string start in new[] { Directory.GetCurrentDirectory(), AppContext.BaseDirectory })
        {
            var dir = new DirectoryInfo(start);
            for (int i = 0; i < 8 && dir is not null; i++, dir = dir.Parent)
            {
                if (File.Exists(Path.Combine(dir.FullName, "docs", "next-session.md")) ||
                    (Directory.Exists(Path.Combine(dir.FullName, "export", "code", "dshell")) &&
                     Directory.Exists(Path.Combine(dir.FullName, "src", "assetExport"))))
                    return dir.FullName;
            }
        }
        return null;
    }

    static string? Option(string[] args, string name)
    {
        for (int i = 0; i < args.Length - 1; i++)
            if (args[i].Equals(name, StringComparison.OrdinalIgnoreCase)) return args[i + 1];
        return null;
    }

    static bool HasFlag(string[] args, string name) =>
        args.Any(a => a.Equals(name, StringComparison.OrdinalIgnoreCase));

    static void ApplyRegisterOption(Fixture f, string text)
    {
        foreach (string part in text.Split(',', StringSplitOptions.RemoveEmptyEntries))
        {
            int eq = part.IndexOf('=');
            if (eq <= 0) throw new FormatException($"bad --regs entry '{part}'");
            f.Regs[part[..eq].Trim()] = Fixture.ParseHex(part[(eq + 1)..]);
        }
    }

    /// <summary>--rand addr:len[,addr:len...]: fields filled from the seed (all values hex).</summary>
    static void AddRandomRanges(Fixture f, string text)
    {
        foreach (string part in text.Split(',', StringSplitOptions.RemoveEmptyEntries))
        {
            int colon = part.IndexOf(':');
            if (colon <= 0) throw new FormatException($"bad --rand entry '{part}' (expected addr:len)");
            f.Random.Add((Fixture.ParseHex(part[..colon]), (int)Fixture.ParseHex(part[(colon + 1)..])));
        }
    }

    static int Usage(string what)
    {
        Console.WriteLine($"usage: {what}");
        return 1;
    }
}
