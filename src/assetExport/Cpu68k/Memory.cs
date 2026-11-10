namespace ICFTD.AmigaExport.Cpu68k;

/// <summary>One memory write as seen by the interpreter.</summary>
public readonly record struct WriteRecord(uint Pc, uint Addr, int Size, uint Value);

/// <summary>A contiguous run of memory whose contents changed during a run.</summary>
public sealed record MemRange(uint Addr, byte[] Bytes);

/// <summary>
/// Flat 24-bit address space, big-endian. The dshell image is loaded at address 0, so an
/// absolute address is also an image offset.
///
/// Change detection is page based (256-byte pages, copy-on-first-write): a run only ever
/// touches a few kilobytes, so the diff stays cheap even when sweeping hundreds of
/// functions. Writes can additionally be logged with the PC that made them.
/// </summary>
public sealed class Memory
{
    /// <summary>24-bit address space (16 MB).</summary>
    public const int Size = 0x0100_0000;

    const int PageShift = 8;
    const int PageSize = 1 << PageShift;
    const int PageCount = Size >> PageShift;

    readonly byte[] _ram = new byte[Size];
    readonly byte[] _before = new byte[Size];
    readonly bool[] _saved = new bool[PageCount];
    bool _armed;

    /// <summary>Address of the instruction performing the current write (set by the CPU).</summary>
    public uint Pc;

    /// <summary>Log every write into <see cref="Writes"/>; off by default so runs stay cheap.</summary>
    public bool TraceWrites { get; set; }

    public long WriteCount { get; private set; }
    public List<WriteRecord> Writes { get; } = new();

    /// <summary>Collect the address of every operand read into <see cref="Reads"/>.</summary>
    public bool TraceReads { get; set; }

    public HashSet<uint> Reads { get; } = new();

    public static uint Mask(uint addr) => addr & 0x00FF_FFFFu;

    // ---- reads ---------------------------------------------------------------

    public byte Read8(uint addr)
    {
        if (TraceReads) Reads.Add(Mask(addr));
        return _ram[Mask(addr)];
    }

    public ushort Read16(uint addr)
    {
        addr = Mask(addr);
        if (TraceReads) Reads.Add(addr);
        return (ushort)((_ram[addr] << 8) | _ram[Mask(addr + 1)]);
    }

    public uint Read32(uint addr)
    {
        addr = Mask(addr);
        if (TraceReads) Reads.Add(addr);
        return ((uint)_ram[addr] << 24) | ((uint)_ram[addr + 1] << 16) |
               ((uint)_ram[addr + 2] << 8) | _ram[addr + 3];
    }

    public uint Read(uint addr, int size) => size switch
    {
        1 => Read8(addr),
        2 => Read16(addr),
        4 => Read32(addr),
        _ => throw new ArgumentOutOfRangeException(nameof(size), size, "operand size must be 1, 2 or 4"),
    };

    public byte[] Slice(uint addr, int length)
    {
        var buf = new byte[length];
        for (int i = 0; i < length; i++) buf[i] = _ram[Mask(addr + (uint)i)];
        return buf;
    }

    // ---- writes --------------------------------------------------------------

    public void Write8(uint addr, byte value)
    {
        addr = Mask(addr);
        WriteCount++;
        if (TraceWrites) Writes.Add(new WriteRecord(Pc, addr, 1, value));
        SavePage(addr, 1);
        _ram[addr] = value;
    }

    public void Write16(uint addr, ushort value)
    {
        addr = Mask(addr);
        WriteCount++;
        if (TraceWrites) Writes.Add(new WriteRecord(Pc, addr, 2, value));
        SavePage(addr, 2);
        _ram[addr] = (byte)(value >> 8);
        _ram[Mask(addr + 1)] = (byte)value;
    }

    public void Write32(uint addr, uint value)
    {
        addr = Mask(addr);
        WriteCount++;
        if (TraceWrites) Writes.Add(new WriteRecord(Pc, addr, 4, value));
        SavePage(addr, 4);
        _ram[addr] = (byte)(value >> 24);
        _ram[Mask(addr + 1)] = (byte)(value >> 16);
        _ram[Mask(addr + 2)] = (byte)(value >> 8);
        _ram[Mask(addr + 3)] = (byte)value;
    }

    public void Write(uint addr, int size, uint value)
    {
        switch (size)
        {
            case 1: Write8(addr, (byte)value); break;
            case 2: Write16(addr, (ushort)value); break;
            case 4: Write32(addr, value); break;
            default: throw new ArgumentOutOfRangeException(nameof(size), size, "operand size must be 1, 2 or 4");
        }
    }

    // ---- bulk ----------------------------------------------------------------

    public void Load(uint addr, ReadOnlySpan<byte> data)
    {
        for (int i = 0; i < data.Length; i++) _ram[Mask(addr + (uint)i)] = data[i];
    }

    public void Fill(uint addr, int length, byte value)
    {
        for (int i = 0; i < length; i++) _ram[Mask(addr + (uint)i)] = value;
    }

    /// <summary>Clears the whole space; used between sweep entries so runs stay independent.</summary>
    public void Clear()
    {
        Array.Clear(_ram);
        Array.Clear(_before);
        Array.Clear(_saved);
        Writes.Clear();
        Reads.Clear();
        WriteCount = 0;
        _armed = false;
    }

    // ---- change detection ----------------------------------------------------

    /// <summary>Starts collecting the original contents of every page that gets written.</summary>
    public void Snapshot()
    {
        Array.Clear(_saved);
        WriteCount = 0;
        _armed = true;
    }

    void SavePage(uint addr, int size)
    {
        if (!_armed) return;
        int first = (int)(Mask(addr) >> PageShift);
        int last = (int)(Mask(addr + (uint)size - 1) >> PageShift);
        for (int page = first; page <= last; page++)
        {
            if (_saved[page]) continue;
            _saved[page] = true;
            Array.Copy(_ram, page << PageShift, _before, page << PageShift, PageSize);
        }
    }

    /// <summary>Every run of bytes that differs from the snapshot, ascending by address.</summary>
    public List<MemRange> Modified(int maxRanges = 4096)
    {
        var ranges = new List<MemRange>();
        if (!_armed) return ranges;

        /* Only saved pages have a "before" image, so a run must not span a page that was never
         * written: its bytes are not part of the change, and bridging them prints half the address
         * space as modified. Runs that do continue across adjacent saved pages stay one range. */
        int start = -1, end = -1;
        for (int page = 0; page < PageCount; page++)
        {
            int baseAddr = page << PageShift;
            if (!_saved[page])
            {
                if (start >= 0)
                {
                    AddRange(ranges, start, end - start);
                    start = -1; end = -1;
                    if (ranges.Count >= maxRanges) return ranges;
                }
                continue;
            }
            for (int i = 0; i < PageSize; i++)
            {
                int a = baseAddr + i;
                if (_ram[a] != _before[a])
                {
                    if (start < 0) start = a;
                    end = a + 1;
                }
                else if (start >= 0)
                {
                    AddRange(ranges, start, end - start);
                    start = -1; end = -1;
                    if (ranges.Count >= maxRanges) return ranges;
                }
            }
        }
        if (start >= 0 && ranges.Count < maxRanges) AddRange(ranges, start, end - start);
        return ranges;
    }

    void AddRange(List<MemRange> ranges, int start, int length)
    {
        var bytes = new byte[length];
        Array.Copy(_ram, start, bytes, 0, length);
        ranges.Add(new MemRange((uint)start, bytes));
    }
}
