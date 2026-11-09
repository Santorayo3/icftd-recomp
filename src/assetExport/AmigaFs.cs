namespace ICFTD.AmigaExport;

internal sealed class AmigaEntry
{
    public string Name = "";
    public bool IsDir;
    public int Block;
    public int FirstData;
    public int Size;
    public List<AmigaEntry> Children = new();
}

/// <summary>
/// Minimal AmigaDOS OFS reader: root hash table, header blocks, data chains.
/// These disks carry no usable sec_type, so files are told apart by first_data.
/// </summary>
internal sealed class AmigaFs(Adf adf)
{
    const int RootBlock = 880;
    const int THeader = 2;
    const int TData = 8;

    readonly Adf a = adf;
    public bool Ffs => a.Ffs;

    /// <summary>Volume label from the root block ("Desert1" ...).</summary>
    public string VolumeName => ReadName(a.Offset(RootBlock));

    public AmigaEntry ReadRoot() => ReadDir(RootBlock, "");

    AmigaEntry ReadDir(int block, string name)
    {
        var e = new AmigaEntry { Name = name, IsDir = true, Block = block };
        int o = a.Offset(block);
        int htSize = a.I32(o + 12);
        if (a.I32(o) != THeader || htSize < 0 || htSize > 200) return e;

        for (int i = 0; i < htSize; i++)
        {
            int b = a.I32(o + 24 + i * 4);
            int guard = 0;
            while (b > 0 && b < a.BlockCount && guard++ < 200)
            {
                int bo = a.Offset(b);
                if (a.I32(bo) != THeader) break;
                int firstData = a.I32(bo + 16);
                string n = ReadName(bo);
                if (firstData == 0)
                    e.Children.Add(ReadDir(b, n));
                else
                    e.Children.Add(new AmigaEntry
                    {
                        Name = n, Block = b, FirstData = firstData, Size = a.I32(bo + 320)
                    });
                b = a.I32(bo + 416);
            }
        }
        return e;
    }

    string ReadName(int headerOff)
    {
        int len = a.Byte(headerOff + 432);
        if (len < 0 || len > 30) len = 30;
        var chars = new char[len];
        for (int i = 0; i < len; i++) chars[i] = (char)a.Byte(headerOff + 433 + i);
        return new string(chars);
    }

    /// <summary>Walks the OFS data chain; each data block carries a 24-byte header.</summary>
    public byte[] ReadFile(AmigaEntry e)
    {
        var ms = new MemoryStream();
        int block = e.FirstData;
        int guard = 0;
        while (block > 0 && block < a.BlockCount && guard++ < 4000)
        {
            int o = a.Offset(block);
            if (a.I32(o) != TData) break;
            int size = a.I32(o + 12);
            if (size < 0 || size > 488) break;
            ms.Write(a.Copy(o + 24, size));
            block = a.I32(o + 16);
        }
        var all = ms.ToArray();
        if (e.Size > 0 && all.Length > e.Size) return all.AsSpan(0, e.Size).ToArray();
        return all;
    }
}
