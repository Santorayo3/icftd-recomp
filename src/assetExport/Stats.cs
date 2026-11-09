namespace ICFTD.AmigaExport
{
    /// <summary>
    /// Whole-game survey: how many distinct colours the Amiga art needs, and how many
    /// 8-bit pixels it takes. Decides whether one global palette fits in DAC 16..255.
    /// </summary>
    internal static class Stats
    {
        public sealed class Result
        {
            public List<byte> Merged = new();
            public int Pictures, Pixels;
            public readonly SortedDictionary<string, int> PerBankColours = new();
            public readonly Dictionary<int, long> Weight = new();   // packed rgb -> pixels
        }

        public static Result Run(IEnumerable<string> bankFiles)
        {
            var r = new Result();
            var index = new Dictionary<int, int>();   // packed rgb -> merged index
            foreach (string path in bankFiles)
            {
                ResBank bank;
                try { bank = new ResBank(File.ReadAllBytes(path)); } catch { continue; }
                byte[]? bankPal = null;
                foreach (var e in bank.Entries)
                {
                    if (!e.Name.EndsWith(".pal", StringComparison.OrdinalIgnoreCase)) continue;
                    if (e.Name.Equals("main.pal", StringComparison.OrdinalIgnoreCase)) { bankPal = Program.PaletteOfPublic(bank.Slice(e)); break; }
                    bankPal ??= Program.PaletteOfPublic(bank.Slice(e));
                }
                var local = new HashSet<int>();
                foreach (var e in bank.Entries)
                {
                    var bytes = bank.Slice(e);
                    var dec = Lz.Unpack(bytes, out _) ?? bytes;
                    var pic = Sms.Decode(dec, bankPal);
                    if (pic is null) continue;
                    r.Pictures++;
                    r.Pixels += pic.Width * pic.Height;
                    var pal = pic.Palette.Length >= 3 ? pic.Palette : bankPal;
                    if (pal is null) continue;
                    foreach (byte v in pic.Indices)
                    {
                        int off = v * 3;
                        if (off + 2 >= pal.Length) continue;
                        int rgb = (pal[off] << 16) | (pal[off + 1] << 8) | pal[off + 2];
                        local.Add(rgb);
                        r.Weight[rgb] = (r.Weight.TryGetValue(rgb, out long w) ? w : 0) + 1;
                        if (!index.ContainsKey(rgb))
                        {
                            index[rgb] = r.Merged.Count / 3;
                            r.Merged.Add(pal[off]); r.Merged.Add(pal[off + 1]); r.Merged.Add(pal[off + 2]);
                        }
                    }
                }
                r.PerBankColours[Path.GetFileName(path)] = local.Count;
            }
            return r;
        }

        /// <summary>Colours sorted by pixel count, largest first.</summary>
        public static List<KeyValuePair<int, long>> ByUsage(Result r) =>
            r.Weight.OrderByDescending(kv => kv.Value).ToList();

        /// <summary>The <paramref name="budget"/> most used colours, as rgb triples.</summary>
        public static byte[] GlobalPalette(Result r, int budget)
        {
            var outp = new List<byte>(budget * 3);
            foreach (var kv in ByUsage(r).Take(budget))
            {
                outp.Add((byte)((kv.Key >> 16) & 0xFF));
                outp.Add((byte)((kv.Key >> 8) & 0xFF));
                outp.Add((byte)(kv.Key & 0xFF));
            }
            return outp.ToArray();
        }

        /// <summary>Index of the palette entry closest to rgb; exact matches win over dithering.</summary>
        public static int Nearest(byte[] pal, int r, int g, int b)
        {
            int best = 0, bestD = int.MaxValue;
            for (int i = 0; i < pal.Length / 3; i++)
            {
                int dr = r - pal[i * 3], dg = g - pal[i * 3 + 1], db = b - pal[i * 3 + 2];
                int d = 2 * dr * dr + 3 * dg * dg + db * db;   // rough luma weighting
                if (d < bestD) { bestD = d; best = i; if (d == 0) break; }
            }
            return best;
        }

        /// <summary>Greedy clustering: colours within <paramref name="tol"/> of a cluster centre join it.</summary>
        public static List<byte> Cluster(List<byte> rgb, int tol, out int[] map)
        {
            var centres = new List<int>();          // packed rgb
            map = new int[rgb.Count / 3];
            for (int i = 0; i < rgb.Count / 3; i++)
            {
                int r = rgb[i * 3], g = rgb[i * 3 + 1], b = rgb[i * 3 + 2];
                int best = -1, bestD = int.MaxValue;
                for (int c = 0; c < centres.Count; c++)
                {
                    int dr = Math.Abs(r - ((centres[c] >> 16) & 0xFF));
                    int dg = Math.Abs(g - ((centres[c] >> 8) & 0xFF));
                    int db = Math.Abs(b - (centres[c] & 0xFF));
                    int d = Math.Max(dr, Math.Max(dg, db));   // Chebyshev keeps steps even
                    if (d <= tol && d < bestD) { bestD = d; best = c; }
                }
                if (best < 0) { centres.Add((r << 16) | (g << 8) | b); best = centres.Count - 1; }
                map[i] = best;
            }
            var outp = new List<byte>(centres.Count * 3);
            foreach (int c in centres)
            {
                outp.Add((byte)((c >> 16) & 0xFF)); outp.Add((byte)((c >> 8) & 0xFF)); outp.Add((byte)(c & 0xFF));
            }
            return outp;
        }
    }
}
