namespace ICFTD.AmigaExport;

internal sealed class AmigaEntry
{
    public string Name = "";
    public bool IsDir;
    public int Block;
    public int FirstData;
    public int Size;
    public bool Orphan;                       /* unreferenced by the directory */
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
    readonly HashSet<int> visited = new();

    /// <summary>Volume label from the root block ("Desert1" ...).</summary>
    public string VolumeName => ReadName(a.Offset(RootBlock));

    public AmigaEntry ReadRoot()
    {
        var e = ReadDir(RootBlock, "");
        /* Disk 3's directory does not link WANI, hurt2, jet and stab1, yet the game opens
         * Desert3:WANI by name (the flight routine, FUN_000107A6) - their header blocks and data
         * chains are complete on the disk, only the directory entry is gone. Recover every header
         * block no directory reaches, so the data set is as complete as the disk actually is. */
        foreach (var orphan in ReadOrphans())
        {
            orphan.Orphan = true;
            e.Children.Add(orphan);
        }
        return e;
    }

    /// <summary>File headers no directory chain reaches, with a complete data chain.</summary>
    List<AmigaEntry> ReadOrphans()
    {
        var found = new List<AmigaEntry>();
        for (int b = 1; b < a.BlockCount; b++)
        {
            if (visited.Contains(b)) continue;
            int o = a.Offset(b);
            if (a.I32(o) != THeader) continue;
            string name = ReadName(o);
            if (name.Length == 0 || name.Length > 30 || name.Any(ch => ch < 32 || ch > 126)) continue;
            int firstData = a.I32(o + 16);
            if (firstData == 0)
            {                                        /* a directory whose own entry was lost */
                var dir = ReadDir(b, name);
                if (dir.Children.Count > 0) { dir.Orphan = true; found.Add(dir); }
                continue;
            }
            int size = a.I32(o + 324);
            if (size <= 0) continue;
            var e = new AmigaEntry { Name = name, Block = b, FirstData = firstData, Size = size };
            if (ReadFile(e).Length != size) continue;       /* incomplete: not a usable file */
            found.Add(e);
        }
        return found;
    }

    AmigaEntry ReadDir(int block, string name)
    {
        var e = new AmigaEntry { Name = name, IsDir = true, Block = block };
        int o = a.Offset(block);
        int htSize = a.I32(o + 12);
        if (a.I32(o) != THeader) return e;
        visited.Add(block);
        /* AmigaDOS 1.x wrote ht_size as 0 and the reader was expected to know the table is the
         * standard 72 buckets. Every subdirectory of these disks is like that; the root is not. */
        if (htSize <= 0 || htSize > 200) htSize = 72;

        for (int i = 0; i < htSize; i++)
        {
            int b = a.I32(o + 24 + i * 4);
            int guard = 0;
            while (b > 0 && b < a.BlockCount && guard++ < 200)
            {
                int bo = a.Offset(b);
                if (a.I32(bo) != THeader) break;
                visited.Add(b);
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
