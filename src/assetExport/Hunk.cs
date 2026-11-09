namespace ICFTD.AmigaExport;

/// <summary>
/// Amiga hunk executable parser. Flattens code/data/bss hunks into one load image with
/// every 32-bit relocation applied, so the result can be imported as a plain binary.
/// </summary>
internal sealed class Hunk
{
    const uint HUNK_UNIT = 999, HUNK_NAME = 1000, HUNK_CODE = 1001, HUNK_DATA = 1002, HUNK_BSS = 1003;
    const uint HUNK_RELOC32 = 1004, HUNK_RELOC16 = 1005, HUNK_RELOC8 = 1006, HUNK_EXT = 1007;
    const uint HUNK_SYMBOL = 1008, HUNK_DEBUG = 1009, HUNK_END = 1010, HUNK_HEADER = 1011;
    const uint HUNK_OVERLAY = 1012, HUNK_BREAK = 1013, HUNK_RELOC32SHORT = 1020;

    public sealed class Segment
    {
        public int Index;
        public string Kind = "";
        public int Size;
        public int Offset;
        public int Address;
        public byte[] Data = [];
        public readonly List<(int Off, string Name)> Symbols = [];
    }

    public sealed class Relocation
    {
        public int Segment;
        public int Site;
        public int Target;
        public int Width;
        public int Value;
        public int HunkRef;
        public int RawValue;
    }

    readonly byte[] _d;
    int _p;

    public List<Segment> Segments { get; } = [];
    public List<Relocation> Relocations { get; } = [];
    public List<string> ResidentNames { get; } = [];
    public int Base { get; set; }
    public int ImageSize { get; private set; }
    public List<string> Log { get; } = [];

    public Hunk(byte[] data) => _d = data;

    uint U32() => ((uint)_d[_p++] << 24) | ((uint)_d[_p++] << 16) | ((uint)_d[_p++] << 8) | _d[_p++];
    ushort U16() => (ushort)((_d[_p++] << 8) | _d[_p++]);
    string Name()
    {
        uint n = U32();
        var chars = new char[n * 4];
        for (int i = 0; i < chars.Length; i++) chars[i] = (char)_d[_p++];
        return new string(chars).TrimEnd('\0');
    }

    /// <summary>Parses the file, lays the hunks out at <paramref name="baseAddress"/> and applies relocations.</summary>
    public void Parse(int baseAddress)
    {
        Base = baseAddress;
        if (U32() != HUNK_HEADER) throw new InvalidDataException("not an Amiga hunk executable");
        uint resName = U32();
        while (resName != 0)
        {
            var s = new char[resName * 4];
            for (int i = 0; i < s.Length; i++) s[i] = (char)_d[_p++];
            ResidentNames.Add(new string(s).TrimEnd('\0'));
            resName = U32();
        }
        uint tableSize = U32();
        uint first = U32();
        uint last = U32();
        var sizes = new int[tableSize];
        for (int i = 0; i < tableSize; i++) sizes[i] = (int)U32() * 4;

        // Hunk addresses are known up front from the header sizes, so a relocation can
        // reference a hunk that has not been read yet (the code hunk references data).
        var hunkAddr = new int[sizes.Length];
        for (int i = 0, cursor = baseAddress; i < sizes.Length; i++)
        {
            hunkAddr[i] = cursor;
            cursor += sizes[i];
        }
        ImageSize = hunkAddr[hunkAddr.Length - 1] + sizes[sizes.Length - 1] - baseAddress;

        int addr = baseAddress;
        var byIndex = new Dictionary<int, Segment>();
        Segment? cur = null;
        while (_p + 4 <= _d.Length)
        {
            uint type = U32();
            switch (type)
            {
                case HUNK_CODE:
                case HUNK_DATA:
                case HUNK_BSS:
                {
                    // The block size is what the file holds; the header size is what the loader
                    // allocates. They differ when a hunk carries extra zeroed memory (the data
                    // hunk declares 47932 bytes but only 19912 are stored).
                    int payload = (int)U32() * 4;
                    int idx = Segments.Count;
                    int alloc = idx < sizes.Length ? Math.Max(sizes[idx], payload) : payload;
                    if (idx < sizes.Length && sizes[idx] != payload)
                        Log.Add($"  hunk {idx}: header size {sizes[idx]}, stored payload {payload}");
                    cur = new Segment
                    {
                        Index = idx, Kind = type == HUNK_CODE ? "code" : type == HUNK_DATA ? "data" : "bss",
                        Size = alloc, Address = hunkAddr[idx], Offset = hunkAddr[idx] - baseAddress,
                        Data = new byte[alloc],
                    };
                    if (type != HUNK_BSS) Array.Copy(_d, _p, cur.Data, 0, Math.Min(payload, alloc));
                    _p += type == HUNK_BSS ? 0 : payload;
                    Segments.Add(cur);
                    byIndex[cur.Index] = cur;
                    if (idx == hunkAddr.Length - 1) ImageSize = cur.Address + alloc - baseAddress;
                    break;
                }
                case HUNK_RELOC32:
                case HUNK_RELOC32SHORT:
                {
                    if (cur is null) throw new InvalidDataException("relocation outside a hunk");
                    bool shortOffsets = type == HUNK_RELOC32SHORT;
                    while (true)
                    {
                        int groupAt = _p;
                        uint count = U32();
                        if (count == 0) break;
                        int target = (int)(U32() - first);
                        Log.Add($"  reloc32 group at file 0x{groupAt:X6}: hunk {cur.Index} -> ref {target + first}, {count} sites");
                        for (int i = 0; i < count; i++)
                        {
                            int off = shortOffsets ? U16() : (int)U32();
                            int site = cur.Address + off;
                            int raw = (cur.Data[off] << 24) | (cur.Data[off + 1] << 16) | (cur.Data[off + 2] << 8) | cur.Data[off + 3];
                            int value = target < 0 || target >= hunkAddr.Length ? cur.Address : hunkAddr[target];
                            Patch(cur, off, value);
                            Relocations.Add(new Relocation
                            {
                                Segment = cur.Index, Site = site, Target = value, Width = 4, HunkRef = target + (int)first, RawValue = raw,
                                Value = (cur.Data[off] << 24) | (cur.Data[off + 1] << 16) | (cur.Data[off + 2] << 8) | cur.Data[off + 3],
                            });
                        }
                    }
                    break;
                }
                case HUNK_RELOC16:
                case HUNK_RELOC8:
                {
                    if (cur is null) throw new InvalidDataException("relocation outside a hunk");
                    while (true)
                    {
                        uint count = U32();
                        if (count == 0) break;
                        int target = (int)(U32() - first);
                        int add = target < 0 || target >= hunkAddr.Length ? 0 : hunkAddr[target];
                        for (int i = 0; i < count; i++)
                        {
                            int off = (int)U32();
                            if (type == HUNK_RELOC16)
                            {
                                int v = (cur.Data[off] << 8) | cur.Data[off + 1];
                                v = (v & 0xFFFF) + add;
                                cur.Data[off] = (byte)(v >> 8);
                                cur.Data[off + 1] = (byte)v;
                            }
                            else
                            {
                                cur.Data[off] = (byte)(cur.Data[off] + add);
                            }
                            Relocations.Add(new Relocation
                            {
                                Segment = cur.Index, Site = cur.Address + off, Target = add,
                                Width = type == HUNK_RELOC16 ? 2 : 1,
                            });
                        }
                    }
                    break;
                }
                case HUNK_SYMBOL:
                {
                    if (cur is null) throw new InvalidDataException("symbols outside a hunk");
                    while (true)
                    {
                        uint n = U32();
                        if (n == 0) break;
                        var chars = new char[n * 4];
                        for (int i = 0; i < chars.Length; i++) chars[i] = (char)_d[_p++];
                        int value = (int)U32();
                        cur.Symbols.Add((value, new string(chars).TrimEnd('\0')));
                    }
                    break;
                }
                case HUNK_EXT:
                {
                    // Only common symbol definitions (EXT_SYMBOL/EXT_DEF/EXT_ABS) are useful here;
                    // external references are fully relocated by the loader, not by us.
                    while (true)
                    {
                        uint kind = U32();
                        if (kind == 0) break;
                        uint type2 = kind >> 24;
                        var names = new List<string>();
                        while (true)
                        {
                            uint n = U32();
                            if (n == 0) break;
                            var chars = new char[n * 4];
                            for (int i = 0; i < chars.Length; i++) chars[i] = (char)_d[_p++];
                            names.Add(new string(chars).TrimEnd('\0'));
                        }
                        switch (type2)
                        {
                            case 0:  // EXT_SYMBOL: one common symbol, followed by its value
                                if (cur is not null && names.Count > 0) cur.Symbols.Add(((int)U32(), names[0]));
                                break;
                            case 1:  // EXT_DEF: one shared symbol, no value
                            case 2:  // EXT_ABS
                            case 3:  // EXT_RES
                                if (cur is not null && type2 == 1 && names.Count > 0) cur.Symbols.Add((0, names[0]));
                                if (type2 != 1 && names.Count > 0) _ = names;  // no offset information
                                break;
                            default: // reference: no payload we care about
                                break;
                        }
                    }
                    break;
                }
                case HUNK_DEBUG:
                {
                    int size = (int)U32() * 4;
                    _p += size;
                    break;
                }
                case HUNK_END:
                case HUNK_BREAK:
                    cur = null;
                    break;
                case HUNK_NAME:
                    _ = Name();
                    break;
                case HUNK_OVERLAY:
                case HUNK_UNIT:
                    throw new InvalidDataException($"unsupported hunk type {type}");
                default:
                    throw new InvalidDataException($"unknown hunk type ({type:X8}) at file offset {_p - 4:X}");
            }
        }

        // ImageSize was already fixed from the header layout when the last hunk was read.
        Log.Add($"file {_d.Length} bytes, {Segments.Count} hunks, table {first}..{last}, image {ImageSize} bytes at 0x{Base:X}");
        foreach (var s in Segments)
            Log.Add($"  hunk {s.Index} {s.Kind,-4} 0x{s.Address:X6}..0x{s.Address + s.Size:X6}  {s.Size,8} bytes  {s.Symbols.Count} symbols");
        Log.Add($"{Relocations.Count} relocations, resident libs: {(ResidentNames.Count == 0 ? "-" : string.Join(", ", ResidentNames))}");
    }

    void Patch(Segment seg, int off, int value)
    {
        int v = ((seg.Data[off] << 24) | (seg.Data[off + 1] << 16) | (seg.Data[off + 2] << 8) | seg.Data[off + 3]) + value;
        seg.Data[off] = (byte)(v >> 24);
        seg.Data[off + 1] = (byte)(v >> 16);
        seg.Data[off + 2] = (byte)(v >> 8);
        seg.Data[off + 3] = (byte)v;
    }

    /// <summary>The flattened load image: all hunks, in order, at their final addresses.</summary>
    public byte[] Image()
    {
        var img = new byte[ImageSize];
        foreach (var s in Segments) Array.Copy(s.Data, 0, img, s.Offset, s.Size);
        return img;
    }

    /// <summary>
    /// Ghidra symbol file: one "address name" line per symbol plus one entry per hunk start,
    /// so the analysis has anchors even in a stripped executable.
    /// </summary>
    public string SymbolFile()
    {
        var lines = new List<string>();
        foreach (var s in Segments)
        {
            foreach (var (off, name) in s.Symbols)
                lines.Add($"{s.Address + off:X8} {name}");
            lines.Add($"{s.Address:X8} hunk{s.Index}_{s.Kind}");
        }
        return string.Join('\n', lines) + "\n";
    }

    /// <summary>Relocation list for Ghidra: "site size pointerValue hunkRef rawValue".</summary>
    public string RelocFile()
    {
        var lines = new List<string>();
        foreach (var r in Relocations)
            lines.Add($"{r.Site:X8} {r.Width} {r.Value:X8} {r.HunkRef:X2} {r.RawValue:X8}");
        return string.Join('\n', lines) + "\n";
    }
}
