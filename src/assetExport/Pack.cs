using System.Text;

namespace ICFTD.AmigaExport;

/// <summary>
/// Builds <c>game.pak</c>, the single asset file the recompilation reads at run time.
///
/// Layout (all little endian):
/// <code>
///  0x00  u32 magic 'ICFP'        0x04 u16 version
///  0x06  u16 entry_count         0x08 u32 entries_offset (0x18)
///  0x0C  u32 data_offset         0x10 u32 names_offset   0x14 u32 names_size
///  0x18  entries: u32 name_hash, u32 offset, u32 size, u8 type, u8 flags, u16 aux
///        data blobs (4-byte aligned)
///        names: NUL separated, one per entry, in entry order
/// </code>
///
/// Pictures are stored chunky (1 byte per pixel) and palettes are deduplicated, so the
/// game never has to unpack planar data.  Everything else - scripts, level data, samples -
/// is stored byte identical to the Amiga files.
/// </summary>
internal static class Pack
{
    public const uint Magic = 0x50464349;      // 'I','C','F','P'
    public const ushort Version = 2;

    public const byte TypePicture = 1;
    public const byte TypePalette = 2;
    public const byte TypeScript = 3;
    public const byte TypeRaw = 4;

    sealed class Item
    {
        public Item(string name, byte type, byte[] data)
        {
            Name = name; Type = type; Data = data;
        }
        public string Name;
        public byte Type;
        public byte[] Data;
        public ushort Aux;
    }

    /// <summary>FNV-1a over the ASCII name; the C side uses the same function.</summary>
    public static uint NameHash(string name)
    {
        uint h = 2166136261;
        foreach (char ch in name) { h ^= (byte)ch; h *= 16777619; }
        return h;
    }

    /// <summary>Reads every disk image, decodes every resource and writes the pack.</summary>
    public static int Build(string diskDir, string outFile, out string report, bool verbose = false)
    {
        var items = new List<Item>();
        var paletteIds = new Dictionary<string, int>(StringComparer.Ordinal);   // content key -> entry index
        int pictures = 0, scripts = 0, raws = 0, palettes = 0, undecoded = 0;
        var sb = new StringBuilder();

        var images = Directory.GetFiles(diskDir)
            .Where(f => new FileInfo(f).Length >= 100 * Adf.BlockSize
                        && new FileInfo(f).Length % Adf.BlockSize == 0)
            .OrderBy(f => Path.GetFileName(f), StringComparer.OrdinalIgnoreCase)
            .ToList();
        if (images.Count == 0) throw new Exception($"no disk images in {diskDir}");

        foreach (string image in images)
        {
            var adf = new Adf(image);
            var fs = new AmigaFs(adf);
            string volume = fs.VolumeName;
            sb.AppendLine($"{Path.GetFileName(image)}: volume '{volume}'");

            foreach (var file in fs.ReadRoot().Children)
            {
                if (file.IsDir)
                {
                    sb.AppendLine($"  (skipping directory '{file.Name}')");
                    continue;
                }
                // dshell is the program itself; the installer scripts are AmigaDOS text.
                if (file.Name.Equals("dshell", StringComparison.OrdinalIgnoreCase)
                    || file.Name.StartsWith("HD", StringComparison.OrdinalIgnoreCase))
                    continue;
                if (file.Name.Equals("HDesert", StringComparison.OrdinalIgnoreCase))
                    continue;

                byte[] data = fs.ReadFile(file);
                string fileKey = volume + "/" + file.Name;

                ResBank? bank = null;
                try
                {
                    var b = new ResBank(data);
                    if (b.Entries.Count > 0 && b.Base <= data.Length) bank = b;
                }
                catch { bank = null; }

                if (bank is null)
                {
                    items.Add(new Item(fileKey, TypeRaw, data));
                    raws++;
                    sb.AppendLine($"  raw      {fileKey,-28} {data.Length,8} bytes");
                    continue;
                }

                byte[]? bankPal = Program.BankPalettePublic(bank);
                int inBank = 0, picOk = 0;
                foreach (var e in bank.Entries)
                {
                    string name = fileKey + "/" + e.Name;
                    byte[] payload = bank.Slice(e);
                    byte[] dec = Lz.Unpack(payload, out string lzNote) ?? payload;

                    if (e.Name.EndsWith(".pal", StringComparison.OrdinalIgnoreCase))
                    {
                        byte[]? pal = Program.PaletteOfPublic(dec);
                        if (pal is not null && pal.Length >= 48)
                        {
                            items.Add(new Item(name, TypePalette, PalettePayload(pal)));
                            palettes++;
                        }
                        inBank++;
                        continue;
                    }
                    if (dec.Length >= 4 && dec[0] == 'M' && dec[1] == 'o' && dec[2] == 'v' && dec[3] == 'E')
                    {
                        items.Add(new Item(name, TypeScript, dec));
                        scripts++;
                        inBank++;
                        continue;
                    }
                    var pic = Sms.Decode(dec, bankPal);
                    if (pic is null || pic.Indices.Length != pic.Width * pic.Height)
                    {
                        items.Add(new Item(name, TypeRaw, dec));
                        raws++;
                        undecoded++;
                        inBank++;
                        if (verbose) sb.AppendLine($"  ?raw     {name,-46} {dec.Length,7} bytes ({lzNote})");
                        continue;
                    }

                    string key = PalKey(pic.Palette);
                    if (!paletteIds.TryGetValue(key, out int palId))
                    {
                        palId = items.Count;
                        items.Add(new Item($"palette/{paletteIds.Count}", TypePalette, PalettePayload(pic.Palette)));
                        paletteIds[key] = palId;
                        palettes++;
                    }
                    items.Add(new Item(name, TypePicture, PicturePayload(pic, palId)));
                    pictures++;
                    picOk++;
                    inBank++;
                    if (verbose)
                        sb.AppendLine($"  pic      {name,-46} {pic.Width,4}x{pic.Height,-4} p{pic.Planes} {pic.Colours,3} cols  {pic.Note}");
                }
                sb.AppendLine($"  bank     {fileKey,-28} {bank.Entries.Count,4} entries: {picOk} pictures, {inBank - picOk} other");
            }
        }

        Write(outFile, items);

        report = sb.ToString() +
                 $"pack: {items.Count} entries, {pictures} pictures, {palettes} palettes, " +
                 $"{scripts} scripts, {raws} raw ({undecoded} undecoded SMS), " +
                 $"{new FileInfo(outFile).Length / 1024} KB -> {outFile}";
        return items.Count;
    }

    static string PalKey(byte[] pal)
    {
        uint h = 2166136261;
        foreach (byte b in pal) { h ^= b; h *= 16777619; }
        return pal.Length + ":" + h.ToString("X8");
    }

    static byte[] PalettePayload(byte[] rgb)
    {
        var d = new byte[2 + rgb.Length];
        d[0] = (byte)(rgb.Length / 3 >> 8); d[1] = (byte)(rgb.Length / 3);
        Buffer.BlockCopy(rgb, 0, d, 2, rgb.Length);
        return d;
    }

    static byte[] PicturePayload(Sms.Picture pic, int palId)
    {
        var d = new byte[20 + pic.Indices.Length];
        d[0] = (byte)(pic.Width >> 8); d[1] = (byte)pic.Width;
        d[2] = (byte)(pic.Height >> 8); d[3] = (byte)pic.Height;
        d[4] = (byte)(palId >> 8); d[5] = (byte)palId;
        d[6] = (byte)pic.Planes;
        d[7] = 0;
        /* hot spot, as the SMS header words at +12/+14: FUN_0001DBD0 subtracts it */
        d[8] = (byte)(pic.HotX >> 8); d[9] = (byte)pic.HotX;
        d[10] = (byte)(pic.HotY >> 8); d[11] = (byte)pic.HotY;
        /* Sms_Load stores the key word at bitmap+6 (the blitter mask is built from it)
         * and the plane channel at bitmap+0x34 (the node's default channel). */
        d[12] = (byte)(pic.Key >> 8); d[13] = (byte)pic.Key;
        d[14] = (byte)(pic.Channel >> 24); d[15] = (byte)(pic.Channel >> 16);
        d[16] = (byte)(pic.Channel >> 8); d[17] = (byte)pic.Channel;
        Buffer.BlockCopy(pic.Indices, 0, d, 20, pic.Indices.Length);
        return d;
    }

    static void Write(string path, List<Item> items)
    {
        Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(path))!);
        const int headerSize = 0x18;
        int entriesAt = headerSize;
        int dataAt = headerSize + items.Count * 16;
        var offsets = new int[items.Count];
        int cursor = dataAt;
        for (int i = 0; i < items.Count; i++)
        {
            offsets[i] = cursor;
            cursor += (items[i].Data.Length + 3) & ~3;
        }
        int namesAt = cursor;
        var namesBlob = new List<byte>();
        var hashes = new uint[items.Count];
        for (int i = 0; i < items.Count; i++)
        {
            hashes[i] = NameHash(items[i].Name);
            namesBlob.AddRange(Encoding.ASCII.GetBytes(items[i].Name));
            namesBlob.Add(0);
        }

        using var fs = new FileStream(path, FileMode.Create, FileAccess.Write);
        using var w = new BinaryWriter(fs);
        w.Write(Magic);
        w.Write(Version);
        w.Write((ushort)items.Count);
        w.Write((uint)entriesAt);
        w.Write((uint)dataAt);
        w.Write((uint)namesAt);
        w.Write((uint)namesBlob.Count);
        for (int i = 0; i < items.Count; i++)
        {
            w.Write(hashes[i]);
            w.Write((uint)offsets[i]);
            w.Write((uint)items[i].Data.Length);
            w.Write(items[i].Type);
            w.Write((byte)0);
            w.Write(items[i].Aux);
        }
        for (int i = 0; i < items.Count; i++)
        {
            w.Write(items[i].Data);
            int pad = ((items[i].Data.Length + 3) & ~3) - items[i].Data.Length;
            for (int p = 0; p < pad; p++) w.Write((byte)0);
        }
        w.Write(namesBlob.ToArray());
    }

    /// <summary>Dumps the entry table of a pack; used by <c>ICFTD.AmigaExport pakinfo</c>.</summary>
    public static string Info(string pakFile, int limit = 0)
    {
        var d = File.ReadAllBytes(pakFile);
        uint magic = BitConverter.ToUInt32(d, 0);
        if (magic != Magic) throw new Exception("not a game.pak");
        int version = BitConverter.ToUInt16(d, 4);
        int count = BitConverter.ToUInt16(d, 6);
        int entriesAt = (int)BitConverter.ToUInt32(d, 8);
        int namesAt = (int)BitConverter.ToUInt32(d, 0x10);
        int namesSize = (int)BitConverter.ToUInt32(d, 0x14);

        var names = new List<string>();
        int p = namesAt;
        while (p < namesAt + namesSize)
        {
            int end = Array.IndexOf(d, (byte)0, p);
            if (end < 0) break;
            names.Add(Encoding.ASCII.GetString(d, p, end - p));
            p = end + 1;
        }

        var sb = new StringBuilder();
        sb.AppendLine($"game.pak v{version}: {count} entries, {d.Length} bytes, {d.Length / 1024} KB");
        int shown = 0;
        for (int i = 0; i < count; i++)
        {
            int o = entriesAt + i * 16;
            uint hash = BitConverter.ToUInt32(d, o);
            int off = (int)BitConverter.ToUInt32(d, o + 4);
            int size = (int)BitConverter.ToUInt32(d, o + 8);
            byte type = d[o + 12];
            string kind = type switch
            {
                TypePicture => "pic ",
                TypePalette => "pal ",
                TypeScript => "scp ",
                TypeRaw => "raw ",
                _ => "??? "
            };
            string extra = "";
            if (type == TypePicture)
            {
                int w = (d[off] << 8) | d[off + 1];
                int h = (d[off + 2] << 8) | d[off + 3];
                int pal = (d[off + 4] << 8) | d[off + 5];
                extra = $" {w}x{h} pal={pal}";
            }
            if (limit > 0 && shown >= limit) continue;
            sb.AppendLine($"  {i,4} {kind}{size,8} @{off:X8} {hash:X8}  {(i < names.Count ? names[i] : "?")}{extra}");
            shown++;
        }
        if (limit > 0 && count > limit) sb.AppendLine($"  ... {count - limit} more");
        return sb.ToString();
    }
}
