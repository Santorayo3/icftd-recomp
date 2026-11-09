namespace ICFTD.AmigaExport;

internal sealed class ResEntry
{
    public string Name = "";
    public int Offset;
    public int Size;
    public int AbsOffset;   // absolute file offset of the data
}

/// <summary>
/// Cinemaware resource bank: u16 count, u32 data base, then per entry a NUL-terminated
/// name with a u32 offset (relative to the base) and a u32 size, both big-endian.
/// </summary>
internal sealed class ResBank
{
    public readonly byte[] Data;
    public int Base;
    public readonly List<ResEntry> Entries = new();

    public ResBank(byte[] data)
    {
        Data = data;
        if (data.Length < 6) return;
        int count = (data[0] << 8) | data[1];
        int tableSize = (data[2] << 24) | (data[3] << 16) | (data[4] << 8) | data[5];
        Base = 6 + tableSize;   // payload starts right after the name table

        int p = 6;
        for (int i = 0; i < count && p < data.Length; i++)
        {
            int start = p;
            while (p < data.Length && data[p] != 0) p++;
            string name = System.Text.Encoding.ASCII.GetString(data, start, p - start);
            p++;
            if (p + 8 > data.Length) break;
            int off = (data[p] << 24) | (data[p + 1] << 16) | (data[p + 2] << 8) | data[p + 3];
            int size = (data[p + 4] << 24) | (data[p + 5] << 16) | (data[p + 6] << 8) | data[p + 7];
            p += 8;
            Entries.Add(new ResEntry { Name = name, Offset = off, Size = size, AbsOffset = Base + off });
        }
    }

    public ResEntry? Find(string name) =>
        Entries.FirstOrDefault(e => string.Equals(e.Name, name, StringComparison.OrdinalIgnoreCase));

    public byte[] Slice(ResEntry e)
    {
        int off = Math.Clamp(e.AbsOffset, 0, Data.Length);
        int len = Math.Clamp(e.Size, 0, Data.Length - off);
        return Data.AsSpan(off, len).ToArray();
    }
}
