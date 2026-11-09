using System.Globalization;
using System.Text.Json;

namespace ICFTD.AmigaExport.Cpu68k;

/// <summary>How one vector-table slot is to be modelled during a run.</summary>
public sealed class StubSpec
{
    /// <summary>Model name: "allocmem", "freemem" or "zero".</summary>
    public string Model = "zero";

    /// <summary>First address a model may hand out (allocmem).</summary>
    public uint Base;
}

/// <summary>
/// A reproducible starting state for <see cref="Cpu68k"/>: entry address, register values and
/// a memory image, plus the run limits and the OS-call policy. Saved as JSON so every fixture
/// doubles as a regression case.
/// </summary>
public sealed class Fixture
{
    public const uint DefaultA4 = 0x0002_9A56;   // data hunk + 0x7FFE
    public const uint DefaultSp = 0x0008_0000;   // well clear of the image (ends at 0x2D598)

    public uint Entry;
    public int Seed;
    public long MaxInsns = 200_000;
    public bool StopOnRts = true;
    public bool AllowOsStubs;
    public bool BasicOs;
    public bool TraceInstructions;

    public readonly Dictionary<string, uint> Regs = new(StringComparer.OrdinalIgnoreCase);
    public readonly List<(uint Addr, byte[] Data)> Mem = new();
    public readonly Dictionary<int, StubSpec> Stubs = new();
    public readonly List<(uint Addr, int Length)> Random = new();

    public static Fixture Create(uint entry) => new() { Entry = entry };

    public static Fixture Load(string path)
    {
        using var doc = JsonDocument.Parse(File.ReadAllText(path));
        var root = doc.RootElement;
        var f = new Fixture();
        string baseDir = Path.GetDirectoryName(Path.GetFullPath(path)) ?? Directory.GetCurrentDirectory();

        if (root.TryGetProperty("entry", out var entry)) f.Entry = ReadNumber(entry);
        if (root.TryGetProperty("seed", out var seed)) f.Seed = (int)ReadNumber(seed);
        if (root.TryGetProperty("maxInsns", out var max)) f.MaxInsns = ReadNumber(max);
        if (root.TryGetProperty("stopOnRts", out var rts)) f.StopOnRts = rts.GetBoolean();
        if (root.TryGetProperty("allowOsStubs", out var os)) f.AllowOsStubs = os.GetBoolean();
        if (root.TryGetProperty("basicOs", out var bos)) f.BasicOs = bos.GetBoolean();
        if (root.TryGetProperty("trace", out var tr)) f.TraceInstructions = tr.GetBoolean();

        if (root.TryGetProperty("regs", out var regs))
            foreach (var r in regs.EnumerateObject())
                f.Regs[r.Name] = ReadNumber(r.Value);

        if (root.TryGetProperty("mem", out var mem))
            foreach (var m in mem.EnumerateArray())
            {
                uint addr = ReadNumber(m.GetProperty("addr"));
                byte[] data;
                if (m.TryGetProperty("hex", out var hex))
                    data = FromHex(hex.GetString() ?? "");
                else if (m.TryGetProperty("file", out var file))
                    data = File.ReadAllBytes(ResolveFile(baseDir, file.GetString() ?? ""));
                else if (m.TryGetProperty("fill", out var fill))
                {
                    int len = (int)ReadNumber(fill.GetProperty("len"));
                    byte b = fill.TryGetProperty("byte", out var bv) ? (byte)ReadNumber(bv) : (byte)0;
                    data = new byte[len];
                    Array.Fill(data, b);
                }
                else throw new FormatException("a mem entry needs either \"hex\" or \"fill\"");
                f.Mem.Add((addr, data));
            }

        if (root.TryGetProperty("stubs", out var stubs))
            foreach (var s in stubs.EnumerateObject())
            {
                int slot = int.Parse(s.Name, NumberStyles.Integer, CultureInfo.InvariantCulture);
                var spec = new StubSpec();
                if (s.Value.ValueKind == JsonValueKind.String)
                    spec.Model = s.Value.GetString() ?? "zero";
                else
                {
                    if (s.Value.TryGetProperty("model", out var model)) spec.Model = model.GetString() ?? "zero";
                    if (s.Value.TryGetProperty("base", out var b)) spec.Base = ReadNumber(b);
                }
                f.Stubs[slot] = spec;
            }

        if (root.TryGetProperty("random", out var rnd))
            foreach (var r in rnd.EnumerateArray())
                f.Random.Add((ReadNumber(r.GetProperty("addr")), (int)ReadNumber(r.GetProperty("len"))));

        return f;
    }

    /// <summary>Resolves a "file" memory source against the fixture folder, the CWD and the repo root.</summary>
    static string ResolveFile(string baseDir, string name)
    {
        if (Path.IsPathRooted(name)) return name;
        foreach (string dir in new[] { baseDir, Directory.GetCurrentDirectory() })
        {
            string p = Path.Combine(dir, name);
            if (File.Exists(p)) return p;
        }
        throw new FileNotFoundException($"fixture memory source '{name}' not found next to the fixture");
    }

    /// <summary>Writes the fixture back out; used by --save so a case can be pinned.</summary>
    public void Save(string path)
    {
        using var w = new Utf8JsonWriter(File.Create(path), new JsonWriterOptions { Indented = true });
        w.WriteStartObject();
        w.WriteString("entry", $"{Entry:x8}");
        w.WriteNumber("seed", Seed);
        w.WriteNumber("maxInsns", MaxInsns);
        w.WriteBoolean("stopOnRts", StopOnRts);
        w.WriteBoolean("allowOsStubs", AllowOsStubs);

        w.WriteStartObject("regs");
        foreach (var kv in Regs) w.WriteString(kv.Key, $"0x{kv.Value:x8}");
        w.WriteEndObject();

        w.WriteStartArray("mem");
        foreach (var (addr, data) in Mem)
        {
            w.WriteStartObject();
            w.WriteString("addr", $"0x{addr:x8}");
            w.WriteString("hex", ToHex(data));
            w.WriteEndObject();
        }
        w.WriteEndArray();

        if (Stubs.Count > 0)
        {
            w.WriteStartObject("stubs");
            foreach (var kv in Stubs)
            {
                w.WriteStartObject(kv.Key.ToString(CultureInfo.InvariantCulture));
                w.WriteString("model", kv.Value.Model);
                if (kv.Value.Base != 0) w.WriteString("base", $"0x{kv.Value.Base:x}");
                w.WriteEndObject();
            }
            w.WriteEndObject();
        }
        w.WriteEndObject();
        w.Flush();
    }

    /// <summary>Loads the fixture into a CPU: memory blocks first, then registers.</summary>
    public void ApplyTo(Cpu68k cpu)
    {
        foreach (var (addr, data) in Mem) cpu.Mem.Load(addr, data);
        ApplyRandom(cpu);

        cpu.PC = Entry;
        cpu.SR = 0;
        cpu.A[4] = DefaultA4;
        cpu.A[7] = DefaultSp;

        foreach (var kv in Regs) SetRegister(cpu, kv.Key, kv.Value);
        cpu.PC = Entry;
    }

    /// <summary>Deterministic filler for the ranges a fixture marks as random.</summary>
    void ApplyRandom(Cpu68k cpu)
    {
        if (Random.Count == 0) return;
        var rng = new Random(Seed);
        foreach (var (addr, len) in Random)
        {
            var buf = new byte[len];
            rng.NextBytes(buf);
            cpu.Mem.Load(addr, buf);
        }
    }

    static void SetRegister(Cpu68k cpu, string name, uint value)
    {
        if (name.Length < 2) throw new FormatException($"bad register name '{name}'");
        int index = int.Parse(name[1..], CultureInfo.InvariantCulture);
        if (index is < 0 or > 7) throw new FormatException($"bad register name '{name}'");
        switch (char.ToUpperInvariant(name[0]))
        {
            case 'D': cpu.D[index] = value; break;
            case 'A': cpu.A[index] = value; break;
            case 'P': cpu.PC = value; break;
            case 'S': cpu.SR = value; break;
            default: throw new FormatException($"bad register name '{name}'");
        }
    }

    public static uint ReadNumber(JsonElement e) => e.ValueKind switch
    {
        JsonValueKind.Number => e.GetUInt32(),
        JsonValueKind.String => ParseHex(e.GetString() ?? "0"),
        _ => throw new FormatException($"expected a number or hex string, got {e.ValueKind}"),
    };

    public static uint ParseHex(string s)
    {
        s = s.Trim();
        if (s.StartsWith("0x", StringComparison.OrdinalIgnoreCase)) s = s[2..];
        else if (s.StartsWith('$')) s = s[1..];
        if (s.Length == 0) return 0;
        return uint.Parse(s, NumberStyles.HexNumber, CultureInfo.InvariantCulture);
    }

    public static byte[] FromHex(string hex)
    {
        hex = new string(hex.Where(Uri.IsHexDigit).ToArray());
        if (hex.Length % 2 != 0) throw new FormatException("hex data must have an even number of digits");
        var bytes = new byte[hex.Length / 2];
        for (int i = 0; i < bytes.Length; i++)
            bytes[i] = byte.Parse(hex.AsSpan(i * 2, 2), NumberStyles.HexNumber, CultureInfo.InvariantCulture);
        return bytes;
    }

    public static string ToHex(ReadOnlySpan<byte> data) => Convert.ToHexString(data).ToLowerInvariant();
}
