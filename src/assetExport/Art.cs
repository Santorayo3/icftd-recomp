namespace ICFTD.AmigaExport
{
    /// <summary>
    /// Builds "AMIGA.ART": one handle-keyed 8-bit art pack for the whole game.
    /// Layout: "ARTC", u16 count, u16 pad, 768-byte DAC image (EGA 0..15, Amiga at 16..),
    /// then count * 12 entries { u32 handle, u16 w, u16 h, u16 paragraph, u16 size },
    /// then 16-byte-aligned picture data the paragraph fields point at.
    /// </summary>
    internal static class Art
    {
        public const int PaletteBase = 16;
        public const int TableOff = 8 + 768;
        public const int EntrySize = 12;

        public static int Build(IEnumerable<string> bankFiles, byte[] global, byte[] dac, string outPath,
                                string? manifestPath = null)
        {
            var pics = new List<(uint handle, int w, int h, byte[] px, string bank, string name, int seq)>();
            int seq = 0;

            foreach (string path in bankFiles)
            {
                ResBank bank;
                try { bank = new ResBank(File.ReadAllBytes(path)); } catch { continue; }
                string bankName = Path.GetFileName(path);
                byte[]? bankPal = Program.BankPalettePublic(bank);
                foreach (var e in bank.Entries)
                {
                    if (e.Name.EndsWith(".pal", StringComparison.OrdinalIgnoreCase)) continue;
                    var raw = bank.Slice(e);
                    var dec = Lz.Unpack(raw, out _) ?? raw;
                    var pic = Sms.Decode(dec, bankPal);
                    if (pic is null || pic.Width <= 0 || pic.Height <= 0) continue;
                    uint handle = ((uint)dec[4] << 24) | ((uint)dec[5] << 16) | ((uint)dec[6] << 8) | dec[7];
                    if (handle == 0 || handle > 0xFFFF) continue;
                    if (pic.Width * pic.Height > 0xFFFF) continue;
                    pics.Add((handle, pic.Width, pic.Height, Remap(pic, global), bankName, e.Name, seq++));
                }
            }

            // Handles are per bank and collide across banks, so duplicates are kept:
            // equal handles stay in bank/table order, which makes the first entry per
            // handle the same one an earlier deduplicating build would have picked.
            pics.Sort((x, y) => x.handle != y.handle ? x.handle.CompareTo(y.handle) : x.seq.CompareTo(y.seq));
            int head = TableOff + pics.Count * EntrySize;
            int pos = (head + 15) & ~15;
            int total = pos + pics.Sum(p => (p.px.Length + 15) & ~15);
            var file = new byte[total];

            file[0] = (byte)'A'; file[1] = (byte)'R'; file[2] = (byte)'T'; file[3] = (byte)'C';
            file[4] = (byte)(pics.Count & 0xFF); file[5] = (byte)(pics.Count >> 8);
            Buffer.BlockCopy(dac, 0, file, 8, Math.Min(768, dac.Length));

            var man = manifestPath is null ? null : new List<string> { "handle,bank,name,w,h,para,size" };
            for (int i = 0; i < pics.Count; i++)
            {
                var p = pics[i];
                int t = TableOff + i * EntrySize;
                Put32(file, t, p.handle);
                Put16(file, t + 4, p.w);
                Put16(file, t + 6, p.h);
                Put16(file, t + 8, pos >> 4);
                Put16(file, t + 10, p.px.Length);
                Buffer.BlockCopy(p.px, 0, file, pos, p.px.Length);
                man?.Add($"{p.handle:X4},{p.bank},{p.name},{p.w},{p.h},{pos >> 4},{p.px.Length}");
                pos += (p.px.Length + 15) & ~15;
            }
            Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(outPath))!);
            File.WriteAllBytes(outPath, file);
            if (man is not null)
            {
                Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(manifestPath!))!);
                File.WriteAllLines(manifestPath!, man);
            }
            return pics.Count;
        }

        /// <summary>
        /// Writes one picture out of a whole-game pack as its own single-entry ARTC pack, so the
        /// patch can read it into a small DOS block instead of loading the 4 MB pack.
        /// </summary>
        public static void BuildSingle(string packPath, string manifestPath, string outPath,
                                       string bank, string name)
        {
            var b = File.ReadAllBytes(packPath);
            if (b.Length < 8 || b[0] != (byte)'A' || b[1] != (byte)'R')
                throw new Exception($"{packPath} is not an ARTC pack");

            // Handle collisions across banks mean several rows can share a handle; the manifest
            // is the only place that says which paragraph is really this picture.
            var row = File.ReadLines(manifestPath)
                          .Skip(1)
                          .Select(l => l.Split(','))
                          .FirstOrDefault(f => f.Length >= 7 && f[1] == bank && f[2] == name)
                      ?? throw new Exception($"no {bank}/{name} in {manifestPath}");

            uint handle = uint.Parse(row[0], System.Globalization.NumberStyles.HexNumber);
            int w = int.Parse(row[3]), h = int.Parse(row[4]), para = int.Parse(row[5]), size = int.Parse(row[6]);
            if (size != w * h) throw new Exception($"{bank}/{name} is packed, only raw 8-bit pictures work");
            if (para * 16 + size > b.Length) throw new Exception($"{bank}/{name} lies outside the pack");

            int dataOff = (TableOff + EntrySize + 15) & ~15;
            var file = new byte[dataOff + ((size + 15) & ~15)];
            file[0] = (byte)'A'; file[1] = (byte)'R'; file[2] = (byte)'T'; file[3] = (byte)'C';
            file[4] = 1; file[5] = 0;
            Buffer.BlockCopy(b, 8, file, 8, 768);                       // the shared Amiga DAC
            Put32(file, TableOff, handle);
            Put16(file, TableOff + 4, w);
            Put16(file, TableOff + 6, h);
            Put16(file, TableOff + 8, dataOff >> 4);
            Put16(file, TableOff + 10, size);
            Buffer.BlockCopy(b, para * 16, file, dataOff, size);

            Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(outPath))!);
            File.WriteAllBytes(outPath, file);
            Console.WriteLine($"{Path.GetFileName(outPath)}: {bank}/{name} {w}x{h}, {file.Length} bytes");
        }

        /// <summary>
        /// Builds "SCENE.ART": 768-byte DAC image followed by one 320x200 picture in
        /// DAC indices 16.. - what PATCH256 blits over the reference scene.
        /// </summary>
        public static void BuildScene(string bankFile, string record, byte[] global, string outPath)
        {
            var bank = new ResBank(File.ReadAllBytes(bankFile));
            var e = bank.Find(record) ?? throw new Exception($"no resource {record}");
            var raw = bank.Slice(e);
            var dec = Lz.Unpack(raw, out _) ?? raw;
            var pic = Sms.Decode(dec, Program.BankPalettePublic(bank))
                      ?? throw new Exception($"{record} is not a decodable picture");
            if (pic.Width != 320 || pic.Height != 200)
                throw new Exception($"{record} is {pic.Width}x{pic.Height}, need 320x200");
            var dac = DacImage(global);
            var px = Remap(pic, global);
            var file = new byte[dac.Length + px.Length];
            Buffer.BlockCopy(dac, 0, file, 0, dac.Length);
            Buffer.BlockCopy(px, 0, file, dac.Length, px.Length);
            Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(outPath))!);
            File.WriteAllBytes(outPath, file);
        }

        /// <summary>Maps a picture's pixels onto DAC indices 16.. of the game-wide palette.</summary>
        static byte[] Remap(Sms.Picture pic, byte[] global)
        {
            var cache = new Dictionary<int, byte>();
            var outp = new byte[pic.Width * pic.Height];
            var pal = pic.Palette.Length >= 3 ? pic.Palette : Array.Empty<byte>();
            for (int i = 0; i < outp.Length; i++)
            {
                int v = pic.Indices[i], o = v * 3;
                int rgb = o + 2 < pal.Length ? (pal[o] << 16) | (pal[o + 1] << 8) | pal[o + 2] : 0;
                if (!cache.TryGetValue(rgb, out byte idx))
                {
                    idx = (byte)(PaletteBase + Stats.Nearest(global, (rgb >> 16) & 0xFF, (rgb >> 8) & 0xFF, rgb & 0xFF));
                    cache[rgb] = idx;
                }
                outp[i] = idx;
            }
            return outp;
        }

        /// <summary>768-byte VGA DAC image: the original EGA colours first, the Amiga palette at 16..</summary>
        public static byte[] DacImage(byte[] global)
        {
            var dac = new byte[768];
            var ega = DosPlanar.VgaPalette;
            for (int i = 0; i < ega.Length; i++) dac[i] = (byte)(ega[i] >> 2);
            for (int i = 0; i < global.Length && PaletteBase * 3 + i < dac.Length; i++)
                dac[PaletteBase * 3 + i] = (byte)(global[i] >> 2);
            return dac;
        }

        static void Put16(byte[] b, int o, int v) { b[o] = (byte)v; b[o + 1] = (byte)(v >> 8); }

        static void Put32(byte[] b, int o, uint v)
        {
            b[o] = (byte)v; b[o + 1] = (byte)(v >> 8); b[o + 2] = (byte)(v >> 16); b[o + 3] = (byte)(v >> 24);
        }
    }
}
